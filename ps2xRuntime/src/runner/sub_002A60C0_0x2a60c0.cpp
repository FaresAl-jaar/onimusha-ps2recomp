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

// Function: sub_002A60C0
// Address: 0x2a60c0 - 0x2a6154
void sub_002A60C0_0x2a60c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A60C0_0x2a60c0");
#endif

    switch (ctx->pc) {
        case 0x2a6114u: goto label_2a6114;
        case 0x2a613cu: goto label_2a613c;
        default: break;
    }

    ctx->pc = 0x2a60c0u;

    // 0x2a60c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a60c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a60c4: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x2a60c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x2a60c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a60c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a60cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a60ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a60d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a60d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a60d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a60d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a60d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a60d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a60dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a60dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a60e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a60e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a60e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a60e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a60e8: 0xafa7005c  sw          $a3, 0x5C($sp)
    ctx->pc = 0x2a60e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 7));
    // 0x2a60ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a60ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a60f0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a60f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a60f4: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x2a60f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x2a60f8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a60f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a60fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a60fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6100: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2a6100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2a6104: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a6104u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6108: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a6108u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a610c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A610Cu;
    SET_GPR_U32(ctx, 31, 0x2A6114u);
    ctx->pc = 0x2A6110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A610Cu;
    // 0x2a6110: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A610Cu, 0x2A6114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6114u;
label_2a6114:
    // 0x2a6114: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2a6114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2a6118: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a6118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a611c: 0x8fab005c  lw          $t3, 0x5C($sp)
    ctx->pc = 0x2a611cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2a6120: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a6120u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6124: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2a6124u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6128: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a6128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a612c: 0x3405846c  ori         $a1, $zero, 0x846C
    ctx->pc = 0x2a612cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33900);
    // 0x2a6130: 0x2406038c  addiu       $a2, $zero, 0x38C
    ctx->pc = 0x2a6130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 908));
    // 0x2a6134: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A6134u;
    SET_GPR_U32(ctx, 31, 0x2A613Cu);
    ctx->pc = 0x2A6138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6134u;
    // 0x2a6138: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A6134u, 0x2A613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A613Cu;
label_2a613c:
    // 0x2a613c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a613cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6140: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a6140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a6144: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a6144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6148: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a6148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a614c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A614Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A614Cu;
        // 0x2a6150: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A614Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6154u;
}
