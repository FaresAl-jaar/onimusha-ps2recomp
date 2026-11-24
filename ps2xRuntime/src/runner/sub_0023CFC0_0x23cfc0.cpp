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

// Function: sub_0023CFC0
// Address: 0x23cfc0 - 0x23d088
void sub_0023CFC0_0x23cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CFC0_0x23cfc0");
#endif

    switch (ctx->pc) {
        case 0x23cff0u: goto label_23cff0;
        case 0x23d010u: goto label_23d010;
        case 0x23d02cu: goto label_23d02c;
        case 0x23d044u: goto label_23d044;
        case 0x23d054u: goto label_23d054;
        case 0x23d074u: goto label_23d074;
        default: break;
    }

    ctx->pc = 0x23cfc0u;

    // 0x23cfc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23cfc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23cfc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23cfc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cfcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23cfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23cfd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23cfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23cfd4: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x23cfd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23cfd8: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x23CFD8u;
    {
        const bool branch_taken_0x23cfd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFD8u;
        // 0x23cfdc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cfd8) {
            ctx->pc = 0x23D074u;
            goto label_23d074;
        }
    }
    ctx->pc = 0x23CFE0u;
    // 0x23cfe0: 0x50800025  beql        $a0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x23CFE0u;
    {
        const bool branch_taken_0x23cfe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cfe0) {
            ctx->pc = 0x23CFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CFE0u;
            // 0x23cfe4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D078u;
            goto label_23d078;
        }
    }
    ctx->pc = 0x23CFE8u;
    // 0x23cfe8: 0xc08db3e  jal         func_236CF8
    ctx->pc = 0x23CFE8u;
    SET_GPR_U32(ctx, 31, 0x23CFF0u);
    ctx->pc = 0x236CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236CF8u, 0x23CFE8u, 0x23CFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CFF0u;
label_23cff0:
    // 0x23cff0: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x23cff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x23cff4: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x23cff4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x23cff8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23cff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cffc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23d000: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D000u;
    {
        const bool branch_taken_0x23d000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D000u;
        // 0x23d004: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d000) {
            ctx->pc = 0x23D018u;
            goto label_23d018;
        }
    }
    ctx->pc = 0x23D008u;
    // 0x23d008: 0xc08de70  jal         func_2379C0
    ctx->pc = 0x23D008u;
    SET_GPR_U32(ctx, 31, 0x23D010u);
    ctx->pc = 0x23D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D008u;
    // 0x23d00c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2379C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2379C0u, 0x23D008u, 0x23D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D010u;
label_23d010:
    // 0x23d010: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x23D010u;
    {
        const bool branch_taken_0x23d010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D010u;
        // 0x23d014: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d010) {
            ctx->pc = 0x23D078u;
            goto label_23d078;
        }
    }
    ctx->pc = 0x23D018u;
label_23d018:
    // 0x23d018: 0x8202006c  lb          $v0, 0x6C($s0)
    ctx->pc = 0x23d018u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x23d01c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23D01Cu;
    {
        const bool branch_taken_0x23d01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D01Cu;
        // 0x23d020: 0x24c307ff  addiu       $v1, $a2, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d01c) {
            ctx->pc = 0x23D060u;
            goto label_23d060;
        }
    }
    ctx->pc = 0x23D024u;
    // 0x23d024: 0xc08da9a  jal         func_236A68
    ctx->pc = 0x23D024u;
    SET_GPR_U32(ctx, 31, 0x23D02Cu);
    ctx->pc = 0x23D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D024u;
    // 0x23d028: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A68u, 0x23D024u, 0x23D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D02Cu;
label_23d02c:
    // 0x23d02c: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x23d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x23d030: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23d030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23d034: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D034u;
    {
        const bool branch_taken_0x23d034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D034u;
        // 0x23d038: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d034) {
            ctx->pc = 0x23D044u;
            goto label_23d044;
        }
    }
    ctx->pc = 0x23D03Cu;
    // 0x23d03c: 0xc08daf0  jal         func_236BC0
    ctx->pc = 0x23D03Cu;
    SET_GPR_U32(ctx, 31, 0x23D044u);
    ctx->pc = 0x23D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D03Cu;
    // 0x23d040: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BC0u, 0x23D03Cu, 0x23D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D044u;
label_23d044:
    // 0x23d044: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x23d044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x23d048: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23d048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23d04c: 0xc08de70  jal         func_2379C0
    ctx->pc = 0x23D04Cu;
    SET_GPR_U32(ctx, 31, 0x23D054u);
    ctx->pc = 0x23D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D04Cu;
    // 0x23d050: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2379C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2379C0u, 0x23D04Cu, 0x23D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D054u;
label_23d054:
    // 0x23d054: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23D054u;
    {
        const bool branch_taken_0x23d054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D054u;
        // 0x23d058: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d054) {
            ctx->pc = 0x23D078u;
            goto label_23d078;
        }
    }
    ctx->pc = 0x23D05Cu;
    // 0x23d05c: 0x0  nop
    ctx->pc = 0x23d05cu;
    // NOP
label_23d060:
    // 0x23d060: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x23d060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x23d064: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x23d064u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x23d068: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d06c: 0xc08dd94  jal         func_237650
    ctx->pc = 0x23D06Cu;
    SET_GPR_U32(ctx, 31, 0x23D074u);
    ctx->pc = 0x23D070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D06Cu;
    // 0x23d070: 0x62ac3  sra         $a1, $a2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237650u, 0x23D06Cu, 0x23D074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D074u;
label_23d074:
    // 0x23d074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23d078:
    // 0x23d078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23d078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23d07c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23d07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d080: 0x3e00008  jr          $ra
    ctx->pc = 0x23D080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D080u;
        // 0x23d084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D088u;
}
