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

// Function: sub_0029D1E0
// Address: 0x29d1e0 - 0x29d538
void sub_0029D1E0_0x29d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D1E0_0x29d1e0");
#endif

    switch (ctx->pc) {
        case 0x29d1e0u: goto label_29d1e0;
        case 0x29d1e4u: goto label_29d1e4;
        case 0x29d1e8u: goto label_29d1e8;
        case 0x29d1ecu: goto label_29d1ec;
        case 0x29d1f0u: goto label_29d1f0;
        case 0x29d1f4u: goto label_29d1f4;
        case 0x29d1f8u: goto label_29d1f8;
        case 0x29d1fcu: goto label_29d1fc;
        case 0x29d200u: goto label_29d200;
        case 0x29d204u: goto label_29d204;
        case 0x29d208u: goto label_29d208;
        case 0x29d20cu: goto label_29d20c;
        case 0x29d210u: goto label_29d210;
        case 0x29d214u: goto label_29d214;
        case 0x29d218u: goto label_29d218;
        case 0x29d21cu: goto label_29d21c;
        case 0x29d220u: goto label_29d220;
        case 0x29d224u: goto label_29d224;
        case 0x29d228u: goto label_29d228;
        case 0x29d22cu: goto label_29d22c;
        case 0x29d230u: goto label_29d230;
        case 0x29d234u: goto label_29d234;
        case 0x29d238u: goto label_29d238;
        case 0x29d23cu: goto label_29d23c;
        case 0x29d240u: goto label_29d240;
        case 0x29d244u: goto label_29d244;
        case 0x29d248u: goto label_29d248;
        case 0x29d24cu: goto label_29d24c;
        case 0x29d250u: goto label_29d250;
        case 0x29d254u: goto label_29d254;
        case 0x29d258u: goto label_29d258;
        case 0x29d25cu: goto label_29d25c;
        case 0x29d260u: goto label_29d260;
        case 0x29d264u: goto label_29d264;
        case 0x29d268u: goto label_29d268;
        case 0x29d26cu: goto label_29d26c;
        case 0x29d270u: goto label_29d270;
        case 0x29d274u: goto label_29d274;
        case 0x29d278u: goto label_29d278;
        case 0x29d27cu: goto label_29d27c;
        case 0x29d280u: goto label_29d280;
        case 0x29d284u: goto label_29d284;
        case 0x29d288u: goto label_29d288;
        case 0x29d28cu: goto label_29d28c;
        case 0x29d290u: goto label_29d290;
        case 0x29d294u: goto label_29d294;
        case 0x29d298u: goto label_29d298;
        case 0x29d29cu: goto label_29d29c;
        case 0x29d2a0u: goto label_29d2a0;
        case 0x29d2a4u: goto label_29d2a4;
        case 0x29d2a8u: goto label_29d2a8;
        case 0x29d2acu: goto label_29d2ac;
        case 0x29d2b0u: goto label_29d2b0;
        case 0x29d2b4u: goto label_29d2b4;
        case 0x29d2b8u: goto label_29d2b8;
        case 0x29d2bcu: goto label_29d2bc;
        case 0x29d2c0u: goto label_29d2c0;
        case 0x29d2c4u: goto label_29d2c4;
        case 0x29d2c8u: goto label_29d2c8;
        case 0x29d2ccu: goto label_29d2cc;
        case 0x29d2d0u: goto label_29d2d0;
        case 0x29d2d4u: goto label_29d2d4;
        case 0x29d2d8u: goto label_29d2d8;
        case 0x29d2dcu: goto label_29d2dc;
        case 0x29d2e0u: goto label_29d2e0;
        case 0x29d2e4u: goto label_29d2e4;
        case 0x29d2e8u: goto label_29d2e8;
        case 0x29d2ecu: goto label_29d2ec;
        case 0x29d2f0u: goto label_29d2f0;
        case 0x29d2f4u: goto label_29d2f4;
        case 0x29d2f8u: goto label_29d2f8;
        case 0x29d2fcu: goto label_29d2fc;
        case 0x29d300u: goto label_29d300;
        case 0x29d304u: goto label_29d304;
        case 0x29d308u: goto label_29d308;
        case 0x29d30cu: goto label_29d30c;
        case 0x29d310u: goto label_29d310;
        case 0x29d314u: goto label_29d314;
        case 0x29d318u: goto label_29d318;
        case 0x29d31cu: goto label_29d31c;
        case 0x29d320u: goto label_29d320;
        case 0x29d324u: goto label_29d324;
        case 0x29d328u: goto label_29d328;
        case 0x29d32cu: goto label_29d32c;
        case 0x29d330u: goto label_29d330;
        case 0x29d334u: goto label_29d334;
        case 0x29d338u: goto label_29d338;
        case 0x29d33cu: goto label_29d33c;
        case 0x29d340u: goto label_29d340;
        case 0x29d344u: goto label_29d344;
        case 0x29d348u: goto label_29d348;
        case 0x29d34cu: goto label_29d34c;
        case 0x29d350u: goto label_29d350;
        case 0x29d354u: goto label_29d354;
        case 0x29d358u: goto label_29d358;
        case 0x29d35cu: goto label_29d35c;
        case 0x29d360u: goto label_29d360;
        case 0x29d364u: goto label_29d364;
        case 0x29d368u: goto label_29d368;
        case 0x29d36cu: goto label_29d36c;
        case 0x29d370u: goto label_29d370;
        case 0x29d374u: goto label_29d374;
        case 0x29d378u: goto label_29d378;
        case 0x29d37cu: goto label_29d37c;
        case 0x29d380u: goto label_29d380;
        case 0x29d384u: goto label_29d384;
        case 0x29d388u: goto label_29d388;
        case 0x29d38cu: goto label_29d38c;
        case 0x29d390u: goto label_29d390;
        case 0x29d394u: goto label_29d394;
        case 0x29d398u: goto label_29d398;
        case 0x29d39cu: goto label_29d39c;
        case 0x29d3a0u: goto label_29d3a0;
        case 0x29d3a4u: goto label_29d3a4;
        case 0x29d3a8u: goto label_29d3a8;
        case 0x29d3acu: goto label_29d3ac;
        case 0x29d3b0u: goto label_29d3b0;
        case 0x29d3b4u: goto label_29d3b4;
        case 0x29d3b8u: goto label_29d3b8;
        case 0x29d3bcu: goto label_29d3bc;
        case 0x29d3c0u: goto label_29d3c0;
        case 0x29d3c4u: goto label_29d3c4;
        case 0x29d3c8u: goto label_29d3c8;
        case 0x29d3ccu: goto label_29d3cc;
        case 0x29d3d0u: goto label_29d3d0;
        case 0x29d3d4u: goto label_29d3d4;
        case 0x29d3d8u: goto label_29d3d8;
        case 0x29d3dcu: goto label_29d3dc;
        case 0x29d3e0u: goto label_29d3e0;
        case 0x29d3e4u: goto label_29d3e4;
        case 0x29d3e8u: goto label_29d3e8;
        case 0x29d3ecu: goto label_29d3ec;
        case 0x29d3f0u: goto label_29d3f0;
        case 0x29d3f4u: goto label_29d3f4;
        case 0x29d3f8u: goto label_29d3f8;
        case 0x29d3fcu: goto label_29d3fc;
        case 0x29d400u: goto label_29d400;
        case 0x29d404u: goto label_29d404;
        case 0x29d408u: goto label_29d408;
        case 0x29d40cu: goto label_29d40c;
        case 0x29d410u: goto label_29d410;
        case 0x29d414u: goto label_29d414;
        case 0x29d418u: goto label_29d418;
        case 0x29d41cu: goto label_29d41c;
        case 0x29d420u: goto label_29d420;
        case 0x29d424u: goto label_29d424;
        case 0x29d428u: goto label_29d428;
        case 0x29d42cu: goto label_29d42c;
        case 0x29d430u: goto label_29d430;
        case 0x29d434u: goto label_29d434;
        case 0x29d438u: goto label_29d438;
        case 0x29d43cu: goto label_29d43c;
        case 0x29d440u: goto label_29d440;
        case 0x29d444u: goto label_29d444;
        case 0x29d448u: goto label_29d448;
        case 0x29d44cu: goto label_29d44c;
        case 0x29d450u: goto label_29d450;
        case 0x29d454u: goto label_29d454;
        case 0x29d458u: goto label_29d458;
        case 0x29d45cu: goto label_29d45c;
        case 0x29d460u: goto label_29d460;
        case 0x29d464u: goto label_29d464;
        case 0x29d468u: goto label_29d468;
        case 0x29d46cu: goto label_29d46c;
        case 0x29d470u: goto label_29d470;
        case 0x29d474u: goto label_29d474;
        case 0x29d478u: goto label_29d478;
        case 0x29d47cu: goto label_29d47c;
        case 0x29d480u: goto label_29d480;
        case 0x29d484u: goto label_29d484;
        case 0x29d488u: goto label_29d488;
        case 0x29d48cu: goto label_29d48c;
        case 0x29d490u: goto label_29d490;
        case 0x29d494u: goto label_29d494;
        case 0x29d498u: goto label_29d498;
        case 0x29d49cu: goto label_29d49c;
        case 0x29d4a0u: goto label_29d4a0;
        case 0x29d4a4u: goto label_29d4a4;
        case 0x29d4a8u: goto label_29d4a8;
        case 0x29d4acu: goto label_29d4ac;
        case 0x29d4b0u: goto label_29d4b0;
        case 0x29d4b4u: goto label_29d4b4;
        case 0x29d4b8u: goto label_29d4b8;
        case 0x29d4bcu: goto label_29d4bc;
        case 0x29d4c0u: goto label_29d4c0;
        case 0x29d4c4u: goto label_29d4c4;
        case 0x29d4c8u: goto label_29d4c8;
        case 0x29d4ccu: goto label_29d4cc;
        case 0x29d4d0u: goto label_29d4d0;
        case 0x29d4d4u: goto label_29d4d4;
        case 0x29d4d8u: goto label_29d4d8;
        case 0x29d4dcu: goto label_29d4dc;
        case 0x29d4e0u: goto label_29d4e0;
        case 0x29d4e4u: goto label_29d4e4;
        case 0x29d4e8u: goto label_29d4e8;
        case 0x29d4ecu: goto label_29d4ec;
        case 0x29d4f0u: goto label_29d4f0;
        case 0x29d4f4u: goto label_29d4f4;
        case 0x29d4f8u: goto label_29d4f8;
        case 0x29d4fcu: goto label_29d4fc;
        case 0x29d500u: goto label_29d500;
        case 0x29d504u: goto label_29d504;
        case 0x29d508u: goto label_29d508;
        case 0x29d50cu: goto label_29d50c;
        case 0x29d510u: goto label_29d510;
        case 0x29d514u: goto label_29d514;
        case 0x29d518u: goto label_29d518;
        case 0x29d51cu: goto label_29d51c;
        case 0x29d520u: goto label_29d520;
        case 0x29d524u: goto label_29d524;
        case 0x29d528u: goto label_29d528;
        case 0x29d52cu: goto label_29d52c;
        case 0x29d530u: goto label_29d530;
        case 0x29d534u: goto label_29d534;
        default: break;
    }

    ctx->pc = 0x29d1e0u;

label_29d1e0:
    // 0x29d1e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29d1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_29d1e4:
    // 0x29d1e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x29d1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_29d1e8:
    // 0x29d1e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x29d1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_29d1ec:
    // 0x29d1ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29d1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_29d1f0:
    // 0x29d1f0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x29d1f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29d1f4:
    // 0x29d1f4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29d1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_29d1f8:
    // 0x29d1f8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x29d1f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d1fc:
    // 0x29d1fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_29d200:
    // 0x29d200: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x29d200u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_29d204:
    // 0x29d204: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29d204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_29d208:
    // 0x29d208: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x29d208u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29d20c:
    // 0x29d20c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29d20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29d210:
    // 0x29d210: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x29d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_29d214:
    // 0x29d214: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29d218:
    // 0x29d218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29d21c:
    // 0x29d21c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x29d21cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29d220:
    // 0x29d220: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29d224:
    // 0x29d224: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x29d224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_29d228:
    // 0x29d228: 0xafa600a8  sw          $a2, 0xA8($sp)
    ctx->pc = 0x29d228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 6));
label_29d22c:
    // 0x29d22c: 0xc09d4d4  jal         func_275350
label_29d230:
    if (ctx->pc == 0x29D230u) {
        ctx->pc = 0x29D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D22Cu;
        // 0x29d230: 0xafab00a4  sw          $t3, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D234u;
        goto label_29d234;
    }
    ctx->pc = 0x29D22Cu;
    SET_GPR_U32(ctx, 31, 0x29D234u);
    ctx->pc = 0x29D230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D22Cu;
    // 0x29d230: 0xafab00a4  sw          $t3, 0xA4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x29D22Cu, 0x29D234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D234u;
label_29d234:
    // 0x29d234: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
label_29d238:
    if (ctx->pc == 0x29D238u) {
        ctx->pc = 0x29D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D234u;
        // 0x29d238: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D23Cu;
        goto label_29d23c;
    }
    ctx->pc = 0x29D234u;
    {
        const bool branch_taken_0x29d234 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D234u;
        // 0x29d238: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d234) {
            ctx->pc = 0x29D250u;
            goto label_29d250;
        }
    }
    ctx->pc = 0x29D23Cu;
label_29d23c:
    // 0x29d23c: 0xc09d4d8  jal         func_275360
label_29d240:
    if (ctx->pc == 0x29D240u) {
        ctx->pc = 0x29D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D23Cu;
        // 0x29d240: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D244u;
        goto label_29d244;
    }
    ctx->pc = 0x29D23Cu;
    SET_GPR_U32(ctx, 31, 0x29D244u);
    ctx->pc = 0x29D240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D23Cu;
    // 0x29d240: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x29D23Cu, 0x29D244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D244u;
label_29d244:
    // 0x29d244: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_29d248:
    if (ctx->pc == 0x29D248u) {
        ctx->pc = 0x29D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D244u;
        // 0x29d248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D24Cu;
        goto label_29d24c;
    }
    ctx->pc = 0x29D244u;
    {
        const bool branch_taken_0x29d244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D244u;
        // 0x29d248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d244) {
            ctx->pc = 0x29D508u;
            goto label_29d508;
        }
    }
    ctx->pc = 0x29D24Cu;
label_29d24c:
    // 0x29d24c: 0x0  nop
    ctx->pc = 0x29d24cu;
    // NOP
label_29d250:
    // 0x29d250: 0xc0741a4  jal         func_1D0690
label_29d254:
    if (ctx->pc == 0x29D254u) {
        ctx->pc = 0x29D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D250u;
        // 0x29d254: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D258u;
        goto label_29d258;
    }
    ctx->pc = 0x29D250u;
    SET_GPR_U32(ctx, 31, 0x29D258u);
    ctx->pc = 0x29D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D250u;
    // 0x29d254: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x29D250u, 0x29D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D258u;
label_29d258:
    // 0x29d258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29d258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d25c:
    // 0x29d25c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_29d260:
    if (ctx->pc == 0x29D260u) {
        ctx->pc = 0x29D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D25Cu;
        // 0x29d260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D264u;
        goto label_29d264;
    }
    ctx->pc = 0x29D25Cu;
    {
        const bool branch_taken_0x29d25c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D25Cu;
        // 0x29d260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d25c) {
            ctx->pc = 0x29D298u;
            goto label_29d298;
        }
    }
    ctx->pc = 0x29D264u;
label_29d264:
    // 0x29d264: 0xc096b00  jal         func_25AC00
label_29d268:
    if (ctx->pc == 0x29D268u) {
        ctx->pc = 0x29D26Cu;
        goto label_29d26c;
    }
    ctx->pc = 0x29D264u;
    SET_GPR_U32(ctx, 31, 0x29D26Cu);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x29D264u, 0x29D26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D26Cu;
label_29d26c:
    // 0x29d26c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x29d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_29d270:
    // 0x29d270: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x29d270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_29d274:
    // 0x29d274: 0x246375c0  addiu       $v1, $v1, 0x75C0
    ctx->pc = 0x29d274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30144));
label_29d278:
    // 0x29d278: 0x24427830  addiu       $v0, $v0, 0x7830
    ctx->pc = 0x29d278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30768));
label_29d27c:
    // 0x29d27c: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x29d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_29d280:
    // 0x29d280: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x29d280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_29d284:
    // 0x29d284: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x29d284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_29d288:
    // 0x29d288: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x29d288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_29d28c:
    // 0x29d28c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x29d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_29d290:
    // 0x29d290: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x29d290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_29d294:
    // 0x29d294: 0x0  nop
    ctx->pc = 0x29d294u;
    // NOP
label_29d298:
    // 0x29d298: 0x12000097  beqz        $s0, . + 4 + (0x97 << 2)
label_29d29c:
    if (ctx->pc == 0x29D29Cu) {
        ctx->pc = 0x29D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D298u;
        // 0x29d29c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D2A0u;
        goto label_29d2a0;
    }
    ctx->pc = 0x29D298u;
    {
        const bool branch_taken_0x29d298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D298u;
        // 0x29d29c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d298) {
            ctx->pc = 0x29D4F8u;
            goto label_29d4f8;
        }
    }
    ctx->pc = 0x29D2A0u;
label_29d2a0:
    // 0x29d2a0: 0xc09d4fc  jal         func_2753F0
label_29d2a4:
    if (ctx->pc == 0x29D2A4u) {
        ctx->pc = 0x29D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2A0u;
        // 0x29d2a4: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D2A8u;
        goto label_29d2a8;
    }
    ctx->pc = 0x29D2A0u;
    SET_GPR_U32(ctx, 31, 0x29D2A8u);
    ctx->pc = 0x29D2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D2A0u;
    // 0x29d2a4: 0x27a400ac  addiu       $a0, $sp, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x29D2A0u, 0x29D2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2A8u;
label_29d2a8:
    // 0x29d2a8: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x29d2a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_29d2ac:
    // 0x29d2ac: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x29d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_29d2b0:
    // 0x29d2b0: 0xc09d524  jal         func_275490
label_29d2b4:
    if (ctx->pc == 0x29D2B4u) {
        ctx->pc = 0x29D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2B0u;
        // 0x29d2b4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D2B8u;
        goto label_29d2b8;
    }
    ctx->pc = 0x29D2B0u;
    SET_GPR_U32(ctx, 31, 0x29D2B8u);
    ctx->pc = 0x29D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D2B0u;
    // 0x29d2b4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x29D2B0u, 0x29D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2B8u;
label_29d2b8:
    // 0x29d2b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29d2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d2bc:
    // 0x29d2bc: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_29d2c0:
    if (ctx->pc == 0x29D2C0u) {
        ctx->pc = 0x29D2C4u;
        goto label_29d2c4;
    }
    ctx->pc = 0x29D2BCu;
    {
        const bool branch_taken_0x29d2bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d2bc) {
            ctx->pc = 0x29D2F8u;
            goto label_29d2f8;
        }
    }
    ctx->pc = 0x29D2C4u;
label_29d2c4:
    // 0x29d2c4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_29d2c8:
    if (ctx->pc == 0x29D2C8u) {
        ctx->pc = 0x29D2CCu;
        goto label_29d2cc;
    }
    ctx->pc = 0x29D2C4u;
    {
        const bool branch_taken_0x29d2c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d2c4) {
            ctx->pc = 0x29D2E0u;
            goto label_29d2e0;
        }
    }
    ctx->pc = 0x29D2CCu;
label_29d2cc:
    // 0x29d2cc: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x29d2ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_29d2d0:
    // 0x29d2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d2d4:
    // 0x29d2d4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29d2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29d2d8:
    // 0x29d2d8: 0x320f809  jalr        $t9
label_29d2dc:
    if (ctx->pc == 0x29D2DCu) {
        ctx->pc = 0x29D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2D8u;
        // 0x29d2dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D2E0u;
        goto label_29d2e0;
    }
    ctx->pc = 0x29D2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29D2E0u);
        ctx->pc = 0x29D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2D8u;
        // 0x29d2dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D2D8u, 0x29D2E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D2E0u;
label_29d2e0:
    // 0x29d2e0: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x29d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_29d2e4:
    // 0x29d2e4: 0xc09d4d8  jal         func_275360
label_29d2e8:
    if (ctx->pc == 0x29D2E8u) {
        ctx->pc = 0x29D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2E4u;
        // 0x29d2e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D2ECu;
        goto label_29d2ec;
    }
    ctx->pc = 0x29D2E4u;
    SET_GPR_U32(ctx, 31, 0x29D2ECu);
    ctx->pc = 0x29D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D2E4u;
    // 0x29d2e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x29D2E4u, 0x29D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2ECu;
label_29d2ec:
    // 0x29d2ec: 0x10000086  b           . + 4 + (0x86 << 2)
label_29d2f0:
    if (ctx->pc == 0x29D2F0u) {
        ctx->pc = 0x29D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2ECu;
        // 0x29d2f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D2F4u;
        goto label_29d2f4;
    }
    ctx->pc = 0x29D2ECu;
    {
        const bool branch_taken_0x29d2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D2ECu;
        // 0x29d2f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d2ec) {
            ctx->pc = 0x29D508u;
            goto label_29d508;
        }
    }
    ctx->pc = 0x29D2F4u;
label_29d2f4:
    // 0x29d2f4: 0x0  nop
    ctx->pc = 0x29d2f4u;
    // NOP
label_29d2f8:
    // 0x29d2f8: 0x92260004  lbu         $a2, 0x4($s1)
    ctx->pc = 0x29d2f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_29d2fc:
    // 0x29d2fc: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x29d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_29d300:
    // 0x29d300: 0xc09d524  jal         func_275490
label_29d304:
    if (ctx->pc == 0x29D304u) {
        ctx->pc = 0x29D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D300u;
        // 0x29d304: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D308u;
        goto label_29d308;
    }
    ctx->pc = 0x29D300u;
    SET_GPR_U32(ctx, 31, 0x29D308u);
    ctx->pc = 0x29D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D300u;
    // 0x29d304: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x29D300u, 0x29D308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D308u;
label_29d308:
    // 0x29d308: 0x92260006  lbu         $a2, 0x6($s1)
    ctx->pc = 0x29d308u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_29d30c:
    // 0x29d30c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29d30cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d310:
    // 0x29d310: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x29d310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_29d314:
    // 0x29d314: 0xc09d524  jal         func_275490
label_29d318:
    if (ctx->pc == 0x29D318u) {
        ctx->pc = 0x29D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D314u;
        // 0x29d318: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D31Cu;
        goto label_29d31c;
    }
    ctx->pc = 0x29D314u;
    SET_GPR_U32(ctx, 31, 0x29D31Cu);
    ctx->pc = 0x29D318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D314u;
    // 0x29d318: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x29D314u, 0x29D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D31Cu;
label_29d31c:
    // 0x29d31c: 0x92260005  lbu         $a2, 0x5($s1)
    ctx->pc = 0x29d31cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_29d320:
    // 0x29d320: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29d320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d324:
    // 0x29d324: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x29d324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_29d328:
    // 0x29d328: 0xc09d524  jal         func_275490
label_29d32c:
    if (ctx->pc == 0x29D32Cu) {
        ctx->pc = 0x29D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D328u;
        // 0x29d32c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D330u;
        goto label_29d330;
    }
    ctx->pc = 0x29D328u;
    SET_GPR_U32(ctx, 31, 0x29D330u);
    ctx->pc = 0x29D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D328u;
    // 0x29d32c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x29D328u, 0x29D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D330u;
label_29d330:
    // 0x29d330: 0x92260007  lbu         $a2, 0x7($s1)
    ctx->pc = 0x29d330u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_29d334:
    // 0x29d334: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29d334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d338:
    // 0x29d338: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x29d338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_29d33c:
    // 0x29d33c: 0xc09d524  jal         func_275490
label_29d340:
    if (ctx->pc == 0x29D340u) {
        ctx->pc = 0x29D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D33Cu;
        // 0x29d340: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D344u;
        goto label_29d344;
    }
    ctx->pc = 0x29D33Cu;
    SET_GPR_U32(ctx, 31, 0x29D344u);
    ctx->pc = 0x29D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D33Cu;
    // 0x29d340: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x29D33Cu, 0x29D344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D344u;
label_29d344:
    // 0x29d344: 0x8eab004c  lw          $t3, 0x4C($s5)
    ctx->pc = 0x29d344u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_29d348:
    // 0x29d348: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29d348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d34c:
    // 0x29d34c: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x29d34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_29d350:
    // 0x29d350: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29d350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29d354:
    // 0x29d354: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x29d354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_29d358:
    // 0x29d358: 0x8fa900a8  lw          $t1, 0xA8($sp)
    ctx->pc = 0x29d358u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_29d35c:
    // 0x29d35c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x29d35cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29d360:
    // 0x29d360: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x29d360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_29d364:
    // 0x29d364: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x29d364u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29d368:
    // 0x29d368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d36c:
    // 0x29d36c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x29d36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29d370:
    // 0x29d370: 0x8d620094  lw          $v0, 0x94($t3)
    ctx->pc = 0x29d370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 148)));
label_29d374:
    // 0x29d374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29d374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29d378:
    // 0x29d378: 0xc096b38  jal         func_25ACE0
label_29d37c:
    if (ctx->pc == 0x29D37Cu) {
        ctx->pc = 0x29D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D378u;
        // 0x29d37c: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D380u;
        goto label_29d380;
    }
    ctx->pc = 0x29D378u;
    SET_GPR_U32(ctx, 31, 0x29D380u);
    ctx->pc = 0x29D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D378u;
    // 0x29d37c: 0x244b0030  addiu       $t3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x29D378u, 0x29D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D380u;
label_29d380:
    // 0x29d380: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x29d380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_29d384:
    // 0x29d384: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x29d384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_29d388:
    // 0x29d388: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x29d388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_29d38c:
    // 0x29d38c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29d38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d390:
    // 0x29d390: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x29d390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_29d394:
    // 0x29d394: 0xa2020050  sb          $v0, 0x50($s0)
    ctx->pc = 0x29d394u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 2));
label_29d398:
    // 0x29d398: 0xa600005a  sh          $zero, 0x5A($s0)
    ctx->pc = 0x29d398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 0));
label_29d39c:
    // 0x29d39c: 0xa6000058  sh          $zero, 0x58($s0)
    ctx->pc = 0x29d39cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 0));
label_29d3a0:
    // 0x29d3a0: 0xa6000056  sh          $zero, 0x56($s0)
    ctx->pc = 0x29d3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 0));
label_29d3a4:
    // 0x29d3a4: 0xa2000051  sb          $zero, 0x51($s0)
    ctx->pc = 0x29d3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 0));
label_29d3a8:
    // 0x29d3a8: 0x87a200b0  lh          $v0, 0xB0($sp)
    ctx->pc = 0x29d3a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
label_29d3ac:
    // 0x29d3ac: 0xa6020084  sh          $v0, 0x84($s0)
    ctx->pc = 0x29d3acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 2));
label_29d3b0:
    // 0x29d3b0: 0xa2160086  sb          $s6, 0x86($s0)
    ctx->pc = 0x29d3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 134), (uint8_t)GPR_U32(ctx, 22));
label_29d3b4:
    // 0x29d3b4: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x29d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_29d3b8:
    // 0x29d3b8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x29d3b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_29d3bc:
    // 0x29d3bc: 0xc096cb8  jal         func_25B2E0
label_29d3c0:
    if (ctx->pc == 0x29D3C0u) {
        ctx->pc = 0x29D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3BCu;
        // 0x29d3c0: 0x7e020070  sq          $v0, 0x70($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3C4u;
        goto label_29d3c4;
    }
    ctx->pc = 0x29D3BCu;
    SET_GPR_U32(ctx, 31, 0x29D3C4u);
    ctx->pc = 0x29D3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D3BCu;
    // 0x29d3c0: 0x7e020070  sq          $v0, 0x70($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x29D3BCu, 0x29D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3C4u;
label_29d3c4:
    // 0x29d3c4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_29d3c8:
    if (ctx->pc == 0x29D3C8u) {
        ctx->pc = 0x29D3CCu;
        goto label_29d3cc;
    }
    ctx->pc = 0x29D3C4u;
    {
        const bool branch_taken_0x29d3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d3c4) {
            ctx->pc = 0x29D3D0u;
            goto label_29d3d0;
        }
    }
    ctx->pc = 0x29D3CCu;
label_29d3cc:
    // 0x29d3cc: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x29d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_29d3d0:
    // 0x29d3d0: 0xae140088  sw          $s4, 0x88($s0)
    ctx->pc = 0x29d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 20));
label_29d3d4:
    // 0x29d3d4: 0xae130090  sw          $s3, 0x90($s0)
    ctx->pc = 0x29d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 19));
label_29d3d8:
    // 0x29d3d8: 0xae120098  sw          $s2, 0x98($s0)
    ctx->pc = 0x29d3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 18));
label_29d3dc:
    // 0x29d3dc: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_29d3e0:
    if (ctx->pc == 0x29D3E0u) {
        ctx->pc = 0x29D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3DCu;
        // 0x29d3e0: 0xae1100a0  sw          $s1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3E4u;
        goto label_29d3e4;
    }
    ctx->pc = 0x29D3DCu;
    {
        const bool branch_taken_0x29d3dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3DCu;
        // 0x29d3e0: 0xae1100a0  sw          $s1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3dc) {
            ctx->pc = 0x29D420u;
            goto label_29d420;
        }
    }
    ctx->pc = 0x29D3E4u;
label_29d3e4:
    // 0x29d3e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29d3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29d3e8:
    // 0x29d3e8: 0xc0a1238  jal         func_2848E0
label_29d3ec:
    if (ctx->pc == 0x29D3ECu) {
        ctx->pc = 0x29D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3E8u;
        // 0x29d3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3F0u;
        goto label_29d3f0;
    }
    ctx->pc = 0x29D3E8u;
    SET_GPR_U32(ctx, 31, 0x29D3F0u);
    ctx->pc = 0x29D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D3E8u;
    // 0x29d3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2848E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2848E0u, 0x29D3E8u, 0x29D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3F0u;
label_29d3f0:
    // 0x29d3f0: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x29d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
label_29d3f4:
    // 0x29d3f4: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x29d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_29d3f8:
    // 0x29d3f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_29d3fc:
    if (ctx->pc == 0x29D3FCu) {
        ctx->pc = 0x29D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3F8u;
        // 0x29d3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D400u;
        goto label_29d400;
    }
    ctx->pc = 0x29D3F8u;
    {
        const bool branch_taken_0x29d3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3F8u;
        // 0x29d3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3f8) {
            ctx->pc = 0x29D420u;
            goto label_29d420;
        }
    }
    ctx->pc = 0x29D400u;
label_29d400:
    // 0x29d400: 0xc074268  jal         func_1D09A0
label_29d404:
    if (ctx->pc == 0x29D404u) {
        ctx->pc = 0x29D408u;
        goto label_29d408;
    }
    ctx->pc = 0x29D400u;
    SET_GPR_U32(ctx, 31, 0x29D408u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x29D400u, 0x29D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D408u;
label_29d408:
    // 0x29d408: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x29d408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_29d40c:
    // 0x29d40c: 0xc09d4d8  jal         func_275360
label_29d410:
    if (ctx->pc == 0x29D410u) {
        ctx->pc = 0x29D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D40Cu;
        // 0x29d410: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D414u;
        goto label_29d414;
    }
    ctx->pc = 0x29D40Cu;
    SET_GPR_U32(ctx, 31, 0x29D414u);
    ctx->pc = 0x29D410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D40Cu;
    // 0x29d410: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x29D40Cu, 0x29D414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D414u;
label_29d414:
    // 0x29d414: 0x1000003c  b           . + 4 + (0x3C << 2)
label_29d418:
    if (ctx->pc == 0x29D418u) {
        ctx->pc = 0x29D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D414u;
        // 0x29d418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D41Cu;
        goto label_29d41c;
    }
    ctx->pc = 0x29D414u;
    {
        const bool branch_taken_0x29d414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D414u;
        // 0x29d418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d414) {
            ctx->pc = 0x29D508u;
            goto label_29d508;
        }
    }
    ctx->pc = 0x29D41Cu;
label_29d41c:
    // 0x29d41c: 0x0  nop
    ctx->pc = 0x29d41cu;
    // NOP
label_29d420:
    // 0x29d420: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_29d424:
    if (ctx->pc == 0x29D424u) {
        ctx->pc = 0x29D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D420u;
        // 0x29d424: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D428u;
        goto label_29d428;
    }
    ctx->pc = 0x29D420u;
    {
        const bool branch_taken_0x29d420 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D420u;
        // 0x29d424: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d420) {
            ctx->pc = 0x29D460u;
            goto label_29d460;
        }
    }
    ctx->pc = 0x29D428u;
label_29d428:
    // 0x29d428: 0xc0a19b4  jal         func_2866D0
label_29d42c:
    if (ctx->pc == 0x29D42Cu) {
        ctx->pc = 0x29D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D428u;
        // 0x29d42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D430u;
        goto label_29d430;
    }
    ctx->pc = 0x29D428u;
    SET_GPR_U32(ctx, 31, 0x29D430u);
    ctx->pc = 0x29D42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D428u;
    // 0x29d42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2866D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2866D0u, 0x29D428u, 0x29D430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D430u;
label_29d430:
    // 0x29d430: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x29d430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_29d434:
    // 0x29d434: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x29d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_29d438:
    // 0x29d438: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_29d43c:
    if (ctx->pc == 0x29D43Cu) {
        ctx->pc = 0x29D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D438u;
        // 0x29d43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D440u;
        goto label_29d440;
    }
    ctx->pc = 0x29D438u;
    {
        const bool branch_taken_0x29d438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D438u;
        // 0x29d43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d438) {
            ctx->pc = 0x29D460u;
            goto label_29d460;
        }
    }
    ctx->pc = 0x29D440u;
label_29d440:
    // 0x29d440: 0xc074268  jal         func_1D09A0
label_29d444:
    if (ctx->pc == 0x29D444u) {
        ctx->pc = 0x29D448u;
        goto label_29d448;
    }
    ctx->pc = 0x29D440u;
    SET_GPR_U32(ctx, 31, 0x29D448u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x29D440u, 0x29D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D448u;
label_29d448:
    // 0x29d448: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x29d448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_29d44c:
    // 0x29d44c: 0xc09d4d8  jal         func_275360
label_29d450:
    if (ctx->pc == 0x29D450u) {
        ctx->pc = 0x29D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D44Cu;
        // 0x29d450: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D454u;
        goto label_29d454;
    }
    ctx->pc = 0x29D44Cu;
    SET_GPR_U32(ctx, 31, 0x29D454u);
    ctx->pc = 0x29D450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D44Cu;
    // 0x29d450: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x29D44Cu, 0x29D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D454u;
label_29d454:
    // 0x29d454: 0x1000002c  b           . + 4 + (0x2C << 2)
label_29d458:
    if (ctx->pc == 0x29D458u) {
        ctx->pc = 0x29D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D454u;
        // 0x29d458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D45Cu;
        goto label_29d45c;
    }
    ctx->pc = 0x29D454u;
    {
        const bool branch_taken_0x29d454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D454u;
        // 0x29d458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d454) {
            ctx->pc = 0x29D508u;
            goto label_29d508;
        }
    }
    ctx->pc = 0x29D45Cu;
label_29d45c:
    // 0x29d45c: 0x0  nop
    ctx->pc = 0x29d45cu;
    // NOP
label_29d460:
    // 0x29d460: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_29d464:
    if (ctx->pc == 0x29D464u) {
        ctx->pc = 0x29D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D460u;
        // 0x29d464: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D468u;
        goto label_29d468;
    }
    ctx->pc = 0x29D460u;
    {
        const bool branch_taken_0x29d460 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D460u;
        // 0x29d464: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d460) {
            ctx->pc = 0x29D4A0u;
            goto label_29d4a0;
        }
    }
    ctx->pc = 0x29D468u;
label_29d468:
    // 0x29d468: 0xc0a1238  jal         func_2848E0
label_29d46c:
    if (ctx->pc == 0x29D46Cu) {
        ctx->pc = 0x29D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D468u;
        // 0x29d46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D470u;
        goto label_29d470;
    }
    ctx->pc = 0x29D468u;
    SET_GPR_U32(ctx, 31, 0x29D470u);
    ctx->pc = 0x29D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D468u;
    // 0x29d46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2848E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2848E0u, 0x29D468u, 0x29D470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D470u;
label_29d470:
    // 0x29d470: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x29d470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
label_29d474:
    // 0x29d474: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x29d474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_29d478:
    // 0x29d478: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_29d47c:
    if (ctx->pc == 0x29D47Cu) {
        ctx->pc = 0x29D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D478u;
        // 0x29d47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D480u;
        goto label_29d480;
    }
    ctx->pc = 0x29D478u;
    {
        const bool branch_taken_0x29d478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D478u;
        // 0x29d47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d478) {
            ctx->pc = 0x29D4A0u;
            goto label_29d4a0;
        }
    }
    ctx->pc = 0x29D480u;
label_29d480:
    // 0x29d480: 0xc074268  jal         func_1D09A0
label_29d484:
    if (ctx->pc == 0x29D484u) {
        ctx->pc = 0x29D488u;
        goto label_29d488;
    }
    ctx->pc = 0x29D480u;
    SET_GPR_U32(ctx, 31, 0x29D488u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x29D480u, 0x29D488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D488u;
label_29d488:
    // 0x29d488: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x29d488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_29d48c:
    // 0x29d48c: 0xc09d4d8  jal         func_275360
label_29d490:
    if (ctx->pc == 0x29D490u) {
        ctx->pc = 0x29D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D48Cu;
        // 0x29d490: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D494u;
        goto label_29d494;
    }
    ctx->pc = 0x29D48Cu;
    SET_GPR_U32(ctx, 31, 0x29D494u);
    ctx->pc = 0x29D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D48Cu;
    // 0x29d490: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x29D48Cu, 0x29D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D494u;
label_29d494:
    // 0x29d494: 0x1000001c  b           . + 4 + (0x1C << 2)
label_29d498:
    if (ctx->pc == 0x29D498u) {
        ctx->pc = 0x29D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D494u;
        // 0x29d498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D49Cu;
        goto label_29d49c;
    }
    ctx->pc = 0x29D494u;
    {
        const bool branch_taken_0x29d494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D494u;
        // 0x29d498: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d494) {
            ctx->pc = 0x29D508u;
            goto label_29d508;
        }
    }
    ctx->pc = 0x29D49Cu;
label_29d49c:
    // 0x29d49c: 0x0  nop
    ctx->pc = 0x29d49cu;
    // NOP
label_29d4a0:
    // 0x29d4a0: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_29d4a4:
    if (ctx->pc == 0x29D4A4u) {
        ctx->pc = 0x29D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4A0u;
        // 0x29d4a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4A8u;
        goto label_29d4a8;
    }
    ctx->pc = 0x29D4A0u;
    {
        const bool branch_taken_0x29d4a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4A0u;
        // 0x29d4a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4a0) {
            ctx->pc = 0x29D4E0u;
            goto label_29d4e0;
        }
    }
    ctx->pc = 0x29D4A8u;
label_29d4a8:
    // 0x29d4a8: 0xc0a19b4  jal         func_2866D0
label_29d4ac:
    if (ctx->pc == 0x29D4ACu) {
        ctx->pc = 0x29D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4A8u;
        // 0x29d4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4B0u;
        goto label_29d4b0;
    }
    ctx->pc = 0x29D4A8u;
    SET_GPR_U32(ctx, 31, 0x29D4B0u);
    ctx->pc = 0x29D4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4A8u;
    // 0x29d4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2866D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2866D0u, 0x29D4A8u, 0x29D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4B0u;
label_29d4b0:
    // 0x29d4b0: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x29d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_29d4b4:
    // 0x29d4b4: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x29d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_29d4b8:
    // 0x29d4b8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_29d4bc:
    if (ctx->pc == 0x29D4BCu) {
        ctx->pc = 0x29D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4B8u;
        // 0x29d4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4C0u;
        goto label_29d4c0;
    }
    ctx->pc = 0x29D4B8u;
    {
        const bool branch_taken_0x29d4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4B8u;
        // 0x29d4bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4b8) {
            ctx->pc = 0x29D4E0u;
            goto label_29d4e0;
        }
    }
    ctx->pc = 0x29D4C0u;
label_29d4c0:
    // 0x29d4c0: 0xc074268  jal         func_1D09A0
label_29d4c4:
    if (ctx->pc == 0x29D4C4u) {
        ctx->pc = 0x29D4C8u;
        goto label_29d4c8;
    }
    ctx->pc = 0x29D4C0u;
    SET_GPR_U32(ctx, 31, 0x29D4C8u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x29D4C0u, 0x29D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4C8u;
label_29d4c8:
    // 0x29d4c8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x29d4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_29d4cc:
    // 0x29d4cc: 0xc09d4d8  jal         func_275360
label_29d4d0:
    if (ctx->pc == 0x29D4D0u) {
        ctx->pc = 0x29D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4CCu;
        // 0x29d4d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4D4u;
        goto label_29d4d4;
    }
    ctx->pc = 0x29D4CCu;
    SET_GPR_U32(ctx, 31, 0x29D4D4u);
    ctx->pc = 0x29D4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4CCu;
    // 0x29d4d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x29D4CCu, 0x29D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4D4u;
label_29d4d4:
    // 0x29d4d4: 0x1000000c  b           . + 4 + (0xC << 2)
label_29d4d8:
    if (ctx->pc == 0x29D4D8u) {
        ctx->pc = 0x29D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4D4u;
        // 0x29d4d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4DCu;
        goto label_29d4dc;
    }
    ctx->pc = 0x29D4D4u;
    {
        const bool branch_taken_0x29d4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4D4u;
        // 0x29d4d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4d4) {
            ctx->pc = 0x29D508u;
            goto label_29d508;
        }
    }
    ctx->pc = 0x29D4DCu;
label_29d4dc:
    // 0x29d4dc: 0x0  nop
    ctx->pc = 0x29d4dcu;
    // NOP
label_29d4e0:
    // 0x29d4e0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x29d4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29d4e4:
    // 0x29d4e4: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x29d4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_29d4e8:
    // 0x29d4e8: 0xc09d4d8  jal         func_275360
label_29d4ec:
    if (ctx->pc == 0x29D4ECu) {
        ctx->pc = 0x29D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4E8u;
        // 0x29d4ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4F0u;
        goto label_29d4f0;
    }
    ctx->pc = 0x29D4E8u;
    SET_GPR_U32(ctx, 31, 0x29D4F0u);
    ctx->pc = 0x29D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4E8u;
    // 0x29d4ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x29D4E8u, 0x29D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4F0u;
label_29d4f0:
    // 0x29d4f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_29d4f4:
    if (ctx->pc == 0x29D4F4u) {
        ctx->pc = 0x29D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4F0u;
        // 0x29d4f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4F8u;
        goto label_29d4f8;
    }
    ctx->pc = 0x29D4F0u;
    {
        const bool branch_taken_0x29d4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4F0u;
        // 0x29d4f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4f0) {
            ctx->pc = 0x29D508u;
            goto label_29d508;
        }
    }
    ctx->pc = 0x29D4F8u;
label_29d4f8:
    // 0x29d4f8: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x29d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_29d4fc:
    // 0x29d4fc: 0xc09d4d8  jal         func_275360
label_29d500:
    if (ctx->pc == 0x29D500u) {
        ctx->pc = 0x29D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4FCu;
        // 0x29d500: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D504u;
        goto label_29d504;
    }
    ctx->pc = 0x29D4FCu;
    SET_GPR_U32(ctx, 31, 0x29D504u);
    ctx->pc = 0x29D500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4FCu;
    // 0x29d500: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x29D4FCu, 0x29D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D504u;
label_29d504:
    // 0x29d504: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29d504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d508:
    // 0x29d508: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x29d508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_29d50c:
    // 0x29d50c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29d50cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_29d510:
    // 0x29d510: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29d510u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_29d514:
    // 0x29d514: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29d514u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29d518:
    // 0x29d518: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29d518u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29d51c:
    // 0x29d51c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29d51cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29d520:
    // 0x29d520: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29d520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29d524:
    // 0x29d524: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29d524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29d528:
    // 0x29d528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29d52c:
    // 0x29d52c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29d530:
    // 0x29d530: 0x3e00008  jr          $ra
label_29d534:
    if (ctx->pc == 0x29D534u) {
        ctx->pc = 0x29D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D530u;
        // 0x29d534: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D538u;
        goto label_fallthrough_0x29d530;
    }
    ctx->pc = 0x29D530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D530u;
        // 0x29d534: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29d530:
    ctx->pc = 0x29D538u;
}
