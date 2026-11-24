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

// Function: sub_0012EE88
// Address: 0x12ee88 - 0x12ef38
void sub_0012EE88_0x12ee88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EE88_0x12ee88");
#endif

    switch (ctx->pc) {
        case 0x12eeacu: goto label_12eeac;
        case 0x12eeb4u: goto label_12eeb4;
        case 0x12eee4u: goto label_12eee4;
        case 0x12ef08u: goto label_12ef08;
        default: break;
    }

    ctx->pc = 0x12ee88u;

    // 0x12ee88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ee88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ee8c: 0x477c2  srl         $t6, $a0, 31
    ctx->pc = 0x12ee8cu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x12ee90: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x12ee90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12ee94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12ee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12ee98: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x12ee98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
    // 0x12ee9c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EE9Cu;
    {
        const bool branch_taken_0x12ee9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE9Cu;
        // 0x12eea0: 0xafae0004  sw          $t6, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee9c) {
            ctx->pc = 0x12EEC0u;
            goto label_12eec0;
        }
    }
    ctx->pc = 0x12EEA4u;
    // 0x12eea4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x12eea4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12eea8: 0xafaf0000  sw          $t7, 0x0($sp)
    ctx->pc = 0x12eea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 15));
label_12eeac:
    // 0x12eeac: 0xc04b956  jal         func_12E558
    ctx->pc = 0x12EEACu;
    SET_GPR_U32(ctx, 31, 0x12EEB4u);
    ctx->pc = 0x12EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EEACu;
    // 0x12eeb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E558u, 0x12EEACu, 0x12EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EEB4u;
label_12eeb4:
    // 0x12eeb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12eeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12eeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEB8u;
        // 0x12eebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EEC0u;
label_12eec0:
    // 0x12eec0: 0x240f003c  addiu       $t7, $zero, 0x3C
    ctx->pc = 0x12eec0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x12eec4: 0x11c0001a  beqz        $t6, . + 4 + (0x1A << 2)
    ctx->pc = 0x12EEC4u;
    {
        const bool branch_taken_0x12eec4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEC4u;
        // 0x12eec8: 0xafaf0008  sw          $t7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eec4) {
            ctx->pc = 0x12EF30u;
            goto label_12ef30;
        }
    }
    ctx->pc = 0x12EECCu;
    // 0x12eecc: 0x2402fe0f  addiu       $v0, $zero, -0x1F1
    ctx->pc = 0x12eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966799));
    // 0x12eed0: 0x3c0f8000  lui         $t7, 0x8000
    ctx->pc = 0x12eed0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32768 << 16));
    // 0x12eed4: 0x108ffff7  beq         $a0, $t7, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12EED4u;
    {
        const bool branch_taken_0x12eed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x12EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EED4u;
        // 0x12eed8: 0x2157c  dsll32      $v0, $v0, 21 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eed4) {
            ctx->pc = 0x12EEB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12eeb4;
        }
    }
    ctx->pc = 0x12EEDCu;
    // 0x12eedc: 0x47823  negu        $t7, $a0
    ctx->pc = 0x12eedcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x12eee0: 0x1e0782d  daddu       $t7, $t7, $zero
    ctx->pc = 0x12eee0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_12eee4:
    // 0x12eee4: 0xffaf0010  sd          $t7, 0x10($sp)
    ctx->pc = 0x12eee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 15));
    // 0x12eee8: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x12eee8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x12eeec: 0xdfac0010  ld          $t4, 0x10($sp)
    ctx->pc = 0x12eeecu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12eef0: 0xf793a  dsrl        $t7, $t7, 4
    ctx->pc = 0x12eef0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 4);
    // 0x12eef4: 0x1ec782b  sltu        $t7, $t7, $t4
    ctx->pc = 0x12eef4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x12eef8: 0x15e0ffec  bnez        $t7, . + 4 + (-0x14 << 2)
    ctx->pc = 0x12EEF8u;
    {
        const bool branch_taken_0x12eef8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EEF8u;
        // 0x12eefc: 0x240bfff0  addiu       $t3, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eef8) {
            ctx->pc = 0x12EEACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12eeac;
        }
    }
    ctx->pc = 0x12EF00u;
    // 0x12ef00: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x12ef00u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ef04: 0xb593a  dsrl        $t3, $t3, 4
    ctx->pc = 0x12ef04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 4);
label_12ef08:
    // 0x12ef08: 0xc7078  dsll        $t6, $t4, 1
    ctx->pc = 0x12ef08u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) << 1);
    // 0x12ef0c: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x12ef0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x12ef10: 0x16e782b  sltu        $t7, $t3, $t6
    ctx->pc = 0x12ef10u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12ef14: 0x0  nop
    ctx->pc = 0x12ef14u;
    // NOP
    // 0x12ef18: 0x0  nop
    ctx->pc = 0x12ef18u;
    // NOP
    // 0x12ef1c: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12EF1Cu;
    {
        const bool branch_taken_0x12ef1c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF1Cu;
        // 0x12ef20: 0x1c0602d  daddu       $t4, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef1c) {
            ctx->pc = 0x12EF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ef08;
        }
    }
    ctx->pc = 0x12EF24u;
    // 0x12ef24: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x12ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x12ef28: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x12EF28u;
    {
        const bool branch_taken_0x12ef28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF28u;
        // 0x12ef2c: 0xffae0010  sd          $t6, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef28) {
            ctx->pc = 0x12EEACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12eeac;
        }
    }
    ctx->pc = 0x12EF30u;
label_12ef30:
    // 0x12ef30: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x12EF30u;
    {
        const bool branch_taken_0x12ef30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EF30u;
        // 0x12ef34: 0x80782d  daddu       $t7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ef30) {
            ctx->pc = 0x12EEE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12eee4;
        }
    }
    ctx->pc = 0x12EF38u;
}
