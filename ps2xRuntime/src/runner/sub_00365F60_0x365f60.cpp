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

// Function: sub_00365F60
// Address: 0x365f60 - 0x3664b8
void sub_00365F60_0x365f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365F60_0x365f60");
#endif

    switch (ctx->pc) {
        case 0x365f60u: goto label_365f60;
        case 0x365f64u: goto label_365f64;
        case 0x365f68u: goto label_365f68;
        case 0x365f6cu: goto label_365f6c;
        case 0x365f70u: goto label_365f70;
        case 0x365f74u: goto label_365f74;
        case 0x365f78u: goto label_365f78;
        case 0x365f7cu: goto label_365f7c;
        case 0x365f80u: goto label_365f80;
        case 0x365f84u: goto label_365f84;
        case 0x365f88u: goto label_365f88;
        case 0x365f8cu: goto label_365f8c;
        case 0x365f90u: goto label_365f90;
        case 0x365f94u: goto label_365f94;
        case 0x365f98u: goto label_365f98;
        case 0x365f9cu: goto label_365f9c;
        case 0x365fa0u: goto label_365fa0;
        case 0x365fa4u: goto label_365fa4;
        case 0x365fa8u: goto label_365fa8;
        case 0x365facu: goto label_365fac;
        case 0x365fb0u: goto label_365fb0;
        case 0x365fb4u: goto label_365fb4;
        case 0x365fb8u: goto label_365fb8;
        case 0x365fbcu: goto label_365fbc;
        case 0x365fc0u: goto label_365fc0;
        case 0x365fc4u: goto label_365fc4;
        case 0x365fc8u: goto label_365fc8;
        case 0x365fccu: goto label_365fcc;
        case 0x365fd0u: goto label_365fd0;
        case 0x365fd4u: goto label_365fd4;
        case 0x365fd8u: goto label_365fd8;
        case 0x365fdcu: goto label_365fdc;
        case 0x365fe0u: goto label_365fe0;
        case 0x365fe4u: goto label_365fe4;
        case 0x365fe8u: goto label_365fe8;
        case 0x365fecu: goto label_365fec;
        case 0x365ff0u: goto label_365ff0;
        case 0x365ff4u: goto label_365ff4;
        case 0x365ff8u: goto label_365ff8;
        case 0x365ffcu: goto label_365ffc;
        case 0x366000u: goto label_366000;
        case 0x366004u: goto label_366004;
        case 0x366008u: goto label_366008;
        case 0x36600cu: goto label_36600c;
        case 0x366010u: goto label_366010;
        case 0x366014u: goto label_366014;
        case 0x366018u: goto label_366018;
        case 0x36601cu: goto label_36601c;
        case 0x366020u: goto label_366020;
        case 0x366024u: goto label_366024;
        case 0x366028u: goto label_366028;
        case 0x36602cu: goto label_36602c;
        case 0x366030u: goto label_366030;
        case 0x366034u: goto label_366034;
        case 0x366038u: goto label_366038;
        case 0x36603cu: goto label_36603c;
        case 0x366040u: goto label_366040;
        case 0x366044u: goto label_366044;
        case 0x366048u: goto label_366048;
        case 0x36604cu: goto label_36604c;
        case 0x366050u: goto label_366050;
        case 0x366054u: goto label_366054;
        case 0x366058u: goto label_366058;
        case 0x36605cu: goto label_36605c;
        case 0x366060u: goto label_366060;
        case 0x366064u: goto label_366064;
        case 0x366068u: goto label_366068;
        case 0x36606cu: goto label_36606c;
        case 0x366070u: goto label_366070;
        case 0x366074u: goto label_366074;
        case 0x366078u: goto label_366078;
        case 0x36607cu: goto label_36607c;
        case 0x366080u: goto label_366080;
        case 0x366084u: goto label_366084;
        case 0x366088u: goto label_366088;
        case 0x36608cu: goto label_36608c;
        case 0x366090u: goto label_366090;
        case 0x366094u: goto label_366094;
        case 0x366098u: goto label_366098;
        case 0x36609cu: goto label_36609c;
        case 0x3660a0u: goto label_3660a0;
        case 0x3660a4u: goto label_3660a4;
        case 0x3660a8u: goto label_3660a8;
        case 0x3660acu: goto label_3660ac;
        case 0x3660b0u: goto label_3660b0;
        case 0x3660b4u: goto label_3660b4;
        case 0x3660b8u: goto label_3660b8;
        case 0x3660bcu: goto label_3660bc;
        case 0x3660c0u: goto label_3660c0;
        case 0x3660c4u: goto label_3660c4;
        case 0x3660c8u: goto label_3660c8;
        case 0x3660ccu: goto label_3660cc;
        case 0x3660d0u: goto label_3660d0;
        case 0x3660d4u: goto label_3660d4;
        case 0x3660d8u: goto label_3660d8;
        case 0x3660dcu: goto label_3660dc;
        case 0x3660e0u: goto label_3660e0;
        case 0x3660e4u: goto label_3660e4;
        case 0x3660e8u: goto label_3660e8;
        case 0x3660ecu: goto label_3660ec;
        case 0x3660f0u: goto label_3660f0;
        case 0x3660f4u: goto label_3660f4;
        case 0x3660f8u: goto label_3660f8;
        case 0x3660fcu: goto label_3660fc;
        case 0x366100u: goto label_366100;
        case 0x366104u: goto label_366104;
        case 0x366108u: goto label_366108;
        case 0x36610cu: goto label_36610c;
        case 0x366110u: goto label_366110;
        case 0x366114u: goto label_366114;
        case 0x366118u: goto label_366118;
        case 0x36611cu: goto label_36611c;
        case 0x366120u: goto label_366120;
        case 0x366124u: goto label_366124;
        case 0x366128u: goto label_366128;
        case 0x36612cu: goto label_36612c;
        case 0x366130u: goto label_366130;
        case 0x366134u: goto label_366134;
        case 0x366138u: goto label_366138;
        case 0x36613cu: goto label_36613c;
        case 0x366140u: goto label_366140;
        case 0x366144u: goto label_366144;
        case 0x366148u: goto label_366148;
        case 0x36614cu: goto label_36614c;
        case 0x366150u: goto label_366150;
        case 0x366154u: goto label_366154;
        case 0x366158u: goto label_366158;
        case 0x36615cu: goto label_36615c;
        case 0x366160u: goto label_366160;
        case 0x366164u: goto label_366164;
        case 0x366168u: goto label_366168;
        case 0x36616cu: goto label_36616c;
        case 0x366170u: goto label_366170;
        case 0x366174u: goto label_366174;
        case 0x366178u: goto label_366178;
        case 0x36617cu: goto label_36617c;
        case 0x366180u: goto label_366180;
        case 0x366184u: goto label_366184;
        case 0x366188u: goto label_366188;
        case 0x36618cu: goto label_36618c;
        case 0x366190u: goto label_366190;
        case 0x366194u: goto label_366194;
        case 0x366198u: goto label_366198;
        case 0x36619cu: goto label_36619c;
        case 0x3661a0u: goto label_3661a0;
        case 0x3661a4u: goto label_3661a4;
        case 0x3661a8u: goto label_3661a8;
        case 0x3661acu: goto label_3661ac;
        case 0x3661b0u: goto label_3661b0;
        case 0x3661b4u: goto label_3661b4;
        case 0x3661b8u: goto label_3661b8;
        case 0x3661bcu: goto label_3661bc;
        case 0x3661c0u: goto label_3661c0;
        case 0x3661c4u: goto label_3661c4;
        case 0x3661c8u: goto label_3661c8;
        case 0x3661ccu: goto label_3661cc;
        case 0x3661d0u: goto label_3661d0;
        case 0x3661d4u: goto label_3661d4;
        case 0x3661d8u: goto label_3661d8;
        case 0x3661dcu: goto label_3661dc;
        case 0x3661e0u: goto label_3661e0;
        case 0x3661e4u: goto label_3661e4;
        case 0x3661e8u: goto label_3661e8;
        case 0x3661ecu: goto label_3661ec;
        case 0x3661f0u: goto label_3661f0;
        case 0x3661f4u: goto label_3661f4;
        case 0x3661f8u: goto label_3661f8;
        case 0x3661fcu: goto label_3661fc;
        case 0x366200u: goto label_366200;
        case 0x366204u: goto label_366204;
        case 0x366208u: goto label_366208;
        case 0x36620cu: goto label_36620c;
        case 0x366210u: goto label_366210;
        case 0x366214u: goto label_366214;
        case 0x366218u: goto label_366218;
        case 0x36621cu: goto label_36621c;
        case 0x366220u: goto label_366220;
        case 0x366224u: goto label_366224;
        case 0x366228u: goto label_366228;
        case 0x36622cu: goto label_36622c;
        case 0x366230u: goto label_366230;
        case 0x366234u: goto label_366234;
        case 0x366238u: goto label_366238;
        case 0x36623cu: goto label_36623c;
        case 0x366240u: goto label_366240;
        case 0x366244u: goto label_366244;
        case 0x366248u: goto label_366248;
        case 0x36624cu: goto label_36624c;
        case 0x366250u: goto label_366250;
        case 0x366254u: goto label_366254;
        case 0x366258u: goto label_366258;
        case 0x36625cu: goto label_36625c;
        case 0x366260u: goto label_366260;
        case 0x366264u: goto label_366264;
        case 0x366268u: goto label_366268;
        case 0x36626cu: goto label_36626c;
        case 0x366270u: goto label_366270;
        case 0x366274u: goto label_366274;
        case 0x366278u: goto label_366278;
        case 0x36627cu: goto label_36627c;
        case 0x366280u: goto label_366280;
        case 0x366284u: goto label_366284;
        case 0x366288u: goto label_366288;
        case 0x36628cu: goto label_36628c;
        case 0x366290u: goto label_366290;
        case 0x366294u: goto label_366294;
        case 0x366298u: goto label_366298;
        case 0x36629cu: goto label_36629c;
        case 0x3662a0u: goto label_3662a0;
        case 0x3662a4u: goto label_3662a4;
        case 0x3662a8u: goto label_3662a8;
        case 0x3662acu: goto label_3662ac;
        case 0x3662b0u: goto label_3662b0;
        case 0x3662b4u: goto label_3662b4;
        case 0x3662b8u: goto label_3662b8;
        case 0x3662bcu: goto label_3662bc;
        case 0x3662c0u: goto label_3662c0;
        case 0x3662c4u: goto label_3662c4;
        case 0x3662c8u: goto label_3662c8;
        case 0x3662ccu: goto label_3662cc;
        case 0x3662d0u: goto label_3662d0;
        case 0x3662d4u: goto label_3662d4;
        case 0x3662d8u: goto label_3662d8;
        case 0x3662dcu: goto label_3662dc;
        case 0x3662e0u: goto label_3662e0;
        case 0x3662e4u: goto label_3662e4;
        case 0x3662e8u: goto label_3662e8;
        case 0x3662ecu: goto label_3662ec;
        case 0x3662f0u: goto label_3662f0;
        case 0x3662f4u: goto label_3662f4;
        case 0x3662f8u: goto label_3662f8;
        case 0x3662fcu: goto label_3662fc;
        case 0x366300u: goto label_366300;
        case 0x366304u: goto label_366304;
        case 0x366308u: goto label_366308;
        case 0x36630cu: goto label_36630c;
        case 0x366310u: goto label_366310;
        case 0x366314u: goto label_366314;
        case 0x366318u: goto label_366318;
        case 0x36631cu: goto label_36631c;
        case 0x366320u: goto label_366320;
        case 0x366324u: goto label_366324;
        case 0x366328u: goto label_366328;
        case 0x36632cu: goto label_36632c;
        case 0x366330u: goto label_366330;
        case 0x366334u: goto label_366334;
        case 0x366338u: goto label_366338;
        case 0x36633cu: goto label_36633c;
        case 0x366340u: goto label_366340;
        case 0x366344u: goto label_366344;
        case 0x366348u: goto label_366348;
        case 0x36634cu: goto label_36634c;
        case 0x366350u: goto label_366350;
        case 0x366354u: goto label_366354;
        case 0x366358u: goto label_366358;
        case 0x36635cu: goto label_36635c;
        case 0x366360u: goto label_366360;
        case 0x366364u: goto label_366364;
        case 0x366368u: goto label_366368;
        case 0x36636cu: goto label_36636c;
        case 0x366370u: goto label_366370;
        case 0x366374u: goto label_366374;
        case 0x366378u: goto label_366378;
        case 0x36637cu: goto label_36637c;
        case 0x366380u: goto label_366380;
        case 0x366384u: goto label_366384;
        case 0x366388u: goto label_366388;
        case 0x36638cu: goto label_36638c;
        case 0x366390u: goto label_366390;
        case 0x366394u: goto label_366394;
        case 0x366398u: goto label_366398;
        case 0x36639cu: goto label_36639c;
        case 0x3663a0u: goto label_3663a0;
        case 0x3663a4u: goto label_3663a4;
        case 0x3663a8u: goto label_3663a8;
        case 0x3663acu: goto label_3663ac;
        case 0x3663b0u: goto label_3663b0;
        case 0x3663b4u: goto label_3663b4;
        case 0x3663b8u: goto label_3663b8;
        case 0x3663bcu: goto label_3663bc;
        case 0x3663c0u: goto label_3663c0;
        case 0x3663c4u: goto label_3663c4;
        case 0x3663c8u: goto label_3663c8;
        case 0x3663ccu: goto label_3663cc;
        case 0x3663d0u: goto label_3663d0;
        case 0x3663d4u: goto label_3663d4;
        case 0x3663d8u: goto label_3663d8;
        case 0x3663dcu: goto label_3663dc;
        case 0x3663e0u: goto label_3663e0;
        case 0x3663e4u: goto label_3663e4;
        case 0x3663e8u: goto label_3663e8;
        case 0x3663ecu: goto label_3663ec;
        case 0x3663f0u: goto label_3663f0;
        case 0x3663f4u: goto label_3663f4;
        case 0x3663f8u: goto label_3663f8;
        case 0x3663fcu: goto label_3663fc;
        case 0x366400u: goto label_366400;
        case 0x366404u: goto label_366404;
        case 0x366408u: goto label_366408;
        case 0x36640cu: goto label_36640c;
        case 0x366410u: goto label_366410;
        case 0x366414u: goto label_366414;
        case 0x366418u: goto label_366418;
        case 0x36641cu: goto label_36641c;
        case 0x366420u: goto label_366420;
        case 0x366424u: goto label_366424;
        case 0x366428u: goto label_366428;
        case 0x36642cu: goto label_36642c;
        case 0x366430u: goto label_366430;
        case 0x366434u: goto label_366434;
        case 0x366438u: goto label_366438;
        case 0x36643cu: goto label_36643c;
        case 0x366440u: goto label_366440;
        case 0x366444u: goto label_366444;
        case 0x366448u: goto label_366448;
        case 0x36644cu: goto label_36644c;
        case 0x366450u: goto label_366450;
        case 0x366454u: goto label_366454;
        case 0x366458u: goto label_366458;
        case 0x36645cu: goto label_36645c;
        case 0x366460u: goto label_366460;
        case 0x366464u: goto label_366464;
        case 0x366468u: goto label_366468;
        case 0x36646cu: goto label_36646c;
        case 0x366470u: goto label_366470;
        case 0x366474u: goto label_366474;
        case 0x366478u: goto label_366478;
        case 0x36647cu: goto label_36647c;
        case 0x366480u: goto label_366480;
        case 0x366484u: goto label_366484;
        case 0x366488u: goto label_366488;
        case 0x36648cu: goto label_36648c;
        case 0x366490u: goto label_366490;
        case 0x366494u: goto label_366494;
        case 0x366498u: goto label_366498;
        case 0x36649cu: goto label_36649c;
        case 0x3664a0u: goto label_3664a0;
        case 0x3664a4u: goto label_3664a4;
        case 0x3664a8u: goto label_3664a8;
        case 0x3664acu: goto label_3664ac;
        case 0x3664b0u: goto label_3664b0;
        case 0x3664b4u: goto label_3664b4;
        default: break;
    }

    ctx->pc = 0x365f60u;

label_365f60:
    // 0x365f60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x365f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_365f64:
    // 0x365f64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x365f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_365f68:
    // 0x365f68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x365f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_365f6c:
    // 0x365f6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x365f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_365f70:
    // 0x365f70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x365f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_365f74:
    // 0x365f74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x365f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_365f78:
    // 0x365f78: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_365f7c:
    if (ctx->pc == 0x365F7Cu) {
        ctx->pc = 0x365F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365F78u;
        // 0x365f7c: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x365F80u;
        goto label_365f80;
    }
    ctx->pc = 0x365F78u;
    {
        const bool branch_taken_0x365f78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x365F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365F78u;
        // 0x365f7c: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x365f78) {
            ctx->pc = 0x365F90u;
            goto label_365f90;
        }
    }
    ctx->pc = 0x365F80u;
label_365f80:
    // 0x365f80: 0xc0c0830  jal         func_3020C0
label_365f84:
    if (ctx->pc == 0x365F84u) {
        ctx->pc = 0x365F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365F80u;
        // 0x365f84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365F88u;
        goto label_365f88;
    }
    ctx->pc = 0x365F80u;
    SET_GPR_U32(ctx, 31, 0x365F88u);
    ctx->pc = 0x365F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365F80u;
    // 0x365f84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x365F80u, 0x365F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365F88u;
label_365f88:
    // 0x365f88: 0x10000145  b           . + 4 + (0x145 << 2)
label_365f8c:
    if (ctx->pc == 0x365F8Cu) {
        ctx->pc = 0x365F90u;
        goto label_365f90;
    }
    ctx->pc = 0x365F88u;
    {
        const bool branch_taken_0x365f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365f88) {
            ctx->pc = 0x3664A0u;
            goto label_3664a0;
        }
    }
    ctx->pc = 0x365F90u;
label_365f90:
    // 0x365f90: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_365f94:
    if (ctx->pc == 0x365F94u) {
        ctx->pc = 0x365F98u;
        goto label_365f98;
    }
    ctx->pc = 0x365F90u;
    {
        const bool branch_taken_0x365f90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x365f90) {
            ctx->pc = 0x365FB8u;
            goto label_365fb8;
        }
    }
    ctx->pc = 0x365F98u;
label_365f98:
    // 0x365f98: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x365f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_365f9c:
    // 0x365f9c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x365f9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_365fa0:
    // 0x365fa0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_365fa4:
    if (ctx->pc == 0x365FA4u) {
        ctx->pc = 0x365FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365FA0u;
        // 0x365fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365FA8u;
        goto label_365fa8;
    }
    ctx->pc = 0x365FA0u;
    {
        const bool branch_taken_0x365fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x365FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365FA0u;
        // 0x365fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365fa0) {
            ctx->pc = 0x365FB8u;
            goto label_365fb8;
        }
    }
    ctx->pc = 0x365FA8u;
label_365fa8:
    // 0x365fa8: 0xc0c0830  jal         func_3020C0
label_365fac:
    if (ctx->pc == 0x365FACu) {
        ctx->pc = 0x365FB0u;
        goto label_365fb0;
    }
    ctx->pc = 0x365FA8u;
    SET_GPR_U32(ctx, 31, 0x365FB0u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x365FA8u, 0x365FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365FB0u;
label_365fb0:
    // 0x365fb0: 0x1000013b  b           . + 4 + (0x13B << 2)
label_365fb4:
    if (ctx->pc == 0x365FB4u) {
        ctx->pc = 0x365FB8u;
        goto label_365fb8;
    }
    ctx->pc = 0x365FB0u;
    {
        const bool branch_taken_0x365fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365fb0) {
            ctx->pc = 0x3664A0u;
            goto label_3664a0;
        }
    }
    ctx->pc = 0x365FB8u;
label_365fb8:
    // 0x365fb8: 0x92240521  lbu         $a0, 0x521($s1)
    ctx->pc = 0x365fb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_365fbc:
    // 0x365fbc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x365fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_365fc0:
    // 0x365fc0: 0x108300d7  beq         $a0, $v1, . + 4 + (0xD7 << 2)
label_365fc4:
    if (ctx->pc == 0x365FC4u) {
        ctx->pc = 0x365FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365FC0u;
        // 0x365fc4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365FC8u;
        goto label_365fc8;
    }
    ctx->pc = 0x365FC0u;
    {
        const bool branch_taken_0x365fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x365FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365FC0u;
        // 0x365fc4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365fc0) {
            ctx->pc = 0x366320u;
            goto label_366320;
        }
    }
    ctx->pc = 0x365FC8u;
label_365fc8:
    // 0x365fc8: 0x108300c5  beq         $a0, $v1, . + 4 + (0xC5 << 2)
label_365fcc:
    if (ctx->pc == 0x365FCCu) {
        ctx->pc = 0x365FD0u;
        goto label_365fd0;
    }
    ctx->pc = 0x365FC8u;
    {
        const bool branch_taken_0x365fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x365fc8) {
            ctx->pc = 0x3662E0u;
            goto label_3662e0;
        }
    }
    ctx->pc = 0x365FD0u;
label_365fd0:
    // 0x365fd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x365fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_365fd4:
    // 0x365fd4: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
label_365fd8:
    if (ctx->pc == 0x365FD8u) {
        ctx->pc = 0x365FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365FD4u;
        // 0x365fd8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365FDCu;
        goto label_365fdc;
    }
    ctx->pc = 0x365FD4u;
    {
        const bool branch_taken_0x365fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x365FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365FD4u;
        // 0x365fd8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365fd4) {
            ctx->pc = 0x3660E0u;
            goto label_3660e0;
        }
    }
    ctx->pc = 0x365FDCu;
label_365fdc:
    // 0x365fdc: 0x10830038  beq         $a0, $v1, . + 4 + (0x38 << 2)
label_365fe0:
    if (ctx->pc == 0x365FE0u) {
        ctx->pc = 0x365FE4u;
        goto label_365fe4;
    }
    ctx->pc = 0x365FDCu;
    {
        const bool branch_taken_0x365fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x365fdc) {
            ctx->pc = 0x3660C0u;
            goto label_3660c0;
        }
    }
    ctx->pc = 0x365FE4u;
label_365fe4:
    // 0x365fe4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_365fe8:
    if (ctx->pc == 0x365FE8u) {
        ctx->pc = 0x365FECu;
        goto label_365fec;
    }
    ctx->pc = 0x365FE4u;
    {
        const bool branch_taken_0x365fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x365fe4) {
            ctx->pc = 0x365FF8u;
            goto label_365ff8;
        }
    }
    ctx->pc = 0x365FECu;
label_365fec:
    // 0x365fec: 0x1000012c  b           . + 4 + (0x12C << 2)
label_365ff0:
    if (ctx->pc == 0x365FF0u) {
        ctx->pc = 0x365FF4u;
        goto label_365ff4;
    }
    ctx->pc = 0x365FECu;
    {
        const bool branch_taken_0x365fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365fec) {
            ctx->pc = 0x3664A0u;
            goto label_3664a0;
        }
    }
    ctx->pc = 0x365FF4u;
label_365ff4:
    // 0x365ff4: 0x0  nop
    ctx->pc = 0x365ff4u;
    // NOP
label_365ff8:
    // 0x365ff8: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_365ffc:
    if (ctx->pc == 0x365FFCu) {
        ctx->pc = 0x366000u;
        goto label_366000;
    }
    ctx->pc = 0x365FF8u;
    {
        const bool branch_taken_0x365ff8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x365ff8) {
            ctx->pc = 0x3660A0u;
            goto label_3660a0;
        }
    }
    ctx->pc = 0x366000u;
label_366000:
    // 0x366000: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x366000u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_366004:
    // 0x366004: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_366008:
    // 0x366008: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x366008u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_36600c:
    // 0x36600c: 0xc0aaa58  jal         func_2AA960
label_366010:
    if (ctx->pc == 0x366010u) {
        ctx->pc = 0x366010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36600Cu;
        // 0x366010: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366014u;
        goto label_366014;
    }
    ctx->pc = 0x36600Cu;
    SET_GPR_U32(ctx, 31, 0x366014u);
    ctx->pc = 0x366010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36600Cu;
    // 0x366010: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA960u, 0x36600Cu, 0x366014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366014u;
label_366014:
    // 0x366014: 0xae220594  sw          $v0, 0x594($s1)
    ctx->pc = 0x366014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1428), GPR_U32(ctx, 2));
label_366018:
    // 0x366018: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36601c:
    // 0x36601c: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x36601cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_366020:
    // 0x366020: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x366020u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_366024:
    // 0x366024: 0xc0aaa58  jal         func_2AA960
label_366028:
    if (ctx->pc == 0x366028u) {
        ctx->pc = 0x366028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366024u;
        // 0x366028: 0x26270560  addiu       $a3, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36602Cu;
        goto label_36602c;
    }
    ctx->pc = 0x366024u;
    SET_GPR_U32(ctx, 31, 0x36602Cu);
    ctx->pc = 0x366028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366024u;
    // 0x366028: 0x26270560  addiu       $a3, $s1, 0x560 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA960u, 0x366024u, 0x36602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36602Cu;
label_36602c:
    // 0x36602c: 0xae220598  sw          $v0, 0x598($s1)
    ctx->pc = 0x36602cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1432), GPR_U32(ctx, 2));
label_366030:
    // 0x366030: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_366034:
    // 0x366034: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x366034u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_366038:
    // 0x366038: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x366038u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_36603c:
    // 0x36603c: 0xc0aaa58  jal         func_2AA960
label_366040:
    if (ctx->pc == 0x366040u) {
        ctx->pc = 0x366040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36603Cu;
        // 0x366040: 0x26270570  addiu       $a3, $s1, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366044u;
        goto label_366044;
    }
    ctx->pc = 0x36603Cu;
    SET_GPR_U32(ctx, 31, 0x366044u);
    ctx->pc = 0x366040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36603Cu;
    // 0x366040: 0x26270570  addiu       $a3, $s1, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA960u, 0x36603Cu, 0x366044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366044u;
label_366044:
    // 0x366044: 0xae22059c  sw          $v0, 0x59C($s1)
    ctx->pc = 0x366044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1436), GPR_U32(ctx, 2));
label_366048:
    // 0x366048: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x366048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36604c:
    // 0x36604c: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x36604cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
label_366050:
    // 0x366050: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x366050u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_366054:
    // 0x366054: 0xc0aaa58  jal         func_2AA960
label_366058:
    if (ctx->pc == 0x366058u) {
        ctx->pc = 0x366058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366054u;
        // 0x366058: 0x26270580  addiu       $a3, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36605Cu;
        goto label_36605c;
    }
    ctx->pc = 0x366054u;
    SET_GPR_U32(ctx, 31, 0x36605Cu);
    ctx->pc = 0x366058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366054u;
    // 0x366058: 0x26270580  addiu       $a3, $s1, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA960u, 0x366054u, 0x36605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36605Cu;
label_36605c:
    // 0x36605c: 0xae2205a0  sw          $v0, 0x5A0($s1)
    ctx->pc = 0x36605cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 2));
label_366060:
    // 0x366060: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x366060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_366064:
    // 0x366064: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x366064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
label_366068:
    // 0x366068: 0x3c021d00  lui         $v0, 0x1D00
    ctx->pc = 0x366068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7424 << 16));
label_36606c:
    // 0x36606c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36606cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_366070:
    // 0x366070: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x366070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
label_366074:
    // 0x366074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366078:
    // 0x366078: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x366078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_36607c:
    // 0x36607c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36607cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366080:
    // 0x366080: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x366080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366084:
    // 0x366084: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x366084u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366088:
    // 0x366088: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x366088u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36608c:
    // 0x36608c: 0xc05e9e8  jal         func_17A7A0
label_366090:
    if (ctx->pc == 0x366090u) {
        ctx->pc = 0x366090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36608Cu;
        // 0x366090: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366094u;
        goto label_366094;
    }
    ctx->pc = 0x36608Cu;
    SET_GPR_U32(ctx, 31, 0x366094u);
    ctx->pc = 0x366090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36608Cu;
    // 0x366090: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36608Cu, 0x366094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366094u;
label_366094:
    // 0x366094: 0x10000006  b           . + 4 + (0x6 << 2)
label_366098:
    if (ctx->pc == 0x366098u) {
        ctx->pc = 0x36609Cu;
        goto label_36609c;
    }
    ctx->pc = 0x366094u;
    {
        const bool branch_taken_0x366094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366094) {
            ctx->pc = 0x3660B0u;
            goto label_3660b0;
        }
    }
    ctx->pc = 0x36609Cu;
label_36609c:
    // 0x36609c: 0x0  nop
    ctx->pc = 0x36609cu;
    // NOP
label_3660a0:
    // 0x3660a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3660a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3660a4:
    // 0x3660a4: 0xc0c0830  jal         func_3020C0
label_3660a8:
    if (ctx->pc == 0x3660A8u) {
        ctx->pc = 0x3660A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660A4u;
        // 0x3660a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3660ACu;
        goto label_3660ac;
    }
    ctx->pc = 0x3660A4u;
    SET_GPR_U32(ctx, 31, 0x3660ACu);
    ctx->pc = 0x3660A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3660A4u;
    // 0x3660a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3660A4u, 0x3660ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660ACu;
label_3660ac:
    // 0x3660ac: 0x0  nop
    ctx->pc = 0x3660acu;
    // NOP
label_3660b0:
    // 0x3660b0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3660b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3660b4:
    // 0x3660b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3660b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3660b8:
    // 0x3660b8: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_3660bc:
    if (ctx->pc == 0x3660BCu) {
        ctx->pc = 0x3660BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660B8u;
        // 0x3660bc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3660C0u;
        goto label_3660c0;
    }
    ctx->pc = 0x3660B8u;
    {
        const bool branch_taken_0x3660b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3660BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660B8u;
        // 0x3660bc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3660b8) {
            ctx->pc = 0x3664A0u;
            goto label_3664a0;
        }
    }
    ctx->pc = 0x3660C0u;
label_3660c0:
    // 0x3660c0: 0x86220526  lh          $v0, 0x526($s1)
    ctx->pc = 0x3660c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
label_3660c4:
    // 0x3660c4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3660c4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_3660c8:
    // 0x3660c8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3660c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_3660cc:
    // 0x3660cc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3660ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_3660d0:
    // 0x3660d0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3660d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_3660d4:
    // 0x3660d4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3660d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3660d8:
    // 0x3660d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3660d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3660dc:
    // 0x3660dc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3660dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3660e0:
    // 0x3660e0: 0xc096c80  jal         func_25B200
label_3660e4:
    if (ctx->pc == 0x3660E4u) {
        ctx->pc = 0x3660E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660E0u;
        // 0x3660e4: 0x8e240590  lw          $a0, 0x590($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3660E8u;
        goto label_3660e8;
    }
    ctx->pc = 0x3660E0u;
    SET_GPR_U32(ctx, 31, 0x3660E8u);
    ctx->pc = 0x3660E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3660E0u;
    // 0x3660e4: 0x8e240590  lw          $a0, 0x590($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3660E0u, 0x3660E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660E8u;
label_3660e8:
    // 0x3660e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3660e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3660ec:
    // 0x3660ec: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_3660f0:
    if (ctx->pc == 0x3660F0u) {
        ctx->pc = 0x3660F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660ECu;
        // 0x3660f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3660F4u;
        goto label_3660f4;
    }
    ctx->pc = 0x3660ECu;
    {
        const bool branch_taken_0x3660ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3660F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660ECu;
        // 0x3660f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3660ec) {
            ctx->pc = 0x366108u;
            goto label_366108;
        }
    }
    ctx->pc = 0x3660F4u;
label_3660f4:
    // 0x3660f4: 0xc0c0830  jal         func_3020C0
label_3660f8:
    if (ctx->pc == 0x3660F8u) {
        ctx->pc = 0x3660F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660F4u;
        // 0x3660f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3660FCu;
        goto label_3660fc;
    }
    ctx->pc = 0x3660F4u;
    SET_GPR_U32(ctx, 31, 0x3660FCu);
    ctx->pc = 0x3660F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3660F4u;
    // 0x3660f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3660F4u, 0x3660FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660FCu;
label_3660fc:
    // 0x3660fc: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_366100:
    if (ctx->pc == 0x366100u) {
        ctx->pc = 0x366104u;
        goto label_366104;
    }
    ctx->pc = 0x3660FCu;
    {
        const bool branch_taken_0x3660fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3660fc) {
            ctx->pc = 0x3664A0u;
            goto label_3664a0;
        }
    }
    ctx->pc = 0x366104u;
label_366104:
    // 0x366104: 0x0  nop
    ctx->pc = 0x366104u;
    // NOP
label_366108:
    // 0x366108: 0x86230512  lh          $v1, 0x512($s1)
    ctx->pc = 0x366108u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_36610c:
    // 0x36610c: 0x86270510  lh          $a3, 0x510($s1)
    ctx->pc = 0x36610cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_366110:
    // 0x366110: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x366110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_366114:
    // 0x366114: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x366114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_366118:
    // 0x366118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x366118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36611c:
    // 0x36611c: 0x922605aa  lbu         $a2, 0x5AA($s1)
    ctx->pc = 0x36611cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1450)));
label_366120:
    // 0x366120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_366124:
    // 0x366124: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x366124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_366128:
    // 0x366128: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x366128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_36612c:
    // 0x36612c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x36612cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_366130:
    // 0x366130: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x366130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_366134:
    // 0x366134: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x366134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_366138:
    // 0x366138: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x366138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_36613c:
    // 0x36613c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x36613cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_366140:
    // 0x366140: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x366140u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_366144:
    // 0x366144: 0x0  nop
    ctx->pc = 0x366144u;
    // NOP
label_366148:
    // 0x366148: 0x0  nop
    ctx->pc = 0x366148u;
    // NOP
label_36614c:
    // 0x36614c: 0x320f809  jalr        $t9
label_366150:
    if (ctx->pc == 0x366150u) {
        ctx->pc = 0x366150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36614Cu;
        // 0x366150: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x366154u;
        goto label_366154;
    }
    ctx->pc = 0x36614Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x366154u);
        ctx->pc = 0x366150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36614Cu;
        // 0x366150: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36614Cu, 0x366154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x366154u;
label_366154:
    // 0x366154: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x366154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_366158:
    // 0x366158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36615c:
    // 0x36615c: 0x922605ab  lbu         $a2, 0x5AB($s1)
    ctx->pc = 0x36615cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1451)));
label_366160:
    // 0x366160: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x366160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_366164:
    // 0x366164: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x366164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_366168:
    // 0x366168: 0x320f809  jalr        $t9
label_36616c:
    if (ctx->pc == 0x36616Cu) {
        ctx->pc = 0x36616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366168u;
        // 0x36616c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x366170u;
        goto label_366170;
    }
    ctx->pc = 0x366168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x366170u);
        ctx->pc = 0x36616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366168u;
        // 0x36616c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366168u, 0x366170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x366170u;
label_366170:
    // 0x366170: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x366170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_366174:
    // 0x366174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_366178:
    // 0x366178: 0x922605ac  lbu         $a2, 0x5AC($s1)
    ctx->pc = 0x366178u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1452)));
label_36617c:
    // 0x36617c: 0x26250570  addiu       $a1, $s1, 0x570
    ctx->pc = 0x36617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
label_366180:
    // 0x366180: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x366180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_366184:
    // 0x366184: 0x320f809  jalr        $t9
label_366188:
    if (ctx->pc == 0x366188u) {
        ctx->pc = 0x366188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366184u;
        // 0x366188: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36618Cu;
        goto label_36618c;
    }
    ctx->pc = 0x366184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36618Cu);
        ctx->pc = 0x366188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366184u;
        // 0x366188: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366184u, 0x36618Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36618Cu;
label_36618c:
    // 0x36618c: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x36618cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_366190:
    // 0x366190: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x366190u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_366194:
    // 0x366194: 0x922605ad  lbu         $a2, 0x5AD($s1)
    ctx->pc = 0x366194u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1453)));
label_366198:
    // 0x366198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36619c:
    // 0x36619c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x36619cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_3661a0:
    // 0x3661a0: 0x320f809  jalr        $t9
label_3661a4:
    if (ctx->pc == 0x3661A4u) {
        ctx->pc = 0x3661A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3661A0u;
        // 0x3661a4: 0x26250580  addiu       $a1, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3661A8u;
        goto label_3661a8;
    }
    ctx->pc = 0x3661A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3661A8u);
        ctx->pc = 0x3661A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3661A0u;
        // 0x3661a4: 0x26250580  addiu       $a1, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3661A0u, 0x3661A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3661A8u;
label_3661a8:
    // 0x3661a8: 0x8e260594  lw          $a2, 0x594($s1)
    ctx->pc = 0x3661a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1428)));
label_3661ac:
    // 0x3661ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3661acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3661b0:
    // 0x3661b0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3661b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3661b4:
    // 0x3661b4: 0xc0c08b4  jal         func_3022D0
label_3661b8:
    if (ctx->pc == 0x3661B8u) {
        ctx->pc = 0x3661B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3661B4u;
        // 0x3661b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3661BCu;
        goto label_3661bc;
    }
    ctx->pc = 0x3661B4u;
    SET_GPR_U32(ctx, 31, 0x3661BCu);
    ctx->pc = 0x3661B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661B4u;
    // 0x3661b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3661B4u, 0x3661BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3661BCu;
label_3661bc:
    // 0x3661bc: 0x8e260598  lw          $a2, 0x598($s1)
    ctx->pc = 0x3661bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1432)));
label_3661c0:
    // 0x3661c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3661c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3661c4:
    // 0x3661c4: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3661c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_3661c8:
    // 0x3661c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3661c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3661cc:
    // 0x3661cc: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x3661ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_3661d0:
    // 0x3661d0: 0xc0c08b4  jal         func_3022D0
label_3661d4:
    if (ctx->pc == 0x3661D4u) {
        ctx->pc = 0x3661D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3661D0u;
        // 0x3661d4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3661D8u;
        goto label_3661d8;
    }
    ctx->pc = 0x3661D0u;
    SET_GPR_U32(ctx, 31, 0x3661D8u);
    ctx->pc = 0x3661D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661D0u;
    // 0x3661d4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3661D0u, 0x3661D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3661D8u;
label_3661d8:
    // 0x3661d8: 0x8e26059c  lw          $a2, 0x59C($s1)
    ctx->pc = 0x3661d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1436)));
label_3661dc:
    // 0x3661dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3661dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3661e0:
    // 0x3661e0: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3661e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_3661e4:
    // 0x3661e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3661e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3661e8:
    // 0x3661e8: 0x26250570  addiu       $a1, $s1, 0x570
    ctx->pc = 0x3661e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
label_3661ec:
    // 0x3661ec: 0xc0c08b4  jal         func_3022D0
label_3661f0:
    if (ctx->pc == 0x3661F0u) {
        ctx->pc = 0x3661F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3661ECu;
        // 0x3661f0: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3661F4u;
        goto label_3661f4;
    }
    ctx->pc = 0x3661ECu;
    SET_GPR_U32(ctx, 31, 0x3661F4u);
    ctx->pc = 0x3661F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661ECu;
    // 0x3661f0: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3661ECu, 0x3661F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3661F4u;
label_3661f4:
    // 0x3661f4: 0x8e2605a0  lw          $a2, 0x5A0($s1)
    ctx->pc = 0x3661f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
label_3661f8:
    // 0x3661f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3661f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3661fc:
    // 0x3661fc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3661fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_366200:
    // 0x366200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x366200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_366204:
    // 0x366204: 0x26250580  addiu       $a1, $s1, 0x580
    ctx->pc = 0x366204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_366208:
    // 0x366208: 0xc0c08b4  jal         func_3022D0
label_36620c:
    if (ctx->pc == 0x36620Cu) {
        ctx->pc = 0x36620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366208u;
        // 0x36620c: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x366210u;
        goto label_366210;
    }
    ctx->pc = 0x366208u;
    SET_GPR_U32(ctx, 31, 0x366210u);
    ctx->pc = 0x36620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366208u;
    // 0x36620c: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x366208u, 0x366210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366210u;
label_366210:
    // 0x366210: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x366210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_366214:
    // 0x366214: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x366214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_366218:
    // 0x366218: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x366218u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_36621c:
    // 0x36621c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_366220:
    if (ctx->pc == 0x366220u) {
        ctx->pc = 0x366220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36621Cu;
        // 0x366220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366224u;
        goto label_366224;
    }
    ctx->pc = 0x36621Cu;
    {
        const bool branch_taken_0x36621c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x366220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36621Cu;
        // 0x366220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36621c) {
            ctx->pc = 0x366230u;
            goto label_366230;
        }
    }
    ctx->pc = 0x366224u;
label_366224:
    // 0x366224: 0xc0c0830  jal         func_3020C0
label_366228:
    if (ctx->pc == 0x366228u) {
        ctx->pc = 0x366228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366224u;
        // 0x366228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36622Cu;
        goto label_36622c;
    }
    ctx->pc = 0x366224u;
    SET_GPR_U32(ctx, 31, 0x36622Cu);
    ctx->pc = 0x366228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366224u;
    // 0x366228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x366224u, 0x36622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36622Cu;
label_36622c:
    // 0x36622c: 0x0  nop
    ctx->pc = 0x36622cu;
    // NOP
label_366230:
    // 0x366230: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x366230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_366234:
    // 0x366234: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_366238:
    if (ctx->pc == 0x366238u) {
        ctx->pc = 0x366238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366234u;
        // 0x366238: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36623Cu;
        goto label_36623c;
    }
    ctx->pc = 0x366234u;
    {
        const bool branch_taken_0x366234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x366238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366234u;
        // 0x366238: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366234) {
            ctx->pc = 0x366248u;
            goto label_366248;
        }
    }
    ctx->pc = 0x36623Cu;
label_36623c:
    // 0x36623c: 0x10000022  b           . + 4 + (0x22 << 2)
label_366240:
    if (ctx->pc == 0x366240u) {
        ctx->pc = 0x366244u;
        goto label_366244;
    }
    ctx->pc = 0x36623Cu;
    {
        const bool branch_taken_0x36623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36623c) {
            ctx->pc = 0x3662C8u;
            goto label_3662c8;
        }
    }
    ctx->pc = 0x366244u;
label_366244:
    // 0x366244: 0x0  nop
    ctx->pc = 0x366244u;
    // NOP
label_366248:
    // 0x366248: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x366248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_36624c:
    // 0x36624c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x36624cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_366250:
    // 0x366250: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x366250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_366254:
    // 0x366254: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x366254u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_366258:
    // 0x366258: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x366258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_36625c:
    // 0x36625c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_366260:
    if (ctx->pc == 0x366260u) {
        ctx->pc = 0x366264u;
        goto label_366264;
    }
    ctx->pc = 0x36625Cu;
    {
        const bool branch_taken_0x36625c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x36625c) {
            ctx->pc = 0x366298u;
            goto label_366298;
        }
    }
    ctx->pc = 0x366264u;
label_366264:
    // 0x366264: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x366264u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_366268:
    // 0x366268: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x366268u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_36626c:
    // 0x36626c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_366270:
    if (ctx->pc == 0x366270u) {
        ctx->pc = 0x366270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36626Cu;
        // 0x366270: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366274u;
        goto label_366274;
    }
    ctx->pc = 0x36626Cu;
    {
        const bool branch_taken_0x36626c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36626Cu;
        // 0x366270: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36626c) {
            ctx->pc = 0x3662C0u;
            goto label_3662c0;
        }
    }
    ctx->pc = 0x366274u;
label_366274:
    // 0x366274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_366278:
    // 0x366278: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x366278u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_36627c:
    // 0x36627c: 0x0  nop
    ctx->pc = 0x36627cu;
    // NOP
label_366280:
    // 0x366280: 0x0  nop
    ctx->pc = 0x366280u;
    // NOP
label_366284:
    // 0x366284: 0x2010  mfhi        $a0
    ctx->pc = 0x366284u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_366288:
    // 0x366288: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x366288u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_36628c:
    // 0x36628c: 0x1000000c  b           . + 4 + (0xC << 2)
label_366290:
    if (ctx->pc == 0x366290u) {
        ctx->pc = 0x366290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36628Cu;
        // 0x366290: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366294u;
        goto label_366294;
    }
    ctx->pc = 0x36628Cu;
    {
        const bool branch_taken_0x36628c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36628Cu;
        // 0x366290: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36628c) {
            ctx->pc = 0x3662C0u;
            goto label_3662c0;
        }
    }
    ctx->pc = 0x366294u;
label_366294:
    // 0x366294: 0x0  nop
    ctx->pc = 0x366294u;
    // NOP
label_366298:
    // 0x366298: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x366298u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_36629c:
    // 0x36629c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x36629cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3662a0:
    // 0x3662a0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3662a4:
    if (ctx->pc == 0x3662A4u) {
        ctx->pc = 0x3662A8u;
        goto label_3662a8;
    }
    ctx->pc = 0x3662A0u;
    {
        const bool branch_taken_0x3662a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3662a0) {
            ctx->pc = 0x3662C0u;
            goto label_3662c0;
        }
    }
    ctx->pc = 0x3662A8u;
label_3662a8:
    // 0x3662a8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3662a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_3662ac:
    // 0x3662ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3662acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3662b0:
    // 0x3662b0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3662b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_3662b4:
    // 0x3662b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3662b8:
    if (ctx->pc == 0x3662B8u) {
        ctx->pc = 0x3662B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662B4u;
        // 0x3662b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3662BCu;
        goto label_3662bc;
    }
    ctx->pc = 0x3662B4u;
    {
        const bool branch_taken_0x3662b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3662B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662B4u;
        // 0x3662b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3662b4) {
            ctx->pc = 0x3662C8u;
            goto label_3662c8;
        }
    }
    ctx->pc = 0x3662BCu;
label_3662bc:
    // 0x3662bc: 0x0  nop
    ctx->pc = 0x3662bcu;
    // NOP
label_3662c0:
    // 0x3662c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3662c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3662c4:
    // 0x3662c4: 0x0  nop
    ctx->pc = 0x3662c4u;
    // NOP
label_3662c8:
    // 0x3662c8: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
label_3662cc:
    if (ctx->pc == 0x3662CCu) {
        ctx->pc = 0x3662D0u;
        goto label_3662d0;
    }
    ctx->pc = 0x3662C8u;
    {
        const bool branch_taken_0x3662c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3662c8) {
            ctx->pc = 0x3664A0u;
            goto label_3664a0;
        }
    }
    ctx->pc = 0x3662D0u;
label_3662d0:
    // 0x3662d0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3662d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_3662d4:
    // 0x3662d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3662d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3662d8:
    // 0x3662d8: 0x10000071  b           . + 4 + (0x71 << 2)
label_3662dc:
    if (ctx->pc == 0x3662DCu) {
        ctx->pc = 0x3662DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662D8u;
        // 0x3662dc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3662E0u;
        goto label_3662e0;
    }
    ctx->pc = 0x3662D8u;
    {
        const bool branch_taken_0x3662d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3662DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662D8u;
        // 0x3662dc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3662d8) {
            ctx->pc = 0x3664A0u;
            goto label_3664a0;
        }
    }
    ctx->pc = 0x3662E0u;
label_3662e0:
    // 0x3662e0: 0xc096c4c  jal         func_25B130
label_3662e4:
    if (ctx->pc == 0x3662E4u) {
        ctx->pc = 0x3662E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662E0u;
        // 0x3662e4: 0x8e240594  lw          $a0, 0x594($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1428)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3662E8u;
        goto label_3662e8;
    }
    ctx->pc = 0x3662E0u;
    SET_GPR_U32(ctx, 31, 0x3662E8u);
    ctx->pc = 0x3662E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3662E0u;
    // 0x3662e4: 0x8e240594  lw          $a0, 0x594($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1428)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3662E0u, 0x3662E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3662E8u;
label_3662e8:
    // 0x3662e8: 0xc096c4c  jal         func_25B130
label_3662ec:
    if (ctx->pc == 0x3662ECu) {
        ctx->pc = 0x3662ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662E8u;
        // 0x3662ec: 0x8e240598  lw          $a0, 0x598($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3662F0u;
        goto label_3662f0;
    }
    ctx->pc = 0x3662E8u;
    SET_GPR_U32(ctx, 31, 0x3662F0u);
    ctx->pc = 0x3662ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3662E8u;
    // 0x3662ec: 0x8e240598  lw          $a0, 0x598($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3662E8u, 0x3662F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3662F0u;
label_3662f0:
    // 0x3662f0: 0xc096c4c  jal         func_25B130
label_3662f4:
    if (ctx->pc == 0x3662F4u) {
        ctx->pc = 0x3662F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662F0u;
        // 0x3662f4: 0x8e24059c  lw          $a0, 0x59C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3662F8u;
        goto label_3662f8;
    }
    ctx->pc = 0x3662F0u;
    SET_GPR_U32(ctx, 31, 0x3662F8u);
    ctx->pc = 0x3662F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3662F0u;
    // 0x3662f4: 0x8e24059c  lw          $a0, 0x59C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3662F0u, 0x3662F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3662F8u;
label_3662f8:
    // 0x3662f8: 0xc096c4c  jal         func_25B130
label_3662fc:
    if (ctx->pc == 0x3662FCu) {
        ctx->pc = 0x3662FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662F8u;
        // 0x3662fc: 0x8e2405a0  lw          $a0, 0x5A0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366300u;
        goto label_366300;
    }
    ctx->pc = 0x3662F8u;
    SET_GPR_U32(ctx, 31, 0x366300u);
    ctx->pc = 0x3662FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3662F8u;
    // 0x3662fc: 0x8e2405a0  lw          $a0, 0x5A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3662F8u, 0x366300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366300u;
label_366300:
    // 0x366300: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x366300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
label_366304:
    // 0x366304: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x366304u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
label_366308:
    // 0x366308: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x366308u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
label_36630c:
    // 0x36630c: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x36630cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
label_366310:
    // 0x366310: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x366310u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
label_366314:
    // 0x366314: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x366314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
label_366318:
    // 0x366318: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x366318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_36631c:
    // 0x36631c: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x36631cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_366320:
    // 0x366320: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x366320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
label_366324:
    // 0x366324: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x366324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_366328:
    // 0x366328: 0xc07cce0  jal         func_1F3380
label_36632c:
    if (ctx->pc == 0x36632Cu) {
        ctx->pc = 0x36632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366328u;
        // 0x36632c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366330u;
        goto label_366330;
    }
    ctx->pc = 0x366328u;
    SET_GPR_U32(ctx, 31, 0x366330u);
    ctx->pc = 0x36632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366328u;
    // 0x36632c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x366328u, 0x366330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366330u;
label_366330:
    // 0x366330: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x366330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_366334:
    // 0x366334: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_366338:
    if (ctx->pc == 0x366338u) {
        ctx->pc = 0x366338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366334u;
        // 0x366338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36633Cu;
        goto label_36633c;
    }
    ctx->pc = 0x366334u;
    {
        const bool branch_taken_0x366334 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x366338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366334u;
        // 0x366338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366334) {
            ctx->pc = 0x366350u;
            goto label_366350;
        }
    }
    ctx->pc = 0x36633Cu;
label_36633c:
    // 0x36633c: 0xc0c0830  jal         func_3020C0
label_366340:
    if (ctx->pc == 0x366340u) {
        ctx->pc = 0x366340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36633Cu;
        // 0x366340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366344u;
        goto label_366344;
    }
    ctx->pc = 0x36633Cu;
    SET_GPR_U32(ctx, 31, 0x366344u);
    ctx->pc = 0x366340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36633Cu;
    // 0x366340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x36633Cu, 0x366344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366344u;
label_366344:
    // 0x366344: 0x10000056  b           . + 4 + (0x56 << 2)
label_366348:
    if (ctx->pc == 0x366348u) {
        ctx->pc = 0x36634Cu;
        goto label_36634c;
    }
    ctx->pc = 0x366344u;
    {
        const bool branch_taken_0x366344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366344) {
            ctx->pc = 0x3664A0u;
            goto label_3664a0;
        }
    }
    ctx->pc = 0x36634Cu;
label_36634c:
    // 0x36634c: 0x0  nop
    ctx->pc = 0x36634cu;
    // NOP
label_366350:
    // 0x366350: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x366350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_366354:
    // 0x366354: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x366354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_366358:
    // 0x366358: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_36635c:
    if (ctx->pc == 0x36635Cu) {
        ctx->pc = 0x36635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366358u;
        // 0x36635c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366360u;
        goto label_366360;
    }
    ctx->pc = 0x366358u;
    {
        const bool branch_taken_0x366358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366358u;
        // 0x36635c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366358) {
            ctx->pc = 0x366370u;
            goto label_366370;
        }
    }
    ctx->pc = 0x366360u;
label_366360:
    // 0x366360: 0xc0c0830  jal         func_3020C0
label_366364:
    if (ctx->pc == 0x366364u) {
        ctx->pc = 0x366364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366360u;
        // 0x366364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366368u;
        goto label_366368;
    }
    ctx->pc = 0x366360u;
    SET_GPR_U32(ctx, 31, 0x366368u);
    ctx->pc = 0x366364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366360u;
    // 0x366364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x366360u, 0x366368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366368u;
label_366368:
    // 0x366368: 0x1000004d  b           . + 4 + (0x4D << 2)
label_36636c:
    if (ctx->pc == 0x36636Cu) {
        ctx->pc = 0x366370u;
        goto label_366370;
    }
    ctx->pc = 0x366368u;
    {
        const bool branch_taken_0x366368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366368) {
            ctx->pc = 0x3664A0u;
            goto label_3664a0;
        }
    }
    ctx->pc = 0x366370u;
label_366370:
    // 0x366370: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x366370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_366374:
    // 0x366374: 0x922305ae  lbu         $v1, 0x5AE($s1)
    ctx->pc = 0x366374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1454)));
label_366378:
    // 0x366378: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x366378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_36637c:
    // 0x36637c: 0x26260550  addiu       $a2, $s1, 0x550
    ctx->pc = 0x36637cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_366380:
    // 0x366380: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x366380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_366384:
    // 0x366384: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x366384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_366388:
    // 0x366388: 0xc07679c  jal         func_1D9E70
label_36638c:
    if (ctx->pc == 0x36638Cu) {
        ctx->pc = 0x36638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366388u;
        // 0x36638c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366390u;
        goto label_366390;
    }
    ctx->pc = 0x366388u;
    SET_GPR_U32(ctx, 31, 0x366390u);
    ctx->pc = 0x36638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366388u;
    // 0x36638c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x366388u, 0x366390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366390u;
label_366390:
    // 0x366390: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x366390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_366394:
    // 0x366394: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x366394u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_366398:
    // 0x366398: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x366398u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
label_36639c:
    // 0x36639c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x36639cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3663a0:
    // 0x3663a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3663a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3663a4:
    // 0x3663a4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3663a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3663a8:
    // 0x3663a8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3663a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3663ac:
    // 0x3663ac: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x3663acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
label_3663b0:
    // 0x3663b0: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3663b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 1), 23600)));
label_3663b4:
    // 0x3663b4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3663b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3663b8:
    // 0x3663b8: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x3663b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_3663bc:
    // 0x3663bc: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3663bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23616)));
label_3663c0:
    // 0x3663c0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3663c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
label_3663c4:
    // 0x3663c4: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3663c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3663c8:
    // 0x3663c8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3663c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 23632)));
label_3663cc:
    // 0x3663cc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3663ccu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3663d0:
    // 0x3663d0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3663d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3663d4:
    // 0x3663d4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3663d4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
label_3663d8:
    // 0x3663d8: 0x922605a8  lbu         $a2, 0x5A8($s1)
    ctx->pc = 0x3663d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1448)));
label_3663dc:
    // 0x3663dc: 0xc62c05a4  lwc1        $f12, 0x5A4($s1)
    ctx->pc = 0x3663dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3663e0:
    // 0x3663e0: 0xc0c0900  jal         func_302400
label_3663e4:
    if (ctx->pc == 0x3663E4u) {
        ctx->pc = 0x3663E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3663E0u;
        // 0x3663e4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3663E8u;
        goto label_3663e8;
    }
    ctx->pc = 0x3663E0u;
    SET_GPR_U32(ctx, 31, 0x3663E8u);
    ctx->pc = 0x3663E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3663E0u;
    // 0x3663e4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3663E0u, 0x3663E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3663E8u;
label_3663e8:
    // 0x3663e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3663ec:
    if (ctx->pc == 0x3663ECu) {
        ctx->pc = 0x3663ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3663E8u;
        // 0x3663ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3663F0u;
        goto label_3663f0;
    }
    ctx->pc = 0x3663E8u;
    {
        const bool branch_taken_0x3663e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3663ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3663E8u;
        // 0x3663ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3663e8) {
            ctx->pc = 0x3663F8u;
            goto label_3663f8;
        }
    }
    ctx->pc = 0x3663F0u;
label_3663f0:
    // 0x3663f0: 0xc0c0830  jal         func_3020C0
label_3663f4:
    if (ctx->pc == 0x3663F4u) {
        ctx->pc = 0x3663F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3663F0u;
        // 0x3663f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3663F8u;
        goto label_3663f8;
    }
    ctx->pc = 0x3663F0u;
    SET_GPR_U32(ctx, 31, 0x3663F8u);
    ctx->pc = 0x3663F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3663F0u;
    // 0x3663f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3663F0u, 0x3663F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3663F8u;
label_3663f8:
    // 0x3663f8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3663f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
label_3663fc:
    // 0x3663fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_366400:
    if (ctx->pc == 0x366400u) {
        ctx->pc = 0x366400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3663FCu;
        // 0x366400: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366404u;
        goto label_366404;
    }
    ctx->pc = 0x3663FCu;
    {
        const bool branch_taken_0x3663fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x366400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3663FCu;
        // 0x366400: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3663fc) {
            ctx->pc = 0x366410u;
            goto label_366410;
        }
    }
    ctx->pc = 0x366404u;
label_366404:
    // 0x366404: 0x10000022  b           . + 4 + (0x22 << 2)
label_366408:
    if (ctx->pc == 0x366408u) {
        ctx->pc = 0x36640Cu;
        goto label_36640c;
    }
    ctx->pc = 0x366404u;
    {
        const bool branch_taken_0x366404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366404) {
            ctx->pc = 0x366490u;
            goto label_366490;
        }
    }
    ctx->pc = 0x36640Cu;
label_36640c:
    // 0x36640c: 0x0  nop
    ctx->pc = 0x36640cu;
    // NOP
label_366410:
    // 0x366410: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x366410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_366414:
    // 0x366414: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x366414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_366418:
    // 0x366418: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x366418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_36641c:
    // 0x36641c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x36641cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_366420:
    // 0x366420: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x366420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
label_366424:
    // 0x366424: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_366428:
    if (ctx->pc == 0x366428u) {
        ctx->pc = 0x36642Cu;
        goto label_36642c;
    }
    ctx->pc = 0x366424u;
    {
        const bool branch_taken_0x366424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x366424) {
            ctx->pc = 0x366460u;
            goto label_366460;
        }
    }
    ctx->pc = 0x36642Cu;
label_36642c:
    // 0x36642c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x36642cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_366430:
    // 0x366430: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x366430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
label_366434:
    // 0x366434: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_366438:
    if (ctx->pc == 0x366438u) {
        ctx->pc = 0x366438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366434u;
        // 0x366438: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36643Cu;
        goto label_36643c;
    }
    ctx->pc = 0x366434u;
    {
        const bool branch_taken_0x366434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366434u;
        // 0x366438: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366434) {
            ctx->pc = 0x366488u;
            goto label_366488;
        }
    }
    ctx->pc = 0x36643Cu;
label_36643c:
    // 0x36643c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36643cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_366440:
    // 0x366440: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x366440u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_366444:
    // 0x366444: 0x0  nop
    ctx->pc = 0x366444u;
    // NOP
label_366448:
    // 0x366448: 0x0  nop
    ctx->pc = 0x366448u;
    // NOP
label_36644c:
    // 0x36644c: 0x2010  mfhi        $a0
    ctx->pc = 0x36644cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_366450:
    // 0x366450: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x366450u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_366454:
    // 0x366454: 0x1000000c  b           . + 4 + (0xC << 2)
label_366458:
    if (ctx->pc == 0x366458u) {
        ctx->pc = 0x366458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366454u;
        // 0x366458: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36645Cu;
        goto label_36645c;
    }
    ctx->pc = 0x366454u;
    {
        const bool branch_taken_0x366454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366454u;
        // 0x366458: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366454) {
            ctx->pc = 0x366488u;
            goto label_366488;
        }
    }
    ctx->pc = 0x36645Cu;
label_36645c:
    // 0x36645c: 0x0  nop
    ctx->pc = 0x36645cu;
    // NOP
label_366460:
    // 0x366460: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x366460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
label_366464:
    // 0x366464: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x366464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_366468:
    // 0x366468: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_36646c:
    if (ctx->pc == 0x36646Cu) {
        ctx->pc = 0x366470u;
        goto label_366470;
    }
    ctx->pc = 0x366468u;
    {
        const bool branch_taken_0x366468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x366468) {
            ctx->pc = 0x366488u;
            goto label_366488;
        }
    }
    ctx->pc = 0x366470u;
label_366470:
    // 0x366470: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x366470u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
label_366474:
    // 0x366474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_366478:
    // 0x366478: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x366478u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
label_36647c:
    // 0x36647c: 0x10000004  b           . + 4 + (0x4 << 2)
label_366480:
    if (ctx->pc == 0x366480u) {
        ctx->pc = 0x366480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36647Cu;
        // 0x366480: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366484u;
        goto label_366484;
    }
    ctx->pc = 0x36647Cu;
    {
        const bool branch_taken_0x36647c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36647Cu;
        // 0x366480: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36647c) {
            ctx->pc = 0x366490u;
            goto label_366490;
        }
    }
    ctx->pc = 0x366484u;
label_366484:
    // 0x366484: 0x0  nop
    ctx->pc = 0x366484u;
    // NOP
label_366488:
    // 0x366488: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36648c:
    // 0x36648c: 0x0  nop
    ctx->pc = 0x36648cu;
    // NOP
label_366490:
    // 0x366490: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_366494:
    if (ctx->pc == 0x366494u) {
        ctx->pc = 0x366494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366490u;
        // 0x366494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x366498u;
        goto label_366498;
    }
    ctx->pc = 0x366490u;
    {
        const bool branch_taken_0x366490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366490u;
        // 0x366494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366490) {
            ctx->pc = 0x3664A0u;
            goto label_3664a0;
        }
    }
    ctx->pc = 0x366498u;
label_366498:
    // 0x366498: 0xc0c0830  jal         func_3020C0
label_36649c:
    if (ctx->pc == 0x36649Cu) {
        ctx->pc = 0x36649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366498u;
        // 0x36649c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3664A0u;
        goto label_3664a0;
    }
    ctx->pc = 0x366498u;
    SET_GPR_U32(ctx, 31, 0x3664A0u);
    ctx->pc = 0x36649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366498u;
    // 0x36649c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x366498u, 0x3664A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3664A0u;
label_3664a0:
    // 0x3664a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3664a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3664a4:
    // 0x3664a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3664a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3664a8:
    // 0x3664a8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3664a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3664ac:
    // 0x3664ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3664acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3664b0:
    // 0x3664b0: 0x3e00008  jr          $ra
label_3664b4:
    if (ctx->pc == 0x3664B4u) {
        ctx->pc = 0x3664B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3664B0u;
        // 0x3664b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3664B8u;
        goto label_fallthrough_0x3664b0;
    }
    ctx->pc = 0x3664B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3664B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3664B0u;
        // 0x3664b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3664B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3664b0:
    ctx->pc = 0x3664B8u;
}
