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

// Function: sub_00118710
// Address: 0x118710 - 0x118758
void sub_00118710_0x118710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118710_0x118710");
#endif

    switch (ctx->pc) {
        case 0x118728u: goto label_118728;
        case 0x118730u: goto label_118730;
        default: break;
    }

    ctx->pc = 0x118710u;

    // 0x118710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118714: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118718: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11871c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11871cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x118720: 0xc046160  jal         func_118580
    ctx->pc = 0x118720u;
    SET_GPR_U32(ctx, 31, 0x118728u);
    ctx->pc = 0x118724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118720u;
    // 0x118724: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118580u, 0x118720u, 0x118728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118728u;
label_118728:
    // 0x118728: 0xc0461a6  jal         func_118698
    ctx->pc = 0x118728u;
    SET_GPR_U32(ctx, 31, 0x118730u);
    ctx->pc = 0x11872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118728u;
    // 0x11872c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118698u, 0x118728u, 0x118730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118730u;
label_118730:
    // 0x118730: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x118730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x118734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118738: 0x8c462ee0  lw          $a2, 0x2EE0($v0)
    ctx->pc = 0x118738u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x402EE0u));
    // 0x11873c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11873cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118740: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118744: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118748: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x118748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x11874c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11874cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118750: 0x8043708  j           func_10DC20
    ctx->pc = 0x118750u;
    ctx->pc = 0x118754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118750u;
    // 0x118754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DC20u;
    sub_0010DC20_0x10dc20(rdram, ctx, runtime); return;
    ctx->pc = 0x118758u;
}
