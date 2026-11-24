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

// Function: sub_0015A440
// Address: 0x15a440 - 0x15a4b0
void sub_0015A440_0x15a440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A440_0x15a440");
#endif

    switch (ctx->pc) {
        case 0x15a474u: goto label_15a474;
        case 0x15a480u: goto label_15a480;
        case 0x15a498u: goto label_15a498;
        default: break;
    }

    ctx->pc = 0x15a440u;

    // 0x15a440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15a444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15a448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a44c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15a450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a454: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15A454u;
    {
        const bool branch_taken_0x15a454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A454u;
        // 0x15a458: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a454) {
            ctx->pc = 0x15A498u;
            goto label_15a498;
        }
    }
    ctx->pc = 0x15A45Cu;
    // 0x15a45c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x15a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x15a460: 0x26242930  addiu       $a0, $s1, 0x2930
    ctx->pc = 0x15a460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10544));
    // 0x15a464: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x15a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x15a468: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15a468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15a46c: 0xc09d6a0  jal         func_275A80
    ctx->pc = 0x15A46Cu;
    SET_GPR_U32(ctx, 31, 0x15A474u);
    ctx->pc = 0x15A470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A46Cu;
    // 0x15a470: 0xae2204d4  sw          $v0, 0x4D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A80u, 0x15A46Cu, 0x15A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A474u;
label_15a474:
    // 0x15a474: 0x26240650  addiu       $a0, $s1, 0x650
    ctx->pc = 0x15a474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    // 0x15a478: 0xc09d2d8  jal         func_274B60
    ctx->pc = 0x15A478u;
    SET_GPR_U32(ctx, 31, 0x15A480u);
    ctx->pc = 0x15A47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A478u;
    // 0x15a47c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B60u, 0x15A478u, 0x15A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A480u;
label_15a480:
    // 0x15a480: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x15a480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x15a484: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15a484u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15a488: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A488u;
    {
        const bool branch_taken_0x15a488 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x15A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A488u;
        // 0x15a48c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a488) {
            ctx->pc = 0x15A498u;
            goto label_15a498;
        }
    }
    ctx->pc = 0x15A490u;
    // 0x15a490: 0xc040148  jal         func_100520
    ctx->pc = 0x15A490u;
    SET_GPR_U32(ctx, 31, 0x15A498u);
    ctx->pc = 0x100520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100520u, 0x15A490u, 0x15A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A498u;
label_15a498:
    // 0x15a498: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15a498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a49c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a4a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a4a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a4a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x15A4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4A8u;
        // 0x15a4ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A4B0u;
}
