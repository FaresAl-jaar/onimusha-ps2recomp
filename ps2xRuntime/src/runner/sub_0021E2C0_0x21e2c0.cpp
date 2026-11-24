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

// Function: sub_0021E2C0
// Address: 0x21e2c0 - 0x21e35c
void sub_0021E2C0_0x21e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E2C0_0x21e2c0");
#endif

    switch (ctx->pc) {
        case 0x21e2dcu: goto label_21e2dc;
        case 0x21e30cu: goto label_21e30c;
        default: break;
    }

    ctx->pc = 0x21e2c0u;

    // 0x21e2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e2c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e2c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e2cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e2d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21e2d4: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21E2D4u;
    SET_GPR_U32(ctx, 31, 0x21E2DCu);
    ctx->pc = 0x21E2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2D4u;
    // 0x21e2d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21E2D4u, 0x21E2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2DCu;
label_21e2dc:
    // 0x21e2dc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21e2e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E2E0u;
    {
        const bool branch_taken_0x21e2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2E0u;
        // 0x21e2e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2e0) {
            ctx->pc = 0x21E300u;
            goto label_21e300;
        }
    }
    ctx->pc = 0x21E2E8u;
    // 0x21e2e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e2ec: 0x34a5013b  ori         $a1, $a1, 0x13B
    ctx->pc = 0x21e2ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)315);
    // 0x21e2f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e2f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e2f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e2f8: 0x80848e0  j           func_212380
    ctx->pc = 0x21E2F8u;
    ctx->pc = 0x21E2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2F8u;
    // 0x21e2fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21E300u;
label_21e300:
    // 0x21e300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e304: 0xc087940  jal         func_21E500
    ctx->pc = 0x21E304u;
    SET_GPR_U32(ctx, 31, 0x21E30Cu);
    ctx->pc = 0x21E308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E304u;
    // 0x21e308: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E500u, 0x21E304u, 0x21E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E30Cu;
label_21e30c:
    // 0x21e30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e310: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x21e310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e314: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x21e314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21e318: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x21e318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21e31c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21E31Cu;
    {
        const bool branch_taken_0x21e31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E31Cu;
        // 0x21e320: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e31c) {
            ctx->pc = 0x21E348u;
            goto label_21e348;
        }
    }
    ctx->pc = 0x21E324u;
    // 0x21e324: 0x8e02096c  lw          $v0, 0x96C($s0)
    ctx->pc = 0x21e324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
    // 0x21e328: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e32c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21e330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e334: 0xae02096c  sw          $v0, 0x96C($s0)
    ctx->pc = 0x21e334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2412), GPR_U32(ctx, 2));
    // 0x21e338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e33c: 0x80888d6  j           func_222358
    ctx->pc = 0x21E33Cu;
    ctx->pc = 0x21E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E33Cu;
    // 0x21e340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222358u;
    sub_00222358_0x222358(rdram, ctx, runtime); return;
    ctx->pc = 0x21E344u;
    // 0x21e344: 0x0  nop
    ctx->pc = 0x21e344u;
    // NOP
label_21e348:
    // 0x21e348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e34c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e34cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e350: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e354: 0x3e00008  jr          $ra
    ctx->pc = 0x21E354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E354u;
        // 0x21e358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E35Cu;
}
