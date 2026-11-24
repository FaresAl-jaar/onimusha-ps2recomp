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

// Function: sub_00210440
// Address: 0x210440 - 0x210474
void sub_00210440_0x210440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210440_0x210440");
#endif

    switch (ctx->pc) {
        case 0x210440u: goto label_210440;
        case 0x210444u: goto label_210444;
        case 0x210448u: goto label_210448;
        case 0x21044cu: goto label_21044c;
        case 0x210450u: goto label_210450;
        case 0x210454u: goto label_210454;
        case 0x210458u: goto label_210458;
        case 0x21045cu: goto label_21045c;
        case 0x210460u: goto label_210460;
        case 0x210464u: goto label_210464;
        case 0x210468u: goto label_210468;
        case 0x21046cu: goto label_21046c;
        case 0x210470u: goto label_210470;
        default: break;
    }

    ctx->pc = 0x210440u;

label_210440:
    // 0x210440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x210440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_210444:
    // 0x210444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_210448:
    // 0x210448: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x210448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21044c:
    // 0x21044c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x21044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_210450:
    // 0x210450: 0x40f809  jalr        $v0
label_210454:
    if (ctx->pc == 0x210454u) {
        ctx->pc = 0x210458u;
        goto label_210458;
    }
    ctx->pc = 0x210450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210458u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210450u, 0x210458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210458u;
label_210458:
    // 0x210458: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x210458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
label_21045c:
    // 0x21045c: 0x8c64fb74  lw          $a0, -0x48C($v1)
    ctx->pc = 0x21045cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966132)));
label_210460:
    // 0x210460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_210464:
    // 0x210464: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x210464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_210468:
    // 0x210468: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x210468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_21046c:
    // 0x21046c: 0x3e00008  jr          $ra
label_210470:
    if (ctx->pc == 0x210470u) {
        ctx->pc = 0x210470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21046Cu;
        // 0x210470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210474u;
        goto label_fallthrough_0x21046c;
    }
    ctx->pc = 0x21046Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21046Cu;
        // 0x210470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21046Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21046c:
    ctx->pc = 0x210474u;
}
