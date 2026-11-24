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

// Function: sub_002F4300
// Address: 0x2f4300 - 0x2f4350
void sub_002F4300_0x2f4300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4300_0x2f4300");
#endif

    switch (ctx->pc) {
        case 0x2f4320u: goto label_2f4320;
        case 0x2f4340u: goto label_2f4340;
        default: break;
    }

    ctx->pc = 0x2f4300u;

    // 0x2f4300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f4300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f4304: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2f4304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f4308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f4308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f430c: 0x24420510  addiu       $v0, $v0, 0x510
    ctx->pc = 0x2f430cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x2f4310: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4314: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2f4314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4318: 0xc0bce70  jal         func_2F39C0
    ctx->pc = 0x2F4318u;
    SET_GPR_U32(ctx, 31, 0x2F4320u);
    ctx->pc = 0x2F431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4318u;
    // 0x2f431c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39C0u, 0x2F4318u, 0x2F4320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4320u;
label_2f4320:
    // 0x2f4320: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4320u;
    {
        const bool branch_taken_0x2f4320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4320) {
            ctx->pc = 0x2F4330u;
            goto label_2f4330;
        }
    }
    ctx->pc = 0x2F4328u;
    // 0x2f4328: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4328u;
    {
        const bool branch_taken_0x2f4328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4328u;
        // 0x2f432c: 0x90420001  lbu         $v0, 0x1($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4328) {
            ctx->pc = 0x2F4334u;
            goto label_2f4334;
        }
    }
    ctx->pc = 0x2F4330u;
label_2f4330:
    // 0x2f4330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4334:
    // 0x2f4334: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f4334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4338: 0xc0bd0d4  jal         func_2F4350
    ctx->pc = 0x2F4338u;
    SET_GPR_U32(ctx, 31, 0x2F4340u);
    ctx->pc = 0x2F433Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4338u;
    // 0x2f433c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4350u, 0x2F4338u, 0x2F4340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4340u;
label_2f4340:
    // 0x2f4340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f4340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4348: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4348u;
        // 0x2f434c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4350u;
}
