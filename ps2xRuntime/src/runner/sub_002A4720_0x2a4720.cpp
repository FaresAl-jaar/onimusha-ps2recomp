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

// Function: sub_002A4720
// Address: 0x2a4720 - 0x2a47e4
void sub_002A4720_0x2a4720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4720_0x2a4720");
#endif

    switch (ctx->pc) {
        case 0x2a4794u: goto label_2a4794;
        case 0x2a47c4u: goto label_2a47c4;
        default: break;
    }

    ctx->pc = 0x2a4720u;

    // 0x2a4720: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a4720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a4724: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2a4724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2a4728: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a4728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a472c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2a472cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2a4730: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2a4730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2a4734: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2a4734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2a4738: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2a4738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2a473c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a473cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4740: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2a4740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2a4744: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a4744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4748: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a4748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2a474c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a474cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a4750: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a4750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2a4754: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a4754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4758: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x2a4758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    // 0x2a475c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2a475cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4760: 0x8cc6004c  lw          $a2, 0x4C($a2)
    ctx->pc = 0x2a4760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x2a4764: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2a4764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2a4768: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2a4768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a476c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a476cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a4770: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a4770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4774: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a4774u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4778: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a4778u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a477c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a477cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4780: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x2a4780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x2a4784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a478c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A478Cu;
    SET_GPR_U32(ctx, 31, 0x2A4794u);
    ctx->pc = 0x2A4790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A478Cu;
    // 0x2a4790: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A478Cu, 0x2A4794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4794u;
label_2a4794:
    // 0x2a4794: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a4794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4798: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2a4798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a479c: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x2a479cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x2a47a0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2a47a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47a4: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x2a47a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x2a47a8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2a47a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47ac: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2a47acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a47b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47b4: 0x24051f28  addiu       $a1, $zero, 0x1F28
    ctx->pc = 0x2a47b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7976));
    // 0x2a47b8: 0x24060264  addiu       $a2, $zero, 0x264
    ctx->pc = 0x2a47b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x2a47bc: 0xc097df4  jal         func_25F7D0
    ctx->pc = 0x2A47BCu;
    SET_GPR_U32(ctx, 31, 0x2A47C4u);
    ctx->pc = 0x2A47C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A47BCu;
    // 0x2a47c0: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F7D0u, 0x2A47BCu, 0x2A47C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A47C4u;
label_2a47c4:
    // 0x2a47c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a47c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a47c8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2a47c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a47cc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2a47ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a47d0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2a47d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a47d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a47d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a47d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a47d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a47dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A47DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47DCu;
        // 0x2a47e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A47DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A47E4u;
}
