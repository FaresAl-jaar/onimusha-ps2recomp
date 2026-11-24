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

// Function: sub_002ED360
// Address: 0x2ed360 - 0x2ed3b4
void sub_002ED360_0x2ed360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED360_0x2ed360");
#endif

    switch (ctx->pc) {
        case 0x2ed3a8u: goto label_2ed3a8;
        default: break;
    }

    ctx->pc = 0x2ed360u;

    // 0x2ed360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed368: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2ed368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ed36c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2ed36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2ed370: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2ed370u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ed374: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED374u;
    {
        const bool branch_taken_0x2ed374 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED374u;
        // 0x2ed378: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed374) {
            ctx->pc = 0x2ED380u;
            goto label_2ed380;
        }
    }
    ctx->pc = 0x2ED37Cu;
    // 0x2ed37c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ed37cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed380:
    // 0x2ed380: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED380u;
    {
        const bool branch_taken_0x2ed380 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed380) {
            ctx->pc = 0x2ED3A8u;
            goto label_2ed3a8;
        }
    }
    ctx->pc = 0x2ED388u;
    // 0x2ed388: 0x90a60640  lbu         $a2, 0x640($a1)
    ctx->pc = 0x2ed388u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1600)));
    // 0x2ed38c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ed38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed390: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED390u;
    {
        const bool branch_taken_0x2ed390 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ed390) {
            ctx->pc = 0x2ED3A8u;
            goto label_2ed3a8;
        }
    }
    ctx->pc = 0x2ED398u;
    // 0x2ed398: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2ed398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed39c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ed39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed3a0: 0xc0e2698  jal         func_389A60
    ctx->pc = 0x2ED3A0u;
    SET_GPR_U32(ctx, 31, 0x2ED3A8u);
    ctx->pc = 0x2ED3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED3A0u;
    // 0x2ed3a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A60u, 0x2ED3A0u, 0x2ED3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED3A8u;
label_2ed3a8:
    // 0x2ed3a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3ACu;
        // 0x2ed3b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED3B4u;
}
