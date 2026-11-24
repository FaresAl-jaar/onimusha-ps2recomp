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

// Function: sub_001E25F0
// Address: 0x1e25f0 - 0x1e2644
void sub_001E25F0_0x1e25f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E25F0_0x1e25f0");
#endif

    switch (ctx->pc) {
        case 0x1e25f0u: goto label_1e25f0;
        case 0x1e25f4u: goto label_1e25f4;
        case 0x1e25f8u: goto label_1e25f8;
        case 0x1e25fcu: goto label_1e25fc;
        case 0x1e2600u: goto label_1e2600;
        case 0x1e2604u: goto label_1e2604;
        case 0x1e2608u: goto label_1e2608;
        case 0x1e260cu: goto label_1e260c;
        case 0x1e2610u: goto label_1e2610;
        case 0x1e2614u: goto label_1e2614;
        case 0x1e2618u: goto label_1e2618;
        case 0x1e261cu: goto label_1e261c;
        case 0x1e2620u: goto label_1e2620;
        case 0x1e2624u: goto label_1e2624;
        case 0x1e2628u: goto label_1e2628;
        case 0x1e262cu: goto label_1e262c;
        case 0x1e2630u: goto label_1e2630;
        case 0x1e2634u: goto label_1e2634;
        case 0x1e2638u: goto label_1e2638;
        case 0x1e263cu: goto label_1e263c;
        case 0x1e2640u: goto label_1e2640;
        default: break;
    }

    ctx->pc = 0x1e25f0u;

label_1e25f0:
    // 0x1e25f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e25f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e25f4:
    // 0x1e25f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e25f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e25f8:
    // 0x1e25f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e25f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e25fc:
    // 0x1e25fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e25fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e2600:
    // 0x1e2600: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e2604:
    if (ctx->pc == 0x1E2604u) {
        ctx->pc = 0x1E2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2600u;
        // 0x1e2604: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2608u;
        goto label_1e2608;
    }
    ctx->pc = 0x1E2600u;
    {
        const bool branch_taken_0x1e2600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2600u;
        // 0x1e2604: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2600) {
            ctx->pc = 0x1E2630u;
            goto label_1e2630;
        }
    }
    ctx->pc = 0x1E2608u;
label_1e2608:
    // 0x1e2608: 0x24426870  addiu       $v0, $v0, 0x6870
    ctx->pc = 0x1e2608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26736));
label_1e260c:
    // 0x1e260c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e260cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e2610:
    // 0x1e2610: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e2610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e2614:
    // 0x1e2614: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e2614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e2618:
    // 0x1e2618: 0x320f809  jalr        $t9
label_1e261c:
    if (ctx->pc == 0x1E261Cu) {
        ctx->pc = 0x1E2620u;
        goto label_1e2620;
    }
    ctx->pc = 0x1E2618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2620u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2618u, 0x1E2620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2620u;
label_1e2620:
    // 0x1e2620: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e2624:
    if (ctx->pc == 0x1E2624u) {
        ctx->pc = 0x1E2624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2620u;
        // 0x1e2624: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2628u;
        goto label_1e2628;
    }
    ctx->pc = 0x1E2620u;
    {
        const bool branch_taken_0x1e2620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2620u;
        // 0x1e2624: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2620) {
            ctx->pc = 0x1E2630u;
            goto label_1e2630;
        }
    }
    ctx->pc = 0x1E2628u;
label_1e2628:
    // 0x1e2628: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e2628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e262c:
    // 0x1e262c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e262cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e2630:
    // 0x1e2630: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e2630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2634:
    // 0x1e2634: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2638:
    // 0x1e2638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e263c:
    // 0x1e263c: 0x3e00008  jr          $ra
label_1e2640:
    if (ctx->pc == 0x1E2640u) {
        ctx->pc = 0x1E2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E263Cu;
        // 0x1e2640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2644u;
        goto label_fallthrough_0x1e263c;
    }
    ctx->pc = 0x1E263Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E263Cu;
        // 0x1e2640: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E263Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e263c:
    ctx->pc = 0x1E2644u;
}
