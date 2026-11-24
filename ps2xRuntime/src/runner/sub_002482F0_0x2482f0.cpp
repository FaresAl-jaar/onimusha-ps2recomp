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

// Function: sub_002482F0
// Address: 0x2482f0 - 0x248348
void sub_002482F0_0x2482f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002482F0_0x2482f0");
#endif

    switch (ctx->pc) {
        case 0x24831cu: goto label_24831c;
        default: break;
    }

    ctx->pc = 0x2482f0u;

    // 0x2482f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2482f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2482f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2482f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2482f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2482f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2482fc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2482FCu;
    {
        const bool branch_taken_0x2482fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x248300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482FCu;
        // 0x248300: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2482fc) {
            ctx->pc = 0x248338u;
            goto label_248338;
        }
    }
    ctx->pc = 0x248304u;
    // 0x248304: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x248304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x248308: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x248308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24830c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24830Cu;
    {
        const bool branch_taken_0x24830c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24830c) {
            ctx->pc = 0x248310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24830Cu;
            // 0x248310: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248320u;
            goto label_248320;
        }
    }
    ctx->pc = 0x248314u;
    // 0x248314: 0xc092170  jal         func_2485C0
    ctx->pc = 0x248314u;
    SET_GPR_U32(ctx, 31, 0x24831Cu);
    ctx->pc = 0x2485C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2485C0u, 0x248314u, 0x24831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24831Cu;
label_24831c:
    // 0x24831c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x24831cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_248320:
    // 0x248320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248324: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x248324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24832c: 0x8092056  j           func_248158
    ctx->pc = 0x24832Cu;
    ctx->pc = 0x248330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24832Cu;
    // 0x248330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248158u;
    sub_00248158_0x248158(rdram, ctx, runtime); return;
    ctx->pc = 0x248334u;
    // 0x248334: 0x0  nop
    ctx->pc = 0x248334u;
    // NOP
label_248338:
    // 0x248338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24833c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24833cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248340: 0x3e00008  jr          $ra
    ctx->pc = 0x248340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248340u;
        // 0x248344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248348u;
}
