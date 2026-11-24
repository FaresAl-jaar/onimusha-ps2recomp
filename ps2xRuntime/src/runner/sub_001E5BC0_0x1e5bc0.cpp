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

// Function: sub_001E5BC0
// Address: 0x1e5bc0 - 0x1e5cb0
void sub_001E5BC0_0x1e5bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5BC0_0x1e5bc0");
#endif

    switch (ctx->pc) {
        case 0x1e5bc0u: goto label_1e5bc0;
        case 0x1e5bc4u: goto label_1e5bc4;
        case 0x1e5bc8u: goto label_1e5bc8;
        case 0x1e5bccu: goto label_1e5bcc;
        case 0x1e5bd0u: goto label_1e5bd0;
        case 0x1e5bd4u: goto label_1e5bd4;
        case 0x1e5bd8u: goto label_1e5bd8;
        case 0x1e5bdcu: goto label_1e5bdc;
        case 0x1e5be0u: goto label_1e5be0;
        case 0x1e5be4u: goto label_1e5be4;
        case 0x1e5be8u: goto label_1e5be8;
        case 0x1e5becu: goto label_1e5bec;
        case 0x1e5bf0u: goto label_1e5bf0;
        case 0x1e5bf4u: goto label_1e5bf4;
        case 0x1e5bf8u: goto label_1e5bf8;
        case 0x1e5bfcu: goto label_1e5bfc;
        case 0x1e5c00u: goto label_1e5c00;
        case 0x1e5c04u: goto label_1e5c04;
        case 0x1e5c08u: goto label_1e5c08;
        case 0x1e5c0cu: goto label_1e5c0c;
        case 0x1e5c10u: goto label_1e5c10;
        case 0x1e5c14u: goto label_1e5c14;
        case 0x1e5c18u: goto label_1e5c18;
        case 0x1e5c1cu: goto label_1e5c1c;
        case 0x1e5c20u: goto label_1e5c20;
        case 0x1e5c24u: goto label_1e5c24;
        case 0x1e5c28u: goto label_1e5c28;
        case 0x1e5c2cu: goto label_1e5c2c;
        case 0x1e5c30u: goto label_1e5c30;
        case 0x1e5c34u: goto label_1e5c34;
        case 0x1e5c38u: goto label_1e5c38;
        case 0x1e5c3cu: goto label_1e5c3c;
        case 0x1e5c40u: goto label_1e5c40;
        case 0x1e5c44u: goto label_1e5c44;
        case 0x1e5c48u: goto label_1e5c48;
        case 0x1e5c4cu: goto label_1e5c4c;
        case 0x1e5c50u: goto label_1e5c50;
        case 0x1e5c54u: goto label_1e5c54;
        case 0x1e5c58u: goto label_1e5c58;
        case 0x1e5c5cu: goto label_1e5c5c;
        case 0x1e5c60u: goto label_1e5c60;
        case 0x1e5c64u: goto label_1e5c64;
        case 0x1e5c68u: goto label_1e5c68;
        case 0x1e5c6cu: goto label_1e5c6c;
        case 0x1e5c70u: goto label_1e5c70;
        case 0x1e5c74u: goto label_1e5c74;
        case 0x1e5c78u: goto label_1e5c78;
        case 0x1e5c7cu: goto label_1e5c7c;
        case 0x1e5c80u: goto label_1e5c80;
        case 0x1e5c84u: goto label_1e5c84;
        case 0x1e5c88u: goto label_1e5c88;
        case 0x1e5c8cu: goto label_1e5c8c;
        case 0x1e5c90u: goto label_1e5c90;
        case 0x1e5c94u: goto label_1e5c94;
        case 0x1e5c98u: goto label_1e5c98;
        case 0x1e5c9cu: goto label_1e5c9c;
        case 0x1e5ca0u: goto label_1e5ca0;
        case 0x1e5ca4u: goto label_1e5ca4;
        case 0x1e5ca8u: goto label_1e5ca8;
        case 0x1e5cacu: goto label_1e5cac;
        default: break;
    }

    ctx->pc = 0x1e5bc0u;

label_1e5bc0:
    // 0x1e5bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e5bc4:
    // 0x1e5bc4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e5bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e5bc8:
    // 0x1e5bc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e5bcc:
    // 0x1e5bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5bd0:
    // 0x1e5bd0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e5bd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5bd4:
    // 0x1e5bd4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e5bd8:
    if (ctx->pc == 0x1E5BD8u) {
        ctx->pc = 0x1E5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BD4u;
        // 0x1e5bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5BDCu;
        goto label_1e5bdc;
    }
    ctx->pc = 0x1E5BD4u;
    {
        const bool branch_taken_0x1e5bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BD4u;
        // 0x1e5bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bd4) {
            ctx->pc = 0x1E5BE8u;
            goto label_1e5be8;
        }
    }
    ctx->pc = 0x1E5BDCu;
label_1e5bdc:
    // 0x1e5bdc: 0x10000030  b           . + 4 + (0x30 << 2)
label_1e5be0:
    if (ctx->pc == 0x1E5BE0u) {
        ctx->pc = 0x1E5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BDCu;
        // 0x1e5be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5BE4u;
        goto label_1e5be4;
    }
    ctx->pc = 0x1E5BDCu;
    {
        const bool branch_taken_0x1e5bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BDCu;
        // 0x1e5be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5bdc) {
            ctx->pc = 0x1E5CA0u;
            goto label_1e5ca0;
        }
    }
    ctx->pc = 0x1E5BE4u;
label_1e5be4:
    // 0x1e5be4: 0x0  nop
    ctx->pc = 0x1e5be4u;
    // NOP
label_1e5be8:
    // 0x1e5be8: 0x7a030080  lq          $v1, 0x80($s0)
    ctx->pc = 0x1e5be8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 128)));
label_1e5bec:
    // 0x1e5bec: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e5becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e5bf0:
    // 0x1e5bf0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1e5bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1e5bf4:
    // 0x1e5bf4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e5bf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5bf8:
    // 0x1e5bf8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e5bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e5bfc:
    // 0x1e5bfc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e5bfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e5c00:
    // 0x1e5c00: 0x86030036  lh          $v1, 0x36($s0)
    ctx->pc = 0x1e5c00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_1e5c04:
    // 0x1e5c04: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e5c08:
    if (ctx->pc == 0x1E5C08u) {
        ctx->pc = 0x1E5C0Cu;
        goto label_1e5c0c;
    }
    ctx->pc = 0x1E5C04u;
    {
        const bool branch_taken_0x1e5c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5c04) {
            ctx->pc = 0x1E5C28u;
            goto label_1e5c28;
        }
    }
    ctx->pc = 0x1E5C0Cu;
label_1e5c0c:
    // 0x1e5c0c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e5c0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5c10:
    // 0x1e5c10: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e5c10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e5c14:
    // 0x1e5c14: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e5c18:
    if (ctx->pc == 0x1E5C18u) {
        ctx->pc = 0x1E5C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C14u;
        // 0x1e5c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5C1Cu;
        goto label_1e5c1c;
    }
    ctx->pc = 0x1E5C14u;
    {
        const bool branch_taken_0x1e5c14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C14u;
        // 0x1e5c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c14) {
            ctx->pc = 0x1E5C50u;
            goto label_1e5c50;
        }
    }
    ctx->pc = 0x1E5C1Cu;
label_1e5c1c:
    // 0x1e5c1c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e5c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e5c20:
    // 0x1e5c20: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e5c24:
    if (ctx->pc == 0x1E5C24u) {
        ctx->pc = 0x1E5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C20u;
        // 0x1e5c24: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5C28u;
        goto label_1e5c28;
    }
    ctx->pc = 0x1E5C20u;
    {
        const bool branch_taken_0x1e5c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C20u;
        // 0x1e5c24: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c20) {
            ctx->pc = 0x1E5C50u;
            goto label_1e5c50;
        }
    }
    ctx->pc = 0x1E5C28u;
label_1e5c28:
    // 0x1e5c28: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e5c28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5c2c:
    // 0x1e5c2c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e5c2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e5c30:
    // 0x1e5c30: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e5c34:
    if (ctx->pc == 0x1E5C34u) {
        ctx->pc = 0x1E5C38u;
        goto label_1e5c38;
    }
    ctx->pc = 0x1E5C30u;
    {
        const bool branch_taken_0x1e5c30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c30) {
            ctx->pc = 0x1E5C50u;
            goto label_1e5c50;
        }
    }
    ctx->pc = 0x1E5C38u;
label_1e5c38:
    // 0x1e5c38: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e5c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e5c3c:
    // 0x1e5c3c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e5c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e5c40:
    // 0x1e5c40: 0x320f809  jalr        $t9
label_1e5c44:
    if (ctx->pc == 0x1E5C44u) {
        ctx->pc = 0x1E5C48u;
        goto label_1e5c48;
    }
    ctx->pc = 0x1E5C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5C48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5C40u, 0x1E5C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5C48u;
label_1e5c48:
    // 0x1e5c48: 0x10000015  b           . + 4 + (0x15 << 2)
label_1e5c4c:
    if (ctx->pc == 0x1E5C4Cu) {
        ctx->pc = 0x1E5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C48u;
        // 0x1e5c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5C50u;
        goto label_1e5c50;
    }
    ctx->pc = 0x1E5C48u;
    {
        const bool branch_taken_0x1e5c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C48u;
        // 0x1e5c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5c48) {
            ctx->pc = 0x1E5CA0u;
            goto label_1e5ca0;
        }
    }
    ctx->pc = 0x1E5C50u;
label_1e5c50:
    // 0x1e5c50: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1e5c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1e5c54:
    // 0x1e5c54: 0xc076800  jal         func_1DA000
label_1e5c58:
    if (ctx->pc == 0x1E5C58u) {
        ctx->pc = 0x1E5C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C54u;
        // 0x1e5c58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5C5Cu;
        goto label_1e5c5c;
    }
    ctx->pc = 0x1E5C54u;
    SET_GPR_U32(ctx, 31, 0x1E5C5Cu);
    ctx->pc = 0x1E5C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C54u;
    // 0x1e5c58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E5C54u, 0x1E5C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C5Cu;
label_1e5c5c:
    // 0x1e5c5c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1e5c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1e5c60:
    // 0x1e5c60: 0xc076800  jal         func_1DA000
label_1e5c64:
    if (ctx->pc == 0x1E5C64u) {
        ctx->pc = 0x1E5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C60u;
        // 0x1e5c64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5C68u;
        goto label_1e5c68;
    }
    ctx->pc = 0x1E5C60u;
    SET_GPR_U32(ctx, 31, 0x1E5C68u);
    ctx->pc = 0x1E5C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C60u;
    // 0x1e5c64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E5C60u, 0x1E5C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C68u;
label_1e5c68:
    // 0x1e5c68: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e5c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1e5c6c:
    // 0x1e5c6c: 0xc076800  jal         func_1DA000
label_1e5c70:
    if (ctx->pc == 0x1E5C70u) {
        ctx->pc = 0x1E5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5C6Cu;
        // 0x1e5c70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5C74u;
        goto label_1e5c74;
    }
    ctx->pc = 0x1E5C6Cu;
    SET_GPR_U32(ctx, 31, 0x1E5C74u);
    ctx->pc = 0x1E5C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5C6Cu;
    // 0x1e5c70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E5C6Cu, 0x1E5C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C74u;
label_1e5c74:
    // 0x1e5c74: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1e5c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1e5c78:
    // 0x1e5c78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5c7c:
    // 0x1e5c7c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1e5c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1e5c80:
    // 0x1e5c80: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1e5c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_1e5c84:
    // 0x1e5c84: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1e5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1e5c88:
    // 0x1e5c88: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1e5c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1e5c8c:
    // 0x1e5c8c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1e5c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_1e5c90:
    // 0x1e5c90: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1e5c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1e5c94:
    // 0x1e5c94: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1e5c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1e5c98:
    // 0x1e5c98: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1e5c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_1e5c9c:
    // 0x1e5c9c: 0x0  nop
    ctx->pc = 0x1e5c9cu;
    // NOP
label_1e5ca0:
    // 0x1e5ca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5ca4:
    // 0x1e5ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5ca8:
    // 0x1e5ca8: 0x3e00008  jr          $ra
label_1e5cac:
    if (ctx->pc == 0x1E5CACu) {
        ctx->pc = 0x1E5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CA8u;
        // 0x1e5cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5CB0u;
        goto label_fallthrough_0x1e5ca8;
    }
    ctx->pc = 0x1E5CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CA8u;
        // 0x1e5cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e5ca8:
    ctx->pc = 0x1E5CB0u;
}
