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

// Function: sub_0033A070
// Address: 0x33a070 - 0x33a378
void sub_0033A070_0x33a070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A070_0x33a070");
#endif

    switch (ctx->pc) {
        case 0x33a070u: goto label_33a070;
        case 0x33a074u: goto label_33a074;
        case 0x33a078u: goto label_33a078;
        case 0x33a07cu: goto label_33a07c;
        case 0x33a080u: goto label_33a080;
        case 0x33a084u: goto label_33a084;
        case 0x33a088u: goto label_33a088;
        case 0x33a08cu: goto label_33a08c;
        case 0x33a090u: goto label_33a090;
        case 0x33a094u: goto label_33a094;
        case 0x33a098u: goto label_33a098;
        case 0x33a09cu: goto label_33a09c;
        case 0x33a0a0u: goto label_33a0a0;
        case 0x33a0a4u: goto label_33a0a4;
        case 0x33a0a8u: goto label_33a0a8;
        case 0x33a0acu: goto label_33a0ac;
        case 0x33a0b0u: goto label_33a0b0;
        case 0x33a0b4u: goto label_33a0b4;
        case 0x33a0b8u: goto label_33a0b8;
        case 0x33a0bcu: goto label_33a0bc;
        case 0x33a0c0u: goto label_33a0c0;
        case 0x33a0c4u: goto label_33a0c4;
        case 0x33a0c8u: goto label_33a0c8;
        case 0x33a0ccu: goto label_33a0cc;
        case 0x33a0d0u: goto label_33a0d0;
        case 0x33a0d4u: goto label_33a0d4;
        case 0x33a0d8u: goto label_33a0d8;
        case 0x33a0dcu: goto label_33a0dc;
        case 0x33a0e0u: goto label_33a0e0;
        case 0x33a0e4u: goto label_33a0e4;
        case 0x33a0e8u: goto label_33a0e8;
        case 0x33a0ecu: goto label_33a0ec;
        case 0x33a0f0u: goto label_33a0f0;
        case 0x33a0f4u: goto label_33a0f4;
        case 0x33a0f8u: goto label_33a0f8;
        case 0x33a0fcu: goto label_33a0fc;
        case 0x33a100u: goto label_33a100;
        case 0x33a104u: goto label_33a104;
        case 0x33a108u: goto label_33a108;
        case 0x33a10cu: goto label_33a10c;
        case 0x33a110u: goto label_33a110;
        case 0x33a114u: goto label_33a114;
        case 0x33a118u: goto label_33a118;
        case 0x33a11cu: goto label_33a11c;
        case 0x33a120u: goto label_33a120;
        case 0x33a124u: goto label_33a124;
        case 0x33a128u: goto label_33a128;
        case 0x33a12cu: goto label_33a12c;
        case 0x33a130u: goto label_33a130;
        case 0x33a134u: goto label_33a134;
        case 0x33a138u: goto label_33a138;
        case 0x33a13cu: goto label_33a13c;
        case 0x33a140u: goto label_33a140;
        case 0x33a144u: goto label_33a144;
        case 0x33a148u: goto label_33a148;
        case 0x33a14cu: goto label_33a14c;
        case 0x33a150u: goto label_33a150;
        case 0x33a154u: goto label_33a154;
        case 0x33a158u: goto label_33a158;
        case 0x33a15cu: goto label_33a15c;
        case 0x33a160u: goto label_33a160;
        case 0x33a164u: goto label_33a164;
        case 0x33a168u: goto label_33a168;
        case 0x33a16cu: goto label_33a16c;
        case 0x33a170u: goto label_33a170;
        case 0x33a174u: goto label_33a174;
        case 0x33a178u: goto label_33a178;
        case 0x33a17cu: goto label_33a17c;
        case 0x33a180u: goto label_33a180;
        case 0x33a184u: goto label_33a184;
        case 0x33a188u: goto label_33a188;
        case 0x33a18cu: goto label_33a18c;
        case 0x33a190u: goto label_33a190;
        case 0x33a194u: goto label_33a194;
        case 0x33a198u: goto label_33a198;
        case 0x33a19cu: goto label_33a19c;
        case 0x33a1a0u: goto label_33a1a0;
        case 0x33a1a4u: goto label_33a1a4;
        case 0x33a1a8u: goto label_33a1a8;
        case 0x33a1acu: goto label_33a1ac;
        case 0x33a1b0u: goto label_33a1b0;
        case 0x33a1b4u: goto label_33a1b4;
        case 0x33a1b8u: goto label_33a1b8;
        case 0x33a1bcu: goto label_33a1bc;
        case 0x33a1c0u: goto label_33a1c0;
        case 0x33a1c4u: goto label_33a1c4;
        case 0x33a1c8u: goto label_33a1c8;
        case 0x33a1ccu: goto label_33a1cc;
        case 0x33a1d0u: goto label_33a1d0;
        case 0x33a1d4u: goto label_33a1d4;
        case 0x33a1d8u: goto label_33a1d8;
        case 0x33a1dcu: goto label_33a1dc;
        case 0x33a1e0u: goto label_33a1e0;
        case 0x33a1e4u: goto label_33a1e4;
        case 0x33a1e8u: goto label_33a1e8;
        case 0x33a1ecu: goto label_33a1ec;
        case 0x33a1f0u: goto label_33a1f0;
        case 0x33a1f4u: goto label_33a1f4;
        case 0x33a1f8u: goto label_33a1f8;
        case 0x33a1fcu: goto label_33a1fc;
        case 0x33a200u: goto label_33a200;
        case 0x33a204u: goto label_33a204;
        case 0x33a208u: goto label_33a208;
        case 0x33a20cu: goto label_33a20c;
        case 0x33a210u: goto label_33a210;
        case 0x33a214u: goto label_33a214;
        case 0x33a218u: goto label_33a218;
        case 0x33a21cu: goto label_33a21c;
        case 0x33a220u: goto label_33a220;
        case 0x33a224u: goto label_33a224;
        case 0x33a228u: goto label_33a228;
        case 0x33a22cu: goto label_33a22c;
        case 0x33a230u: goto label_33a230;
        case 0x33a234u: goto label_33a234;
        case 0x33a238u: goto label_33a238;
        case 0x33a23cu: goto label_33a23c;
        case 0x33a240u: goto label_33a240;
        case 0x33a244u: goto label_33a244;
        case 0x33a248u: goto label_33a248;
        case 0x33a24cu: goto label_33a24c;
        case 0x33a250u: goto label_33a250;
        case 0x33a254u: goto label_33a254;
        case 0x33a258u: goto label_33a258;
        case 0x33a25cu: goto label_33a25c;
        case 0x33a260u: goto label_33a260;
        case 0x33a264u: goto label_33a264;
        case 0x33a268u: goto label_33a268;
        case 0x33a26cu: goto label_33a26c;
        case 0x33a270u: goto label_33a270;
        case 0x33a274u: goto label_33a274;
        case 0x33a278u: goto label_33a278;
        case 0x33a27cu: goto label_33a27c;
        case 0x33a280u: goto label_33a280;
        case 0x33a284u: goto label_33a284;
        case 0x33a288u: goto label_33a288;
        case 0x33a28cu: goto label_33a28c;
        case 0x33a290u: goto label_33a290;
        case 0x33a294u: goto label_33a294;
        case 0x33a298u: goto label_33a298;
        case 0x33a29cu: goto label_33a29c;
        case 0x33a2a0u: goto label_33a2a0;
        case 0x33a2a4u: goto label_33a2a4;
        case 0x33a2a8u: goto label_33a2a8;
        case 0x33a2acu: goto label_33a2ac;
        case 0x33a2b0u: goto label_33a2b0;
        case 0x33a2b4u: goto label_33a2b4;
        case 0x33a2b8u: goto label_33a2b8;
        case 0x33a2bcu: goto label_33a2bc;
        case 0x33a2c0u: goto label_33a2c0;
        case 0x33a2c4u: goto label_33a2c4;
        case 0x33a2c8u: goto label_33a2c8;
        case 0x33a2ccu: goto label_33a2cc;
        case 0x33a2d0u: goto label_33a2d0;
        case 0x33a2d4u: goto label_33a2d4;
        case 0x33a2d8u: goto label_33a2d8;
        case 0x33a2dcu: goto label_33a2dc;
        case 0x33a2e0u: goto label_33a2e0;
        case 0x33a2e4u: goto label_33a2e4;
        case 0x33a2e8u: goto label_33a2e8;
        case 0x33a2ecu: goto label_33a2ec;
        case 0x33a2f0u: goto label_33a2f0;
        case 0x33a2f4u: goto label_33a2f4;
        case 0x33a2f8u: goto label_33a2f8;
        case 0x33a2fcu: goto label_33a2fc;
        case 0x33a300u: goto label_33a300;
        case 0x33a304u: goto label_33a304;
        case 0x33a308u: goto label_33a308;
        case 0x33a30cu: goto label_33a30c;
        case 0x33a310u: goto label_33a310;
        case 0x33a314u: goto label_33a314;
        case 0x33a318u: goto label_33a318;
        case 0x33a31cu: goto label_33a31c;
        case 0x33a320u: goto label_33a320;
        case 0x33a324u: goto label_33a324;
        case 0x33a328u: goto label_33a328;
        case 0x33a32cu: goto label_33a32c;
        case 0x33a330u: goto label_33a330;
        case 0x33a334u: goto label_33a334;
        case 0x33a338u: goto label_33a338;
        case 0x33a33cu: goto label_33a33c;
        case 0x33a340u: goto label_33a340;
        case 0x33a344u: goto label_33a344;
        case 0x33a348u: goto label_33a348;
        case 0x33a34cu: goto label_33a34c;
        case 0x33a350u: goto label_33a350;
        case 0x33a354u: goto label_33a354;
        case 0x33a358u: goto label_33a358;
        case 0x33a35cu: goto label_33a35c;
        case 0x33a360u: goto label_33a360;
        case 0x33a364u: goto label_33a364;
        case 0x33a368u: goto label_33a368;
        case 0x33a36cu: goto label_33a36c;
        case 0x33a370u: goto label_33a370;
        case 0x33a374u: goto label_33a374;
        default: break;
    }

    ctx->pc = 0x33a070u;

label_33a070:
    // 0x33a070: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x33a070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_33a074:
    // 0x33a074: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x33a074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_33a078:
    // 0x33a078: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33a078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_33a07c:
    // 0x33a07c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33a07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_33a080:
    // 0x33a080: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x33a080u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33a084:
    // 0x33a084: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33a084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_33a088:
    // 0x33a088: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x33a088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33a08c:
    // 0x33a08c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33a090:
    // 0x33a090: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x33a090u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33a094:
    // 0x33a094: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33a098:
    // 0x33a098: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x33a098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a09c:
    // 0x33a09c: 0x0  nop
    ctx->pc = 0x33a09cu;
    // NOP
label_33a0a0:
    // 0x33a0a0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x33a0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_33a0a4:
    // 0x33a0a4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x33a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_33a0a8:
    // 0x33a0a8: 0xc07cce0  jal         func_1F3380
label_33a0ac:
    if (ctx->pc == 0x33A0ACu) {
        ctx->pc = 0x33A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0A8u;
        // 0x33a0ac: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A0B0u;
        goto label_33a0b0;
    }
    ctx->pc = 0x33A0A8u;
    SET_GPR_U32(ctx, 31, 0x33A0B0u);
    ctx->pc = 0x33A0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A0A8u;
    // 0x33a0ac: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x33A0A8u, 0x33A0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A0B0u;
label_33a0b0:
    // 0x33a0b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33a0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33a0b4:
    // 0x33a0b4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_33a0b8:
    if (ctx->pc == 0x33A0B8u) {
        ctx->pc = 0x33A0BCu;
        goto label_33a0bc;
    }
    ctx->pc = 0x33A0B4u;
    {
        const bool branch_taken_0x33a0b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a0b4) {
            ctx->pc = 0x33A0D0u;
            goto label_33a0d0;
        }
    }
    ctx->pc = 0x33A0BCu;
label_33a0bc:
    // 0x33a0bc: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x33a0bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_33a0c0:
    // 0x33a0c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_33a0c4:
    if (ctx->pc == 0x33A0C4u) {
        ctx->pc = 0x33A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0C0u;
        // 0x33a0c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A0C8u;
        goto label_33a0c8;
    }
    ctx->pc = 0x33A0C0u;
    {
        const bool branch_taken_0x33a0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0C0u;
        // 0x33a0c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a0c0) {
            ctx->pc = 0x33A0D0u;
            goto label_33a0d0;
        }
    }
    ctx->pc = 0x33A0C8u;
label_33a0c8:
    // 0x33a0c8: 0xc0ce7a8  jal         func_339EA0
label_33a0cc:
    if (ctx->pc == 0x33A0CCu) {
        ctx->pc = 0x33A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0C8u;
        // 0x33a0cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A0D0u;
        goto label_33a0d0;
    }
    ctx->pc = 0x33A0C8u;
    SET_GPR_U32(ctx, 31, 0x33A0D0u);
    ctx->pc = 0x33A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A0C8u;
    // 0x33a0cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339EA0u, 0x33A0C8u, 0x33A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A0D0u;
label_33a0d0:
    // 0x33a0d0: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x33a0d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_33a0d4:
    // 0x33a0d4: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x33a0d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_33a0d8:
    // 0x33a0d8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_33a0dc:
    if (ctx->pc == 0x33A0DCu) {
        ctx->pc = 0x33A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0D8u;
        // 0x33a0dc: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A0E0u;
        goto label_33a0e0;
    }
    ctx->pc = 0x33A0D8u;
    {
        const bool branch_taken_0x33a0d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0D8u;
        // 0x33a0dc: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a0d8) {
            ctx->pc = 0x33A0F8u;
            goto label_33a0f8;
        }
    }
    ctx->pc = 0x33A0E0u;
label_33a0e0:
    // 0x33a0e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33a0e4:
    // 0x33a0e4: 0x2484ef00  addiu       $a0, $a0, -0x1100
    ctx->pc = 0x33a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962944));
label_33a0e8:
    // 0x33a0e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_33a0ec:
    // 0x33a0ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x33a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33a0f0:
    // 0x33a0f0: 0x600008  jr          $v1
label_33a0f4:
    if (ctx->pc == 0x33A0F4u) {
        ctx->pc = 0x33A0F8u;
        goto label_33a0f8;
    }
    ctx->pc = 0x33A0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33A0F8u: goto label_33a0f8;
            case 0x33A100u: goto label_33a100;
            case 0x33A128u: goto label_33a128;
            case 0x33A1E0u: goto label_33a1e0;
            case 0x33A2C8u: goto label_33a2c8;
            case 0x33A308u: goto label_33a308;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A0F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33A0F8u;
label_33a0f8:
    // 0x33a0f8: 0x10000093  b           . + 4 + (0x93 << 2)
label_33a0fc:
    if (ctx->pc == 0x33A0FCu) {
        ctx->pc = 0x33A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0F8u;
        // 0x33a0fc: 0xae60001c  sw          $zero, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A100u;
        goto label_33a100;
    }
    ctx->pc = 0x33A0F8u;
    {
        const bool branch_taken_0x33a0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0F8u;
        // 0x33a0fc: 0xae60001c  sw          $zero, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a0f8) {
            ctx->pc = 0x33A348u;
            goto label_33a348;
        }
    }
    ctx->pc = 0x33A100u;
label_33a100:
    // 0x33a100: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x33a100u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_33a104:
    // 0x33a104: 0x96660002  lhu         $a2, 0x2($s3)
    ctx->pc = 0x33a104u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_33a108:
    // 0x33a108: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33a108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_33a10c:
    // 0x33a10c: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x33a10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
label_33a110:
    // 0x33a110: 0xc0ce400  jal         func_339000
label_33a114:
    if (ctx->pc == 0x33A114u) {
        ctx->pc = 0x33A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A110u;
        // 0x33a114: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A118u;
        goto label_33a118;
    }
    ctx->pc = 0x33A110u;
    SET_GPR_U32(ctx, 31, 0x33A118u);
    ctx->pc = 0x33A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A110u;
    // 0x33a114: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339000u, 0x33A110u, 0x33A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A118u;
label_33a118:
    // 0x33a118: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x33a118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_33a11c:
    // 0x33a11c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_33a120:
    // 0x33a120: 0x10000089  b           . + 4 + (0x89 << 2)
label_33a124:
    if (ctx->pc == 0x33A124u) {
        ctx->pc = 0x33A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A120u;
        // 0x33a124: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A128u;
        goto label_33a128;
    }
    ctx->pc = 0x33A120u;
    {
        const bool branch_taken_0x33a120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A120u;
        // 0x33a124: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a120) {
            ctx->pc = 0x33A348u;
            goto label_33a348;
        }
    }
    ctx->pc = 0x33A128u;
label_33a128:
    // 0x33a128: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33a128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33a12c:
    // 0x33a12c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33a12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33a130:
    // 0x33a130: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33a130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33a134:
    // 0x33a134: 0xc0ce7d0  jal         func_339F40
label_33a138:
    if (ctx->pc == 0x33A138u) {
        ctx->pc = 0x33A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A134u;
        // 0x33a138: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A13Cu;
        goto label_33a13c;
    }
    ctx->pc = 0x33A134u;
    SET_GPR_U32(ctx, 31, 0x33A13Cu);
    ctx->pc = 0x33A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A134u;
    // 0x33a138: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339F40u, 0x33A134u, 0x33A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A13Cu;
label_33a13c:
    // 0x33a13c: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x33a13cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_33a140:
    // 0x33a140: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33a140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_33a144:
    // 0x33a144: 0xc0ce31c  jal         func_338C70
label_33a148:
    if (ctx->pc == 0x33A148u) {
        ctx->pc = 0x33A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A144u;
        // 0x33a148: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A14Cu;
        goto label_33a14c;
    }
    ctx->pc = 0x33A144u;
    SET_GPR_U32(ctx, 31, 0x33A14Cu);
    ctx->pc = 0x33A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A144u;
    // 0x33a148: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C70u, 0x33A144u, 0x33A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A14Cu;
label_33a14c:
    // 0x33a14c: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_33a150:
    if (ctx->pc == 0x33A150u) {
        ctx->pc = 0x33A154u;
        goto label_33a154;
    }
    ctx->pc = 0x33A14Cu;
    {
        const bool branch_taken_0x33a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a14c) {
            ctx->pc = 0x33A348u;
            goto label_33a348;
        }
    }
    ctx->pc = 0x33A154u;
label_33a154:
    // 0x33a154: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x33a154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_33a158:
    // 0x33a158: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x33a158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_33a15c:
    // 0x33a15c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_33a160:
    if (ctx->pc == 0x33A160u) {
        ctx->pc = 0x33A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A15Cu;
        // 0x33a160: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A164u;
        goto label_33a164;
    }
    ctx->pc = 0x33A15Cu;
    {
        const bool branch_taken_0x33a15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A15Cu;
        // 0x33a160: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a15c) {
            ctx->pc = 0x33A170u;
            goto label_33a170;
        }
    }
    ctx->pc = 0x33A164u;
label_33a164:
    // 0x33a164: 0x1000001e  b           . + 4 + (0x1E << 2)
label_33a168:
    if (ctx->pc == 0x33A168u) {
        ctx->pc = 0x33A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A164u;
        // 0x33a168: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A16Cu;
        goto label_33a16c;
    }
    ctx->pc = 0x33A164u;
    {
        const bool branch_taken_0x33a164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A164u;
        // 0x33a168: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a164) {
            ctx->pc = 0x33A1E0u;
            goto label_33a1e0;
        }
    }
    ctx->pc = 0x33A16Cu;
label_33a16c:
    // 0x33a16c: 0x0  nop
    ctx->pc = 0x33a16cu;
    // NOP
label_33a170:
    // 0x33a170: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x33a170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_33a174:
    // 0x33a174: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_33a178:
    if (ctx->pc == 0x33A178u) {
        ctx->pc = 0x33A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A174u;
        // 0x33a178: 0x3c023000  lui         $v0, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A17Cu;
        goto label_33a17c;
    }
    ctx->pc = 0x33A174u;
    {
        const bool branch_taken_0x33a174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A174u;
        // 0x33a178: 0x3c023000  lui         $v0, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a174) {
            ctx->pc = 0x33A190u;
            goto label_33a190;
        }
    }
    ctx->pc = 0x33A17Cu;
label_33a17c:
    // 0x33a17c: 0x3c022f00  lui         $v0, 0x2F00
    ctx->pc = 0x33a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12032 << 16));
label_33a180:
    // 0x33a180: 0x34430700  ori         $v1, $v0, 0x700
    ctx->pc = 0x33a180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
label_33a184:
    // 0x33a184: 0x34420500  ori         $v0, $v0, 0x500
    ctx->pc = 0x33a184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
label_33a188:
    // 0x33a188: 0x10000004  b           . + 4 + (0x4 << 2)
label_33a18c:
    if (ctx->pc == 0x33A18Cu) {
        ctx->pc = 0x33A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A188u;
        // 0x33a18c: 0x51180a  movz        $v1, $v0, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A190u;
        goto label_33a190;
    }
    ctx->pc = 0x33A188u;
    {
        const bool branch_taken_0x33a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A188u;
        // 0x33a18c: 0x51180a  movz        $v1, $v0, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a188) {
            ctx->pc = 0x33A19Cu;
            goto label_33a19c;
        }
    }
    ctx->pc = 0x33A190u;
label_33a190:
    // 0x33a190: 0x34430700  ori         $v1, $v0, 0x700
    ctx->pc = 0x33a190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
label_33a194:
    // 0x33a194: 0x34420500  ori         $v0, $v0, 0x500
    ctx->pc = 0x33a194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
label_33a198:
    // 0x33a198: 0x51180a  movz        $v1, $v0, $s1
    ctx->pc = 0x33a198u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_33a19c:
    // 0x33a19c: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x33a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
label_33a1a0:
    // 0x33a1a0: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x33a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
label_33a1a4:
    // 0x33a1a4: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x33a1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_33a1a8:
    // 0x33a1a8: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x33a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
label_33a1ac:
    // 0x33a1ac: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x33a1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_33a1b0:
    // 0x33a1b0: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x33a1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_33a1b4:
    // 0x33a1b4: 0xc0c99d0  jal         func_326740
label_33a1b8:
    if (ctx->pc == 0x33A1B8u) {
        ctx->pc = 0x33A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1B4u;
        // 0x33a1b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A1BCu;
        goto label_33a1bc;
    }
    ctx->pc = 0x33A1B4u;
    SET_GPR_U32(ctx, 31, 0x33A1BCu);
    ctx->pc = 0x33A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A1B4u;
    // 0x33a1b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x33A1B4u, 0x33A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A1BCu;
label_33a1bc:
    // 0x33a1bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_33a1c0:
    if (ctx->pc == 0x33A1C0u) {
        ctx->pc = 0x33A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1BCu;
        // 0x33a1c0: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A1C4u;
        goto label_33a1c4;
    }
    ctx->pc = 0x33A1BCu;
    {
        const bool branch_taken_0x33a1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1BCu;
        // 0x33a1c0: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a1bc) {
            ctx->pc = 0x33A1E0u;
            goto label_33a1e0;
        }
    }
    ctx->pc = 0x33A1C4u;
label_33a1c4:
    // 0x33a1c4: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x33a1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
label_33a1c8:
    // 0x33a1c8: 0x24639c80  addiu       $v1, $v1, -0x6380
    ctx->pc = 0x33a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941824));
label_33a1cc:
    // 0x33a1cc: 0xac23f84c  sw          $v1, -0x7B4($at)
    ctx->pc = 0x33a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965324), GPR_U32(ctx, 3));
label_33a1d0:
    // 0x33a1d0: 0xac51001c  sw          $s1, 0x1C($v0)
    ctx->pc = 0x33a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
label_33a1d4:
    // 0x33a1d4: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x33a1d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_33a1d8:
    // 0x33a1d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33a1dc:
    // 0x33a1dc: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x33a1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_33a1e0:
    // 0x33a1e0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x33a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_33a1e4:
    // 0x33a1e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33a1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33a1e8:
    // 0x33a1e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33a1ec:
    // 0x33a1ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33a1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33a1f0:
    // 0x33a1f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33a1f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a1f4:
    // 0x33a1f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33a1f8:
    // 0x33a1f8: 0xc0ce7d0  jal         func_339F40
label_33a1fc:
    if (ctx->pc == 0x33A1FCu) {
        ctx->pc = 0x33A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1F8u;
        // 0x33a1fc: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A200u;
        goto label_33a200;
    }
    ctx->pc = 0x33A1F8u;
    SET_GPR_U32(ctx, 31, 0x33A200u);
    ctx->pc = 0x33A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A1F8u;
    // 0x33a1fc: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339F40u, 0x33A1F8u, 0x33A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A200u;
label_33a200:
    // 0x33a200: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x33a200u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_33a204:
    // 0x33a204: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33a208:
    // 0x33a208: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
label_33a20c:
    if (ctx->pc == 0x33A20Cu) {
        ctx->pc = 0x33A210u;
        goto label_33a210;
    }
    ctx->pc = 0x33A208u;
    {
        const bool branch_taken_0x33a208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a208) {
            ctx->pc = 0x33A348u;
            goto label_33a348;
        }
    }
    ctx->pc = 0x33A210u;
label_33a210:
    // 0x33a210: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33a210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33a214:
    // 0x33a214: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_33a218:
    if (ctx->pc == 0x33A218u) {
        ctx->pc = 0x33A21Cu;
        goto label_33a21c;
    }
    ctx->pc = 0x33A214u;
    {
        const bool branch_taken_0x33a214 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x33a214) {
            ctx->pc = 0x33A240u;
            goto label_33a240;
        }
    }
    ctx->pc = 0x33A21Cu;
label_33a21c:
    // 0x33a21c: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x33a21cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_33a220:
    // 0x33a220: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33a220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_33a224:
    // 0x33a224: 0xc0ce3f8  jal         func_338FE0
label_33a228:
    if (ctx->pc == 0x33A228u) {
        ctx->pc = 0x33A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A224u;
        // 0x33a228: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A22Cu;
        goto label_33a22c;
    }
    ctx->pc = 0x33A224u;
    SET_GPR_U32(ctx, 31, 0x33A22Cu);
    ctx->pc = 0x33A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A224u;
    // 0x33a228: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338FE0u, 0x33A224u, 0x33A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A22Cu;
label_33a22c:
    // 0x33a22c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x33a22cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_33a230:
    // 0x33a230: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33a230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_33a234:
    // 0x33a234: 0x10000044  b           . + 4 + (0x44 << 2)
label_33a238:
    if (ctx->pc == 0x33A238u) {
        ctx->pc = 0x33A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A234u;
        // 0x33a238: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A23Cu;
        goto label_33a23c;
    }
    ctx->pc = 0x33A234u;
    {
        const bool branch_taken_0x33a234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A234u;
        // 0x33a238: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a234) {
            ctx->pc = 0x33A348u;
            goto label_33a348;
        }
    }
    ctx->pc = 0x33A23Cu;
label_33a23c:
    // 0x33a23c: 0x0  nop
    ctx->pc = 0x33a23cu;
    // NOP
label_33a240:
    // 0x33a240: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x33a240u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_33a244:
    // 0x33a244: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33a244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_33a248:
    // 0x33a248: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x33a248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_33a24c:
    // 0x33a24c: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x33a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
label_33a250:
    // 0x33a250: 0xc0ce378  jal         func_338DE0
label_33a254:
    if (ctx->pc == 0x33A254u) {
        ctx->pc = 0x33A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A250u;
        // 0x33a254: 0x27a70068  addiu       $a3, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A258u;
        goto label_33a258;
    }
    ctx->pc = 0x33A250u;
    SET_GPR_U32(ctx, 31, 0x33A258u);
    ctx->pc = 0x33A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A250u;
    // 0x33a254: 0x27a70068  addiu       $a3, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338DE0u, 0x33A250u, 0x33A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A258u;
label_33a258:
    // 0x33a258: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x33a258u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_33a25c:
    // 0x33a25c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_33a260:
    // 0x33a260: 0xc0ce2fc  jal         func_338BF0
label_33a264:
    if (ctx->pc == 0x33A264u) {
        ctx->pc = 0x33A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A260u;
        // 0x33a264: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A268u;
        goto label_33a268;
    }
    ctx->pc = 0x33A260u;
    SET_GPR_U32(ctx, 31, 0x33A268u);
    ctx->pc = 0x33A264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A260u;
    // 0x33a264: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338BF0u, 0x33A260u, 0x33A268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A268u;
label_33a268:
    // 0x33a268: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_33a26c:
    if (ctx->pc == 0x33A26Cu) {
        ctx->pc = 0x33A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A268u;
        // 0x33a26c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A270u;
        goto label_33a270;
    }
    ctx->pc = 0x33A268u;
    {
        const bool branch_taken_0x33a268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A268u;
        // 0x33a26c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a268) {
            ctx->pc = 0x33A288u;
            goto label_33a288;
        }
    }
    ctx->pc = 0x33A270u;
label_33a270:
    // 0x33a270: 0xc0ce7a8  jal         func_339EA0
label_33a274:
    if (ctx->pc == 0x33A274u) {
        ctx->pc = 0x33A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A270u;
        // 0x33a274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A278u;
        goto label_33a278;
    }
    ctx->pc = 0x33A270u;
    SET_GPR_U32(ctx, 31, 0x33A278u);
    ctx->pc = 0x33A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A270u;
    // 0x33a274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339EA0u, 0x33A270u, 0x33A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A278u;
label_33a278:
    // 0x33a278: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x33a278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_33a27c:
    // 0x33a27c: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x33a27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
label_33a280:
    // 0x33a280: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x33a280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_33a284:
    // 0x33a284: 0x0  nop
    ctx->pc = 0x33a284u;
    // NOP
label_33a288:
    // 0x33a288: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x33a288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_33a28c:
    // 0x33a28c: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x33a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_33a290:
    // 0x33a290: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x33a290u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_33a294:
    // 0x33a294: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_33a298:
    if (ctx->pc == 0x33A298u) {
        ctx->pc = 0x33A29Cu;
        goto label_33a29c;
    }
    ctx->pc = 0x33A294u;
    {
        const bool branch_taken_0x33a294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a294) {
            ctx->pc = 0x33A348u;
            goto label_33a348;
        }
    }
    ctx->pc = 0x33A29Cu;
label_33a29c:
    // 0x33a29c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x33a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_33a2a0:
    // 0x33a2a0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_33a2a4:
    if (ctx->pc == 0x33A2A4u) {
        ctx->pc = 0x33A2A8u;
        goto label_33a2a8;
    }
    ctx->pc = 0x33A2A0u;
    {
        const bool branch_taken_0x33a2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a2a0) {
            ctx->pc = 0x33A2B8u;
            goto label_33a2b8;
        }
    }
    ctx->pc = 0x33A2A8u;
label_33a2a8:
    // 0x33a2a8: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x33a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_33a2ac:
    // 0x33a2ac: 0x60f809  jalr        $v1
label_33a2b0:
    if (ctx->pc == 0x33A2B0u) {
        ctx->pc = 0x33A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2ACu;
        // 0x33a2b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A2B4u;
        goto label_33a2b4;
    }
    ctx->pc = 0x33A2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33A2B4u);
        ctx->pc = 0x33A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2ACu;
        // 0x33a2b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A2ACu, 0x33A2B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A2B4u;
label_33a2b4:
    // 0x33a2b4: 0x0  nop
    ctx->pc = 0x33a2b4u;
    // NOP
label_33a2b8:
    // 0x33a2b8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x33a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_33a2bc:
    // 0x33a2bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x33a2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_33a2c0:
    // 0x33a2c0: 0x10000021  b           . + 4 + (0x21 << 2)
label_33a2c4:
    if (ctx->pc == 0x33A2C4u) {
        ctx->pc = 0x33A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2C0u;
        // 0x33a2c4: 0xae630018  sw          $v1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A2C8u;
        goto label_33a2c8;
    }
    ctx->pc = 0x33A2C0u;
    {
        const bool branch_taken_0x33a2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2C0u;
        // 0x33a2c4: 0xae630018  sw          $v1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a2c0) {
            ctx->pc = 0x33A348u;
            goto label_33a348;
        }
    }
    ctx->pc = 0x33A2C8u;
label_33a2c8:
    // 0x33a2c8: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x33a2c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_33a2cc:
    // 0x33a2cc: 0x96660002  lhu         $a2, 0x2($s3)
    ctx->pc = 0x33a2ccu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_33a2d0:
    // 0x33a2d0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_33a2d4:
    // 0x33a2d4: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x33a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
label_33a2d8:
    // 0x33a2d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33a2d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a2dc:
    // 0x33a2dc: 0xc0ce388  jal         func_338E20
label_33a2e0:
    if (ctx->pc == 0x33A2E0u) {
        ctx->pc = 0x33A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2DCu;
        // 0x33a2e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A2E4u;
        goto label_33a2e4;
    }
    ctx->pc = 0x33A2DCu;
    SET_GPR_U32(ctx, 31, 0x33A2E4u);
    ctx->pc = 0x33A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A2DCu;
    // 0x33a2e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338E20u, 0x33A2DCu, 0x33A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2E4u;
label_33a2e4:
    // 0x33a2e4: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x33a2e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_33a2e8:
    // 0x33a2e8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_33a2ec:
    // 0x33a2ec: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x33a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
label_33a2f0:
    // 0x33a2f0: 0xc0ce3ec  jal         func_338FB0
label_33a2f4:
    if (ctx->pc == 0x33A2F4u) {
        ctx->pc = 0x33A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A2F0u;
        // 0x33a2f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A2F8u;
        goto label_33a2f8;
    }
    ctx->pc = 0x33A2F0u;
    SET_GPR_U32(ctx, 31, 0x33A2F8u);
    ctx->pc = 0x33A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A2F0u;
    // 0x33a2f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338FB0u, 0x33A2F0u, 0x33A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A2F8u;
label_33a2f8:
    // 0x33a2f8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x33a2f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_33a2fc:
    // 0x33a2fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33a300:
    // 0x33a300: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x33a300u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_33a304:
    // 0x33a304: 0x0  nop
    ctx->pc = 0x33a304u;
    // NOP
label_33a308:
    // 0x33a308: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x33a308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_33a30c:
    // 0x33a30c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x33a30cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33a310:
    // 0x33a310: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_33a314:
    if (ctx->pc == 0x33A314u) {
        ctx->pc = 0x33A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A310u;
        // 0x33a314: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A318u;
        goto label_33a318;
    }
    ctx->pc = 0x33A310u;
    {
        const bool branch_taken_0x33a310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A310u;
        // 0x33a314: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a310) {
            ctx->pc = 0x33A330u;
            goto label_33a330;
        }
    }
    ctx->pc = 0x33A318u;
label_33a318:
    // 0x33a318: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33a318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33a31c:
    // 0x33a31c: 0xc0cea98  jal         func_33AA60
label_33a320:
    if (ctx->pc == 0x33A320u) {
        ctx->pc = 0x33A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A31Cu;
        // 0x33a320: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A324u;
        goto label_33a324;
    }
    ctx->pc = 0x33A31Cu;
    SET_GPR_U32(ctx, 31, 0x33A324u);
    ctx->pc = 0x33A320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A31Cu;
    // 0x33a320: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AA60u, 0x33A31Cu, 0x33A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A324u;
label_33a324:
    // 0x33a324: 0x10000008  b           . + 4 + (0x8 << 2)
label_33a328:
    if (ctx->pc == 0x33A328u) {
        ctx->pc = 0x33A32Cu;
        goto label_33a32c;
    }
    ctx->pc = 0x33A324u;
    {
        const bool branch_taken_0x33a324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a324) {
            ctx->pc = 0x33A348u;
            goto label_33a348;
        }
    }
    ctx->pc = 0x33A32Cu;
label_33a32c:
    // 0x33a32c: 0x0  nop
    ctx->pc = 0x33a32cu;
    // NOP
label_33a330:
    // 0x33a330: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33a330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33a334:
    // 0x33a334: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33a334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_33a338:
    // 0x33a338: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33a338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33a33c:
    // 0x33a33c: 0xc0ce7d0  jal         func_339F40
label_33a340:
    if (ctx->pc == 0x33A340u) {
        ctx->pc = 0x33A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A33Cu;
        // 0x33a340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A344u;
        goto label_33a344;
    }
    ctx->pc = 0x33A33Cu;
    SET_GPR_U32(ctx, 31, 0x33A344u);
    ctx->pc = 0x33A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A33Cu;
    // 0x33a340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339F40u, 0x33A33Cu, 0x33A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A344u;
label_33a344:
    // 0x33a344: 0x0  nop
    ctx->pc = 0x33a344u;
    // NOP
label_33a348:
    // 0x33a348: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x33a348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_33a34c:
    // 0x33a34c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x33a34cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_33a350:
    // 0x33a350: 0x1640ff53  bnez        $s2, . + 4 + (-0xAD << 2)
label_33a354:
    if (ctx->pc == 0x33A354u) {
        ctx->pc = 0x33A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A350u;
        // 0x33a354: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A358u;
        goto label_33a358;
    }
    ctx->pc = 0x33A350u;
    {
        const bool branch_taken_0x33a350 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A350u;
        // 0x33a354: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a350) {
            ctx->pc = 0x33A0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a0a0;
        }
    }
    ctx->pc = 0x33A358u;
label_33a358:
    // 0x33a358: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x33a358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_33a35c:
    // 0x33a35c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33a35cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33a360:
    // 0x33a360: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33a360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33a364:
    // 0x33a364: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33a364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33a368:
    // 0x33a368: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33a36c:
    // 0x33a36c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33a36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33a370:
    // 0x33a370: 0x3e00008  jr          $ra
label_33a374:
    if (ctx->pc == 0x33A374u) {
        ctx->pc = 0x33A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A370u;
        // 0x33a374: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A378u;
        goto label_fallthrough_0x33a370;
    }
    ctx->pc = 0x33A370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A370u;
        // 0x33a374: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33a370:
    ctx->pc = 0x33A378u;
}
