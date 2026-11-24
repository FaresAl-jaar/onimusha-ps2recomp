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

// Function: sub_0031FFB0
// Address: 0x31ffb0 - 0x320080
void sub_0031FFB0_0x31ffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FFB0_0x31ffb0");
#endif

    switch (ctx->pc) {
        case 0x320008u: goto label_320008;
        case 0x320010u: goto label_320010;
        case 0x320028u: goto label_320028;
        default: break;
    }

    ctx->pc = 0x31ffb0u;

    // 0x31ffb0: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x31ffb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31ffb4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FFB4u;
    {
        const bool branch_taken_0x31ffb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFB4u;
        // 0x31ffb8: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ffb4) {
            ctx->pc = 0x31FFC8u;
            goto label_31ffc8;
        }
    }
    ctx->pc = 0x31FFBCu;
    // 0x31ffbc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FFBCu;
    {
        const bool branch_taken_0x31ffbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x31ffbc) {
            ctx->pc = 0x31FFD0u;
            goto label_31ffd0;
        }
    }
    ctx->pc = 0x31FFC4u;
    // 0x31ffc4: 0x0  nop
    ctx->pc = 0x31ffc4u;
    // NOP
label_31ffc8:
    // 0x31ffc8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x31FFC8u;
    {
        const bool branch_taken_0x31ffc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFC8u;
        // 0x31ffcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ffc8) {
            ctx->pc = 0x320078u;
            goto label_320078;
        }
    }
    ctx->pc = 0x31FFD0u;
label_31ffd0:
    // 0x31ffd0: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x31ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x31ffd4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FFD4u;
    {
        const bool branch_taken_0x31ffd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x31FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFD4u;
        // 0x31ffd8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ffd4) {
            ctx->pc = 0x31FFF0u;
            goto label_31fff0;
        }
    }
    ctx->pc = 0x31FFDCu;
    // 0x31ffdc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FFDCu;
    {
        const bool branch_taken_0x31ffdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31ffdc) {
            ctx->pc = 0x31FFF0u;
            goto label_31fff0;
        }
    }
    ctx->pc = 0x31FFE4u;
    // 0x31ffe4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x31FFE4u;
    {
        const bool branch_taken_0x31ffe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFE4u;
        // 0x31ffe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ffe4) {
            ctx->pc = 0x320078u;
            goto label_320078;
        }
    }
    ctx->pc = 0x31FFECu;
    // 0x31ffec: 0x0  nop
    ctx->pc = 0x31ffecu;
    // NOP
label_31fff0:
    // 0x31fff0: 0x240200f1  addiu       $v0, $zero, 0xF1
    ctx->pc = 0x31fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x31fff4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31FFF4u;
    {
        const bool branch_taken_0x31fff4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x31FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFF4u;
        // 0x31fff8: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fff4) {
            ctx->pc = 0x320010u;
            goto label_320010;
        }
    }
    ctx->pc = 0x31FFFCu;
    // 0x31fffc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31FFFCu;
    {
        const bool branch_taken_0x31fffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31fffc) {
            ctx->pc = 0x320010u;
            goto label_320010;
        }
    }
    ctx->pc = 0x320004u;
    // 0x320004: 0x1000001c  b           . + 4 + (0x1C << 2)
label_320008:
    if (ctx->pc == 0x320008u) {
        ctx->pc = 0x320008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320004u;
        // 0x320008: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32000Cu;
        goto label_fallthrough_0x320004;
    }
    ctx->pc = 0x320004u;
    {
        const bool branch_taken_0x320004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320004u;
        // 0x320008: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320004) {
            ctx->pc = 0x320078u;
            goto label_320078;
        }
    }
label_fallthrough_0x320004:
    ctx->pc = 0x32000Cu;
    // 0x32000c: 0x0  nop
    ctx->pc = 0x32000cu;
    // NOP
label_320010:
    // 0x320010: 0x240200f2  addiu       $v0, $zero, 0xF2
    ctx->pc = 0x320010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x320014: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x320014u;
    {
        const bool branch_taken_0x320014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x320018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320014u;
        // 0x320018: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320014) {
            ctx->pc = 0x320030u;
            goto label_320030;
        }
    }
    ctx->pc = 0x32001Cu;
    // 0x32001c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32001Cu;
    {
        const bool branch_taken_0x32001c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32001c) {
            ctx->pc = 0x320030u;
            goto label_320030;
        }
    }
    ctx->pc = 0x320024u;
    // 0x320024: 0x10000014  b           . + 4 + (0x14 << 2)
label_320028:
    if (ctx->pc == 0x320028u) {
        ctx->pc = 0x320028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320024u;
        // 0x320028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32002Cu;
        goto label_fallthrough_0x320024;
    }
    ctx->pc = 0x320024u;
    {
        const bool branch_taken_0x320024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320024u;
        // 0x320028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320024) {
            ctx->pc = 0x320078u;
            goto label_320078;
        }
    }
label_fallthrough_0x320024:
    ctx->pc = 0x32002Cu;
    // 0x32002c: 0x0  nop
    ctx->pc = 0x32002cu;
    // NOP
label_320030:
    // 0x320030: 0x240200f3  addiu       $v0, $zero, 0xF3
    ctx->pc = 0x320030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x320034: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x320034u;
    {
        const bool branch_taken_0x320034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x320038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320034u;
        // 0x320038: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320034) {
            ctx->pc = 0x320050u;
            goto label_320050;
        }
    }
    ctx->pc = 0x32003Cu;
    // 0x32003c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32003Cu;
    {
        const bool branch_taken_0x32003c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32003c) {
            ctx->pc = 0x320050u;
            goto label_320050;
        }
    }
    ctx->pc = 0x320044u;
    // 0x320044: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x320044u;
    {
        const bool branch_taken_0x320044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320044u;
        // 0x320048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320044) {
            ctx->pc = 0x320078u;
            goto label_320078;
        }
    }
    ctx->pc = 0x32004Cu;
    // 0x32004c: 0x0  nop
    ctx->pc = 0x32004cu;
    // NOP
label_320050:
    // 0x320050: 0x240200f4  addiu       $v0, $zero, 0xF4
    ctx->pc = 0x320050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x320054: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x320054u;
    {
        const bool branch_taken_0x320054 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x320058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320054u;
        // 0x320058: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320054) {
            ctx->pc = 0x320070u;
            goto label_320070;
        }
    }
    ctx->pc = 0x32005Cu;
    // 0x32005c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32005Cu;
    {
        const bool branch_taken_0x32005c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32005c) {
            ctx->pc = 0x320070u;
            goto label_320070;
        }
    }
    ctx->pc = 0x320064u;
    // 0x320064: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x320064u;
    {
        const bool branch_taken_0x320064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320064u;
        // 0x320068: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320064) {
            ctx->pc = 0x320078u;
            goto label_320078;
        }
    }
    ctx->pc = 0x32006Cu;
    // 0x32006c: 0x0  nop
    ctx->pc = 0x32006cu;
    // NOP
label_320070:
    // 0x320070: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x320070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320074: 0x0  nop
    ctx->pc = 0x320074u;
    // NOP
label_320078:
    // 0x320078: 0x3e00008  jr          $ra
    ctx->pc = 0x320078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320080u;
}
