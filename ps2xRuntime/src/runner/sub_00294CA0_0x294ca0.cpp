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

// Function: sub_00294CA0
// Address: 0x294ca0 - 0x294e08
void sub_00294CA0_0x294ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294CA0_0x294ca0");
#endif

    switch (ctx->pc) {
        case 0x294ca0u: goto label_294ca0;
        case 0x294ca4u: goto label_294ca4;
        case 0x294ca8u: goto label_294ca8;
        case 0x294cacu: goto label_294cac;
        case 0x294cb0u: goto label_294cb0;
        case 0x294cb4u: goto label_294cb4;
        case 0x294cb8u: goto label_294cb8;
        case 0x294cbcu: goto label_294cbc;
        case 0x294cc0u: goto label_294cc0;
        case 0x294cc4u: goto label_294cc4;
        case 0x294cc8u: goto label_294cc8;
        case 0x294cccu: goto label_294ccc;
        case 0x294cd0u: goto label_294cd0;
        case 0x294cd4u: goto label_294cd4;
        case 0x294cd8u: goto label_294cd8;
        case 0x294cdcu: goto label_294cdc;
        case 0x294ce0u: goto label_294ce0;
        case 0x294ce4u: goto label_294ce4;
        case 0x294ce8u: goto label_294ce8;
        case 0x294cecu: goto label_294cec;
        case 0x294cf0u: goto label_294cf0;
        case 0x294cf4u: goto label_294cf4;
        case 0x294cf8u: goto label_294cf8;
        case 0x294cfcu: goto label_294cfc;
        case 0x294d00u: goto label_294d00;
        case 0x294d04u: goto label_294d04;
        case 0x294d08u: goto label_294d08;
        case 0x294d0cu: goto label_294d0c;
        case 0x294d10u: goto label_294d10;
        case 0x294d14u: goto label_294d14;
        case 0x294d18u: goto label_294d18;
        case 0x294d1cu: goto label_294d1c;
        case 0x294d20u: goto label_294d20;
        case 0x294d24u: goto label_294d24;
        case 0x294d28u: goto label_294d28;
        case 0x294d2cu: goto label_294d2c;
        case 0x294d30u: goto label_294d30;
        case 0x294d34u: goto label_294d34;
        case 0x294d38u: goto label_294d38;
        case 0x294d3cu: goto label_294d3c;
        case 0x294d40u: goto label_294d40;
        case 0x294d44u: goto label_294d44;
        case 0x294d48u: goto label_294d48;
        case 0x294d4cu: goto label_294d4c;
        case 0x294d50u: goto label_294d50;
        case 0x294d54u: goto label_294d54;
        case 0x294d58u: goto label_294d58;
        case 0x294d5cu: goto label_294d5c;
        case 0x294d60u: goto label_294d60;
        case 0x294d64u: goto label_294d64;
        case 0x294d68u: goto label_294d68;
        case 0x294d6cu: goto label_294d6c;
        case 0x294d70u: goto label_294d70;
        case 0x294d74u: goto label_294d74;
        case 0x294d78u: goto label_294d78;
        case 0x294d7cu: goto label_294d7c;
        case 0x294d80u: goto label_294d80;
        case 0x294d84u: goto label_294d84;
        case 0x294d88u: goto label_294d88;
        case 0x294d8cu: goto label_294d8c;
        case 0x294d90u: goto label_294d90;
        case 0x294d94u: goto label_294d94;
        case 0x294d98u: goto label_294d98;
        case 0x294d9cu: goto label_294d9c;
        case 0x294da0u: goto label_294da0;
        case 0x294da4u: goto label_294da4;
        case 0x294da8u: goto label_294da8;
        case 0x294dacu: goto label_294dac;
        case 0x294db0u: goto label_294db0;
        case 0x294db4u: goto label_294db4;
        case 0x294db8u: goto label_294db8;
        case 0x294dbcu: goto label_294dbc;
        case 0x294dc0u: goto label_294dc0;
        case 0x294dc4u: goto label_294dc4;
        case 0x294dc8u: goto label_294dc8;
        case 0x294dccu: goto label_294dcc;
        case 0x294dd0u: goto label_294dd0;
        case 0x294dd4u: goto label_294dd4;
        case 0x294dd8u: goto label_294dd8;
        case 0x294ddcu: goto label_294ddc;
        case 0x294de0u: goto label_294de0;
        case 0x294de4u: goto label_294de4;
        case 0x294de8u: goto label_294de8;
        case 0x294decu: goto label_294dec;
        case 0x294df0u: goto label_294df0;
        case 0x294df4u: goto label_294df4;
        case 0x294df8u: goto label_294df8;
        case 0x294dfcu: goto label_294dfc;
        case 0x294e00u: goto label_294e00;
        case 0x294e04u: goto label_294e04;
        default: break;
    }

    ctx->pc = 0x294ca0u;

label_294ca0:
    // 0x294ca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x294ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_294ca4:
    // 0x294ca4: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x294ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_294ca8:
    // 0x294ca8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x294ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_294cac:
    // 0x294cac: 0x246311b0  addiu       $v1, $v1, 0x11B0
    ctx->pc = 0x294cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4528));
label_294cb0:
    // 0x294cb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x294cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_294cb4:
    // 0x294cb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x294cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_294cb8:
    // 0x294cb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x294cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_294cbc:
    // 0x294cbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x294cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_294cc0:
    // 0x294cc0: 0x690c0  sll         $s2, $a2, 3
    ctx->pc = 0x294cc0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_294cc4:
    // 0x294cc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x294cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_294cc8:
    // 0x294cc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x294cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_294ccc:
    // 0x294ccc: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x294cccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_294cd0:
    // 0x294cd0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x294cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_294cd4:
    // 0x294cd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_294cd8:
    // 0x294cd8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x294cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_294cdc:
    // 0x294cdc: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x294cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_294ce0:
    // 0x294ce0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x294ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_294ce4:
    // 0x294ce4: 0x90740002  lbu         $s4, 0x2($v1)
    ctx->pc = 0x294ce4u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_294ce8:
    // 0x294ce8: 0x90730003  lbu         $s3, 0x3($v1)
    ctx->pc = 0x294ce8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_294cec:
    // 0x294cec: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x294cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_294cf0:
    // 0x294cf0: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_294cf4:
    if (ctx->pc == 0x294CF4u) {
        ctx->pc = 0x294CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CF0u;
        // 0x294cf4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294CF8u;
        goto label_294cf8;
    }
    ctx->pc = 0x294CF0u;
    {
        const bool branch_taken_0x294cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294CF0u;
        // 0x294cf4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294cf0) {
            ctx->pc = 0x294DE8u;
            goto label_294de8;
        }
    }
    ctx->pc = 0x294CF8u;
label_294cf8:
    // 0x294cf8: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x294cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
label_294cfc:
    // 0x294cfc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x294cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_294d00:
    // 0x294d00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x294d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_294d04:
    // 0x294d04: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x294d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_294d08:
    // 0x294d08: 0xc050ed4  jal         func_143B50
label_294d0c:
    if (ctx->pc == 0x294D0Cu) {
        ctx->pc = 0x294D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D08u;
        // 0x294d0c: 0x240800fe  addiu       $t0, $zero, 0xFE (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294D10u;
        goto label_294d10;
    }
    ctx->pc = 0x294D08u;
    SET_GPR_U32(ctx, 31, 0x294D10u);
    ctx->pc = 0x294D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D08u;
    // 0x294d0c: 0x240800fe  addiu       $t0, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x294D08u, 0x294D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D10u;
label_294d10:
    // 0x294d10: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_294d14:
    if (ctx->pc == 0x294D14u) {
        ctx->pc = 0x294D18u;
        goto label_294d18;
    }
    ctx->pc = 0x294D10u;
    {
        const bool branch_taken_0x294d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294d10) {
            ctx->pc = 0x294DE8u;
            goto label_294de8;
        }
    }
    ctx->pc = 0x294D18u;
label_294d18:
    // 0x294d18: 0x922608e8  lbu         $a2, 0x8E8($s1)
    ctx->pc = 0x294d18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_294d1c:
    // 0x294d1c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x294d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_294d20:
    // 0x294d20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x294d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_294d24:
    // 0x294d24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x294d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_294d28:
    // 0x294d28: 0x24e7c910  addiu       $a3, $a3, -0x36F0
    ctx->pc = 0x294d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953232));
label_294d2c:
    // 0x294d2c: 0xc0b2fa4  jal         func_2CBE90
label_294d30:
    if (ctx->pc == 0x294D30u) {
        ctx->pc = 0x294D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D2Cu;
        // 0x294d30: 0x24080510  addiu       $t0, $zero, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294D34u;
        goto label_294d34;
    }
    ctx->pc = 0x294D2Cu;
    SET_GPR_U32(ctx, 31, 0x294D34u);
    ctx->pc = 0x294D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D2Cu;
    // 0x294d30: 0x24080510  addiu       $t0, $zero, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBE90u, 0x294D2Cu, 0x294D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D34u;
label_294d34:
    // 0x294d34: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x294d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294d38:
    // 0x294d38: 0x1260002b  beqz        $s3, . + 4 + (0x2B << 2)
label_294d3c:
    if (ctx->pc == 0x294D3Cu) {
        ctx->pc = 0x294D40u;
        goto label_294d40;
    }
    ctx->pc = 0x294D38u;
    {
        const bool branch_taken_0x294d38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x294d38) {
            ctx->pc = 0x294DE8u;
            goto label_294de8;
        }
    }
    ctx->pc = 0x294D40u;
label_294d40:
    // 0x294d40: 0x8e7904d4  lw          $t9, 0x4D4($s3)
    ctx->pc = 0x294d40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1236)));
label_294d44:
    // 0x294d44: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x294d44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_294d48:
    // 0x294d48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x294d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_294d4c:
    // 0x294d4c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x294d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_294d50:
    // 0x294d50: 0x320f809  jalr        $t9
label_294d54:
    if (ctx->pc == 0x294D54u) {
        ctx->pc = 0x294D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D50u;
        // 0x294d54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294D58u;
        goto label_294d58;
    }
    ctx->pc = 0x294D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x294D58u);
        ctx->pc = 0x294D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D50u;
        // 0x294d54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294D50u, 0x294D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294D58u;
label_294d58:
    // 0x294d58: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x294d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_294d5c:
    // 0x294d5c: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x294d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_294d60:
    // 0x294d60: 0xa2620162  sb          $v0, 0x162($s3)
    ctx->pc = 0x294d60u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 354), (uint8_t)GPR_U32(ctx, 2));
label_294d64:
    // 0x294d64: 0x26240194  addiu       $a0, $s1, 0x194
    ctx->pc = 0x294d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 404));
label_294d68:
    // 0x294d68: 0x87838204  lh          $v1, -0x7DFC($gp)
    ctx->pc = 0x294d68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935044)));
label_294d6c:
    // 0x294d6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x294d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_294d70:
    // 0x294d70: 0x93828206  lbu         $v0, -0x7DFA($gp)
    ctx->pc = 0x294d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935046)));
label_294d74:
    // 0x294d74: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x294d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_294d78:
    // 0x294d78: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x294d78u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_294d7c:
    // 0x294d7c: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x294d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
label_294d80:
    // 0x294d80: 0x922208e8  lbu         $v0, 0x8E8($s1)
    ctx->pc = 0x294d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_294d84:
    // 0x294d84: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x294d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_294d88:
    // 0x294d88: 0x8042006c  lb          $v0, 0x6C($v0)
    ctx->pc = 0x294d88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 108)));
label_294d8c:
    // 0x294d8c: 0xc09ae58  jal         func_26B960
label_294d90:
    if (ctx->pc == 0x294D90u) {
        ctx->pc = 0x294D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D8Cu;
        // 0x294d90: 0xa262050e  sb          $v0, 0x50E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1294), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294D94u;
        goto label_294d94;
    }
    ctx->pc = 0x294D8Cu;
    SET_GPR_U32(ctx, 31, 0x294D94u);
    ctx->pc = 0x294D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D8Cu;
    // 0x294d90: 0xa262050e  sb          $v0, 0x50E($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 1294), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B960u, 0x294D8Cu, 0x294D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294D94u;
label_294d94:
    // 0x294d94: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x294d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_294d98:
    // 0x294d98: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x294d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_294d9c:
    // 0x294d9c: 0xac730858  sw          $s3, 0x858($v1)
    ctx->pc = 0x294d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2136), GPR_U32(ctx, 19));
label_294da0:
    // 0x294da0: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x294da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_294da4:
    // 0x294da4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_294da8:
    if (ctx->pc == 0x294DA8u) {
        ctx->pc = 0x294DACu;
        goto label_294dac;
    }
    ctx->pc = 0x294DA4u;
    {
        const bool branch_taken_0x294da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294da4) {
            ctx->pc = 0x294DE0u;
            goto label_294de0;
        }
    }
    ctx->pc = 0x294DACu;
label_294dac:
    // 0x294dac: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x294dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_294db0:
    // 0x294db0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x294db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_294db4:
    // 0x294db4: 0x244211b0  addiu       $v0, $v0, 0x11B0
    ctx->pc = 0x294db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4528));
label_294db8:
    // 0x294db8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x294db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_294dbc:
    // 0x294dbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x294dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_294dc0:
    // 0x294dc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294dc4:
    // 0x294dc4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x294dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_294dc8:
    // 0x294dc8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x294dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_294dcc:
    // 0x294dcc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x294dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_294dd0:
    // 0x294dd0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x294dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_294dd4:
    // 0x294dd4: 0x40f809  jalr        $v0
label_294dd8:
    if (ctx->pc == 0x294DD8u) {
        ctx->pc = 0x294DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DD4u;
        // 0x294dd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294DDCu;
        goto label_294ddc;
    }
    ctx->pc = 0x294DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x294DDCu);
        ctx->pc = 0x294DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DD4u;
        // 0x294dd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294DD4u, 0x294DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294DDCu;
label_294ddc:
    // 0x294ddc: 0x0  nop
    ctx->pc = 0x294ddcu;
    // NOP
label_294de0:
    // 0x294de0: 0x10000001  b           . + 4 + (0x1 << 2)
label_294de4:
    if (ctx->pc == 0x294DE4u) {
        ctx->pc = 0x294DE8u;
        goto label_294de8;
    }
    ctx->pc = 0x294DE0u;
    {
        const bool branch_taken_0x294de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294de0) {
            ctx->pc = 0x294DE8u;
            goto label_294de8;
        }
    }
    ctx->pc = 0x294DE8u;
label_294de8:
    // 0x294de8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x294de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_294dec:
    // 0x294dec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x294decu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_294df0:
    // 0x294df0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x294df0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_294df4:
    // 0x294df4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x294df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_294df8:
    // 0x294df8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x294df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_294dfc:
    // 0x294dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_294e00:
    // 0x294e00: 0x3e00008  jr          $ra
label_294e04:
    if (ctx->pc == 0x294E04u) {
        ctx->pc = 0x294E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E00u;
        // 0x294e04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294E08u;
        goto label_fallthrough_0x294e00;
    }
    ctx->pc = 0x294E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294E00u;
        // 0x294e04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x294e00:
    ctx->pc = 0x294E08u;
}
