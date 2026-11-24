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

// Function: sub_00163CC0
// Address: 0x163cc0 - 0x164c58
void sub_00163CC0_0x163cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163CC0_0x163cc0");
#endif

    switch (ctx->pc) {
        case 0x163d00u: goto label_163d00;
        case 0x164160u: goto label_164160;
        case 0x164168u: goto label_164168;
        case 0x164510u: goto label_164510;
        case 0x164520u: goto label_164520;
        case 0x1646d8u: goto label_1646d8;
        case 0x164b20u: goto label_164b20;
        case 0x164becu: goto label_164bec;
        case 0x164c04u: goto label_164c04;
        case 0x164c1cu: goto label_164c1c;
        case 0x164c34u: goto label_164c34;
        default: break;
    }

    ctx->pc = 0x163cc0u;

    // 0x163cc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x163cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x163cc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x163cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x163cc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x163cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x163ccc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x163cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x163cd0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x163cd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163cd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x163cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x163cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x163cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163ce0: 0x90830030  lbu         $v1, 0x30($a0)
    ctx->pc = 0x163ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x163ce4: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x163ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x163ce8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x163CE8u;
    {
        const bool branch_taken_0x163ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CE8u;
        // 0x163cec: 0x2610aad0  addiu       $s0, $s0, -0x5530 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ce8) {
            ctx->pc = 0x163D30u;
            goto label_163d30;
        }
    }
    ctx->pc = 0x163CF0u;
    // 0x163cf0: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x163cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x163cf4: 0x90450038  lbu         $a1, 0x38($v0)
    ctx->pc = 0x163cf4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x163cf8: 0xc05a388  jal         func_168E20
    ctx->pc = 0x163CF8u;
    SET_GPR_U32(ctx, 31, 0x163D00u);
    ctx->pc = 0x163CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163CF8u;
    // 0x163cfc: 0x968600a0  lhu         $a2, 0xA0($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168E20u, 0x163CF8u, 0x163D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163D00u;
label_163d00:
    // 0x163d00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163D00u;
    {
        const bool branch_taken_0x163d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163d00) {
            ctx->pc = 0x163D18u;
            goto label_163d18;
        }
    }
    ctx->pc = 0x163D08u;
    // 0x163d08: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x163d08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x163d0c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x163d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x163d10: 0x100003c9  b           . + 4 + (0x3C9 << 2)
    ctx->pc = 0x163D10u;
    {
        const bool branch_taken_0x163d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D10u;
        // 0x163d14: 0xa6830010  sh          $v1, 0x10($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d10) {
            ctx->pc = 0x164C38u;
            goto label_164c38;
        }
    }
    ctx->pc = 0x163D18u;
label_163d18:
    // 0x163d18: 0x96840010  lhu         $a0, 0x10($s4)
    ctx->pc = 0x163d18u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x163d1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163d20: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x163d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x163d24: 0xa6840010  sh          $a0, 0x10($s4)
    ctx->pc = 0x163d24u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x163d28: 0xa2830030  sb          $v1, 0x30($s4)
    ctx->pc = 0x163d28u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x163d2c: 0x0  nop
    ctx->pc = 0x163d2cu;
    // NOP
label_163d30:
    // 0x163d30: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x163d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x163d34: 0x9065000d  lbu         $a1, 0xD($v1)
    ctx->pc = 0x163d34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x163d38: 0x9066000f  lbu         $a2, 0xF($v1)
    ctx->pc = 0x163d38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x163d3c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x163D3Cu;
    {
        const bool branch_taken_0x163d3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D3Cu;
        // 0x163d40: 0x8e930034  lw          $s3, 0x34($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d3c) {
            ctx->pc = 0x163D88u;
            goto label_163d88;
        }
    }
    ctx->pc = 0x163D44u;
    // 0x163d44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x163d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x163d48: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x163d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x163d4c: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x163d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x163d50: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x163d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x163d54: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x163D54u;
    {
        const bool branch_taken_0x163d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D54u;
        // 0x163d58: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d54) {
            ctx->pc = 0x163D70u;
            goto label_163d70;
        }
    }
    ctx->pc = 0x163D5Cu;
    // 0x163d5c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x163d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x163d60: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x163D60u;
    {
        const bool branch_taken_0x163d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163d60) {
            ctx->pc = 0x163D88u;
            goto label_163d88;
        }
    }
    ctx->pc = 0x163D68u;
    // 0x163d68: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x163D68u;
    {
        const bool branch_taken_0x163d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D68u;
        // 0x163d6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d68) {
            ctx->pc = 0x163DB8u;
            goto label_163db8;
        }
    }
    ctx->pc = 0x163D70u;
label_163d70:
    // 0x163d70: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x163d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x163d74: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x163d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x163d78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x163D78u;
    {
        const bool branch_taken_0x163d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D78u;
        // 0x163d7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d78) {
            ctx->pc = 0x163D88u;
            goto label_163d88;
        }
    }
    ctx->pc = 0x163D80u;
    // 0x163d80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x163D80u;
    {
        const bool branch_taken_0x163d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163d80) {
            ctx->pc = 0x163DB8u;
            goto label_163db8;
        }
    }
    ctx->pc = 0x163D88u;
label_163d88:
    // 0x163d88: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x163D88u;
    {
        const bool branch_taken_0x163d88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D88u;
        // 0x163d8c: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d88) {
            ctx->pc = 0x163DB0u;
            goto label_163db0;
        }
    }
    ctx->pc = 0x163D90u;
    // 0x163d90: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x163d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x163d94: 0x902368a3  lbu         $v1, 0x68A3($at)
    ctx->pc = 0x163d94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26787)));
    // 0x163d98: 0x831827  nor         $v1, $a0, $v1
    ctx->pc = 0x163d98u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 3)));
    // 0x163d9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x163d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x163da0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x163DA0u;
    {
        const bool branch_taken_0x163da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DA0u;
        // 0x163da4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163da0) {
            ctx->pc = 0x163DB0u;
            goto label_163db0;
        }
    }
    ctx->pc = 0x163DA8u;
    // 0x163da8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163DA8u;
    {
        const bool branch_taken_0x163da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163da8) {
            ctx->pc = 0x163DB8u;
            goto label_163db8;
        }
    }
    ctx->pc = 0x163DB0u;
label_163db0:
    // 0x163db0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163db4: 0x0  nop
    ctx->pc = 0x163db4u;
    // NOP
label_163db8:
    // 0x163db8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x163DB8u;
    {
        const bool branch_taken_0x163db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163db8) {
            ctx->pc = 0x163DD0u;
            goto label_163dd0;
        }
    }
    ctx->pc = 0x163DC0u;
    // 0x163dc0: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x163dc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x163dc4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x163dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x163dc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x163DC8u;
    {
        const bool branch_taken_0x163dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DC8u;
        // 0x163dcc: 0xa6830010  sh          $v1, 0x10($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163dc8) {
            ctx->pc = 0x163DE0u;
            goto label_163de0;
        }
    }
    ctx->pc = 0x163DD0u;
label_163dd0:
    // 0x163dd0: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x163dd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x163dd4: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x163dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x163dd8: 0xa6830010  sh          $v1, 0x10($s4)
    ctx->pc = 0x163dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x163ddc: 0x0  nop
    ctx->pc = 0x163ddcu;
    // NOP
label_163de0:
    // 0x163de0: 0x92830098  lbu         $v1, 0x98($s4)
    ctx->pc = 0x163de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x163de4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x163de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x163de8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x163DE8u;
    {
        const bool branch_taken_0x163de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DE8u;
        // 0x163dec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163de8) {
            ctx->pc = 0x163DF8u;
            goto label_163df8;
        }
    }
    ctx->pc = 0x163DF0u;
    // 0x163df0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163DF0u;
    {
        const bool branch_taken_0x163df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163df0) {
            ctx->pc = 0x163E00u;
            goto label_163e00;
        }
    }
    ctx->pc = 0x163DF8u;
label_163df8:
    // 0x163df8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x163df8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163dfc: 0x0  nop
    ctx->pc = 0x163dfcu;
    // NOP
label_163e00:
    // 0x163e00: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x163E00u;
    {
        const bool branch_taken_0x163e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163e00) {
            ctx->pc = 0x163ED8u;
            goto label_163ed8;
        }
    }
    ctx->pc = 0x163E08u;
    // 0x163e08: 0x92830098  lbu         $v1, 0x98($s4)
    ctx->pc = 0x163e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x163e0c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x163e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x163e10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x163E10u;
    {
        const bool branch_taken_0x163e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E10u;
        // 0x163e14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e10) {
            ctx->pc = 0x163E20u;
            goto label_163e20;
        }
    }
    ctx->pc = 0x163E18u;
    // 0x163e18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163E18u;
    {
        const bool branch_taken_0x163e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163e18) {
            ctx->pc = 0x163E28u;
            goto label_163e28;
        }
    }
    ctx->pc = 0x163E20u;
label_163e20:
    // 0x163e20: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x163e20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e24: 0x0  nop
    ctx->pc = 0x163e24u;
    // NOP
label_163e28:
    // 0x163e28: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x163E28u;
    {
        const bool branch_taken_0x163e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163e28) {
            ctx->pc = 0x163ED8u;
            goto label_163ed8;
        }
    }
    ctx->pc = 0x163E30u;
    // 0x163e30: 0x8283009a  lb          $v1, 0x9A($s4)
    ctx->pc = 0x163e30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 154)));
    // 0x163e34: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x163e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x163e38: 0xa283009a  sb          $v1, 0x9A($s4)
    ctx->pc = 0x163e38u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 154), (uint8_t)GPR_U32(ctx, 3));
    // 0x163e3c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x163e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x163e40: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x163e40u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x163e44: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x163E44u;
    {
        const bool branch_taken_0x163e44 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x163e44) {
            ctx->pc = 0x163EA8u;
            goto label_163ea8;
        }
    }
    ctx->pc = 0x163E4Cu;
    // 0x163e4c: 0x9286009b  lbu         $a2, 0x9B($s4)
    ctx->pc = 0x163e4cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 155)));
    // 0x163e50: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x163e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x163e54: 0x92840099  lbu         $a0, 0x99($s4)
    ctx->pc = 0x163e54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 153)));
    // 0x163e58: 0x92850098  lbu         $a1, 0x98($s4)
    ctx->pc = 0x163e58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x163e5c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x163e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x163e60: 0x30a40030  andi        $a0, $a1, 0x30
    ctx->pc = 0x163e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)48);
    // 0x163e64: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x163e64u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x163e68: 0x832007  srav        $a0, $v1, $a0
    ctx->pc = 0x163e68u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x163e6c: 0x86082b  sltu        $at, $a0, $a2
    ctx->pc = 0x163e6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x163e70: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x163E70u;
    {
        const bool branch_taken_0x163e70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E70u;
        // 0x163e74: 0x30a30080  andi        $v1, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e70) {
            ctx->pc = 0x163E98u;
            goto label_163e98;
        }
    }
    ctx->pc = 0x163E78u;
    // 0x163e78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x163E78u;
    {
        const bool branch_taken_0x163e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E78u;
        // 0x163e7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163e78) {
            ctx->pc = 0x163E88u;
            goto label_163e88;
        }
    }
    ctx->pc = 0x163E80u;
    // 0x163e80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x163E80u;
    {
        const bool branch_taken_0x163e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163e80) {
            ctx->pc = 0x163E98u;
            goto label_163e98;
        }
    }
    ctx->pc = 0x163E88u;
label_163e88:
    // 0x163e88: 0x30a300bf  andi        $v1, $a1, 0xBF
    ctx->pc = 0x163e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)191);
    // 0x163e8c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x163e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e90: 0xa2830098  sb          $v1, 0x98($s4)
    ctx->pc = 0x163e90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x163e94: 0x0  nop
    ctx->pc = 0x163e94u;
    // NOP
label_163e98:
    // 0x163e98: 0xa286009b  sb          $a2, 0x9B($s4)
    ctx->pc = 0x163e98u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 155), (uint8_t)GPR_U32(ctx, 6));
    // 0x163e9c: 0x92830098  lbu         $v1, 0x98($s4)
    ctx->pc = 0x163e9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x163ea0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x163ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x163ea4: 0xa283009a  sb          $v1, 0x9A($s4)
    ctx->pc = 0x163ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 154), (uint8_t)GPR_U32(ctx, 3));
label_163ea8:
    // 0x163ea8: 0x9286009b  lbu         $a2, 0x9B($s4)
    ctx->pc = 0x163ea8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 155)));
    // 0x163eac: 0x8e85009c  lw          $a1, 0x9C($s4)
    ctx->pc = 0x163eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x163eb0: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x163eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x163eb4: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x163eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x163eb8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x163eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x163ebc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x163ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x163ec0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x163ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x163ec4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x163ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x163ec8: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x163ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x163ecc: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x163eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x163ed0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x163ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x163ed4: 0xae830020  sw          $v1, 0x20($s4)
    ctx->pc = 0x163ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
label_163ed8:
    // 0x163ed8: 0x92840031  lbu         $a0, 0x31($s4)
    ctx->pc = 0x163ed8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
    // 0x163edc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x163edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x163ee0: 0x108302ef  beq         $a0, $v1, . + 4 + (0x2EF << 2)
    ctx->pc = 0x163EE0u;
    {
        const bool branch_taken_0x163ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x163ee0) {
            ctx->pc = 0x164AA0u;
            goto label_164aa0;
        }
    }
    ctx->pc = 0x163EE8u;
    // 0x163ee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x163ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x163eec: 0x108202a4  beq         $a0, $v0, . + 4 + (0x2A4 << 2)
    ctx->pc = 0x163EECu;
    {
        const bool branch_taken_0x163eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x163EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EECu;
        // 0x163ef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163eec) {
            ctx->pc = 0x164980u;
            goto label_164980;
        }
    }
    ctx->pc = 0x163EF4u;
    // 0x163ef4: 0x1082006e  beq         $a0, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x163EF4u;
    {
        const bool branch_taken_0x163ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x163ef4) {
            ctx->pc = 0x1640B0u;
            goto label_1640b0;
        }
    }
    ctx->pc = 0x163EFCu;
    // 0x163efc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163EFCu;
    {
        const bool branch_taken_0x163efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x163efc) {
            ctx->pc = 0x163F10u;
            goto label_163f10;
        }
    }
    ctx->pc = 0x163F04u;
    // 0x163f04: 0x100002ee  b           . + 4 + (0x2EE << 2)
    ctx->pc = 0x163F04u;
    {
        const bool branch_taken_0x163f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f04) {
            ctx->pc = 0x164AC0u;
            goto label_164ac0;
        }
    }
    ctx->pc = 0x163F0Cu;
    // 0x163f0c: 0x0  nop
    ctx->pc = 0x163f0cu;
    // NOP
label_163f10:
    // 0x163f10: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x163f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x163f14: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x163f14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x163f18: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x163f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x163f1c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x163f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x163f20: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x163f20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x163f24: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x163f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x163f28: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x163f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x163f2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x163f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x163f30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x163f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x163f34: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x163f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x163f38: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x163f38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x163f3c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x163f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x163f40: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x163f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x163f44: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x163f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x163f48: 0x9444003e  lhu         $a0, 0x3E($v0)
    ctx->pc = 0x163f48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x163f4c: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x163f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x163f50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163F50u;
    {
        const bool branch_taken_0x163f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F50u;
        // 0x163f54: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f50) {
            ctx->pc = 0x163F60u;
            goto label_163f60;
        }
    }
    ctx->pc = 0x163F58u;
    // 0x163f58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x163F58u;
    {
        const bool branch_taken_0x163f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163f58) {
            ctx->pc = 0x163F88u;
            goto label_163f88;
        }
    }
    ctx->pc = 0x163F60u;
label_163f60:
    // 0x163f60: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x163f60u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x163f64: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x163f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x163f68: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x163f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x163f6c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x163f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x163f70: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x163f70u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x163f74: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x163f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x163f78: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x163f78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x163f7c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x163f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x163f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163f84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x163f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_163f88:
    // 0x163f88: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x163f88u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x163f8c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x163f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x163f90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x163f90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x163f94: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x163F94u;
    {
        const bool branch_taken_0x163f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163F94u;
        // 0x163f98: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163f94) {
            ctx->pc = 0x1640A0u;
            goto label_1640a0;
        }
    }
    ctx->pc = 0x163F9Cu;
    // 0x163f9c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x163f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x163fa0: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x163fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x163fa4: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x163fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x163fa8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x163fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x163fac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x163facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x163fb0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x163fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x163fb4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x163fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x163fb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x163fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x163fbc: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x163fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x163fc0: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x163fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x163fc4: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x163fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x163fc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x163fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x163fcc: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x163fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x163fd0: 0x9444003c  lhu         $a0, 0x3C($v0)
    ctx->pc = 0x163fd0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x163fd4: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x163fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x163fd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163FD8u;
    {
        const bool branch_taken_0x163fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163FD8u;
        // 0x163fdc: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163fd8) {
            ctx->pc = 0x163FE8u;
            goto label_163fe8;
        }
    }
    ctx->pc = 0x163FE0u;
    // 0x163fe0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x163FE0u;
    {
        const bool branch_taken_0x163fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163fe0) {
            ctx->pc = 0x164010u;
            goto label_164010;
        }
    }
    ctx->pc = 0x163FE8u;
label_163fe8:
    // 0x163fe8: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x163fe8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x163fec: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x163fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x163ff0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x163ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x163ff4: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x163ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x163ff8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x163ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x163ffc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x163ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x164000: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x164000u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x164004: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x164004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x164008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16400c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_164010:
    // 0x164010: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x164010u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x164014: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164018: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x164018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x16401c: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x16401cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x164020: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x164020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x164024: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x164024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x164028: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16402c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x16402cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x164030: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x164030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x164034: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x164038: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x164038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x16403c: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x16403cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x164040: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x164040u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x164044: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164048: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x164048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x16404c: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x16404cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x164050: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x164050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x164054: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164054u;
    {
        const bool branch_taken_0x164054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164054) {
            ctx->pc = 0x164068u;
            goto label_164068;
        }
    }
    ctx->pc = 0x16405Cu;
    // 0x16405c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16405Cu;
    {
        const bool branch_taken_0x16405c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16405Cu;
        // 0x164060: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16405c) {
            ctx->pc = 0x164090u;
            goto label_164090;
        }
    }
    ctx->pc = 0x164064u;
    // 0x164064: 0x0  nop
    ctx->pc = 0x164064u;
    // NOP
label_164068:
    // 0x164068: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x164068u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x16406c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x16406cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x164070: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x164070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x164074: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x164074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x164078: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x164078u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16407c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16407cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x164080: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x164080u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x164084: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x164084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x164088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16408c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16408cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_164090:
    // 0x164090: 0xa6820096  sh          $v0, 0x96($s4)
    ctx->pc = 0x164090u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x164094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164098: 0x10000289  b           . + 4 + (0x289 << 2)
    ctx->pc = 0x164098u;
    {
        const bool branch_taken_0x164098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164098u;
        // 0x16409c: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164098) {
            ctx->pc = 0x164AC0u;
            goto label_164ac0;
        }
    }
    ctx->pc = 0x1640A0u;
label_1640a0:
    // 0x1640a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1640a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1640a4: 0x10000286  b           . + 4 + (0x286 << 2)
    ctx->pc = 0x1640A4u;
    {
        const bool branch_taken_0x1640a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1640A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640A4u;
        // 0x1640a8: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640a4) {
            ctx->pc = 0x164AC0u;
            goto label_164ac0;
        }
    }
    ctx->pc = 0x1640ACu;
    // 0x1640ac: 0x0  nop
    ctx->pc = 0x1640acu;
    // NOP
label_1640b0:
    // 0x1640b0: 0x86820096  lh          $v0, 0x96($s4)
    ctx->pc = 0x1640b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 150)));
    // 0x1640b4: 0x144001b4  bnez        $v0, . + 4 + (0x1B4 << 2)
    ctx->pc = 0x1640B4u;
    {
        const bool branch_taken_0x1640b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1640B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1640B4u;
        // 0x1640b8: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1640b4) {
            ctx->pc = 0x164788u;
            goto label_164788;
        }
    }
    ctx->pc = 0x1640BCu;
    // 0x1640bc: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1640bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1640c0: 0xac20000c  sw          $zero, 0xC($at)
    ctx->pc = 0x1640c0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 12), GPR_U32(ctx, 0)); // MMIO: 0x7000000c
    // 0x1640c4: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x1640c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1640c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1640c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1640cc: 0xac200004  sw          $zero, 0x4($at)
    ctx->pc = 0x1640ccu;
    runtime->Store32(rdram, ctx, 0x70000004u, GPR_U32(ctx, 0)); // MMIO: 0x70000004
    // 0x1640d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1640d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1640d4: 0xac200000  sw          $zero, 0x0($at)
    ctx->pc = 0x1640d4u;
    runtime->Store32(rdram, ctx, 0x70000000u, GPR_U32(ctx, 0)); // MMIO: 0x70000000
    // 0x1640d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1640d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1640dc: 0xa4200284  sh          $zero, 0x284($at)
    ctx->pc = 0x1640dcu;
    runtime->Store16(rdram, ctx, 0x70000284u, (uint16_t)GPR_U32(ctx, 0));
    // 0x1640e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1640e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1640e4: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x1640e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x1640e8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1640e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1640ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1640ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1640f0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1640f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1640f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1640f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1640f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1640f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1640fc: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1640fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x164100: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x164100u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x164104: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x164104u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x164108: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16410c: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x16410cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x164110: 0x9444003a  lhu         $a0, 0x3A($v0)
    ctx->pc = 0x164110u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
    // 0x164114: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x164114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x164118: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164118u;
    {
        const bool branch_taken_0x164118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164118u;
        // 0x16411c: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164118) {
            ctx->pc = 0x164128u;
            goto label_164128;
        }
    }
    ctx->pc = 0x164120u;
    // 0x164120: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x164120u;
    {
        const bool branch_taken_0x164120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164120) {
            ctx->pc = 0x164150u;
            goto label_164150;
        }
    }
    ctx->pc = 0x164128u;
label_164128:
    // 0x164128: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x164128u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x16412c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x16412cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x164130: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x164130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x164134: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x164134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x164138: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x164138u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16413c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16413cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x164140: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x164140u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x164144: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x164144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x164148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16414c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16414cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_164150:
    // 0x164150: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x164150u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164154: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x164154u;
    {
        const bool branch_taken_0x164154 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x164154) {
            ctx->pc = 0x164160u;
            goto label_164160;
        }
    }
    ctx->pc = 0x16415Cu;
    // 0x16415c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16415cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_164160:
    // 0x164160: 0xc05d368  jal         func_174DA0
    ctx->pc = 0x164160u;
    SET_GPR_U32(ctx, 31, 0x164168u);
    ctx->pc = 0x164164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164160u;
    // 0x164164: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174DA0u, 0x164160u, 0x164168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164168u;
label_164168:
    // 0x164168: 0x10400165  beqz        $v0, . + 4 + (0x165 << 2)
    ctx->pc = 0x164168u;
    {
        const bool branch_taken_0x164168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164168u;
        // 0x16416c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164168) {
            ctx->pc = 0x164700u;
            goto label_164700;
        }
    }
    ctx->pc = 0x164170u;
    // 0x164170: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164174: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x164174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x164178: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x164178u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x16417c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x16417cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x164180: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x164180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x164184: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164188: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x164188u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x16418c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16418cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x164190: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x164194: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x164194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x164198: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x164198u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x16419c: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x16419cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x1641a0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1641a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1641a4: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1641a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1641a8: 0x94440046  lhu         $a0, 0x46($v0)
    ctx->pc = 0x1641a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x1641ac: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x1641acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x1641b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1641B0u;
    {
        const bool branch_taken_0x1641b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1641B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641B0u;
        // 0x1641b4: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641b0) {
            ctx->pc = 0x1641C0u;
            goto label_1641c0;
        }
    }
    ctx->pc = 0x1641B8u;
    // 0x1641b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1641B8u;
    {
        const bool branch_taken_0x1641b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1641b8) {
            ctx->pc = 0x1641E8u;
            goto label_1641e8;
        }
    }
    ctx->pc = 0x1641C0u;
label_1641c0:
    // 0x1641c0: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x1641c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1641c4: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x1641c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1641c8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1641c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1641cc: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x1641ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x1641d0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1641d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1641d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1641d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1641d8: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x1641d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1641dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1641dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1641e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1641e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1641e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1641e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1641e8:
    // 0x1641e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1641e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1641ec: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x1641ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F008u));
    // 0x1641f0: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x1641f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x1641f4: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x1641f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x1641f8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1641f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1641fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1641fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164200: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x164200u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x164204: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x164204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x164208: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x164208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16420c: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x16420cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x164210: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x164210u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x164214: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x164214u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x164218: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x164218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16421c: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x16421cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x164220: 0x94650044  lhu         $a1, 0x44($v1)
    ctx->pc = 0x164220u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x164224: 0x30a3f000  andi        $v1, $a1, 0xF000
    ctx->pc = 0x164224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x164228: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164228u;
    {
        const bool branch_taken_0x164228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164228u;
        // 0x16422c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164228) {
            ctx->pc = 0x164238u;
            goto label_164238;
        }
    }
    ctx->pc = 0x164230u;
    // 0x164230: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x164230u;
    {
        const bool branch_taken_0x164230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164230u;
        // 0x164234: 0x30a30fff  andi        $v1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164230) {
            ctx->pc = 0x164260u;
            goto label_164260;
        }
    }
    ctx->pc = 0x164238u;
label_164238:
    // 0x164238: 0x53b03  sra         $a3, $a1, 12
    ctx->pc = 0x164238u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 12));
    // 0x16423c: 0x30a30fff  andi        $v1, $a1, 0xFFF
    ctx->pc = 0x16423cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x164240: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x164240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x164244: 0x24050fff  addiu       $a1, $zero, 0xFFF
    ctx->pc = 0x164244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x164248: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x164248u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x16424c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x16424cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x164250: 0xc52807  srav        $a1, $a1, $a2
    ctx->pc = 0x164250u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x164254: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x164254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x164258: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x164258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16425c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16425cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_164260:
    // 0x164260: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164264: 0x8c25f008  lw          $a1, -0xFF8($at)
    ctx->pc = 0x164264u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F008u));
    // 0x164268: 0x3c04873c  lui         $a0, 0x873C
    ctx->pc = 0x164268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34620 << 16));
    // 0x16426c: 0x3484a9e5  ori         $a0, $a0, 0xA9E5
    ctx->pc = 0x16426cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43493);
    // 0x164270: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x164270u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x164274: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164278: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x164278u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x16427c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x16427cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x164280: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x164280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x164284: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x164284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x164288: 0xac24f008  sw          $a0, -0xFF8($at)
    ctx->pc = 0x164288u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 4));
    // 0x16428c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x16428cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x164290: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x164290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x164294: 0x8e840090  lw          $a0, 0x90($s4)
    ctx->pc = 0x164294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x164298: 0x94860042  lhu         $a2, 0x42($a0)
    ctx->pc = 0x164298u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x16429c: 0x30c4f000  andi        $a0, $a2, 0xF000
    ctx->pc = 0x16429cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61440);
    // 0x1642a0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1642A0u;
    {
        const bool branch_taken_0x1642a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1642A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642A0u;
        // 0x1642a4: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642a0) {
            ctx->pc = 0x1642B0u;
            goto label_1642b0;
        }
    }
    ctx->pc = 0x1642A8u;
    // 0x1642a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1642A8u;
    {
        const bool branch_taken_0x1642a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1642ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642A8u;
        // 0x1642ac: 0x30c40fff  andi        $a0, $a2, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642a8) {
            ctx->pc = 0x1642D8u;
            goto label_1642d8;
        }
    }
    ctx->pc = 0x1642B0u;
label_1642b0:
    // 0x1642b0: 0x64303  sra         $t0, $a2, 12
    ctx->pc = 0x1642b0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 12));
    // 0x1642b4: 0x30c40fff  andi        $a0, $a2, 0xFFF
    ctx->pc = 0x1642b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x1642b8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1642b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1642bc: 0x24060fff  addiu       $a2, $zero, 0xFFF
    ctx->pc = 0x1642bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x1642c0: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1642c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1642c4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1642c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1642c8: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x1642c8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x1642cc: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1642ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1642d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1642d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1642d4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1642d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1642d8:
    // 0x1642d8: 0x92880023  lbu         $t0, 0x23($s4)
    ctx->pc = 0x1642d8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 35)));
    // 0x1642dc: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x1642dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1642e0: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1642E0u;
    {
        const bool branch_taken_0x1642e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1642E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642E0u;
        // 0x1642e4: 0x26460008  addiu       $a2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642e0) {
            ctx->pc = 0x164338u;
            goto label_164338;
        }
    }
    ctx->pc = 0x1642E8u;
    // 0x1642e8: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x1642e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1642ec: 0x310500ff  andi        $a1, $t0, 0xFF
    ctx->pc = 0x1642ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1642f0: 0xa2400006  sb          $zero, 0x6($s2)
    ctx->pc = 0x1642f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x1642f4: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x1642f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1642f8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1642F8u;
    {
        const bool branch_taken_0x1642f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1642FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642F8u;
        // 0x1642fc: 0xa0c80002  sb          $t0, 0x2($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642f8) {
            ctx->pc = 0x164310u;
            goto label_164310;
        }
    }
    ctx->pc = 0x164300u;
    // 0x164300: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x164300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x164304u;
    {
        const bool branch_taken_0x164304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164304u;
        // 0x164308: 0xa0c40003  sb          $a0, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164304) {
            ctx->pc = 0x164328u;
            goto label_164328;
        }
    }
    ctx->pc = 0x16430Cu;
    // 0x16430c: 0x0  nop
    ctx->pc = 0x16430cu;
    // NOP
label_164310:
    // 0x164310: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x164310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x164314: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x164314u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x164318: 0x0  nop
    ctx->pc = 0x164318u;
    // NOP
    // 0x16431c: 0x0  nop
    ctx->pc = 0x16431cu;
    // NOP
    // 0x164320: 0x2012  mflo        $a0
    ctx->pc = 0x164320u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x164324: 0xa0c40003  sb          $a0, 0x3($a2)
    ctx->pc = 0x164324u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 4));
label_164328:
    // 0x164328: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x164328u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x16432c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16432Cu;
    {
        const bool branch_taken_0x16432c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16432Cu;
        // 0x164330: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16432c) {
            ctx->pc = 0x164358u;
            goto label_164358;
        }
    }
    ctx->pc = 0x164334u;
    // 0x164334: 0x0  nop
    ctx->pc = 0x164334u;
    // NOP
label_164338:
    // 0x164338: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x164338u;
    {
        const bool branch_taken_0x164338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164338u;
        // 0x16433c: 0xa2480006  sb          $t0, 0x6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164338) {
            ctx->pc = 0x164350u;
            goto label_164350;
        }
    }
    ctx->pc = 0x164340u;
    // 0x164340: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x164340u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x164344: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164348: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164348u;
    {
        const bool branch_taken_0x164348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164348u;
        // 0x16434c: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164348) {
            ctx->pc = 0x164358u;
            goto label_164358;
        }
    }
    ctx->pc = 0x164350u;
label_164350:
    // 0x164350: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x164350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164354: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x164354u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_164358:
    // 0x164358: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x164358u;
    {
        const bool branch_taken_0x164358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164358u;
        // 0x16435c: 0x310300ff  andi        $v1, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164358) {
            ctx->pc = 0x1643A0u;
            goto label_1643a0;
        }
    }
    ctx->pc = 0x164360u;
    // 0x164360: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x164360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164364: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x164364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x164368: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x164368u;
    {
        const bool branch_taken_0x164368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x164368) {
            ctx->pc = 0x164380u;
            goto label_164380;
        }
    }
    ctx->pc = 0x164370u;
    // 0x164370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164374: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x164374u;
    {
        const bool branch_taken_0x164374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164374u;
        // 0x164378: 0xa2420007  sb          $v0, 0x7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164374) {
            ctx->pc = 0x1643A8u;
            goto label_1643a8;
        }
    }
    ctx->pc = 0x16437Cu;
    // 0x16437c: 0x0  nop
    ctx->pc = 0x16437cu;
    // NOP
label_164380:
    // 0x164380: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x164380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x164384: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x164384u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x164388: 0x0  nop
    ctx->pc = 0x164388u;
    // NOP
    // 0x16438c: 0x0  nop
    ctx->pc = 0x16438cu;
    // NOP
    // 0x164390: 0x1012  mflo        $v0
    ctx->pc = 0x164390u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x164394: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164394u;
    {
        const bool branch_taken_0x164394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164394u;
        // 0x164398: 0xa2420007  sb          $v0, 0x7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164394) {
            ctx->pc = 0x1643A8u;
            goto label_1643a8;
        }
    }
    ctx->pc = 0x16439Cu;
    // 0x16439c: 0x0  nop
    ctx->pc = 0x16439cu;
    // NOP
label_1643a0:
    // 0x1643a0: 0xa2480007  sb          $t0, 0x7($s2)
    ctx->pc = 0x1643a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 8));
    // 0x1643a4: 0x0  nop
    ctx->pc = 0x1643a4u;
    // NOP
label_1643a8:
    // 0x1643a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1643a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1643ac: 0x8c25f008  lw          $a1, -0xFF8($at)
    ctx->pc = 0x1643acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81F008u));
    // 0x1643b0: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1643b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1643b4: 0x3444a9e5  ori         $a0, $v0, 0xA9E5
    ctx->pc = 0x1643b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1643b8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1643b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1643bc: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x1643bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1643c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1643c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1643c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1643c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1643c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1643c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1643cc: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1643ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1643d0: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x1643d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x1643d4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1643d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1643d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1643d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1643dc: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x1643dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1643e0: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1643e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1643e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1643e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1643e8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1643e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1643ec: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1643ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1643f0: 0xc442005c  lwc1        $f2, 0x5C($v0)
    ctx->pc = 0x1643f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1643f4: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x1643f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1643f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1643f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1643fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1643fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x164400: 0xe4200008  swc1        $f0, 0x8($at)
    ctx->pc = 0x164400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 8), bits); }
    // 0x164404: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164408: 0x8c22f008  lw          $v0, -0xFF8($at)
    ctx->pc = 0x164408u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81F008u));
    // 0x16440c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x16440cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x164410: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164414: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x164414u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x164418: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x164418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16441c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x164420: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x164420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x164424: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x164424u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x164428: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x164428u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x16442c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16442cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164430: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x164430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x164434: 0x94440054  lhu         $a0, 0x54($v0)
    ctx->pc = 0x164434u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x164438: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x164438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x16443c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16443Cu;
    {
        const bool branch_taken_0x16443c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16443Cu;
        // 0x164440: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16443c) {
            ctx->pc = 0x164450u;
            goto label_164450;
        }
    }
    ctx->pc = 0x164444u;
    // 0x164444: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x164444u;
    {
        const bool branch_taken_0x164444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164444) {
            ctx->pc = 0x164478u;
            goto label_164478;
        }
    }
    ctx->pc = 0x16444Cu;
    // 0x16444c: 0x0  nop
    ctx->pc = 0x16444cu;
    // NOP
label_164450:
    // 0x164450: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x164450u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x164454: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x164454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x164458: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x164458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16445c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x16445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x164460: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x164460u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x164464: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x164464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x164468: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x164468u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x16446c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16446cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x164470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164474: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_164478:
    // 0x164478: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x164478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16447c: 0xa4220280  sh          $v0, 0x280($at)
    ctx->pc = 0x16447cu;
    runtime->Store16(rdram, ctx, 0x70000280u, (uint16_t)GPR_U32(ctx, 2));
    // 0x164480: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164484: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x164484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x164488: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x164488u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x16448c: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x16448cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x164490: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x164490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x164494: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164498: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x164498u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x16449c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1644a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1644a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1644a4: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1644a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1644a8: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x1644a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x1644ac: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x1644acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x1644b0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1644b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1644b4: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1644b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1644b8: 0x94440056  lhu         $a0, 0x56($v0)
    ctx->pc = 0x1644b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
    // 0x1644bc: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x1644bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x1644c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1644C0u;
    {
        const bool branch_taken_0x1644c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1644c0) {
            ctx->pc = 0x1644D0u;
            goto label_1644d0;
        }
    }
    ctx->pc = 0x1644C8u;
    // 0x1644c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1644C8u;
    {
        const bool branch_taken_0x1644c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644C8u;
        // 0x1644cc: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644c8) {
            ctx->pc = 0x1644F8u;
            goto label_1644f8;
        }
    }
    ctx->pc = 0x1644D0u;
label_1644d0:
    // 0x1644d0: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x1644d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1644d4: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x1644d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1644d8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1644d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1644dc: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x1644dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x1644e0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1644e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1644e4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1644e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1644e8: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x1644e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1644ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1644ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1644f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1644f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1644f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1644f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1644f8:
    // 0x1644f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1644f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1644fc: 0xa4220282  sh          $v0, 0x282($at)
    ctx->pc = 0x1644fcu;
    runtime->Store16(rdram, ctx, 0x70000282u, (uint16_t)GPR_U32(ctx, 2));
    // 0x164500: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x164500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x164504: 0x34440200  ori         $a0, $v0, 0x200
    ctx->pc = 0x164504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x164508: 0xc04d52c  jal         func_1354B0
    ctx->pc = 0x164508u;
    SET_GPR_U32(ctx, 31, 0x164510u);
    ctx->pc = 0x16450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164508u;
    // 0x16450c: 0x34450280  ori         $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)640);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1354B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1354B0u, 0x164508u, 0x164510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164510u;
label_164510:
    // 0x164510: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x164510u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x164514: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x164514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x164518: 0xc041442  jal         func_105108
    ctx->pc = 0x164518u;
    SET_GPR_U32(ctx, 31, 0x164520u);
    ctx->pc = 0x16451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164518u;
    // 0x16451c: 0x34c50200  ori         $a1, $a2, 0x200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x164518u, 0x164520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164520u;
label_164520:
    // 0x164520: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x164520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x164524: 0x90420021  lbu         $v0, 0x21($v0)
    ctx->pc = 0x164524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x164528: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x164528u;
    {
        const bool branch_taken_0x164528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164528u;
        // 0x16452c: 0x3c02007e  lui         $v0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164528) {
            ctx->pc = 0x164548u;
            goto label_164548;
        }
    }
    ctx->pc = 0x164530u;
    // 0x164530: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x164530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x164534: 0x244268d0  addiu       $v0, $v0, 0x68D0
    ctx->pc = 0x164534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26832));
    // 0x164538: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x164538u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16453c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x16453cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164540: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x164540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164544: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x164544u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
label_164548:
    // 0x164548: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x164548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16454c: 0x26820050  addiu       $v0, $s4, 0x50
    ctx->pc = 0x16454cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x164550: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x164550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x164554: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x164554u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164558: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16455c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16455cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x164560: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x164560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x164564: 0x8c28f008  lw          $t0, -0xFF8($at)
    ctx->pc = 0x164564u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81F008u));
    // 0x164568: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x164568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16456c: 0x3446a9e5  ori         $a2, $v0, 0xA9E5
    ctx->pc = 0x16456cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x164570: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x164570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x164574: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x164574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x164578: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x164578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16457c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16457cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x164580: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164584: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x164584u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x164588: 0x8c27f008  lw          $a3, -0xFF8($at)
    ctx->pc = 0x164588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x16458c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x16458cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x164590: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x164590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x164594: 0x3445a9e5  ori         $a1, $v0, 0xA9E5
    ctx->pc = 0x164594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x164598: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x164598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x16459c: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x16459cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1645a0: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x1645a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1645a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1645a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1645a8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1645a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1645ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1645acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1645b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1645b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1645b4: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x1645b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x1645b8: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x1645b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x1645bc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1645bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1645c0: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x1645c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x1645c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1645c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1645c8: 0x3066003f  andi        $a2, $v1, 0x3F
    ctx->pc = 0x1645c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1645cc: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1645ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1645d0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1645d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1645d4: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x1645d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1645d8: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x1645d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1645dc: 0x3444a9e5  ori         $a0, $v0, 0xA9E5
    ctx->pc = 0x1645dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1645e0: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x1645e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1645e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1645e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1645e8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1645e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1645ec: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1645ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1645f0: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x1645f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1645f4: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x1645f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1645f8: 0x460741c2  mul.s       $f7, $f8, $f7
    ctx->pc = 0x1645f8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x1645fc: 0x46053941  sub.s       $f5, $f7, $f5
    ctx->pc = 0x1645fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[7], ctx->f[5]);
    // 0x164600: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x164600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x164604: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x164604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x164608: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x164608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x16460c: 0x8c26f008  lw          $a2, -0xFF8($at)
    ctx->pc = 0x16460cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x164610: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164614: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x164614u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x164618: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x164618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x16461c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x16461cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x164620: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164624: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x164624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x164628: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16462c: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x16462cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x164630: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x164630u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x164634: 0x31b82  srl         $v1, $v1, 14
    ctx->pc = 0x164634u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 14));
    // 0x164638: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16463c: 0x3065003f  andi        $a1, $v1, 0x3F
    ctx->pc = 0x16463cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x164640: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x164640u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x164644: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x164644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x164648: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x164648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x16464c: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x16464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x164650: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x164650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164654: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x164654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164658: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x164658u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x16465c: 0x460328c1  sub.s       $f3, $f5, $f3
    ctx->pc = 0x16465cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x164660: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x164660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x164664: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x164664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x164668: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x164668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x16466c: 0x8c25f008  lw          $a1, -0xFF8($at)
    ctx->pc = 0x16466cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x164670: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164674: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x164674u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x164678: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x164678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x16467c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x16467cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x164680: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164684: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x164684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x164688: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16468c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x16468cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x164690: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x164690u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x164694: 0x31c42  srl         $v1, $v1, 17
    ctx->pc = 0x164694u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 17));
    // 0x164698: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x164698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x16469c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16469cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1646a0: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x1646a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1646a4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1646a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1646a8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1646a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1646ac: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x1646acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1646b0: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1646b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1646b4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1646b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1646b8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1646b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1646bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1646bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1646c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1646c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1646c4: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x1646c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x1646c8: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x1646c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x1646cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1646ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1646d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1646D0u;
    {
        const bool branch_taken_0x1646d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1646D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1646D0u;
        // 0x1646d4: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1646d0) {
            ctx->pc = 0x1646F8u;
            goto label_1646f8;
        }
    }
    ctx->pc = 0x1646D8u;
label_1646d8:
    // 0x1646d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1646d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646dc: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1646dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1646e0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1646e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1646e4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1646e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1646e8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1646e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1646ec: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1646ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1646f0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1646f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1646f4: 0x0  nop
    ctx->pc = 0x1646f4u;
    // NOP
label_1646f8:
    // 0x1646f8: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1646F8u;
    {
        const bool branch_taken_0x1646f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1646f8) {
            ctx->pc = 0x1646D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1646d8;
        }
    }
    ctx->pc = 0x164700u;
label_164700:
    // 0x164700: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x164700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x164704: 0x1620fe96  bnez        $s1, . + 4 + (-0x16A << 2)
    ctx->pc = 0x164704u;
    {
        const bool branch_taken_0x164704 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x164708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164704u;
        // 0x164708: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164704) {
            ctx->pc = 0x164160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164160;
        }
    }
    ctx->pc = 0x16470Cu;
    // 0x16470c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x16470cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x164710: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x164710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x164714: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x164714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x164718: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x164718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16471c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16471cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164720: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x164720u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x164724: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x164724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x164728: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16472c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x16472cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x164730: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x164730u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x164734: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x164734u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x164738: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16473c: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x16473cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x164740: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x164740u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x164744: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x164744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x164748: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164748u;
    {
        const bool branch_taken_0x164748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164748u;
        // 0x16474c: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164748) {
            ctx->pc = 0x164758u;
            goto label_164758;
        }
    }
    ctx->pc = 0x164750u;
    // 0x164750: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x164750u;
    {
        const bool branch_taken_0x164750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164750) {
            ctx->pc = 0x164780u;
            goto label_164780;
        }
    }
    ctx->pc = 0x164758u;
label_164758:
    // 0x164758: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x164758u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x16475c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x16475cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x164760: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x164760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x164764: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x164764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x164768: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x164768u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16476c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16476cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x164770: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x164770u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x164774: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x164774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x164778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16477c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16477cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_164780:
    // 0x164780: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164780u;
    {
        const bool branch_taken_0x164780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164780u;
        // 0x164784: 0xa6820096  sh          $v0, 0x96($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164780) {
            ctx->pc = 0x164790u;
            goto label_164790;
        }
    }
    ctx->pc = 0x164788u;
label_164788:
    // 0x164788: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x164788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16478c: 0xa6820096  sh          $v0, 0x96($s4)
    ctx->pc = 0x16478cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
label_164790:
    // 0x164790: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x164790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x164794: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x164794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x164798: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x164798u;
    {
        const bool branch_taken_0x164798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164798) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x1647A0u;
    // 0x1647a0: 0x968200a2  lhu         $v0, 0xA2($s4)
    ctx->pc = 0x1647a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 162)));
    // 0x1647a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1647a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1647a8: 0xa68200a2  sh          $v0, 0xA2($s4)
    ctx->pc = 0x1647a8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x1647ac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1647acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1647b0: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1647b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1647b4: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x1647b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1647b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1647B8u;
    {
        const bool branch_taken_0x1647b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1647BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647B8u;
        // 0x1647bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647b8) {
            ctx->pc = 0x1647C8u;
            goto label_1647c8;
        }
    }
    ctx->pc = 0x1647C0u;
    // 0x1647c0: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x1647C0u;
    {
        const bool branch_taken_0x1647c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1647C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647C0u;
        // 0x1647c4: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647c0) {
            ctx->pc = 0x164AC0u;
            goto label_164ac0;
        }
    }
    ctx->pc = 0x1647C8u;
label_1647c8:
    // 0x1647c8: 0x86820094  lh          $v0, 0x94($s4)
    ctx->pc = 0x1647c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1647cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1647ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1647d0: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x1647d0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x1647d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1647d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1647d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1647d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1647dc: 0x1c4000b8  bgtz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1647DCu;
    {
        const bool branch_taken_0x1647dc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1647E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1647DCu;
        // 0x1647e0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1647dc) {
            ctx->pc = 0x164AC0u;
            goto label_164ac0;
        }
    }
    ctx->pc = 0x1647E4u;
    // 0x1647e4: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1647e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1647e8: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x1647e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x1647ec: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x1647ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1647f0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1647f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1647f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1647f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1647f8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1647f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1647fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1647fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x164800: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x164804: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x164804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x164808: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x164808u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x16480c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16480cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x164810: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164814: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x164814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x164818: 0x9444003e  lhu         $a0, 0x3E($v0)
    ctx->pc = 0x164818u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x16481c: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x16481cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x164820: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164820u;
    {
        const bool branch_taken_0x164820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164820u;
        // 0x164824: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164820) {
            ctx->pc = 0x164830u;
            goto label_164830;
        }
    }
    ctx->pc = 0x164828u;
    // 0x164828: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x164828u;
    {
        const bool branch_taken_0x164828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164828) {
            ctx->pc = 0x164858u;
            goto label_164858;
        }
    }
    ctx->pc = 0x164830u;
label_164830:
    // 0x164830: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x164830u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x164834: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x164834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x164838: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x164838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16483c: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x16483cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x164840: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x164840u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x164844: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x164844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x164848: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x164848u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x16484c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x16484cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x164850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164854: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_164858:
    // 0x164858: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x164858u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x16485c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16485cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x164860: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x164860u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x164864: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x164864u;
    {
        const bool branch_taken_0x164864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164864u;
        // 0x164868: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164864) {
            ctx->pc = 0x164970u;
            goto label_164970;
        }
    }
    ctx->pc = 0x16486Cu;
    // 0x16486c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x16486cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x164870: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x164870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x164874: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x164874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x164878: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x164878u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x16487c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16487cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164880: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x164880u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x164884: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x164884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x164888: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16488c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x16488cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x164890: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x164890u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x164894: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x164894u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x164898: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16489c: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x16489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1648a0: 0x9444003c  lhu         $a0, 0x3C($v0)
    ctx->pc = 0x1648a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1648a4: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x1648a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x1648a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1648A8u;
    {
        const bool branch_taken_0x1648a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1648ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648A8u;
        // 0x1648ac: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648a8) {
            ctx->pc = 0x1648B8u;
            goto label_1648b8;
        }
    }
    ctx->pc = 0x1648B0u;
    // 0x1648b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1648B0u;
    {
        const bool branch_taken_0x1648b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1648b0) {
            ctx->pc = 0x1648E0u;
            goto label_1648e0;
        }
    }
    ctx->pc = 0x1648B8u;
label_1648b8:
    // 0x1648b8: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x1648b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1648bc: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x1648bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1648c0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1648c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1648c4: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x1648c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x1648c8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1648c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1648cc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1648ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1648d0: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x1648d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1648d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1648d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1648d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1648d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1648dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1648dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1648e0:
    // 0x1648e0: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x1648e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x1648e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1648e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1648e8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x1648e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1648ec: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x1648ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x1648f0: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x1648f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1648f4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1648f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1648f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1648f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1648fc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1648fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x164900: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x164900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x164904: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x164908: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x164908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x16490c: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x16490cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x164910: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x164910u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x164914: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164918: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x164918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x16491c: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x16491cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x164920: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x164920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x164924: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164924u;
    {
        const bool branch_taken_0x164924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164924) {
            ctx->pc = 0x164938u;
            goto label_164938;
        }
    }
    ctx->pc = 0x16492Cu;
    // 0x16492c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16492Cu;
    {
        const bool branch_taken_0x16492c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16492Cu;
        // 0x164930: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16492c) {
            ctx->pc = 0x164960u;
            goto label_164960;
        }
    }
    ctx->pc = 0x164934u;
    // 0x164934: 0x0  nop
    ctx->pc = 0x164934u;
    // NOP
label_164938:
    // 0x164938: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x164938u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x16493c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x16493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x164940: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x164940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x164944: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x164944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x164948: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x164948u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16494c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16494cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x164950: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x164950u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x164954: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x164954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x164958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16495c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x16495cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_164960:
    // 0x164960: 0xa6820096  sh          $v0, 0x96($s4)
    ctx->pc = 0x164960u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x164964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164968: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x164968u;
    {
        const bool branch_taken_0x164968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164968u;
        // 0x16496c: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164968) {
            ctx->pc = 0x164AC0u;
            goto label_164ac0;
        }
    }
    ctx->pc = 0x164970u;
label_164970:
    // 0x164970: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x164970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164974: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x164974u;
    {
        const bool branch_taken_0x164974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164974u;
        // 0x164978: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164974) {
            ctx->pc = 0x164AC0u;
            goto label_164ac0;
        }
    }
    ctx->pc = 0x16497Cu;
    // 0x16497c: 0x0  nop
    ctx->pc = 0x16497cu;
    // NOP
label_164980:
    // 0x164980: 0x86820094  lh          $v0, 0x94($s4)
    ctx->pc = 0x164980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x164984: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x164984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x164988: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x164988u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x16498c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16498cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x164990: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x164990u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x164994: 0x1c40004a  bgtz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x164994u;
    {
        const bool branch_taken_0x164994 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x164998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164994u;
        // 0x164998: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164994) {
            ctx->pc = 0x164AC0u;
            goto label_164ac0;
        }
    }
    ctx->pc = 0x16499Cu;
    // 0x16499c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x16499cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x1649a0: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x1649a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963208)));
    // 0x1649a4: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x1649a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x1649a8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1649a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1649ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1649acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1649b0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1649b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1649b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1649b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1649b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1649b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1649bc: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1649bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1649c0: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x1649c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x1649c4: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x1649c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x1649c8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1649c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1649cc: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x1649ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x1649d0: 0x9444003c  lhu         $a0, 0x3C($v0)
    ctx->pc = 0x1649d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1649d4: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x1649d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x1649d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1649D8u;
    {
        const bool branch_taken_0x1649d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1649DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649D8u;
        // 0x1649dc: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1649d8) {
            ctx->pc = 0x1649E8u;
            goto label_1649e8;
        }
    }
    ctx->pc = 0x1649E0u;
    // 0x1649e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1649E0u;
    {
        const bool branch_taken_0x1649e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1649e0) {
            ctx->pc = 0x164A10u;
            goto label_164a10;
        }
    }
    ctx->pc = 0x1649E8u;
label_1649e8:
    // 0x1649e8: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x1649e8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1649ec: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x1649ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1649f0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1649f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1649f4: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x1649f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x1649f8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1649f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1649fc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1649fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x164a00: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x164a00u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x164a04: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x164a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x164a08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164a0c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_164a10:
    // 0x164a10: 0xa6820094  sh          $v0, 0x94($s4)
    ctx->pc = 0x164a10u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x164a14: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164a18: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x164a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x164a1c: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x164a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x164a20: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x164a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x164a24: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x164a24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x164a28: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164a2c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x164a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x164a30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x164a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x164a34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x164a38: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x164a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x164a3c: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x164a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x164a40: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x164a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x164a44: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x164a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x164a48: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x164a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x164a4c: 0x94440040  lhu         $a0, 0x40($v0)
    ctx->pc = 0x164a4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x164a50: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x164a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x164a54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164A54u;
    {
        const bool branch_taken_0x164a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164a54) {
            ctx->pc = 0x164A68u;
            goto label_164a68;
        }
    }
    ctx->pc = 0x164A5Cu;
    // 0x164a5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x164A5Cu;
    {
        const bool branch_taken_0x164a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A5Cu;
        // 0x164a60: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a5c) {
            ctx->pc = 0x164A90u;
            goto label_164a90;
        }
    }
    ctx->pc = 0x164A64u;
    // 0x164a64: 0x0  nop
    ctx->pc = 0x164a64u;
    // NOP
label_164a68:
    // 0x164a68: 0x43303  sra         $a2, $a0, 12
    ctx->pc = 0x164a68u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 12));
    // 0x164a6c: 0x30820fff  andi        $v0, $a0, 0xFFF
    ctx->pc = 0x164a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x164a70: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x164a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x164a74: 0x24040fff  addiu       $a0, $zero, 0xFFF
    ctx->pc = 0x164a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x164a78: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x164a78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x164a7c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x164a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x164a80: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x164a80u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x164a84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x164a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x164a88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x164a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x164a8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x164a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_164a90:
    // 0x164a90: 0xa6820096  sh          $v0, 0x96($s4)
    ctx->pc = 0x164a90u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 150), (uint16_t)GPR_U32(ctx, 2));
    // 0x164a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164a98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x164A98u;
    {
        const bool branch_taken_0x164a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A98u;
        // 0x164a9c: 0xa2820031  sb          $v0, 0x31($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164a98) {
            ctx->pc = 0x164AC0u;
            goto label_164ac0;
        }
    }
    ctx->pc = 0x164AA0u;
label_164aa0:
    // 0x164aa0: 0x968300aa  lhu         $v1, 0xAA($s4)
    ctx->pc = 0x164aa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 170)));
    // 0x164aa4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x164AA4u;
    {
        const bool branch_taken_0x164aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x164aa4) {
            ctx->pc = 0x164AC0u;
            goto label_164ac0;
        }
    }
    ctx->pc = 0x164AACu;
    // 0x164aac: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x164aacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x164ab0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x164ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x164ab4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x164AB4u;
    {
        const bool branch_taken_0x164ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164AB4u;
        // 0x164ab8: 0xa6830010  sh          $v1, 0x10($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ab4) {
            ctx->pc = 0x164C38u;
            goto label_164c38;
        }
    }
    ctx->pc = 0x164ABCu;
    // 0x164abc: 0x0  nop
    ctx->pc = 0x164abcu;
    // NOP
label_164ac0:
    // 0x164ac0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164ac4: 0x8c23f008  lw          $v1, -0xFF8($at)
    ctx->pc = 0x164ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81F008u));
    // 0x164ac8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x164ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x164acc: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x164accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x164ad0: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x164ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x164ad4: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x164ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x164ad8: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x164ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x164adc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164ae0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x164ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x164ae4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x164ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x164ae8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x164ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x164aec: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x164aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x164af0: 0xac22f008  sw          $v0, -0xFF8($at)
    ctx->pc = 0x164af0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 2));
    // 0x164af4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x164af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x164af8: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x164af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x164afc: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x164afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x164b00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x164b00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x164b04: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x164b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x164b08: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x164b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164b0c: 0xc4420064  lwc1        $f2, 0x64($v0)
    ctx->pc = 0x164b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164b10: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x164b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164b14: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x164b14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x164b18: 0xc0414dc  jal         func_105370
    ctx->pc = 0x164B18u;
    SET_GPR_U32(ctx, 31, 0x164B20u);
    ctx->pc = 0x164B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164B18u;
    // 0x164b1c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x164B18u, 0x164B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164B20u;
label_164b20:
    // 0x164b20: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x164b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x164b24: 0x90420021  lbu         $v0, 0x21($v0)
    ctx->pc = 0x164b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x164b28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x164B28u;
    {
        const bool branch_taken_0x164b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164B28u;
        // 0x164b2c: 0x3c02007e  lui         $v0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164b28) {
            ctx->pc = 0x164B50u;
            goto label_164b50;
        }
    }
    ctx->pc = 0x164B30u;
    // 0x164b30: 0x26830080  addiu       $v1, $s4, 0x80
    ctx->pc = 0x164b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x164b34: 0x244268e0  addiu       $v0, $v0, 0x68E0
    ctx->pc = 0x164b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26848));
    // 0x164b38: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x164b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x164b3c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x164b3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164b40: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x164b40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164b44: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x164b44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x164b48: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x164b48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x164b4c: 0x0  nop
    ctx->pc = 0x164b4cu;
    // NOP
label_164b50:
    // 0x164b50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164b54: 0x8c24f008  lw          $a0, -0xFF8($at)
    ctx->pc = 0x164b54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F008u));
    // 0x164b58: 0x3c03873c  lui         $v1, 0x873C
    ctx->pc = 0x164b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34620 << 16));
    // 0x164b5c: 0x3463a9e5  ori         $v1, $v1, 0xA9E5
    ctx->pc = 0x164b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43493);
    // 0x164b60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x164b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x164b64: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x164b64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x164b68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x164b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x164b6c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x164b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x164b70: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x164b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x164b74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x164b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x164b78: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x164b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x164b7c: 0xac23f008  sw          $v1, -0xFF8($at)
    ctx->pc = 0x164b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963208), GPR_U32(ctx, 3));
    // 0x164b80: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x164b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x164b84: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x164b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x164b88: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x164b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x164b8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x164b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x164b90: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x164b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x164b94: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x164b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164b98: 0xc6800084  lwc1        $f0, 0x84($s4)
    ctx->pc = 0x164b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164b9c: 0xc463006c  lwc1        $f3, 0x6C($v1)
    ctx->pc = 0x164b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x164ba0: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x164ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164ba4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x164ba4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x164ba8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x164ba8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x164bac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x164bacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x164bb0: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x164bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x164bb4: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x164bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x164bb8: 0x90630038  lbu         $v1, 0x38($v1)
    ctx->pc = 0x164bb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x164bbc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x164BBCu;
    {
        const bool branch_taken_0x164bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BBCu;
        // 0x164bc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164bbc) {
            ctx->pc = 0x164C10u;
            goto label_164c10;
        }
    }
    ctx->pc = 0x164BC4u;
    // 0x164bc4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x164BC4u;
    {
        const bool branch_taken_0x164bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x164bc4) {
            ctx->pc = 0x164BF8u;
            goto label_164bf8;
        }
    }
    ctx->pc = 0x164BCCu;
    // 0x164bcc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x164BCCu;
    {
        const bool branch_taken_0x164bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x164bcc) {
            ctx->pc = 0x164BE0u;
            goto label_164be0;
        }
    }
    ctx->pc = 0x164BD4u;
    // 0x164bd4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x164BD4u;
    {
        const bool branch_taken_0x164bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164bd4) {
            ctx->pc = 0x164C28u;
            goto label_164c28;
        }
    }
    ctx->pc = 0x164BDCu;
    // 0x164bdc: 0x0  nop
    ctx->pc = 0x164bdcu;
    // NOP
label_164be0:
    // 0x164be0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164be4: 0xc05d188  jal         func_174620
    ctx->pc = 0x164BE4u;
    SET_GPR_U32(ctx, 31, 0x164BECu);
    ctx->pc = 0x164BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164BE4u;
    // 0x164be8: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174620u, 0x164BE4u, 0x164BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164BECu;
label_164bec:
    // 0x164bec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x164BECu;
    {
        const bool branch_taken_0x164bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164BECu;
        // 0x164bf0: 0xa68200aa  sh          $v0, 0xAA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 170), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164bec) {
            ctx->pc = 0x164C38u;
            goto label_164c38;
        }
    }
    ctx->pc = 0x164BF4u;
    // 0x164bf4: 0x0  nop
    ctx->pc = 0x164bf4u;
    // NOP
label_164bf8:
    // 0x164bf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164bfc: 0xc05d1f8  jal         func_1747E0
    ctx->pc = 0x164BFCu;
    SET_GPR_U32(ctx, 31, 0x164C04u);
    ctx->pc = 0x164C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164BFCu;
    // 0x164c00: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1747E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1747E0u, 0x164BFCu, 0x164C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C04u;
label_164c04:
    // 0x164c04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x164C04u;
    {
        const bool branch_taken_0x164c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C04u;
        // 0x164c08: 0xa68200aa  sh          $v0, 0xAA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 170), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c04) {
            ctx->pc = 0x164C38u;
            goto label_164c38;
        }
    }
    ctx->pc = 0x164C0Cu;
    // 0x164c0c: 0x0  nop
    ctx->pc = 0x164c0cu;
    // NOP
label_164c10:
    // 0x164c10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c14: 0xc05d26c  jal         func_1749B0
    ctx->pc = 0x164C14u;
    SET_GPR_U32(ctx, 31, 0x164C1Cu);
    ctx->pc = 0x164C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164C14u;
    // 0x164c18: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1749B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1749B0u, 0x164C14u, 0x164C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C1Cu;
label_164c1c:
    // 0x164c1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x164C1Cu;
    {
        const bool branch_taken_0x164c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C1Cu;
        // 0x164c20: 0xa68200aa  sh          $v0, 0xAA($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 170), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c1c) {
            ctx->pc = 0x164C38u;
            goto label_164c38;
        }
    }
    ctx->pc = 0x164C24u;
    // 0x164c24: 0x0  nop
    ctx->pc = 0x164c24u;
    // NOP
label_164c28:
    // 0x164c28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c2c: 0xc05d2e8  jal         func_174BA0
    ctx->pc = 0x164C2Cu;
    SET_GPR_U32(ctx, 31, 0x164C34u);
    ctx->pc = 0x164C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164C2Cu;
    // 0x164c30: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174BA0u, 0x164C2Cu, 0x164C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C34u;
label_164c34:
    // 0x164c34: 0xa68200aa  sh          $v0, 0xAA($s4)
    ctx->pc = 0x164c34u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 170), (uint16_t)GPR_U32(ctx, 2));
label_164c38:
    // 0x164c38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x164c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164c3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x164c3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164c40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x164c40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164c44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164c48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164c4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164c50: 0x3e00008  jr          $ra
    ctx->pc = 0x164C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C50u;
        // 0x164c54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164C58u;
}
