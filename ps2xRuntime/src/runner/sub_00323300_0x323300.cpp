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

// Function: sub_00323300
// Address: 0x323300 - 0x32333c
void sub_00323300_0x323300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323300_0x323300");
#endif

    switch (ctx->pc) {
        case 0x323328u: goto label_323328;
        default: break;
    }

    ctx->pc = 0x323300u;

    // 0x323300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323304: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x323304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32330c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32330cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323314: 0x9084053b  lbu         $a0, 0x53B($a0)
    ctx->pc = 0x323314u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1339)));
    // 0x323318: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x323318u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x32331c: 0x920705d4  lbu         $a3, 0x5D4($s0)
    ctx->pc = 0x32331cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1492)));
    // 0x323320: 0xc0a9ccc  jal         func_2A7330
    ctx->pc = 0x323320u;
    SET_GPR_U32(ctx, 31, 0x323328u);
    ctx->pc = 0x323324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323320u;
    // 0x323324: 0x26080590  addiu       $t0, $s0, 0x590 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7330u, 0x323320u, 0x323328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323328u;
label_323328:
    // 0x323328: 0xae0205c0  sw          $v0, 0x5C0($s0)
    ctx->pc = 0x323328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1472), GPR_U32(ctx, 2));
    // 0x32332c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32332cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323334: 0x3e00008  jr          $ra
    ctx->pc = 0x323334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323334u;
        // 0x323338: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32333Cu;
}
