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

// Function: sub_0017D170
// Address: 0x17d170 - 0x17d48c
void sub_0017D170_0x17d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D170_0x17d170");
#endif

    switch (ctx->pc) {
        case 0x17d170u: goto label_17d170;
        case 0x17d174u: goto label_17d174;
        case 0x17d178u: goto label_17d178;
        case 0x17d17cu: goto label_17d17c;
        case 0x17d180u: goto label_17d180;
        case 0x17d184u: goto label_17d184;
        case 0x17d188u: goto label_17d188;
        case 0x17d18cu: goto label_17d18c;
        case 0x17d190u: goto label_17d190;
        case 0x17d194u: goto label_17d194;
        case 0x17d198u: goto label_17d198;
        case 0x17d19cu: goto label_17d19c;
        case 0x17d1a0u: goto label_17d1a0;
        case 0x17d1a4u: goto label_17d1a4;
        case 0x17d1a8u: goto label_17d1a8;
        case 0x17d1acu: goto label_17d1ac;
        case 0x17d1b0u: goto label_17d1b0;
        case 0x17d1b4u: goto label_17d1b4;
        case 0x17d1b8u: goto label_17d1b8;
        case 0x17d1bcu: goto label_17d1bc;
        case 0x17d1c0u: goto label_17d1c0;
        case 0x17d1c4u: goto label_17d1c4;
        case 0x17d1c8u: goto label_17d1c8;
        case 0x17d1ccu: goto label_17d1cc;
        case 0x17d1d0u: goto label_17d1d0;
        case 0x17d1d4u: goto label_17d1d4;
        case 0x17d1d8u: goto label_17d1d8;
        case 0x17d1dcu: goto label_17d1dc;
        case 0x17d1e0u: goto label_17d1e0;
        case 0x17d1e4u: goto label_17d1e4;
        case 0x17d1e8u: goto label_17d1e8;
        case 0x17d1ecu: goto label_17d1ec;
        case 0x17d1f0u: goto label_17d1f0;
        case 0x17d1f4u: goto label_17d1f4;
        case 0x17d1f8u: goto label_17d1f8;
        case 0x17d1fcu: goto label_17d1fc;
        case 0x17d200u: goto label_17d200;
        case 0x17d204u: goto label_17d204;
        case 0x17d208u: goto label_17d208;
        case 0x17d20cu: goto label_17d20c;
        case 0x17d210u: goto label_17d210;
        case 0x17d214u: goto label_17d214;
        case 0x17d218u: goto label_17d218;
        case 0x17d21cu: goto label_17d21c;
        case 0x17d220u: goto label_17d220;
        case 0x17d224u: goto label_17d224;
        case 0x17d228u: goto label_17d228;
        case 0x17d22cu: goto label_17d22c;
        case 0x17d230u: goto label_17d230;
        case 0x17d234u: goto label_17d234;
        case 0x17d238u: goto label_17d238;
        case 0x17d23cu: goto label_17d23c;
        case 0x17d240u: goto label_17d240;
        case 0x17d244u: goto label_17d244;
        case 0x17d248u: goto label_17d248;
        case 0x17d24cu: goto label_17d24c;
        case 0x17d250u: goto label_17d250;
        case 0x17d254u: goto label_17d254;
        case 0x17d258u: goto label_17d258;
        case 0x17d25cu: goto label_17d25c;
        case 0x17d260u: goto label_17d260;
        case 0x17d264u: goto label_17d264;
        case 0x17d268u: goto label_17d268;
        case 0x17d26cu: goto label_17d26c;
        case 0x17d270u: goto label_17d270;
        case 0x17d274u: goto label_17d274;
        case 0x17d278u: goto label_17d278;
        case 0x17d27cu: goto label_17d27c;
        case 0x17d280u: goto label_17d280;
        case 0x17d284u: goto label_17d284;
        case 0x17d288u: goto label_17d288;
        case 0x17d28cu: goto label_17d28c;
        case 0x17d290u: goto label_17d290;
        case 0x17d294u: goto label_17d294;
        case 0x17d298u: goto label_17d298;
        case 0x17d29cu: goto label_17d29c;
        case 0x17d2a0u: goto label_17d2a0;
        case 0x17d2a4u: goto label_17d2a4;
        case 0x17d2a8u: goto label_17d2a8;
        case 0x17d2acu: goto label_17d2ac;
        case 0x17d2b0u: goto label_17d2b0;
        case 0x17d2b4u: goto label_17d2b4;
        case 0x17d2b8u: goto label_17d2b8;
        case 0x17d2bcu: goto label_17d2bc;
        case 0x17d2c0u: goto label_17d2c0;
        case 0x17d2c4u: goto label_17d2c4;
        case 0x17d2c8u: goto label_17d2c8;
        case 0x17d2ccu: goto label_17d2cc;
        case 0x17d2d0u: goto label_17d2d0;
        case 0x17d2d4u: goto label_17d2d4;
        case 0x17d2d8u: goto label_17d2d8;
        case 0x17d2dcu: goto label_17d2dc;
        case 0x17d2e0u: goto label_17d2e0;
        case 0x17d2e4u: goto label_17d2e4;
        case 0x17d2e8u: goto label_17d2e8;
        case 0x17d2ecu: goto label_17d2ec;
        case 0x17d2f0u: goto label_17d2f0;
        case 0x17d2f4u: goto label_17d2f4;
        case 0x17d2f8u: goto label_17d2f8;
        case 0x17d2fcu: goto label_17d2fc;
        case 0x17d300u: goto label_17d300;
        case 0x17d304u: goto label_17d304;
        case 0x17d308u: goto label_17d308;
        case 0x17d30cu: goto label_17d30c;
        case 0x17d310u: goto label_17d310;
        case 0x17d314u: goto label_17d314;
        case 0x17d318u: goto label_17d318;
        case 0x17d31cu: goto label_17d31c;
        case 0x17d320u: goto label_17d320;
        case 0x17d324u: goto label_17d324;
        case 0x17d328u: goto label_17d328;
        case 0x17d32cu: goto label_17d32c;
        case 0x17d330u: goto label_17d330;
        case 0x17d334u: goto label_17d334;
        case 0x17d338u: goto label_17d338;
        case 0x17d33cu: goto label_17d33c;
        case 0x17d340u: goto label_17d340;
        case 0x17d344u: goto label_17d344;
        case 0x17d348u: goto label_17d348;
        case 0x17d34cu: goto label_17d34c;
        case 0x17d350u: goto label_17d350;
        case 0x17d354u: goto label_17d354;
        case 0x17d358u: goto label_17d358;
        case 0x17d35cu: goto label_17d35c;
        case 0x17d360u: goto label_17d360;
        case 0x17d364u: goto label_17d364;
        case 0x17d368u: goto label_17d368;
        case 0x17d36cu: goto label_17d36c;
        case 0x17d370u: goto label_17d370;
        case 0x17d374u: goto label_17d374;
        case 0x17d378u: goto label_17d378;
        case 0x17d37cu: goto label_17d37c;
        case 0x17d380u: goto label_17d380;
        case 0x17d384u: goto label_17d384;
        case 0x17d388u: goto label_17d388;
        case 0x17d38cu: goto label_17d38c;
        case 0x17d390u: goto label_17d390;
        case 0x17d394u: goto label_17d394;
        case 0x17d398u: goto label_17d398;
        case 0x17d39cu: goto label_17d39c;
        case 0x17d3a0u: goto label_17d3a0;
        case 0x17d3a4u: goto label_17d3a4;
        case 0x17d3a8u: goto label_17d3a8;
        case 0x17d3acu: goto label_17d3ac;
        case 0x17d3b0u: goto label_17d3b0;
        case 0x17d3b4u: goto label_17d3b4;
        case 0x17d3b8u: goto label_17d3b8;
        case 0x17d3bcu: goto label_17d3bc;
        case 0x17d3c0u: goto label_17d3c0;
        case 0x17d3c4u: goto label_17d3c4;
        case 0x17d3c8u: goto label_17d3c8;
        case 0x17d3ccu: goto label_17d3cc;
        case 0x17d3d0u: goto label_17d3d0;
        case 0x17d3d4u: goto label_17d3d4;
        case 0x17d3d8u: goto label_17d3d8;
        case 0x17d3dcu: goto label_17d3dc;
        case 0x17d3e0u: goto label_17d3e0;
        case 0x17d3e4u: goto label_17d3e4;
        case 0x17d3e8u: goto label_17d3e8;
        case 0x17d3ecu: goto label_17d3ec;
        case 0x17d3f0u: goto label_17d3f0;
        case 0x17d3f4u: goto label_17d3f4;
        case 0x17d3f8u: goto label_17d3f8;
        case 0x17d3fcu: goto label_17d3fc;
        case 0x17d400u: goto label_17d400;
        case 0x17d404u: goto label_17d404;
        case 0x17d408u: goto label_17d408;
        case 0x17d40cu: goto label_17d40c;
        case 0x17d410u: goto label_17d410;
        case 0x17d414u: goto label_17d414;
        case 0x17d418u: goto label_17d418;
        case 0x17d41cu: goto label_17d41c;
        case 0x17d420u: goto label_17d420;
        case 0x17d424u: goto label_17d424;
        case 0x17d428u: goto label_17d428;
        case 0x17d42cu: goto label_17d42c;
        case 0x17d430u: goto label_17d430;
        case 0x17d434u: goto label_17d434;
        case 0x17d438u: goto label_17d438;
        case 0x17d43cu: goto label_17d43c;
        case 0x17d440u: goto label_17d440;
        case 0x17d444u: goto label_17d444;
        case 0x17d448u: goto label_17d448;
        case 0x17d44cu: goto label_17d44c;
        case 0x17d450u: goto label_17d450;
        case 0x17d454u: goto label_17d454;
        case 0x17d458u: goto label_17d458;
        case 0x17d45cu: goto label_17d45c;
        case 0x17d460u: goto label_17d460;
        case 0x17d464u: goto label_17d464;
        case 0x17d468u: goto label_17d468;
        case 0x17d46cu: goto label_17d46c;
        case 0x17d470u: goto label_17d470;
        case 0x17d474u: goto label_17d474;
        case 0x17d478u: goto label_17d478;
        case 0x17d47cu: goto label_17d47c;
        case 0x17d480u: goto label_17d480;
        case 0x17d484u: goto label_17d484;
        case 0x17d488u: goto label_17d488;
        default: break;
    }

    ctx->pc = 0x17d170u;

label_17d170:
    // 0x17d170: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17d170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_17d174:
    // 0x17d174: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17d174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_17d178:
    // 0x17d178: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17d178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_17d17c:
    // 0x17d17c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17d17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_17d180:
    // 0x17d180: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17d180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_17d184:
    // 0x17d184: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x17d184u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17d188:
    // 0x17d188: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17d188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17d18c:
    // 0x17d18c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x17d18cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17d190:
    // 0x17d190: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17d190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17d194:
    // 0x17d194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17d194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17d198:
    // 0x17d198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17d19c:
    // 0x17d19c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17d1a0:
    // 0x17d1a0: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x17d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_17d1a4:
    // 0x17d1a4: 0x106000ae  beqz        $v1, . + 4 + (0xAE << 2)
label_17d1a8:
    if (ctx->pc == 0x17D1A8u) {
        ctx->pc = 0x17D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1A4u;
        // 0x17d1a8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D1ACu;
        goto label_17d1ac;
    }
    ctx->pc = 0x17D1A4u;
    {
        const bool branch_taken_0x17d1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1A4u;
        // 0x17d1a8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1a4) {
            ctx->pc = 0x17D460u;
            goto label_17d460;
        }
    }
    ctx->pc = 0x17D1ACu;
label_17d1ac:
    // 0x17d1ac: 0x8ec20078  lw          $v0, 0x78($s6)
    ctx->pc = 0x17d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
label_17d1b0:
    // 0x17d1b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x17d1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_17d1b4:
    // 0x17d1b4: 0x8ed2007c  lw          $s2, 0x7C($s6)
    ctx->pc = 0x17d1b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
label_17d1b8:
    // 0x17d1b8: 0x9037cea4  lbu         $s7, -0x315C($at)
    ctx->pc = 0x17d1b8u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294954660)));
label_17d1bc:
    // 0x17d1bc: 0xc0a83c8  jal         func_2A0F20
label_17d1c0:
    if (ctx->pc == 0x17D1C0u) {
        ctx->pc = 0x17D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1BCu;
        // 0x17d1c0: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D1C4u;
        goto label_17d1c4;
    }
    ctx->pc = 0x17D1BCu;
    SET_GPR_U32(ctx, 31, 0x17D1C4u);
    ctx->pc = 0x17D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D1BCu;
    // 0x17d1c0: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0F20u, 0x17D1BCu, 0x17D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D1C4u;
label_17d1c4:
    // 0x17d1c4: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x17d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
label_17d1c8:
    // 0x17d1c8: 0x246310c0  addiu       $v1, $v1, 0x10C0
    ctx->pc = 0x17d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4288));
label_17d1cc:
    // 0x17d1cc: 0x16c30004  bne         $s6, $v1, . + 4 + (0x4 << 2)
label_17d1d0:
    if (ctx->pc == 0x17D1D0u) {
        ctx->pc = 0x17D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1CCu;
        // 0x17d1d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D1D4u;
        goto label_17d1d4;
    }
    ctx->pc = 0x17D1CCu;
    {
        const bool branch_taken_0x17d1cc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x17D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1CCu;
        // 0x17d1d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1cc) {
            ctx->pc = 0x17D1E0u;
            goto label_17d1e0;
        }
    }
    ctx->pc = 0x17D1D4u;
label_17d1d4:
    // 0x17d1d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_17d1d8:
    if (ctx->pc == 0x17D1D8u) {
        ctx->pc = 0x17D1DCu;
        goto label_17d1dc;
    }
    ctx->pc = 0x17D1D4u;
    {
        const bool branch_taken_0x17d1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d1d4) {
            ctx->pc = 0x17D1E8u;
            goto label_17d1e8;
        }
    }
    ctx->pc = 0x17D1DCu;
label_17d1dc:
    // 0x17d1dc: 0x0  nop
    ctx->pc = 0x17d1dcu;
    // NOP
label_17d1e0:
    // 0x17d1e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17d1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17d1e4:
    // 0x17d1e4: 0x0  nop
    ctx->pc = 0x17d1e4u;
    // NOP
label_17d1e8:
    // 0x17d1e8: 0x10000099  b           . + 4 + (0x99 << 2)
label_17d1ec:
    if (ctx->pc == 0x17D1ECu) {
        ctx->pc = 0x17D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1E8u;
        // 0x17d1ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D1F0u;
        goto label_17d1f0;
    }
    ctx->pc = 0x17D1E8u;
    {
        const bool branch_taken_0x17d1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1E8u;
        // 0x17d1ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1e8) {
            ctx->pc = 0x17D450u;
            goto label_17d450;
        }
    }
    ctx->pc = 0x17D1F0u;
label_17d1f0:
    // 0x17d1f0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x17d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17d1f4:
    // 0x17d1f4: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x17d1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
label_17d1f8:
    // 0x17d1f8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x17d1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_17d1fc:
    // 0x17d1fc: 0x14600090  bnez        $v1, . + 4 + (0x90 << 2)
label_17d200:
    if (ctx->pc == 0x17D200u) {
        ctx->pc = 0x17D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1FCu;
        // 0x17d200: 0x240322b0  addiu       $v1, $zero, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D204u;
        goto label_17d204;
    }
    ctx->pc = 0x17D1FCu;
    {
        const bool branch_taken_0x17d1fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D1FCu;
        // 0x17d200: 0x240322b0  addiu       $v1, $zero, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1fc) {
            ctx->pc = 0x17D440u;
            goto label_17d440;
        }
    }
    ctx->pc = 0x17D204u;
label_17d204:
    // 0x17d204: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x17d204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
label_17d208:
    // 0x17d208: 0x2032818  mult        $a1, $s0, $v1
    ctx->pc = 0x17d208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_17d20c:
    // 0x17d20c: 0x248495c0  addiu       $a0, $a0, -0x6A40
    ctx->pc = 0x17d20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940096));
label_17d210:
    // 0x17d210: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17d214:
    // 0x17d214: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x17d214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_17d218:
    // 0x17d218: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x17d218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17d21c:
    // 0x17d21c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x17d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_17d220:
    // 0x17d220: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17d220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17d224:
    // 0x17d224: 0x8c84007c  lw          $a0, 0x7C($a0)
    ctx->pc = 0x17d224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_17d228:
    // 0x17d228: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17d22c:
    // 0x17d22c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x17d22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_17d230:
    // 0x17d230: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x17d230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_17d234:
    // 0x17d234: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
label_17d238:
    if (ctx->pc == 0x17D238u) {
        ctx->pc = 0x17D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D234u;
        // 0x17d238: 0x3c010084  lui         $at, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D23Cu;
        goto label_17d23c;
    }
    ctx->pc = 0x17D234u;
    {
        const bool branch_taken_0x17d234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D234u;
        // 0x17d238: 0x3c010084  lui         $at, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d234) {
            ctx->pc = 0x17D440u;
            goto label_17d440;
        }
    }
    ctx->pc = 0x17D23Cu;
label_17d23c:
    // 0x17d23c: 0x8c2313dc  lw          $v1, 0x13DC($at)
    ctx->pc = 0x17d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5084)));
label_17d240:
    // 0x17d240: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_17d244:
    if (ctx->pc == 0x17D244u) {
        ctx->pc = 0x17D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D240u;
        // 0x17d244: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D248u;
        goto label_17d248;
    }
    ctx->pc = 0x17D240u;
    {
        const bool branch_taken_0x17d240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D240u;
        // 0x17d244: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d240) {
            ctx->pc = 0x17D348u;
            goto label_17d348;
        }
    }
    ctx->pc = 0x17D248u;
label_17d248:
    // 0x17d248: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17d24c:
    // 0x17d24c: 0x60f809  jalr        $v1
label_17d250:
    if (ctx->pc == 0x17D250u) {
        ctx->pc = 0x17D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D24Cu;
        // 0x17d250: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D254u;
        goto label_17d254;
    }
    ctx->pc = 0x17D24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17D254u);
        ctx->pc = 0x17D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D24Cu;
        // 0x17d250: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D24Cu, 0x17D254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17D254u;
label_17d254:
    // 0x17d254: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
label_17d258:
    if (ctx->pc == 0x17D258u) {
        ctx->pc = 0x17D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D254u;
        // 0x17d258: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D25Cu;
        goto label_17d25c;
    }
    ctx->pc = 0x17D254u;
    {
        const bool branch_taken_0x17d254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D254u;
        // 0x17d258: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d254) {
            ctx->pc = 0x17D440u;
            goto label_17d440;
        }
    }
    ctx->pc = 0x17D25Cu;
label_17d25c:
    // 0x17d25c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_17d260:
    if (ctx->pc == 0x17D260u) {
        ctx->pc = 0x17D264u;
        goto label_17d264;
    }
    ctx->pc = 0x17D25Cu;
    {
        const bool branch_taken_0x17d25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17d25c) {
            ctx->pc = 0x17D280u;
            goto label_17d280;
        }
    }
    ctx->pc = 0x17D264u;
label_17d264:
    // 0x17d264: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x17d264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_17d268:
    // 0x17d268: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x17d268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_17d26c:
    // 0x17d26c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_17d270:
    if (ctx->pc == 0x17D270u) {
        ctx->pc = 0x17D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D26Cu;
        // 0x17d270: 0x3c010084  lui         $at, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D274u;
        goto label_17d274;
    }
    ctx->pc = 0x17D26Cu;
    {
        const bool branch_taken_0x17d26c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D26Cu;
        // 0x17d270: 0x3c010084  lui         $at, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d26c) {
            ctx->pc = 0x17D280u;
            goto label_17d280;
        }
    }
    ctx->pc = 0x17D274u;
label_17d274:
    // 0x17d274: 0x8c2313d0  lw          $v1, 0x13D0($at)
    ctx->pc = 0x17d274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5072)));
label_17d278:
    // 0x17d278: 0x14600071  bnez        $v1, . + 4 + (0x71 << 2)
label_17d27c:
    if (ctx->pc == 0x17D27Cu) {
        ctx->pc = 0x17D280u;
        goto label_17d280;
    }
    ctx->pc = 0x17D278u;
    {
        const bool branch_taken_0x17d278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d278) {
            ctx->pc = 0x17D440u;
            goto label_17d440;
        }
    }
    ctx->pc = 0x17D280u;
label_17d280:
    // 0x17d280: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17d280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17d284:
    // 0x17d284: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_17d288:
    if (ctx->pc == 0x17D288u) {
        ctx->pc = 0x17D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D284u;
        // 0x17d288: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D28Cu;
        goto label_17d28c;
    }
    ctx->pc = 0x17D284u;
    {
        const bool branch_taken_0x17d284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x17D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D284u;
        // 0x17d288: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d284) {
            ctx->pc = 0x17D298u;
            goto label_17d298;
        }
    }
    ctx->pc = 0x17D28Cu;
label_17d28c:
    // 0x17d28c: 0x14430060  bne         $v0, $v1, . + 4 + (0x60 << 2)
label_17d290:
    if (ctx->pc == 0x17D290u) {
        ctx->pc = 0x17D294u;
        goto label_17d294;
    }
    ctx->pc = 0x17D28Cu;
    {
        const bool branch_taken_0x17d28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17d28c) {
            ctx->pc = 0x17D410u;
            goto label_17d410;
        }
    }
    ctx->pc = 0x17D294u;
label_17d294:
    // 0x17d294: 0x0  nop
    ctx->pc = 0x17d294u;
    // NOP
label_17d298:
    // 0x17d298: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17d298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_17d29c:
    // 0x17d29c: 0x24636ba0  addiu       $v1, $v1, 0x6BA0
    ctx->pc = 0x17d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27552));
label_17d2a0:
    // 0x17d2a0: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x17d2a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_17d2a4:
    // 0x17d2a4: 0xda690000  lqc2        $vf9, 0x0($s3)
    ctx->pc = 0x17d2a4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_17d2a8:
    // 0x17d2a8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x17d2a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17d2ac:
    // 0x17d2ac: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x17d2acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_17d2b0:
    // 0x17d2b0: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x17d2b0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_17d2b4:
    // 0x17d2b4: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x17d2b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_17d2b8:
    // 0x17d2b8: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x17d2b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d2bc:
    // 0x17d2bc: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x17d2bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d2c0:
    // 0x17d2c0: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x17d2c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d2c4:
    // 0x17d2c4: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x17d2c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d2c8:
    // 0x17d2c8: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x17d2c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_17d2cc:
    // 0x17d2cc: 0x4a0002ff  vnop
    ctx->pc = 0x17d2ccu;
    // NOP operation, no action needed for VU0
label_17d2d0:
    // 0x17d2d0: 0x4a0002ff  vnop
    ctx->pc = 0x17d2d0u;
    // NOP operation, no action needed for VU0
label_17d2d4:
    // 0x17d2d4: 0x4a0002ff  vnop
    ctx->pc = 0x17d2d4u;
    // NOP operation, no action needed for VU0
label_17d2d8:
    // 0x17d2d8: 0x4a0002ff  vnop
    ctx->pc = 0x17d2d8u;
    // NOP operation, no action needed for VU0
label_17d2dc:
    // 0x17d2dc: 0x4a0002ff  vnop
    ctx->pc = 0x17d2dcu;
    // NOP operation, no action needed for VU0
label_17d2e0:
    // 0x17d2e0: 0x48438800  cfc2.ni     $v1, $vi17
    ctx->pc = 0x17d2e0u;
    SET_GPR_U32(ctx, 3, ctx->vu0_mac_flags);
label_17d2e4:
    // 0x17d2e4: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x17d2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_17d2e8:
    // 0x17d2e8: 0x14600055  bnez        $v1, . + 4 + (0x55 << 2)
label_17d2ec:
    if (ctx->pc == 0x17D2ECu) {
        ctx->pc = 0x17D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2E8u;
        // 0x17d2ec: 0x3c030084  lui         $v1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D2F0u;
        goto label_17d2f0;
    }
    ctx->pc = 0x17D2E8u;
    {
        const bool branch_taken_0x17d2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2E8u;
        // 0x17d2ec: 0x3c030084  lui         $v1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d2e8) {
            ctx->pc = 0x17D440u;
            goto label_17d440;
        }
    }
    ctx->pc = 0x17D2F0u;
label_17d2f0:
    // 0x17d2f0: 0x246313e0  addiu       $v1, $v1, 0x13E0
    ctx->pc = 0x17d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5088));
label_17d2f4:
    // 0x17d2f4: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x17d2f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_17d2f8:
    // 0x17d2f8: 0xda690000  lqc2        $vf9, 0x0($s3)
    ctx->pc = 0x17d2f8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_17d2fc:
    // 0x17d2fc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x17d2fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17d300:
    // 0x17d300: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x17d300u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_17d304:
    // 0x17d304: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x17d304u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_17d308:
    // 0x17d308: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x17d308u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_17d30c:
    // 0x17d30c: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x17d30cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d310:
    // 0x17d310: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x17d310u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d314:
    // 0x17d314: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x17d314u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d318:
    // 0x17d318: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x17d318u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d31c:
    // 0x17d31c: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x17d31cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_17d320:
    // 0x17d320: 0x4a0002ff  vnop
    ctx->pc = 0x17d320u;
    // NOP operation, no action needed for VU0
label_17d324:
    // 0x17d324: 0x4a0002ff  vnop
    ctx->pc = 0x17d324u;
    // NOP operation, no action needed for VU0
label_17d328:
    // 0x17d328: 0x4a0002ff  vnop
    ctx->pc = 0x17d328u;
    // NOP operation, no action needed for VU0
label_17d32c:
    // 0x17d32c: 0x4a0002ff  vnop
    ctx->pc = 0x17d32cu;
    // NOP operation, no action needed for VU0
label_17d330:
    // 0x17d330: 0x48438800  cfc2.ni     $v1, $vi17
    ctx->pc = 0x17d330u;
    SET_GPR_U32(ctx, 3, ctx->vu0_mac_flags);
label_17d334:
    // 0x17d334: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x17d334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_17d338:
    // 0x17d338: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_17d33c:
    if (ctx->pc == 0x17D33Cu) {
        ctx->pc = 0x17D340u;
        goto label_17d340;
    }
    ctx->pc = 0x17D338u;
    {
        const bool branch_taken_0x17d338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d338) {
            ctx->pc = 0x17D410u;
            goto label_17d410;
        }
    }
    ctx->pc = 0x17D340u;
label_17d340:
    // 0x17d340: 0x1000003f  b           . + 4 + (0x3F << 2)
label_17d344:
    if (ctx->pc == 0x17D344u) {
        ctx->pc = 0x17D348u;
        goto label_17d348;
    }
    ctx->pc = 0x17D340u;
    {
        const bool branch_taken_0x17d340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d340) {
            ctx->pc = 0x17D440u;
            goto label_17d440;
        }
    }
    ctx->pc = 0x17D348u;
label_17d348:
    // 0x17d348: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x17d348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_17d34c:
    // 0x17d34c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x17d34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_17d350:
    // 0x17d350: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_17d354:
    if (ctx->pc == 0x17D354u) {
        ctx->pc = 0x17D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D350u;
        // 0x17d354: 0x3c010084  lui         $at, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D358u;
        goto label_17d358;
    }
    ctx->pc = 0x17D350u;
    {
        const bool branch_taken_0x17d350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D350u;
        // 0x17d354: 0x3c010084  lui         $at, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d350) {
            ctx->pc = 0x17D368u;
            goto label_17d368;
        }
    }
    ctx->pc = 0x17D358u;
label_17d358:
    // 0x17d358: 0x8c2313d0  lw          $v1, 0x13D0($at)
    ctx->pc = 0x17d358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5072)));
label_17d35c:
    // 0x17d35c: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
label_17d360:
    if (ctx->pc == 0x17D360u) {
        ctx->pc = 0x17D364u;
        goto label_17d364;
    }
    ctx->pc = 0x17D35Cu;
    {
        const bool branch_taken_0x17d35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d35c) {
            ctx->pc = 0x17D440u;
            goto label_17d440;
        }
    }
    ctx->pc = 0x17D364u;
label_17d364:
    // 0x17d364: 0x0  nop
    ctx->pc = 0x17d364u;
    // NOP
label_17d368:
    // 0x17d368: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17d368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_17d36c:
    // 0x17d36c: 0x24636ba0  addiu       $v1, $v1, 0x6BA0
    ctx->pc = 0x17d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27552));
label_17d370:
    // 0x17d370: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x17d370u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_17d374:
    // 0x17d374: 0xda690000  lqc2        $vf9, 0x0($s3)
    ctx->pc = 0x17d374u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_17d378:
    // 0x17d378: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x17d378u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17d37c:
    // 0x17d37c: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x17d37cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_17d380:
    // 0x17d380: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x17d380u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_17d384:
    // 0x17d384: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x17d384u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_17d388:
    // 0x17d388: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x17d388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d38c:
    // 0x17d38c: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x17d38cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d390:
    // 0x17d390: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x17d390u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d394:
    // 0x17d394: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x17d394u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d398:
    // 0x17d398: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x17d398u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_17d39c:
    // 0x17d39c: 0x4a0002ff  vnop
    ctx->pc = 0x17d39cu;
    // NOP operation, no action needed for VU0
label_17d3a0:
    // 0x17d3a0: 0x4a0002ff  vnop
    ctx->pc = 0x17d3a0u;
    // NOP operation, no action needed for VU0
label_17d3a4:
    // 0x17d3a4: 0x4a0002ff  vnop
    ctx->pc = 0x17d3a4u;
    // NOP operation, no action needed for VU0
label_17d3a8:
    // 0x17d3a8: 0x4a0002ff  vnop
    ctx->pc = 0x17d3a8u;
    // NOP operation, no action needed for VU0
label_17d3ac:
    // 0x17d3ac: 0x4a0002ff  vnop
    ctx->pc = 0x17d3acu;
    // NOP operation, no action needed for VU0
label_17d3b0:
    // 0x17d3b0: 0x48438800  cfc2.ni     $v1, $vi17
    ctx->pc = 0x17d3b0u;
    SET_GPR_U32(ctx, 3, ctx->vu0_mac_flags);
label_17d3b4:
    // 0x17d3b4: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x17d3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_17d3b8:
    // 0x17d3b8: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_17d3bc:
    if (ctx->pc == 0x17D3BCu) {
        ctx->pc = 0x17D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3B8u;
        // 0x17d3bc: 0x3c030084  lui         $v1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D3C0u;
        goto label_17d3c0;
    }
    ctx->pc = 0x17D3B8u;
    {
        const bool branch_taken_0x17d3b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D3B8u;
        // 0x17d3bc: 0x3c030084  lui         $v1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d3b8) {
            ctx->pc = 0x17D440u;
            goto label_17d440;
        }
    }
    ctx->pc = 0x17D3C0u;
label_17d3c0:
    // 0x17d3c0: 0x246313e0  addiu       $v1, $v1, 0x13E0
    ctx->pc = 0x17d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5088));
label_17d3c4:
    // 0x17d3c4: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x17d3c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_17d3c8:
    // 0x17d3c8: 0xda690000  lqc2        $vf9, 0x0($s3)
    ctx->pc = 0x17d3c8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_17d3cc:
    // 0x17d3cc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x17d3ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_17d3d0:
    // 0x17d3d0: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x17d3d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_17d3d4:
    // 0x17d3d4: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x17d3d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_17d3d8:
    // 0x17d3d8: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x17d3d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_17d3dc:
    // 0x17d3dc: 0x4be9403f  vaddaw.xyzw $ACC, $vf8, $vf9w
    ctx->pc = 0x17d3dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d3e0:
    // 0x17d3e0: 0x4be908fc  vmsubax.xyzw $ACC, $vf1, $vf9x
    ctx->pc = 0x17d3e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d3e4:
    // 0x17d3e4: 0x4be910fd  vmsubay.xyzw $ACC, $vf2, $vf9y
    ctx->pc = 0x17d3e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d3e8:
    // 0x17d3e8: 0x4be918fe  vmsubaz.xyzw $ACC, $vf3, $vf9z
    ctx->pc = 0x17d3e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_17d3ec:
    // 0x17d3ec: 0x4be0228f  vmsubw.xyzw $vf10, $vf4, $vf0w
    ctx->pc = 0x17d3ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
label_17d3f0:
    // 0x17d3f0: 0x4a0002ff  vnop
    ctx->pc = 0x17d3f0u;
    // NOP operation, no action needed for VU0
label_17d3f4:
    // 0x17d3f4: 0x4a0002ff  vnop
    ctx->pc = 0x17d3f4u;
    // NOP operation, no action needed for VU0
label_17d3f8:
    // 0x17d3f8: 0x4a0002ff  vnop
    ctx->pc = 0x17d3f8u;
    // NOP operation, no action needed for VU0
label_17d3fc:
    // 0x17d3fc: 0x4a0002ff  vnop
    ctx->pc = 0x17d3fcu;
    // NOP operation, no action needed for VU0
label_17d400:
    // 0x17d400: 0x48438800  cfc2.ni     $v1, $vi17
    ctx->pc = 0x17d400u;
    SET_GPR_U32(ctx, 3, ctx->vu0_mac_flags);
label_17d404:
    // 0x17d404: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x17d404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_17d408:
    // 0x17d408: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_17d40c:
    if (ctx->pc == 0x17D40Cu) {
        ctx->pc = 0x17D410u;
        goto label_17d410;
    }
    ctx->pc = 0x17D408u;
    {
        const bool branch_taken_0x17d408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d408) {
            ctx->pc = 0x17D440u;
            goto label_17d440;
        }
    }
    ctx->pc = 0x17D410u;
label_17d410:
    // 0x17d410: 0x8ec5007c  lw          $a1, 0x7C($s6)
    ctx->pc = 0x17d410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
label_17d414:
    // 0x17d414: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x17d414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_17d418:
    // 0x17d418: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x17d418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_17d41c:
    // 0x17d41c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x17d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_17d420:
    // 0x17d420: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17d420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17d424:
    // 0x17d424: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17d424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17d428:
    // 0x17d428: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17d428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_17d42c:
    // 0x17d42c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17d430:
    // 0x17d430: 0x8c450078  lw          $a1, 0x78($v0)
    ctx->pc = 0x17d430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_17d434:
    // 0x17d434: 0xc041306  jal         func_104C18
label_17d438:
    if (ctx->pc == 0x17D438u) {
        ctx->pc = 0x17D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D434u;
        // 0x17d438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D43Cu;
        goto label_17d43c;
    }
    ctx->pc = 0x17D434u;
    SET_GPR_U32(ctx, 31, 0x17D43Cu);
    ctx->pc = 0x17D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D434u;
    // 0x17d438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104C18u, 0x17D434u, 0x17D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D43Cu;
label_17d43c:
    // 0x17d43c: 0x0  nop
    ctx->pc = 0x17d43cu;
    // NOP
label_17d440:
    // 0x17d440: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17d440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17d444:
    // 0x17d444: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x17d444u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_17d448:
    // 0x17d448: 0x265201f0  addiu       $s2, $s2, 0x1F0
    ctx->pc = 0x17d448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
label_17d44c:
    // 0x17d44c: 0x0  nop
    ctx->pc = 0x17d44cu;
    // NOP
label_17d450:
    // 0x17d450: 0x96c30068  lhu         $v1, 0x68($s6)
    ctx->pc = 0x17d450u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 104)));
label_17d454:
    // 0x17d454: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x17d454u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17d458:
    // 0x17d458: 0x1460ff65  bnez        $v1, . + 4 + (-0x9B << 2)
label_17d45c:
    if (ctx->pc == 0x17D45Cu) {
        ctx->pc = 0x17D460u;
        goto label_17d460;
    }
    ctx->pc = 0x17D458u;
    {
        const bool branch_taken_0x17d458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d458) {
            ctx->pc = 0x17D1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d1f0;
        }
    }
    ctx->pc = 0x17D460u;
label_17d460:
    // 0x17d460: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17d460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_17d464:
    // 0x17d464: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17d464u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17d468:
    // 0x17d468: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17d468u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17d46c:
    // 0x17d46c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17d46cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17d470:
    // 0x17d470: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17d470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17d474:
    // 0x17d474: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17d474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17d478:
    // 0x17d478: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17d478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17d47c:
    // 0x17d47c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d47cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17d480:
    // 0x17d480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17d480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17d484:
    // 0x17d484: 0x3e00008  jr          $ra
label_17d488:
    if (ctx->pc == 0x17D488u) {
        ctx->pc = 0x17D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D484u;
        // 0x17d488: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17D48Cu;
        goto label_fallthrough_0x17d484;
    }
    ctx->pc = 0x17D484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D484u;
        // 0x17d488: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17d484:
    ctx->pc = 0x17D48Cu;
}
