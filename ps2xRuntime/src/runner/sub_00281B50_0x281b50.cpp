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

// Function: sub_00281B50
// Address: 0x281b50 - 0x281ba0
void sub_00281B50_0x281b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281B50_0x281b50");
#endif

    switch (ctx->pc) {
        case 0x281b64u: goto label_281b64;
        case 0x281b8cu: goto label_281b8c;
        default: break;
    }

    ctx->pc = 0x281b50u;

    // 0x281b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281b5c: 0xc0a04b4  jal         func_2812D0
    ctx->pc = 0x281B5Cu;
    SET_GPR_U32(ctx, 31, 0x281B64u);
    ctx->pc = 0x281B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B5Cu;
    // 0x281b60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2812D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812D0u, 0x281B5Cu, 0x281B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B64u;
label_281b64:
    // 0x281b64: 0x8e0306bc  lw          $v1, 0x6BC($s0)
    ctx->pc = 0x281b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1724)));
    // 0x281b68: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x281b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x281b6c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x281B6Cu;
    {
        const bool branch_taken_0x281b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x281b6c) {
            ctx->pc = 0x281B90u;
            goto label_281b90;
        }
    }
    ctx->pc = 0x281B74u;
    // 0x281b74: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x281b74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x281b78: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x281b78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x281b7c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x281B7Cu;
    {
        const bool branch_taken_0x281b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x281B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B7Cu;
        // 0x281b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b7c) {
            ctx->pc = 0x281B90u;
            goto label_281b90;
        }
    }
    ctx->pc = 0x281B84u;
    // 0x281b84: 0xc0a0644  jal         func_281910
    ctx->pc = 0x281B84u;
    SET_GPR_U32(ctx, 31, 0x281B8Cu);
    ctx->pc = 0x281B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281B84u;
    // 0x281b88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281910u, 0x281B84u, 0x281B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B8Cu;
label_281b8c:
    // 0x281b8c: 0x0  nop
    ctx->pc = 0x281b8cu;
    // NOP
label_281b90:
    // 0x281b90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x281b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281b98: 0x3e00008  jr          $ra
    ctx->pc = 0x281B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B98u;
        // 0x281b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281BA0u;
}
