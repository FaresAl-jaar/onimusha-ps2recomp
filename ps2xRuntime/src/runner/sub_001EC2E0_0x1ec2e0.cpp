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

// Function: sub_001EC2E0
// Address: 0x1ec2e0 - 0x1ec334
void sub_001EC2E0_0x1ec2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC2E0_0x1ec2e0");
#endif

    switch (ctx->pc) {
        case 0x1ec2e0u: goto label_1ec2e0;
        case 0x1ec2e4u: goto label_1ec2e4;
        case 0x1ec2e8u: goto label_1ec2e8;
        case 0x1ec2ecu: goto label_1ec2ec;
        case 0x1ec2f0u: goto label_1ec2f0;
        case 0x1ec2f4u: goto label_1ec2f4;
        case 0x1ec2f8u: goto label_1ec2f8;
        case 0x1ec2fcu: goto label_1ec2fc;
        case 0x1ec300u: goto label_1ec300;
        case 0x1ec304u: goto label_1ec304;
        case 0x1ec308u: goto label_1ec308;
        case 0x1ec30cu: goto label_1ec30c;
        case 0x1ec310u: goto label_1ec310;
        case 0x1ec314u: goto label_1ec314;
        case 0x1ec318u: goto label_1ec318;
        case 0x1ec31cu: goto label_1ec31c;
        case 0x1ec320u: goto label_1ec320;
        case 0x1ec324u: goto label_1ec324;
        case 0x1ec328u: goto label_1ec328;
        case 0x1ec32cu: goto label_1ec32c;
        case 0x1ec330u: goto label_1ec330;
        default: break;
    }

    ctx->pc = 0x1ec2e0u;

label_1ec2e0:
    // 0x1ec2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ec2e4:
    // 0x1ec2e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ec2e8:
    // 0x1ec2e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ec2ec:
    // 0x1ec2ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec2f0:
    // 0x1ec2f0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1ec2f4:
    if (ctx->pc == 0x1EC2F4u) {
        ctx->pc = 0x1EC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2F0u;
        // 0x1ec2f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC2F8u;
        goto label_1ec2f8;
    }
    ctx->pc = 0x1EC2F0u;
    {
        const bool branch_taken_0x1ec2f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2F0u;
        // 0x1ec2f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec2f0) {
            ctx->pc = 0x1EC320u;
            goto label_1ec320;
        }
    }
    ctx->pc = 0x1EC2F8u;
label_1ec2f8:
    // 0x1ec2f8: 0x244270b0  addiu       $v0, $v0, 0x70B0
    ctx->pc = 0x1ec2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28848));
label_1ec2fc:
    // 0x1ec2fc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ec2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ec300:
    // 0x1ec300: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ec300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ec304:
    // 0x1ec304: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ec304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ec308:
    // 0x1ec308: 0x320f809  jalr        $t9
label_1ec30c:
    if (ctx->pc == 0x1EC30Cu) {
        ctx->pc = 0x1EC310u;
        goto label_1ec310;
    }
    ctx->pc = 0x1EC308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EC310u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC308u, 0x1EC310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC310u;
label_1ec310:
    // 0x1ec310: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1ec314:
    if (ctx->pc == 0x1EC314u) {
        ctx->pc = 0x1EC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC310u;
        // 0x1ec314: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC318u;
        goto label_1ec318;
    }
    ctx->pc = 0x1EC310u;
    {
        const bool branch_taken_0x1ec310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC310u;
        // 0x1ec314: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec310) {
            ctx->pc = 0x1EC320u;
            goto label_1ec320;
        }
    }
    ctx->pc = 0x1EC318u;
label_1ec318:
    // 0x1ec318: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1ec318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1ec31c:
    // 0x1ec31c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ec31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ec320:
    // 0x1ec320: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ec320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec324:
    // 0x1ec324: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec328:
    // 0x1ec328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec32c:
    // 0x1ec32c: 0x3e00008  jr          $ra
label_1ec330:
    if (ctx->pc == 0x1EC330u) {
        ctx->pc = 0x1EC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC32Cu;
        // 0x1ec330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC334u;
        goto label_fallthrough_0x1ec32c;
    }
    ctx->pc = 0x1EC32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC32Cu;
        // 0x1ec330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ec32c:
    ctx->pc = 0x1EC334u;
}
