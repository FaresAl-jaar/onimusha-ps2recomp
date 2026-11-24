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

// Function: sub_001FD570
// Address: 0x1fd570 - 0x1fd5bc
void sub_001FD570_0x1fd570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD570_0x1fd570");
#endif

    switch (ctx->pc) {
        case 0x1fd598u: goto label_1fd598;
        case 0x1fd5a8u: goto label_1fd5a8;
        default: break;
    }

    ctx->pc = 0x1fd570u;

    // 0x1fd570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd574: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fd574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd57c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fd57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd580: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fd580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fd584: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD584u;
    {
        const bool branch_taken_0x1fd584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD584u;
        // 0x1fd588: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd584) {
            ctx->pc = 0x1FD5A0u;
            goto label_1fd5a0;
        }
    }
    ctx->pc = 0x1FD58Cu;
    // 0x1fd58c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1fd58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1fd590: 0xc07f570  jal         func_1FD5C0
    ctx->pc = 0x1FD590u;
    SET_GPR_U32(ctx, 31, 0x1FD598u);
    ctx->pc = 0x1FD594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD590u;
    // 0x1fd594: 0x8c448138  lw          $a0, -0x7EC8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934840)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD5C0u, 0x1FD590u, 0x1FD598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD598u;
label_1fd598:
    // 0x1fd598: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD598u;
    {
        const bool branch_taken_0x1fd598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD598u;
        // 0x1fd59c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd598) {
            ctx->pc = 0x1FD5ACu;
            goto label_1fd5ac;
        }
    }
    ctx->pc = 0x1FD5A0u;
label_1fd5a0:
    // 0x1fd5a0: 0xc07f570  jal         func_1FD5C0
    ctx->pc = 0x1FD5A0u;
    SET_GPR_U32(ctx, 31, 0x1FD5A8u);
    ctx->pc = 0x1FD5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD5C0u, 0x1FD5A0u, 0x1FD5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD5A8u;
label_1fd5a8:
    // 0x1fd5a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fd5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fd5ac:
    // 0x1fd5ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd5b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fd5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5B4u;
        // 0x1fd5b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD5BCu;
}
