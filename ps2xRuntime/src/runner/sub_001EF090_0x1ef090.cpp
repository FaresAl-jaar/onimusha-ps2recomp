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

// Function: sub_001EF090
// Address: 0x1ef090 - 0x1ef460
void sub_001EF090_0x1ef090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF090_0x1ef090");
#endif

    switch (ctx->pc) {
        case 0x1ef090u: goto label_1ef090;
        case 0x1ef094u: goto label_1ef094;
        case 0x1ef098u: goto label_1ef098;
        case 0x1ef09cu: goto label_1ef09c;
        case 0x1ef0a0u: goto label_1ef0a0;
        case 0x1ef0a4u: goto label_1ef0a4;
        case 0x1ef0a8u: goto label_1ef0a8;
        case 0x1ef0acu: goto label_1ef0ac;
        case 0x1ef0b0u: goto label_1ef0b0;
        case 0x1ef0b4u: goto label_1ef0b4;
        case 0x1ef0b8u: goto label_1ef0b8;
        case 0x1ef0bcu: goto label_1ef0bc;
        case 0x1ef0c0u: goto label_1ef0c0;
        case 0x1ef0c4u: goto label_1ef0c4;
        case 0x1ef0c8u: goto label_1ef0c8;
        case 0x1ef0ccu: goto label_1ef0cc;
        case 0x1ef0d0u: goto label_1ef0d0;
        case 0x1ef0d4u: goto label_1ef0d4;
        case 0x1ef0d8u: goto label_1ef0d8;
        case 0x1ef0dcu: goto label_1ef0dc;
        case 0x1ef0e0u: goto label_1ef0e0;
        case 0x1ef0e4u: goto label_1ef0e4;
        case 0x1ef0e8u: goto label_1ef0e8;
        case 0x1ef0ecu: goto label_1ef0ec;
        case 0x1ef0f0u: goto label_1ef0f0;
        case 0x1ef0f4u: goto label_1ef0f4;
        case 0x1ef0f8u: goto label_1ef0f8;
        case 0x1ef0fcu: goto label_1ef0fc;
        case 0x1ef100u: goto label_1ef100;
        case 0x1ef104u: goto label_1ef104;
        case 0x1ef108u: goto label_1ef108;
        case 0x1ef10cu: goto label_1ef10c;
        case 0x1ef110u: goto label_1ef110;
        case 0x1ef114u: goto label_1ef114;
        case 0x1ef118u: goto label_1ef118;
        case 0x1ef11cu: goto label_1ef11c;
        case 0x1ef120u: goto label_1ef120;
        case 0x1ef124u: goto label_1ef124;
        case 0x1ef128u: goto label_1ef128;
        case 0x1ef12cu: goto label_1ef12c;
        case 0x1ef130u: goto label_1ef130;
        case 0x1ef134u: goto label_1ef134;
        case 0x1ef138u: goto label_1ef138;
        case 0x1ef13cu: goto label_1ef13c;
        case 0x1ef140u: goto label_1ef140;
        case 0x1ef144u: goto label_1ef144;
        case 0x1ef148u: goto label_1ef148;
        case 0x1ef14cu: goto label_1ef14c;
        case 0x1ef150u: goto label_1ef150;
        case 0x1ef154u: goto label_1ef154;
        case 0x1ef158u: goto label_1ef158;
        case 0x1ef15cu: goto label_1ef15c;
        case 0x1ef160u: goto label_1ef160;
        case 0x1ef164u: goto label_1ef164;
        case 0x1ef168u: goto label_1ef168;
        case 0x1ef16cu: goto label_1ef16c;
        case 0x1ef170u: goto label_1ef170;
        case 0x1ef174u: goto label_1ef174;
        case 0x1ef178u: goto label_1ef178;
        case 0x1ef17cu: goto label_1ef17c;
        case 0x1ef180u: goto label_1ef180;
        case 0x1ef184u: goto label_1ef184;
        case 0x1ef188u: goto label_1ef188;
        case 0x1ef18cu: goto label_1ef18c;
        case 0x1ef190u: goto label_1ef190;
        case 0x1ef194u: goto label_1ef194;
        case 0x1ef198u: goto label_1ef198;
        case 0x1ef19cu: goto label_1ef19c;
        case 0x1ef1a0u: goto label_1ef1a0;
        case 0x1ef1a4u: goto label_1ef1a4;
        case 0x1ef1a8u: goto label_1ef1a8;
        case 0x1ef1acu: goto label_1ef1ac;
        case 0x1ef1b0u: goto label_1ef1b0;
        case 0x1ef1b4u: goto label_1ef1b4;
        case 0x1ef1b8u: goto label_1ef1b8;
        case 0x1ef1bcu: goto label_1ef1bc;
        case 0x1ef1c0u: goto label_1ef1c0;
        case 0x1ef1c4u: goto label_1ef1c4;
        case 0x1ef1c8u: goto label_1ef1c8;
        case 0x1ef1ccu: goto label_1ef1cc;
        case 0x1ef1d0u: goto label_1ef1d0;
        case 0x1ef1d4u: goto label_1ef1d4;
        case 0x1ef1d8u: goto label_1ef1d8;
        case 0x1ef1dcu: goto label_1ef1dc;
        case 0x1ef1e0u: goto label_1ef1e0;
        case 0x1ef1e4u: goto label_1ef1e4;
        case 0x1ef1e8u: goto label_1ef1e8;
        case 0x1ef1ecu: goto label_1ef1ec;
        case 0x1ef1f0u: goto label_1ef1f0;
        case 0x1ef1f4u: goto label_1ef1f4;
        case 0x1ef1f8u: goto label_1ef1f8;
        case 0x1ef1fcu: goto label_1ef1fc;
        case 0x1ef200u: goto label_1ef200;
        case 0x1ef204u: goto label_1ef204;
        case 0x1ef208u: goto label_1ef208;
        case 0x1ef20cu: goto label_1ef20c;
        case 0x1ef210u: goto label_1ef210;
        case 0x1ef214u: goto label_1ef214;
        case 0x1ef218u: goto label_1ef218;
        case 0x1ef21cu: goto label_1ef21c;
        case 0x1ef220u: goto label_1ef220;
        case 0x1ef224u: goto label_1ef224;
        case 0x1ef228u: goto label_1ef228;
        case 0x1ef22cu: goto label_1ef22c;
        case 0x1ef230u: goto label_1ef230;
        case 0x1ef234u: goto label_1ef234;
        case 0x1ef238u: goto label_1ef238;
        case 0x1ef23cu: goto label_1ef23c;
        case 0x1ef240u: goto label_1ef240;
        case 0x1ef244u: goto label_1ef244;
        case 0x1ef248u: goto label_1ef248;
        case 0x1ef24cu: goto label_1ef24c;
        case 0x1ef250u: goto label_1ef250;
        case 0x1ef254u: goto label_1ef254;
        case 0x1ef258u: goto label_1ef258;
        case 0x1ef25cu: goto label_1ef25c;
        case 0x1ef260u: goto label_1ef260;
        case 0x1ef264u: goto label_1ef264;
        case 0x1ef268u: goto label_1ef268;
        case 0x1ef26cu: goto label_1ef26c;
        case 0x1ef270u: goto label_1ef270;
        case 0x1ef274u: goto label_1ef274;
        case 0x1ef278u: goto label_1ef278;
        case 0x1ef27cu: goto label_1ef27c;
        case 0x1ef280u: goto label_1ef280;
        case 0x1ef284u: goto label_1ef284;
        case 0x1ef288u: goto label_1ef288;
        case 0x1ef28cu: goto label_1ef28c;
        case 0x1ef290u: goto label_1ef290;
        case 0x1ef294u: goto label_1ef294;
        case 0x1ef298u: goto label_1ef298;
        case 0x1ef29cu: goto label_1ef29c;
        case 0x1ef2a0u: goto label_1ef2a0;
        case 0x1ef2a4u: goto label_1ef2a4;
        case 0x1ef2a8u: goto label_1ef2a8;
        case 0x1ef2acu: goto label_1ef2ac;
        case 0x1ef2b0u: goto label_1ef2b0;
        case 0x1ef2b4u: goto label_1ef2b4;
        case 0x1ef2b8u: goto label_1ef2b8;
        case 0x1ef2bcu: goto label_1ef2bc;
        case 0x1ef2c0u: goto label_1ef2c0;
        case 0x1ef2c4u: goto label_1ef2c4;
        case 0x1ef2c8u: goto label_1ef2c8;
        case 0x1ef2ccu: goto label_1ef2cc;
        case 0x1ef2d0u: goto label_1ef2d0;
        case 0x1ef2d4u: goto label_1ef2d4;
        case 0x1ef2d8u: goto label_1ef2d8;
        case 0x1ef2dcu: goto label_1ef2dc;
        case 0x1ef2e0u: goto label_1ef2e0;
        case 0x1ef2e4u: goto label_1ef2e4;
        case 0x1ef2e8u: goto label_1ef2e8;
        case 0x1ef2ecu: goto label_1ef2ec;
        case 0x1ef2f0u: goto label_1ef2f0;
        case 0x1ef2f4u: goto label_1ef2f4;
        case 0x1ef2f8u: goto label_1ef2f8;
        case 0x1ef2fcu: goto label_1ef2fc;
        case 0x1ef300u: goto label_1ef300;
        case 0x1ef304u: goto label_1ef304;
        case 0x1ef308u: goto label_1ef308;
        case 0x1ef30cu: goto label_1ef30c;
        case 0x1ef310u: goto label_1ef310;
        case 0x1ef314u: goto label_1ef314;
        case 0x1ef318u: goto label_1ef318;
        case 0x1ef31cu: goto label_1ef31c;
        case 0x1ef320u: goto label_1ef320;
        case 0x1ef324u: goto label_1ef324;
        case 0x1ef328u: goto label_1ef328;
        case 0x1ef32cu: goto label_1ef32c;
        case 0x1ef330u: goto label_1ef330;
        case 0x1ef334u: goto label_1ef334;
        case 0x1ef338u: goto label_1ef338;
        case 0x1ef33cu: goto label_1ef33c;
        case 0x1ef340u: goto label_1ef340;
        case 0x1ef344u: goto label_1ef344;
        case 0x1ef348u: goto label_1ef348;
        case 0x1ef34cu: goto label_1ef34c;
        case 0x1ef350u: goto label_1ef350;
        case 0x1ef354u: goto label_1ef354;
        case 0x1ef358u: goto label_1ef358;
        case 0x1ef35cu: goto label_1ef35c;
        case 0x1ef360u: goto label_1ef360;
        case 0x1ef364u: goto label_1ef364;
        case 0x1ef368u: goto label_1ef368;
        case 0x1ef36cu: goto label_1ef36c;
        case 0x1ef370u: goto label_1ef370;
        case 0x1ef374u: goto label_1ef374;
        case 0x1ef378u: goto label_1ef378;
        case 0x1ef37cu: goto label_1ef37c;
        case 0x1ef380u: goto label_1ef380;
        case 0x1ef384u: goto label_1ef384;
        case 0x1ef388u: goto label_1ef388;
        case 0x1ef38cu: goto label_1ef38c;
        case 0x1ef390u: goto label_1ef390;
        case 0x1ef394u: goto label_1ef394;
        case 0x1ef398u: goto label_1ef398;
        case 0x1ef39cu: goto label_1ef39c;
        case 0x1ef3a0u: goto label_1ef3a0;
        case 0x1ef3a4u: goto label_1ef3a4;
        case 0x1ef3a8u: goto label_1ef3a8;
        case 0x1ef3acu: goto label_1ef3ac;
        case 0x1ef3b0u: goto label_1ef3b0;
        case 0x1ef3b4u: goto label_1ef3b4;
        case 0x1ef3b8u: goto label_1ef3b8;
        case 0x1ef3bcu: goto label_1ef3bc;
        case 0x1ef3c0u: goto label_1ef3c0;
        case 0x1ef3c4u: goto label_1ef3c4;
        case 0x1ef3c8u: goto label_1ef3c8;
        case 0x1ef3ccu: goto label_1ef3cc;
        case 0x1ef3d0u: goto label_1ef3d0;
        case 0x1ef3d4u: goto label_1ef3d4;
        case 0x1ef3d8u: goto label_1ef3d8;
        case 0x1ef3dcu: goto label_1ef3dc;
        case 0x1ef3e0u: goto label_1ef3e0;
        case 0x1ef3e4u: goto label_1ef3e4;
        case 0x1ef3e8u: goto label_1ef3e8;
        case 0x1ef3ecu: goto label_1ef3ec;
        case 0x1ef3f0u: goto label_1ef3f0;
        case 0x1ef3f4u: goto label_1ef3f4;
        case 0x1ef3f8u: goto label_1ef3f8;
        case 0x1ef3fcu: goto label_1ef3fc;
        case 0x1ef400u: goto label_1ef400;
        case 0x1ef404u: goto label_1ef404;
        case 0x1ef408u: goto label_1ef408;
        case 0x1ef40cu: goto label_1ef40c;
        case 0x1ef410u: goto label_1ef410;
        case 0x1ef414u: goto label_1ef414;
        case 0x1ef418u: goto label_1ef418;
        case 0x1ef41cu: goto label_1ef41c;
        case 0x1ef420u: goto label_1ef420;
        case 0x1ef424u: goto label_1ef424;
        case 0x1ef428u: goto label_1ef428;
        case 0x1ef42cu: goto label_1ef42c;
        case 0x1ef430u: goto label_1ef430;
        case 0x1ef434u: goto label_1ef434;
        case 0x1ef438u: goto label_1ef438;
        case 0x1ef43cu: goto label_1ef43c;
        case 0x1ef440u: goto label_1ef440;
        case 0x1ef444u: goto label_1ef444;
        case 0x1ef448u: goto label_1ef448;
        case 0x1ef44cu: goto label_1ef44c;
        case 0x1ef450u: goto label_1ef450;
        case 0x1ef454u: goto label_1ef454;
        case 0x1ef458u: goto label_1ef458;
        case 0x1ef45cu: goto label_1ef45c;
        default: break;
    }

    ctx->pc = 0x1ef090u;

label_1ef090:
    // 0x1ef090: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ef090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ef094:
    // 0x1ef094: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ef094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1ef098:
    // 0x1ef098: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ef098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ef09c:
    // 0x1ef09c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ef09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ef0a0:
    // 0x1ef0a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ef0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ef0a4:
    // 0x1ef0a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ef0a8:
    // 0x1ef0a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ef0ac:
    // 0x1ef0ac: 0x9083001b  lbu         $v1, 0x1B($a0)
    ctx->pc = 0x1ef0acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
label_1ef0b0:
    // 0x1ef0b0: 0x146000e3  bnez        $v1, . + 4 + (0xE3 << 2)
label_1ef0b4:
    if (ctx->pc == 0x1EF0B4u) {
        ctx->pc = 0x1EF0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0B0u;
        // 0x1ef0b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF0B8u;
        goto label_1ef0b8;
    }
    ctx->pc = 0x1EF0B0u;
    {
        const bool branch_taken_0x1ef0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF0B0u;
        // 0x1ef0b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef0b0) {
            ctx->pc = 0x1EF440u;
            goto label_1ef440;
        }
    }
    ctx->pc = 0x1EF0B8u;
label_1ef0b8:
    // 0x1ef0b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ef0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef0bc:
    // 0x1ef0bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ef0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ef0c0:
    // 0x1ef0c0: 0xa205001b  sb          $a1, 0x1B($s0)
    ctx->pc = 0x1ef0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 5));
label_1ef0c4:
    // 0x1ef0c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ef0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ef0c8:
    // 0x1ef0c8: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x1ef0c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1ef0cc:
    // 0x1ef0cc: 0xa6040012  sh          $a0, 0x12($s0)
    ctx->pc = 0x1ef0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 4));
label_1ef0d0:
    // 0x1ef0d0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1ef0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ef0d4:
    // 0x1ef0d4: 0x90c4000a  lbu         $a0, 0xA($a2)
    ctx->pc = 0x1ef0d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
label_1ef0d8:
    // 0x1ef0d8: 0x1083006f  beq         $a0, $v1, . + 4 + (0x6F << 2)
label_1ef0dc:
    if (ctx->pc == 0x1EF0DCu) {
        ctx->pc = 0x1EF0E0u;
        goto label_1ef0e0;
    }
    ctx->pc = 0x1EF0D8u;
    {
        const bool branch_taken_0x1ef0d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ef0d8) {
            ctx->pc = 0x1EF298u;
            goto label_1ef298;
        }
    }
    ctx->pc = 0x1EF0E0u;
label_1ef0e0:
    // 0x1ef0e0: 0x10850039  beq         $a0, $a1, . + 4 + (0x39 << 2)
label_1ef0e4:
    if (ctx->pc == 0x1EF0E4u) {
        ctx->pc = 0x1EF0E8u;
        goto label_1ef0e8;
    }
    ctx->pc = 0x1EF0E0u;
    {
        const bool branch_taken_0x1ef0e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ef0e0) {
            ctx->pc = 0x1EF1C8u;
            goto label_1ef1c8;
        }
    }
    ctx->pc = 0x1EF0E8u;
label_1ef0e8:
    // 0x1ef0e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1ef0ec:
    if (ctx->pc == 0x1EF0ECu) {
        ctx->pc = 0x1EF0F0u;
        goto label_1ef0f0;
    }
    ctx->pc = 0x1EF0E8u;
    {
        const bool branch_taken_0x1ef0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef0e8) {
            ctx->pc = 0x1EF0F8u;
            goto label_1ef0f8;
        }
    }
    ctx->pc = 0x1EF0F0u;
label_1ef0f0:
    // 0x1ef0f0: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_1ef0f4:
    if (ctx->pc == 0x1EF0F4u) {
        ctx->pc = 0x1EF0F8u;
        goto label_1ef0f8;
    }
    ctx->pc = 0x1EF0F0u;
    {
        const bool branch_taken_0x1ef0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef0f0) {
            ctx->pc = 0x1EF440u;
            goto label_1ef440;
        }
    }
    ctx->pc = 0x1EF0F8u;
label_1ef0f8:
    // 0x1ef0f8: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x1ef0f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_1ef0fc:
    // 0x1ef0fc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1ef0fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ef100:
    // 0x1ef100: 0x102000cf  beqz        $at, . + 4 + (0xCF << 2)
label_1ef104:
    if (ctx->pc == 0x1EF104u) {
        ctx->pc = 0x1EF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF100u;
        // 0x1ef104: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF108u;
        goto label_1ef108;
    }
    ctx->pc = 0x1EF100u;
    {
        const bool branch_taken_0x1ef100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF100u;
        // 0x1ef104: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef100) {
            ctx->pc = 0x1EF440u;
            goto label_1ef440;
        }
    }
    ctx->pc = 0x1EF108u;
label_1ef108:
    // 0x1ef108: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef10c:
    // 0x1ef10c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ef10cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef110:
    // 0x1ef110: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ef110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef114:
    // 0x1ef114: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1ef114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1ef118:
    // 0x1ef118: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ef118u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ef11c:
    // 0x1ef11c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ef11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ef120:
    // 0x1ef120: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1ef120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1ef124:
    // 0x1ef124: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ef124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ef128:
    // 0x1ef128: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_1ef12c:
    if (ctx->pc == 0x1EF12Cu) {
        ctx->pc = 0x1EF130u;
        goto label_1ef130;
    }
    ctx->pc = 0x1EF128u;
    {
        const bool branch_taken_0x1ef128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef128) {
            ctx->pc = 0x1EF1A0u;
            goto label_1ef1a0;
        }
    }
    ctx->pc = 0x1EF130u;
label_1ef130:
    // 0x1ef130: 0xc076ed0  jal         func_1DBB40
label_1ef134:
    if (ctx->pc == 0x1EF134u) {
        ctx->pc = 0x1EF138u;
        goto label_1ef138;
    }
    ctx->pc = 0x1EF130u;
    SET_GPR_U32(ctx, 31, 0x1EF138u);
    ctx->pc = 0x1DBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB40u, 0x1EF130u, 0x1EF138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF138u;
label_1ef138:
    // 0x1ef138: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1ef13c:
    if (ctx->pc == 0x1EF13Cu) {
        ctx->pc = 0x1EF140u;
        goto label_1ef140;
    }
    ctx->pc = 0x1EF138u;
    {
        const bool branch_taken_0x1ef138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef138) {
            ctx->pc = 0x1EF1A0u;
            goto label_1ef1a0;
        }
    }
    ctx->pc = 0x1EF140u;
label_1ef140:
    // 0x1ef140: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ef140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ef144:
    // 0x1ef144: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ef144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1ef148:
    // 0x1ef148: 0xc076ed4  jal         func_1DBB50
label_1ef14c:
    if (ctx->pc == 0x1EF14Cu) {
        ctx->pc = 0x1EF14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF148u;
        // 0x1ef14c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF150u;
        goto label_1ef150;
    }
    ctx->pc = 0x1EF148u;
    SET_GPR_U32(ctx, 31, 0x1EF150u);
    ctx->pc = 0x1EF14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF148u;
    // 0x1ef14c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB50u, 0x1EF148u, 0x1EF150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF150u;
label_1ef150:
    // 0x1ef150: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1ef154:
    if (ctx->pc == 0x1EF154u) {
        ctx->pc = 0x1EF158u;
        goto label_1ef158;
    }
    ctx->pc = 0x1EF150u;
    {
        const bool branch_taken_0x1ef150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef150) {
            ctx->pc = 0x1EF1A0u;
            goto label_1ef1a0;
        }
    }
    ctx->pc = 0x1EF158u;
label_1ef158:
    // 0x1ef158: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ef158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef15c:
    // 0x1ef15c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ef15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef160:
    // 0x1ef160: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1ef160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1ef164:
    // 0x1ef164: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1ef164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1ef168:
    // 0x1ef168: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ef168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1ef16c:
    // 0x1ef16c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ef16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef170:
    // 0x1ef170: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1ef170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1ef174:
    // 0x1ef174: 0xa4650004  sh          $a1, 0x4($v1)
    ctx->pc = 0x1ef174u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 5));
label_1ef178:
    // 0x1ef178: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ef178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ef17c:
    // 0x1ef17c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ef17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef180:
    // 0x1ef180: 0x84840008  lh          $a0, 0x8($a0)
    ctx->pc = 0x1ef180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_1ef184:
    // 0x1ef184: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1ef184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1ef188:
    // 0x1ef188: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1ef188u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ef18c:
    // 0x1ef18c: 0x0  nop
    ctx->pc = 0x1ef18cu;
    // NOP
label_1ef190:
    // 0x1ef190: 0x0  nop
    ctx->pc = 0x1ef190u;
    // NOP
label_1ef194:
    // 0x1ef194: 0x2012  mflo        $a0
    ctx->pc = 0x1ef194u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1ef198:
    // 0x1ef198: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x1ef198u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
label_1ef19c:
    // 0x1ef19c: 0x0  nop
    ctx->pc = 0x1ef19cu;
    // NOP
label_1ef1a0:
    // 0x1ef1a0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ef1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ef1a4:
    // 0x1ef1a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ef1a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ef1a8:
    // 0x1ef1a8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1ef1a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1ef1ac:
    // 0x1ef1ac: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1ef1acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1ef1b0:
    // 0x1ef1b0: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x1ef1b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ef1b4:
    // 0x1ef1b4: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_1ef1b8:
    if (ctx->pc == 0x1EF1B8u) {
        ctx->pc = 0x1EF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF1B4u;
        // 0x1ef1b8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF1BCu;
        goto label_1ef1bc;
    }
    ctx->pc = 0x1EF1B4u;
    {
        const bool branch_taken_0x1ef1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF1B4u;
        // 0x1ef1b8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef1b4) {
            ctx->pc = 0x1EF110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef110;
        }
    }
    ctx->pc = 0x1EF1BCu;
label_1ef1bc:
    // 0x1ef1bc: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_1ef1c0:
    if (ctx->pc == 0x1EF1C0u) {
        ctx->pc = 0x1EF1C4u;
        goto label_1ef1c4;
    }
    ctx->pc = 0x1EF1BCu;
    {
        const bool branch_taken_0x1ef1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef1bc) {
            ctx->pc = 0x1EF440u;
            goto label_1ef440;
        }
    }
    ctx->pc = 0x1EF1C4u;
label_1ef1c4:
    // 0x1ef1c4: 0x0  nop
    ctx->pc = 0x1ef1c4u;
    // NOP
label_1ef1c8:
    // 0x1ef1c8: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x1ef1c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_1ef1cc:
    // 0x1ef1cc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1ef1ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ef1d0:
    // 0x1ef1d0: 0x1020009b  beqz        $at, . + 4 + (0x9B << 2)
label_1ef1d4:
    if (ctx->pc == 0x1EF1D4u) {
        ctx->pc = 0x1EF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF1D0u;
        // 0x1ef1d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF1D8u;
        goto label_1ef1d8;
    }
    ctx->pc = 0x1EF1D0u;
    {
        const bool branch_taken_0x1ef1d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF1D0u;
        // 0x1ef1d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef1d0) {
            ctx->pc = 0x1EF440u;
            goto label_1ef440;
        }
    }
    ctx->pc = 0x1EF1D8u;
label_1ef1d8:
    // 0x1ef1d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ef1d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef1dc:
    // 0x1ef1dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef1dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef1e0:
    // 0x1ef1e0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ef1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef1e4:
    // 0x1ef1e4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1ef1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1ef1e8:
    // 0x1ef1e8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ef1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ef1ec:
    // 0x1ef1ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ef1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ef1f0:
    // 0x1ef1f0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1ef1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1ef1f4:
    // 0x1ef1f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ef1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ef1f8:
    // 0x1ef1f8: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_1ef1fc:
    if (ctx->pc == 0x1EF1FCu) {
        ctx->pc = 0x1EF200u;
        goto label_1ef200;
    }
    ctx->pc = 0x1EF1F8u;
    {
        const bool branch_taken_0x1ef1f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef1f8) {
            ctx->pc = 0x1EF270u;
            goto label_1ef270;
        }
    }
    ctx->pc = 0x1EF200u;
label_1ef200:
    // 0x1ef200: 0xc076ed0  jal         func_1DBB40
label_1ef204:
    if (ctx->pc == 0x1EF204u) {
        ctx->pc = 0x1EF208u;
        goto label_1ef208;
    }
    ctx->pc = 0x1EF200u;
    SET_GPR_U32(ctx, 31, 0x1EF208u);
    ctx->pc = 0x1DBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB40u, 0x1EF200u, 0x1EF208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF208u;
label_1ef208:
    // 0x1ef208: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1ef20c:
    if (ctx->pc == 0x1EF20Cu) {
        ctx->pc = 0x1EF210u;
        goto label_1ef210;
    }
    ctx->pc = 0x1EF208u;
    {
        const bool branch_taken_0x1ef208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef208) {
            ctx->pc = 0x1EF270u;
            goto label_1ef270;
        }
    }
    ctx->pc = 0x1EF210u;
label_1ef210:
    // 0x1ef210: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ef210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ef214:
    // 0x1ef214: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1ef214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1ef218:
    // 0x1ef218: 0xc076ed4  jal         func_1DBB50
label_1ef21c:
    if (ctx->pc == 0x1EF21Cu) {
        ctx->pc = 0x1EF21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF218u;
        // 0x1ef21c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF220u;
        goto label_1ef220;
    }
    ctx->pc = 0x1EF218u;
    SET_GPR_U32(ctx, 31, 0x1EF220u);
    ctx->pc = 0x1EF21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF218u;
    // 0x1ef21c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB50u, 0x1EF218u, 0x1EF220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF220u;
label_1ef220:
    // 0x1ef220: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1ef224:
    if (ctx->pc == 0x1EF224u) {
        ctx->pc = 0x1EF228u;
        goto label_1ef228;
    }
    ctx->pc = 0x1EF220u;
    {
        const bool branch_taken_0x1ef220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef220) {
            ctx->pc = 0x1EF270u;
            goto label_1ef270;
        }
    }
    ctx->pc = 0x1EF228u;
label_1ef228:
    // 0x1ef228: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ef228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef22c:
    // 0x1ef22c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ef22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ef230:
    // 0x1ef230: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1ef230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1ef234:
    // 0x1ef234: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1ef234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1ef238:
    // 0x1ef238: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ef238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1ef23c:
    // 0x1ef23c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ef23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef240:
    // 0x1ef240: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1ef240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1ef244:
    // 0x1ef244: 0xa4650004  sh          $a1, 0x4($v1)
    ctx->pc = 0x1ef244u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 5));
label_1ef248:
    // 0x1ef248: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ef248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ef24c:
    // 0x1ef24c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ef24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef250:
    // 0x1ef250: 0x84840008  lh          $a0, 0x8($a0)
    ctx->pc = 0x1ef250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_1ef254:
    // 0x1ef254: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1ef254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1ef258:
    // 0x1ef258: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1ef258u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ef25c:
    // 0x1ef25c: 0x0  nop
    ctx->pc = 0x1ef25cu;
    // NOP
label_1ef260:
    // 0x1ef260: 0x0  nop
    ctx->pc = 0x1ef260u;
    // NOP
label_1ef264:
    // 0x1ef264: 0x2012  mflo        $a0
    ctx->pc = 0x1ef264u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1ef268:
    // 0x1ef268: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x1ef268u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
label_1ef26c:
    // 0x1ef26c: 0x0  nop
    ctx->pc = 0x1ef26cu;
    // NOP
label_1ef270:
    // 0x1ef270: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ef270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ef274:
    // 0x1ef274: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ef274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ef278:
    // 0x1ef278: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1ef278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1ef27c:
    // 0x1ef27c: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1ef27cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1ef280:
    // 0x1ef280: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1ef280u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ef284:
    // 0x1ef284: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_1ef288:
    if (ctx->pc == 0x1EF288u) {
        ctx->pc = 0x1EF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF284u;
        // 0x1ef288: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF28Cu;
        goto label_1ef28c;
    }
    ctx->pc = 0x1EF284u;
    {
        const bool branch_taken_0x1ef284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF284u;
        // 0x1ef288: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef284) {
            ctx->pc = 0x1EF1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef1e0;
        }
    }
    ctx->pc = 0x1EF28Cu;
label_1ef28c:
    // 0x1ef28c: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1ef290:
    if (ctx->pc == 0x1EF290u) {
        ctx->pc = 0x1EF294u;
        goto label_1ef294;
    }
    ctx->pc = 0x1EF28Cu;
    {
        const bool branch_taken_0x1ef28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef28c) {
            ctx->pc = 0x1EF440u;
            goto label_1ef440;
        }
    }
    ctx->pc = 0x1EF294u;
label_1ef294:
    // 0x1ef294: 0x0  nop
    ctx->pc = 0x1ef294u;
    // NOP
label_1ef298:
    // 0x1ef298: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x1ef298u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_1ef29c:
    // 0x1ef29c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1ef29cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ef2a0:
    // 0x1ef2a0: 0x10200067  beqz        $at, . + 4 + (0x67 << 2)
label_1ef2a4:
    if (ctx->pc == 0x1EF2A4u) {
        ctx->pc = 0x1EF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2A0u;
        // 0x1ef2a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF2A8u;
        goto label_1ef2a8;
    }
    ctx->pc = 0x1EF2A0u;
    {
        const bool branch_taken_0x1ef2a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2A0u;
        // 0x1ef2a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2a0) {
            ctx->pc = 0x1EF440u;
            goto label_1ef440;
        }
    }
    ctx->pc = 0x1EF2A8u;
label_1ef2a8:
    // 0x1ef2a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ef2a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef2ac:
    // 0x1ef2ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ef2acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ef2b0:
    // 0x1ef2b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ef2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ef2b4:
    // 0x1ef2b4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1ef2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_1ef2b8:
    // 0x1ef2b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ef2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ef2bc:
    // 0x1ef2bc: 0x10800058  beqz        $a0, . + 4 + (0x58 << 2)
label_1ef2c0:
    if (ctx->pc == 0x1EF2C0u) {
        ctx->pc = 0x1EF2C4u;
        goto label_1ef2c4;
    }
    ctx->pc = 0x1EF2BCu;
    {
        const bool branch_taken_0x1ef2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef2bc) {
            ctx->pc = 0x1EF420u;
            goto label_1ef420;
        }
    }
    ctx->pc = 0x1EF2C4u;
label_1ef2c4:
    // 0x1ef2c4: 0xc076ed0  jal         func_1DBB40
label_1ef2c8:
    if (ctx->pc == 0x1EF2C8u) {
        ctx->pc = 0x1EF2CCu;
        goto label_1ef2cc;
    }
    ctx->pc = 0x1EF2C4u;
    SET_GPR_U32(ctx, 31, 0x1EF2CCu);
    ctx->pc = 0x1DBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB40u, 0x1EF2C4u, 0x1EF2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF2CCu;
label_1ef2cc:
    // 0x1ef2cc: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_1ef2d0:
    if (ctx->pc == 0x1EF2D0u) {
        ctx->pc = 0x1EF2D4u;
        goto label_1ef2d4;
    }
    ctx->pc = 0x1EF2CCu;
    {
        const bool branch_taken_0x1ef2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef2cc) {
            ctx->pc = 0x1EF420u;
            goto label_1ef420;
        }
    }
    ctx->pc = 0x1EF2D4u;
label_1ef2d4:
    // 0x1ef2d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ef2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ef2d8:
    // 0x1ef2d8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1ef2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1ef2dc:
    // 0x1ef2dc: 0xc076ed4  jal         func_1DBB50
label_1ef2e0:
    if (ctx->pc == 0x1EF2E0u) {
        ctx->pc = 0x1EF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2DCu;
        // 0x1ef2e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF2E4u;
        goto label_1ef2e4;
    }
    ctx->pc = 0x1EF2DCu;
    SET_GPR_U32(ctx, 31, 0x1EF2E4u);
    ctx->pc = 0x1EF2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF2DCu;
    // 0x1ef2e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB50u, 0x1EF2DCu, 0x1EF2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF2E4u;
label_1ef2e4:
    // 0x1ef2e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ef2e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ef2e8:
    // 0x1ef2e8: 0x1220004d  beqz        $s1, . + 4 + (0x4D << 2)
label_1ef2ec:
    if (ctx->pc == 0x1EF2ECu) {
        ctx->pc = 0x1EF2F0u;
        goto label_1ef2f0;
    }
    ctx->pc = 0x1EF2E8u;
    {
        const bool branch_taken_0x1ef2e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef2e8) {
            ctx->pc = 0x1EF420u;
            goto label_1ef420;
        }
    }
    ctx->pc = 0x1EF2F0u;
label_1ef2f0:
    // 0x1ef2f0: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x1ef2f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1ef2f4:
    // 0x1ef2f4: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1ef2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1ef2f8:
    // 0x1ef2f8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1ef2fc:
    if (ctx->pc == 0x1EF2FCu) {
        ctx->pc = 0x1EF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2F8u;
        // 0x1ef2fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF300u;
        goto label_1ef300;
    }
    ctx->pc = 0x1EF2F8u;
    {
        const bool branch_taken_0x1ef2f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF2F8u;
        // 0x1ef2fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef2f8) {
            ctx->pc = 0x1EF328u;
            goto label_1ef328;
        }
    }
    ctx->pc = 0x1EF300u;
label_1ef300:
    // 0x1ef300: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x1ef300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1ef304:
    // 0x1ef304: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1ef308:
    if (ctx->pc == 0x1EF308u) {
        ctx->pc = 0x1EF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF304u;
        // 0x1ef308: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF30Cu;
        goto label_1ef30c;
    }
    ctx->pc = 0x1EF304u;
    {
        const bool branch_taken_0x1ef304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF304u;
        // 0x1ef308: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef304) {
            ctx->pc = 0x1EF328u;
            goto label_1ef328;
        }
    }
    ctx->pc = 0x1EF30Cu;
label_1ef30c:
    // 0x1ef30c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_1ef310:
    if (ctx->pc == 0x1EF310u) {
        ctx->pc = 0x1EF314u;
        goto label_1ef314;
    }
    ctx->pc = 0x1EF30Cu;
    {
        const bool branch_taken_0x1ef30c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ef30c) {
            ctx->pc = 0x1EF328u;
            goto label_1ef328;
        }
    }
    ctx->pc = 0x1EF314u;
label_1ef314:
    // 0x1ef314: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1ef314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ef318:
    // 0x1ef318: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1ef31c:
    if (ctx->pc == 0x1EF31Cu) {
        ctx->pc = 0x1EF320u;
        goto label_1ef320;
    }
    ctx->pc = 0x1EF318u;
    {
        const bool branch_taken_0x1ef318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ef318) {
            ctx->pc = 0x1EF328u;
            goto label_1ef328;
        }
    }
    ctx->pc = 0x1EF320u;
label_1ef320:
    // 0x1ef320: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ef324:
    if (ctx->pc == 0x1EF324u) {
        ctx->pc = 0x1EF328u;
        goto label_1ef328;
    }
    ctx->pc = 0x1EF320u;
    {
        const bool branch_taken_0x1ef320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef320) {
            ctx->pc = 0x1EF340u;
            goto label_1ef340;
        }
    }
    ctx->pc = 0x1EF328u;
label_1ef328:
    // 0x1ef328: 0x8e390020  lw          $t9, 0x20($s1)
    ctx->pc = 0x1ef328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1ef32c:
    // 0x1ef32c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x1ef32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_1ef330:
    // 0x1ef330: 0x320f809  jalr        $t9
label_1ef334:
    if (ctx->pc == 0x1EF334u) {
        ctx->pc = 0x1EF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF330u;
        // 0x1ef334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF338u;
        goto label_1ef338;
    }
    ctx->pc = 0x1EF330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF338u);
        ctx->pc = 0x1EF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF330u;
        // 0x1ef334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF330u, 0x1EF338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF338u;
label_1ef338:
    // 0x1ef338: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ef338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef33c:
    // 0x1ef33c: 0x0  nop
    ctx->pc = 0x1ef33cu;
    // NOP
label_1ef340:
    // 0x1ef340: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ef340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ef344:
    // 0x1ef344: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1ef344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1ef348:
    // 0x1ef348: 0x80630004  lb          $v1, 0x4($v1)
    ctx->pc = 0x1ef348u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_1ef34c:
    // 0x1ef34c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_1ef350:
    if (ctx->pc == 0x1EF350u) {
        ctx->pc = 0x1EF354u;
        goto label_1ef354;
    }
    ctx->pc = 0x1EF34Cu;
    {
        const bool branch_taken_0x1ef34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef34c) {
            ctx->pc = 0x1EF3D0u;
            goto label_1ef3d0;
        }
    }
    ctx->pc = 0x1EF354u;
label_1ef354:
    // 0x1ef354: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1ef354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef358:
    // 0x1ef358: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1ef358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1ef35c:
    // 0x1ef35c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1ef35cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ef360:
    // 0x1ef360: 0x8e390020  lw          $t9, 0x20($s1)
    ctx->pc = 0x1ef360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1ef364:
    // 0x1ef364: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x1ef364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_1ef368:
    // 0x1ef368: 0x320f809  jalr        $t9
label_1ef36c:
    if (ctx->pc == 0x1EF36Cu) {
        ctx->pc = 0x1EF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF368u;
        // 0x1ef36c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF370u;
        goto label_1ef370;
    }
    ctx->pc = 0x1EF368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EF370u);
        ctx->pc = 0x1EF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF368u;
        // 0x1ef36c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF368u, 0x1EF370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF370u;
label_1ef370:
    // 0x1ef370: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1ef370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
label_1ef374:
    // 0x1ef374: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x1ef374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1ef378:
    // 0x1ef378: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ef378u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1ef37c:
    // 0x1ef37c: 0x14830028  bne         $a0, $v1, . + 4 + (0x28 << 2)
label_1ef380:
    if (ctx->pc == 0x1EF380u) {
        ctx->pc = 0x1EF384u;
        goto label_1ef384;
    }
    ctx->pc = 0x1EF37Cu;
    {
        const bool branch_taken_0x1ef37c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ef37c) {
            ctx->pc = 0x1EF420u;
            goto label_1ef420;
        }
    }
    ctx->pc = 0x1EF384u;
label_1ef384:
    // 0x1ef384: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ef384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef388:
    // 0x1ef388: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ef388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef38c:
    // 0x1ef38c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1ef38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1ef390:
    // 0x1ef390: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1ef390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1ef394:
    // 0x1ef394: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ef394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1ef398:
    // 0x1ef398: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ef398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef39c:
    // 0x1ef39c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1ef39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1ef3a0:
    // 0x1ef3a0: 0xa4650004  sh          $a1, 0x4($v1)
    ctx->pc = 0x1ef3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 5));
label_1ef3a4:
    // 0x1ef3a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ef3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ef3a8:
    // 0x1ef3a8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ef3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef3ac:
    // 0x1ef3ac: 0x84840008  lh          $a0, 0x8($a0)
    ctx->pc = 0x1ef3acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_1ef3b0:
    // 0x1ef3b0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1ef3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1ef3b4:
    // 0x1ef3b4: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1ef3b4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ef3b8:
    // 0x1ef3b8: 0x0  nop
    ctx->pc = 0x1ef3b8u;
    // NOP
label_1ef3bc:
    // 0x1ef3bc: 0x0  nop
    ctx->pc = 0x1ef3bcu;
    // NOP
label_1ef3c0:
    // 0x1ef3c0: 0x2012  mflo        $a0
    ctx->pc = 0x1ef3c0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1ef3c4:
    // 0x1ef3c4: 0x10000016  b           . + 4 + (0x16 << 2)
label_1ef3c8:
    if (ctx->pc == 0x1EF3C8u) {
        ctx->pc = 0x1EF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3C4u;
        // 0x1ef3c8: 0xa4640006  sh          $a0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF3CCu;
        goto label_1ef3cc;
    }
    ctx->pc = 0x1EF3C4u;
    {
        const bool branch_taken_0x1ef3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3C4u;
        // 0x1ef3c8: 0xa4640006  sh          $a0, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3c4) {
            ctx->pc = 0x1EF420u;
            goto label_1ef420;
        }
    }
    ctx->pc = 0x1EF3CCu;
label_1ef3cc:
    // 0x1ef3cc: 0x0  nop
    ctx->pc = 0x1ef3ccu;
    // NOP
label_1ef3d0:
    // 0x1ef3d0: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
label_1ef3d4:
    if (ctx->pc == 0x1EF3D4u) {
        ctx->pc = 0x1EF3D8u;
        goto label_1ef3d8;
    }
    ctx->pc = 0x1EF3D0u;
    {
        const bool branch_taken_0x1ef3d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef3d0) {
            ctx->pc = 0x1EF420u;
            goto label_1ef420;
        }
    }
    ctx->pc = 0x1EF3D8u;
label_1ef3d8:
    // 0x1ef3d8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ef3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef3dc:
    // 0x1ef3dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ef3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef3e0:
    // 0x1ef3e0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1ef3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1ef3e4:
    // 0x1ef3e4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1ef3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1ef3e8:
    // 0x1ef3e8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ef3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
label_1ef3ec:
    // 0x1ef3ec: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ef3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef3f0:
    // 0x1ef3f0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1ef3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1ef3f4:
    // 0x1ef3f4: 0xa4650004  sh          $a1, 0x4($v1)
    ctx->pc = 0x1ef3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 5));
label_1ef3f8:
    // 0x1ef3f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ef3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ef3fc:
    // 0x1ef3fc: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ef3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ef400:
    // 0x1ef400: 0x84840008  lh          $a0, 0x8($a0)
    ctx->pc = 0x1ef400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_1ef404:
    // 0x1ef404: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1ef404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1ef408:
    // 0x1ef408: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1ef408u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ef40c:
    // 0x1ef40c: 0x0  nop
    ctx->pc = 0x1ef40cu;
    // NOP
label_1ef410:
    // 0x1ef410: 0x0  nop
    ctx->pc = 0x1ef410u;
    // NOP
label_1ef414:
    // 0x1ef414: 0x2012  mflo        $a0
    ctx->pc = 0x1ef414u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1ef418:
    // 0x1ef418: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x1ef418u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
label_1ef41c:
    // 0x1ef41c: 0x0  nop
    ctx->pc = 0x1ef41cu;
    // NOP
label_1ef420:
    // 0x1ef420: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ef420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ef424:
    // 0x1ef424: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ef424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ef428:
    // 0x1ef428: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1ef428u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1ef42c:
    // 0x1ef42c: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x1ef42cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_1ef430:
    // 0x1ef430: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1ef430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ef434:
    // 0x1ef434: 0x1460ff9e  bnez        $v1, . + 4 + (-0x62 << 2)
label_1ef438:
    if (ctx->pc == 0x1EF438u) {
        ctx->pc = 0x1EF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF434u;
        // 0x1ef438: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF43Cu;
        goto label_1ef43c;
    }
    ctx->pc = 0x1EF434u;
    {
        const bool branch_taken_0x1ef434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF434u;
        // 0x1ef438: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef434) {
            ctx->pc = 0x1EF2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef2b0;
        }
    }
    ctx->pc = 0x1EF43Cu;
label_1ef43c:
    // 0x1ef43c: 0x0  nop
    ctx->pc = 0x1ef43cu;
    // NOP
label_1ef440:
    // 0x1ef440: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ef440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ef444:
    // 0x1ef444: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ef444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ef448:
    // 0x1ef448: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ef448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ef44c:
    // 0x1ef44c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef44cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ef450:
    // 0x1ef450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ef454:
    // 0x1ef454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef458:
    // 0x1ef458: 0x3e00008  jr          $ra
label_1ef45c:
    if (ctx->pc == 0x1EF45Cu) {
        ctx->pc = 0x1EF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF458u;
        // 0x1ef45c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF460u;
        goto label_fallthrough_0x1ef458;
    }
    ctx->pc = 0x1EF458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF458u;
        // 0x1ef45c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ef458:
    ctx->pc = 0x1EF460u;
}
