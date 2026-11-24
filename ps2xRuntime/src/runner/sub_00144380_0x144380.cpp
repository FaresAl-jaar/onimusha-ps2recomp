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

// Function: sub_00144380
// Address: 0x144380 - 0x144640
void sub_00144380_0x144380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144380_0x144380");
#endif

    switch (ctx->pc) {
        case 0x144380u: goto label_144380;
        case 0x144384u: goto label_144384;
        case 0x144388u: goto label_144388;
        case 0x14438cu: goto label_14438c;
        case 0x144390u: goto label_144390;
        case 0x144394u: goto label_144394;
        case 0x144398u: goto label_144398;
        case 0x14439cu: goto label_14439c;
        case 0x1443a0u: goto label_1443a0;
        case 0x1443a4u: goto label_1443a4;
        case 0x1443a8u: goto label_1443a8;
        case 0x1443acu: goto label_1443ac;
        case 0x1443b0u: goto label_1443b0;
        case 0x1443b4u: goto label_1443b4;
        case 0x1443b8u: goto label_1443b8;
        case 0x1443bcu: goto label_1443bc;
        case 0x1443c0u: goto label_1443c0;
        case 0x1443c4u: goto label_1443c4;
        case 0x1443c8u: goto label_1443c8;
        case 0x1443ccu: goto label_1443cc;
        case 0x1443d0u: goto label_1443d0;
        case 0x1443d4u: goto label_1443d4;
        case 0x1443d8u: goto label_1443d8;
        case 0x1443dcu: goto label_1443dc;
        case 0x1443e0u: goto label_1443e0;
        case 0x1443e4u: goto label_1443e4;
        case 0x1443e8u: goto label_1443e8;
        case 0x1443ecu: goto label_1443ec;
        case 0x1443f0u: goto label_1443f0;
        case 0x1443f4u: goto label_1443f4;
        case 0x1443f8u: goto label_1443f8;
        case 0x1443fcu: goto label_1443fc;
        case 0x144400u: goto label_144400;
        case 0x144404u: goto label_144404;
        case 0x144408u: goto label_144408;
        case 0x14440cu: goto label_14440c;
        case 0x144410u: goto label_144410;
        case 0x144414u: goto label_144414;
        case 0x144418u: goto label_144418;
        case 0x14441cu: goto label_14441c;
        case 0x144420u: goto label_144420;
        case 0x144424u: goto label_144424;
        case 0x144428u: goto label_144428;
        case 0x14442cu: goto label_14442c;
        case 0x144430u: goto label_144430;
        case 0x144434u: goto label_144434;
        case 0x144438u: goto label_144438;
        case 0x14443cu: goto label_14443c;
        case 0x144440u: goto label_144440;
        case 0x144444u: goto label_144444;
        case 0x144448u: goto label_144448;
        case 0x14444cu: goto label_14444c;
        case 0x144450u: goto label_144450;
        case 0x144454u: goto label_144454;
        case 0x144458u: goto label_144458;
        case 0x14445cu: goto label_14445c;
        case 0x144460u: goto label_144460;
        case 0x144464u: goto label_144464;
        case 0x144468u: goto label_144468;
        case 0x14446cu: goto label_14446c;
        case 0x144470u: goto label_144470;
        case 0x144474u: goto label_144474;
        case 0x144478u: goto label_144478;
        case 0x14447cu: goto label_14447c;
        case 0x144480u: goto label_144480;
        case 0x144484u: goto label_144484;
        case 0x144488u: goto label_144488;
        case 0x14448cu: goto label_14448c;
        case 0x144490u: goto label_144490;
        case 0x144494u: goto label_144494;
        case 0x144498u: goto label_144498;
        case 0x14449cu: goto label_14449c;
        case 0x1444a0u: goto label_1444a0;
        case 0x1444a4u: goto label_1444a4;
        case 0x1444a8u: goto label_1444a8;
        case 0x1444acu: goto label_1444ac;
        case 0x1444b0u: goto label_1444b0;
        case 0x1444b4u: goto label_1444b4;
        case 0x1444b8u: goto label_1444b8;
        case 0x1444bcu: goto label_1444bc;
        case 0x1444c0u: goto label_1444c0;
        case 0x1444c4u: goto label_1444c4;
        case 0x1444c8u: goto label_1444c8;
        case 0x1444ccu: goto label_1444cc;
        case 0x1444d0u: goto label_1444d0;
        case 0x1444d4u: goto label_1444d4;
        case 0x1444d8u: goto label_1444d8;
        case 0x1444dcu: goto label_1444dc;
        case 0x1444e0u: goto label_1444e0;
        case 0x1444e4u: goto label_1444e4;
        case 0x1444e8u: goto label_1444e8;
        case 0x1444ecu: goto label_1444ec;
        case 0x1444f0u: goto label_1444f0;
        case 0x1444f4u: goto label_1444f4;
        case 0x1444f8u: goto label_1444f8;
        case 0x1444fcu: goto label_1444fc;
        case 0x144500u: goto label_144500;
        case 0x144504u: goto label_144504;
        case 0x144508u: goto label_144508;
        case 0x14450cu: goto label_14450c;
        case 0x144510u: goto label_144510;
        case 0x144514u: goto label_144514;
        case 0x144518u: goto label_144518;
        case 0x14451cu: goto label_14451c;
        case 0x144520u: goto label_144520;
        case 0x144524u: goto label_144524;
        case 0x144528u: goto label_144528;
        case 0x14452cu: goto label_14452c;
        case 0x144530u: goto label_144530;
        case 0x144534u: goto label_144534;
        case 0x144538u: goto label_144538;
        case 0x14453cu: goto label_14453c;
        case 0x144540u: goto label_144540;
        case 0x144544u: goto label_144544;
        case 0x144548u: goto label_144548;
        case 0x14454cu: goto label_14454c;
        case 0x144550u: goto label_144550;
        case 0x144554u: goto label_144554;
        case 0x144558u: goto label_144558;
        case 0x14455cu: goto label_14455c;
        case 0x144560u: goto label_144560;
        case 0x144564u: goto label_144564;
        case 0x144568u: goto label_144568;
        case 0x14456cu: goto label_14456c;
        case 0x144570u: goto label_144570;
        case 0x144574u: goto label_144574;
        case 0x144578u: goto label_144578;
        case 0x14457cu: goto label_14457c;
        case 0x144580u: goto label_144580;
        case 0x144584u: goto label_144584;
        case 0x144588u: goto label_144588;
        case 0x14458cu: goto label_14458c;
        case 0x144590u: goto label_144590;
        case 0x144594u: goto label_144594;
        case 0x144598u: goto label_144598;
        case 0x14459cu: goto label_14459c;
        case 0x1445a0u: goto label_1445a0;
        case 0x1445a4u: goto label_1445a4;
        case 0x1445a8u: goto label_1445a8;
        case 0x1445acu: goto label_1445ac;
        case 0x1445b0u: goto label_1445b0;
        case 0x1445b4u: goto label_1445b4;
        case 0x1445b8u: goto label_1445b8;
        case 0x1445bcu: goto label_1445bc;
        case 0x1445c0u: goto label_1445c0;
        case 0x1445c4u: goto label_1445c4;
        case 0x1445c8u: goto label_1445c8;
        case 0x1445ccu: goto label_1445cc;
        case 0x1445d0u: goto label_1445d0;
        case 0x1445d4u: goto label_1445d4;
        case 0x1445d8u: goto label_1445d8;
        case 0x1445dcu: goto label_1445dc;
        case 0x1445e0u: goto label_1445e0;
        case 0x1445e4u: goto label_1445e4;
        case 0x1445e8u: goto label_1445e8;
        case 0x1445ecu: goto label_1445ec;
        case 0x1445f0u: goto label_1445f0;
        case 0x1445f4u: goto label_1445f4;
        case 0x1445f8u: goto label_1445f8;
        case 0x1445fcu: goto label_1445fc;
        case 0x144600u: goto label_144600;
        case 0x144604u: goto label_144604;
        case 0x144608u: goto label_144608;
        case 0x14460cu: goto label_14460c;
        case 0x144610u: goto label_144610;
        case 0x144614u: goto label_144614;
        case 0x144618u: goto label_144618;
        case 0x14461cu: goto label_14461c;
        case 0x144620u: goto label_144620;
        case 0x144624u: goto label_144624;
        case 0x144628u: goto label_144628;
        case 0x14462cu: goto label_14462c;
        case 0x144630u: goto label_144630;
        case 0x144634u: goto label_144634;
        case 0x144638u: goto label_144638;
        case 0x14463cu: goto label_14463c;
        default: break;
    }

    ctx->pc = 0x144380u;

label_144380:
    // 0x144380: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x144380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_144384:
    // 0x144384: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x144384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_144388:
    // 0x144388: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x144388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_14438c:
    // 0x14438c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14438cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_144390:
    // 0x144390: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x144390u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_144394:
    // 0x144394: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x144394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_144398:
    // 0x144398: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x144398u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_14439c:
    // 0x14439c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1443a0:
    // 0x1443a0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1443a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1443a4:
    // 0x1443a4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1443a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1443a8:
    // 0x1443a8: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x1443a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1443ac:
    // 0x1443ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1443acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1443b0:
    // 0x1443b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1443b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1443b4:
    // 0x1443b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1443b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1443b8:
    // 0x1443b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1443b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1443bc:
    // 0x1443bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1443bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1443c0:
    // 0x1443c0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1443c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1443c4:
    // 0x1443c4: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x1443c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1443c8:
    // 0x1443c8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1443c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1443cc:
    // 0x1443cc: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1443ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1443d0:
    // 0x1443d0: 0xc051190  jal         func_144640
label_1443d4:
    if (ctx->pc == 0x1443D4u) {
        ctx->pc = 0x1443D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443D0u;
        // 0x1443d4: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1443D8u;
        goto label_1443d8;
    }
    ctx->pc = 0x1443D0u;
    SET_GPR_U32(ctx, 31, 0x1443D8u);
    ctx->pc = 0x1443D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1443D0u;
    // 0x1443d4: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144640u, 0x1443D0u, 0x1443D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443D8u;
label_1443d8:
    // 0x1443d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1443d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1443dc:
    // 0x1443dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1443dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1443e0:
    // 0x1443e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1443e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1443e4:
    // 0x1443e4: 0xc0515a4  jal         func_145690
label_1443e8:
    if (ctx->pc == 0x1443E8u) {
        ctx->pc = 0x1443E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443E4u;
        // 0x1443e8: 0x27a700bc  addiu       $a3, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1443ECu;
        goto label_1443ec;
    }
    ctx->pc = 0x1443E4u;
    SET_GPR_U32(ctx, 31, 0x1443ECu);
    ctx->pc = 0x1443E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1443E4u;
    // 0x1443e8: 0x27a700bc  addiu       $a3, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145690u, 0x1443E4u, 0x1443ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1443ECu;
label_1443ec:
    // 0x1443ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1443ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1443f0:
    // 0x1443f0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1443f4:
    if (ctx->pc == 0x1443F4u) {
        ctx->pc = 0x1443F8u;
        goto label_1443f8;
    }
    ctx->pc = 0x1443F0u;
    {
        const bool branch_taken_0x1443f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1443f0) {
            ctx->pc = 0x144400u;
            goto label_144400;
        }
    }
    ctx->pc = 0x1443F8u;
label_1443f8:
    // 0x1443f8: 0x10000085  b           . + 4 + (0x85 << 2)
label_1443fc:
    if (ctx->pc == 0x1443FCu) {
        ctx->pc = 0x1443FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443F8u;
        // 0x1443fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144400u;
        goto label_144400;
    }
    ctx->pc = 0x1443F8u;
    {
        const bool branch_taken_0x1443f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1443FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443F8u;
        // 0x1443fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1443f8) {
            ctx->pc = 0x144610u;
            goto label_144610;
        }
    }
    ctx->pc = 0x144400u;
label_144400:
    // 0x144400: 0xffb10000  sd          $s1, 0x0($sp)
    ctx->pc = 0x144400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
label_144404:
    // 0x144404: 0xffb50008  sd          $s5, 0x8($sp)
    ctx->pc = 0x144404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 21));
label_144408:
    // 0x144408: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x144408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_14440c:
    // 0x14440c: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x14440cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_144410:
    // 0x144410: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x144410u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_144414:
    // 0x144414: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x144414u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_144418:
    // 0x144418: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x144418u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14441c:
    // 0x14441c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14441cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_144420:
    // 0x144420: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x144420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_144424:
    // 0x144424: 0xc0511e0  jal         func_144780
label_144428:
    if (ctx->pc == 0x144428u) {
        ctx->pc = 0x144428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144424u;
        // 0x144428: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14442Cu;
        goto label_14442c;
    }
    ctx->pc = 0x144424u;
    SET_GPR_U32(ctx, 31, 0x14442Cu);
    ctx->pc = 0x144428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144424u;
    // 0x144428: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144780u, 0x144424u, 0x14442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14442Cu;
label_14442c:
    // 0x14442c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14442cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144430:
    // 0x144430: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_144434:
    if (ctx->pc == 0x144434u) {
        ctx->pc = 0x144434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144430u;
        // 0x144434: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144438u;
        goto label_144438;
    }
    ctx->pc = 0x144430u;
    {
        const bool branch_taken_0x144430 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x144434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144430u;
        // 0x144434: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144430) {
            ctx->pc = 0x144450u;
            goto label_144450;
        }
    }
    ctx->pc = 0x144438u;
label_144438:
    // 0x144438: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x144438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14443c:
    // 0x14443c: 0xc051608  jal         func_145820
label_144440:
    if (ctx->pc == 0x144440u) {
        ctx->pc = 0x144440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14443Cu;
        // 0x144440: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144444u;
        goto label_144444;
    }
    ctx->pc = 0x14443Cu;
    SET_GPR_U32(ctx, 31, 0x144444u);
    ctx->pc = 0x144440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14443Cu;
    // 0x144440: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145820u, 0x14443Cu, 0x144444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144444u;
label_144444:
    // 0x144444: 0x10000072  b           . + 4 + (0x72 << 2)
label_144448:
    if (ctx->pc == 0x144448u) {
        ctx->pc = 0x144448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144444u;
        // 0x144448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14444Cu;
        goto label_14444c;
    }
    ctx->pc = 0x144444u;
    {
        const bool branch_taken_0x144444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144444u;
        // 0x144448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144444) {
            ctx->pc = 0x144610u;
            goto label_144610;
        }
    }
    ctx->pc = 0x14444Cu;
label_14444c:
    // 0x14444c: 0x0  nop
    ctx->pc = 0x14444cu;
    // NOP
label_144450:
    // 0x144450: 0x327100ff  andi        $s1, $s3, 0xFF
    ctx->pc = 0x144450u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_144454:
    // 0x144454: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_144458:
    if (ctx->pc == 0x144458u) {
        ctx->pc = 0x144458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144454u;
        // 0x144458: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14445Cu;
        goto label_14445c;
    }
    ctx->pc = 0x144454u;
    {
        const bool branch_taken_0x144454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x144458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144454u;
        // 0x144458: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144454) {
            ctx->pc = 0x144588u;
            goto label_144588;
        }
    }
    ctx->pc = 0x14445Cu;
label_14445c:
    // 0x14445c: 0x12220042  beq         $s1, $v0, . + 4 + (0x42 << 2)
label_144460:
    if (ctx->pc == 0x144460u) {
        ctx->pc = 0x144464u;
        goto label_144464;
    }
    ctx->pc = 0x14445Cu;
    {
        const bool branch_taken_0x14445c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x14445c) {
            ctx->pc = 0x144568u;
            goto label_144568;
        }
    }
    ctx->pc = 0x144464u;
label_144464:
    // 0x144464: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x144464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_144468:
    // 0x144468: 0x12220037  beq         $s1, $v0, . + 4 + (0x37 << 2)
label_14446c:
    if (ctx->pc == 0x14446Cu) {
        ctx->pc = 0x14446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144468u;
        // 0x14446c: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144470u;
        goto label_144470;
    }
    ctx->pc = 0x144468u;
    {
        const bool branch_taken_0x144468 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144468u;
        // 0x14446c: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144468) {
            ctx->pc = 0x144548u;
            goto label_144548;
        }
    }
    ctx->pc = 0x144470u;
label_144470:
    // 0x144470: 0x12220035  beq         $s1, $v0, . + 4 + (0x35 << 2)
label_144474:
    if (ctx->pc == 0x144474u) {
        ctx->pc = 0x144478u;
        goto label_144478;
    }
    ctx->pc = 0x144470u;
    {
        const bool branch_taken_0x144470 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x144470) {
            ctx->pc = 0x144548u;
            goto label_144548;
        }
    }
    ctx->pc = 0x144478u;
label_144478:
    // 0x144478: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x144478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_14447c:
    // 0x14447c: 0x12220032  beq         $s1, $v0, . + 4 + (0x32 << 2)
label_144480:
    if (ctx->pc == 0x144480u) {
        ctx->pc = 0x144480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14447Cu;
        // 0x144480: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144484u;
        goto label_144484;
    }
    ctx->pc = 0x14447Cu;
    {
        const bool branch_taken_0x14447c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x144480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14447Cu;
        // 0x144480: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14447c) {
            ctx->pc = 0x144548u;
            goto label_144548;
        }
    }
    ctx->pc = 0x144484u;
label_144484:
    // 0x144484: 0x12220030  beq         $s1, $v0, . + 4 + (0x30 << 2)
label_144488:
    if (ctx->pc == 0x144488u) {
        ctx->pc = 0x14448Cu;
        goto label_14448c;
    }
    ctx->pc = 0x144484u;
    {
        const bool branch_taken_0x144484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x144484) {
            ctx->pc = 0x144548u;
            goto label_144548;
        }
    }
    ctx->pc = 0x14448Cu;
label_14448c:
    // 0x14448c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_144490:
    // 0x144490: 0x1222002d  beq         $s1, $v0, . + 4 + (0x2D << 2)
label_144494:
    if (ctx->pc == 0x144494u) {
        ctx->pc = 0x144494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144490u;
        // 0x144494: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144498u;
        goto label_144498;
    }
    ctx->pc = 0x144490u;
    {
        const bool branch_taken_0x144490 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x144494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144490u;
        // 0x144494: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144490) {
            ctx->pc = 0x144548u;
            goto label_144548;
        }
    }
    ctx->pc = 0x144498u;
label_144498:
    // 0x144498: 0x12220023  beq         $s1, $v0, . + 4 + (0x23 << 2)
label_14449c:
    if (ctx->pc == 0x14449Cu) {
        ctx->pc = 0x1444A0u;
        goto label_1444a0;
    }
    ctx->pc = 0x144498u;
    {
        const bool branch_taken_0x144498 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x144498) {
            ctx->pc = 0x144528u;
            goto label_144528;
        }
    }
    ctx->pc = 0x1444A0u;
label_1444a0:
    // 0x1444a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1444a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1444a4:
    // 0x1444a4: 0x12220018  beq         $s1, $v0, . + 4 + (0x18 << 2)
label_1444a8:
    if (ctx->pc == 0x1444A8u) {
        ctx->pc = 0x1444A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444A4u;
        // 0x1444a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444ACu;
        goto label_1444ac;
    }
    ctx->pc = 0x1444A4u;
    {
        const bool branch_taken_0x1444a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1444A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444A4u;
        // 0x1444a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1444a4) {
            ctx->pc = 0x144508u;
            goto label_144508;
        }
    }
    ctx->pc = 0x1444ACu;
label_1444ac:
    // 0x1444ac: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
label_1444b0:
    if (ctx->pc == 0x1444B0u) {
        ctx->pc = 0x1444B4u;
        goto label_1444b4;
    }
    ctx->pc = 0x1444ACu;
    {
        const bool branch_taken_0x1444ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1444ac) {
            ctx->pc = 0x1444E8u;
            goto label_1444e8;
        }
    }
    ctx->pc = 0x1444B4u;
label_1444b4:
    // 0x1444b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1444b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1444b8:
    // 0x1444b8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_1444bc:
    if (ctx->pc == 0x1444BCu) {
        ctx->pc = 0x1444C0u;
        goto label_1444c0;
    }
    ctx->pc = 0x1444B8u;
    {
        const bool branch_taken_0x1444b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1444b8) {
            ctx->pc = 0x1444C8u;
            goto label_1444c8;
        }
    }
    ctx->pc = 0x1444C0u;
label_1444c0:
    // 0x1444c0: 0x10000039  b           . + 4 + (0x39 << 2)
label_1444c4:
    if (ctx->pc == 0x1444C4u) {
        ctx->pc = 0x1444C8u;
        goto label_1444c8;
    }
    ctx->pc = 0x1444C0u;
    {
        const bool branch_taken_0x1444c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1444c0) {
            ctx->pc = 0x1445A8u;
            goto label_1445a8;
        }
    }
    ctx->pc = 0x1444C8u;
label_1444c8:
    // 0x1444c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1444c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1444cc:
    // 0x1444cc: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x1444ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1444d0:
    // 0x1444d0: 0x2686001c  addiu       $a2, $s4, 0x1C
    ctx->pc = 0x1444d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
label_1444d4:
    // 0x1444d4: 0xc0514b0  jal         func_1452C0
label_1444d8:
    if (ctx->pc == 0x1444D8u) {
        ctx->pc = 0x1444D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444D4u;
        // 0x1444d8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444DCu;
        goto label_1444dc;
    }
    ctx->pc = 0x1444D4u;
    SET_GPR_U32(ctx, 31, 0x1444DCu);
    ctx->pc = 0x1444D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444D4u;
    // 0x1444d8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452C0u, 0x1444D4u, 0x1444DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444DCu;
label_1444dc:
    // 0x1444dc: 0x10000038  b           . + 4 + (0x38 << 2)
label_1444e0:
    if (ctx->pc == 0x1444E0u) {
        ctx->pc = 0x1444E4u;
        goto label_1444e4;
    }
    ctx->pc = 0x1444DCu;
    {
        const bool branch_taken_0x1444dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1444dc) {
            ctx->pc = 0x1445C0u;
            goto label_1445c0;
        }
    }
    ctx->pc = 0x1444E4u;
label_1444e4:
    // 0x1444e4: 0x0  nop
    ctx->pc = 0x1444e4u;
    // NOP
label_1444e8:
    // 0x1444e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1444e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1444ec:
    // 0x1444ec: 0x26850008  addiu       $a1, $s4, 0x8
    ctx->pc = 0x1444ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_1444f0:
    // 0x1444f0: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x1444f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_1444f4:
    // 0x1444f4: 0xc0514b0  jal         func_1452C0
label_1444f8:
    if (ctx->pc == 0x1444F8u) {
        ctx->pc = 0x1444F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444F4u;
        // 0x1444f8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444FCu;
        goto label_1444fc;
    }
    ctx->pc = 0x1444F4u;
    SET_GPR_U32(ctx, 31, 0x1444FCu);
    ctx->pc = 0x1444F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444F4u;
    // 0x1444f8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452C0u, 0x1444F4u, 0x1444FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444FCu;
label_1444fc:
    // 0x1444fc: 0x10000030  b           . + 4 + (0x30 << 2)
label_144500:
    if (ctx->pc == 0x144500u) {
        ctx->pc = 0x144504u;
        goto label_144504;
    }
    ctx->pc = 0x1444FCu;
    {
        const bool branch_taken_0x1444fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1444fc) {
            ctx->pc = 0x1445C0u;
            goto label_1445c0;
        }
    }
    ctx->pc = 0x144504u;
label_144504:
    // 0x144504: 0x0  nop
    ctx->pc = 0x144504u;
    // NOP
label_144508:
    // 0x144508: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x144508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14450c:
    // 0x14450c: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x14450cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_144510:
    // 0x144510: 0x26860024  addiu       $a2, $s4, 0x24
    ctx->pc = 0x144510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_144514:
    // 0x144514: 0xc0514b0  jal         func_1452C0
label_144518:
    if (ctx->pc == 0x144518u) {
        ctx->pc = 0x144518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144514u;
        // 0x144518: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14451Cu;
        goto label_14451c;
    }
    ctx->pc = 0x144514u;
    SET_GPR_U32(ctx, 31, 0x14451Cu);
    ctx->pc = 0x144518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144514u;
    // 0x144518: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452C0u, 0x144514u, 0x14451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14451Cu;
label_14451c:
    // 0x14451c: 0x10000028  b           . + 4 + (0x28 << 2)
label_144520:
    if (ctx->pc == 0x144520u) {
        ctx->pc = 0x144524u;
        goto label_144524;
    }
    ctx->pc = 0x14451Cu;
    {
        const bool branch_taken_0x14451c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14451c) {
            ctx->pc = 0x1445C0u;
            goto label_1445c0;
        }
    }
    ctx->pc = 0x144524u;
label_144524:
    // 0x144524: 0x0  nop
    ctx->pc = 0x144524u;
    // NOP
label_144528:
    // 0x144528: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x144528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14452c:
    // 0x14452c: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x14452cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_144530:
    // 0x144530: 0x26860028  addiu       $a2, $s4, 0x28
    ctx->pc = 0x144530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_144534:
    // 0x144534: 0xc0514b0  jal         func_1452C0
label_144538:
    if (ctx->pc == 0x144538u) {
        ctx->pc = 0x144538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144534u;
        // 0x144538: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14453Cu;
        goto label_14453c;
    }
    ctx->pc = 0x144534u;
    SET_GPR_U32(ctx, 31, 0x14453Cu);
    ctx->pc = 0x144538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144534u;
    // 0x144538: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452C0u, 0x144534u, 0x14453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14453Cu;
label_14453c:
    // 0x14453c: 0x10000020  b           . + 4 + (0x20 << 2)
label_144540:
    if (ctx->pc == 0x144540u) {
        ctx->pc = 0x144544u;
        goto label_144544;
    }
    ctx->pc = 0x14453Cu;
    {
        const bool branch_taken_0x14453c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14453c) {
            ctx->pc = 0x1445C0u;
            goto label_1445c0;
        }
    }
    ctx->pc = 0x144544u;
label_144544:
    // 0x144544: 0x0  nop
    ctx->pc = 0x144544u;
    // NOP
label_144548:
    // 0x144548: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x144548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14454c:
    // 0x14454c: 0x26850014  addiu       $a1, $s4, 0x14
    ctx->pc = 0x14454cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_144550:
    // 0x144550: 0x2686002c  addiu       $a2, $s4, 0x2C
    ctx->pc = 0x144550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
label_144554:
    // 0x144554: 0xc0514b0  jal         func_1452C0
label_144558:
    if (ctx->pc == 0x144558u) {
        ctx->pc = 0x144558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144554u;
        // 0x144558: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14455Cu;
        goto label_14455c;
    }
    ctx->pc = 0x144554u;
    SET_GPR_U32(ctx, 31, 0x14455Cu);
    ctx->pc = 0x144558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144554u;
    // 0x144558: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452C0u, 0x144554u, 0x14455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14455Cu;
label_14455c:
    // 0x14455c: 0x10000018  b           . + 4 + (0x18 << 2)
label_144560:
    if (ctx->pc == 0x144560u) {
        ctx->pc = 0x144564u;
        goto label_144564;
    }
    ctx->pc = 0x14455Cu;
    {
        const bool branch_taken_0x14455c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14455c) {
            ctx->pc = 0x1445C0u;
            goto label_1445c0;
        }
    }
    ctx->pc = 0x144564u;
label_144564:
    // 0x144564: 0x0  nop
    ctx->pc = 0x144564u;
    // NOP
label_144568:
    // 0x144568: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x144568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14456c:
    // 0x14456c: 0x26850018  addiu       $a1, $s4, 0x18
    ctx->pc = 0x14456cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_144570:
    // 0x144570: 0x26860030  addiu       $a2, $s4, 0x30
    ctx->pc = 0x144570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_144574:
    // 0x144574: 0xc0514b0  jal         func_1452C0
label_144578:
    if (ctx->pc == 0x144578u) {
        ctx->pc = 0x144578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144574u;
        // 0x144578: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14457Cu;
        goto label_14457c;
    }
    ctx->pc = 0x144574u;
    SET_GPR_U32(ctx, 31, 0x14457Cu);
    ctx->pc = 0x144578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144574u;
    // 0x144578: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452C0u, 0x144574u, 0x14457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14457Cu;
label_14457c:
    // 0x14457c: 0x10000010  b           . + 4 + (0x10 << 2)
label_144580:
    if (ctx->pc == 0x144580u) {
        ctx->pc = 0x144584u;
        goto label_144584;
    }
    ctx->pc = 0x14457Cu;
    {
        const bool branch_taken_0x14457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14457c) {
            ctx->pc = 0x1445C0u;
            goto label_1445c0;
        }
    }
    ctx->pc = 0x144584u;
label_144584:
    // 0x144584: 0x0  nop
    ctx->pc = 0x144584u;
    // NOP
label_144588:
    // 0x144588: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x144588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14458c:
    // 0x14458c: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x14458cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_144590:
    // 0x144590: 0x2686001c  addiu       $a2, $s4, 0x1C
    ctx->pc = 0x144590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
label_144594:
    // 0x144594: 0xc0514b0  jal         func_1452C0
label_144598:
    if (ctx->pc == 0x144598u) {
        ctx->pc = 0x144598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144594u;
        // 0x144598: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14459Cu;
        goto label_14459c;
    }
    ctx->pc = 0x144594u;
    SET_GPR_U32(ctx, 31, 0x14459Cu);
    ctx->pc = 0x144598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144594u;
    // 0x144598: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452C0u, 0x144594u, 0x14459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14459Cu;
label_14459c:
    // 0x14459c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1445a0:
    if (ctx->pc == 0x1445A0u) {
        ctx->pc = 0x1445A4u;
        goto label_1445a4;
    }
    ctx->pc = 0x14459Cu;
    {
        const bool branch_taken_0x14459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14459c) {
            ctx->pc = 0x1445C0u;
            goto label_1445c0;
        }
    }
    ctx->pc = 0x1445A4u;
label_1445a4:
    // 0x1445a4: 0x0  nop
    ctx->pc = 0x1445a4u;
    // NOP
label_1445a8:
    // 0x1445a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1445a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1445ac:
    // 0x1445ac: 0x2685000c  addiu       $a1, $s4, 0xC
    ctx->pc = 0x1445acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_1445b0:
    // 0x1445b0: 0x26860024  addiu       $a2, $s4, 0x24
    ctx->pc = 0x1445b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_1445b4:
    // 0x1445b4: 0xc0514b0  jal         func_1452C0
label_1445b8:
    if (ctx->pc == 0x1445B8u) {
        ctx->pc = 0x1445B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445B4u;
        // 0x1445b8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1445BCu;
        goto label_1445bc;
    }
    ctx->pc = 0x1445B4u;
    SET_GPR_U32(ctx, 31, 0x1445BCu);
    ctx->pc = 0x1445B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445B4u;
    // 0x1445b8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452C0u, 0x1445B4u, 0x1445BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445BCu;
label_1445bc:
    // 0x1445bc: 0x0  nop
    ctx->pc = 0x1445bcu;
    // NOP
label_1445c0:
    // 0x1445c0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x1445c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_1445c4:
    // 0x1445c4: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x1445c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
label_1445c8:
    // 0x1445c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1445c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1445cc:
    // 0x1445cc: 0xc07ccb8  jal         func_1F32E0
label_1445d0:
    if (ctx->pc == 0x1445D0u) {
        ctx->pc = 0x1445D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445CCu;
        // 0x1445d0: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1445D4u;
        goto label_1445d4;
    }
    ctx->pc = 0x1445CCu;
    SET_GPR_U32(ctx, 31, 0x1445D4u);
    ctx->pc = 0x1445D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445CCu;
    // 0x1445d0: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F32E0u, 0x1445CCu, 0x1445D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1445D4u;
label_1445d4:
    // 0x1445d4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1445d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1445d8:
    // 0x1445d8: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x1445d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_1445dc:
    // 0x1445dc: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1445dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1445e0:
    // 0x1445e0: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1445e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_1445e4:
    // 0x1445e4: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x1445e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_1445e8:
    // 0x1445e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1445e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1445ec:
    // 0x1445ec: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
label_1445f0:
    if (ctx->pc == 0x1445F0u) {
        ctx->pc = 0x1445F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445ECu;
        // 0x1445f0: 0xaf838968  sw          $v1, -0x7698($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1445F4u;
        goto label_1445f4;
    }
    ctx->pc = 0x1445ECu;
    {
        const bool branch_taken_0x1445ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1445F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445ECu;
        // 0x1445f0: 0xaf838968  sw          $v1, -0x7698($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936936), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1445ec) {
            ctx->pc = 0x144608u;
            goto label_144608;
        }
    }
    ctx->pc = 0x1445F4u;
label_1445f4:
    // 0x1445f4: 0x8e5904d4  lw          $t9, 0x4D4($s2)
    ctx->pc = 0x1445f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1236)));
label_1445f8:
    // 0x1445f8: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x1445f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_1445fc:
    // 0x1445fc: 0x320f809  jalr        $t9
label_144600:
    if (ctx->pc == 0x144600u) {
        ctx->pc = 0x144600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445FCu;
        // 0x144600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144604u;
        goto label_144604;
    }
    ctx->pc = 0x1445FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x144604u);
        ctx->pc = 0x144600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445FCu;
        // 0x144600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1445FCu, 0x144604u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144604u;
label_144604:
    // 0x144604: 0x0  nop
    ctx->pc = 0x144604u;
    // NOP
label_144608:
    // 0x144608: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x144608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14460c:
    // 0x14460c: 0x0  nop
    ctx->pc = 0x14460cu;
    // NOP
label_144610:
    // 0x144610: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x144610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_144614:
    // 0x144614: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x144614u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_144618:
    // 0x144618: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x144618u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_14461c:
    // 0x14461c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14461cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_144620:
    // 0x144620: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x144620u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_144624:
    // 0x144624: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x144624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_144628:
    // 0x144628: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x144628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14462c:
    // 0x14462c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14462cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_144630:
    // 0x144630: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x144630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_144634:
    // 0x144634: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x144634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_144638:
    // 0x144638: 0x3e00008  jr          $ra
label_14463c:
    if (ctx->pc == 0x14463Cu) {
        ctx->pc = 0x14463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144638u;
        // 0x14463c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144640u;
        goto label_fallthrough_0x144638;
    }
    ctx->pc = 0x144638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144638u;
        // 0x14463c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x144638:
    ctx->pc = 0x144640u;
}
