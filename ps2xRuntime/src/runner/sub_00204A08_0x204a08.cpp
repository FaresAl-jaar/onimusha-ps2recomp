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

// Function: sub_00204A08
// Address: 0x204a08 - 0x204ad0
void sub_00204A08_0x204a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204A08_0x204a08");
#endif

    switch (ctx->pc) {
        case 0x204a44u: goto label_204a44;
        case 0x204a60u: goto label_204a60;
        default: break;
    }

    ctx->pc = 0x204a08u;

    // 0x204a08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x204a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x204a0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x204a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x204a10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204a14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x204a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x204a18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x204a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204a1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x204a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x204a20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x204a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x204a24: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x204a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x204a28: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x204a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x204a2c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x204a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x204a30: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x204a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x204a34: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x204a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x204a38: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x204a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x204a3c: 0xc0812b4  jal         func_204AD0
    ctx->pc = 0x204A3Cu;
    SET_GPR_U32(ctx, 31, 0x204A44u);
    ctx->pc = 0x204A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204A3Cu;
    // 0x204a40: 0x8e170000  lw          $s7, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204AD0u, 0x204A3Cu, 0x204A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A44u;
label_204a44:
    // 0x204a44: 0x8e16000c  lw          $s6, 0xC($s0)
    ctx->pc = 0x204a44u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x204a48: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x204a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x204a4c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x204a4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204a50: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x204a50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x204a54: 0x8e130014  lw          $s3, 0x14($s0)
    ctx->pc = 0x204a54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x204a58: 0xc0812c4  jal         func_204B10
    ctx->pc = 0x204A58u;
    SET_GPR_U32(ctx, 31, 0x204A60u);
    ctx->pc = 0x204A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204A58u;
    // 0x204a5c: 0x8e140018  lw          $s4, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204B10u, 0x204A58u, 0x204A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204A60u;
label_204a60:
    // 0x204a60: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x204a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x204a64: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x204a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x204a68: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x204a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x204a6c: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x204a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x204a70: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x204a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x204a74: 0xae370020  sw          $s7, 0x20($s1)
    ctx->pc = 0x204a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 23));
    // 0x204a78: 0xae35001c  sw          $s5, 0x1C($s1)
    ctx->pc = 0x204a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 21));
    // 0x204a7c: 0xae360000  sw          $s6, 0x0($s1)
    ctx->pc = 0x204a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
    // 0x204a80: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x204a80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x204a84: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x204a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x204a88: 0xae34000c  sw          $s4, 0xC($s1)
    ctx->pc = 0x204a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
    // 0x204a8c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x204a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x204a90: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x204a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x204a94: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x204a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x204a98: 0xae250018  sw          $a1, 0x18($s1)
    ctx->pc = 0x204a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 5));
    // 0x204a9c: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x204a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
    // 0x204aa0: 0xae270028  sw          $a3, 0x28($s1)
    ctx->pc = 0x204aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 7));
    // 0x204aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204aa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x204aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x204aac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x204aacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204ab0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x204ab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x204ab4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x204ab4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204ab8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x204ab8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x204abc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x204abcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204ac0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x204ac0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204ac4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x204ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x204AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AC8u;
        // 0x204acc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204AD0u;
}
