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

// Function: sub_0023E2D8
// Address: 0x23e2d8 - 0x23e3a4
void sub_0023E2D8_0x23e2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E2D8_0x23e2d8");
#endif

    switch (ctx->pc) {
        case 0x23e300u: goto label_23e300;
        case 0x23e354u: goto label_23e354;
        case 0x23e37cu: goto label_23e37c;
        case 0x23e38cu: goto label_23e38c;
        default: break;
    }

    ctx->pc = 0x23e2d8u;

    // 0x23e2d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23e2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23e2dc: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x23e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x23e2e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23e2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23e2e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23e2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23e2e8: 0x24838ff0  addiu       $v1, $a0, -0x7010
    ctx->pc = 0x23e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938608));
    // 0x23e2ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23e2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23e2f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C8FF0u));
    // 0x23e2f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23E2F4u;
    {
        const bool branch_taken_0x23e2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E2F4u;
        // 0x23e2f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e2f4) {
            ctx->pc = 0x23E324u;
            goto label_23e324;
        }
    }
    ctx->pc = 0x23E2FCu;
    // 0x23e2fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23e2fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23e300:
    // 0x23e300: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x23e300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x23e304: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E304u;
    {
        const bool branch_taken_0x23e304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E304u;
        // 0x23e308: 0x2463003c  addiu       $v1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e304) {
            ctx->pc = 0x23E324u;
            goto label_23e324;
        }
    }
    ctx->pc = 0x23E30Cu;
    // 0x23e30c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e310: 0x0  nop
    ctx->pc = 0x23e310u;
    // NOP
    // 0x23e314: 0x0  nop
    ctx->pc = 0x23e314u;
    // NOP
    // 0x23e318: 0x0  nop
    ctx->pc = 0x23e318u;
    // NOP
    // 0x23e31c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23E31Cu;
    {
        const bool branch_taken_0x23e31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e31c) {
            ctx->pc = 0x23E320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E31Cu;
            // 0x23e320: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23e300;
        }
    }
    ctx->pc = 0x23E324u;
label_23e324:
    // 0x23e324: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x23e324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23e328: 0x12230019  beq         $s1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x23E328u;
    {
        const bool branch_taken_0x23e328 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x23E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E328u;
        // 0x23e32c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e328) {
            ctx->pc = 0x23E390u;
            goto label_23e390;
        }
    }
    ctx->pc = 0x23E330u;
    // 0x23e330: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x23e330u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x23e334: 0x24828ff0  addiu       $v0, $a0, -0x7010
    ctx->pc = 0x23e334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938608));
    // 0x23e338: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x23e338u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23e33c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e340: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x23e340u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23e344: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x23e344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23e348: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23e348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x23e34c: 0xc049590  jal         func_125640
    ctx->pc = 0x23E34Cu;
    SET_GPR_U32(ctx, 31, 0x23E354u);
    ctx->pc = 0x23E350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E34Cu;
    // 0x23e350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23E34Cu, 0x23E354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E354u;
label_23e354:
    // 0x23e354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23e354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e358: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x23e358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x23e35c: 0x240401f4  addiu       $a0, $zero, 0x1F4
    ctx->pc = 0x23e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x23e360: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x23e360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x23e364: 0x3405ac44  ori         $a1, $zero, 0xAC44
    ctx->pc = 0x23e364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44100);
    // 0x23e368: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23e368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x23e36c: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x23e36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x23e370: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x23e370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x23e374: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x23E374u;
    SET_GPR_U32(ctx, 31, 0x23E37Cu);
    ctx->pc = 0x23E378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E374u;
    // 0x23e378: 0x26070032  addiu       $a3, $s0, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x23E374u, 0x23E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E37Cu;
label_23e37c:
    // 0x23e37c: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x23e37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x23e380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e384: 0xc049590  jal         func_125640
    ctx->pc = 0x23E384u;
    SET_GPR_U32(ctx, 31, 0x23E38Cu);
    ctx->pc = 0x23E388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E384u;
    // 0x23e388: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23E384u, 0x23E38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E38Cu;
label_23e38c:
    // 0x23e38c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23e38cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e390:
    // 0x23e390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e394: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23e394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23e398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e39c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E39Cu;
        // 0x23e3a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E3A4u;
}
