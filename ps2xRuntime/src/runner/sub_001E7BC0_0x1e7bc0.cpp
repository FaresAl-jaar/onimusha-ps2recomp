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

// Function: sub_001E7BC0
// Address: 0x1e7bc0 - 0x1e7d18
void sub_001E7BC0_0x1e7bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7BC0_0x1e7bc0");
#endif

    switch (ctx->pc) {
        case 0x1e7bc0u: goto label_1e7bc0;
        case 0x1e7bc4u: goto label_1e7bc4;
        case 0x1e7bc8u: goto label_1e7bc8;
        case 0x1e7bccu: goto label_1e7bcc;
        case 0x1e7bd0u: goto label_1e7bd0;
        case 0x1e7bd4u: goto label_1e7bd4;
        case 0x1e7bd8u: goto label_1e7bd8;
        case 0x1e7bdcu: goto label_1e7bdc;
        case 0x1e7be0u: goto label_1e7be0;
        case 0x1e7be4u: goto label_1e7be4;
        case 0x1e7be8u: goto label_1e7be8;
        case 0x1e7becu: goto label_1e7bec;
        case 0x1e7bf0u: goto label_1e7bf0;
        case 0x1e7bf4u: goto label_1e7bf4;
        case 0x1e7bf8u: goto label_1e7bf8;
        case 0x1e7bfcu: goto label_1e7bfc;
        case 0x1e7c00u: goto label_1e7c00;
        case 0x1e7c04u: goto label_1e7c04;
        case 0x1e7c08u: goto label_1e7c08;
        case 0x1e7c0cu: goto label_1e7c0c;
        case 0x1e7c10u: goto label_1e7c10;
        case 0x1e7c14u: goto label_1e7c14;
        case 0x1e7c18u: goto label_1e7c18;
        case 0x1e7c1cu: goto label_1e7c1c;
        case 0x1e7c20u: goto label_1e7c20;
        case 0x1e7c24u: goto label_1e7c24;
        case 0x1e7c28u: goto label_1e7c28;
        case 0x1e7c2cu: goto label_1e7c2c;
        case 0x1e7c30u: goto label_1e7c30;
        case 0x1e7c34u: goto label_1e7c34;
        case 0x1e7c38u: goto label_1e7c38;
        case 0x1e7c3cu: goto label_1e7c3c;
        case 0x1e7c40u: goto label_1e7c40;
        case 0x1e7c44u: goto label_1e7c44;
        case 0x1e7c48u: goto label_1e7c48;
        case 0x1e7c4cu: goto label_1e7c4c;
        case 0x1e7c50u: goto label_1e7c50;
        case 0x1e7c54u: goto label_1e7c54;
        case 0x1e7c58u: goto label_1e7c58;
        case 0x1e7c5cu: goto label_1e7c5c;
        case 0x1e7c60u: goto label_1e7c60;
        case 0x1e7c64u: goto label_1e7c64;
        case 0x1e7c68u: goto label_1e7c68;
        case 0x1e7c6cu: goto label_1e7c6c;
        case 0x1e7c70u: goto label_1e7c70;
        case 0x1e7c74u: goto label_1e7c74;
        case 0x1e7c78u: goto label_1e7c78;
        case 0x1e7c7cu: goto label_1e7c7c;
        case 0x1e7c80u: goto label_1e7c80;
        case 0x1e7c84u: goto label_1e7c84;
        case 0x1e7c88u: goto label_1e7c88;
        case 0x1e7c8cu: goto label_1e7c8c;
        case 0x1e7c90u: goto label_1e7c90;
        case 0x1e7c94u: goto label_1e7c94;
        case 0x1e7c98u: goto label_1e7c98;
        case 0x1e7c9cu: goto label_1e7c9c;
        case 0x1e7ca0u: goto label_1e7ca0;
        case 0x1e7ca4u: goto label_1e7ca4;
        case 0x1e7ca8u: goto label_1e7ca8;
        case 0x1e7cacu: goto label_1e7cac;
        case 0x1e7cb0u: goto label_1e7cb0;
        case 0x1e7cb4u: goto label_1e7cb4;
        case 0x1e7cb8u: goto label_1e7cb8;
        case 0x1e7cbcu: goto label_1e7cbc;
        case 0x1e7cc0u: goto label_1e7cc0;
        case 0x1e7cc4u: goto label_1e7cc4;
        case 0x1e7cc8u: goto label_1e7cc8;
        case 0x1e7cccu: goto label_1e7ccc;
        case 0x1e7cd0u: goto label_1e7cd0;
        case 0x1e7cd4u: goto label_1e7cd4;
        case 0x1e7cd8u: goto label_1e7cd8;
        case 0x1e7cdcu: goto label_1e7cdc;
        case 0x1e7ce0u: goto label_1e7ce0;
        case 0x1e7ce4u: goto label_1e7ce4;
        case 0x1e7ce8u: goto label_1e7ce8;
        case 0x1e7cecu: goto label_1e7cec;
        case 0x1e7cf0u: goto label_1e7cf0;
        case 0x1e7cf4u: goto label_1e7cf4;
        case 0x1e7cf8u: goto label_1e7cf8;
        case 0x1e7cfcu: goto label_1e7cfc;
        case 0x1e7d00u: goto label_1e7d00;
        case 0x1e7d04u: goto label_1e7d04;
        case 0x1e7d08u: goto label_1e7d08;
        case 0x1e7d0cu: goto label_1e7d0c;
        case 0x1e7d10u: goto label_1e7d10;
        case 0x1e7d14u: goto label_1e7d14;
        default: break;
    }

    ctx->pc = 0x1e7bc0u;

label_1e7bc0:
    // 0x1e7bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e7bc4:
    // 0x1e7bc4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e7bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e7bc8:
    // 0x1e7bc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e7bcc:
    // 0x1e7bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e7bd0:
    // 0x1e7bd0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e7bd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e7bd4:
    // 0x1e7bd4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e7bd8:
    if (ctx->pc == 0x1E7BD8u) {
        ctx->pc = 0x1E7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BD4u;
        // 0x1e7bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7BDCu;
        goto label_1e7bdc;
    }
    ctx->pc = 0x1E7BD4u;
    {
        const bool branch_taken_0x1e7bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BD4u;
        // 0x1e7bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7bd4) {
            ctx->pc = 0x1E7BE8u;
            goto label_1e7be8;
        }
    }
    ctx->pc = 0x1E7BDCu;
label_1e7bdc:
    // 0x1e7bdc: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1e7be0:
    if (ctx->pc == 0x1E7BE0u) {
        ctx->pc = 0x1E7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BDCu;
        // 0x1e7be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7BE4u;
        goto label_1e7be4;
    }
    ctx->pc = 0x1E7BDCu;
    {
        const bool branch_taken_0x1e7bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7BDCu;
        // 0x1e7be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7bdc) {
            ctx->pc = 0x1E7D08u;
            goto label_1e7d08;
        }
    }
    ctx->pc = 0x1E7BE4u;
label_1e7be4:
    // 0x1e7be4: 0x0  nop
    ctx->pc = 0x1e7be4u;
    // NOP
label_1e7be8:
    // 0x1e7be8: 0x7a030070  lq          $v1, 0x70($s0)
    ctx->pc = 0x1e7be8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 112)));
label_1e7bec:
    // 0x1e7bec: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e7becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e7bf0:
    // 0x1e7bf0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1e7bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1e7bf4:
    // 0x1e7bf4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e7bf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e7bf8:
    // 0x1e7bf8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e7bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e7bfc:
    // 0x1e7bfc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e7bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e7c00:
    // 0x1e7c00: 0x86030038  lh          $v1, 0x38($s0)
    ctx->pc = 0x1e7c00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_1e7c04:
    // 0x1e7c04: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e7c08:
    if (ctx->pc == 0x1E7C08u) {
        ctx->pc = 0x1E7C0Cu;
        goto label_1e7c0c;
    }
    ctx->pc = 0x1E7C04u;
    {
        const bool branch_taken_0x1e7c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e7c04) {
            ctx->pc = 0x1E7C28u;
            goto label_1e7c28;
        }
    }
    ctx->pc = 0x1E7C0Cu;
label_1e7c0c:
    // 0x1e7c0c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e7c0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e7c10:
    // 0x1e7c10: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e7c10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e7c14:
    // 0x1e7c14: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e7c18:
    if (ctx->pc == 0x1E7C18u) {
        ctx->pc = 0x1E7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C14u;
        // 0x1e7c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7C1Cu;
        goto label_1e7c1c;
    }
    ctx->pc = 0x1E7C14u;
    {
        const bool branch_taken_0x1e7c14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C14u;
        // 0x1e7c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c14) {
            ctx->pc = 0x1E7C50u;
            goto label_1e7c50;
        }
    }
    ctx->pc = 0x1E7C1Cu;
label_1e7c1c:
    // 0x1e7c1c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e7c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e7c20:
    // 0x1e7c20: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e7c24:
    if (ctx->pc == 0x1E7C24u) {
        ctx->pc = 0x1E7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C20u;
        // 0x1e7c24: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7C28u;
        goto label_1e7c28;
    }
    ctx->pc = 0x1E7C20u;
    {
        const bool branch_taken_0x1e7c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C20u;
        // 0x1e7c24: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c20) {
            ctx->pc = 0x1E7C50u;
            goto label_1e7c50;
        }
    }
    ctx->pc = 0x1E7C28u;
label_1e7c28:
    // 0x1e7c28: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e7c28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e7c2c:
    // 0x1e7c2c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e7c2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e7c30:
    // 0x1e7c30: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e7c34:
    if (ctx->pc == 0x1E7C34u) {
        ctx->pc = 0x1E7C38u;
        goto label_1e7c38;
    }
    ctx->pc = 0x1E7C30u;
    {
        const bool branch_taken_0x1e7c30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7c30) {
            ctx->pc = 0x1E7C50u;
            goto label_1e7c50;
        }
    }
    ctx->pc = 0x1E7C38u;
label_1e7c38:
    // 0x1e7c38: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e7c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e7c3c:
    // 0x1e7c3c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e7c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e7c40:
    // 0x1e7c40: 0x320f809  jalr        $t9
label_1e7c44:
    if (ctx->pc == 0x1E7C44u) {
        ctx->pc = 0x1E7C48u;
        goto label_1e7c48;
    }
    ctx->pc = 0x1E7C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7C48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7C40u, 0x1E7C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E7C48u;
label_1e7c48:
    // 0x1e7c48: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1e7c4c:
    if (ctx->pc == 0x1E7C4Cu) {
        ctx->pc = 0x1E7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C48u;
        // 0x1e7c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7C50u;
        goto label_1e7c50;
    }
    ctx->pc = 0x1E7C48u;
    {
        const bool branch_taken_0x1e7c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C48u;
        // 0x1e7c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c48) {
            ctx->pc = 0x1E7D08u;
            goto label_1e7d08;
        }
    }
    ctx->pc = 0x1E7C50u;
label_1e7c50:
    // 0x1e7c50: 0xc0743c0  jal         func_1D0F00
label_1e7c54:
    if (ctx->pc == 0x1E7C54u) {
        ctx->pc = 0x1E7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C50u;
        // 0x1e7c54: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7C58u;
        goto label_1e7c58;
    }
    ctx->pc = 0x1E7C50u;
    SET_GPR_U32(ctx, 31, 0x1E7C58u);
    ctx->pc = 0x1E7C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C50u;
    // 0x1e7c54: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1E7C50u, 0x1E7C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C58u;
label_1e7c58:
    // 0x1e7c58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e7c5c:
    if (ctx->pc == 0x1E7C5Cu) {
        ctx->pc = 0x1E7C60u;
        goto label_1e7c60;
    }
    ctx->pc = 0x1E7C58u;
    {
        const bool branch_taken_0x1e7c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7c58) {
            ctx->pc = 0x1E7C70u;
            goto label_1e7c70;
        }
    }
    ctx->pc = 0x1E7C60u;
label_1e7c60:
    // 0x1e7c60: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e7c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e7c64:
    // 0x1e7c64: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e7c64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e7c68:
    // 0x1e7c68: 0x320f809  jalr        $t9
label_1e7c6c:
    if (ctx->pc == 0x1E7C6Cu) {
        ctx->pc = 0x1E7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C68u;
        // 0x1e7c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7C70u;
        goto label_1e7c70;
    }
    ctx->pc = 0x1E7C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7C70u);
        ctx->pc = 0x1E7C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C68u;
        // 0x1e7c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7C68u, 0x1E7C70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E7C70u;
label_1e7c70:
    // 0x1e7c70: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1e7c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1e7c74:
    // 0x1e7c74: 0xc076800  jal         func_1DA000
label_1e7c78:
    if (ctx->pc == 0x1E7C78u) {
        ctx->pc = 0x1E7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C74u;
        // 0x1e7c78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7C7Cu;
        goto label_1e7c7c;
    }
    ctx->pc = 0x1E7C74u;
    SET_GPR_U32(ctx, 31, 0x1E7C7Cu);
    ctx->pc = 0x1E7C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C74u;
    // 0x1e7c78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E7C74u, 0x1E7C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C7Cu;
label_1e7c7c:
    // 0x1e7c7c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1e7c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1e7c80:
    // 0x1e7c80: 0xc076800  jal         func_1DA000
label_1e7c84:
    if (ctx->pc == 0x1E7C84u) {
        ctx->pc = 0x1E7C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C80u;
        // 0x1e7c84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7C88u;
        goto label_1e7c88;
    }
    ctx->pc = 0x1E7C80u;
    SET_GPR_U32(ctx, 31, 0x1E7C88u);
    ctx->pc = 0x1E7C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C80u;
    // 0x1e7c84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E7C80u, 0x1E7C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C88u;
label_1e7c88:
    // 0x1e7c88: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1e7c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1e7c8c:
    // 0x1e7c8c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1e7c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1e7c90:
    // 0x1e7c90: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1e7c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_1e7c94:
    // 0x1e7c94: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x1e7c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_1e7c98:
    // 0x1e7c98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e7c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e7c9c:
    // 0x1e7c9c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1e7ca0:
    if (ctx->pc == 0x1E7CA0u) {
        ctx->pc = 0x1E7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C9Cu;
        // 0x1e7ca0: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7CA4u;
        goto label_1e7ca4;
    }
    ctx->pc = 0x1E7C9Cu;
    {
        const bool branch_taken_0x1e7c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7C9Cu;
        // 0x1e7ca0: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7c9c) {
            ctx->pc = 0x1E7D00u;
            goto label_1e7d00;
        }
    }
    ctx->pc = 0x1E7CA4u;
label_1e7ca4:
    // 0x1e7ca4: 0xc0743e0  jal         func_1D0F80
label_1e7ca8:
    if (ctx->pc == 0x1E7CA8u) {
        ctx->pc = 0x1E7CACu;
        goto label_1e7cac;
    }
    ctx->pc = 0x1E7CA4u;
    SET_GPR_U32(ctx, 31, 0x1E7CACu);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1E7CA4u, 0x1E7CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7CACu;
label_1e7cac:
    // 0x1e7cac: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1e7cacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1e7cb0:
    // 0x1e7cb0: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x1e7cb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1e7cb4:
    // 0x1e7cb4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1e7cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1e7cb8:
    // 0x1e7cb8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1e7cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1e7cbc:
    // 0x1e7cbc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e7cc0:
    if (ctx->pc == 0x1E7CC0u) {
        ctx->pc = 0x1E7CC4u;
        goto label_1e7cc4;
    }
    ctx->pc = 0x1E7CBCu;
    {
        const bool branch_taken_0x1e7cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7cbc) {
            ctx->pc = 0x1E7CD8u;
            goto label_1e7cd8;
        }
    }
    ctx->pc = 0x1E7CC4u;
label_1e7cc4:
    // 0x1e7cc4: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1e7cc4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e7cc8:
    // 0x1e7cc8: 0x0  nop
    ctx->pc = 0x1e7cc8u;
    // NOP
label_1e7ccc:
    // 0x1e7ccc: 0x0  nop
    ctx->pc = 0x1e7cccu;
    // NOP
label_1e7cd0:
    // 0x1e7cd0: 0x1010  mfhi        $v0
    ctx->pc = 0x1e7cd0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e7cd4:
    // 0x1e7cd4: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1e7cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_1e7cd8:
    // 0x1e7cd8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1e7cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1e7cdc:
    // 0x1e7cdc: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1e7cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1e7ce0:
    // 0x1e7ce0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1e7ce4:
    if (ctx->pc == 0x1E7CE4u) {
        ctx->pc = 0x1E7CE8u;
        goto label_1e7ce8;
    }
    ctx->pc = 0x1E7CE0u;
    {
        const bool branch_taken_0x1e7ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ce0) {
            ctx->pc = 0x1E7D00u;
            goto label_1e7d00;
        }
    }
    ctx->pc = 0x1E7CE8u;
label_1e7ce8:
    // 0x1e7ce8: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1e7ce8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e7cec:
    // 0x1e7cec: 0x0  nop
    ctx->pc = 0x1e7cecu;
    // NOP
label_1e7cf0:
    // 0x1e7cf0: 0x0  nop
    ctx->pc = 0x1e7cf0u;
    // NOP
label_1e7cf4:
    // 0x1e7cf4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e7cf4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e7cf8:
    // 0x1e7cf8: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1e7cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_1e7cfc:
    // 0x1e7cfc: 0x0  nop
    ctx->pc = 0x1e7cfcu;
    // NOP
label_1e7d00:
    // 0x1e7d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7d04:
    // 0x1e7d04: 0x0  nop
    ctx->pc = 0x1e7d04u;
    // NOP
label_1e7d08:
    // 0x1e7d08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e7d0c:
    // 0x1e7d0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7d10:
    // 0x1e7d10: 0x3e00008  jr          $ra
label_1e7d14:
    if (ctx->pc == 0x1E7D14u) {
        ctx->pc = 0x1E7D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D10u;
        // 0x1e7d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7D18u;
        goto label_fallthrough_0x1e7d10;
    }
    ctx->pc = 0x1E7D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D10u;
        // 0x1e7d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e7d10:
    ctx->pc = 0x1E7D18u;
}
