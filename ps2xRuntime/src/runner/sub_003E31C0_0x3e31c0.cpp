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

// Function: sub_003E31C0
// Address: 0x3e31c0 - 0x3e3230
void sub_003E31C0_0x3e31c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E31C0_0x3e31c0");
#endif

    switch (ctx->pc) {
        case 0x3e31e0u: goto label_3e31e0;
        default: break;
    }

    ctx->pc = 0x3e31c0u;

    // 0x3e31c0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x3e31c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e31c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e31c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e31c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3e31c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e31cc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3e31ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e31d0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3e31d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e31d4: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x3e31d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3e31d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3e31d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3e31dc: 0x0  nop
    ctx->pc = 0x3e31dcu;
    // NOP
label_3e31e0:
    // 0x3e31e0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x3e31e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x3e31e4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E31E4u;
    {
        const bool branch_taken_0x3e31e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e31e4) {
            ctx->pc = 0x3E31F8u;
            goto label_3e31f8;
        }
    }
    ctx->pc = 0x3E31ECu;
    // 0x3e31ec: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3e31ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3e31f0: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x3e31f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x3e31f4: 0x0  nop
    ctx->pc = 0x3e31f4u;
    // NOP
label_3e31f8:
    // 0x3e31f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3e31f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3e31fc: 0x29230015  slti        $v1, $t1, 0x15
    ctx->pc = 0x3e31fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x3e3200: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3e3200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3e3204: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3E3204u;
    {
        const bool branch_taken_0x3e3204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3204u;
        // 0x3e3208: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3204) {
            ctx->pc = 0x3E31E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e31e0;
        }
    }
    ctx->pc = 0x3E320Cu;
    // 0x3e320c: 0x90a50058  lbu         $a1, 0x58($a1)
    ctx->pc = 0x3e320cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x3e3210: 0x90830058  lbu         $v1, 0x58($a0)
    ctx->pc = 0x3e3210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x3e3214: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x3e3214u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3e3218: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E3218u;
    {
        const bool branch_taken_0x3e3218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3218) {
            ctx->pc = 0x3E3228u;
            goto label_3e3228;
        }
    }
    ctx->pc = 0x3E3220u;
    // 0x3e3220: 0xa0850058  sb          $a1, 0x58($a0)
    ctx->pc = 0x3e3220u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e3224: 0x0  nop
    ctx->pc = 0x3e3224u;
    // NOP
label_3e3228:
    // 0x3e3228: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3230u;
}
