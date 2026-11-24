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

// Function: sub_002470C8
// Address: 0x2470c8 - 0x247184
void sub_002470C8_0x2470c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002470C8_0x2470c8");
#endif

    switch (ctx->pc) {
        case 0x2470f0u: goto label_2470f0;
        case 0x247110u: goto label_247110;
        case 0x247138u: goto label_247138;
        case 0x24714cu: goto label_24714c;
        default: break;
    }

    ctx->pc = 0x2470c8u;

    // 0x2470c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2470c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2470cc: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2470ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2470d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2470d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2470d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2470d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2470d8: 0x2450ea18  addiu       $s0, $v0, -0x15E8
    ctx->pc = 0x2470d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961688));
    // 0x2470dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2470dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2470e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2470e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2470e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2470e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2470e8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2470e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2470ec: 0x0  nop
    ctx->pc = 0x2470ecu;
    // NOP
label_2470f0:
    // 0x2470f0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x2470f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2470f4: 0x54720009  bnel        $v1, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2470F4u;
    {
        const bool branch_taken_0x2470f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2470f4) {
            ctx->pc = 0x2470F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2470F4u;
            // 0x2470f8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24711Cu;
            goto label_24711c;
        }
    }
    ctx->pc = 0x2470FCu;
    // 0x2470fc: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x2470fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x247100: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x247100u;
    {
        const bool branch_taken_0x247100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x247100) {
            ctx->pc = 0x247104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247100u;
            // 0x247104: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24711Cu;
            goto label_24711c;
        }
    }
    ctx->pc = 0x247108u;
    // 0x247108: 0xc0438e0  jal         func_10E380
    ctx->pc = 0x247108u;
    SET_GPR_U32(ctx, 31, 0x247110u);
    ctx->pc = 0x24710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247108u;
    // 0x24710c: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E380u, 0x247108u, 0x247110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247110u;
label_247110:
    // 0x247110: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x247110u;
    {
        const bool branch_taken_0x247110 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x247110) {
            ctx->pc = 0x247114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247110u;
            // 0x247114: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247170u;
            goto label_247170;
        }
    }
    ctx->pc = 0x247118u;
    // 0x247118: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x247118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24711c:
    // 0x24711c: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x24711cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x247120: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x247120u;
    {
        const bool branch_taken_0x247120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247120u;
        // 0x247124: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247120) {
            ctx->pc = 0x2470F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2470f0;
        }
    }
    ctx->pc = 0x247128u;
    // 0x247128: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x247128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24712c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24712cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247130: 0x2450ea18  addiu       $s0, $v0, -0x15E8
    ctx->pc = 0x247130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961688));
    // 0x247134: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x247134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_247138:
    // 0x247138: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x247138u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24713c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x24713Cu;
    {
        const bool branch_taken_0x24713c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x24713c) {
            ctx->pc = 0x247140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24713Cu;
            // 0x247140: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247150u;
            goto label_247150;
        }
    }
    ctx->pc = 0x247144u;
    // 0x247144: 0xc091b56  jal         func_246D58
    ctx->pc = 0x247144u;
    SET_GPR_U32(ctx, 31, 0x24714Cu);
    ctx->pc = 0x247148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247144u;
    // 0x247148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246D58u, 0x247144u, 0x24714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24714Cu;
label_24714c:
    // 0x24714c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x24714cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_247150:
    // 0x247150: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x247150u;
    {
        const bool branch_taken_0x247150 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x247154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247150u;
        // 0x247154: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247150) {
            ctx->pc = 0x247138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247138;
        }
    }
    ctx->pc = 0x247158u;
    // 0x247158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24715c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24715cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247160: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x247160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247164: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x247164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x247168: 0x8091f28  j           func_247CA0
    ctx->pc = 0x247168u;
    ctx->pc = 0x24716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247168u;
    // 0x24716c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247CA0u;
    sub_00247CA0_0x247ca0(rdram, ctx, runtime); return;
    ctx->pc = 0x247170u;
label_247170:
    // 0x247170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247174: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x247174u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247178: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x247178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24717c: 0x3e00008  jr          $ra
    ctx->pc = 0x24717Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24717Cu;
        // 0x247180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24717Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247184u;
}
