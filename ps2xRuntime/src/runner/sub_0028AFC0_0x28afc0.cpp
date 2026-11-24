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

// Function: sub_0028AFC0
// Address: 0x28afc0 - 0x28b090
void sub_0028AFC0_0x28afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AFC0_0x28afc0");
#endif

    switch (ctx->pc) {
        case 0x28aff8u: goto label_28aff8;
        case 0x28b010u: goto label_28b010;
        default: break;
    }

    ctx->pc = 0x28afc0u;

    // 0x28afc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28afc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28afc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28afc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28afcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28afccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28afd0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28afd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28afd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28afd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28afd8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28afd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28afdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28afdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28afe0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x28afe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x28afe4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28afe4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28afe8: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x28AFE8u;
    {
        const bool branch_taken_0x28afe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFE8u;
        // 0x28afec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afe8) {
            ctx->pc = 0x28B070u;
            goto label_28b070;
        }
    }
    ctx->pc = 0x28AFF0u;
    // 0x28aff0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28aff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aff4: 0x0  nop
    ctx->pc = 0x28aff4u;
    // NOP
label_28aff8:
    // 0x28aff8: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x28aff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x28affc: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x28affcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28b000: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28B000u;
    {
        const bool branch_taken_0x28b000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B000u;
        // 0x28b004: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b000) {
            ctx->pc = 0x28B058u;
            goto label_28b058;
        }
    }
    ctx->pc = 0x28B008u;
    // 0x28b008: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x28B008u;
    SET_GPR_U32(ctx, 31, 0x28B010u);
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x28B008u, 0x28B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B010u;
label_28b010:
    // 0x28b010: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B010u;
    {
        const bool branch_taken_0x28b010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b010) {
            ctx->pc = 0x28B028u;
            goto label_28b028;
        }
    }
    ctx->pc = 0x28B018u;
    // 0x28b018: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x28b018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28b01c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28B01Cu;
    {
        const bool branch_taken_0x28b01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B01Cu;
        // 0x28b020: 0xa6020020  sh          $v0, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b01c) {
            ctx->pc = 0x28B058u;
            goto label_28b058;
        }
    }
    ctx->pc = 0x28B024u;
    // 0x28b024: 0x0  nop
    ctx->pc = 0x28b024u;
    // NOP
label_28b028:
    // 0x28b028: 0x86020020  lh          $v0, 0x20($s0)
    ctx->pc = 0x28b028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x28b02c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28b030: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x28b030u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x28b034: 0x86030020  lh          $v1, 0x20($s0)
    ctx->pc = 0x28b034u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x28b038: 0x86020026  lh          $v0, 0x26($s0)
    ctx->pc = 0x28b038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x28b03c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x28b03cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28b040: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B040u;
    {
        const bool branch_taken_0x28b040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B040u;
        // 0x28b044: 0x24027ffe  addiu       $v0, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b040) {
            ctx->pc = 0x28B050u;
            goto label_28b050;
        }
    }
    ctx->pc = 0x28B048u;
    // 0x28b048: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28B048u;
    {
        const bool branch_taken_0x28b048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B048u;
        // 0x28b04c: 0xa6020020  sh          $v0, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b048) {
            ctx->pc = 0x28B058u;
            goto label_28b058;
        }
    }
    ctx->pc = 0x28B050u;
label_28b050:
    // 0x28b050: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28b050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28b054: 0x0  nop
    ctx->pc = 0x28b054u;
    // NOP
label_28b058:
    // 0x28b058: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x28b058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x28b05c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28b05cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28b060: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x28b060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28b064: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x28B064u;
    {
        const bool branch_taken_0x28b064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B064u;
        // 0x28b068: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b064) {
            ctx->pc = 0x28AFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28aff8;
        }
    }
    ctx->pc = 0x28B06Cu;
    // 0x28b06c: 0x0  nop
    ctx->pc = 0x28b06cu;
    // NOP
label_28b070:
    // 0x28b070: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28b070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b074: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28b074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b078: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28b078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b07c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28b07cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28b080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28b084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b088: 0x3e00008  jr          $ra
    ctx->pc = 0x28B088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B088u;
        // 0x28b08c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B090u;
}
