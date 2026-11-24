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

// Function: sub_0023B060
// Address: 0x23b060 - 0x23b0c0
void sub_0023B060_0x23b060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B060_0x23b060");
#endif

    switch (ctx->pc) {
        case 0x23b060u: goto label_23b060;
        case 0x23b064u: goto label_23b064;
        case 0x23b068u: goto label_23b068;
        case 0x23b06cu: goto label_23b06c;
        case 0x23b070u: goto label_23b070;
        case 0x23b074u: goto label_23b074;
        case 0x23b078u: goto label_23b078;
        case 0x23b07cu: goto label_23b07c;
        case 0x23b080u: goto label_23b080;
        case 0x23b084u: goto label_23b084;
        case 0x23b088u: goto label_23b088;
        case 0x23b08cu: goto label_23b08c;
        case 0x23b090u: goto label_23b090;
        case 0x23b094u: goto label_23b094;
        case 0x23b098u: goto label_23b098;
        case 0x23b09cu: goto label_23b09c;
        case 0x23b0a0u: goto label_23b0a0;
        case 0x23b0a4u: goto label_23b0a4;
        case 0x23b0a8u: goto label_23b0a8;
        case 0x23b0acu: goto label_23b0ac;
        case 0x23b0b0u: goto label_23b0b0;
        case 0x23b0b4u: goto label_23b0b4;
        case 0x23b0b8u: goto label_23b0b8;
        case 0x23b0bcu: goto label_23b0bc;
        default: break;
    }

    ctx->pc = 0x23b060u;

label_23b060:
    // 0x23b060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23b064:
    // 0x23b064: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_23b068:
    if (ctx->pc == 0x23B068u) {
        ctx->pc = 0x23B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B064u;
        // 0x23b068: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B06Cu;
        goto label_23b06c;
    }
    ctx->pc = 0x23B064u;
    {
        const bool branch_taken_0x23b064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B064u;
        // 0x23b068: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b064) {
            ctx->pc = 0x23B080u;
            goto label_23b080;
        }
    }
    ctx->pc = 0x23B06Cu;
label_23b06c:
    // 0x23b06c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_23b070:
    // 0x23b070: 0xc08baa4  jal         func_22EA90
label_23b074:
    if (ctx->pc == 0x23B074u) {
        ctx->pc = 0x23B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B070u;
        // 0x23b074: 0x2484b3f8  addiu       $a0, $a0, -0x4C08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B078u;
        goto label_23b078;
    }
    ctx->pc = 0x23B070u;
    SET_GPR_U32(ctx, 31, 0x23B078u);
    ctx->pc = 0x23B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B070u;
    // 0x23b074: 0x2484b3f8  addiu       $a0, $a0, -0x4C08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23B070u, 0x23B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B078u;
label_23b078:
    // 0x23b078: 0x1000000e  b           . + 4 + (0xE << 2)
label_23b07c:
    if (ctx->pc == 0x23B07Cu) {
        ctx->pc = 0x23B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B078u;
        // 0x23b07c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B080u;
        goto label_23b080;
    }
    ctx->pc = 0x23B078u;
    {
        const bool branch_taken_0x23b078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B078u;
        // 0x23b07c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b078) {
            ctx->pc = 0x23B0B4u;
            goto label_23b0b4;
        }
    }
    ctx->pc = 0x23B080u;
label_23b080:
    // 0x23b080: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23b080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23b084:
    // 0x23b084: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_23b088:
    if (ctx->pc == 0x23B088u) {
        ctx->pc = 0x23B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B084u;
        // 0x23b088: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B08Cu;
        goto label_23b08c;
    }
    ctx->pc = 0x23B084u;
    {
        const bool branch_taken_0x23b084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B084u;
        // 0x23b088: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b084) {
            ctx->pc = 0x23B0B0u;
            goto label_23b0b0;
        }
    }
    ctx->pc = 0x23B08Cu;
label_23b08c:
    // 0x23b08c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23b08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b090:
    // 0x23b090: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23b090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23b094:
    // 0x23b094: 0x40f809  jalr        $v0
label_23b098:
    if (ctx->pc == 0x23B098u) {
        ctx->pc = 0x23B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B094u;
        // 0x23b098: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B09Cu;
        goto label_23b09c;
    }
    ctx->pc = 0x23B094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B09Cu);
        ctx->pc = 0x23B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B094u;
        // 0x23b098: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B094u, 0x23B09Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B09Cu;
label_23b09c:
    // 0x23b09c: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x23b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_23b0a0:
    // 0x23b0a0: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x23b0a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_23b0a4:
    // 0x23b0a4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x23b0a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_23b0a8:
    // 0x23b0a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_23b0ac:
    if (ctx->pc == 0x23B0ACu) {
        ctx->pc = 0x23B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0A8u;
        // 0x23b0ac: 0x212c3  sra         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0B0u;
        goto label_23b0b0;
    }
    ctx->pc = 0x23B0A8u;
    {
        const bool branch_taken_0x23b0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0A8u;
        // 0x23b0ac: 0x212c3  sra         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0a8) {
            ctx->pc = 0x23B0B4u;
            goto label_23b0b4;
        }
    }
    ctx->pc = 0x23B0B0u;
label_23b0b0:
    // 0x23b0b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23b0b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b0b4:
    // 0x23b0b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b0b8:
    // 0x23b0b8: 0x3e00008  jr          $ra
label_23b0bc:
    if (ctx->pc == 0x23B0BCu) {
        ctx->pc = 0x23B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0B8u;
        // 0x23b0bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0C0u;
        goto label_fallthrough_0x23b0b8;
    }
    ctx->pc = 0x23B0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0B8u;
        // 0x23b0bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23b0b8:
    ctx->pc = 0x23B0C0u;
}
