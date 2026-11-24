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

// Function: sub_001C82E0
// Address: 0x1c82e0 - 0x1c8374
void sub_001C82E0_0x1c82e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C82E0_0x1c82e0");
#endif

    switch (ctx->pc) {
        case 0x1c8304u: goto label_1c8304;
        case 0x1c8324u: goto label_1c8324;
        case 0x1c8344u: goto label_1c8344;
        case 0x1c8364u: goto label_1c8364;
        default: break;
    }

    ctx->pc = 0x1c82e0u;

    // 0x1c82e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c82e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c82e4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c82e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c82e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c82e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c82ec: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x1c82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1c82f0: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1c82f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c82f4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C82F4u;
    {
        const bool branch_taken_0x1c82f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C82F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82F4u;
        // 0x1c82f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82f4) {
            ctx->pc = 0x1C8308u;
            goto label_1c8308;
        }
    }
    ctx->pc = 0x1C82FCu;
    // 0x1c82fc: 0xc071cd4  jal         func_1C7350
    ctx->pc = 0x1C82FCu;
    SET_GPR_U32(ctx, 31, 0x1C8304u);
    ctx->pc = 0x1C7350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7350u, 0x1C82FCu, 0x1C8304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8304u;
label_1c8304:
    // 0x1c8304: 0x0  nop
    ctx->pc = 0x1c8304u;
    // NOP
label_1c8308:
    // 0x1c8308: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c830c: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1c830cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8310: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1c8310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c8314: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8314u;
    {
        const bool branch_taken_0x1c8314 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8314) {
            ctx->pc = 0x1C8328u;
            goto label_1c8328;
        }
    }
    ctx->pc = 0x1C831Cu;
    // 0x1c831c: 0xc071cd4  jal         func_1C7350
    ctx->pc = 0x1C831Cu;
    SET_GPR_U32(ctx, 31, 0x1C8324u);
    ctx->pc = 0x1C7350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7350u, 0x1C831Cu, 0x1C8324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8324u;
label_1c8324:
    // 0x1c8324: 0x0  nop
    ctx->pc = 0x1c8324u;
    // NOP
label_1c8328:
    // 0x1c8328: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c832c: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1c832cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8330: 0x2403030a  addiu       $v1, $zero, 0x30A
    ctx->pc = 0x1c8330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
    // 0x1c8334: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8334u;
    {
        const bool branch_taken_0x1c8334 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8334) {
            ctx->pc = 0x1C8348u;
            goto label_1c8348;
        }
    }
    ctx->pc = 0x1C833Cu;
    // 0x1c833c: 0xc071e5c  jal         func_1C7970
    ctx->pc = 0x1C833Cu;
    SET_GPR_U32(ctx, 31, 0x1C8344u);
    ctx->pc = 0x1C7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7970u, 0x1C833Cu, 0x1C8344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8344u;
label_1c8344:
    // 0x1c8344: 0x0  nop
    ctx->pc = 0x1c8344u;
    // NOP
label_1c8348:
    // 0x1c8348: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c834c: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1c834cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c8350: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1c8350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1c8354: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8354u;
    {
        const bool branch_taken_0x1c8354 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c8354) {
            ctx->pc = 0x1C8368u;
            goto label_1c8368;
        }
    }
    ctx->pc = 0x1C835Cu;
    // 0x1c835c: 0xc071ff8  jal         func_1C7FE0
    ctx->pc = 0x1C835Cu;
    SET_GPR_U32(ctx, 31, 0x1C8364u);
    ctx->pc = 0x1C7FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7FE0u, 0x1C835Cu, 0x1C8364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8364u;
label_1c8364:
    // 0x1c8364: 0x0  nop
    ctx->pc = 0x1c8364u;
    // NOP
label_1c8368:
    // 0x1c8368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c836c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C836Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C836Cu;
        // 0x1c8370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C836Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8374u;
}
