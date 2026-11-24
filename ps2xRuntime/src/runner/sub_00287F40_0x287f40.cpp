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

// Function: sub_00287F40
// Address: 0x287f40 - 0x288358
void sub_00287F40_0x287f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287F40_0x287f40");
#endif

    switch (ctx->pc) {
        case 0x287f40u: goto label_287f40;
        case 0x287f44u: goto label_287f44;
        case 0x287f48u: goto label_287f48;
        case 0x287f4cu: goto label_287f4c;
        case 0x287f50u: goto label_287f50;
        case 0x287f54u: goto label_287f54;
        case 0x287f58u: goto label_287f58;
        case 0x287f5cu: goto label_287f5c;
        case 0x287f60u: goto label_287f60;
        case 0x287f64u: goto label_287f64;
        case 0x287f68u: goto label_287f68;
        case 0x287f6cu: goto label_287f6c;
        case 0x287f70u: goto label_287f70;
        case 0x287f74u: goto label_287f74;
        case 0x287f78u: goto label_287f78;
        case 0x287f7cu: goto label_287f7c;
        case 0x287f80u: goto label_287f80;
        case 0x287f84u: goto label_287f84;
        case 0x287f88u: goto label_287f88;
        case 0x287f8cu: goto label_287f8c;
        case 0x287f90u: goto label_287f90;
        case 0x287f94u: goto label_287f94;
        case 0x287f98u: goto label_287f98;
        case 0x287f9cu: goto label_287f9c;
        case 0x287fa0u: goto label_287fa0;
        case 0x287fa4u: goto label_287fa4;
        case 0x287fa8u: goto label_287fa8;
        case 0x287facu: goto label_287fac;
        case 0x287fb0u: goto label_287fb0;
        case 0x287fb4u: goto label_287fb4;
        case 0x287fb8u: goto label_287fb8;
        case 0x287fbcu: goto label_287fbc;
        case 0x287fc0u: goto label_287fc0;
        case 0x287fc4u: goto label_287fc4;
        case 0x287fc8u: goto label_287fc8;
        case 0x287fccu: goto label_287fcc;
        case 0x287fd0u: goto label_287fd0;
        case 0x287fd4u: goto label_287fd4;
        case 0x287fd8u: goto label_287fd8;
        case 0x287fdcu: goto label_287fdc;
        case 0x287fe0u: goto label_287fe0;
        case 0x287fe4u: goto label_287fe4;
        case 0x287fe8u: goto label_287fe8;
        case 0x287fecu: goto label_287fec;
        case 0x287ff0u: goto label_287ff0;
        case 0x287ff4u: goto label_287ff4;
        case 0x287ff8u: goto label_287ff8;
        case 0x287ffcu: goto label_287ffc;
        case 0x288000u: goto label_288000;
        case 0x288004u: goto label_288004;
        case 0x288008u: goto label_288008;
        case 0x28800cu: goto label_28800c;
        case 0x288010u: goto label_288010;
        case 0x288014u: goto label_288014;
        case 0x288018u: goto label_288018;
        case 0x28801cu: goto label_28801c;
        case 0x288020u: goto label_288020;
        case 0x288024u: goto label_288024;
        case 0x288028u: goto label_288028;
        case 0x28802cu: goto label_28802c;
        case 0x288030u: goto label_288030;
        case 0x288034u: goto label_288034;
        case 0x288038u: goto label_288038;
        case 0x28803cu: goto label_28803c;
        case 0x288040u: goto label_288040;
        case 0x288044u: goto label_288044;
        case 0x288048u: goto label_288048;
        case 0x28804cu: goto label_28804c;
        case 0x288050u: goto label_288050;
        case 0x288054u: goto label_288054;
        case 0x288058u: goto label_288058;
        case 0x28805cu: goto label_28805c;
        case 0x288060u: goto label_288060;
        case 0x288064u: goto label_288064;
        case 0x288068u: goto label_288068;
        case 0x28806cu: goto label_28806c;
        case 0x288070u: goto label_288070;
        case 0x288074u: goto label_288074;
        case 0x288078u: goto label_288078;
        case 0x28807cu: goto label_28807c;
        case 0x288080u: goto label_288080;
        case 0x288084u: goto label_288084;
        case 0x288088u: goto label_288088;
        case 0x28808cu: goto label_28808c;
        case 0x288090u: goto label_288090;
        case 0x288094u: goto label_288094;
        case 0x288098u: goto label_288098;
        case 0x28809cu: goto label_28809c;
        case 0x2880a0u: goto label_2880a0;
        case 0x2880a4u: goto label_2880a4;
        case 0x2880a8u: goto label_2880a8;
        case 0x2880acu: goto label_2880ac;
        case 0x2880b0u: goto label_2880b0;
        case 0x2880b4u: goto label_2880b4;
        case 0x2880b8u: goto label_2880b8;
        case 0x2880bcu: goto label_2880bc;
        case 0x2880c0u: goto label_2880c0;
        case 0x2880c4u: goto label_2880c4;
        case 0x2880c8u: goto label_2880c8;
        case 0x2880ccu: goto label_2880cc;
        case 0x2880d0u: goto label_2880d0;
        case 0x2880d4u: goto label_2880d4;
        case 0x2880d8u: goto label_2880d8;
        case 0x2880dcu: goto label_2880dc;
        case 0x2880e0u: goto label_2880e0;
        case 0x2880e4u: goto label_2880e4;
        case 0x2880e8u: goto label_2880e8;
        case 0x2880ecu: goto label_2880ec;
        case 0x2880f0u: goto label_2880f0;
        case 0x2880f4u: goto label_2880f4;
        case 0x2880f8u: goto label_2880f8;
        case 0x2880fcu: goto label_2880fc;
        case 0x288100u: goto label_288100;
        case 0x288104u: goto label_288104;
        case 0x288108u: goto label_288108;
        case 0x28810cu: goto label_28810c;
        case 0x288110u: goto label_288110;
        case 0x288114u: goto label_288114;
        case 0x288118u: goto label_288118;
        case 0x28811cu: goto label_28811c;
        case 0x288120u: goto label_288120;
        case 0x288124u: goto label_288124;
        case 0x288128u: goto label_288128;
        case 0x28812cu: goto label_28812c;
        case 0x288130u: goto label_288130;
        case 0x288134u: goto label_288134;
        case 0x288138u: goto label_288138;
        case 0x28813cu: goto label_28813c;
        case 0x288140u: goto label_288140;
        case 0x288144u: goto label_288144;
        case 0x288148u: goto label_288148;
        case 0x28814cu: goto label_28814c;
        case 0x288150u: goto label_288150;
        case 0x288154u: goto label_288154;
        case 0x288158u: goto label_288158;
        case 0x28815cu: goto label_28815c;
        case 0x288160u: goto label_288160;
        case 0x288164u: goto label_288164;
        case 0x288168u: goto label_288168;
        case 0x28816cu: goto label_28816c;
        case 0x288170u: goto label_288170;
        case 0x288174u: goto label_288174;
        case 0x288178u: goto label_288178;
        case 0x28817cu: goto label_28817c;
        case 0x288180u: goto label_288180;
        case 0x288184u: goto label_288184;
        case 0x288188u: goto label_288188;
        case 0x28818cu: goto label_28818c;
        case 0x288190u: goto label_288190;
        case 0x288194u: goto label_288194;
        case 0x288198u: goto label_288198;
        case 0x28819cu: goto label_28819c;
        case 0x2881a0u: goto label_2881a0;
        case 0x2881a4u: goto label_2881a4;
        case 0x2881a8u: goto label_2881a8;
        case 0x2881acu: goto label_2881ac;
        case 0x2881b0u: goto label_2881b0;
        case 0x2881b4u: goto label_2881b4;
        case 0x2881b8u: goto label_2881b8;
        case 0x2881bcu: goto label_2881bc;
        case 0x2881c0u: goto label_2881c0;
        case 0x2881c4u: goto label_2881c4;
        case 0x2881c8u: goto label_2881c8;
        case 0x2881ccu: goto label_2881cc;
        case 0x2881d0u: goto label_2881d0;
        case 0x2881d4u: goto label_2881d4;
        case 0x2881d8u: goto label_2881d8;
        case 0x2881dcu: goto label_2881dc;
        case 0x2881e0u: goto label_2881e0;
        case 0x2881e4u: goto label_2881e4;
        case 0x2881e8u: goto label_2881e8;
        case 0x2881ecu: goto label_2881ec;
        case 0x2881f0u: goto label_2881f0;
        case 0x2881f4u: goto label_2881f4;
        case 0x2881f8u: goto label_2881f8;
        case 0x2881fcu: goto label_2881fc;
        case 0x288200u: goto label_288200;
        case 0x288204u: goto label_288204;
        case 0x288208u: goto label_288208;
        case 0x28820cu: goto label_28820c;
        case 0x288210u: goto label_288210;
        case 0x288214u: goto label_288214;
        case 0x288218u: goto label_288218;
        case 0x28821cu: goto label_28821c;
        case 0x288220u: goto label_288220;
        case 0x288224u: goto label_288224;
        case 0x288228u: goto label_288228;
        case 0x28822cu: goto label_28822c;
        case 0x288230u: goto label_288230;
        case 0x288234u: goto label_288234;
        case 0x288238u: goto label_288238;
        case 0x28823cu: goto label_28823c;
        case 0x288240u: goto label_288240;
        case 0x288244u: goto label_288244;
        case 0x288248u: goto label_288248;
        case 0x28824cu: goto label_28824c;
        case 0x288250u: goto label_288250;
        case 0x288254u: goto label_288254;
        case 0x288258u: goto label_288258;
        case 0x28825cu: goto label_28825c;
        case 0x288260u: goto label_288260;
        case 0x288264u: goto label_288264;
        case 0x288268u: goto label_288268;
        case 0x28826cu: goto label_28826c;
        case 0x288270u: goto label_288270;
        case 0x288274u: goto label_288274;
        case 0x288278u: goto label_288278;
        case 0x28827cu: goto label_28827c;
        case 0x288280u: goto label_288280;
        case 0x288284u: goto label_288284;
        case 0x288288u: goto label_288288;
        case 0x28828cu: goto label_28828c;
        case 0x288290u: goto label_288290;
        case 0x288294u: goto label_288294;
        case 0x288298u: goto label_288298;
        case 0x28829cu: goto label_28829c;
        case 0x2882a0u: goto label_2882a0;
        case 0x2882a4u: goto label_2882a4;
        case 0x2882a8u: goto label_2882a8;
        case 0x2882acu: goto label_2882ac;
        case 0x2882b0u: goto label_2882b0;
        case 0x2882b4u: goto label_2882b4;
        case 0x2882b8u: goto label_2882b8;
        case 0x2882bcu: goto label_2882bc;
        case 0x2882c0u: goto label_2882c0;
        case 0x2882c4u: goto label_2882c4;
        case 0x2882c8u: goto label_2882c8;
        case 0x2882ccu: goto label_2882cc;
        case 0x2882d0u: goto label_2882d0;
        case 0x2882d4u: goto label_2882d4;
        case 0x2882d8u: goto label_2882d8;
        case 0x2882dcu: goto label_2882dc;
        case 0x2882e0u: goto label_2882e0;
        case 0x2882e4u: goto label_2882e4;
        case 0x2882e8u: goto label_2882e8;
        case 0x2882ecu: goto label_2882ec;
        case 0x2882f0u: goto label_2882f0;
        case 0x2882f4u: goto label_2882f4;
        case 0x2882f8u: goto label_2882f8;
        case 0x2882fcu: goto label_2882fc;
        case 0x288300u: goto label_288300;
        case 0x288304u: goto label_288304;
        case 0x288308u: goto label_288308;
        case 0x28830cu: goto label_28830c;
        case 0x288310u: goto label_288310;
        case 0x288314u: goto label_288314;
        case 0x288318u: goto label_288318;
        case 0x28831cu: goto label_28831c;
        case 0x288320u: goto label_288320;
        case 0x288324u: goto label_288324;
        case 0x288328u: goto label_288328;
        case 0x28832cu: goto label_28832c;
        case 0x288330u: goto label_288330;
        case 0x288334u: goto label_288334;
        case 0x288338u: goto label_288338;
        case 0x28833cu: goto label_28833c;
        case 0x288340u: goto label_288340;
        case 0x288344u: goto label_288344;
        case 0x288348u: goto label_288348;
        case 0x28834cu: goto label_28834c;
        case 0x288350u: goto label_288350;
        case 0x288354u: goto label_288354;
        default: break;
    }

    ctx->pc = 0x287f40u;

label_287f40:
    // 0x287f40: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x287f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_287f44:
    // 0x287f44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x287f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_287f48:
    // 0x287f48: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x287f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_287f4c:
    // 0x287f4c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x287f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_287f50:
    // 0x287f50: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x287f50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_287f54:
    // 0x287f54: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x287f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_287f58:
    // 0x287f58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x287f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_287f5c:
    // 0x287f5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x287f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_287f60:
    // 0x287f60: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x287f60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_287f64:
    // 0x287f64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x287f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_287f68:
    // 0x287f68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x287f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_287f6c:
    // 0x287f6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x287f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_287f70:
    // 0x287f70: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x287f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_287f74:
    // 0x287f74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x287f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_287f78:
    // 0x287f78: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x287f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_287f7c:
    // 0x287f7c: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x287f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
label_287f80:
    // 0x287f80: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x287f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
label_287f84:
    // 0x287f84: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x287f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_287f88:
    // 0x287f88: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x287f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
label_287f8c:
    // 0x287f8c: 0xc09d4d4  jal         func_275350
label_287f90:
    if (ctx->pc == 0x287F90u) {
        ctx->pc = 0x287F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F8Cu;
        // 0x287f90: 0xafab00ac  sw          $t3, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287F94u;
        goto label_287f94;
    }
    ctx->pc = 0x287F8Cu;
    SET_GPR_U32(ctx, 31, 0x287F94u);
    ctx->pc = 0x287F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F8Cu;
    // 0x287f90: 0xafab00ac  sw          $t3, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x287F8Cu, 0x287F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F94u;
label_287f94:
    // 0x287f94: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
label_287f98:
    if (ctx->pc == 0x287F98u) {
        ctx->pc = 0x287F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F94u;
        // 0x287f98: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287F9Cu;
        goto label_287f9c;
    }
    ctx->pc = 0x287F94u;
    {
        const bool branch_taken_0x287f94 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x287F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F94u;
        // 0x287f98: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f94) {
            ctx->pc = 0x287FB0u;
            goto label_287fb0;
        }
    }
    ctx->pc = 0x287F9Cu;
label_287f9c:
    // 0x287f9c: 0xc09d4d8  jal         func_275360
label_287fa0:
    if (ctx->pc == 0x287FA0u) {
        ctx->pc = 0x287FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F9Cu;
        // 0x287fa0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287FA4u;
        goto label_287fa4;
    }
    ctx->pc = 0x287F9Cu;
    SET_GPR_U32(ctx, 31, 0x287FA4u);
    ctx->pc = 0x287FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F9Cu;
    // 0x287fa0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x287F9Cu, 0x287FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FA4u;
label_287fa4:
    // 0x287fa4: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_287fa8:
    if (ctx->pc == 0x287FA8u) {
        ctx->pc = 0x287FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FA4u;
        // 0x287fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287FACu;
        goto label_287fac;
    }
    ctx->pc = 0x287FA4u;
    {
        const bool branch_taken_0x287fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FA4u;
        // 0x287fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287fa4) {
            ctx->pc = 0x288328u;
            goto label_288328;
        }
    }
    ctx->pc = 0x287FACu;
label_287fac:
    // 0x287fac: 0x0  nop
    ctx->pc = 0x287facu;
    // NOP
label_287fb0:
    // 0x287fb0: 0xc0741a4  jal         func_1D0690
label_287fb4:
    if (ctx->pc == 0x287FB4u) {
        ctx->pc = 0x287FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FB0u;
        // 0x287fb4: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287FB8u;
        goto label_287fb8;
    }
    ctx->pc = 0x287FB0u;
    SET_GPR_U32(ctx, 31, 0x287FB8u);
    ctx->pc = 0x287FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287FB0u;
    // 0x287fb4: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x287FB0u, 0x287FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FB8u;
label_287fb8:
    // 0x287fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287fbc:
    // 0x287fbc: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_287fc0:
    if (ctx->pc == 0x287FC0u) {
        ctx->pc = 0x287FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FBCu;
        // 0x287fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287FC4u;
        goto label_287fc4;
    }
    ctx->pc = 0x287FBCu;
    {
        const bool branch_taken_0x287fbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x287FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FBCu;
        // 0x287fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287fbc) {
            ctx->pc = 0x288000u;
            goto label_288000;
        }
    }
    ctx->pc = 0x287FC4u;
label_287fc4:
    // 0x287fc4: 0xc096b00  jal         func_25AC00
label_287fc8:
    if (ctx->pc == 0x287FC8u) {
        ctx->pc = 0x287FCCu;
        goto label_287fcc;
    }
    ctx->pc = 0x287FC4u;
    SET_GPR_U32(ctx, 31, 0x287FCCu);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x287FC4u, 0x287FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FCCu;
label_287fcc:
    // 0x287fcc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x287fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_287fd0:
    // 0x287fd0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x287fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_287fd4:
    // 0x287fd4: 0x246375c0  addiu       $v1, $v1, 0x75C0
    ctx->pc = 0x287fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30144));
label_287fd8:
    // 0x287fd8: 0x244275a0  addiu       $v0, $v0, 0x75A0
    ctx->pc = 0x287fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30112));
label_287fdc:
    // 0x287fdc: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x287fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_287fe0:
    // 0x287fe0: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x287fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_287fe4:
    // 0x287fe4: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x287fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_287fe8:
    // 0x287fe8: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x287fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_287fec:
    // 0x287fec: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x287fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_287ff0:
    // 0x287ff0: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x287ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_287ff4:
    // 0x287ff4: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x287ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_287ff8:
    // 0x287ff8: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x287ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_287ffc:
    // 0x287ffc: 0x0  nop
    ctx->pc = 0x287ffcu;
    // NOP
label_288000:
    // 0x288000: 0x120000c5  beqz        $s0, . + 4 + (0xC5 << 2)
label_288004:
    if (ctx->pc == 0x288004u) {
        ctx->pc = 0x288004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288000u;
        // 0x288004: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288008u;
        goto label_288008;
    }
    ctx->pc = 0x288000u;
    {
        const bool branch_taken_0x288000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x288004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288000u;
        // 0x288004: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288000) {
            ctx->pc = 0x288318u;
            goto label_288318;
        }
    }
    ctx->pc = 0x288008u;
label_288008:
    // 0x288008: 0xc09d4fc  jal         func_2753F0
label_28800c:
    if (ctx->pc == 0x28800Cu) {
        ctx->pc = 0x28800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288008u;
        // 0x28800c: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288010u;
        goto label_288010;
    }
    ctx->pc = 0x288008u;
    SET_GPR_U32(ctx, 31, 0x288010u);
    ctx->pc = 0x28800Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288008u;
    // 0x28800c: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x288008u, 0x288010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288010u;
label_288010:
    // 0x288010: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x288010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_288014:
    // 0x288014: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x288014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_288018:
    // 0x288018: 0xc09d524  jal         func_275490
label_28801c:
    if (ctx->pc == 0x28801Cu) {
        ctx->pc = 0x28801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288018u;
        // 0x28801c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288020u;
        goto label_288020;
    }
    ctx->pc = 0x288018u;
    SET_GPR_U32(ctx, 31, 0x288020u);
    ctx->pc = 0x28801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288018u;
    // 0x28801c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x288018u, 0x288020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288020u;
label_288020:
    // 0x288020: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288024:
    // 0x288024: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_288028:
    if (ctx->pc == 0x288028u) {
        ctx->pc = 0x28802Cu;
        goto label_28802c;
    }
    ctx->pc = 0x288024u;
    {
        const bool branch_taken_0x288024 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x288024) {
            ctx->pc = 0x288060u;
            goto label_288060;
        }
    }
    ctx->pc = 0x28802Cu;
label_28802c:
    // 0x28802c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_288030:
    if (ctx->pc == 0x288030u) {
        ctx->pc = 0x288034u;
        goto label_288034;
    }
    ctx->pc = 0x28802Cu;
    {
        const bool branch_taken_0x28802c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28802c) {
            ctx->pc = 0x288048u;
            goto label_288048;
        }
    }
    ctx->pc = 0x288034u;
label_288034:
    // 0x288034: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x288034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_288038:
    // 0x288038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28803c:
    // 0x28803c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x28803cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_288040:
    // 0x288040: 0x320f809  jalr        $t9
label_288044:
    if (ctx->pc == 0x288044u) {
        ctx->pc = 0x288044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288040u;
        // 0x288044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288048u;
        goto label_288048;
    }
    ctx->pc = 0x288040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x288048u);
        ctx->pc = 0x288044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288040u;
        // 0x288044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288040u, 0x288048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x288048u;
label_288048:
    // 0x288048: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x288048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_28804c:
    // 0x28804c: 0xc09d4d8  jal         func_275360
label_288050:
    if (ctx->pc == 0x288050u) {
        ctx->pc = 0x288050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28804Cu;
        // 0x288050: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288054u;
        goto label_288054;
    }
    ctx->pc = 0x28804Cu;
    SET_GPR_U32(ctx, 31, 0x288054u);
    ctx->pc = 0x288050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28804Cu;
    // 0x288050: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28804Cu, 0x288054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288054u;
label_288054:
    // 0x288054: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_288058:
    if (ctx->pc == 0x288058u) {
        ctx->pc = 0x288058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288054u;
        // 0x288058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28805Cu;
        goto label_28805c;
    }
    ctx->pc = 0x288054u;
    {
        const bool branch_taken_0x288054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288054u;
        // 0x288058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288054) {
            ctx->pc = 0x288328u;
            goto label_288328;
        }
    }
    ctx->pc = 0x28805Cu;
label_28805c:
    // 0x28805c: 0x0  nop
    ctx->pc = 0x28805cu;
    // NOP
label_288060:
    // 0x288060: 0x92260004  lbu         $a2, 0x4($s1)
    ctx->pc = 0x288060u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_288064:
    // 0x288064: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x288064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_288068:
    // 0x288068: 0xc09d524  jal         func_275490
label_28806c:
    if (ctx->pc == 0x28806Cu) {
        ctx->pc = 0x28806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288068u;
        // 0x28806c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288070u;
        goto label_288070;
    }
    ctx->pc = 0x288068u;
    SET_GPR_U32(ctx, 31, 0x288070u);
    ctx->pc = 0x28806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288068u;
    // 0x28806c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x288068u, 0x288070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288070u;
label_288070:
    // 0x288070: 0x92260006  lbu         $a2, 0x6($s1)
    ctx->pc = 0x288070u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_288074:
    // 0x288074: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x288074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_288078:
    // 0x288078: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x288078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_28807c:
    // 0x28807c: 0xc09d524  jal         func_275490
label_288080:
    if (ctx->pc == 0x288080u) {
        ctx->pc = 0x288080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28807Cu;
        // 0x288080: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288084u;
        goto label_288084;
    }
    ctx->pc = 0x28807Cu;
    SET_GPR_U32(ctx, 31, 0x288084u);
    ctx->pc = 0x288080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28807Cu;
    // 0x288080: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x28807Cu, 0x288084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288084u;
label_288084:
    // 0x288084: 0x92260008  lbu         $a2, 0x8($s1)
    ctx->pc = 0x288084u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_288088:
    // 0x288088: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x288088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28808c:
    // 0x28808c: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x28808cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_288090:
    // 0x288090: 0xc09d524  jal         func_275490
label_288094:
    if (ctx->pc == 0x288094u) {
        ctx->pc = 0x288094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288090u;
        // 0x288094: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288098u;
        goto label_288098;
    }
    ctx->pc = 0x288090u;
    SET_GPR_U32(ctx, 31, 0x288098u);
    ctx->pc = 0x288094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288090u;
    // 0x288094: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x288090u, 0x288098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288098u;
label_288098:
    // 0x288098: 0x92260005  lbu         $a2, 0x5($s1)
    ctx->pc = 0x288098u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_28809c:
    // 0x28809c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28809cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2880a0:
    // 0x2880a0: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2880a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2880a4:
    // 0x2880a4: 0xc09d524  jal         func_275490
label_2880a8:
    if (ctx->pc == 0x2880A8u) {
        ctx->pc = 0x2880A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2880A4u;
        // 0x2880a8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2880ACu;
        goto label_2880ac;
    }
    ctx->pc = 0x2880A4u;
    SET_GPR_U32(ctx, 31, 0x2880ACu);
    ctx->pc = 0x2880A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2880A4u;
    // 0x2880a8: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2880A4u, 0x2880ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2880ACu;
label_2880ac:
    // 0x2880ac: 0x92260007  lbu         $a2, 0x7($s1)
    ctx->pc = 0x2880acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_2880b0:
    // 0x2880b0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2880b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2880b4:
    // 0x2880b4: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2880b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2880b8:
    // 0x2880b8: 0xc09d524  jal         func_275490
label_2880bc:
    if (ctx->pc == 0x2880BCu) {
        ctx->pc = 0x2880BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2880B8u;
        // 0x2880bc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2880C0u;
        goto label_2880c0;
    }
    ctx->pc = 0x2880B8u;
    SET_GPR_U32(ctx, 31, 0x2880C0u);
    ctx->pc = 0x2880BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2880B8u;
    // 0x2880bc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2880B8u, 0x2880C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2880C0u;
label_2880c0:
    // 0x2880c0: 0x92260009  lbu         $a2, 0x9($s1)
    ctx->pc = 0x2880c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
label_2880c4:
    // 0x2880c4: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2880c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2880c8:
    // 0x2880c8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2880c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2880cc:
    // 0x2880cc: 0xc09d524  jal         func_275490
label_2880d0:
    if (ctx->pc == 0x2880D0u) {
        ctx->pc = 0x2880D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2880CCu;
        // 0x2880d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2880D4u;
        goto label_2880d4;
    }
    ctx->pc = 0x2880CCu;
    SET_GPR_U32(ctx, 31, 0x2880D4u);
    ctx->pc = 0x2880D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2880CCu;
    // 0x2880d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2880CCu, 0x2880D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2880D4u;
label_2880d4:
    // 0x2880d4: 0x8eab004c  lw          $t3, 0x4C($s5)
    ctx->pc = 0x2880d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_2880d8:
    // 0x2880d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2880d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2880dc:
    // 0x2880dc: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x2880dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_2880e0:
    // 0x2880e0: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x2880e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2880e4:
    // 0x2880e4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2880e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2880e8:
    // 0x2880e8: 0x8fa800b4  lw          $t0, 0xB4($sp)
    ctx->pc = 0x2880e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2880ec:
    // 0x2880ec: 0x8fa900b0  lw          $t1, 0xB0($sp)
    ctx->pc = 0x2880ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2880f0:
    // 0x2880f0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2880f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2880f4:
    // 0x2880f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2880f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2880f8:
    // 0x2880f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2880f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2880fc:
    // 0x2880fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2880fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_288100:
    // 0x288100: 0x8d620094  lw          $v0, 0x94($t3)
    ctx->pc = 0x288100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 148)));
label_288104:
    // 0x288104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x288104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_288108:
    // 0x288108: 0xc096b38  jal         func_25ACE0
label_28810c:
    if (ctx->pc == 0x28810Cu) {
        ctx->pc = 0x28810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288108u;
        // 0x28810c: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288110u;
        goto label_288110;
    }
    ctx->pc = 0x288108u;
    SET_GPR_U32(ctx, 31, 0x288110u);
    ctx->pc = 0x28810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288108u;
    // 0x28810c: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x288108u, 0x288110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288110u;
label_288110:
    // 0x288110: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x288110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_288114:
    // 0x288114: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x288114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_288118:
    // 0x288118: 0x26050084  addiu       $a1, $s0, 0x84
    ctx->pc = 0x288118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_28811c:
    // 0x28811c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28811cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_288120:
    // 0x288120: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x288120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_288124:
    // 0x288124: 0xa2020050  sb          $v0, 0x50($s0)
    ctx->pc = 0x288124u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 2));
label_288128:
    // 0x288128: 0xa600005a  sh          $zero, 0x5A($s0)
    ctx->pc = 0x288128u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 0));
label_28812c:
    // 0x28812c: 0xa6000058  sh          $zero, 0x58($s0)
    ctx->pc = 0x28812cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 0));
label_288130:
    // 0x288130: 0xa6000056  sh          $zero, 0x56($s0)
    ctx->pc = 0x288130u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 0));
label_288134:
    // 0x288134: 0xa2000051  sb          $zero, 0x51($s0)
    ctx->pc = 0x288134u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 0));
label_288138:
    // 0x288138: 0x87a200c0  lh          $v0, 0xC0($sp)
    ctx->pc = 0x288138u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
label_28813c:
    // 0x28813c: 0xa6020082  sh          $v0, 0x82($s0)
    ctx->pc = 0x28813cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
label_288140:
    // 0x288140: 0xa2000080  sb          $zero, 0x80($s0)
    ctx->pc = 0x288140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 0));
label_288144:
    // 0x288144: 0xa2000081  sb          $zero, 0x81($s0)
    ctx->pc = 0x288144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 0));
label_288148:
    // 0x288148: 0xa21e0088  sb          $fp, 0x88($s0)
    ctx->pc = 0x288148u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 136), (uint8_t)GPR_U32(ctx, 30));
label_28814c:
    // 0x28814c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x28814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_288150:
    // 0x288150: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x288150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_288154:
    // 0x288154: 0xc096cb8  jal         func_25B2E0
label_288158:
    if (ctx->pc == 0x288158u) {
        ctx->pc = 0x288158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288154u;
        // 0x288158: 0x7e020070  sq          $v0, 0x70($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28815Cu;
        goto label_28815c;
    }
    ctx->pc = 0x288154u;
    SET_GPR_U32(ctx, 31, 0x28815Cu);
    ctx->pc = 0x288158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288154u;
    // 0x288158: 0x7e020070  sq          $v0, 0x70($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x288154u, 0x28815Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28815Cu;
label_28815c:
    // 0x28815c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_288160:
    if (ctx->pc == 0x288160u) {
        ctx->pc = 0x288164u;
        goto label_288164;
    }
    ctx->pc = 0x28815Cu;
    {
        const bool branch_taken_0x28815c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28815c) {
            ctx->pc = 0x288168u;
            goto label_288168;
        }
    }
    ctx->pc = 0x288164u;
label_288164:
    // 0x288164: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x288164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_288168:
    // 0x288168: 0xae14008c  sw          $s4, 0x8C($s0)
    ctx->pc = 0x288168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 20));
label_28816c:
    // 0x28816c: 0xae120094  sw          $s2, 0x94($s0)
    ctx->pc = 0x28816cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 18));
label_288170:
    // 0x288170: 0xae13009c  sw          $s3, 0x9C($s0)
    ctx->pc = 0x288170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 19));
label_288174:
    // 0x288174: 0xae1700a4  sw          $s7, 0xA4($s0)
    ctx->pc = 0x288174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 23));
label_288178:
    // 0x288178: 0xae1600ac  sw          $s6, 0xAC($s0)
    ctx->pc = 0x288178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 22));
label_28817c:
    // 0x28817c: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_288180:
    if (ctx->pc == 0x288180u) {
        ctx->pc = 0x288180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28817Cu;
        // 0x288180: 0xae1100b4  sw          $s1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288184u;
        goto label_288184;
    }
    ctx->pc = 0x28817Cu;
    {
        const bool branch_taken_0x28817c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x288180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28817Cu;
        // 0x288180: 0xae1100b4  sw          $s1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28817c) {
            ctx->pc = 0x2881C0u;
            goto label_2881c0;
        }
    }
    ctx->pc = 0x288184u;
label_288184:
    // 0x288184: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x288184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288188:
    // 0x288188: 0xc0a1238  jal         func_2848E0
label_28818c:
    if (ctx->pc == 0x28818Cu) {
        ctx->pc = 0x28818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288188u;
        // 0x28818c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288190u;
        goto label_288190;
    }
    ctx->pc = 0x288188u;
    SET_GPR_U32(ctx, 31, 0x288190u);
    ctx->pc = 0x28818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288188u;
    // 0x28818c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2848E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2848E0u, 0x288188u, 0x288190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288190u;
label_288190:
    // 0x288190: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x288190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_288194:
    // 0x288194: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x288194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_288198:
    // 0x288198: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28819c:
    if (ctx->pc == 0x28819Cu) {
        ctx->pc = 0x28819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288198u;
        // 0x28819c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2881A0u;
        goto label_2881a0;
    }
    ctx->pc = 0x288198u;
    {
        const bool branch_taken_0x288198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288198u;
        // 0x28819c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288198) {
            ctx->pc = 0x2881C0u;
            goto label_2881c0;
        }
    }
    ctx->pc = 0x2881A0u;
label_2881a0:
    // 0x2881a0: 0xc074268  jal         func_1D09A0
label_2881a4:
    if (ctx->pc == 0x2881A4u) {
        ctx->pc = 0x2881A8u;
        goto label_2881a8;
    }
    ctx->pc = 0x2881A0u;
    SET_GPR_U32(ctx, 31, 0x2881A8u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x2881A0u, 0x2881A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881A8u;
label_2881a8:
    // 0x2881a8: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2881a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2881ac:
    // 0x2881ac: 0xc09d4d8  jal         func_275360
label_2881b0:
    if (ctx->pc == 0x2881B0u) {
        ctx->pc = 0x2881B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881ACu;
        // 0x2881b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2881B4u;
        goto label_2881b4;
    }
    ctx->pc = 0x2881ACu;
    SET_GPR_U32(ctx, 31, 0x2881B4u);
    ctx->pc = 0x2881B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2881ACu;
    // 0x2881b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2881ACu, 0x2881B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881B4u;
label_2881b4:
    // 0x2881b4: 0x1000005c  b           . + 4 + (0x5C << 2)
label_2881b8:
    if (ctx->pc == 0x2881B8u) {
        ctx->pc = 0x2881B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881B4u;
        // 0x2881b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2881BCu;
        goto label_2881bc;
    }
    ctx->pc = 0x2881B4u;
    {
        const bool branch_taken_0x2881b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2881B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881B4u;
        // 0x2881b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881b4) {
            ctx->pc = 0x288328u;
            goto label_288328;
        }
    }
    ctx->pc = 0x2881BCu;
label_2881bc:
    // 0x2881bc: 0x0  nop
    ctx->pc = 0x2881bcu;
    // NOP
label_2881c0:
    // 0x2881c0: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_2881c4:
    if (ctx->pc == 0x2881C4u) {
        ctx->pc = 0x2881C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881C0u;
        // 0x2881c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2881C8u;
        goto label_2881c8;
    }
    ctx->pc = 0x2881C0u;
    {
        const bool branch_taken_0x2881c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2881C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881C0u;
        // 0x2881c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881c0) {
            ctx->pc = 0x288200u;
            goto label_288200;
        }
    }
    ctx->pc = 0x2881C8u;
label_2881c8:
    // 0x2881c8: 0xc0a14b0  jal         func_2852C0
label_2881cc:
    if (ctx->pc == 0x2881CCu) {
        ctx->pc = 0x2881CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881C8u;
        // 0x2881cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2881D0u;
        goto label_2881d0;
    }
    ctx->pc = 0x2881C8u;
    SET_GPR_U32(ctx, 31, 0x2881D0u);
    ctx->pc = 0x2881CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2881C8u;
    // 0x2881cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2852C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2852C0u, 0x2881C8u, 0x2881D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881D0u;
label_2881d0:
    // 0x2881d0: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x2881d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
label_2881d4:
    // 0x2881d4: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2881d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2881d8:
    // 0x2881d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2881dc:
    if (ctx->pc == 0x2881DCu) {
        ctx->pc = 0x2881DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881D8u;
        // 0x2881dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2881E0u;
        goto label_2881e0;
    }
    ctx->pc = 0x2881D8u;
    {
        const bool branch_taken_0x2881d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2881DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881D8u;
        // 0x2881dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881d8) {
            ctx->pc = 0x288200u;
            goto label_288200;
        }
    }
    ctx->pc = 0x2881E0u;
label_2881e0:
    // 0x2881e0: 0xc074268  jal         func_1D09A0
label_2881e4:
    if (ctx->pc == 0x2881E4u) {
        ctx->pc = 0x2881E8u;
        goto label_2881e8;
    }
    ctx->pc = 0x2881E0u;
    SET_GPR_U32(ctx, 31, 0x2881E8u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x2881E0u, 0x2881E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881E8u;
label_2881e8:
    // 0x2881e8: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2881e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2881ec:
    // 0x2881ec: 0xc09d4d8  jal         func_275360
label_2881f0:
    if (ctx->pc == 0x2881F0u) {
        ctx->pc = 0x2881F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881ECu;
        // 0x2881f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2881F4u;
        goto label_2881f4;
    }
    ctx->pc = 0x2881ECu;
    SET_GPR_U32(ctx, 31, 0x2881F4u);
    ctx->pc = 0x2881F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2881ECu;
    // 0x2881f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2881ECu, 0x2881F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2881F4u;
label_2881f4:
    // 0x2881f4: 0x1000004c  b           . + 4 + (0x4C << 2)
label_2881f8:
    if (ctx->pc == 0x2881F8u) {
        ctx->pc = 0x2881F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881F4u;
        // 0x2881f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2881FCu;
        goto label_2881fc;
    }
    ctx->pc = 0x2881F4u;
    {
        const bool branch_taken_0x2881f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2881F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2881F4u;
        // 0x2881f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2881f4) {
            ctx->pc = 0x288328u;
            goto label_288328;
        }
    }
    ctx->pc = 0x2881FCu;
label_2881fc:
    // 0x2881fc: 0x0  nop
    ctx->pc = 0x2881fcu;
    // NOP
label_288200:
    // 0x288200: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_288204:
    if (ctx->pc == 0x288204u) {
        ctx->pc = 0x288204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288200u;
        // 0x288204: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288208u;
        goto label_288208;
    }
    ctx->pc = 0x288200u;
    {
        const bool branch_taken_0x288200 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x288204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288200u;
        // 0x288204: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288200) {
            ctx->pc = 0x288240u;
            goto label_288240;
        }
    }
    ctx->pc = 0x288208u;
label_288208:
    // 0x288208: 0xc0a1730  jal         func_285CC0
label_28820c:
    if (ctx->pc == 0x28820Cu) {
        ctx->pc = 0x28820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288208u;
        // 0x28820c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288210u;
        goto label_288210;
    }
    ctx->pc = 0x288208u;
    SET_GPR_U32(ctx, 31, 0x288210u);
    ctx->pc = 0x28820Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288208u;
    // 0x28820c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CC0u, 0x288208u, 0x288210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288210u;
label_288210:
    // 0x288210: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x288210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_288214:
    // 0x288214: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x288214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_288218:
    // 0x288218: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28821c:
    if (ctx->pc == 0x28821Cu) {
        ctx->pc = 0x28821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288218u;
        // 0x28821c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288220u;
        goto label_288220;
    }
    ctx->pc = 0x288218u;
    {
        const bool branch_taken_0x288218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288218u;
        // 0x28821c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288218) {
            ctx->pc = 0x288240u;
            goto label_288240;
        }
    }
    ctx->pc = 0x288220u;
label_288220:
    // 0x288220: 0xc074268  jal         func_1D09A0
label_288224:
    if (ctx->pc == 0x288224u) {
        ctx->pc = 0x288228u;
        goto label_288228;
    }
    ctx->pc = 0x288220u;
    SET_GPR_U32(ctx, 31, 0x288228u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x288220u, 0x288228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288228u;
label_288228:
    // 0x288228: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x288228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_28822c:
    // 0x28822c: 0xc09d4d8  jal         func_275360
label_288230:
    if (ctx->pc == 0x288230u) {
        ctx->pc = 0x288230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28822Cu;
        // 0x288230: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288234u;
        goto label_288234;
    }
    ctx->pc = 0x28822Cu;
    SET_GPR_U32(ctx, 31, 0x288234u);
    ctx->pc = 0x288230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28822Cu;
    // 0x288230: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28822Cu, 0x288234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288234u;
label_288234:
    // 0x288234: 0x1000003c  b           . + 4 + (0x3C << 2)
label_288238:
    if (ctx->pc == 0x288238u) {
        ctx->pc = 0x288238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288234u;
        // 0x288238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28823Cu;
        goto label_28823c;
    }
    ctx->pc = 0x288234u;
    {
        const bool branch_taken_0x288234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288234u;
        // 0x288238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288234) {
            ctx->pc = 0x288328u;
            goto label_288328;
        }
    }
    ctx->pc = 0x28823Cu;
label_28823c:
    // 0x28823c: 0x0  nop
    ctx->pc = 0x28823cu;
    // NOP
label_288240:
    // 0x288240: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
label_288244:
    if (ctx->pc == 0x288244u) {
        ctx->pc = 0x288244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288240u;
        // 0x288244: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288248u;
        goto label_288248;
    }
    ctx->pc = 0x288240u;
    {
        const bool branch_taken_0x288240 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x288244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288240u;
        // 0x288244: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288240) {
            ctx->pc = 0x288280u;
            goto label_288280;
        }
    }
    ctx->pc = 0x288248u;
label_288248:
    // 0x288248: 0xc0a1238  jal         func_2848E0
label_28824c:
    if (ctx->pc == 0x28824Cu) {
        ctx->pc = 0x28824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288248u;
        // 0x28824c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288250u;
        goto label_288250;
    }
    ctx->pc = 0x288248u;
    SET_GPR_U32(ctx, 31, 0x288250u);
    ctx->pc = 0x28824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288248u;
    // 0x28824c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2848E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2848E0u, 0x288248u, 0x288250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288250u;
label_288250:
    // 0x288250: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x288250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_288254:
    // 0x288254: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x288254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_288258:
    // 0x288258: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28825c:
    if (ctx->pc == 0x28825Cu) {
        ctx->pc = 0x28825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288258u;
        // 0x28825c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288260u;
        goto label_288260;
    }
    ctx->pc = 0x288258u;
    {
        const bool branch_taken_0x288258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288258u;
        // 0x28825c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288258) {
            ctx->pc = 0x288280u;
            goto label_288280;
        }
    }
    ctx->pc = 0x288260u;
label_288260:
    // 0x288260: 0xc074268  jal         func_1D09A0
label_288264:
    if (ctx->pc == 0x288264u) {
        ctx->pc = 0x288268u;
        goto label_288268;
    }
    ctx->pc = 0x288260u;
    SET_GPR_U32(ctx, 31, 0x288268u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x288260u, 0x288268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288268u;
label_288268:
    // 0x288268: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x288268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_28826c:
    // 0x28826c: 0xc09d4d8  jal         func_275360
label_288270:
    if (ctx->pc == 0x288270u) {
        ctx->pc = 0x288270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28826Cu;
        // 0x288270: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288274u;
        goto label_288274;
    }
    ctx->pc = 0x28826Cu;
    SET_GPR_U32(ctx, 31, 0x288274u);
    ctx->pc = 0x288270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28826Cu;
    // 0x288270: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28826Cu, 0x288274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288274u;
label_288274:
    // 0x288274: 0x1000002c  b           . + 4 + (0x2C << 2)
label_288278:
    if (ctx->pc == 0x288278u) {
        ctx->pc = 0x288278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288274u;
        // 0x288278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28827Cu;
        goto label_28827c;
    }
    ctx->pc = 0x288274u;
    {
        const bool branch_taken_0x288274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288274u;
        // 0x288278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288274) {
            ctx->pc = 0x288328u;
            goto label_288328;
        }
    }
    ctx->pc = 0x28827Cu;
label_28827c:
    // 0x28827c: 0x0  nop
    ctx->pc = 0x28827cu;
    // NOP
label_288280:
    // 0x288280: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
label_288284:
    if (ctx->pc == 0x288284u) {
        ctx->pc = 0x288284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288280u;
        // 0x288284: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288288u;
        goto label_288288;
    }
    ctx->pc = 0x288280u;
    {
        const bool branch_taken_0x288280 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x288284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288280u;
        // 0x288284: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288280) {
            ctx->pc = 0x2882C0u;
            goto label_2882c0;
        }
    }
    ctx->pc = 0x288288u;
label_288288:
    // 0x288288: 0xc0a14b0  jal         func_2852C0
label_28828c:
    if (ctx->pc == 0x28828Cu) {
        ctx->pc = 0x28828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288288u;
        // 0x28828c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288290u;
        goto label_288290;
    }
    ctx->pc = 0x288288u;
    SET_GPR_U32(ctx, 31, 0x288290u);
    ctx->pc = 0x28828Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288288u;
    // 0x28828c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2852C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2852C0u, 0x288288u, 0x288290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288290u;
label_288290:
    // 0x288290: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x288290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_288294:
    // 0x288294: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x288294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_288298:
    // 0x288298: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28829c:
    if (ctx->pc == 0x28829Cu) {
        ctx->pc = 0x28829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288298u;
        // 0x28829c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2882A0u;
        goto label_2882a0;
    }
    ctx->pc = 0x288298u;
    {
        const bool branch_taken_0x288298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288298u;
        // 0x28829c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288298) {
            ctx->pc = 0x2882C0u;
            goto label_2882c0;
        }
    }
    ctx->pc = 0x2882A0u;
label_2882a0:
    // 0x2882a0: 0xc074268  jal         func_1D09A0
label_2882a4:
    if (ctx->pc == 0x2882A4u) {
        ctx->pc = 0x2882A8u;
        goto label_2882a8;
    }
    ctx->pc = 0x2882A0u;
    SET_GPR_U32(ctx, 31, 0x2882A8u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x2882A0u, 0x2882A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882A8u;
label_2882a8:
    // 0x2882a8: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2882a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2882ac:
    // 0x2882ac: 0xc09d4d8  jal         func_275360
label_2882b0:
    if (ctx->pc == 0x2882B0u) {
        ctx->pc = 0x2882B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882ACu;
        // 0x2882b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2882B4u;
        goto label_2882b4;
    }
    ctx->pc = 0x2882ACu;
    SET_GPR_U32(ctx, 31, 0x2882B4u);
    ctx->pc = 0x2882B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2882ACu;
    // 0x2882b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2882ACu, 0x2882B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882B4u;
label_2882b4:
    // 0x2882b4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2882b8:
    if (ctx->pc == 0x2882B8u) {
        ctx->pc = 0x2882B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882B4u;
        // 0x2882b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2882BCu;
        goto label_2882bc;
    }
    ctx->pc = 0x2882B4u;
    {
        const bool branch_taken_0x2882b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2882B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882B4u;
        // 0x2882b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882b4) {
            ctx->pc = 0x288328u;
            goto label_288328;
        }
    }
    ctx->pc = 0x2882BCu;
label_2882bc:
    // 0x2882bc: 0x0  nop
    ctx->pc = 0x2882bcu;
    // NOP
label_2882c0:
    // 0x2882c0: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_2882c4:
    if (ctx->pc == 0x2882C4u) {
        ctx->pc = 0x2882C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882C0u;
        // 0x2882c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2882C8u;
        goto label_2882c8;
    }
    ctx->pc = 0x2882C0u;
    {
        const bool branch_taken_0x2882c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2882C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882C0u;
        // 0x2882c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882c0) {
            ctx->pc = 0x288300u;
            goto label_288300;
        }
    }
    ctx->pc = 0x2882C8u;
label_2882c8:
    // 0x2882c8: 0xc0a1730  jal         func_285CC0
label_2882cc:
    if (ctx->pc == 0x2882CCu) {
        ctx->pc = 0x2882CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882C8u;
        // 0x2882cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2882D0u;
        goto label_2882d0;
    }
    ctx->pc = 0x2882C8u;
    SET_GPR_U32(ctx, 31, 0x2882D0u);
    ctx->pc = 0x2882CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2882C8u;
    // 0x2882cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CC0u, 0x2882C8u, 0x2882D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882D0u;
label_2882d0:
    // 0x2882d0: 0xae0200b8  sw          $v0, 0xB8($s0)
    ctx->pc = 0x2882d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
label_2882d4:
    // 0x2882d4: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x2882d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_2882d8:
    // 0x2882d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2882dc:
    if (ctx->pc == 0x2882DCu) {
        ctx->pc = 0x2882DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882D8u;
        // 0x2882dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2882E0u;
        goto label_2882e0;
    }
    ctx->pc = 0x2882D8u;
    {
        const bool branch_taken_0x2882d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2882DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882D8u;
        // 0x2882dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882d8) {
            ctx->pc = 0x288300u;
            goto label_288300;
        }
    }
    ctx->pc = 0x2882E0u;
label_2882e0:
    // 0x2882e0: 0xc074268  jal         func_1D09A0
label_2882e4:
    if (ctx->pc == 0x2882E4u) {
        ctx->pc = 0x2882E8u;
        goto label_2882e8;
    }
    ctx->pc = 0x2882E0u;
    SET_GPR_U32(ctx, 31, 0x2882E8u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x2882E0u, 0x2882E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882E8u;
label_2882e8:
    // 0x2882e8: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2882e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2882ec:
    // 0x2882ec: 0xc09d4d8  jal         func_275360
label_2882f0:
    if (ctx->pc == 0x2882F0u) {
        ctx->pc = 0x2882F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882ECu;
        // 0x2882f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2882F4u;
        goto label_2882f4;
    }
    ctx->pc = 0x2882ECu;
    SET_GPR_U32(ctx, 31, 0x2882F4u);
    ctx->pc = 0x2882F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2882ECu;
    // 0x2882f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2882ECu, 0x2882F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2882F4u;
label_2882f4:
    // 0x2882f4: 0x1000000c  b           . + 4 + (0xC << 2)
label_2882f8:
    if (ctx->pc == 0x2882F8u) {
        ctx->pc = 0x2882F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882F4u;
        // 0x2882f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2882FCu;
        goto label_2882fc;
    }
    ctx->pc = 0x2882F4u;
    {
        const bool branch_taken_0x2882f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2882F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2882F4u;
        // 0x2882f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882f4) {
            ctx->pc = 0x288328u;
            goto label_288328;
        }
    }
    ctx->pc = 0x2882FCu;
label_2882fc:
    // 0x2882fc: 0x0  nop
    ctx->pc = 0x2882fcu;
    // NOP
label_288300:
    // 0x288300: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x288300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_288304:
    // 0x288304: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x288304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_288308:
    // 0x288308: 0xc09d4d8  jal         func_275360
label_28830c:
    if (ctx->pc == 0x28830Cu) {
        ctx->pc = 0x28830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288308u;
        // 0x28830c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288310u;
        goto label_288310;
    }
    ctx->pc = 0x288308u;
    SET_GPR_U32(ctx, 31, 0x288310u);
    ctx->pc = 0x28830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288308u;
    // 0x28830c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x288308u, 0x288310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288310u;
label_288310:
    // 0x288310: 0x10000005  b           . + 4 + (0x5 << 2)
label_288314:
    if (ctx->pc == 0x288314u) {
        ctx->pc = 0x288314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288310u;
        // 0x288314: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288318u;
        goto label_288318;
    }
    ctx->pc = 0x288310u;
    {
        const bool branch_taken_0x288310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288310u;
        // 0x288314: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288310) {
            ctx->pc = 0x288328u;
            goto label_288328;
        }
    }
    ctx->pc = 0x288318u;
label_288318:
    // 0x288318: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x288318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_28831c:
    // 0x28831c: 0xc09d4d8  jal         func_275360
label_288320:
    if (ctx->pc == 0x288320u) {
        ctx->pc = 0x288320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28831Cu;
        // 0x288320: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288324u;
        goto label_288324;
    }
    ctx->pc = 0x28831Cu;
    SET_GPR_U32(ctx, 31, 0x288324u);
    ctx->pc = 0x288320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28831Cu;
    // 0x288320: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28831Cu, 0x288324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288324u;
label_288324:
    // 0x288324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x288324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_288328:
    // 0x288328: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x288328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_28832c:
    // 0x28832c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28832cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_288330:
    // 0x288330: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x288330u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_288334:
    // 0x288334: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x288334u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_288338:
    // 0x288338: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x288338u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28833c:
    // 0x28833c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28833cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_288340:
    // 0x288340: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x288340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_288344:
    // 0x288344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x288344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_288348:
    // 0x288348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x288348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28834c:
    // 0x28834c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28834cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_288350:
    // 0x288350: 0x3e00008  jr          $ra
label_288354:
    if (ctx->pc == 0x288354u) {
        ctx->pc = 0x288354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288350u;
        // 0x288354: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x288358u;
        goto label_fallthrough_0x288350;
    }
    ctx->pc = 0x288350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288350u;
        // 0x288354: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x288350:
    ctx->pc = 0x288358u;
}
