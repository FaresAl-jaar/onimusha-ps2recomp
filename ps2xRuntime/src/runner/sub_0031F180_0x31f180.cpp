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

// Function: sub_0031F180
// Address: 0x31f180 - 0x31f1c8
void sub_0031F180_0x31f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F180_0x31f180");
#endif

    switch (ctx->pc) {
        case 0x31f194u: goto label_31f194;
        default: break;
    }

    ctx->pc = 0x31f180u;

    // 0x31f180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31f180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31f184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31f184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31f188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31f188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31f18c: 0xc0a60b8  jal         func_2982E0
    ctx->pc = 0x31F18Cu;
    SET_GPR_U32(ctx, 31, 0x31F194u);
    ctx->pc = 0x31F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F18Cu;
    // 0x31f190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2982E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2982E0u, 0x31F18Cu, 0x31F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F194u;
label_31f194:
    // 0x31f194: 0x92030218  lbu         $v1, 0x218($s0)
    ctx->pc = 0x31f194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x31f198: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31F198u;
    {
        const bool branch_taken_0x31f198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f198) {
            ctx->pc = 0x31F1B8u;
            goto label_31f1b8;
        }
    }
    ctx->pc = 0x31F1A0u;
    // 0x31f1a0: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x31f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x31f1a4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x31f1a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31f1a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F1A8u;
    {
        const bool branch_taken_0x31f1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F1A8u;
        // 0x31f1ac: 0x24030094  addiu       $v1, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1a8) {
            ctx->pc = 0x31F1B8u;
            goto label_31f1b8;
        }
    }
    ctx->pc = 0x31F1B0u;
    // 0x31f1b0: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x31f1b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x31f1b4: 0x0  nop
    ctx->pc = 0x31f1b4u;
    // NOP
label_31f1b8:
    // 0x31f1b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31f1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f1bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31f1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x31F1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F1C0u;
        // 0x31f1c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F1C8u;
}
