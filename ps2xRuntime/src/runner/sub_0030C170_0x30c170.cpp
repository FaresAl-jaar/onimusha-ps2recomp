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

// Function: sub_0030C170
// Address: 0x30c170 - 0x30c208
void sub_0030C170_0x30c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C170_0x30c170");
#endif

    switch (ctx->pc) {
        case 0x30c1a8u: goto label_30c1a8;
        default: break;
    }

    ctx->pc = 0x30c170u;

    // 0x30c170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30c174: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30c174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30c178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30c178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30c17c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30c17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30c180: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x30c180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c184: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c188: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x30c188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c18c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30c190: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C190u;
    {
        const bool branch_taken_0x30c190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C190u;
        // 0x30c194: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c190) {
            ctx->pc = 0x30C1A0u;
            goto label_30c1a0;
        }
    }
    ctx->pc = 0x30C198u;
    // 0x30c198: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x30C198u;
    {
        const bool branch_taken_0x30c198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C198u;
        // 0x30c19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c198) {
            ctx->pc = 0x30C1F0u;
            goto label_30c1f0;
        }
    }
    ctx->pc = 0x30C1A0u;
label_30c1a0:
    // 0x30c1a0: 0xc0c3084  jal         func_30C210
    ctx->pc = 0x30C1A0u;
    SET_GPR_U32(ctx, 31, 0x30C1A8u);
    ctx->pc = 0x30C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C210u, 0x30C1A0u, 0x30C1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C1A8u;
label_30c1a8:
    // 0x30c1a8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x30c1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c1ac: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x30c1acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x30c1b0: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x30c1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x30c1b4: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x30c1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x30c1b8: 0x86040004  lh          $a0, 0x4($s0)
    ctx->pc = 0x30c1b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c1bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30c1c0: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x30c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x30c1c4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x30c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30c1c8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C1C8u;
    {
        const bool branch_taken_0x30c1c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1C8u;
        // 0x30c1cc: 0x9042003f  lbu         $v0, 0x3F($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1c8) {
            ctx->pc = 0x30C1F0u;
            goto label_30c1f0;
        }
    }
    ctx->pc = 0x30C1D0u;
    // 0x30c1d0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x30c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30c1d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30c1d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30c1dc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x30c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x30c1e0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x30c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x30c1e4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x30c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30c1e8: 0x9042003f  lbu         $v0, 0x3F($v0)
    ctx->pc = 0x30c1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 63)));
    // 0x30c1ec: 0x0  nop
    ctx->pc = 0x30c1ecu;
    // NOP
label_30c1f0:
    // 0x30c1f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30c1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c1f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30c1f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c1f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30c1f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c1fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c200: 0x3e00008  jr          $ra
    ctx->pc = 0x30C200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C200u;
        // 0x30c204: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C208u;
}
