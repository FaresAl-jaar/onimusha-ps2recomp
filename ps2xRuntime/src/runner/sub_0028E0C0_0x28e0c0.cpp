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

// Function: sub_0028E0C0
// Address: 0x28e0c0 - 0x28e3b4
void sub_0028E0C0_0x28e0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E0C0_0x28e0c0");
#endif

    switch (ctx->pc) {
        case 0x28e0c0u: goto label_28e0c0;
        case 0x28e0c4u: goto label_28e0c4;
        case 0x28e0c8u: goto label_28e0c8;
        case 0x28e0ccu: goto label_28e0cc;
        case 0x28e0d0u: goto label_28e0d0;
        case 0x28e0d4u: goto label_28e0d4;
        case 0x28e0d8u: goto label_28e0d8;
        case 0x28e0dcu: goto label_28e0dc;
        case 0x28e0e0u: goto label_28e0e0;
        case 0x28e0e4u: goto label_28e0e4;
        case 0x28e0e8u: goto label_28e0e8;
        case 0x28e0ecu: goto label_28e0ec;
        case 0x28e0f0u: goto label_28e0f0;
        case 0x28e0f4u: goto label_28e0f4;
        case 0x28e0f8u: goto label_28e0f8;
        case 0x28e0fcu: goto label_28e0fc;
        case 0x28e100u: goto label_28e100;
        case 0x28e104u: goto label_28e104;
        case 0x28e108u: goto label_28e108;
        case 0x28e10cu: goto label_28e10c;
        case 0x28e110u: goto label_28e110;
        case 0x28e114u: goto label_28e114;
        case 0x28e118u: goto label_28e118;
        case 0x28e11cu: goto label_28e11c;
        case 0x28e120u: goto label_28e120;
        case 0x28e124u: goto label_28e124;
        case 0x28e128u: goto label_28e128;
        case 0x28e12cu: goto label_28e12c;
        case 0x28e130u: goto label_28e130;
        case 0x28e134u: goto label_28e134;
        case 0x28e138u: goto label_28e138;
        case 0x28e13cu: goto label_28e13c;
        case 0x28e140u: goto label_28e140;
        case 0x28e144u: goto label_28e144;
        case 0x28e148u: goto label_28e148;
        case 0x28e14cu: goto label_28e14c;
        case 0x28e150u: goto label_28e150;
        case 0x28e154u: goto label_28e154;
        case 0x28e158u: goto label_28e158;
        case 0x28e15cu: goto label_28e15c;
        case 0x28e160u: goto label_28e160;
        case 0x28e164u: goto label_28e164;
        case 0x28e168u: goto label_28e168;
        case 0x28e16cu: goto label_28e16c;
        case 0x28e170u: goto label_28e170;
        case 0x28e174u: goto label_28e174;
        case 0x28e178u: goto label_28e178;
        case 0x28e17cu: goto label_28e17c;
        case 0x28e180u: goto label_28e180;
        case 0x28e184u: goto label_28e184;
        case 0x28e188u: goto label_28e188;
        case 0x28e18cu: goto label_28e18c;
        case 0x28e190u: goto label_28e190;
        case 0x28e194u: goto label_28e194;
        case 0x28e198u: goto label_28e198;
        case 0x28e19cu: goto label_28e19c;
        case 0x28e1a0u: goto label_28e1a0;
        case 0x28e1a4u: goto label_28e1a4;
        case 0x28e1a8u: goto label_28e1a8;
        case 0x28e1acu: goto label_28e1ac;
        case 0x28e1b0u: goto label_28e1b0;
        case 0x28e1b4u: goto label_28e1b4;
        case 0x28e1b8u: goto label_28e1b8;
        case 0x28e1bcu: goto label_28e1bc;
        case 0x28e1c0u: goto label_28e1c0;
        case 0x28e1c4u: goto label_28e1c4;
        case 0x28e1c8u: goto label_28e1c8;
        case 0x28e1ccu: goto label_28e1cc;
        case 0x28e1d0u: goto label_28e1d0;
        case 0x28e1d4u: goto label_28e1d4;
        case 0x28e1d8u: goto label_28e1d8;
        case 0x28e1dcu: goto label_28e1dc;
        case 0x28e1e0u: goto label_28e1e0;
        case 0x28e1e4u: goto label_28e1e4;
        case 0x28e1e8u: goto label_28e1e8;
        case 0x28e1ecu: goto label_28e1ec;
        case 0x28e1f0u: goto label_28e1f0;
        case 0x28e1f4u: goto label_28e1f4;
        case 0x28e1f8u: goto label_28e1f8;
        case 0x28e1fcu: goto label_28e1fc;
        case 0x28e200u: goto label_28e200;
        case 0x28e204u: goto label_28e204;
        case 0x28e208u: goto label_28e208;
        case 0x28e20cu: goto label_28e20c;
        case 0x28e210u: goto label_28e210;
        case 0x28e214u: goto label_28e214;
        case 0x28e218u: goto label_28e218;
        case 0x28e21cu: goto label_28e21c;
        case 0x28e220u: goto label_28e220;
        case 0x28e224u: goto label_28e224;
        case 0x28e228u: goto label_28e228;
        case 0x28e22cu: goto label_28e22c;
        case 0x28e230u: goto label_28e230;
        case 0x28e234u: goto label_28e234;
        case 0x28e238u: goto label_28e238;
        case 0x28e23cu: goto label_28e23c;
        case 0x28e240u: goto label_28e240;
        case 0x28e244u: goto label_28e244;
        case 0x28e248u: goto label_28e248;
        case 0x28e24cu: goto label_28e24c;
        case 0x28e250u: goto label_28e250;
        case 0x28e254u: goto label_28e254;
        case 0x28e258u: goto label_28e258;
        case 0x28e25cu: goto label_28e25c;
        case 0x28e260u: goto label_28e260;
        case 0x28e264u: goto label_28e264;
        case 0x28e268u: goto label_28e268;
        case 0x28e26cu: goto label_28e26c;
        case 0x28e270u: goto label_28e270;
        case 0x28e274u: goto label_28e274;
        case 0x28e278u: goto label_28e278;
        case 0x28e27cu: goto label_28e27c;
        case 0x28e280u: goto label_28e280;
        case 0x28e284u: goto label_28e284;
        case 0x28e288u: goto label_28e288;
        case 0x28e28cu: goto label_28e28c;
        case 0x28e290u: goto label_28e290;
        case 0x28e294u: goto label_28e294;
        case 0x28e298u: goto label_28e298;
        case 0x28e29cu: goto label_28e29c;
        case 0x28e2a0u: goto label_28e2a0;
        case 0x28e2a4u: goto label_28e2a4;
        case 0x28e2a8u: goto label_28e2a8;
        case 0x28e2acu: goto label_28e2ac;
        case 0x28e2b0u: goto label_28e2b0;
        case 0x28e2b4u: goto label_28e2b4;
        case 0x28e2b8u: goto label_28e2b8;
        case 0x28e2bcu: goto label_28e2bc;
        case 0x28e2c0u: goto label_28e2c0;
        case 0x28e2c4u: goto label_28e2c4;
        case 0x28e2c8u: goto label_28e2c8;
        case 0x28e2ccu: goto label_28e2cc;
        case 0x28e2d0u: goto label_28e2d0;
        case 0x28e2d4u: goto label_28e2d4;
        case 0x28e2d8u: goto label_28e2d8;
        case 0x28e2dcu: goto label_28e2dc;
        case 0x28e2e0u: goto label_28e2e0;
        case 0x28e2e4u: goto label_28e2e4;
        case 0x28e2e8u: goto label_28e2e8;
        case 0x28e2ecu: goto label_28e2ec;
        case 0x28e2f0u: goto label_28e2f0;
        case 0x28e2f4u: goto label_28e2f4;
        case 0x28e2f8u: goto label_28e2f8;
        case 0x28e2fcu: goto label_28e2fc;
        case 0x28e300u: goto label_28e300;
        case 0x28e304u: goto label_28e304;
        case 0x28e308u: goto label_28e308;
        case 0x28e30cu: goto label_28e30c;
        case 0x28e310u: goto label_28e310;
        case 0x28e314u: goto label_28e314;
        case 0x28e318u: goto label_28e318;
        case 0x28e31cu: goto label_28e31c;
        case 0x28e320u: goto label_28e320;
        case 0x28e324u: goto label_28e324;
        case 0x28e328u: goto label_28e328;
        case 0x28e32cu: goto label_28e32c;
        case 0x28e330u: goto label_28e330;
        case 0x28e334u: goto label_28e334;
        case 0x28e338u: goto label_28e338;
        case 0x28e33cu: goto label_28e33c;
        case 0x28e340u: goto label_28e340;
        case 0x28e344u: goto label_28e344;
        case 0x28e348u: goto label_28e348;
        case 0x28e34cu: goto label_28e34c;
        case 0x28e350u: goto label_28e350;
        case 0x28e354u: goto label_28e354;
        case 0x28e358u: goto label_28e358;
        case 0x28e35cu: goto label_28e35c;
        case 0x28e360u: goto label_28e360;
        case 0x28e364u: goto label_28e364;
        case 0x28e368u: goto label_28e368;
        case 0x28e36cu: goto label_28e36c;
        case 0x28e370u: goto label_28e370;
        case 0x28e374u: goto label_28e374;
        case 0x28e378u: goto label_28e378;
        case 0x28e37cu: goto label_28e37c;
        case 0x28e380u: goto label_28e380;
        case 0x28e384u: goto label_28e384;
        case 0x28e388u: goto label_28e388;
        case 0x28e38cu: goto label_28e38c;
        case 0x28e390u: goto label_28e390;
        case 0x28e394u: goto label_28e394;
        case 0x28e398u: goto label_28e398;
        case 0x28e39cu: goto label_28e39c;
        case 0x28e3a0u: goto label_28e3a0;
        case 0x28e3a4u: goto label_28e3a4;
        case 0x28e3a8u: goto label_28e3a8;
        case 0x28e3acu: goto label_28e3ac;
        case 0x28e3b0u: goto label_28e3b0;
        default: break;
    }

    ctx->pc = 0x28e0c0u;

label_28e0c0:
    // 0x28e0c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28e0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_28e0c4:
    // 0x28e0c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28e0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_28e0c8:
    // 0x28e0c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_28e0cc:
    // 0x28e0cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28e0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_28e0d0:
    // 0x28e0d0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x28e0d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28e0d4:
    // 0x28e0d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28e0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_28e0d8:
    // 0x28e0d8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x28e0d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28e0dc:
    // 0x28e0dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28e0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28e0e0:
    // 0x28e0e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28e0e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28e0e4:
    // 0x28e0e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28e0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28e0e8:
    // 0x28e0e8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x28e0e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28e0ec:
    // 0x28e0ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28e0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28e0f0:
    // 0x28e0f0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28e0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28e0f4:
    // 0x28e0f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28e0f8:
    // 0x28e0f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28e0fc:
    // 0x28e0fc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x28e0fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28e100:
    // 0x28e100: 0xc09d4d4  jal         func_275350
label_28e104:
    if (ctx->pc == 0x28E104u) {
        ctx->pc = 0x28E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E100u;
        // 0x28e104: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E108u;
        goto label_28e108;
    }
    ctx->pc = 0x28E100u;
    SET_GPR_U32(ctx, 31, 0x28E108u);
    ctx->pc = 0x28E104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E100u;
    // 0x28e104: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x28E100u, 0x28E108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E108u;
label_28e108:
    // 0x28e108: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_28e10c:
    if (ctx->pc == 0x28E10Cu) {
        ctx->pc = 0x28E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E108u;
        // 0x28e10c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E110u;
        goto label_28e110;
    }
    ctx->pc = 0x28E108u;
    {
        const bool branch_taken_0x28e108 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E108u;
        // 0x28e10c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e108) {
            ctx->pc = 0x28E120u;
            goto label_28e120;
        }
    }
    ctx->pc = 0x28E110u;
label_28e110:
    // 0x28e110: 0xc09d4d8  jal         func_275360
label_28e114:
    if (ctx->pc == 0x28E114u) {
        ctx->pc = 0x28E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E110u;
        // 0x28e114: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E118u;
        goto label_28e118;
    }
    ctx->pc = 0x28E110u;
    SET_GPR_U32(ctx, 31, 0x28E118u);
    ctx->pc = 0x28E114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E110u;
    // 0x28e114: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28E110u, 0x28E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E118u;
label_28e118:
    // 0x28e118: 0x1000009b  b           . + 4 + (0x9B << 2)
label_28e11c:
    if (ctx->pc == 0x28E11Cu) {
        ctx->pc = 0x28E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E118u;
        // 0x28e11c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E120u;
        goto label_28e120;
    }
    ctx->pc = 0x28E118u;
    {
        const bool branch_taken_0x28e118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E118u;
        // 0x28e11c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e118) {
            ctx->pc = 0x28E388u;
            goto label_28e388;
        }
    }
    ctx->pc = 0x28E120u;
label_28e120:
    // 0x28e120: 0xc0741a4  jal         func_1D0690
label_28e124:
    if (ctx->pc == 0x28E124u) {
        ctx->pc = 0x28E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E120u;
        // 0x28e124: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E128u;
        goto label_28e128;
    }
    ctx->pc = 0x28E120u;
    SET_GPR_U32(ctx, 31, 0x28E128u);
    ctx->pc = 0x28E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E120u;
    // 0x28e124: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x28E120u, 0x28E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E128u;
label_28e128:
    // 0x28e128: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28e128u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e12c:
    // 0x28e12c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_28e130:
    if (ctx->pc == 0x28E130u) {
        ctx->pc = 0x28E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E12Cu;
        // 0x28e130: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E134u;
        goto label_28e134;
    }
    ctx->pc = 0x28E12Cu;
    {
        const bool branch_taken_0x28e12c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E12Cu;
        // 0x28e130: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e12c) {
            ctx->pc = 0x28E150u;
            goto label_28e150;
        }
    }
    ctx->pc = 0x28E134u;
label_28e134:
    // 0x28e134: 0xc096b00  jal         func_25AC00
label_28e138:
    if (ctx->pc == 0x28E138u) {
        ctx->pc = 0x28E13Cu;
        goto label_28e13c;
    }
    ctx->pc = 0x28E134u;
    SET_GPR_U32(ctx, 31, 0x28E13Cu);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x28E134u, 0x28E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E13Cu;
label_28e13c:
    // 0x28e13c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x28e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_28e140:
    // 0x28e140: 0x244276a0  addiu       $v0, $v0, 0x76A0
    ctx->pc = 0x28e140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30368));
label_28e144:
    // 0x28e144: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x28e144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_28e148:
    // 0x28e148: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x28e148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_28e14c:
    // 0x28e14c: 0x0  nop
    ctx->pc = 0x28e14cu;
    // NOP
label_28e150:
    // 0x28e150: 0x12600089  beqz        $s3, . + 4 + (0x89 << 2)
label_28e154:
    if (ctx->pc == 0x28E154u) {
        ctx->pc = 0x28E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E150u;
        // 0x28e154: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E158u;
        goto label_28e158;
    }
    ctx->pc = 0x28E150u;
    {
        const bool branch_taken_0x28e150 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E150u;
        // 0x28e154: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e150) {
            ctx->pc = 0x28E378u;
            goto label_28e378;
        }
    }
    ctx->pc = 0x28E158u;
label_28e158:
    // 0x28e158: 0xc09d4fc  jal         func_2753F0
label_28e15c:
    if (ctx->pc == 0x28E15Cu) {
        ctx->pc = 0x28E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E158u;
        // 0x28e15c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E160u;
        goto label_28e160;
    }
    ctx->pc = 0x28E158u;
    SET_GPR_U32(ctx, 31, 0x28E160u);
    ctx->pc = 0x28E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E158u;
    // 0x28e15c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x28E158u, 0x28E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E160u;
label_28e160:
    // 0x28e160: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x28e160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_28e164:
    // 0x28e164: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28e164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28e168:
    // 0x28e168: 0xc09d524  jal         func_275490
label_28e16c:
    if (ctx->pc == 0x28E16Cu) {
        ctx->pc = 0x28E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E168u;
        // 0x28e16c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E170u;
        goto label_28e170;
    }
    ctx->pc = 0x28E168u;
    SET_GPR_U32(ctx, 31, 0x28E170u);
    ctx->pc = 0x28E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E168u;
    // 0x28e16c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x28E168u, 0x28E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E170u;
label_28e170:
    // 0x28e170: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28e170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e174:
    // 0x28e174: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
label_28e178:
    if (ctx->pc == 0x28E178u) {
        ctx->pc = 0x28E17Cu;
        goto label_28e17c;
    }
    ctx->pc = 0x28E174u;
    {
        const bool branch_taken_0x28e174 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e174) {
            ctx->pc = 0x28E1B0u;
            goto label_28e1b0;
        }
    }
    ctx->pc = 0x28E17Cu;
label_28e17c:
    // 0x28e17c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_28e180:
    if (ctx->pc == 0x28E180u) {
        ctx->pc = 0x28E184u;
        goto label_28e184;
    }
    ctx->pc = 0x28E17Cu;
    {
        const bool branch_taken_0x28e17c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e17c) {
            ctx->pc = 0x28E198u;
            goto label_28e198;
        }
    }
    ctx->pc = 0x28E184u;
label_28e184:
    // 0x28e184: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x28e184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_28e188:
    // 0x28e188: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28e188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e18c:
    // 0x28e18c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x28e18cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_28e190:
    // 0x28e190: 0x320f809  jalr        $t9
label_28e194:
    if (ctx->pc == 0x28E194u) {
        ctx->pc = 0x28E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E190u;
        // 0x28e194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E198u;
        goto label_28e198;
    }
    ctx->pc = 0x28E190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28E198u);
        ctx->pc = 0x28E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E190u;
        // 0x28e194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E190u, 0x28E198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E198u;
label_28e198:
    // 0x28e198: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28e198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28e19c:
    // 0x28e19c: 0xc09d4d8  jal         func_275360
label_28e1a0:
    if (ctx->pc == 0x28E1A0u) {
        ctx->pc = 0x28E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E19Cu;
        // 0x28e1a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E1A4u;
        goto label_28e1a4;
    }
    ctx->pc = 0x28E19Cu;
    SET_GPR_U32(ctx, 31, 0x28E1A4u);
    ctx->pc = 0x28E1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E19Cu;
    // 0x28e1a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28E19Cu, 0x28E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E1A4u;
label_28e1a4:
    // 0x28e1a4: 0x10000078  b           . + 4 + (0x78 << 2)
label_28e1a8:
    if (ctx->pc == 0x28E1A8u) {
        ctx->pc = 0x28E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1A4u;
        // 0x28e1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E1ACu;
        goto label_28e1ac;
    }
    ctx->pc = 0x28E1A4u;
    {
        const bool branch_taken_0x28e1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1A4u;
        // 0x28e1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1a4) {
            ctx->pc = 0x28E388u;
            goto label_28e388;
        }
    }
    ctx->pc = 0x28E1ACu;
label_28e1ac:
    // 0x28e1ac: 0x0  nop
    ctx->pc = 0x28e1acu;
    // NOP
label_28e1b0:
    // 0x28e1b0: 0x92460013  lbu         $a2, 0x13($s2)
    ctx->pc = 0x28e1b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 19)));
label_28e1b4:
    // 0x28e1b4: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28e1b8:
    // 0x28e1b8: 0xc09d524  jal         func_275490
label_28e1bc:
    if (ctx->pc == 0x28E1BCu) {
        ctx->pc = 0x28E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1B8u;
        // 0x28e1bc: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E1C0u;
        goto label_28e1c0;
    }
    ctx->pc = 0x28E1B8u;
    SET_GPR_U32(ctx, 31, 0x28E1C0u);
    ctx->pc = 0x28E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E1B8u;
    // 0x28e1bc: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x28E1B8u, 0x28E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E1C0u;
label_28e1c0:
    // 0x28e1c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e1c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e1c4:
    // 0x28e1c4: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_28e1c8:
    if (ctx->pc == 0x28E1C8u) {
        ctx->pc = 0x28E1CCu;
        goto label_28e1cc;
    }
    ctx->pc = 0x28E1C4u;
    {
        const bool branch_taken_0x28e1c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e1c4) {
            ctx->pc = 0x28E200u;
            goto label_28e200;
        }
    }
    ctx->pc = 0x28E1CCu;
label_28e1cc:
    // 0x28e1cc: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_28e1d0:
    if (ctx->pc == 0x28E1D0u) {
        ctx->pc = 0x28E1D4u;
        goto label_28e1d4;
    }
    ctx->pc = 0x28E1CCu;
    {
        const bool branch_taken_0x28e1cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e1cc) {
            ctx->pc = 0x28E1E8u;
            goto label_28e1e8;
        }
    }
    ctx->pc = 0x28E1D4u;
label_28e1d4:
    // 0x28e1d4: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x28e1d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_28e1d8:
    // 0x28e1d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28e1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e1dc:
    // 0x28e1dc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x28e1dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_28e1e0:
    // 0x28e1e0: 0x320f809  jalr        $t9
label_28e1e4:
    if (ctx->pc == 0x28E1E4u) {
        ctx->pc = 0x28E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1E0u;
        // 0x28e1e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E1E8u;
        goto label_28e1e8;
    }
    ctx->pc = 0x28E1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28E1E8u);
        ctx->pc = 0x28E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1E0u;
        // 0x28e1e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E1E0u, 0x28E1E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E1E8u;
label_28e1e8:
    // 0x28e1e8: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28e1ec:
    // 0x28e1ec: 0xc09d4d8  jal         func_275360
label_28e1f0:
    if (ctx->pc == 0x28E1F0u) {
        ctx->pc = 0x28E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1ECu;
        // 0x28e1f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E1F4u;
        goto label_28e1f4;
    }
    ctx->pc = 0x28E1ECu;
    SET_GPR_U32(ctx, 31, 0x28E1F4u);
    ctx->pc = 0x28E1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E1ECu;
    // 0x28e1f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28E1ECu, 0x28E1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E1F4u;
label_28e1f4:
    // 0x28e1f4: 0x10000064  b           . + 4 + (0x64 << 2)
label_28e1f8:
    if (ctx->pc == 0x28E1F8u) {
        ctx->pc = 0x28E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1F4u;
        // 0x28e1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E1FCu;
        goto label_28e1fc;
    }
    ctx->pc = 0x28E1F4u;
    {
        const bool branch_taken_0x28e1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E1F4u;
        // 0x28e1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1f4) {
            ctx->pc = 0x28E388u;
            goto label_28e388;
        }
    }
    ctx->pc = 0x28E1FCu;
label_28e1fc:
    // 0x28e1fc: 0x0  nop
    ctx->pc = 0x28e1fcu;
    // NOP
label_28e200:
    // 0x28e200: 0x9626000e  lhu         $a2, 0xE($s1)
    ctx->pc = 0x28e200u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28e204:
    // 0x28e204: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28e204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28e208:
    // 0x28e208: 0xc09d524  jal         func_275490
label_28e20c:
    if (ctx->pc == 0x28E20Cu) {
        ctx->pc = 0x28E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E208u;
        // 0x28e20c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E210u;
        goto label_28e210;
    }
    ctx->pc = 0x28E208u;
    SET_GPR_U32(ctx, 31, 0x28E210u);
    ctx->pc = 0x28E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E208u;
    // 0x28e20c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x28E208u, 0x28E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E210u;
label_28e210:
    // 0x28e210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e214:
    // 0x28e214: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_28e218:
    if (ctx->pc == 0x28E218u) {
        ctx->pc = 0x28E21Cu;
        goto label_28e21c;
    }
    ctx->pc = 0x28E214u;
    {
        const bool branch_taken_0x28e214 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e214) {
            ctx->pc = 0x28E250u;
            goto label_28e250;
        }
    }
    ctx->pc = 0x28E21Cu;
label_28e21c:
    // 0x28e21c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_28e220:
    if (ctx->pc == 0x28E220u) {
        ctx->pc = 0x28E224u;
        goto label_28e224;
    }
    ctx->pc = 0x28E21Cu;
    {
        const bool branch_taken_0x28e21c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e21c) {
            ctx->pc = 0x28E238u;
            goto label_28e238;
        }
    }
    ctx->pc = 0x28E224u;
label_28e224:
    // 0x28e224: 0x8e790034  lw          $t9, 0x34($s3)
    ctx->pc = 0x28e224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_28e228:
    // 0x28e228: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28e228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e22c:
    // 0x28e22c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x28e22cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_28e230:
    // 0x28e230: 0x320f809  jalr        $t9
label_28e234:
    if (ctx->pc == 0x28E234u) {
        ctx->pc = 0x28E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E230u;
        // 0x28e234: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E238u;
        goto label_28e238;
    }
    ctx->pc = 0x28E230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28E238u);
        ctx->pc = 0x28E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E230u;
        // 0x28e234: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E230u, 0x28E238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E238u;
label_28e238:
    // 0x28e238: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28e238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28e23c:
    // 0x28e23c: 0xc09d4d8  jal         func_275360
label_28e240:
    if (ctx->pc == 0x28E240u) {
        ctx->pc = 0x28E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E23Cu;
        // 0x28e240: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E244u;
        goto label_28e244;
    }
    ctx->pc = 0x28E23Cu;
    SET_GPR_U32(ctx, 31, 0x28E244u);
    ctx->pc = 0x28E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E23Cu;
    // 0x28e240: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28E23Cu, 0x28E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E244u;
label_28e244:
    // 0x28e244: 0x10000050  b           . + 4 + (0x50 << 2)
label_28e248:
    if (ctx->pc == 0x28E248u) {
        ctx->pc = 0x28E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E244u;
        // 0x28e248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E24Cu;
        goto label_28e24c;
    }
    ctx->pc = 0x28E244u;
    {
        const bool branch_taken_0x28e244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E244u;
        // 0x28e248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e244) {
            ctx->pc = 0x28E388u;
            goto label_28e388;
        }
    }
    ctx->pc = 0x28E24Cu;
label_28e24c:
    // 0x28e24c: 0x0  nop
    ctx->pc = 0x28e24cu;
    // NOP
label_28e250:
    // 0x28e250: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x28e250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28e254:
    // 0x28e254: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x28e254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28e258:
    // 0x28e258: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x28e258u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28e25c:
    // 0x28e25c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28e25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e260:
    // 0x28e260: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x28e260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_28e264:
    // 0x28e264: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x28e264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_28e268:
    // 0x28e268: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x28e268u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28e26c:
    // 0x28e26c: 0xc096b38  jal         func_25ACE0
label_28e270:
    if (ctx->pc == 0x28E270u) {
        ctx->pc = 0x28E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E26Cu;
        // 0x28e270: 0x268b0020  addiu       $t3, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E274u;
        goto label_28e274;
    }
    ctx->pc = 0x28E26Cu;
    SET_GPR_U32(ctx, 31, 0x28E274u);
    ctx->pc = 0x28E270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E26Cu;
    // 0x28e270: 0x268b0020  addiu       $t3, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x28E26Cu, 0x28E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E274u;
label_28e274:
    // 0x28e274: 0x92620050  lbu         $v0, 0x50($s3)
    ctx->pc = 0x28e274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 80)));
label_28e278:
    // 0x28e278: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x28e278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_28e27c:
    // 0x28e27c: 0xa2620050  sb          $v0, 0x50($s3)
    ctx->pc = 0x28e27cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
label_28e280:
    // 0x28e280: 0xa660005a  sh          $zero, 0x5A($s3)
    ctx->pc = 0x28e280u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 90), (uint16_t)GPR_U32(ctx, 0));
label_28e284:
    // 0x28e284: 0xa6600058  sh          $zero, 0x58($s3)
    ctx->pc = 0x28e284u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 88), (uint16_t)GPR_U32(ctx, 0));
label_28e288:
    // 0x28e288: 0xa6600056  sh          $zero, 0x56($s3)
    ctx->pc = 0x28e288u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
label_28e28c:
    // 0x28e28c: 0xa2600051  sb          $zero, 0x51($s3)
    ctx->pc = 0x28e28cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 81), (uint8_t)GPR_U32(ctx, 0));
label_28e290:
    // 0x28e290: 0xae720070  sw          $s2, 0x70($s3)
    ctx->pc = 0x28e290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 18));
label_28e294:
    // 0x28e294: 0xae710074  sw          $s1, 0x74($s3)
    ctx->pc = 0x28e294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 17));
label_28e298:
    // 0x28e298: 0xae700078  sw          $s0, 0x78($s3)
    ctx->pc = 0x28e298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 16));
label_28e29c:
    // 0x28e29c: 0x92420012  lbu         $v0, 0x12($s2)
    ctx->pc = 0x28e29cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
label_28e2a0:
    // 0x28e2a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28e2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_28e2a4:
    // 0x28e2a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_28e2a8:
    if (ctx->pc == 0x28E2A8u) {
        ctx->pc = 0x28E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2A4u;
        // 0x28e2a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E2ACu;
        goto label_28e2ac;
    }
    ctx->pc = 0x28E2A4u;
    {
        const bool branch_taken_0x28e2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2A4u;
        // 0x28e2a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2a4) {
            ctx->pc = 0x28E2B4u;
            goto label_28e2b4;
        }
    }
    ctx->pc = 0x28E2ACu;
label_28e2ac:
    // 0x28e2ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e2b0:
    if (ctx->pc == 0x28E2B0u) {
        ctx->pc = 0x28E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2ACu;
        // 0x28e2b0: 0xa6620080  sh          $v0, 0x80($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E2B4u;
        goto label_28e2b4;
    }
    ctx->pc = 0x28E2ACu;
    {
        const bool branch_taken_0x28e2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2ACu;
        // 0x28e2b0: 0xa6620080  sh          $v0, 0x80($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2ac) {
            ctx->pc = 0x28E2BCu;
            goto label_28e2bc;
        }
    }
    ctx->pc = 0x28E2B4u;
label_28e2b4:
    // 0x28e2b4: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x28e2b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
label_28e2b8:
    // 0x28e2b8: 0xa6620080  sh          $v0, 0x80($s3)
    ctx->pc = 0x28e2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 2));
label_28e2bc:
    // 0x28e2bc: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x28e2bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_28e2c0:
    // 0x28e2c0: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x28e2c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_28e2c4:
    // 0x28e2c4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x28e2c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28e2c8:
    // 0x28e2c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x28e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_28e2cc:
    // 0x28e2cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28e2d0:
    // 0x28e2d0: 0xc0741a4  jal         func_1D0690
label_28e2d4:
    if (ctx->pc == 0x28E2D4u) {
        ctx->pc = 0x28E2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2D0u;
        // 0x28e2d4: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E2D8u;
        goto label_28e2d8;
    }
    ctx->pc = 0x28E2D0u;
    SET_GPR_U32(ctx, 31, 0x28E2D8u);
    ctx->pc = 0x28E2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E2D0u;
    // 0x28e2d4: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x28E2D0u, 0x28E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2D8u;
label_28e2d8:
    // 0x28e2d8: 0xae62007c  sw          $v0, 0x7C($s3)
    ctx->pc = 0x28e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 2));
label_28e2dc:
    // 0x28e2dc: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x28e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_28e2e0:
    // 0x28e2e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e2e4:
    if (ctx->pc == 0x28E2E4u) {
        ctx->pc = 0x28E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2E0u;
        // 0x28e2e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E2E8u;
        goto label_28e2e8;
    }
    ctx->pc = 0x28E2E0u;
    {
        const bool branch_taken_0x28e2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2E0u;
        // 0x28e2e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2e0) {
            ctx->pc = 0x28E308u;
            goto label_28e308;
        }
    }
    ctx->pc = 0x28E2E8u;
label_28e2e8:
    // 0x28e2e8: 0xc074268  jal         func_1D09A0
label_28e2ec:
    if (ctx->pc == 0x28E2ECu) {
        ctx->pc = 0x28E2F0u;
        goto label_28e2f0;
    }
    ctx->pc = 0x28E2E8u;
    SET_GPR_U32(ctx, 31, 0x28E2F0u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x28E2E8u, 0x28E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2F0u;
label_28e2f0:
    // 0x28e2f0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28e2f4:
    // 0x28e2f4: 0xc09d4d8  jal         func_275360
label_28e2f8:
    if (ctx->pc == 0x28E2F8u) {
        ctx->pc = 0x28E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2F4u;
        // 0x28e2f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E2FCu;
        goto label_28e2fc;
    }
    ctx->pc = 0x28E2F4u;
    SET_GPR_U32(ctx, 31, 0x28E2FCu);
    ctx->pc = 0x28E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E2F4u;
    // 0x28e2f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28E2F4u, 0x28E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E2FCu;
label_28e2fc:
    // 0x28e2fc: 0x10000022  b           . + 4 + (0x22 << 2)
label_28e300:
    if (ctx->pc == 0x28E300u) {
        ctx->pc = 0x28E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2FCu;
        // 0x28e300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E304u;
        goto label_28e304;
    }
    ctx->pc = 0x28E2FCu;
    {
        const bool branch_taken_0x28e2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E2FCu;
        // 0x28e300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2fc) {
            ctx->pc = 0x28E388u;
            goto label_28e388;
        }
    }
    ctx->pc = 0x28E304u;
label_28e304:
    // 0x28e304: 0x0  nop
    ctx->pc = 0x28e304u;
    // NOP
label_28e308:
    // 0x28e308: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x28e308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_28e30c:
    // 0x28e30c: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x28e30cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_28e310:
    // 0x28e310: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28e310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28e314:
    // 0x28e314: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28e314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28e318:
    // 0x28e318: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_28e31c:
    if (ctx->pc == 0x28E31Cu) {
        ctx->pc = 0x28E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E318u;
        // 0x28e31c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E320u;
        goto label_28e320;
    }
    ctx->pc = 0x28E318u;
    {
        const bool branch_taken_0x28e318 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E318u;
        // 0x28e31c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e318) {
            ctx->pc = 0x28E360u;
            goto label_28e360;
        }
    }
    ctx->pc = 0x28E320u;
label_28e320:
    // 0x28e320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28e320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e324:
    // 0x28e324: 0x24047ffe  addiu       $a0, $zero, 0x7FFE
    ctx->pc = 0x28e324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_28e328:
    // 0x28e328: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x28e328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_28e32c:
    // 0x28e32c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28e32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_28e330:
    // 0x28e330: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28e330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_28e334:
    // 0x28e334: 0xa4440020  sh          $a0, 0x20($v0)
    ctx->pc = 0x28e334u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 4));
label_28e338:
    // 0x28e338: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x28e338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_28e33c:
    // 0x28e33c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_28e340:
    // 0x28e340: 0xa0400025  sb          $zero, 0x25($v0)
    ctx->pc = 0x28e340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 37), (uint8_t)GPR_U32(ctx, 0));
label_28e344:
    // 0x28e344: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x28e344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_28e348:
    // 0x28e348: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x28e348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_28e34c:
    // 0x28e34c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28e34cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28e350:
    // 0x28e350: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x28e350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28e354:
    // 0x28e354: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_28e358:
    if (ctx->pc == 0x28E358u) {
        ctx->pc = 0x28E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E354u;
        // 0x28e358: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E35Cu;
        goto label_28e35c;
    }
    ctx->pc = 0x28E354u;
    {
        const bool branch_taken_0x28e354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E354u;
        // 0x28e358: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e354) {
            ctx->pc = 0x28E328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e328;
        }
    }
    ctx->pc = 0x28E35Cu;
label_28e35c:
    // 0x28e35c: 0x0  nop
    ctx->pc = 0x28e35cu;
    // NOP
label_28e360:
    // 0x28e360: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x28e360u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28e364:
    // 0x28e364: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28e364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28e368:
    // 0x28e368: 0xc09d4d8  jal         func_275360
label_28e36c:
    if (ctx->pc == 0x28E36Cu) {
        ctx->pc = 0x28E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E368u;
        // 0x28e36c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E370u;
        goto label_28e370;
    }
    ctx->pc = 0x28E368u;
    SET_GPR_U32(ctx, 31, 0x28E370u);
    ctx->pc = 0x28E36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E368u;
    // 0x28e36c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28E368u, 0x28E370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E370u;
label_28e370:
    // 0x28e370: 0x10000005  b           . + 4 + (0x5 << 2)
label_28e374:
    if (ctx->pc == 0x28E374u) {
        ctx->pc = 0x28E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E370u;
        // 0x28e374: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E378u;
        goto label_28e378;
    }
    ctx->pc = 0x28E370u;
    {
        const bool branch_taken_0x28e370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E370u;
        // 0x28e374: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e370) {
            ctx->pc = 0x28E388u;
            goto label_28e388;
        }
    }
    ctx->pc = 0x28E378u;
label_28e378:
    // 0x28e378: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x28e378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_28e37c:
    // 0x28e37c: 0xc09d4d8  jal         func_275360
label_28e380:
    if (ctx->pc == 0x28E380u) {
        ctx->pc = 0x28E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E37Cu;
        // 0x28e380: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E384u;
        goto label_28e384;
    }
    ctx->pc = 0x28E37Cu;
    SET_GPR_U32(ctx, 31, 0x28E384u);
    ctx->pc = 0x28E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E37Cu;
    // 0x28e380: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x28E37Cu, 0x28E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E384u;
label_28e384:
    // 0x28e384: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28e384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e388:
    // 0x28e388: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28e388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_28e38c:
    // 0x28e38c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28e38cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28e390:
    // 0x28e390: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28e390u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28e394:
    // 0x28e394: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28e394u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28e398:
    // 0x28e398: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28e398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28e39c:
    // 0x28e39c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28e39cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28e3a0:
    // 0x28e3a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28e3a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28e3a4:
    // 0x28e3a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28e3a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28e3a8:
    // 0x28e3a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28e3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28e3ac:
    // 0x28e3ac: 0x3e00008  jr          $ra
label_28e3b0:
    if (ctx->pc == 0x28E3B0u) {
        ctx->pc = 0x28E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E3ACu;
        // 0x28e3b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E3B4u;
        goto label_fallthrough_0x28e3ac;
    }
    ctx->pc = 0x28E3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E3ACu;
        // 0x28e3b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28e3ac:
    ctx->pc = 0x28E3B4u;
}
