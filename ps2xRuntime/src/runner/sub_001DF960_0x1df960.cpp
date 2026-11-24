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

// Function: sub_001DF960
// Address: 0x1df960 - 0x1dfbc4
void sub_001DF960_0x1df960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF960_0x1df960");
#endif

    switch (ctx->pc) {
        case 0x1df960u: goto label_1df960;
        case 0x1df964u: goto label_1df964;
        case 0x1df968u: goto label_1df968;
        case 0x1df96cu: goto label_1df96c;
        case 0x1df970u: goto label_1df970;
        case 0x1df974u: goto label_1df974;
        case 0x1df978u: goto label_1df978;
        case 0x1df97cu: goto label_1df97c;
        case 0x1df980u: goto label_1df980;
        case 0x1df984u: goto label_1df984;
        case 0x1df988u: goto label_1df988;
        case 0x1df98cu: goto label_1df98c;
        case 0x1df990u: goto label_1df990;
        case 0x1df994u: goto label_1df994;
        case 0x1df998u: goto label_1df998;
        case 0x1df99cu: goto label_1df99c;
        case 0x1df9a0u: goto label_1df9a0;
        case 0x1df9a4u: goto label_1df9a4;
        case 0x1df9a8u: goto label_1df9a8;
        case 0x1df9acu: goto label_1df9ac;
        case 0x1df9b0u: goto label_1df9b0;
        case 0x1df9b4u: goto label_1df9b4;
        case 0x1df9b8u: goto label_1df9b8;
        case 0x1df9bcu: goto label_1df9bc;
        case 0x1df9c0u: goto label_1df9c0;
        case 0x1df9c4u: goto label_1df9c4;
        case 0x1df9c8u: goto label_1df9c8;
        case 0x1df9ccu: goto label_1df9cc;
        case 0x1df9d0u: goto label_1df9d0;
        case 0x1df9d4u: goto label_1df9d4;
        case 0x1df9d8u: goto label_1df9d8;
        case 0x1df9dcu: goto label_1df9dc;
        case 0x1df9e0u: goto label_1df9e0;
        case 0x1df9e4u: goto label_1df9e4;
        case 0x1df9e8u: goto label_1df9e8;
        case 0x1df9ecu: goto label_1df9ec;
        case 0x1df9f0u: goto label_1df9f0;
        case 0x1df9f4u: goto label_1df9f4;
        case 0x1df9f8u: goto label_1df9f8;
        case 0x1df9fcu: goto label_1df9fc;
        case 0x1dfa00u: goto label_1dfa00;
        case 0x1dfa04u: goto label_1dfa04;
        case 0x1dfa08u: goto label_1dfa08;
        case 0x1dfa0cu: goto label_1dfa0c;
        case 0x1dfa10u: goto label_1dfa10;
        case 0x1dfa14u: goto label_1dfa14;
        case 0x1dfa18u: goto label_1dfa18;
        case 0x1dfa1cu: goto label_1dfa1c;
        case 0x1dfa20u: goto label_1dfa20;
        case 0x1dfa24u: goto label_1dfa24;
        case 0x1dfa28u: goto label_1dfa28;
        case 0x1dfa2cu: goto label_1dfa2c;
        case 0x1dfa30u: goto label_1dfa30;
        case 0x1dfa34u: goto label_1dfa34;
        case 0x1dfa38u: goto label_1dfa38;
        case 0x1dfa3cu: goto label_1dfa3c;
        case 0x1dfa40u: goto label_1dfa40;
        case 0x1dfa44u: goto label_1dfa44;
        case 0x1dfa48u: goto label_1dfa48;
        case 0x1dfa4cu: goto label_1dfa4c;
        case 0x1dfa50u: goto label_1dfa50;
        case 0x1dfa54u: goto label_1dfa54;
        case 0x1dfa58u: goto label_1dfa58;
        case 0x1dfa5cu: goto label_1dfa5c;
        case 0x1dfa60u: goto label_1dfa60;
        case 0x1dfa64u: goto label_1dfa64;
        case 0x1dfa68u: goto label_1dfa68;
        case 0x1dfa6cu: goto label_1dfa6c;
        case 0x1dfa70u: goto label_1dfa70;
        case 0x1dfa74u: goto label_1dfa74;
        case 0x1dfa78u: goto label_1dfa78;
        case 0x1dfa7cu: goto label_1dfa7c;
        case 0x1dfa80u: goto label_1dfa80;
        case 0x1dfa84u: goto label_1dfa84;
        case 0x1dfa88u: goto label_1dfa88;
        case 0x1dfa8cu: goto label_1dfa8c;
        case 0x1dfa90u: goto label_1dfa90;
        case 0x1dfa94u: goto label_1dfa94;
        case 0x1dfa98u: goto label_1dfa98;
        case 0x1dfa9cu: goto label_1dfa9c;
        case 0x1dfaa0u: goto label_1dfaa0;
        case 0x1dfaa4u: goto label_1dfaa4;
        case 0x1dfaa8u: goto label_1dfaa8;
        case 0x1dfaacu: goto label_1dfaac;
        case 0x1dfab0u: goto label_1dfab0;
        case 0x1dfab4u: goto label_1dfab4;
        case 0x1dfab8u: goto label_1dfab8;
        case 0x1dfabcu: goto label_1dfabc;
        case 0x1dfac0u: goto label_1dfac0;
        case 0x1dfac4u: goto label_1dfac4;
        case 0x1dfac8u: goto label_1dfac8;
        case 0x1dfaccu: goto label_1dfacc;
        case 0x1dfad0u: goto label_1dfad0;
        case 0x1dfad4u: goto label_1dfad4;
        case 0x1dfad8u: goto label_1dfad8;
        case 0x1dfadcu: goto label_1dfadc;
        case 0x1dfae0u: goto label_1dfae0;
        case 0x1dfae4u: goto label_1dfae4;
        case 0x1dfae8u: goto label_1dfae8;
        case 0x1dfaecu: goto label_1dfaec;
        case 0x1dfaf0u: goto label_1dfaf0;
        case 0x1dfaf4u: goto label_1dfaf4;
        case 0x1dfaf8u: goto label_1dfaf8;
        case 0x1dfafcu: goto label_1dfafc;
        case 0x1dfb00u: goto label_1dfb00;
        case 0x1dfb04u: goto label_1dfb04;
        case 0x1dfb08u: goto label_1dfb08;
        case 0x1dfb0cu: goto label_1dfb0c;
        case 0x1dfb10u: goto label_1dfb10;
        case 0x1dfb14u: goto label_1dfb14;
        case 0x1dfb18u: goto label_1dfb18;
        case 0x1dfb1cu: goto label_1dfb1c;
        case 0x1dfb20u: goto label_1dfb20;
        case 0x1dfb24u: goto label_1dfb24;
        case 0x1dfb28u: goto label_1dfb28;
        case 0x1dfb2cu: goto label_1dfb2c;
        case 0x1dfb30u: goto label_1dfb30;
        case 0x1dfb34u: goto label_1dfb34;
        case 0x1dfb38u: goto label_1dfb38;
        case 0x1dfb3cu: goto label_1dfb3c;
        case 0x1dfb40u: goto label_1dfb40;
        case 0x1dfb44u: goto label_1dfb44;
        case 0x1dfb48u: goto label_1dfb48;
        case 0x1dfb4cu: goto label_1dfb4c;
        case 0x1dfb50u: goto label_1dfb50;
        case 0x1dfb54u: goto label_1dfb54;
        case 0x1dfb58u: goto label_1dfb58;
        case 0x1dfb5cu: goto label_1dfb5c;
        case 0x1dfb60u: goto label_1dfb60;
        case 0x1dfb64u: goto label_1dfb64;
        case 0x1dfb68u: goto label_1dfb68;
        case 0x1dfb6cu: goto label_1dfb6c;
        case 0x1dfb70u: goto label_1dfb70;
        case 0x1dfb74u: goto label_1dfb74;
        case 0x1dfb78u: goto label_1dfb78;
        case 0x1dfb7cu: goto label_1dfb7c;
        case 0x1dfb80u: goto label_1dfb80;
        case 0x1dfb84u: goto label_1dfb84;
        case 0x1dfb88u: goto label_1dfb88;
        case 0x1dfb8cu: goto label_1dfb8c;
        case 0x1dfb90u: goto label_1dfb90;
        case 0x1dfb94u: goto label_1dfb94;
        case 0x1dfb98u: goto label_1dfb98;
        case 0x1dfb9cu: goto label_1dfb9c;
        case 0x1dfba0u: goto label_1dfba0;
        case 0x1dfba4u: goto label_1dfba4;
        case 0x1dfba8u: goto label_1dfba8;
        case 0x1dfbacu: goto label_1dfbac;
        case 0x1dfbb0u: goto label_1dfbb0;
        case 0x1dfbb4u: goto label_1dfbb4;
        case 0x1dfbb8u: goto label_1dfbb8;
        case 0x1dfbbcu: goto label_1dfbbc;
        case 0x1dfbc0u: goto label_1dfbc0;
        default: break;
    }

    ctx->pc = 0x1df960u;

label_1df960:
    // 0x1df960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1df964:
    // 0x1df964: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1df964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1df968:
    // 0x1df968: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1df96c:
    // 0x1df96c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1df970:
    // 0x1df970: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1df970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1df974:
    // 0x1df974: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1df978:
    if (ctx->pc == 0x1DF978u) {
        ctx->pc = 0x1DF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF974u;
        // 0x1df978: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF97Cu;
        goto label_1df97c;
    }
    ctx->pc = 0x1DF974u;
    {
        const bool branch_taken_0x1df974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF974u;
        // 0x1df978: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df974) {
            ctx->pc = 0x1DF988u;
            goto label_1df988;
        }
    }
    ctx->pc = 0x1DF97Cu;
label_1df97c:
    // 0x1df97c: 0x1000008c  b           . + 4 + (0x8C << 2)
label_1df980:
    if (ctx->pc == 0x1DF980u) {
        ctx->pc = 0x1DF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF97Cu;
        // 0x1df980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF984u;
        goto label_1df984;
    }
    ctx->pc = 0x1DF97Cu;
    {
        const bool branch_taken_0x1df97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF97Cu;
        // 0x1df980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df97c) {
            ctx->pc = 0x1DFBB0u;
            goto label_1dfbb0;
        }
    }
    ctx->pc = 0x1DF984u;
label_1df984:
    // 0x1df984: 0x0  nop
    ctx->pc = 0x1df984u;
    // NOP
label_1df988:
    // 0x1df988: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1df988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1df98c:
    // 0x1df98c: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1df98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1df990:
    // 0x1df990: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1df990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1df994:
    // 0x1df994: 0x320f809  jalr        $t9
label_1df998:
    if (ctx->pc == 0x1DF998u) {
        ctx->pc = 0x1DF99Cu;
        goto label_1df99c;
    }
    ctx->pc = 0x1DF994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF99Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF994u, 0x1DF99Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DF99Cu;
label_1df99c:
    // 0x1df99c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1df9a0:
    if (ctx->pc == 0x1DF9A0u) {
        ctx->pc = 0x1DF9A4u;
        goto label_1df9a4;
    }
    ctx->pc = 0x1DF99Cu;
    {
        const bool branch_taken_0x1df99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df99c) {
            ctx->pc = 0x1DF9C0u;
            goto label_1df9c0;
        }
    }
    ctx->pc = 0x1DF9A4u;
label_1df9a4:
    // 0x1df9a4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1df9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1df9a8:
    // 0x1df9a8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1df9a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1df9ac:
    // 0x1df9ac: 0x320f809  jalr        $t9
label_1df9b0:
    if (ctx->pc == 0x1DF9B0u) {
        ctx->pc = 0x1DF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9ACu;
        // 0x1df9b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF9B4u;
        goto label_1df9b4;
    }
    ctx->pc = 0x1DF9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF9B4u);
        ctx->pc = 0x1DF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9ACu;
        // 0x1df9b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF9ACu, 0x1DF9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DF9B4u;
label_1df9b4:
    // 0x1df9b4: 0x1000007e  b           . + 4 + (0x7E << 2)
label_1df9b8:
    if (ctx->pc == 0x1DF9B8u) {
        ctx->pc = 0x1DF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9B4u;
        // 0x1df9b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF9BCu;
        goto label_1df9bc;
    }
    ctx->pc = 0x1DF9B4u;
    {
        const bool branch_taken_0x1df9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9B4u;
        // 0x1df9b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9b4) {
            ctx->pc = 0x1DFBB0u;
            goto label_1dfbb0;
        }
    }
    ctx->pc = 0x1DF9BCu;
label_1df9bc:
    // 0x1df9bc: 0x0  nop
    ctx->pc = 0x1df9bcu;
    // NOP
label_1df9c0:
    // 0x1df9c0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1df9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1df9c4:
    // 0x1df9c4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1df9c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1df9c8:
    // 0x1df9c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1df9cc:
    if (ctx->pc == 0x1DF9CCu) {
        ctx->pc = 0x1DF9D0u;
        goto label_1df9d0;
    }
    ctx->pc = 0x1DF9C8u;
    {
        const bool branch_taken_0x1df9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df9c8) {
            ctx->pc = 0x1DF9D8u;
            goto label_1df9d8;
        }
    }
    ctx->pc = 0x1DF9D0u;
label_1df9d0:
    // 0x1df9d0: 0x10000077  b           . + 4 + (0x77 << 2)
label_1df9d4:
    if (ctx->pc == 0x1DF9D4u) {
        ctx->pc = 0x1DF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9D0u;
        // 0x1df9d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF9D8u;
        goto label_1df9d8;
    }
    ctx->pc = 0x1DF9D0u;
    {
        const bool branch_taken_0x1df9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9D0u;
        // 0x1df9d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9d0) {
            ctx->pc = 0x1DFBB0u;
            goto label_1dfbb0;
        }
    }
    ctx->pc = 0x1DF9D8u;
label_1df9d8:
    // 0x1df9d8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1df9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1df9dc:
    // 0x1df9dc: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x1df9dcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1df9e0:
    // 0x1df9e0: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1df9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1df9e4:
    // 0x1df9e4: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1df9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1df9e8:
    // 0x1df9e8: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1df9e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1df9ec:
    // 0x1df9ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1df9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1df9f0:
    // 0x1df9f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1df9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1df9f4:
    // 0x1df9f4: 0x84a70008  lh          $a3, 0x8($a1)
    ctx->pc = 0x1df9f4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_1df9f8:
    // 0x1df9f8: 0x84a3000a  lh          $v1, 0xA($a1)
    ctx->pc = 0x1df9f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_1df9fc:
    // 0x1df9fc: 0x107302a  slt         $a2, $t0, $a3
    ctx->pc = 0x1df9fcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1dfa00:
    // 0x1dfa00: 0x68282a  slt         $a1, $v1, $t0
    ctx->pc = 0x1dfa00u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1dfa04:
    // 0x1dfa04: 0x38637ffd  xori        $v1, $v1, 0x7FFD
    ctx->pc = 0x1dfa04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32765);
label_1dfa08:
    // 0x1dfa08: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1dfa08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1dfa0c:
    // 0x1dfa0c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1dfa0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1dfa10:
    // 0x1dfa10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dfa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1dfa14:
    // 0x1dfa14: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1dfa14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1dfa18:
    // 0x1dfa18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1dfa18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1dfa1c:
    // 0x1dfa1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1dfa20:
    if (ctx->pc == 0x1DFA20u) {
        ctx->pc = 0x1DFA24u;
        goto label_1dfa24;
    }
    ctx->pc = 0x1DFA1Cu;
    {
        const bool branch_taken_0x1dfa1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa1c) {
            ctx->pc = 0x1DFA30u;
            goto label_1dfa30;
        }
    }
    ctx->pc = 0x1DFA24u;
label_1dfa24:
    // 0x1dfa24: 0x10000062  b           . + 4 + (0x62 << 2)
label_1dfa28:
    if (ctx->pc == 0x1DFA28u) {
        ctx->pc = 0x1DFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA24u;
        // 0x1dfa28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA2Cu;
        goto label_1dfa2c;
    }
    ctx->pc = 0x1DFA24u;
    {
        const bool branch_taken_0x1dfa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA24u;
        // 0x1dfa28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa24) {
            ctx->pc = 0x1DFBB0u;
            goto label_1dfbb0;
        }
    }
    ctx->pc = 0x1DFA2Cu;
label_1dfa2c:
    // 0x1dfa2c: 0x0  nop
    ctx->pc = 0x1dfa2cu;
    // NOP
label_1dfa30:
    // 0x1dfa30: 0xe81026  xor         $v0, $a3, $t0
    ctx->pc = 0x1dfa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
label_1dfa34:
    // 0x1dfa34: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1dfa34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1dfa38:
    // 0x1dfa38: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1dfa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1dfa3c:
    // 0x1dfa3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1dfa40:
    if (ctx->pc == 0x1DFA40u) {
        ctx->pc = 0x1DFA44u;
        goto label_1dfa44;
    }
    ctx->pc = 0x1DFA3Cu;
    {
        const bool branch_taken_0x1dfa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa3c) {
            ctx->pc = 0x1DFA68u;
            goto label_1dfa68;
        }
    }
    ctx->pc = 0x1DFA44u;
label_1dfa44:
    // 0x1dfa44: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1dfa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1dfa48:
    // 0x1dfa48: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dfa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1dfa4c:
    // 0x1dfa4c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1dfa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dfa50:
    // 0x1dfa50: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1dfa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dfa54:
    // 0x1dfa54: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1dfa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dfa58:
    // 0x1dfa58: 0xe6230030  swc1        $f3, 0x30($s1)
    ctx->pc = 0x1dfa58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_1dfa5c:
    // 0x1dfa5c: 0xe6220034  swc1        $f2, 0x34($s1)
    ctx->pc = 0x1dfa5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_1dfa60:
    // 0x1dfa60: 0xe6210038  swc1        $f1, 0x38($s1)
    ctx->pc = 0x1dfa60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_1dfa64:
    // 0x1dfa64: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x1dfa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_1dfa68:
    // 0x1dfa68: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1dfa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1dfa6c:
    // 0x1dfa6c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1dfa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dfa70:
    // 0x1dfa70: 0x84500000  lh          $s0, 0x0($v0)
    ctx->pc = 0x1dfa70u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfa74:
    // 0x1dfa74: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x1dfa74u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfa78:
    // 0x1dfa78: 0xd0082a  slt         $at, $a2, $s0
    ctx->pc = 0x1dfa78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1dfa7c:
    // 0x1dfa7c: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
label_1dfa80:
    if (ctx->pc == 0x1DFA80u) {
        ctx->pc = 0x1DFA84u;
        goto label_1dfa84;
    }
    ctx->pc = 0x1DFA7Cu;
    {
        const bool branch_taken_0x1dfa7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa7c) {
            ctx->pc = 0x1DFAF0u;
            goto label_1dfaf0;
        }
    }
    ctx->pc = 0x1DFA84u;
label_1dfa84:
    // 0x1dfa84: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1dfa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dfa88:
    // 0x1dfa88: 0x84450008  lh          $a1, 0x8($v0)
    ctx->pc = 0x1dfa88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1dfa8c:
    // 0x1dfa8c: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
label_1dfa90:
    if (ctx->pc == 0x1DFA90u) {
        ctx->pc = 0x1DFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA8Cu;
        // 0x1dfa90: 0x10243c  dsll32      $a0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFA94u;
        goto label_1dfa94;
    }
    ctx->pc = 0x1DFA8Cu;
    {
        const bool branch_taken_0x1dfa8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1DFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA8Cu;
        // 0x1dfa90: 0x10243c  dsll32      $a0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa8c) {
            ctx->pc = 0x1DFAA4u;
            goto label_1dfaa4;
        }
    }
    ctx->pc = 0x1DFA94u;
label_1dfa94:
    // 0x1dfa94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dfa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dfa98:
    // 0x1dfa98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfa98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfa9c:
    // 0x1dfa9c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1dfaa0:
    if (ctx->pc == 0x1DFAA0u) {
        ctx->pc = 0x1DFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA9Cu;
        // 0x1dfaa0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFAA4u;
        goto label_1dfaa4;
    }
    ctx->pc = 0x1DFA9Cu;
    {
        const bool branch_taken_0x1dfa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA9Cu;
        // 0x1dfaa0: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa9c) {
            ctx->pc = 0x1DFAB0u;
            goto label_1dfab0;
        }
    }
    ctx->pc = 0x1DFAA4u;
label_1dfaa4:
    // 0x1dfaa4: 0xc0767d4  jal         func_1D9F50
label_1dfaa8:
    if (ctx->pc == 0x1DFAA8u) {
        ctx->pc = 0x1DFAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAA4u;
        // 0x1dfaa8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFAACu;
        goto label_1dfaac;
    }
    ctx->pc = 0x1DFAA4u;
    SET_GPR_U32(ctx, 31, 0x1DFAACu);
    ctx->pc = 0x1DFAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFAA4u;
    // 0x1dfaa8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1DFAA4u, 0x1DFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFAACu;
label_1dfaac:
    // 0x1dfaac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1dfaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dfab0:
    // 0x1dfab0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1dfab0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1dfab4:
    // 0x1dfab4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1dfab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1dfab8:
    // 0x1dfab8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1dfab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1dfabc:
    // 0x1dfabc: 0xc0767f4  jal         func_1D9FD0
label_1dfac0:
    if (ctx->pc == 0x1DFAC0u) {
        ctx->pc = 0x1DFAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFABCu;
        // 0x1dfac0: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFAC4u;
        goto label_1dfac4;
    }
    ctx->pc = 0x1DFABCu;
    SET_GPR_U32(ctx, 31, 0x1DFAC4u);
    ctx->pc = 0x1DFAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFABCu;
    // 0x1dfac0: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FD0u, 0x1DFABCu, 0x1DFAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFAC4u;
label_1dfac4:
    // 0x1dfac4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1dfac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dfac8:
    // 0x1dfac8: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1dfac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
label_1dfacc:
    // 0x1dfacc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1dfaccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1dfad0:
    // 0x1dfad0: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1dfad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfad4:
    // 0x1dfad4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1dfad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1dfad8:
    // 0x1dfad8: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_1dfadc:
    if (ctx->pc == 0x1DFADCu) {
        ctx->pc = 0x1DFAE0u;
        goto label_1dfae0;
    }
    ctx->pc = 0x1DFAD8u;
    {
        const bool branch_taken_0x1dfad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfad8) {
            ctx->pc = 0x1DFBA8u;
            goto label_1dfba8;
        }
    }
    ctx->pc = 0x1DFAE0u;
label_1dfae0:
    // 0x1dfae0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1dfae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1dfae4:
    // 0x1dfae4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1dfae4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfae8:
    // 0x1dfae8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1dfaec:
    if (ctx->pc == 0x1DFAECu) {
        ctx->pc = 0x1DFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAE8u;
        // 0x1dfaec: 0x7e220030  sq          $v0, 0x30($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFAF0u;
        goto label_1dfaf0;
    }
    ctx->pc = 0x1DFAE8u;
    {
        const bool branch_taken_0x1dfae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFAE8u;
        // 0x1dfaec: 0x7e220030  sq          $v0, 0x30($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfae8) {
            ctx->pc = 0x1DFBA8u;
            goto label_1dfba8;
        }
    }
    ctx->pc = 0x1DFAF0u;
label_1dfaf0:
    // 0x1dfaf0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1dfaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1dfaf4:
    // 0x1dfaf4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1dfaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1dfaf8:
    // 0x1dfaf8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1dfaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1dfafc:
    // 0x1dfafc: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1dfafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1dfb00:
    // 0x1dfb00: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1dfb00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1dfb04:
    // 0x1dfb04: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_1dfb08:
    if (ctx->pc == 0x1DFB08u) {
        ctx->pc = 0x1DFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB04u;
        // 0x1dfb08: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB0Cu;
        goto label_1dfb0c;
    }
    ctx->pc = 0x1DFB04u;
    {
        const bool branch_taken_0x1dfb04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB04u;
        // 0x1dfb08: 0x51140  sll         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb04) {
            ctx->pc = 0x1DFBA8u;
            goto label_1dfba8;
        }
    }
    ctx->pc = 0x1DFB0Cu;
label_1dfb0c:
    // 0x1dfb0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dfb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1dfb10:
    // 0x1dfb10: 0x84460020  lh          $a2, 0x20($v0)
    ctx->pc = 0x1dfb10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1dfb14:
    // 0x1dfb14: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x1dfb14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfb18:
    // 0x1dfb18: 0x14a60005  bne         $a1, $a2, . + 4 + (0x5 << 2)
label_1dfb1c:
    if (ctx->pc == 0x1DFB1Cu) {
        ctx->pc = 0x1DFB20u;
        goto label_1dfb20;
    }
    ctx->pc = 0x1DFB18u;
    {
        const bool branch_taken_0x1dfb18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1dfb18) {
            ctx->pc = 0x1DFB30u;
            goto label_1dfb30;
        }
    }
    ctx->pc = 0x1DFB20u;
label_1dfb20:
    // 0x1dfb20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dfb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1dfb24:
    // 0x1dfb24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dfb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dfb28:
    // 0x1dfb28: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dfb2c:
    if (ctx->pc == 0x1DFB2Cu) {
        ctx->pc = 0x1DFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB28u;
        // 0x1dfb2c: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB30u;
        goto label_1dfb30;
    }
    ctx->pc = 0x1DFB28u;
    {
        const bool branch_taken_0x1dfb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB28u;
        // 0x1dfb2c: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb28) {
            ctx->pc = 0x1DFB40u;
            goto label_1dfb40;
        }
    }
    ctx->pc = 0x1DFB30u;
label_1dfb30:
    // 0x1dfb30: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1dfb30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
label_1dfb34:
    // 0x1dfb34: 0xc0767d4  jal         func_1D9F50
label_1dfb38:
    if (ctx->pc == 0x1DFB38u) {
        ctx->pc = 0x1DFB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB34u;
        // 0x1dfb38: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB3Cu;
        goto label_1dfb3c;
    }
    ctx->pc = 0x1DFB34u;
    SET_GPR_U32(ctx, 31, 0x1DFB3Cu);
    ctx->pc = 0x1DFB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB34u;
    // 0x1dfb38: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x1DFB34u, 0x1DFB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB3Cu;
label_1dfb3c:
    // 0x1dfb3c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1dfb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1dfb40:
    // 0x1dfb40: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1dfb40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1dfb44:
    // 0x1dfb44: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1dfb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dfb48:
    // 0x1dfb48: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1dfb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1dfb4c:
    // 0x1dfb4c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1dfb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1dfb50:
    // 0x1dfb50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dfb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1dfb54:
    // 0x1dfb54: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1dfb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1dfb58:
    // 0x1dfb58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dfb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dfb5c:
    // 0x1dfb5c: 0xc0767f4  jal         func_1D9FD0
label_1dfb60:
    if (ctx->pc == 0x1DFB60u) {
        ctx->pc = 0x1DFB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB5Cu;
        // 0x1dfb60: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFB64u;
        goto label_1dfb64;
    }
    ctx->pc = 0x1DFB5Cu;
    SET_GPR_U32(ctx, 31, 0x1DFB64u);
    ctx->pc = 0x1DFB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB5Cu;
    // 0x1dfb60: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FD0u, 0x1DFB5Cu, 0x1DFB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB64u;
label_1dfb64:
    // 0x1dfb64: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1dfb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1dfb68:
    // 0x1dfb68: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1dfb68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
label_1dfb6c:
    // 0x1dfb6c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1dfb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dfb70:
    // 0x1dfb70: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1dfb70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1dfb74:
    // 0x1dfb74: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1dfb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1dfb78:
    // 0x1dfb78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dfb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1dfb7c:
    // 0x1dfb7c: 0x84420020  lh          $v0, 0x20($v0)
    ctx->pc = 0x1dfb7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1dfb80:
    // 0x1dfb80: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1dfb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1dfb84:
    // 0x1dfb84: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1dfb88:
    if (ctx->pc == 0x1DFB88u) {
        ctx->pc = 0x1DFB8Cu;
        goto label_1dfb8c;
    }
    ctx->pc = 0x1DFB84u;
    {
        const bool branch_taken_0x1dfb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfb84) {
            ctx->pc = 0x1DFBA8u;
            goto label_1dfba8;
        }
    }
    ctx->pc = 0x1DFB8Cu;
label_1dfb8c:
    // 0x1dfb8c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1dfb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1dfb90:
    // 0x1dfb90: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1dfb90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfb94:
    // 0x1dfb94: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x1dfb94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
label_1dfb98:
    // 0x1dfb98: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1dfb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1dfb9c:
    // 0x1dfb9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dfb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1dfba0:
    // 0x1dfba0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1dfba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1dfba4:
    // 0x1dfba4: 0x0  nop
    ctx->pc = 0x1dfba4u;
    // NOP
label_1dfba8:
    // 0x1dfba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dfba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dfbac:
    // 0x1dfbac: 0x0  nop
    ctx->pc = 0x1dfbacu;
    // NOP
label_1dfbb0:
    // 0x1dfbb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dfbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dfbb4:
    // 0x1dfbb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dfbb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dfbb8:
    // 0x1dfbb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfbb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dfbbc:
    // 0x1dfbbc: 0x3e00008  jr          $ra
label_1dfbc0:
    if (ctx->pc == 0x1DFBC0u) {
        ctx->pc = 0x1DFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBBCu;
        // 0x1dfbc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFBC4u;
        goto label_fallthrough_0x1dfbbc;
    }
    ctx->pc = 0x1DFBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBBCu;
        // 0x1dfbc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dfbbc:
    ctx->pc = 0x1DFBC4u;
}
