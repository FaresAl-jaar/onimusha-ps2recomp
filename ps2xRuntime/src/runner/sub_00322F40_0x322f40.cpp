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

// Function: sub_00322F40
// Address: 0x322f40 - 0x322fb8
void sub_00322F40_0x322f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322F40_0x322f40");
#endif

    switch (ctx->pc) {
        case 0x322f98u: goto label_322f98;
        case 0x322fa8u: goto label_322fa8;
        default: break;
    }

    ctx->pc = 0x322f40u;

    // 0x322f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x322f44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x322f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x322f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x322f4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x322f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x322f50: 0x8c23ced8  lw          $v1, -0x3128($at)
    ctx->pc = 0x322f50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED8u));
    // 0x322f54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x322f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322f58: 0x3c040ff0  lui         $a0, 0xFF0
    ctx->pc = 0x322f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4080 << 16));
    // 0x322f5c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x322f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x322f60: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x322F60u;
    {
        const bool branch_taken_0x322f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x322F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F60u;
        // 0x322f64: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f60) {
            ctx->pc = 0x322FA8u;
            goto label_322fa8;
        }
    }
    ctx->pc = 0x322F68u;
    // 0x322f68: 0x8c23cec8  lw          $v1, -0x3138($at)
    ctx->pc = 0x322f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x322f6c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x322f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x322f70: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x322F70u;
    {
        const bool branch_taken_0x322f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x322f70) {
            ctx->pc = 0x322FA8u;
            goto label_322fa8;
        }
    }
    ctx->pc = 0x322F78u;
    // 0x322f78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x322f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x322f7c: 0x3c048ff8  lui         $a0, 0x8FF8
    ctx->pc = 0x322f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36856 << 16));
    // 0x322f80: 0x8c23ced4  lw          $v1, -0x312C($at)
    ctx->pc = 0x322f80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED4u));
    // 0x322f84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x322f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x322f88: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x322F88u;
    {
        const bool branch_taken_0x322f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x322F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F88u;
        // 0x322f8c: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f88) {
            ctx->pc = 0x322FA8u;
            goto label_322fa8;
        }
    }
    ctx->pc = 0x322F90u;
    // 0x322f90: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x322F90u;
    SET_GPR_U32(ctx, 31, 0x322F98u);
    ctx->pc = 0x322F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322F90u;
    // 0x322f94: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x322F90u, 0x322F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322F98u;
label_322f98:
    // 0x322f98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x322F98u;
    {
        const bool branch_taken_0x322f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F98u;
        // 0x322f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f98) {
            ctx->pc = 0x322FA8u;
            goto label_322fa8;
        }
    }
    ctx->pc = 0x322FA0u;
    // 0x322fa0: 0xc0c8a6c  jal         func_3229B0
    ctx->pc = 0x322FA0u;
    SET_GPR_U32(ctx, 31, 0x322FA8u);
    ctx->pc = 0x3229B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3229B0u, 0x322FA0u, 0x322FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322FA8u;
label_322fa8:
    // 0x322fa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x322fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x322facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x322FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FB0u;
        // 0x322fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322FB8u;
}
