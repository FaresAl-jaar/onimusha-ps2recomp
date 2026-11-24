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

// Function: sub_002A45A0
// Address: 0x2a45a0 - 0x2a4654
void sub_002A45A0_0x2a45a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A45A0_0x2a45a0");
#endif

    switch (ctx->pc) {
        case 0x2a45e4u: goto label_2a45e4;
        case 0x2a4610u: goto label_2a4610;
        case 0x2a4638u: goto label_2a4638;
        default: break;
    }

    ctx->pc = 0x2a45a0u;

    // 0x2a45a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a45a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a45a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a45a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a45a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a45a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a45ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a45acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a45b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a45b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a45b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a45b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a45b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a45b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a45bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a45bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a45c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a45c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a45c4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2a45c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a45c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a45c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a45cc: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x2a45ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x2a45d0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a45d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a45d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a45d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a45d8: 0x24c6d210  addiu       $a2, $a2, -0x2DF0
    ctx->pc = 0x2a45d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955536));
    // 0x2a45dc: 0xc05edcc  jal         func_17B730
    ctx->pc = 0x2A45DCu;
    SET_GPR_U32(ctx, 31, 0x2A45E4u);
    ctx->pc = 0x2A45E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A45DCu;
    // 0x2a45e0: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B730u, 0x2A45DCu, 0x2A45E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45E4u;
label_2a45e4:
    // 0x2a45e4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a45e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a45e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a45ec: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a45ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a45f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a45f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a45f4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a45f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a45f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a45f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a45fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a45fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4600: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a4600u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4604: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a4604u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4608: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A4608u;
    SET_GPR_U32(ctx, 31, 0x2A4610u);
    ctx->pc = 0x2A460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4608u;
    // 0x2a460c: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A4608u, 0x2A4610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4610u;
label_2a4610:
    // 0x2a4610: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a4610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4614: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2a4614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4618: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2a4618u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a461c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a461cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4620: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a4620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4624: 0x240518f0  addiu       $a1, $zero, 0x18F0
    ctx->pc = 0x2a4624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6384));
    // 0x2a4628: 0x2406023c  addiu       $a2, $zero, 0x23C
    ctx->pc = 0x2a4628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 572));
    // 0x2a462c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a462cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4630: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A4630u;
    SET_GPR_U32(ctx, 31, 0x2A4638u);
    ctx->pc = 0x2A4634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4630u;
    // 0x2a4634: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A4630u, 0x2A4638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4638u;
label_2a4638:
    // 0x2a4638: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a4638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a463c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a463cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a4640: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a4640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4644: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a4644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4648: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a4648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a464c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A464Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A464Cu;
        // 0x2a4650: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A464Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4654u;
}
