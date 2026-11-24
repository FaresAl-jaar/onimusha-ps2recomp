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

// Function: sub_00337030
// Address: 0x337030 - 0x3370a0
void sub_00337030_0x337030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337030_0x337030");
#endif

    switch (ctx->pc) {
        case 0x337074u: goto label_337074;
        default: break;
    }

    ctx->pc = 0x337030u;

    // 0x337030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x337038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33703c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x33703cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x337040: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x337040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x337044: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337044u;
    {
        const bool branch_taken_0x337044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337044u;
        // 0x337048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337044) {
            ctx->pc = 0x337058u;
            goto label_337058;
        }
    }
    ctx->pc = 0x33704Cu;
    // 0x33704c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33704Cu;
    {
        const bool branch_taken_0x33704c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33704Cu;
        // 0x337050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33704c) {
            ctx->pc = 0x337090u;
            goto label_337090;
        }
    }
    ctx->pc = 0x337054u;
    // 0x337054: 0x0  nop
    ctx->pc = 0x337054u;
    // NOP
label_337058:
    // 0x337058: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x337058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33705c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33705cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x337060: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x337060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x337064: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x337064u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x337068: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x337068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33706c: 0xc0bd324  jal         func_2F4C90
    ctx->pc = 0x33706Cu;
    SET_GPR_U32(ctx, 31, 0x337074u);
    ctx->pc = 0x337070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33706Cu;
    // 0x337070: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4C90u, 0x33706Cu, 0x337074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337074u;
label_337074:
    // 0x337074: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x337074u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x337078: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x337078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x33707c: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x33707cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x337080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337084: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x337084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x337088: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x337088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33708c: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x33708cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
label_337090:
    // 0x337090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337098: 0x3e00008  jr          $ra
    ctx->pc = 0x337098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337098u;
        // 0x33709c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3370A0u;
}
