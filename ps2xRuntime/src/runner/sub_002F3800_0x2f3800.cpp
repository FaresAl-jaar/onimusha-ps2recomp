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

// Function: sub_002F3800
// Address: 0x2f3800 - 0x2f38b8
void sub_002F3800_0x2f3800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3800_0x2f3800");
#endif

    switch (ctx->pc) {
        case 0x2f3830u: goto label_2f3830;
        case 0x2f3848u: goto label_2f3848;
        case 0x2f3854u: goto label_2f3854;
        default: break;
    }

    ctx->pc = 0x2f3800u;

    // 0x2f3800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f3800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f3804: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2f3804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3808: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f3808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f380c: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x2f380cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2f3810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f3810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f3814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f3818: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f3818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f381c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f381cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f3820: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f3820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3824: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x2f3824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2f3828: 0xc0bcd80  jal         func_2F3600
    ctx->pc = 0x2F3828u;
    SET_GPR_U32(ctx, 31, 0x2F3830u);
    ctx->pc = 0x2F382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3828u;
    // 0x2f382c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3600u, 0x2F3828u, 0x2F3830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3830u;
label_2f3830:
    // 0x2f3830: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f3830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3834: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f3834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f3838: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F3838u;
    {
        const bool branch_taken_0x2f3838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3838) {
            ctx->pc = 0x2F3898u;
            goto label_2f3898;
        }
    }
    ctx->pc = 0x2F3840u;
    // 0x2f3840: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x2f3840u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2f3844: 0x0  nop
    ctx->pc = 0x2f3844u;
    // NOP
label_2f3848:
    // 0x2f3848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f384c: 0xc0bcd78  jal         func_2F35E0
    ctx->pc = 0x2F384Cu;
    SET_GPR_U32(ctx, 31, 0x2F3854u);
    ctx->pc = 0x2F3850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F384Cu;
    // 0x2f3850: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F35E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F35E0u, 0x2F384Cu, 0x2F3854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3854u;
label_2f3854:
    // 0x2f3854: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F3854u;
    {
        const bool branch_taken_0x2f3854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3854) {
            ctx->pc = 0x2F3880u;
            goto label_2f3880;
        }
    }
    ctx->pc = 0x2F385Cu;
    // 0x2f385c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x2f385cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2f3860: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3860u;
    {
        const bool branch_taken_0x2f3860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f3860) {
            ctx->pc = 0x2F3880u;
            goto label_2f3880;
        }
    }
    ctx->pc = 0x2F3868u;
    // 0x2f3868: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2f3868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f386c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f386cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f3870: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3870u;
    {
        const bool branch_taken_0x2f3870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3870u;
        // 0x2f3874: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3870) {
            ctx->pc = 0x2F3880u;
            goto label_2f3880;
        }
    }
    ctx->pc = 0x2F3878u;
    // 0x2f3878: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F3878u;
    {
        const bool branch_taken_0x2f3878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3878) {
            ctx->pc = 0x2F38A0u;
            goto label_2f38a0;
        }
    }
    ctx->pc = 0x2F3880u;
label_2f3880:
    // 0x2f3880: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f3880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f3884: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f3884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f3888: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x2f3888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x2f388c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2f388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f3890: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2F3890u;
    {
        const bool branch_taken_0x2f3890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3890u;
        // 0x2f3894: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3890) {
            ctx->pc = 0x2F3848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3848;
        }
    }
    ctx->pc = 0x2F3898u;
label_2f3898:
    // 0x2f3898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f3898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f389c: 0x0  nop
    ctx->pc = 0x2f389cu;
    // NOP
label_2f38a0:
    // 0x2f38a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f38a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f38a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f38a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f38a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f38a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f38ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f38acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f38b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F38B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F38B0u;
        // 0x2f38b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F38B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F38B8u;
}
