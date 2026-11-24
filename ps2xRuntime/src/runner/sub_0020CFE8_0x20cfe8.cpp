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

// Function: sub_0020CFE8
// Address: 0x20cfe8 - 0x20d070
void sub_0020CFE8_0x20cfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CFE8_0x20cfe8");
#endif

    switch (ctx->pc) {
        case 0x20cfe8u: goto label_20cfe8;
        case 0x20cfecu: goto label_20cfec;
        case 0x20cff0u: goto label_20cff0;
        case 0x20cff4u: goto label_20cff4;
        case 0x20cff8u: goto label_20cff8;
        case 0x20cffcu: goto label_20cffc;
        case 0x20d000u: goto label_20d000;
        case 0x20d004u: goto label_20d004;
        case 0x20d008u: goto label_20d008;
        case 0x20d00cu: goto label_20d00c;
        case 0x20d010u: goto label_20d010;
        case 0x20d014u: goto label_20d014;
        case 0x20d018u: goto label_20d018;
        case 0x20d01cu: goto label_20d01c;
        case 0x20d020u: goto label_20d020;
        case 0x20d024u: goto label_20d024;
        case 0x20d028u: goto label_20d028;
        case 0x20d02cu: goto label_20d02c;
        case 0x20d030u: goto label_20d030;
        case 0x20d034u: goto label_20d034;
        case 0x20d038u: goto label_20d038;
        case 0x20d03cu: goto label_20d03c;
        case 0x20d040u: goto label_20d040;
        case 0x20d044u: goto label_20d044;
        case 0x20d048u: goto label_20d048;
        case 0x20d04cu: goto label_20d04c;
        case 0x20d050u: goto label_20d050;
        case 0x20d054u: goto label_20d054;
        case 0x20d058u: goto label_20d058;
        case 0x20d05cu: goto label_20d05c;
        case 0x20d060u: goto label_20d060;
        case 0x20d064u: goto label_20d064;
        case 0x20d068u: goto label_20d068;
        case 0x20d06cu: goto label_20d06c;
        default: break;
    }

    ctx->pc = 0x20cfe8u;

label_20cfe8:
    // 0x20cfe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20cfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20cfec:
    // 0x20cfec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20cfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_20cff0:
    // 0x20cff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20cff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20cff4:
    // 0x20cff4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_20cff8:
    // 0x20cff8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20cff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20cffc:
    // 0x20cffc: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_20d000:
    if (ctx->pc == 0x20D000u) {
        ctx->pc = 0x20D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFFCu;
        // 0x20d000: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D004u;
        goto label_20d004;
    }
    ctx->pc = 0x20CFFCu;
    {
        const bool branch_taken_0x20cffc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFFCu;
        // 0x20d000: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cffc) {
            ctx->pc = 0x20D020u;
            goto label_20d020;
        }
    }
    ctx->pc = 0x20D004u;
label_20d004:
    // 0x20d004: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20d004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d008:
    // 0x20d008: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x20d008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_20d00c:
    // 0x20d00c: 0x60f809  jalr        $v1
label_20d010:
    if (ctx->pc == 0x20D010u) {
        ctx->pc = 0x20D014u;
        goto label_20d014;
    }
    ctx->pc = 0x20D00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D014u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D00Cu, 0x20D014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D014u;
label_20d014:
    // 0x20d014: 0x10000012  b           . + 4 + (0x12 << 2)
label_20d018:
    if (ctx->pc == 0x20D018u) {
        ctx->pc = 0x20D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D014u;
        // 0x20d018: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D01Cu;
        goto label_20d01c;
    }
    ctx->pc = 0x20D014u;
    {
        const bool branch_taken_0x20d014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D014u;
        // 0x20d018: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d014) {
            ctx->pc = 0x20D060u;
            goto label_20d060;
        }
    }
    ctx->pc = 0x20D01Cu;
label_20d01c:
    // 0x20d01c: 0x0  nop
    ctx->pc = 0x20d01cu;
    // NOP
label_20d020:
    // 0x20d020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d024:
    // 0x20d024: 0xc094854  jal         func_252150
label_20d028:
    if (ctx->pc == 0x20D028u) {
        ctx->pc = 0x20D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D024u;
        // 0x20d028: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D02Cu;
        goto label_20d02c;
    }
    ctx->pc = 0x20D024u;
    SET_GPR_U32(ctx, 31, 0x20D02Cu);
    ctx->pc = 0x20D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D024u;
    // 0x20d028: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x20D024u, 0x20D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D02Cu;
label_20d02c:
    // 0x20d02c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d030:
    // 0x20d030: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20d030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20d034:
    // 0x20d034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d038:
    // 0x20d038: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_20d03c:
    // 0x20d03c: 0x40f809  jalr        $v0
label_20d040:
    if (ctx->pc == 0x20D040u) {
        ctx->pc = 0x20D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D03Cu;
        // 0x20d040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D044u;
        goto label_20d044;
    }
    ctx->pc = 0x20D03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D044u);
        ctx->pc = 0x20D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D03Cu;
        // 0x20d040: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D03Cu, 0x20D044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D044u;
label_20d044:
    // 0x20d044: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20d044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d048:
    // 0x20d048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20d04c:
    // 0x20d04c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20d04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d050:
    // 0x20d050: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x20d050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_20d054:
    // 0x20d054: 0x40f809  jalr        $v0
label_20d058:
    if (ctx->pc == 0x20D058u) {
        ctx->pc = 0x20D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D054u;
        // 0x20d058: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D05Cu;
        goto label_20d05c;
    }
    ctx->pc = 0x20D054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D05Cu);
        ctx->pc = 0x20D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D054u;
        // 0x20d058: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D054u, 0x20D05Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D05Cu;
label_20d05c:
    // 0x20d05c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20d05cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20d060:
    // 0x20d060: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20d060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20d064:
    // 0x20d064: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20d064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20d068:
    // 0x20d068: 0x3e00008  jr          $ra
label_20d06c:
    if (ctx->pc == 0x20D06Cu) {
        ctx->pc = 0x20D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D068u;
        // 0x20d06c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D070u;
        goto label_fallthrough_0x20d068;
    }
    ctx->pc = 0x20D068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D068u;
        // 0x20d06c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20d068:
    ctx->pc = 0x20D070u;
}
