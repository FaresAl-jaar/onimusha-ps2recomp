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

// Function: sub_002A5730
// Address: 0x2a5730 - 0x2a57c0
void sub_002A5730_0x2a5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5730_0x2a5730");
#endif

    switch (ctx->pc) {
        case 0x2a5780u: goto label_2a5780;
        case 0x2a57a8u: goto label_2a57a8;
        default: break;
    }

    ctx->pc = 0x2a5730u;

    // 0x2a5730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a5730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a5734: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x2a5734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x2a5738: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a5738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a573c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a573cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5740: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a5740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a5744: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a5744u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5748: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a5748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a574c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a574cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5750: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a5750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a5754: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a5754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5758: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a5758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a575c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a575cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a5760: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a5760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a5764: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5768: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2a5768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2a576c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a576cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5770: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a5770u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5774: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a5774u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5778: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A5778u;
    SET_GPR_U32(ctx, 31, 0x2A5780u);
    ctx->pc = 0x2A577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5778u;
    // 0x2a577c: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A5778u, 0x2A5780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5780u;
label_2a5780:
    // 0x2a5780: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a5780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5784: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a5784u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5788: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a5788u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a578c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a578cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5790: 0x24056014  addiu       $a1, $zero, 0x6014
    ctx->pc = 0x2a5790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24596));
    // 0x2a5794: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x2a5794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2a5798: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a5798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a579c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a579cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a57a0: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A57A0u;
    SET_GPR_U32(ctx, 31, 0x2A57A8u);
    ctx->pc = 0x2A57A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A57A0u;
    // 0x2a57a4: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A57A0u, 0x2A57A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A57A8u;
label_2a57a8:
    // 0x2a57a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a57a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a57ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a57acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a57b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a57b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a57b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a57b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a57b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A57B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A57B8u;
        // 0x2a57bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A57B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A57C0u;
}
