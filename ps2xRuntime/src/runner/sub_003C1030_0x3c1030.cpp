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

// Function: sub_003C1030
// Address: 0x3c1030 - 0x3c10a4
void sub_003C1030_0x3c1030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1030_0x3c1030");
#endif

    switch (ctx->pc) {
        case 0x3c1074u: goto label_3c1074;
        case 0x3c1084u: goto label_3c1084;
        default: break;
    }

    ctx->pc = 0x3c1030u;

    // 0x3c1030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c1030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c1034: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c1034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c1038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c1038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c103c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c103cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c1040: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c1040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c1044: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c1044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1048: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3c1048u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c104c: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C104Cu;
    {
        const bool branch_taken_0x3c104c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C104Cu;
        // 0x3c1050: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c104c) {
            ctx->pc = 0x3C1090u;
            goto label_3c1090;
        }
    }
    ctx->pc = 0x3C1054u;
    // 0x3c1054: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x3c1054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3c1058: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x3c1058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3c105c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c105cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c1060: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3c1060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3c1064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c1064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1068: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3c1068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c106c: 0xc049590  jal         func_125640
    ctx->pc = 0x3C106Cu;
    SET_GPR_U32(ctx, 31, 0x3C1074u);
    ctx->pc = 0x3C1070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C106Cu;
    // 0x3c1070: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3C106Cu, 0x3C1074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1074u;
label_3c1074:
    // 0x3c1074: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3c1074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3c1078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c1078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c107c: 0xc049590  jal         func_125640
    ctx->pc = 0x3C107Cu;
    SET_GPR_U32(ctx, 31, 0x3C1084u);
    ctx->pc = 0x3C1080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C107Cu;
    // 0x3c1080: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3C107Cu, 0x3C1084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1084u;
label_3c1084:
    // 0x3c1084: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x3c1084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x3c1088: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c1088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c108c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3c108cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c1090:
    // 0x3c1090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c1090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c1094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c1094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c1098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c1098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c109c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C109Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C109Cu;
        // 0x3c10a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C109Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C10A4u;
}
