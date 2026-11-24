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

// Function: sub_002BD970
// Address: 0x2bd970 - 0x2bd9f0
void sub_002BD970_0x2bd970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BD970_0x2bd970");
#endif

    switch (ctx->pc) {
        case 0x2bd998u: goto label_2bd998;
        case 0x2bd9a8u: goto label_2bd9a8;
        default: break;
    }

    ctx->pc = 0x2bd970u;

    // 0x2bd970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bd970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bd974: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bd974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bd978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bd978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bd97c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bd97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bd980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bd980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd984: 0x8ca508e0  lw          $a1, 0x8E0($a1)
    ctx->pc = 0x2bd984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2272)));
    // 0x2bd988: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2bd988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2bd98c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bd98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd990: 0xc07cc2c  jal         func_1F30B0
    ctx->pc = 0x2BD990u;
    SET_GPR_U32(ctx, 31, 0x2BD998u);
    ctx->pc = 0x2BD994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD990u;
    // 0x2bd994: 0x2484a790  addiu       $a0, $a0, -0x5870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F30B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F30B0u, 0x2BD990u, 0x2BD998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD998u;
label_2bd998:
    // 0x2bd998: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BD998u;
    {
        const bool branch_taken_0x2bd998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD998u;
        // 0x2bd99c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd998) {
            ctx->pc = 0x2BD9C0u;
            goto label_2bd9c0;
        }
    }
    ctx->pc = 0x2BD9A0u;
    // 0x2bd9a0: 0xc0b83ec  jal         func_2E0FB0
    ctx->pc = 0x2BD9A0u;
    SET_GPR_U32(ctx, 31, 0x2BD9A8u);
    ctx->pc = 0x2E0FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0FB0u, 0x2BD9A0u, 0x2BD9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD9A8u;
label_2bd9a8:
    // 0x2bd9a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bd9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bd9ac: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2bd9acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2bd9b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bd9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bd9b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2bd9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2bd9b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD9B8u;
    {
        const bool branch_taken_0x2bd9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9B8u;
        // 0x2bd9bc: 0xa443003e  sh          $v1, 0x3E($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 62), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd9b8) {
            ctx->pc = 0x2BD9D8u;
            goto label_2bd9d8;
        }
    }
    ctx->pc = 0x2BD9C0u;
label_2bd9c0:
    // 0x2bd9c0: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x2bd9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2bd9c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2bd9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bd9c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2bd9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2bd9cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2bd9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2bd9d0: 0xa443003e  sh          $v1, 0x3E($v0)
    ctx->pc = 0x2bd9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 62), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bd9d4: 0x0  nop
    ctx->pc = 0x2bd9d4u;
    // NOP
label_2bd9d8:
    // 0x2bd9d8: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x2bd9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2bd9dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bd9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bd9e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bd9e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bd9e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bd9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bd9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD9E8u;
        // 0x2bd9ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD9F0u;
}
