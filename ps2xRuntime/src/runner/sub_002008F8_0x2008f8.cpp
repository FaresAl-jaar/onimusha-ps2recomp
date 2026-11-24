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

// Function: sub_002008F8
// Address: 0x2008f8 - 0x200950
void sub_002008F8_0x2008f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002008F8_0x2008f8");
#endif

    switch (ctx->pc) {
        case 0x2008f8u: goto label_2008f8;
        case 0x2008fcu: goto label_2008fc;
        case 0x200900u: goto label_200900;
        case 0x200904u: goto label_200904;
        case 0x200908u: goto label_200908;
        case 0x20090cu: goto label_20090c;
        case 0x200910u: goto label_200910;
        case 0x200914u: goto label_200914;
        case 0x200918u: goto label_200918;
        case 0x20091cu: goto label_20091c;
        case 0x200920u: goto label_200920;
        case 0x200924u: goto label_200924;
        case 0x200928u: goto label_200928;
        case 0x20092cu: goto label_20092c;
        case 0x200930u: goto label_200930;
        case 0x200934u: goto label_200934;
        case 0x200938u: goto label_200938;
        case 0x20093cu: goto label_20093c;
        case 0x200940u: goto label_200940;
        case 0x200944u: goto label_200944;
        case 0x200948u: goto label_200948;
        case 0x20094cu: goto label_20094c;
        default: break;
    }

    ctx->pc = 0x2008f8u;

label_2008f8:
    // 0x2008f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2008f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2008fc:
    // 0x2008fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2008fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_200900:
    // 0x200900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200904:
    // 0x200904: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x200904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_200908:
    // 0x200908: 0x2cb10001  sltiu       $s1, $a1, 0x1
    ctx->pc = 0x200908u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20090c:
    // 0x20090c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20090cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_200910:
    // 0x200910: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x200910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200914:
    // 0x200914: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x200914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_200918:
    // 0x200918: 0x40f809  jalr        $v0
label_20091c:
    if (ctx->pc == 0x20091Cu) {
        ctx->pc = 0x20091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200918u;
        // 0x20091c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200920u;
        goto label_200920;
    }
    ctx->pc = 0x200918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200920u);
        ctx->pc = 0x20091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200918u;
        // 0x20091c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200918u, 0x200920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200920u;
label_200920:
    // 0x200920: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x200920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200924:
    // 0x200924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200928:
    // 0x200928: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x200928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20092c:
    // 0x20092c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_200930:
    // 0x200930: 0x40f809  jalr        $v0
label_200934:
    if (ctx->pc == 0x200934u) {
        ctx->pc = 0x200934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200930u;
        // 0x200934: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200938u;
        goto label_200938;
    }
    ctx->pc = 0x200930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x200938u);
        ctx->pc = 0x200934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200930u;
        // 0x200934: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200930u, 0x200938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200938u;
label_200938:
    // 0x200938: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x200938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20093c:
    // 0x20093c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20093cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_200940:
    // 0x200940: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x200940u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_200944:
    // 0x200944: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x200944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_200948:
    // 0x200948: 0x3e00008  jr          $ra
label_20094c:
    if (ctx->pc == 0x20094Cu) {
        ctx->pc = 0x20094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200948u;
        // 0x20094c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200950u;
        goto label_fallthrough_0x200948;
    }
    ctx->pc = 0x200948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200948u;
        // 0x20094c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x200948:
    ctx->pc = 0x200950u;
}
