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

// Function: sub_001E49F0
// Address: 0x1e49f0 - 0x1e4aec
void sub_001E49F0_0x1e49f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E49F0_0x1e49f0");
#endif

    switch (ctx->pc) {
        case 0x1e49f0u: goto label_1e49f0;
        case 0x1e49f4u: goto label_1e49f4;
        case 0x1e49f8u: goto label_1e49f8;
        case 0x1e49fcu: goto label_1e49fc;
        case 0x1e4a00u: goto label_1e4a00;
        case 0x1e4a04u: goto label_1e4a04;
        case 0x1e4a08u: goto label_1e4a08;
        case 0x1e4a0cu: goto label_1e4a0c;
        case 0x1e4a10u: goto label_1e4a10;
        case 0x1e4a14u: goto label_1e4a14;
        case 0x1e4a18u: goto label_1e4a18;
        case 0x1e4a1cu: goto label_1e4a1c;
        case 0x1e4a20u: goto label_1e4a20;
        case 0x1e4a24u: goto label_1e4a24;
        case 0x1e4a28u: goto label_1e4a28;
        case 0x1e4a2cu: goto label_1e4a2c;
        case 0x1e4a30u: goto label_1e4a30;
        case 0x1e4a34u: goto label_1e4a34;
        case 0x1e4a38u: goto label_1e4a38;
        case 0x1e4a3cu: goto label_1e4a3c;
        case 0x1e4a40u: goto label_1e4a40;
        case 0x1e4a44u: goto label_1e4a44;
        case 0x1e4a48u: goto label_1e4a48;
        case 0x1e4a4cu: goto label_1e4a4c;
        case 0x1e4a50u: goto label_1e4a50;
        case 0x1e4a54u: goto label_1e4a54;
        case 0x1e4a58u: goto label_1e4a58;
        case 0x1e4a5cu: goto label_1e4a5c;
        case 0x1e4a60u: goto label_1e4a60;
        case 0x1e4a64u: goto label_1e4a64;
        case 0x1e4a68u: goto label_1e4a68;
        case 0x1e4a6cu: goto label_1e4a6c;
        case 0x1e4a70u: goto label_1e4a70;
        case 0x1e4a74u: goto label_1e4a74;
        case 0x1e4a78u: goto label_1e4a78;
        case 0x1e4a7cu: goto label_1e4a7c;
        case 0x1e4a80u: goto label_1e4a80;
        case 0x1e4a84u: goto label_1e4a84;
        case 0x1e4a88u: goto label_1e4a88;
        case 0x1e4a8cu: goto label_1e4a8c;
        case 0x1e4a90u: goto label_1e4a90;
        case 0x1e4a94u: goto label_1e4a94;
        case 0x1e4a98u: goto label_1e4a98;
        case 0x1e4a9cu: goto label_1e4a9c;
        case 0x1e4aa0u: goto label_1e4aa0;
        case 0x1e4aa4u: goto label_1e4aa4;
        case 0x1e4aa8u: goto label_1e4aa8;
        case 0x1e4aacu: goto label_1e4aac;
        case 0x1e4ab0u: goto label_1e4ab0;
        case 0x1e4ab4u: goto label_1e4ab4;
        case 0x1e4ab8u: goto label_1e4ab8;
        case 0x1e4abcu: goto label_1e4abc;
        case 0x1e4ac0u: goto label_1e4ac0;
        case 0x1e4ac4u: goto label_1e4ac4;
        case 0x1e4ac8u: goto label_1e4ac8;
        case 0x1e4accu: goto label_1e4acc;
        case 0x1e4ad0u: goto label_1e4ad0;
        case 0x1e4ad4u: goto label_1e4ad4;
        case 0x1e4ad8u: goto label_1e4ad8;
        case 0x1e4adcu: goto label_1e4adc;
        case 0x1e4ae0u: goto label_1e4ae0;
        case 0x1e4ae4u: goto label_1e4ae4;
        case 0x1e4ae8u: goto label_1e4ae8;
        default: break;
    }

    ctx->pc = 0x1e49f0u;

label_1e49f0:
    // 0x1e49f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e49f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e49f4:
    // 0x1e49f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e49f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e49f8:
    // 0x1e49f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e49f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e49fc:
    // 0x1e49fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e49fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4a00:
    // 0x1e4a00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e4a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a04:
    // 0x1e4a04: 0xc078684  jal         func_1E1A10
label_1e4a08:
    if (ctx->pc == 0x1E4A08u) {
        ctx->pc = 0x1E4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A04u;
        // 0x1e4a08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A0Cu;
        goto label_1e4a0c;
    }
    ctx->pc = 0x1E4A04u;
    SET_GPR_U32(ctx, 31, 0x1E4A0Cu);
    ctx->pc = 0x1E4A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A04u;
    // 0x1e4a08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E4A04u, 0x1E4A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4A0Cu;
label_1e4a0c:
    // 0x1e4a0c: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x1e4a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
label_1e4a10:
    // 0x1e4a10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4a14:
    // 0x1e4a14: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1e4a14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4a18:
    // 0x1e4a18: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1e4a18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_1e4a1c:
    // 0x1e4a1c: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x1e4a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
label_1e4a20:
    // 0x1e4a20: 0xa2020050  sb          $v0, 0x50($s0)
    ctx->pc = 0x1e4a20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 2));
label_1e4a24:
    // 0x1e4a24: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4a28:
    // 0x1e4a28: 0x78420040  lq          $v0, 0x40($v0)
    ctx->pc = 0x1e4a28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_1e4a2c:
    // 0x1e4a2c: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x1e4a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
label_1e4a30:
    // 0x1e4a30: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4a34:
    // 0x1e4a34: 0x78420040  lq          $v0, 0x40($v0)
    ctx->pc = 0x1e4a34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 64)));
label_1e4a38:
    // 0x1e4a38: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1e4a38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_1e4a3c:
    // 0x1e4a3c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1e4a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1e4a40:
    // 0x1e4a40: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1e4a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4a44:
    // 0x1e4a44: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x1e4a44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_1e4a48:
    // 0x1e4a48: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e4a4c:
    // 0x1e4a4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4a50:
    // 0x1e4a50: 0xc0741a4  jal         func_1D0690
label_1e4a54:
    if (ctx->pc == 0x1E4A54u) {
        ctx->pc = 0x1E4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A50u;
        // 0x1e4a54: 0x22140  sll         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A58u;
        goto label_1e4a58;
    }
    ctx->pc = 0x1E4A50u;
    SET_GPR_U32(ctx, 31, 0x1E4A58u);
    ctx->pc = 0x1E4A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A50u;
    // 0x1e4a54: 0x22140  sll         $a0, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x1E4A50u, 0x1E4A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4A58u;
label_1e4a58:
    // 0x1e4a58: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1e4a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1e4a5c:
    // 0x1e4a5c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1e4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e4a60:
    // 0x1e4a60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1e4a64:
    if (ctx->pc == 0x1E4A64u) {
        ctx->pc = 0x1E4A68u;
        goto label_1e4a68;
    }
    ctx->pc = 0x1E4A60u;
    {
        const bool branch_taken_0x1e4a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4a60) {
            ctx->pc = 0x1E4A80u;
            goto label_1e4a80;
        }
    }
    ctx->pc = 0x1E4A68u;
label_1e4a68:
    // 0x1e4a68: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1e4a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e4a6c:
    // 0x1e4a6c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e4a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e4a70:
    // 0x1e4a70: 0x320f809  jalr        $t9
label_1e4a74:
    if (ctx->pc == 0x1E4A74u) {
        ctx->pc = 0x1E4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A70u;
        // 0x1e4a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A78u;
        goto label_1e4a78;
    }
    ctx->pc = 0x1E4A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4A78u);
        ctx->pc = 0x1E4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A70u;
        // 0x1e4a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4A70u, 0x1E4A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4A78u;
label_1e4a78:
    // 0x1e4a78: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e4a7c:
    if (ctx->pc == 0x1E4A7Cu) {
        ctx->pc = 0x1E4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A78u;
        // 0x1e4a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A80u;
        goto label_1e4a80;
    }
    ctx->pc = 0x1E4A78u;
    {
        const bool branch_taken_0x1e4a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A78u;
        // 0x1e4a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a78) {
            ctx->pc = 0x1E4AD8u;
            goto label_1e4ad8;
        }
    }
    ctx->pc = 0x1E4A80u;
label_1e4a80:
    // 0x1e4a80: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1e4a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4a84:
    // 0x1e4a84: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1e4a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1e4a88:
    // 0x1e4a88: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e4a88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4a8c:
    // 0x1e4a8c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_1e4a90:
    if (ctx->pc == 0x1E4A90u) {
        ctx->pc = 0x1E4A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A8Cu;
        // 0x1e4a90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4A94u;
        goto label_1e4a94;
    }
    ctx->pc = 0x1E4A8Cu;
    {
        const bool branch_taken_0x1e4a8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A8Cu;
        // 0x1e4a90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a8c) {
            ctx->pc = 0x1E4AC8u;
            goto label_1e4ac8;
        }
    }
    ctx->pc = 0x1E4A94u;
label_1e4a94:
    // 0x1e4a94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4a98:
    // 0x1e4a98: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x1e4a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e4a9c:
    // 0x1e4a9c: 0x0  nop
    ctx->pc = 0x1e4a9cu;
    // NOP
label_1e4aa0:
    // 0x1e4aa0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1e4aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1e4aa4:
    // 0x1e4aa4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e4aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e4aa8:
    // 0x1e4aa8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e4aac:
    // 0x1e4aac: 0xa4430044  sh          $v1, 0x44($v0)
    ctx->pc = 0x1e4aacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 3));
label_1e4ab0:
    // 0x1e4ab0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1e4ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1e4ab4:
    // 0x1e4ab4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1e4ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1e4ab8:
    // 0x1e4ab8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1e4ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e4abc:
    // 0x1e4abc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1e4ac0:
    if (ctx->pc == 0x1E4AC0u) {
        ctx->pc = 0x1E4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4ABCu;
        // 0x1e4ac0: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4AC4u;
        goto label_1e4ac4;
    }
    ctx->pc = 0x1E4ABCu;
    {
        const bool branch_taken_0x1e4abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4ABCu;
        // 0x1e4ac0: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4abc) {
            ctx->pc = 0x1E4AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4aa0;
        }
    }
    ctx->pc = 0x1E4AC4u;
label_1e4ac4:
    // 0x1e4ac4: 0x0  nop
    ctx->pc = 0x1e4ac4u;
    // NOP
label_1e4ac8:
    // 0x1e4ac8: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x1e4ac8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1e4acc:
    // 0x1e4acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4ad0:
    // 0x1e4ad0: 0xa603003a  sh          $v1, 0x3A($s0)
    ctx->pc = 0x1e4ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 3));
label_1e4ad4:
    // 0x1e4ad4: 0xa2000039  sb          $zero, 0x39($s0)
    ctx->pc = 0x1e4ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 0));
label_1e4ad8:
    // 0x1e4ad8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e4ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4adc:
    // 0x1e4adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4ae0:
    // 0x1e4ae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4ae4:
    // 0x1e4ae4: 0x3e00008  jr          $ra
label_1e4ae8:
    if (ctx->pc == 0x1E4AE8u) {
        ctx->pc = 0x1E4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AE4u;
        // 0x1e4ae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4AECu;
        goto label_fallthrough_0x1e4ae4;
    }
    ctx->pc = 0x1E4AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AE4u;
        // 0x1e4ae8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e4ae4:
    ctx->pc = 0x1E4AECu;
}
