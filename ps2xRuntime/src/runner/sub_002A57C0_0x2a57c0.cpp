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

// Function: sub_002A57C0
// Address: 0x2a57c0 - 0x2a5868
void sub_002A57C0_0x2a57c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A57C0_0x2a57c0");
#endif

    switch (ctx->pc) {
        case 0x2a57fcu: goto label_2a57fc;
        case 0x2a5828u: goto label_2a5828;
        case 0x2a5850u: goto label_2a5850;
        default: break;
    }

    ctx->pc = 0x2a57c0u;

    // 0x2a57c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a57c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a57c4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a57c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a57c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a57c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a57cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a57ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a57d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a57d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a57d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a57d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a57d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a57dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a57dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a57e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57e4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a57e8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x2a57e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x2a57ec: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a57ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a57f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a57f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a57f4: 0xc05edcc  jal         func_17B730
    ctx->pc = 0x2A57F4u;
    SET_GPR_U32(ctx, 31, 0x2A57FCu);
    ctx->pc = 0x2A57F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A57F4u;
    // 0x2a57f8: 0x24c6b3f8  addiu       $a2, $a2, -0x4C08 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B730u, 0x2A57F4u, 0x2A57FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A57FCu;
label_2a57fc:
    // 0x2a57fc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a57fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a5800: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5804: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a5804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a5808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a580c: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x2a580cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a5810: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a5810u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5814: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a5814u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5818: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a5818u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a581c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a581cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5820: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A5820u;
    SET_GPR_U32(ctx, 31, 0x2A5828u);
    ctx->pc = 0x2A5824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5820u;
    // 0x2a5824: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A5820u, 0x2A5828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5828u;
label_2a5828:
    // 0x2a5828: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a5828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a582c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a582cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5830: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a5830u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5834: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5838: 0x240560bc  addiu       $a1, $zero, 0x60BC
    ctx->pc = 0x2a5838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24764));
    // 0x2a583c: 0x24060130  addiu       $a2, $zero, 0x130
    ctx->pc = 0x2a583cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x2a5840: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a5840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5844: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a5844u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5848: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2A5848u;
    SET_GPR_U32(ctx, 31, 0x2A5850u);
    ctx->pc = 0x2A584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5848u;
    // 0x2a584c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2A5848u, 0x2A5850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5850u;
label_2a5850:
    // 0x2a5850: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a5850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a5854: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a5854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a5858: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a5858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a585c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a585cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5860: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5860u;
        // 0x2a5864: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5868u;
}
