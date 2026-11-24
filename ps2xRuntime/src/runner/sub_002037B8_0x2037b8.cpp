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

// Function: sub_002037B8
// Address: 0x2037b8 - 0x20383c
void sub_002037B8_0x2037b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002037B8_0x2037b8");
#endif

    switch (ctx->pc) {
        case 0x2037e4u: goto label_2037e4;
        case 0x203804u: goto label_203804;
        case 0x203824u: goto label_203824;
        default: break;
    }

    ctx->pc = 0x2037b8u;

    // 0x2037b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2037b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2037bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2037bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2037c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2037c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2037c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2037c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2037c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2037cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2037ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2037d0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2037D0u;
    {
        const bool branch_taken_0x2037d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2037D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2037D0u;
        // 0x2037d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037d0) {
            ctx->pc = 0x2037E8u;
            goto label_2037e8;
        }
    }
    ctx->pc = 0x2037D8u;
    // 0x2037d8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2037d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2037dc: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2037DCu;
    SET_GPR_U32(ctx, 31, 0x2037E4u);
    ctx->pc = 0x2037E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037DCu;
    // 0x2037e0: 0x24846918  addiu       $a0, $a0, 0x6918 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2037DCu, 0x2037E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2037E4u;
label_2037e4:
    // 0x2037e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2037e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2037e8:
    // 0x2037e8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2037e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2037ec: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2037ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2037f0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2037F0u;
    {
        const bool branch_taken_0x2037f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2037f0) {
            ctx->pc = 0x2037F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2037F0u;
            // 0x2037f4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20380Cu;
            goto label_20380c;
        }
    }
    ctx->pc = 0x2037F8u;
    // 0x2037f8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2037f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2037fc: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2037FCu;
    SET_GPR_U32(ctx, 31, 0x203804u);
    ctx->pc = 0x203800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2037FCu;
    // 0x203800: 0x24846948  addiu       $a0, $a0, 0x6948 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2037FCu, 0x203804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203804u;
label_203804:
    // 0x203804: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x203804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203808: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x203808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_20380c:
    // 0x20380c: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x20380cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x203810: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x203810u;
    {
        const bool branch_taken_0x203810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203810u;
        // 0x203814: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203810) {
            ctx->pc = 0x20382Cu;
            goto label_20382c;
        }
    }
    ctx->pc = 0x203818u;
    // 0x203818: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x203818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20381c: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20381Cu;
    SET_GPR_U32(ctx, 31, 0x203824u);
    ctx->pc = 0x203820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20381Cu;
    // 0x203820: 0x24846970  addiu       $a0, $a0, 0x6970 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20381Cu, 0x203824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203824u;
label_203824:
    // 0x203824: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x203824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20382c:
    // 0x20382c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20382cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203830: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x203830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203834: 0x3e00008  jr          $ra
    ctx->pc = 0x203834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203834u;
        // 0x203838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20383Cu;
}
