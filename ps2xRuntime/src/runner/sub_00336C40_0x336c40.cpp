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

// Function: sub_00336C40
// Address: 0x336c40 - 0x336e08
void sub_00336C40_0x336c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336C40_0x336c40");
#endif

    switch (ctx->pc) {
        case 0x336c90u: goto label_336c90;
        case 0x336d5cu: goto label_336d5c;
        case 0x336db0u: goto label_336db0;
        default: break;
    }

    ctx->pc = 0x336c40u;

    // 0x336c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x336c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x336c44: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x336c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x336c48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x336c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x336c4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x336c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x336c50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x336c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x336c54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x336c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x336c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x336c5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x336c5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336c60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x336c64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336c68: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x336c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x336c6c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x336c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336c70: 0x94910004  lhu         $s1, 0x4($a0)
    ctx->pc = 0x336c70u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x336c74: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x336C74u;
    {
        const bool branch_taken_0x336c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x336C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C74u;
        // 0x336c78: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c74) {
            ctx->pc = 0x336D18u;
            goto label_336d18;
        }
    }
    ctx->pc = 0x336C7Cu;
    // 0x336c7c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x336c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x336c80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x336c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336c84: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x336c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x336c88: 0xc0bccf8  jal         func_2F33E0
    ctx->pc = 0x336C88u;
    SET_GPR_U32(ctx, 31, 0x336C90u);
    ctx->pc = 0x336C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336C88u;
    // 0x336c8c: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F33E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F33E0u, 0x336C88u, 0x336C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C90u;
label_336c90:
    // 0x336c90: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x336c90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x336c94: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x336c94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336c98: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x336c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x336c9c: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x336c9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x336ca0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x336ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x336ca4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x336CA4u;
    {
        const bool branch_taken_0x336ca4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x336CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336CA4u;
        // 0x336ca8: 0x30c3ffff  andi        $v1, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336ca4) {
            ctx->pc = 0x336CC0u;
            goto label_336cc0;
        }
    }
    ctx->pc = 0x336CACu;
    // 0x336cac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x336cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x336cb0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336CB0u;
    {
        const bool branch_taken_0x336cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x336cb0) {
            ctx->pc = 0x336CC0u;
            goto label_336cc0;
        }
    }
    ctx->pc = 0x336CB8u;
    // 0x336cb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x336cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336cbc: 0x0  nop
    ctx->pc = 0x336cbcu;
    // NOP
label_336cc0:
    // 0x336cc0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x336cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x336cc4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x336CC4u;
    {
        const bool branch_taken_0x336cc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x336CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336CC4u;
        // 0x336cc8: 0x30c3ffff  andi        $v1, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336cc4) {
            ctx->pc = 0x336CE0u;
            goto label_336ce0;
        }
    }
    ctx->pc = 0x336CCCu;
    // 0x336ccc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x336cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x336cd0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336CD0u;
    {
        const bool branch_taken_0x336cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x336cd0) {
            ctx->pc = 0x336CE0u;
            goto label_336ce0;
        }
    }
    ctx->pc = 0x336CD8u;
    // 0x336cd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x336cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336cdc: 0x0  nop
    ctx->pc = 0x336cdcu;
    // NOP
label_336ce0:
    // 0x336ce0: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x336ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x336ce4: 0x902415bc  lbu         $a0, 0x15BC($at)
    ctx->pc = 0x336ce4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x9215BCu));
    // 0x336ce8: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x336ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x336cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336cf0: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x336cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x336cf4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x336cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x336cf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336CF8u;
    {
        const bool branch_taken_0x336cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336cf8) {
            ctx->pc = 0x336D08u;
            goto label_336d08;
        }
    }
    ctx->pc = 0x336D00u;
    // 0x336d00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x336d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d04: 0x0  nop
    ctx->pc = 0x336d04u;
    // NOP
label_336d08:
    // 0x336d08: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336D08u;
    {
        const bool branch_taken_0x336d08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x336D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336D08u;
        // 0x336d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336d08) {
            ctx->pc = 0x336D18u;
            goto label_336d18;
        }
    }
    ctx->pc = 0x336D10u;
    // 0x336d10: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x336D10u;
    {
        const bool branch_taken_0x336d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336d10) {
            ctx->pc = 0x336DE8u;
            goto label_336de8;
        }
    }
    ctx->pc = 0x336D18u;
label_336d18:
    // 0x336d18: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x336d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x336d1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x336d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x336d20: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x336D20u;
    {
        const bool branch_taken_0x336d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336d20) {
            ctx->pc = 0x336D48u;
            goto label_336d48;
        }
    }
    ctx->pc = 0x336D28u;
    // 0x336d28: 0x92650008  lbu         $a1, 0x8($s3)
    ctx->pc = 0x336d28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x336d2c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x336d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336d30: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x336d30u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x336d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336d38: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x336d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x336d3c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336d40: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x336D40u;
    {
        const bool branch_taken_0x336d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336D40u;
        // 0x336d44: 0xa2630008  sb          $v1, 0x8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336d40) {
            ctx->pc = 0x336DE8u;
            goto label_336de8;
        }
    }
    ctx->pc = 0x336D48u;
label_336d48:
    // 0x336d48: 0x92500001  lbu         $s0, 0x1($s2)
    ctx->pc = 0x336d48u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x336d4c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x336d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x336d50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x336d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d54: 0xc0bd168  jal         func_2F45A0
    ctx->pc = 0x336D54u;
    SET_GPR_U32(ctx, 31, 0x336D5Cu);
    ctx->pc = 0x336D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336D54u;
    // 0x336d58: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45A0u, 0x336D54u, 0x336D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336D5Cu;
label_336d5c:
    // 0x336d5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x336d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x336d60: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x336d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x336d64: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x336D64u;
    {
        const bool branch_taken_0x336d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336d64) {
            ctx->pc = 0x336D90u;
            goto label_336d90;
        }
    }
    ctx->pc = 0x336D6Cu;
    // 0x336d6c: 0x92650008  lbu         $a1, 0x8($s3)
    ctx->pc = 0x336d6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x336d70: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x336d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336d74: 0x64040009  daddiu      $a0, $zero, 0x9
    ctx->pc = 0x336d74u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)9);
    // 0x336d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336d7c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x336d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x336d80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336d84: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x336D84u;
    {
        const bool branch_taken_0x336d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336D84u;
        // 0x336d88: 0xa2630008  sb          $v1, 0x8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336d84) {
            ctx->pc = 0x336DE8u;
            goto label_336de8;
        }
    }
    ctx->pc = 0x336D8Cu;
    // 0x336d8c: 0x0  nop
    ctx->pc = 0x336d8cu;
    // NOP
label_336d90:
    // 0x336d90: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x336d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x336d94: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x336d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x336d98: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x336D98u;
    {
        const bool branch_taken_0x336d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x336d98) {
            ctx->pc = 0x336DE0u;
            goto label_336de0;
        }
    }
    ctx->pc = 0x336DA0u;
    // 0x336da0: 0x96650004  lhu         $a1, 0x4($s3)
    ctx->pc = 0x336da0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x336da4: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x336da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x336da8: 0xc0f35c8  jal         func_3CD720
    ctx->pc = 0x336DA8u;
    SET_GPR_U32(ctx, 31, 0x336DB0u);
    ctx->pc = 0x336DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336DA8u;
    // 0x336dac: 0x24841400  addiu       $a0, $a0, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD720u, 0x336DA8u, 0x336DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336DB0u;
label_336db0:
    // 0x336db0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x336db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x336db4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x336db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x336db8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x336DB8u;
    {
        const bool branch_taken_0x336db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x336db8) {
            ctx->pc = 0x336DE0u;
            goto label_336de0;
        }
    }
    ctx->pc = 0x336DC0u;
    // 0x336dc0: 0x92650008  lbu         $a1, 0x8($s3)
    ctx->pc = 0x336dc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x336dc4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x336dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336dc8: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x336dc8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x336dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336dd0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x336dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x336dd4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336dd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x336DD8u;
    {
        const bool branch_taken_0x336dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336DD8u;
        // 0x336ddc: 0xa2630008  sb          $v1, 0x8($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336dd8) {
            ctx->pc = 0x336DE8u;
            goto label_336de8;
        }
    }
    ctx->pc = 0x336DE0u;
label_336de0:
    // 0x336de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336de4: 0x0  nop
    ctx->pc = 0x336de4u;
    // NOP
label_336de8:
    // 0x336de8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x336de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x336dec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x336decu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x336df0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x336df0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336df4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x336df4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336df8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336dfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336e00: 0x3e00008  jr          $ra
    ctx->pc = 0x336E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E00u;
        // 0x336e04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336E08u;
}
