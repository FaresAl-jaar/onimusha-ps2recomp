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

// Function: sub_0020F8D0
// Address: 0x20f8d0 - 0x20f928
void sub_0020F8D0_0x20f8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F8D0_0x20f8d0");
#endif

    switch (ctx->pc) {
        case 0x20f8d0u: goto label_20f8d0;
        case 0x20f8d4u: goto label_20f8d4;
        case 0x20f8d8u: goto label_20f8d8;
        case 0x20f8dcu: goto label_20f8dc;
        case 0x20f8e0u: goto label_20f8e0;
        case 0x20f8e4u: goto label_20f8e4;
        case 0x20f8e8u: goto label_20f8e8;
        case 0x20f8ecu: goto label_20f8ec;
        case 0x20f8f0u: goto label_20f8f0;
        case 0x20f8f4u: goto label_20f8f4;
        case 0x20f8f8u: goto label_20f8f8;
        case 0x20f8fcu: goto label_20f8fc;
        case 0x20f900u: goto label_20f900;
        case 0x20f904u: goto label_20f904;
        case 0x20f908u: goto label_20f908;
        case 0x20f90cu: goto label_20f90c;
        case 0x20f910u: goto label_20f910;
        case 0x20f914u: goto label_20f914;
        case 0x20f918u: goto label_20f918;
        case 0x20f91cu: goto label_20f91c;
        case 0x20f920u: goto label_20f920;
        case 0x20f924u: goto label_20f924;
        default: break;
    }

    ctx->pc = 0x20f8d0u;

label_20f8d0:
    // 0x20f8d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20f8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20f8d4:
    // 0x20f8d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20f8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_20f8d8:
    // 0x20f8d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f8d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f8dc:
    // 0x20f8dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20f8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_20f8e0:
    // 0x20f8e0: 0x2cb10001  sltiu       $s1, $a1, 0x1
    ctx->pc = 0x20f8e0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20f8e4:
    // 0x20f8e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20f8e8:
    // 0x20f8e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f8ec:
    // 0x20f8ec: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x20f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_20f8f0:
    // 0x20f8f0: 0x40f809  jalr        $v0
label_20f8f4:
    if (ctx->pc == 0x20F8F4u) {
        ctx->pc = 0x20F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8F0u;
        // 0x20f8f4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F8F8u;
        goto label_20f8f8;
    }
    ctx->pc = 0x20F8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F8F8u);
        ctx->pc = 0x20F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F8F0u;
        // 0x20f8f4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F8F0u, 0x20F8F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F8F8u;
label_20f8f8:
    // 0x20f8f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f8fc:
    // 0x20f8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f900:
    // 0x20f900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20f900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f904:
    // 0x20f904: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20f904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_20f908:
    // 0x20f908: 0x40f809  jalr        $v0
label_20f90c:
    if (ctx->pc == 0x20F90Cu) {
        ctx->pc = 0x20F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F908u;
        // 0x20f90c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F910u;
        goto label_20f910;
    }
    ctx->pc = 0x20F908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F910u);
        ctx->pc = 0x20F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F908u;
        // 0x20f90c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F908u, 0x20F910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F910u;
label_20f910:
    // 0x20f910: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20f914:
    // 0x20f914: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20f914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20f918:
    // 0x20f918: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20f918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20f91c:
    // 0x20f91c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20f91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20f920:
    // 0x20f920: 0x3e00008  jr          $ra
label_20f924:
    if (ctx->pc == 0x20F924u) {
        ctx->pc = 0x20F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F920u;
        // 0x20f924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F928u;
        goto label_fallthrough_0x20f920;
    }
    ctx->pc = 0x20F920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F920u;
        // 0x20f924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20f920:
    ctx->pc = 0x20F928u;
}
