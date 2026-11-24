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

// Function: sub_002DCE10
// Address: 0x2dce10 - 0x2dd188
void sub_002DCE10_0x2dce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCE10_0x2dce10");
#endif

    switch (ctx->pc) {
        case 0x2dce10u: goto label_2dce10;
        case 0x2dce14u: goto label_2dce14;
        case 0x2dce18u: goto label_2dce18;
        case 0x2dce1cu: goto label_2dce1c;
        case 0x2dce20u: goto label_2dce20;
        case 0x2dce24u: goto label_2dce24;
        case 0x2dce28u: goto label_2dce28;
        case 0x2dce2cu: goto label_2dce2c;
        case 0x2dce30u: goto label_2dce30;
        case 0x2dce34u: goto label_2dce34;
        case 0x2dce38u: goto label_2dce38;
        case 0x2dce3cu: goto label_2dce3c;
        case 0x2dce40u: goto label_2dce40;
        case 0x2dce44u: goto label_2dce44;
        case 0x2dce48u: goto label_2dce48;
        case 0x2dce4cu: goto label_2dce4c;
        case 0x2dce50u: goto label_2dce50;
        case 0x2dce54u: goto label_2dce54;
        case 0x2dce58u: goto label_2dce58;
        case 0x2dce5cu: goto label_2dce5c;
        case 0x2dce60u: goto label_2dce60;
        case 0x2dce64u: goto label_2dce64;
        case 0x2dce68u: goto label_2dce68;
        case 0x2dce6cu: goto label_2dce6c;
        case 0x2dce70u: goto label_2dce70;
        case 0x2dce74u: goto label_2dce74;
        case 0x2dce78u: goto label_2dce78;
        case 0x2dce7cu: goto label_2dce7c;
        case 0x2dce80u: goto label_2dce80;
        case 0x2dce84u: goto label_2dce84;
        case 0x2dce88u: goto label_2dce88;
        case 0x2dce8cu: goto label_2dce8c;
        case 0x2dce90u: goto label_2dce90;
        case 0x2dce94u: goto label_2dce94;
        case 0x2dce98u: goto label_2dce98;
        case 0x2dce9cu: goto label_2dce9c;
        case 0x2dcea0u: goto label_2dcea0;
        case 0x2dcea4u: goto label_2dcea4;
        case 0x2dcea8u: goto label_2dcea8;
        case 0x2dceacu: goto label_2dceac;
        case 0x2dceb0u: goto label_2dceb0;
        case 0x2dceb4u: goto label_2dceb4;
        case 0x2dceb8u: goto label_2dceb8;
        case 0x2dcebcu: goto label_2dcebc;
        case 0x2dcec0u: goto label_2dcec0;
        case 0x2dcec4u: goto label_2dcec4;
        case 0x2dcec8u: goto label_2dcec8;
        case 0x2dceccu: goto label_2dcecc;
        case 0x2dced0u: goto label_2dced0;
        case 0x2dced4u: goto label_2dced4;
        case 0x2dced8u: goto label_2dced8;
        case 0x2dcedcu: goto label_2dcedc;
        case 0x2dcee0u: goto label_2dcee0;
        case 0x2dcee4u: goto label_2dcee4;
        case 0x2dcee8u: goto label_2dcee8;
        case 0x2dceecu: goto label_2dceec;
        case 0x2dcef0u: goto label_2dcef0;
        case 0x2dcef4u: goto label_2dcef4;
        case 0x2dcef8u: goto label_2dcef8;
        case 0x2dcefcu: goto label_2dcefc;
        case 0x2dcf00u: goto label_2dcf00;
        case 0x2dcf04u: goto label_2dcf04;
        case 0x2dcf08u: goto label_2dcf08;
        case 0x2dcf0cu: goto label_2dcf0c;
        case 0x2dcf10u: goto label_2dcf10;
        case 0x2dcf14u: goto label_2dcf14;
        case 0x2dcf18u: goto label_2dcf18;
        case 0x2dcf1cu: goto label_2dcf1c;
        case 0x2dcf20u: goto label_2dcf20;
        case 0x2dcf24u: goto label_2dcf24;
        case 0x2dcf28u: goto label_2dcf28;
        case 0x2dcf2cu: goto label_2dcf2c;
        case 0x2dcf30u: goto label_2dcf30;
        case 0x2dcf34u: goto label_2dcf34;
        case 0x2dcf38u: goto label_2dcf38;
        case 0x2dcf3cu: goto label_2dcf3c;
        case 0x2dcf40u: goto label_2dcf40;
        case 0x2dcf44u: goto label_2dcf44;
        case 0x2dcf48u: goto label_2dcf48;
        case 0x2dcf4cu: goto label_2dcf4c;
        case 0x2dcf50u: goto label_2dcf50;
        case 0x2dcf54u: goto label_2dcf54;
        case 0x2dcf58u: goto label_2dcf58;
        case 0x2dcf5cu: goto label_2dcf5c;
        case 0x2dcf60u: goto label_2dcf60;
        case 0x2dcf64u: goto label_2dcf64;
        case 0x2dcf68u: goto label_2dcf68;
        case 0x2dcf6cu: goto label_2dcf6c;
        case 0x2dcf70u: goto label_2dcf70;
        case 0x2dcf74u: goto label_2dcf74;
        case 0x2dcf78u: goto label_2dcf78;
        case 0x2dcf7cu: goto label_2dcf7c;
        case 0x2dcf80u: goto label_2dcf80;
        case 0x2dcf84u: goto label_2dcf84;
        case 0x2dcf88u: goto label_2dcf88;
        case 0x2dcf8cu: goto label_2dcf8c;
        case 0x2dcf90u: goto label_2dcf90;
        case 0x2dcf94u: goto label_2dcf94;
        case 0x2dcf98u: goto label_2dcf98;
        case 0x2dcf9cu: goto label_2dcf9c;
        case 0x2dcfa0u: goto label_2dcfa0;
        case 0x2dcfa4u: goto label_2dcfa4;
        case 0x2dcfa8u: goto label_2dcfa8;
        case 0x2dcfacu: goto label_2dcfac;
        case 0x2dcfb0u: goto label_2dcfb0;
        case 0x2dcfb4u: goto label_2dcfb4;
        case 0x2dcfb8u: goto label_2dcfb8;
        case 0x2dcfbcu: goto label_2dcfbc;
        case 0x2dcfc0u: goto label_2dcfc0;
        case 0x2dcfc4u: goto label_2dcfc4;
        case 0x2dcfc8u: goto label_2dcfc8;
        case 0x2dcfccu: goto label_2dcfcc;
        case 0x2dcfd0u: goto label_2dcfd0;
        case 0x2dcfd4u: goto label_2dcfd4;
        case 0x2dcfd8u: goto label_2dcfd8;
        case 0x2dcfdcu: goto label_2dcfdc;
        case 0x2dcfe0u: goto label_2dcfe0;
        case 0x2dcfe4u: goto label_2dcfe4;
        case 0x2dcfe8u: goto label_2dcfe8;
        case 0x2dcfecu: goto label_2dcfec;
        case 0x2dcff0u: goto label_2dcff0;
        case 0x2dcff4u: goto label_2dcff4;
        case 0x2dcff8u: goto label_2dcff8;
        case 0x2dcffcu: goto label_2dcffc;
        case 0x2dd000u: goto label_2dd000;
        case 0x2dd004u: goto label_2dd004;
        case 0x2dd008u: goto label_2dd008;
        case 0x2dd00cu: goto label_2dd00c;
        case 0x2dd010u: goto label_2dd010;
        case 0x2dd014u: goto label_2dd014;
        case 0x2dd018u: goto label_2dd018;
        case 0x2dd01cu: goto label_2dd01c;
        case 0x2dd020u: goto label_2dd020;
        case 0x2dd024u: goto label_2dd024;
        case 0x2dd028u: goto label_2dd028;
        case 0x2dd02cu: goto label_2dd02c;
        case 0x2dd030u: goto label_2dd030;
        case 0x2dd034u: goto label_2dd034;
        case 0x2dd038u: goto label_2dd038;
        case 0x2dd03cu: goto label_2dd03c;
        case 0x2dd040u: goto label_2dd040;
        case 0x2dd044u: goto label_2dd044;
        case 0x2dd048u: goto label_2dd048;
        case 0x2dd04cu: goto label_2dd04c;
        case 0x2dd050u: goto label_2dd050;
        case 0x2dd054u: goto label_2dd054;
        case 0x2dd058u: goto label_2dd058;
        case 0x2dd05cu: goto label_2dd05c;
        case 0x2dd060u: goto label_2dd060;
        case 0x2dd064u: goto label_2dd064;
        case 0x2dd068u: goto label_2dd068;
        case 0x2dd06cu: goto label_2dd06c;
        case 0x2dd070u: goto label_2dd070;
        case 0x2dd074u: goto label_2dd074;
        case 0x2dd078u: goto label_2dd078;
        case 0x2dd07cu: goto label_2dd07c;
        case 0x2dd080u: goto label_2dd080;
        case 0x2dd084u: goto label_2dd084;
        case 0x2dd088u: goto label_2dd088;
        case 0x2dd08cu: goto label_2dd08c;
        case 0x2dd090u: goto label_2dd090;
        case 0x2dd094u: goto label_2dd094;
        case 0x2dd098u: goto label_2dd098;
        case 0x2dd09cu: goto label_2dd09c;
        case 0x2dd0a0u: goto label_2dd0a0;
        case 0x2dd0a4u: goto label_2dd0a4;
        case 0x2dd0a8u: goto label_2dd0a8;
        case 0x2dd0acu: goto label_2dd0ac;
        case 0x2dd0b0u: goto label_2dd0b0;
        case 0x2dd0b4u: goto label_2dd0b4;
        case 0x2dd0b8u: goto label_2dd0b8;
        case 0x2dd0bcu: goto label_2dd0bc;
        case 0x2dd0c0u: goto label_2dd0c0;
        case 0x2dd0c4u: goto label_2dd0c4;
        case 0x2dd0c8u: goto label_2dd0c8;
        case 0x2dd0ccu: goto label_2dd0cc;
        case 0x2dd0d0u: goto label_2dd0d0;
        case 0x2dd0d4u: goto label_2dd0d4;
        case 0x2dd0d8u: goto label_2dd0d8;
        case 0x2dd0dcu: goto label_2dd0dc;
        case 0x2dd0e0u: goto label_2dd0e0;
        case 0x2dd0e4u: goto label_2dd0e4;
        case 0x2dd0e8u: goto label_2dd0e8;
        case 0x2dd0ecu: goto label_2dd0ec;
        case 0x2dd0f0u: goto label_2dd0f0;
        case 0x2dd0f4u: goto label_2dd0f4;
        case 0x2dd0f8u: goto label_2dd0f8;
        case 0x2dd0fcu: goto label_2dd0fc;
        case 0x2dd100u: goto label_2dd100;
        case 0x2dd104u: goto label_2dd104;
        case 0x2dd108u: goto label_2dd108;
        case 0x2dd10cu: goto label_2dd10c;
        case 0x2dd110u: goto label_2dd110;
        case 0x2dd114u: goto label_2dd114;
        case 0x2dd118u: goto label_2dd118;
        case 0x2dd11cu: goto label_2dd11c;
        case 0x2dd120u: goto label_2dd120;
        case 0x2dd124u: goto label_2dd124;
        case 0x2dd128u: goto label_2dd128;
        case 0x2dd12cu: goto label_2dd12c;
        case 0x2dd130u: goto label_2dd130;
        case 0x2dd134u: goto label_2dd134;
        case 0x2dd138u: goto label_2dd138;
        case 0x2dd13cu: goto label_2dd13c;
        case 0x2dd140u: goto label_2dd140;
        case 0x2dd144u: goto label_2dd144;
        case 0x2dd148u: goto label_2dd148;
        case 0x2dd14cu: goto label_2dd14c;
        case 0x2dd150u: goto label_2dd150;
        case 0x2dd154u: goto label_2dd154;
        case 0x2dd158u: goto label_2dd158;
        case 0x2dd15cu: goto label_2dd15c;
        case 0x2dd160u: goto label_2dd160;
        case 0x2dd164u: goto label_2dd164;
        case 0x2dd168u: goto label_2dd168;
        case 0x2dd16cu: goto label_2dd16c;
        case 0x2dd170u: goto label_2dd170;
        case 0x2dd174u: goto label_2dd174;
        case 0x2dd178u: goto label_2dd178;
        case 0x2dd17cu: goto label_2dd17c;
        case 0x2dd180u: goto label_2dd180;
        case 0x2dd184u: goto label_2dd184;
        default: break;
    }

    ctx->pc = 0x2dce10u;

label_2dce10:
    // 0x2dce10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2dce10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2dce14:
    // 0x2dce14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2dce14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2dce18:
    // 0x2dce18: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2dce18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2dce1c:
    // 0x2dce1c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2dce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2dce20:
    // 0x2dce20: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2dce20u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dce24:
    // 0x2dce24: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2dce24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2dce28:
    // 0x2dce28: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dce28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dce2c:
    // 0x2dce2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dce2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2dce30:
    // 0x2dce30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dce30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2dce34:
    // 0x2dce34: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2dce34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2dce38:
    // 0x2dce38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dce38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2dce3c:
    // 0x2dce3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dce3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2dce40:
    // 0x2dce40: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2dce40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2dce44:
    // 0x2dce44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dce44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dce48:
    // 0x2dce48: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2dce48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2dce4c:
    // 0x2dce4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dce50:
    // 0x2dce50: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2dce50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2dce54:
    // 0x2dce54: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x2dce54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_2dce58:
    // 0x2dce58: 0xc09d4d4  jal         func_275350
label_2dce5c:
    if (ctx->pc == 0x2DCE5Cu) {
        ctx->pc = 0x2DCE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE58u;
        // 0x2dce5c: 0xafa600a4  sw          $a2, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE60u;
        goto label_2dce60;
    }
    ctx->pc = 0x2DCE58u;
    SET_GPR_U32(ctx, 31, 0x2DCE60u);
    ctx->pc = 0x2DCE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE58u;
    // 0x2dce5c: 0xafa600a4  sw          $a2, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x2DCE58u, 0x2DCE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE60u;
label_2dce60:
    // 0x2dce60: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
label_2dce64:
    if (ctx->pc == 0x2DCE64u) {
        ctx->pc = 0x2DCE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE60u;
        // 0x2dce64: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE68u;
        goto label_2dce68;
    }
    ctx->pc = 0x2DCE60u;
    {
        const bool branch_taken_0x2dce60 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DCE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE60u;
        // 0x2dce64: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce60) {
            ctx->pc = 0x2DCE78u;
            goto label_2dce78;
        }
    }
    ctx->pc = 0x2DCE68u;
label_2dce68:
    // 0x2dce68: 0xc09d4d8  jal         func_275360
label_2dce6c:
    if (ctx->pc == 0x2DCE6Cu) {
        ctx->pc = 0x2DCE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE68u;
        // 0x2dce6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE70u;
        goto label_2dce70;
    }
    ctx->pc = 0x2DCE68u;
    SET_GPR_U32(ctx, 31, 0x2DCE70u);
    ctx->pc = 0x2DCE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE68u;
    // 0x2dce6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DCE68u, 0x2DCE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE70u;
label_2dce70:
    // 0x2dce70: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_2dce74:
    if (ctx->pc == 0x2DCE74u) {
        ctx->pc = 0x2DCE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE70u;
        // 0x2dce74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE78u;
        goto label_2dce78;
    }
    ctx->pc = 0x2DCE70u;
    {
        const bool branch_taken_0x2dce70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE70u;
        // 0x2dce74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce70) {
            ctx->pc = 0x2DD158u;
            goto label_2dd158;
        }
    }
    ctx->pc = 0x2DCE78u;
label_2dce78:
    // 0x2dce78: 0xc0741a4  jal         func_1D0690
label_2dce7c:
    if (ctx->pc == 0x2DCE7Cu) {
        ctx->pc = 0x2DCE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE78u;
        // 0x2dce7c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE80u;
        goto label_2dce80;
    }
    ctx->pc = 0x2DCE78u;
    SET_GPR_U32(ctx, 31, 0x2DCE80u);
    ctx->pc = 0x2DCE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE78u;
    // 0x2dce7c: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2DCE78u, 0x2DCE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE80u;
label_2dce80:
    // 0x2dce80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dce80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dce84:
    // 0x2dce84: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2dce88:
    if (ctx->pc == 0x2DCE88u) {
        ctx->pc = 0x2DCE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE84u;
        // 0x2dce88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCE8Cu;
        goto label_2dce8c;
    }
    ctx->pc = 0x2DCE84u;
    {
        const bool branch_taken_0x2dce84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCE84u;
        // 0x2dce88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dce84) {
            ctx->pc = 0x2DCEB8u;
            goto label_2dceb8;
        }
    }
    ctx->pc = 0x2DCE8Cu;
label_2dce8c:
    // 0x2dce8c: 0xc096b00  jal         func_25AC00
label_2dce90:
    if (ctx->pc == 0x2DCE90u) {
        ctx->pc = 0x2DCE94u;
        goto label_2dce94;
    }
    ctx->pc = 0x2DCE8Cu;
    SET_GPR_U32(ctx, 31, 0x2DCE94u);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x2DCE8Cu, 0x2DCE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCE94u;
label_2dce94:
    // 0x2dce94: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2dce94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_2dce98:
    // 0x2dce98: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2dce98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2dce9c:
    // 0x2dce9c: 0x246379c0  addiu       $v1, $v1, 0x79C0
    ctx->pc = 0x2dce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31168));
label_2dcea0:
    // 0x2dcea0: 0x244279a0  addiu       $v0, $v0, 0x79A0
    ctx->pc = 0x2dcea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31136));
label_2dcea4:
    // 0x2dcea4: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x2dcea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_2dcea8:
    // 0x2dcea8: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2dcea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_2dceac:
    // 0x2dceac: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2dceacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_2dceb0:
    // 0x2dceb0: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x2dceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_2dceb4:
    // 0x2dceb4: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x2dceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_2dceb8:
    // 0x2dceb8: 0x120000a3  beqz        $s0, . + 4 + (0xA3 << 2)
label_2dcebc:
    if (ctx->pc == 0x2DCEBCu) {
        ctx->pc = 0x2DCEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEB8u;
        // 0x2dcebc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCEC0u;
        goto label_2dcec0;
    }
    ctx->pc = 0x2DCEB8u;
    {
        const bool branch_taken_0x2dceb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEB8u;
        // 0x2dcebc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dceb8) {
            ctx->pc = 0x2DD148u;
            goto label_2dd148;
        }
    }
    ctx->pc = 0x2DCEC0u;
label_2dcec0:
    // 0x2dcec0: 0xc09d4fc  jal         func_2753F0
label_2dcec4:
    if (ctx->pc == 0x2DCEC4u) {
        ctx->pc = 0x2DCEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEC0u;
        // 0x2dcec4: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCEC8u;
        goto label_2dcec8;
    }
    ctx->pc = 0x2DCEC0u;
    SET_GPR_U32(ctx, 31, 0x2DCEC8u);
    ctx->pc = 0x2DCEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCEC0u;
    // 0x2dcec4: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2DCEC0u, 0x2DCEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCEC8u;
label_2dcec8:
    // 0x2dcec8: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x2dcec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_2dcecc:
    // 0x2dcecc: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x2dceccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2dced0:
    // 0x2dced0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2dced0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2dced4:
    // 0x2dced4: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dced4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dced8:
    // 0x2dced8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dced8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dcedc:
    // 0x2dcedc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2dcedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2dcee0:
    // 0x2dcee0: 0xc09d524  jal         func_275490
label_2dcee4:
    if (ctx->pc == 0x2DCEE4u) {
        ctx->pc = 0x2DCEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEE0u;
        // 0x2dcee4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCEE8u;
        goto label_2dcee8;
    }
    ctx->pc = 0x2DCEE0u;
    SET_GPR_U32(ctx, 31, 0x2DCEE8u);
    ctx->pc = 0x2DCEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCEE0u;
    // 0x2dcee4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DCEE0u, 0x2DCEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCEE8u;
label_2dcee8:
    // 0x2dcee8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2dcee8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dceec:
    // 0x2dceec: 0x1680000e  bnez        $s4, . + 4 + (0xE << 2)
label_2dcef0:
    if (ctx->pc == 0x2DCEF0u) {
        ctx->pc = 0x2DCEF4u;
        goto label_2dcef4;
    }
    ctx->pc = 0x2DCEECu;
    {
        const bool branch_taken_0x2dceec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dceec) {
            ctx->pc = 0x2DCF28u;
            goto label_2dcf28;
        }
    }
    ctx->pc = 0x2DCEF4u;
label_2dcef4:
    // 0x2dcef4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2dcef8:
    if (ctx->pc == 0x2DCEF8u) {
        ctx->pc = 0x2DCEFCu;
        goto label_2dcefc;
    }
    ctx->pc = 0x2DCEF4u;
    {
        const bool branch_taken_0x2dcef4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcef4) {
            ctx->pc = 0x2DCF10u;
            goto label_2dcf10;
        }
    }
    ctx->pc = 0x2DCEFCu;
label_2dcefc:
    // 0x2dcefc: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x2dcefcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2dcf00:
    // 0x2dcf00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf04:
    // 0x2dcf04: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2dcf04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2dcf08:
    // 0x2dcf08: 0x320f809  jalr        $t9
label_2dcf0c:
    if (ctx->pc == 0x2DCF0Cu) {
        ctx->pc = 0x2DCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF08u;
        // 0x2dcf0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF10u;
        goto label_2dcf10;
    }
    ctx->pc = 0x2DCF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DCF10u);
        ctx->pc = 0x2DCF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF08u;
        // 0x2dcf0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCF08u, 0x2DCF10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCF10u;
label_2dcf10:
    // 0x2dcf10: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dcf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dcf14:
    // 0x2dcf14: 0xc09d4d8  jal         func_275360
label_2dcf18:
    if (ctx->pc == 0x2DCF18u) {
        ctx->pc = 0x2DCF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF14u;
        // 0x2dcf18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF1Cu;
        goto label_2dcf1c;
    }
    ctx->pc = 0x2DCF14u;
    SET_GPR_U32(ctx, 31, 0x2DCF1Cu);
    ctx->pc = 0x2DCF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF14u;
    // 0x2dcf18: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DCF14u, 0x2DCF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF1Cu;
label_2dcf1c:
    // 0x2dcf1c: 0x1000008e  b           . + 4 + (0x8E << 2)
label_2dcf20:
    if (ctx->pc == 0x2DCF20u) {
        ctx->pc = 0x2DCF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF1Cu;
        // 0x2dcf20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF24u;
        goto label_2dcf24;
    }
    ctx->pc = 0x2DCF1Cu;
    {
        const bool branch_taken_0x2dcf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF1Cu;
        // 0x2dcf20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf1c) {
            ctx->pc = 0x2DD158u;
            goto label_2dd158;
        }
    }
    ctx->pc = 0x2DCF24u;
label_2dcf24:
    // 0x2dcf24: 0x0  nop
    ctx->pc = 0x2dcf24u;
    // NOP
label_2dcf28:
    // 0x2dcf28: 0x92860003  lbu         $a2, 0x3($s4)
    ctx->pc = 0x2dcf28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_2dcf2c:
    // 0x2dcf2c: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dcf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dcf30:
    // 0x2dcf30: 0xc09d524  jal         func_275490
label_2dcf34:
    if (ctx->pc == 0x2DCF34u) {
        ctx->pc = 0x2DCF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF30u;
        // 0x2dcf34: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF38u;
        goto label_2dcf38;
    }
    ctx->pc = 0x2DCF30u;
    SET_GPR_U32(ctx, 31, 0x2DCF38u);
    ctx->pc = 0x2DCF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF30u;
    // 0x2dcf34: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DCF30u, 0x2DCF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF38u;
label_2dcf38:
    // 0x2dcf38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2dcf38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf3c:
    // 0x2dcf3c: 0x1660000e  bnez        $s3, . + 4 + (0xE << 2)
label_2dcf40:
    if (ctx->pc == 0x2DCF40u) {
        ctx->pc = 0x2DCF44u;
        goto label_2dcf44;
    }
    ctx->pc = 0x2DCF3Cu;
    {
        const bool branch_taken_0x2dcf3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf3c) {
            ctx->pc = 0x2DCF78u;
            goto label_2dcf78;
        }
    }
    ctx->pc = 0x2DCF44u;
label_2dcf44:
    // 0x2dcf44: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2dcf48:
    if (ctx->pc == 0x2DCF48u) {
        ctx->pc = 0x2DCF4Cu;
        goto label_2dcf4c;
    }
    ctx->pc = 0x2DCF44u;
    {
        const bool branch_taken_0x2dcf44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf44) {
            ctx->pc = 0x2DCF60u;
            goto label_2dcf60;
        }
    }
    ctx->pc = 0x2DCF4Cu;
label_2dcf4c:
    // 0x2dcf4c: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x2dcf4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2dcf50:
    // 0x2dcf50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf54:
    // 0x2dcf54: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2dcf54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2dcf58:
    // 0x2dcf58: 0x320f809  jalr        $t9
label_2dcf5c:
    if (ctx->pc == 0x2DCF5Cu) {
        ctx->pc = 0x2DCF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF58u;
        // 0x2dcf5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF60u;
        goto label_2dcf60;
    }
    ctx->pc = 0x2DCF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DCF60u);
        ctx->pc = 0x2DCF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF58u;
        // 0x2dcf5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCF58u, 0x2DCF60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCF60u;
label_2dcf60:
    // 0x2dcf60: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dcf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dcf64:
    // 0x2dcf64: 0xc09d4d8  jal         func_275360
label_2dcf68:
    if (ctx->pc == 0x2DCF68u) {
        ctx->pc = 0x2DCF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF64u;
        // 0x2dcf68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF6Cu;
        goto label_2dcf6c;
    }
    ctx->pc = 0x2DCF64u;
    SET_GPR_U32(ctx, 31, 0x2DCF6Cu);
    ctx->pc = 0x2DCF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF64u;
    // 0x2dcf68: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DCF64u, 0x2DCF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF6Cu;
label_2dcf6c:
    // 0x2dcf6c: 0x1000007a  b           . + 4 + (0x7A << 2)
label_2dcf70:
    if (ctx->pc == 0x2DCF70u) {
        ctx->pc = 0x2DCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF6Cu;
        // 0x2dcf70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF74u;
        goto label_2dcf74;
    }
    ctx->pc = 0x2DCF6Cu;
    {
        const bool branch_taken_0x2dcf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF6Cu;
        // 0x2dcf70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcf6c) {
            ctx->pc = 0x2DD158u;
            goto label_2dd158;
        }
    }
    ctx->pc = 0x2DCF74u;
label_2dcf74:
    // 0x2dcf74: 0x0  nop
    ctx->pc = 0x2dcf74u;
    // NOP
label_2dcf78:
    // 0x2dcf78: 0x96660002  lhu         $a2, 0x2($s3)
    ctx->pc = 0x2dcf78u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_2dcf7c:
    // 0x2dcf7c: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dcf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dcf80:
    // 0x2dcf80: 0xc09d524  jal         func_275490
label_2dcf84:
    if (ctx->pc == 0x2DCF84u) {
        ctx->pc = 0x2DCF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCF80u;
        // 0x2dcf84: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCF88u;
        goto label_2dcf88;
    }
    ctx->pc = 0x2DCF80u;
    SET_GPR_U32(ctx, 31, 0x2DCF88u);
    ctx->pc = 0x2DCF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCF80u;
    // 0x2dcf84: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DCF80u, 0x2DCF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCF88u;
label_2dcf88:
    // 0x2dcf88: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2dcf88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcf8c:
    // 0x2dcf8c: 0x16e0000e  bnez        $s7, . + 4 + (0xE << 2)
label_2dcf90:
    if (ctx->pc == 0x2DCF90u) {
        ctx->pc = 0x2DCF94u;
        goto label_2dcf94;
    }
    ctx->pc = 0x2DCF8Cu;
    {
        const bool branch_taken_0x2dcf8c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf8c) {
            ctx->pc = 0x2DCFC8u;
            goto label_2dcfc8;
        }
    }
    ctx->pc = 0x2DCF94u;
label_2dcf94:
    // 0x2dcf94: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2dcf98:
    if (ctx->pc == 0x2DCF98u) {
        ctx->pc = 0x2DCF9Cu;
        goto label_2dcf9c;
    }
    ctx->pc = 0x2DCF94u;
    {
        const bool branch_taken_0x2dcf94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcf94) {
            ctx->pc = 0x2DCFB0u;
            goto label_2dcfb0;
        }
    }
    ctx->pc = 0x2DCF9Cu;
label_2dcf9c:
    // 0x2dcf9c: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x2dcf9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2dcfa0:
    // 0x2dcfa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcfa4:
    // 0x2dcfa4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2dcfa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2dcfa8:
    // 0x2dcfa8: 0x320f809  jalr        $t9
label_2dcfac:
    if (ctx->pc == 0x2DCFACu) {
        ctx->pc = 0x2DCFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFA8u;
        // 0x2dcfac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFB0u;
        goto label_2dcfb0;
    }
    ctx->pc = 0x2DCFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DCFB0u);
        ctx->pc = 0x2DCFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFA8u;
        // 0x2dcfac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCFA8u, 0x2DCFB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCFB0u;
label_2dcfb0:
    // 0x2dcfb0: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dcfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dcfb4:
    // 0x2dcfb4: 0xc09d4d8  jal         func_275360
label_2dcfb8:
    if (ctx->pc == 0x2DCFB8u) {
        ctx->pc = 0x2DCFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFB4u;
        // 0x2dcfb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFBCu;
        goto label_2dcfbc;
    }
    ctx->pc = 0x2DCFB4u;
    SET_GPR_U32(ctx, 31, 0x2DCFBCu);
    ctx->pc = 0x2DCFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCFB4u;
    // 0x2dcfb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DCFB4u, 0x2DCFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFBCu;
label_2dcfbc:
    // 0x2dcfbc: 0x10000066  b           . + 4 + (0x66 << 2)
label_2dcfc0:
    if (ctx->pc == 0x2DCFC0u) {
        ctx->pc = 0x2DCFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFBCu;
        // 0x2dcfc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFC4u;
        goto label_2dcfc4;
    }
    ctx->pc = 0x2DCFBCu;
    {
        const bool branch_taken_0x2dcfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFBCu;
        // 0x2dcfc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcfbc) {
            ctx->pc = 0x2DD158u;
            goto label_2dd158;
        }
    }
    ctx->pc = 0x2DCFC4u;
label_2dcfc4:
    // 0x2dcfc4: 0x0  nop
    ctx->pc = 0x2dcfc4u;
    // NOP
label_2dcfc8:
    // 0x2dcfc8: 0x92860004  lbu         $a2, 0x4($s4)
    ctx->pc = 0x2dcfc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
label_2dcfcc:
    // 0x2dcfcc: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dcfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dcfd0:
    // 0x2dcfd0: 0xc09d524  jal         func_275490
label_2dcfd4:
    if (ctx->pc == 0x2DCFD4u) {
        ctx->pc = 0x2DCFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFD0u;
        // 0x2dcfd4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFD8u;
        goto label_2dcfd8;
    }
    ctx->pc = 0x2DCFD0u;
    SET_GPR_U32(ctx, 31, 0x2DCFD8u);
    ctx->pc = 0x2DCFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCFD0u;
    // 0x2dcfd4: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DCFD0u, 0x2DCFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFD8u;
label_2dcfd8:
    // 0x2dcfd8: 0x92860005  lbu         $a2, 0x5($s4)
    ctx->pc = 0x2dcfd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
label_2dcfdc:
    // 0x2dcfdc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dcfdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcfe0:
    // 0x2dcfe0: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dcfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dcfe4:
    // 0x2dcfe4: 0xc09d524  jal         func_275490
label_2dcfe8:
    if (ctx->pc == 0x2DCFE8u) {
        ctx->pc = 0x2DCFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFE4u;
        // 0x2dcfe8: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DCFECu;
        goto label_2dcfec;
    }
    ctx->pc = 0x2DCFE4u;
    SET_GPR_U32(ctx, 31, 0x2DCFECu);
    ctx->pc = 0x2DCFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCFE4u;
    // 0x2dcfe8: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DCFE4u, 0x2DCFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCFECu;
label_2dcfec:
    // 0x2dcfec: 0x92860006  lbu         $a2, 0x6($s4)
    ctx->pc = 0x2dcfecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
label_2dcff0:
    // 0x2dcff0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dcff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcff4:
    // 0x2dcff4: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dcff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dcff8:
    // 0x2dcff8: 0xc09d524  jal         func_275490
label_2dcffc:
    if (ctx->pc == 0x2DCFFCu) {
        ctx->pc = 0x2DCFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCFF8u;
        // 0x2dcffc: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD000u;
        goto label_2dd000;
    }
    ctx->pc = 0x2DCFF8u;
    SET_GPR_U32(ctx, 31, 0x2DD000u);
    ctx->pc = 0x2DCFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCFF8u;
    // 0x2dcffc: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2DCFF8u, 0x2DD000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD000u;
label_2dd000:
    // 0x2dd000: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2dd000u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd004:
    // 0x2dd004: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x2dd004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_2dd008:
    // 0x2dd008: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x2dd008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_2dd00c:
    // 0x2dd00c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2dd00cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2dd010:
    // 0x2dd010: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x2dd010u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2dd014:
    // 0x2dd014: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2dd014u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dd018:
    // 0x2dd018: 0x8fa900a4  lw          $t1, 0xA4($sp)
    ctx->pc = 0x2dd018u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2dd01c:
    // 0x2dd01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd020:
    // 0x2dd020: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2dd020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2dd024:
    // 0x2dd024: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2dd024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2dd028:
    // 0x2dd028: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2dd028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2dd02c:
    // 0x2dd02c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2dd02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2dd030:
    // 0x2dd030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dd030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dd034:
    // 0x2dd034: 0xc096b38  jal         func_25ACE0
label_2dd038:
    if (ctx->pc == 0x2DD038u) {
        ctx->pc = 0x2DD038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD034u;
        // 0x2dd038: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD03Cu;
        goto label_2dd03c;
    }
    ctx->pc = 0x2DD034u;
    SET_GPR_U32(ctx, 31, 0x2DD03Cu);
    ctx->pc = 0x2DD038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD034u;
    // 0x2dd038: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x2DD034u, 0x2DD03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD03Cu;
label_2dd03c:
    // 0x2dd03c: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x2dd03cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_2dd040:
    // 0x2dd040: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2dd040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2dd044:
    // 0x2dd044: 0xa2020050  sb          $v0, 0x50($s0)
    ctx->pc = 0x2dd044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 2));
label_2dd048:
    // 0x2dd048: 0xa600005a  sh          $zero, 0x5A($s0)
    ctx->pc = 0x2dd048u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 0));
label_2dd04c:
    // 0x2dd04c: 0xa6000058  sh          $zero, 0x58($s0)
    ctx->pc = 0x2dd04cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 0));
label_2dd050:
    // 0x2dd050: 0xa6000056  sh          $zero, 0x56($s0)
    ctx->pc = 0x2dd050u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 0));
label_2dd054:
    // 0x2dd054: 0xa2000051  sb          $zero, 0x51($s0)
    ctx->pc = 0x2dd054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 0));
label_2dd058:
    // 0x2dd058: 0xae140080  sw          $s4, 0x80($s0)
    ctx->pc = 0x2dd058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 20));
label_2dd05c:
    // 0x2dd05c: 0xae130070  sw          $s3, 0x70($s0)
    ctx->pc = 0x2dd05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 19));
label_2dd060:
    // 0x2dd060: 0xae170074  sw          $s7, 0x74($s0)
    ctx->pc = 0x2dd060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 23));
label_2dd064:
    // 0x2dd064: 0xae120084  sw          $s2, 0x84($s0)
    ctx->pc = 0x2dd064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 18));
label_2dd068:
    // 0x2dd068: 0xae110088  sw          $s1, 0x88($s0)
    ctx->pc = 0x2dd068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 17));
label_2dd06c:
    // 0x2dd06c: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_2dd070:
    if (ctx->pc == 0x2DD070u) {
        ctx->pc = 0x2DD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD06Cu;
        // 0x2dd070: 0xae16008c  sw          $s6, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD074u;
        goto label_2dd074;
    }
    ctx->pc = 0x2DD06Cu;
    {
        const bool branch_taken_0x2dd06c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD06Cu;
        // 0x2dd070: 0xae16008c  sw          $s6, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd06c) {
            ctx->pc = 0x2DD0B0u;
            goto label_2dd0b0;
        }
    }
    ctx->pc = 0x2DD074u;
label_2dd074:
    // 0x2dd074: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dd074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dd078:
    // 0x2dd078: 0xc0b6cdc  jal         func_2DB370
label_2dd07c:
    if (ctx->pc == 0x2DD07Cu) {
        ctx->pc = 0x2DD07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD078u;
        // 0x2dd07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD080u;
        goto label_2dd080;
    }
    ctx->pc = 0x2DD078u;
    SET_GPR_U32(ctx, 31, 0x2DD080u);
    ctx->pc = 0x2DD07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD078u;
    // 0x2dd07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB370u, 0x2DD078u, 0x2DD080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD080u;
label_2dd080:
    // 0x2dd080: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x2dd080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_2dd084:
    // 0x2dd084: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2dd084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2dd088:
    // 0x2dd088: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2dd08c:
    if (ctx->pc == 0x2DD08Cu) {
        ctx->pc = 0x2DD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD088u;
        // 0x2dd08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD090u;
        goto label_2dd090;
    }
    ctx->pc = 0x2DD088u;
    {
        const bool branch_taken_0x2dd088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD088u;
        // 0x2dd08c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd088) {
            ctx->pc = 0x2DD0B0u;
            goto label_2dd0b0;
        }
    }
    ctx->pc = 0x2DD090u;
label_2dd090:
    // 0x2dd090: 0xc074268  jal         func_1D09A0
label_2dd094:
    if (ctx->pc == 0x2DD094u) {
        ctx->pc = 0x2DD098u;
        goto label_2dd098;
    }
    ctx->pc = 0x2DD090u;
    SET_GPR_U32(ctx, 31, 0x2DD098u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x2DD090u, 0x2DD098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD098u;
label_2dd098:
    // 0x2dd098: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dd098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dd09c:
    // 0x2dd09c: 0xc09d4d8  jal         func_275360
label_2dd0a0:
    if (ctx->pc == 0x2DD0A0u) {
        ctx->pc = 0x2DD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD09Cu;
        // 0x2dd0a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0A4u;
        goto label_2dd0a4;
    }
    ctx->pc = 0x2DD09Cu;
    SET_GPR_U32(ctx, 31, 0x2DD0A4u);
    ctx->pc = 0x2DD0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD09Cu;
    // 0x2dd0a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DD09Cu, 0x2DD0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD0A4u;
label_2dd0a4:
    // 0x2dd0a4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2dd0a8:
    if (ctx->pc == 0x2DD0A8u) {
        ctx->pc = 0x2DD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0A4u;
        // 0x2dd0a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0ACu;
        goto label_2dd0ac;
    }
    ctx->pc = 0x2DD0A4u;
    {
        const bool branch_taken_0x2dd0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0A4u;
        // 0x2dd0a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0a4) {
            ctx->pc = 0x2DD158u;
            goto label_2dd158;
        }
    }
    ctx->pc = 0x2DD0ACu;
label_2dd0ac:
    // 0x2dd0ac: 0x0  nop
    ctx->pc = 0x2dd0acu;
    // NOP
label_2dd0b0:
    // 0x2dd0b0: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_2dd0b4:
    if (ctx->pc == 0x2DD0B4u) {
        ctx->pc = 0x2DD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0B0u;
        // 0x2dd0b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0B8u;
        goto label_2dd0b8;
    }
    ctx->pc = 0x2DD0B0u;
    {
        const bool branch_taken_0x2dd0b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0B0u;
        // 0x2dd0b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0b0) {
            ctx->pc = 0x2DD0F0u;
            goto label_2dd0f0;
        }
    }
    ctx->pc = 0x2DD0B8u;
label_2dd0b8:
    // 0x2dd0b8: 0xc0b6cdc  jal         func_2DB370
label_2dd0bc:
    if (ctx->pc == 0x2DD0BCu) {
        ctx->pc = 0x2DD0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0B8u;
        // 0x2dd0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0C0u;
        goto label_2dd0c0;
    }
    ctx->pc = 0x2DD0B8u;
    SET_GPR_U32(ctx, 31, 0x2DD0C0u);
    ctx->pc = 0x2DD0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD0B8u;
    // 0x2dd0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB370u, 0x2DD0B8u, 0x2DD0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD0C0u;
label_2dd0c0:
    // 0x2dd0c0: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x2dd0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_2dd0c4:
    // 0x2dd0c4: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x2dd0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2dd0c8:
    // 0x2dd0c8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2dd0cc:
    if (ctx->pc == 0x2DD0CCu) {
        ctx->pc = 0x2DD0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0C8u;
        // 0x2dd0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0D0u;
        goto label_2dd0d0;
    }
    ctx->pc = 0x2DD0C8u;
    {
        const bool branch_taken_0x2dd0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0C8u;
        // 0x2dd0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0c8) {
            ctx->pc = 0x2DD0F0u;
            goto label_2dd0f0;
        }
    }
    ctx->pc = 0x2DD0D0u;
label_2dd0d0:
    // 0x2dd0d0: 0xc074268  jal         func_1D09A0
label_2dd0d4:
    if (ctx->pc == 0x2DD0D4u) {
        ctx->pc = 0x2DD0D8u;
        goto label_2dd0d8;
    }
    ctx->pc = 0x2DD0D0u;
    SET_GPR_U32(ctx, 31, 0x2DD0D8u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x2DD0D0u, 0x2DD0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD0D8u;
label_2dd0d8:
    // 0x2dd0d8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dd0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dd0dc:
    // 0x2dd0dc: 0xc09d4d8  jal         func_275360
label_2dd0e0:
    if (ctx->pc == 0x2DD0E0u) {
        ctx->pc = 0x2DD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0DCu;
        // 0x2dd0e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0E4u;
        goto label_2dd0e4;
    }
    ctx->pc = 0x2DD0DCu;
    SET_GPR_U32(ctx, 31, 0x2DD0E4u);
    ctx->pc = 0x2DD0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD0DCu;
    // 0x2dd0e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DD0DCu, 0x2DD0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD0E4u;
label_2dd0e4:
    // 0x2dd0e4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2dd0e8:
    if (ctx->pc == 0x2DD0E8u) {
        ctx->pc = 0x2DD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0E4u;
        // 0x2dd0e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0ECu;
        goto label_2dd0ec;
    }
    ctx->pc = 0x2DD0E4u;
    {
        const bool branch_taken_0x2dd0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0E4u;
        // 0x2dd0e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0e4) {
            ctx->pc = 0x2DD158u;
            goto label_2dd158;
        }
    }
    ctx->pc = 0x2DD0ECu;
label_2dd0ec:
    // 0x2dd0ec: 0x0  nop
    ctx->pc = 0x2dd0ecu;
    // NOP
label_2dd0f0:
    // 0x2dd0f0: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
label_2dd0f4:
    if (ctx->pc == 0x2DD0F4u) {
        ctx->pc = 0x2DD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0F0u;
        // 0x2dd0f4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD0F8u;
        goto label_2dd0f8;
    }
    ctx->pc = 0x2DD0F0u;
    {
        const bool branch_taken_0x2dd0f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0F0u;
        // 0x2dd0f4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0f0) {
            ctx->pc = 0x2DD130u;
            goto label_2dd130;
        }
    }
    ctx->pc = 0x2DD0F8u;
label_2dd0f8:
    // 0x2dd0f8: 0xc0b6e10  jal         func_2DB840
label_2dd0fc:
    if (ctx->pc == 0x2DD0FCu) {
        ctx->pc = 0x2DD0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0F8u;
        // 0x2dd0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD100u;
        goto label_2dd100;
    }
    ctx->pc = 0x2DD0F8u;
    SET_GPR_U32(ctx, 31, 0x2DD100u);
    ctx->pc = 0x2DD0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD0F8u;
    // 0x2dd0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB840u, 0x2DD0F8u, 0x2DD100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD100u;
label_2dd100:
    // 0x2dd100: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x2dd100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
label_2dd104:
    // 0x2dd104: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2dd104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2dd108:
    // 0x2dd108: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2dd10c:
    if (ctx->pc == 0x2DD10Cu) {
        ctx->pc = 0x2DD10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD108u;
        // 0x2dd10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD110u;
        goto label_2dd110;
    }
    ctx->pc = 0x2DD108u;
    {
        const bool branch_taken_0x2dd108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD108u;
        // 0x2dd10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd108) {
            ctx->pc = 0x2DD130u;
            goto label_2dd130;
        }
    }
    ctx->pc = 0x2DD110u;
label_2dd110:
    // 0x2dd110: 0xc074268  jal         func_1D09A0
label_2dd114:
    if (ctx->pc == 0x2DD114u) {
        ctx->pc = 0x2DD118u;
        goto label_2dd118;
    }
    ctx->pc = 0x2DD110u;
    SET_GPR_U32(ctx, 31, 0x2DD118u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x2DD110u, 0x2DD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD118u;
label_2dd118:
    // 0x2dd118: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dd118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dd11c:
    // 0x2dd11c: 0xc09d4d8  jal         func_275360
label_2dd120:
    if (ctx->pc == 0x2DD120u) {
        ctx->pc = 0x2DD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD11Cu;
        // 0x2dd120: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD124u;
        goto label_2dd124;
    }
    ctx->pc = 0x2DD11Cu;
    SET_GPR_U32(ctx, 31, 0x2DD124u);
    ctx->pc = 0x2DD120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD11Cu;
    // 0x2dd120: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DD11Cu, 0x2DD124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD124u;
label_2dd124:
    // 0x2dd124: 0x1000000c  b           . + 4 + (0xC << 2)
label_2dd128:
    if (ctx->pc == 0x2DD128u) {
        ctx->pc = 0x2DD128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD124u;
        // 0x2dd128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD12Cu;
        goto label_2dd12c;
    }
    ctx->pc = 0x2DD124u;
    {
        const bool branch_taken_0x2dd124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD124u;
        // 0x2dd128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd124) {
            ctx->pc = 0x2DD158u;
            goto label_2dd158;
        }
    }
    ctx->pc = 0x2DD12Cu;
label_2dd12c:
    // 0x2dd12c: 0x0  nop
    ctx->pc = 0x2dd12cu;
    // NOP
label_2dd130:
    // 0x2dd130: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2dd130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2dd134:
    // 0x2dd134: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dd134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dd138:
    // 0x2dd138: 0xc09d4d8  jal         func_275360
label_2dd13c:
    if (ctx->pc == 0x2DD13Cu) {
        ctx->pc = 0x2DD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD138u;
        // 0x2dd13c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD140u;
        goto label_2dd140;
    }
    ctx->pc = 0x2DD138u;
    SET_GPR_U32(ctx, 31, 0x2DD140u);
    ctx->pc = 0x2DD13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD138u;
    // 0x2dd13c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DD138u, 0x2DD140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD140u;
label_2dd140:
    // 0x2dd140: 0x10000005  b           . + 4 + (0x5 << 2)
label_2dd144:
    if (ctx->pc == 0x2DD144u) {
        ctx->pc = 0x2DD144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD140u;
        // 0x2dd144: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD148u;
        goto label_2dd148;
    }
    ctx->pc = 0x2DD140u;
    {
        const bool branch_taken_0x2dd140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD140u;
        // 0x2dd144: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd140) {
            ctx->pc = 0x2DD158u;
            goto label_2dd158;
        }
    }
    ctx->pc = 0x2DD148u;
label_2dd148:
    // 0x2dd148: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x2dd148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_2dd14c:
    // 0x2dd14c: 0xc09d4d8  jal         func_275360
label_2dd150:
    if (ctx->pc == 0x2DD150u) {
        ctx->pc = 0x2DD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD14Cu;
        // 0x2dd150: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD154u;
        goto label_2dd154;
    }
    ctx->pc = 0x2DD14Cu;
    SET_GPR_U32(ctx, 31, 0x2DD154u);
    ctx->pc = 0x2DD150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD14Cu;
    // 0x2dd150: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2DD14Cu, 0x2DD154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD154u;
label_2dd154:
    // 0x2dd154: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dd154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd158:
    // 0x2dd158: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2dd158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2dd15c:
    // 0x2dd15c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2dd15cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2dd160:
    // 0x2dd160: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2dd160u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2dd164:
    // 0x2dd164: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dd164u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2dd168:
    // 0x2dd168: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dd168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2dd16c:
    // 0x2dd16c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dd16cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2dd170:
    // 0x2dd170: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dd170u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dd174:
    // 0x2dd174: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd178:
    // 0x2dd178: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd17c:
    // 0x2dd17c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd17cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd180:
    // 0x2dd180: 0x3e00008  jr          $ra
label_2dd184:
    if (ctx->pc == 0x2DD184u) {
        ctx->pc = 0x2DD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD180u;
        // 0x2dd184: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD188u;
        goto label_fallthrough_0x2dd180;
    }
    ctx->pc = 0x2DD180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD180u;
        // 0x2dd184: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dd180:
    ctx->pc = 0x2DD188u;
}
