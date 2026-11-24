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

// Function: sub_00353340
// Address: 0x353340 - 0x3533a8
void sub_00353340_0x353340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353340_0x353340");
#endif

    switch (ctx->pc) {
        case 0x353374u: goto label_353374;
        default: break;
    }

    ctx->pc = 0x353340u;

    // 0x353340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x353344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x353344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x353348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x353348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35334c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35334cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353350: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x353350u;
    {
        const bool branch_taken_0x353350 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x353354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353350u;
        // 0x353354: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353350) {
            ctx->pc = 0x353398u;
            goto label_353398;
        }
    }
    ctx->pc = 0x353358u;
    // 0x353358: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x353358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x35335c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x35335cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x353360: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x353360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x353364: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x353364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x353368: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x353368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x35336c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x35336Cu;
    SET_GPR_U32(ctx, 31, 0x353374u);
    ctx->pc = 0x353370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35336Cu;
    // 0x353370: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x35336Cu, 0x353374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353374u;
label_353374:
    // 0x353374: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x353374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x353378: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x353378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x35337c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x35337cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x353380: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x353380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x353384: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x353384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x353388: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x353388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x35338c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x35338cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x353390: 0x24638ec0  addiu       $v1, $v1, -0x7140
    ctx->pc = 0x353390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938304));
    // 0x353394: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x353394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_353398:
    // 0x353398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x353398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35339c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35339cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3533a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3533A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3533A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3533A0u;
        // 0x3533a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3533A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3533A8u;
}
