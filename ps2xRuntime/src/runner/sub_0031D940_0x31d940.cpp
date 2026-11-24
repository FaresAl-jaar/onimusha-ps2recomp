#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031D940
// Address: 0x31d940 - 0x31d9c0
void sub_0031D940_0x31d940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D940_0x31d940");
#endif

    switch (ctx->pc) {
        case 0x31d988u: goto label_31d988;
        default: break;
    }

    ctx->pc = 0x31d940u;

    // 0x31d940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31d940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31d944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31d944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31d948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31d948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31d94c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31d94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31d950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31d950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31d954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31d958: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31d958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d95c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D95Cu;
    {
        const bool branch_taken_0x31d95c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D95Cu;
        // 0x31d960: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d95c) {
            ctx->pc = 0x31D970u;
            goto label_31d970;
        }
    }
    ctx->pc = 0x31D964u;
    // 0x31d964: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31D964u;
    {
        const bool branch_taken_0x31d964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D964u;
        // 0x31d968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d964) {
            ctx->pc = 0x31D9A8u;
            goto label_31d9a8;
        }
    }
    ctx->pc = 0x31D96Cu;
    // 0x31d96c: 0x0  nop
    ctx->pc = 0x31d96cu;
    // NOP
label_31d970:
    // 0x31d970: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D970u;
    {
        const bool branch_taken_0x31d970 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D970u;
        // 0x31d974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d970) {
            ctx->pc = 0x31D980u;
            goto label_31d980;
        }
    }
    ctx->pc = 0x31D978u;
    // 0x31d978: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31D978u;
    {
        const bool branch_taken_0x31d978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d978) {
            ctx->pc = 0x31D9A8u;
            goto label_31d9a8;
        }
    }
    ctx->pc = 0x31D980u;
label_31d980:
    // 0x31d980: 0xc0c7634  jal         func_31D8D0
    ctx->pc = 0x31D980u;
    SET_GPR_U32(ctx, 31, 0x31D988u);
    ctx->pc = 0x31D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D8D0u, 0x31D980u, 0x31D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D988u;
label_31d988:
    // 0x31d988: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x31d988u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x31d98c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31d990: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x31d990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31d994: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x31d994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x31d998: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x31d998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31d99c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d9a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31d9a4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x31d9a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_31d9a8:
    // 0x31d9a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31d9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d9ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31d9acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d9b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31d9b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d9b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31d9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x31D9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9B8u;
        // 0x31d9bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D9C0u;
}
