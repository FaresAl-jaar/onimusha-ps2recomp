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

// Function: sub_003DA020
// Address: 0x3da020 - 0x3da0e0
void sub_003DA020_0x3da020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA020_0x3da020");
#endif

    switch (ctx->pc) {
        case 0x3da074u: goto label_3da074;
        case 0x3da090u: goto label_3da090;
        case 0x3da0b0u: goto label_3da0b0;
        default: break;
    }

    ctx->pc = 0x3da020u;

    // 0x3da020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3da020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3da024: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3da024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3da028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3da028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3da02c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3da02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3da030: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3da030u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3da034: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3DA034u;
    {
        const bool branch_taken_0x3da034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DA038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA034u;
        // 0x3da038: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da034) {
            ctx->pc = 0x3DA088u;
            goto label_3da088;
        }
    }
    ctx->pc = 0x3DA03Cu;
    // 0x3da03c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA03Cu;
    {
        const bool branch_taken_0x3da03c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da03c) {
            ctx->pc = 0x3DA050u;
            goto label_3da050;
        }
    }
    ctx->pc = 0x3DA044u;
    // 0x3da044: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3DA044u;
    {
        const bool branch_taken_0x3da044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da044) {
            ctx->pc = 0x3DA0D0u;
            goto label_3da0d0;
        }
    }
    ctx->pc = 0x3DA04Cu;
    // 0x3da04c: 0x0  nop
    ctx->pc = 0x3da04cu;
    // NOP
label_3da050:
    // 0x3da050: 0x92072be5  lbu         $a3, 0x2BE5($s0)
    ctx->pc = 0x3da050u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11237)));
    // 0x3da054: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3da054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3da058: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x3da058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x3da05c: 0x34460040  ori         $a2, $v0, 0x40
    ctx->pc = 0x3da05cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3da060: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x3da060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3da064: 0x30e20002  andi        $v0, $a3, 0x2
    ctx->pc = 0x3da064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x3da068: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x3da068u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x3da06c: 0xc0f6c58  jal         func_3DB160
    ctx->pc = 0x3DA06Cu;
    SET_GPR_U32(ctx, 31, 0x3DA074u);
    ctx->pc = 0x3DA070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA06Cu;
    // 0x3da070: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB160u, 0x3DA06Cu, 0x3DA074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA074u;
label_3da074:
    // 0x3da074: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3da074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da07c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3DA07Cu;
    {
        const bool branch_taken_0x3da07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA07Cu;
        // 0x3da080: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da07c) {
            ctx->pc = 0x3DA0D0u;
            goto label_3da0d0;
        }
    }
    ctx->pc = 0x3DA084u;
    // 0x3da084: 0x0  nop
    ctx->pc = 0x3da084u;
    // NOP
label_3da088:
    // 0x3da088: 0xc0f6c64  jal         func_3DB190
    ctx->pc = 0x3DA088u;
    SET_GPR_U32(ctx, 31, 0x3DA090u);
    ctx->pc = 0x3DB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB190u, 0x3DA088u, 0x3DA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA090u;
label_3da090:
    // 0x3da090: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DA090u;
    {
        const bool branch_taken_0x3da090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3da090) {
            ctx->pc = 0x3DA0B8u;
            goto label_3da0b8;
        }
    }
    ctx->pc = 0x3DA098u;
    // 0x3da098: 0x92032be5  lbu         $v1, 0x2BE5($s0)
    ctx->pc = 0x3da098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11237)));
    // 0x3da09c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3da09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3da0a0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3DA0A0u;
    {
        const bool branch_taken_0x3da0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0A0u;
        // 0x3da0a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da0a0) {
            ctx->pc = 0x3DA0D0u;
            goto label_3da0d0;
        }
    }
    ctx->pc = 0x3DA0A8u;
    // 0x3da0a8: 0xc0f6d00  jal         func_3DB400
    ctx->pc = 0x3DA0A8u;
    SET_GPR_U32(ctx, 31, 0x3DA0B0u);
    ctx->pc = 0x3DB400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB400u, 0x3DA0A8u, 0x3DA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA0B0u;
label_3da0b0:
    // 0x3da0b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3DA0B0u;
    {
        const bool branch_taken_0x3da0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da0b0) {
            ctx->pc = 0x3DA0D0u;
            goto label_3da0d0;
        }
    }
    ctx->pc = 0x3DA0B8u;
label_3da0b8:
    // 0x3da0b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3da0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3da0bc: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3da0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da0c0: 0xa2032be3  sb          $v1, 0x2BE3($s0)
    ctx->pc = 0x3da0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da0c4: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3da0c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3da0c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3da0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da0cc: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3da0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3da0d0:
    // 0x3da0d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3da0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da0d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA0D8u;
        // 0x3da0dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA0E0u;
}
