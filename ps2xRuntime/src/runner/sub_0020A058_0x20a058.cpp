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

// Function: sub_0020A058
// Address: 0x20a058 - 0x20a0f4
void sub_0020A058_0x20a058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A058_0x20a058");
#endif

    switch (ctx->pc) {
        case 0x20a058u: goto label_20a058;
        case 0x20a05cu: goto label_20a05c;
        case 0x20a060u: goto label_20a060;
        case 0x20a064u: goto label_20a064;
        case 0x20a068u: goto label_20a068;
        case 0x20a06cu: goto label_20a06c;
        case 0x20a070u: goto label_20a070;
        case 0x20a074u: goto label_20a074;
        case 0x20a078u: goto label_20a078;
        case 0x20a07cu: goto label_20a07c;
        case 0x20a080u: goto label_20a080;
        case 0x20a084u: goto label_20a084;
        case 0x20a088u: goto label_20a088;
        case 0x20a08cu: goto label_20a08c;
        case 0x20a090u: goto label_20a090;
        case 0x20a094u: goto label_20a094;
        case 0x20a098u: goto label_20a098;
        case 0x20a09cu: goto label_20a09c;
        case 0x20a0a0u: goto label_20a0a0;
        case 0x20a0a4u: goto label_20a0a4;
        case 0x20a0a8u: goto label_20a0a8;
        case 0x20a0acu: goto label_20a0ac;
        case 0x20a0b0u: goto label_20a0b0;
        case 0x20a0b4u: goto label_20a0b4;
        case 0x20a0b8u: goto label_20a0b8;
        case 0x20a0bcu: goto label_20a0bc;
        case 0x20a0c0u: goto label_20a0c0;
        case 0x20a0c4u: goto label_20a0c4;
        case 0x20a0c8u: goto label_20a0c8;
        case 0x20a0ccu: goto label_20a0cc;
        case 0x20a0d0u: goto label_20a0d0;
        case 0x20a0d4u: goto label_20a0d4;
        case 0x20a0d8u: goto label_20a0d8;
        case 0x20a0dcu: goto label_20a0dc;
        case 0x20a0e0u: goto label_20a0e0;
        case 0x20a0e4u: goto label_20a0e4;
        case 0x20a0e8u: goto label_20a0e8;
        case 0x20a0ecu: goto label_20a0ec;
        case 0x20a0f0u: goto label_20a0f0;
        default: break;
    }

    ctx->pc = 0x20a058u;

label_20a058:
    // 0x20a058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20a05c:
    // 0x20a05c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20a060:
    // 0x20a060: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20a060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_20a064:
    // 0x20a064: 0xc081d84  jal         func_207610
label_20a068:
    if (ctx->pc == 0x20A068u) {
        ctx->pc = 0x20A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A064u;
        // 0x20a068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A06Cu;
        goto label_20a06c;
    }
    ctx->pc = 0x20A064u;
    SET_GPR_U32(ctx, 31, 0x20A06Cu);
    ctx->pc = 0x20A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A064u;
    // 0x20a068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20A064u, 0x20A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A06Cu;
label_20a06c:
    // 0x20a06c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a070:
    // 0x20a070: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20a070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a074:
    // 0x20a074: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_20a078:
    if (ctx->pc == 0x20A078u) {
        ctx->pc = 0x20A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A074u;
        // 0x20a078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A07Cu;
        goto label_20a07c;
    }
    ctx->pc = 0x20A074u;
    {
        const bool branch_taken_0x20a074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A074u;
        // 0x20a078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a074) {
            ctx->pc = 0x20A098u;
            goto label_20a098;
        }
    }
    ctx->pc = 0x20A07Cu;
label_20a07c:
    // 0x20a07c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_20a080:
    // 0x20a080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a084:
    // 0x20a084: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20a084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20a088:
    // 0x20a088: 0x24848260  addiu       $a0, $a0, -0x7DA0
    ctx->pc = 0x20a088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935136));
label_20a08c:
    // 0x20a08c: 0x8082e3e  j           func_20B8F8
label_20a090:
    if (ctx->pc == 0x20A090u) {
        ctx->pc = 0x20A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A08Cu;
        // 0x20a090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A094u;
        goto label_20a094;
    }
    ctx->pc = 0x20A08Cu;
    ctx->pc = 0x20A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A08Cu;
    // 0x20a090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20A094u;
label_20a094:
    // 0x20a094: 0x0  nop
    ctx->pc = 0x20a094u;
    // NOP
label_20a098:
    // 0x20a098: 0xc0829ea  jal         func_20A7A8
label_20a09c:
    if (ctx->pc == 0x20A09Cu) {
        ctx->pc = 0x20A0A0u;
        goto label_20a0a0;
    }
    ctx->pc = 0x20A098u;
    SET_GPR_U32(ctx, 31, 0x20A0A0u);
    ctx->pc = 0x20A7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A7A8u, 0x20A098u, 0x20A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0A0u;
label_20a0a0:
    // 0x20a0a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a0a4:
    // 0x20a0a4: 0xc0818ee  jal         func_2063B8
label_20a0a8:
    if (ctx->pc == 0x20A0A8u) {
        ctx->pc = 0x20A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0A4u;
        // 0x20a0a8: 0x8e0501c0  lw          $a1, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0ACu;
        goto label_20a0ac;
    }
    ctx->pc = 0x20A0A4u;
    SET_GPR_U32(ctx, 31, 0x20A0ACu);
    ctx->pc = 0x20A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A0A4u;
    // 0x20a0a8: 0x8e0501c0  lw          $a1, 0x1C0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2063B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2063B8u, 0x20A0A4u, 0x20A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0ACu;
label_20a0ac:
    // 0x20a0ac: 0xc0819de  jal         func_206778
label_20a0b0:
    if (ctx->pc == 0x20A0B0u) {
        ctx->pc = 0x20A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0ACu;
        // 0x20a0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0B4u;
        goto label_20a0b4;
    }
    ctx->pc = 0x20A0ACu;
    SET_GPR_U32(ctx, 31, 0x20A0B4u);
    ctx->pc = 0x20A0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A0ACu;
    // 0x20a0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206778u, 0x20A0ACu, 0x20A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0B4u;
label_20a0b4:
    // 0x20a0b4: 0xc092dc8  jal         func_24B720
label_20a0b8:
    if (ctx->pc == 0x20A0B8u) {
        ctx->pc = 0x20A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0B4u;
        // 0x20a0b8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0BCu;
        goto label_20a0bc;
    }
    ctx->pc = 0x20A0B4u;
    SET_GPR_U32(ctx, 31, 0x20A0BCu);
    ctx->pc = 0x20A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A0B4u;
    // 0x20a0b8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B720u, 0x20A0B4u, 0x20A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0BCu;
label_20a0bc:
    // 0x20a0bc: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x20a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_20a0c0:
    // 0x20a0c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20a0c4:
    if (ctx->pc == 0x20A0C4u) {
        ctx->pc = 0x20A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0C0u;
        // 0x20a0c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0C8u;
        goto label_20a0c8;
    }
    ctx->pc = 0x20A0C0u;
    {
        const bool branch_taken_0x20a0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0C0u;
        // 0x20a0c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0c0) {
            ctx->pc = 0x20A0D8u;
            goto label_20a0d8;
        }
    }
    ctx->pc = 0x20A0C8u;
label_20a0c8:
    // 0x20a0c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20a0cc:
    // 0x20a0cc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x20a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_20a0d0:
    // 0x20a0d0: 0x60f809  jalr        $v1
label_20a0d4:
    if (ctx->pc == 0x20A0D4u) {
        ctx->pc = 0x20A0D8u;
        goto label_20a0d8;
    }
    ctx->pc = 0x20A0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A0D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A0D0u, 0x20A0D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A0D8u;
label_20a0d8:
    // 0x20a0d8: 0xc080930  jal         func_2024C0
label_20a0dc:
    if (ctx->pc == 0x20A0DCu) {
        ctx->pc = 0x20A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0D8u;
        // 0x20a0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0E0u;
        goto label_20a0e0;
    }
    ctx->pc = 0x20A0D8u;
    SET_GPR_U32(ctx, 31, 0x20A0E0u);
    ctx->pc = 0x20A0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A0D8u;
    // 0x20a0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2024C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2024C0u, 0x20A0D8u, 0x20A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A0E0u;
label_20a0e0:
    // 0x20a0e0: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x20a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
label_20a0e4:
    // 0x20a0e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20a0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20a0e8:
    // 0x20a0e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a0ec:
    // 0x20a0ec: 0x3e00008  jr          $ra
label_20a0f0:
    if (ctx->pc == 0x20A0F0u) {
        ctx->pc = 0x20A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0ECu;
        // 0x20a0f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0F4u;
        goto label_fallthrough_0x20a0ec;
    }
    ctx->pc = 0x20A0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0ECu;
        // 0x20a0f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20a0ec:
    ctx->pc = 0x20A0F4u;
}
