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

// Function: sub_00207330
// Address: 0x207330 - 0x207384
void sub_00207330_0x207330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207330_0x207330");
#endif

    switch (ctx->pc) {
        case 0x207344u: goto label_207344;
        case 0x207360u: goto label_207360;
        case 0x207370u: goto label_207370;
        default: break;
    }

    ctx->pc = 0x207330u;

    // 0x207330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x207330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x207334: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x207334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x207338: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x207338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x20733c: 0xc081d84  jal         func_207610
    ctx->pc = 0x20733Cu;
    SET_GPR_U32(ctx, 31, 0x207344u);
    ctx->pc = 0x207340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20733Cu;
    // 0x207340: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20733Cu, 0x207344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207344u;
label_207344:
    // 0x207344: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207348: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x207348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20734c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20734Cu;
    {
        const bool branch_taken_0x20734c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20734Cu;
        // 0x207350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20734c) {
            ctx->pc = 0x207368u;
            goto label_207368;
        }
    }
    ctx->pc = 0x207354u;
    // 0x207354: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x207354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207358: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x207358u;
    SET_GPR_U32(ctx, 31, 0x207360u);
    ctx->pc = 0x20735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207358u;
    // 0x20735c: 0x248476e8  addiu       $a0, $a0, 0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x207358u, 0x207360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207360u;
label_207360:
    // 0x207360: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x207360u;
    {
        const bool branch_taken_0x207360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207360u;
        // 0x207364: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207360) {
            ctx->pc = 0x207374u;
            goto label_207374;
        }
    }
    ctx->pc = 0x207368u;
label_207368:
    // 0x207368: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x207368u;
    SET_GPR_U32(ctx, 31, 0x207370u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x207368u, 0x207370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207370u;
label_207370:
    // 0x207370: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x207370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_207374:
    // 0x207374: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x207374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x207378: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x207378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20737c: 0x3e00008  jr          $ra
    ctx->pc = 0x20737Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20737Cu;
        // 0x207380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20737Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207384u;
}
