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

// Function: sub_0020B050
// Address: 0x20b050 - 0x20b0b8
void sub_0020B050_0x20b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B050_0x20b050");
#endif

    switch (ctx->pc) {
        case 0x20b050u: goto label_20b050;
        case 0x20b054u: goto label_20b054;
        case 0x20b058u: goto label_20b058;
        case 0x20b05cu: goto label_20b05c;
        case 0x20b060u: goto label_20b060;
        case 0x20b064u: goto label_20b064;
        case 0x20b068u: goto label_20b068;
        case 0x20b06cu: goto label_20b06c;
        case 0x20b070u: goto label_20b070;
        case 0x20b074u: goto label_20b074;
        case 0x20b078u: goto label_20b078;
        case 0x20b07cu: goto label_20b07c;
        case 0x20b080u: goto label_20b080;
        case 0x20b084u: goto label_20b084;
        case 0x20b088u: goto label_20b088;
        case 0x20b08cu: goto label_20b08c;
        case 0x20b090u: goto label_20b090;
        case 0x20b094u: goto label_20b094;
        case 0x20b098u: goto label_20b098;
        case 0x20b09cu: goto label_20b09c;
        case 0x20b0a0u: goto label_20b0a0;
        case 0x20b0a4u: goto label_20b0a4;
        case 0x20b0a8u: goto label_20b0a8;
        case 0x20b0acu: goto label_20b0ac;
        case 0x20b0b0u: goto label_20b0b0;
        case 0x20b0b4u: goto label_20b0b4;
        default: break;
    }

    ctx->pc = 0x20b050u;

label_20b050:
    // 0x20b050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20b054:
    // 0x20b054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20b058:
    // 0x20b058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b05c:
    // 0x20b05c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20b05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20b060:
    // 0x20b060: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20b060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20b064:
    // 0x20b064: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20b064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_20b068:
    // 0x20b068: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20b068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_20b06c:
    // 0x20b06c: 0xc082d4c  jal         func_20B530
label_20b070:
    if (ctx->pc == 0x20B070u) {
        ctx->pc = 0x20B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B06Cu;
        // 0x20b070: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B074u;
        goto label_20b074;
    }
    ctx->pc = 0x20B06Cu;
    SET_GPR_U32(ctx, 31, 0x20B074u);
    ctx->pc = 0x20B070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B06Cu;
    // 0x20b070: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B530u, 0x20B06Cu, 0x20B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B074u;
label_20b074:
    // 0x20b074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b078:
    // 0x20b078: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_20b07c:
    if (ctx->pc == 0x20B07Cu) {
        ctx->pc = 0x20B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B078u;
        // 0x20b07c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B080u;
        goto label_20b080;
    }
    ctx->pc = 0x20B078u;
    {
        const bool branch_taken_0x20b078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20b078) {
            ctx->pc = 0x20B07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B078u;
            // 0x20b07c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B0A4u;
            goto label_20b0a4;
        }
    }
    ctx->pc = 0x20B080u;
label_20b080:
    // 0x20b080: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20b080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20b084:
    // 0x20b084: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20b088:
    if (ctx->pc == 0x20B088u) {
        ctx->pc = 0x20B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B084u;
        // 0x20b088: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B08Cu;
        goto label_20b08c;
    }
    ctx->pc = 0x20B084u;
    {
        const bool branch_taken_0x20b084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B084u;
        // 0x20b088: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b084) {
            ctx->pc = 0x20B0A0u;
            goto label_20b0a0;
        }
    }
    ctx->pc = 0x20B08Cu;
label_20b08c:
    // 0x20b08c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x20b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_20b090:
    // 0x20b090: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20b094:
    if (ctx->pc == 0x20B094u) {
        ctx->pc = 0x20B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B090u;
        // 0x20b094: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B098u;
        goto label_20b098;
    }
    ctx->pc = 0x20B090u;
    {
        const bool branch_taken_0x20b090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B090u;
        // 0x20b094: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b090) {
            ctx->pc = 0x20B0A0u;
            goto label_20b0a0;
        }
    }
    ctx->pc = 0x20B098u;
label_20b098:
    // 0x20b098: 0x40f809  jalr        $v0
label_20b09c:
    if (ctx->pc == 0x20B09Cu) {
        ctx->pc = 0x20B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B098u;
        // 0x20b09c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B0A0u;
        goto label_20b0a0;
    }
    ctx->pc = 0x20B098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B0A0u);
        ctx->pc = 0x20B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B098u;
        // 0x20b09c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B098u, 0x20B0A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B0A0u;
label_20b0a0:
    // 0x20b0a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b0a4:
    // 0x20b0a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20b0a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20b0a8:
    // 0x20b0a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20b0a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20b0ac:
    // 0x20b0ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20b0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20b0b0:
    // 0x20b0b0: 0x3e00008  jr          $ra
label_20b0b4:
    if (ctx->pc == 0x20B0B4u) {
        ctx->pc = 0x20B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0B0u;
        // 0x20b0b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B0B8u;
        goto label_fallthrough_0x20b0b0;
    }
    ctx->pc = 0x20B0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0B0u;
        // 0x20b0b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b0b0:
    ctx->pc = 0x20B0B8u;
}
