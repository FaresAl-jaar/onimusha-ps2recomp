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

// Function: sub_0033AFD0
// Address: 0x33afd0 - 0x33b0cc
void sub_0033AFD0_0x33afd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AFD0_0x33afd0");
#endif

    switch (ctx->pc) {
        case 0x33b00cu: goto label_33b00c;
        case 0x33b06cu: goto label_33b06c;
        case 0x33b0acu: goto label_33b0ac;
        case 0x33b0bcu: goto label_33b0bc;
        default: break;
    }

    ctx->pc = 0x33afd0u;

    // 0x33afd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33afd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33afd4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33afd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33afd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33afdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33afdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33afe0: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x33afe0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33afe4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AFE4u;
    {
        const bool branch_taken_0x33afe4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x33AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFE4u;
        // 0x33afe8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33afe4) {
            ctx->pc = 0x33AFF8u;
            goto label_33aff8;
        }
    }
    ctx->pc = 0x33AFECu;
    // 0x33afec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33afecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33aff0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x33AFF0u;
    {
        const bool branch_taken_0x33aff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AFF0u;
        // 0x33aff4: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aff0) {
            ctx->pc = 0x33B0B0u;
            goto label_33b0b0;
        }
    }
    ctx->pc = 0x33AFF8u;
label_33aff8:
    // 0x33aff8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x33aff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x33affc: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33affcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x33b000: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x33b000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x33b004: 0xc0bcc70  jal         func_2F31C0
    ctx->pc = 0x33B004u;
    SET_GPR_U32(ctx, 31, 0x33B00Cu);
    ctx->pc = 0x33B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B004u;
    // 0x33b008: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31C0u, 0x33B004u, 0x33B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B00Cu;
label_33b00c:
    // 0x33b00c: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x33b00cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33b010: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x33b010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33b014: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b018: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33B018u;
    {
        const bool branch_taken_0x33b018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33b018) {
            ctx->pc = 0x33B030u;
            goto label_33b030;
        }
    }
    ctx->pc = 0x33B020u;
    // 0x33b020: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x33b020u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33b024: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33B024u;
    {
        const bool branch_taken_0x33b024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b024) {
            ctx->pc = 0x33B040u;
            goto label_33b040;
        }
    }
    ctx->pc = 0x33B02Cu;
    // 0x33b02c: 0x0  nop
    ctx->pc = 0x33b02cu;
    // NOP
label_33b030:
    // 0x33b030: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x33b030u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x33b034: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33B034u;
    {
        const bool branch_taken_0x33b034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B034u;
        // 0x33b038: 0xa2000008  sb          $zero, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b034) {
            ctx->pc = 0x33B058u;
            goto label_33b058;
        }
    }
    ctx->pc = 0x33B03Cu;
    // 0x33b03c: 0x0  nop
    ctx->pc = 0x33b03cu;
    // NOP
label_33b040:
    // 0x33b040: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x33b040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x33b044: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B044u;
    {
        const bool branch_taken_0x33b044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x33B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B044u;
        // 0x33b048: 0x2402ffb4  addiu       $v0, $zero, -0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b044) {
            ctx->pc = 0x33B058u;
            goto label_33b058;
        }
    }
    ctx->pc = 0x33B04Cu;
    // 0x33b04c: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x33b04cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x33b050: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x33b050u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x33b054: 0x0  nop
    ctx->pc = 0x33b054u;
    // NOP
label_33b058:
    // 0x33b058: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x33b058u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33b05c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33B05Cu;
    {
        const bool branch_taken_0x33b05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b05c) {
            ctx->pc = 0x33B088u;
            goto label_33b088;
        }
    }
    ctx->pc = 0x33B064u;
    // 0x33b064: 0xc0b3ac0  jal         func_2CEB00
    ctx->pc = 0x33B064u;
    SET_GPR_U32(ctx, 31, 0x33B06Cu);
    ctx->pc = 0x2CEB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEB00u, 0x33B064u, 0x33B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B06Cu;
label_33b06c:
    // 0x33b06c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33B06Cu;
    {
        const bool branch_taken_0x33b06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b06c) {
            ctx->pc = 0x33B088u;
            goto label_33b088;
        }
    }
    ctx->pc = 0x33B074u;
    // 0x33b074: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x33b074u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33b078: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33b07c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33B07Cu;
    {
        const bool branch_taken_0x33b07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B07Cu;
        // 0x33b080: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b07c) {
            ctx->pc = 0x33B0B0u;
            goto label_33b0b0;
        }
    }
    ctx->pc = 0x33B084u;
    // 0x33b084: 0x0  nop
    ctx->pc = 0x33b084u;
    // NOP
label_33b088:
    // 0x33b088: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x33b088u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33b08c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x33b08cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x33b090: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33B090u;
    {
        const bool branch_taken_0x33b090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33b090) {
            ctx->pc = 0x33B0B0u;
            goto label_33b0b0;
        }
    }
    ctx->pc = 0x33B098u;
    // 0x33b098: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x33b098u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x33b09c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x33b0a0: 0x96050006  lhu         $a1, 0x6($s0)
    ctx->pc = 0x33b0a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x33b0a4: 0xc0c2e98  jal         func_30BA60
    ctx->pc = 0x33B0A4u;
    SET_GPR_U32(ctx, 31, 0x33B0ACu);
    ctx->pc = 0x33B0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B0A4u;
    // 0x33b0a8: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA60u, 0x33B0A4u, 0x33B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B0ACu;
label_33b0ac:
    // 0x33b0ac: 0x0  nop
    ctx->pc = 0x33b0acu;
    // NOP
label_33b0b0:
    // 0x33b0b0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x33b0b4: 0xc0c2ea4  jal         func_30BA90
    ctx->pc = 0x33B0B4u;
    SET_GPR_U32(ctx, 31, 0x33B0BCu);
    ctx->pc = 0x33B0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B0B4u;
    // 0x33b0b8: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA90u, 0x33B0B4u, 0x33B0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B0BCu;
label_33b0bc:
    // 0x33b0bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33b0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b0c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33b0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x33B0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B0C4u;
        // 0x33b0c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B0CCu;
}
