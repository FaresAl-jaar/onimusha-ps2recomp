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

// Function: sub_002A7FE0
// Address: 0x2a7fe0 - 0x2a8074
void sub_002A7FE0_0x2a7fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7FE0_0x2a7fe0");
#endif

    switch (ctx->pc) {
        case 0x2a8030u: goto label_2a8030;
        case 0x2a805cu: goto label_2a805c;
        default: break;
    }

    ctx->pc = 0x2a7fe0u;

    // 0x2a7fe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a7fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a7fe4: 0x3c022c00  lui         $v0, 0x2C00
    ctx->pc = 0x2a7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11264 << 16));
    // 0x2a7fe8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a7fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a7fec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a7fecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ff0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a7ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a7ff4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a7ff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ff8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a7ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a7ffc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a7ffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8000: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a8000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a8004: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a8004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8008: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a8008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a800c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a800cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a8010: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a8010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a8014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a8014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8018: 0x34454602  ori         $a1, $v0, 0x4602
    ctx->pc = 0x2a8018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17922);
    // 0x2a801c: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x2a801cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a8020: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8020u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8024: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a8024u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8028: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A8028u;
    SET_GPR_U32(ctx, 31, 0x2A8030u);
    ctx->pc = 0x2A802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8028u;
    // 0x2a802c: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A8028u, 0x2A8030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8030u;
label_2a8030:
    // 0x2a8030: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a8030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a8034: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a8034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8038: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a8038u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a803c: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a803cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8040: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8044: 0x344508d8  ori         $a1, $v0, 0x8D8
    ctx->pc = 0x2a8044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2264);
    // 0x2a8048: 0x240602e4  addiu       $a2, $zero, 0x2E4
    ctx->pc = 0x2a8048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 740));
    // 0x2a804c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a804cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8050: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8050u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8054: 0xc097d94  jal         func_25F650
    ctx->pc = 0x2A8054u;
    SET_GPR_U32(ctx, 31, 0x2A805Cu);
    ctx->pc = 0x2A8058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8054u;
    // 0x2a8058: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F650u, 0x2A8054u, 0x2A805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A805Cu;
label_2a805c:
    // 0x2a805c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a805cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8060: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a8060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8064: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a8064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8068: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a8068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a806c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A806Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A806Cu;
        // 0x2a8070: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A806Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8074u;
}
