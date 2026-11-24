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

// Function: sub_00124280
// Address: 0x124280 - 0x124644
void sub_00124280_0x124280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124280_0x124280");
#endif

    switch (ctx->pc) {
        case 0x124280u: goto label_124280;
        case 0x124284u: goto label_124284;
        case 0x124288u: goto label_124288;
        case 0x12428cu: goto label_12428c;
        case 0x124290u: goto label_124290;
        case 0x124294u: goto label_124294;
        case 0x124298u: goto label_124298;
        case 0x12429cu: goto label_12429c;
        case 0x1242a0u: goto label_1242a0;
        case 0x1242a4u: goto label_1242a4;
        case 0x1242a8u: goto label_1242a8;
        case 0x1242acu: goto label_1242ac;
        case 0x1242b0u: goto label_1242b0;
        case 0x1242b4u: goto label_1242b4;
        case 0x1242b8u: goto label_1242b8;
        case 0x1242bcu: goto label_1242bc;
        case 0x1242c0u: goto label_1242c0;
        case 0x1242c4u: goto label_1242c4;
        case 0x1242c8u: goto label_1242c8;
        case 0x1242ccu: goto label_1242cc;
        case 0x1242d0u: goto label_1242d0;
        case 0x1242d4u: goto label_1242d4;
        case 0x1242d8u: goto label_1242d8;
        case 0x1242dcu: goto label_1242dc;
        case 0x1242e0u: goto label_1242e0;
        case 0x1242e4u: goto label_1242e4;
        case 0x1242e8u: goto label_1242e8;
        case 0x1242ecu: goto label_1242ec;
        case 0x1242f0u: goto label_1242f0;
        case 0x1242f4u: goto label_1242f4;
        case 0x1242f8u: goto label_1242f8;
        case 0x1242fcu: goto label_1242fc;
        case 0x124300u: goto label_124300;
        case 0x124304u: goto label_124304;
        case 0x124308u: goto label_124308;
        case 0x12430cu: goto label_12430c;
        case 0x124310u: goto label_124310;
        case 0x124314u: goto label_124314;
        case 0x124318u: goto label_124318;
        case 0x12431cu: goto label_12431c;
        case 0x124320u: goto label_124320;
        case 0x124324u: goto label_124324;
        case 0x124328u: goto label_124328;
        case 0x12432cu: goto label_12432c;
        case 0x124330u: goto label_124330;
        case 0x124334u: goto label_124334;
        case 0x124338u: goto label_124338;
        case 0x12433cu: goto label_12433c;
        case 0x124340u: goto label_124340;
        case 0x124344u: goto label_124344;
        case 0x124348u: goto label_124348;
        case 0x12434cu: goto label_12434c;
        case 0x124350u: goto label_124350;
        case 0x124354u: goto label_124354;
        case 0x124358u: goto label_124358;
        case 0x12435cu: goto label_12435c;
        case 0x124360u: goto label_124360;
        case 0x124364u: goto label_124364;
        case 0x124368u: goto label_124368;
        case 0x12436cu: goto label_12436c;
        case 0x124370u: goto label_124370;
        case 0x124374u: goto label_124374;
        case 0x124378u: goto label_124378;
        case 0x12437cu: goto label_12437c;
        case 0x124380u: goto label_124380;
        case 0x124384u: goto label_124384;
        case 0x124388u: goto label_124388;
        case 0x12438cu: goto label_12438c;
        case 0x124390u: goto label_124390;
        case 0x124394u: goto label_124394;
        case 0x124398u: goto label_124398;
        case 0x12439cu: goto label_12439c;
        case 0x1243a0u: goto label_1243a0;
        case 0x1243a4u: goto label_1243a4;
        case 0x1243a8u: goto label_1243a8;
        case 0x1243acu: goto label_1243ac;
        case 0x1243b0u: goto label_1243b0;
        case 0x1243b4u: goto label_1243b4;
        case 0x1243b8u: goto label_1243b8;
        case 0x1243bcu: goto label_1243bc;
        case 0x1243c0u: goto label_1243c0;
        case 0x1243c4u: goto label_1243c4;
        case 0x1243c8u: goto label_1243c8;
        case 0x1243ccu: goto label_1243cc;
        case 0x1243d0u: goto label_1243d0;
        case 0x1243d4u: goto label_1243d4;
        case 0x1243d8u: goto label_1243d8;
        case 0x1243dcu: goto label_1243dc;
        case 0x1243e0u: goto label_1243e0;
        case 0x1243e4u: goto label_1243e4;
        case 0x1243e8u: goto label_1243e8;
        case 0x1243ecu: goto label_1243ec;
        case 0x1243f0u: goto label_1243f0;
        case 0x1243f4u: goto label_1243f4;
        case 0x1243f8u: goto label_1243f8;
        case 0x1243fcu: goto label_1243fc;
        case 0x124400u: goto label_124400;
        case 0x124404u: goto label_124404;
        case 0x124408u: goto label_124408;
        case 0x12440cu: goto label_12440c;
        case 0x124410u: goto label_124410;
        case 0x124414u: goto label_124414;
        case 0x124418u: goto label_124418;
        case 0x12441cu: goto label_12441c;
        case 0x124420u: goto label_124420;
        case 0x124424u: goto label_124424;
        case 0x124428u: goto label_124428;
        case 0x12442cu: goto label_12442c;
        case 0x124430u: goto label_124430;
        case 0x124434u: goto label_124434;
        case 0x124438u: goto label_124438;
        case 0x12443cu: goto label_12443c;
        case 0x124440u: goto label_124440;
        case 0x124444u: goto label_124444;
        case 0x124448u: goto label_124448;
        case 0x12444cu: goto label_12444c;
        case 0x124450u: goto label_124450;
        case 0x124454u: goto label_124454;
        case 0x124458u: goto label_124458;
        case 0x12445cu: goto label_12445c;
        case 0x124460u: goto label_124460;
        case 0x124464u: goto label_124464;
        case 0x124468u: goto label_124468;
        case 0x12446cu: goto label_12446c;
        case 0x124470u: goto label_124470;
        case 0x124474u: goto label_124474;
        case 0x124478u: goto label_124478;
        case 0x12447cu: goto label_12447c;
        case 0x124480u: goto label_124480;
        case 0x124484u: goto label_124484;
        case 0x124488u: goto label_124488;
        case 0x12448cu: goto label_12448c;
        case 0x124490u: goto label_124490;
        case 0x124494u: goto label_124494;
        case 0x124498u: goto label_124498;
        case 0x12449cu: goto label_12449c;
        case 0x1244a0u: goto label_1244a0;
        case 0x1244a4u: goto label_1244a4;
        case 0x1244a8u: goto label_1244a8;
        case 0x1244acu: goto label_1244ac;
        case 0x1244b0u: goto label_1244b0;
        case 0x1244b4u: goto label_1244b4;
        case 0x1244b8u: goto label_1244b8;
        case 0x1244bcu: goto label_1244bc;
        case 0x1244c0u: goto label_1244c0;
        case 0x1244c4u: goto label_1244c4;
        case 0x1244c8u: goto label_1244c8;
        case 0x1244ccu: goto label_1244cc;
        case 0x1244d0u: goto label_1244d0;
        case 0x1244d4u: goto label_1244d4;
        case 0x1244d8u: goto label_1244d8;
        case 0x1244dcu: goto label_1244dc;
        case 0x1244e0u: goto label_1244e0;
        case 0x1244e4u: goto label_1244e4;
        case 0x1244e8u: goto label_1244e8;
        case 0x1244ecu: goto label_1244ec;
        case 0x1244f0u: goto label_1244f0;
        case 0x1244f4u: goto label_1244f4;
        case 0x1244f8u: goto label_1244f8;
        case 0x1244fcu: goto label_1244fc;
        case 0x124500u: goto label_124500;
        case 0x124504u: goto label_124504;
        case 0x124508u: goto label_124508;
        case 0x12450cu: goto label_12450c;
        case 0x124510u: goto label_124510;
        case 0x124514u: goto label_124514;
        case 0x124518u: goto label_124518;
        case 0x12451cu: goto label_12451c;
        case 0x124520u: goto label_124520;
        case 0x124524u: goto label_124524;
        case 0x124528u: goto label_124528;
        case 0x12452cu: goto label_12452c;
        case 0x124530u: goto label_124530;
        case 0x124534u: goto label_124534;
        case 0x124538u: goto label_124538;
        case 0x12453cu: goto label_12453c;
        case 0x124540u: goto label_124540;
        case 0x124544u: goto label_124544;
        case 0x124548u: goto label_124548;
        case 0x12454cu: goto label_12454c;
        case 0x124550u: goto label_124550;
        case 0x124554u: goto label_124554;
        case 0x124558u: goto label_124558;
        case 0x12455cu: goto label_12455c;
        case 0x124560u: goto label_124560;
        case 0x124564u: goto label_124564;
        case 0x124568u: goto label_124568;
        case 0x12456cu: goto label_12456c;
        case 0x124570u: goto label_124570;
        case 0x124574u: goto label_124574;
        case 0x124578u: goto label_124578;
        case 0x12457cu: goto label_12457c;
        case 0x124580u: goto label_124580;
        case 0x124584u: goto label_124584;
        case 0x124588u: goto label_124588;
        case 0x12458cu: goto label_12458c;
        case 0x124590u: goto label_124590;
        case 0x124594u: goto label_124594;
        case 0x124598u: goto label_124598;
        case 0x12459cu: goto label_12459c;
        case 0x1245a0u: goto label_1245a0;
        case 0x1245a4u: goto label_1245a4;
        case 0x1245a8u: goto label_1245a8;
        case 0x1245acu: goto label_1245ac;
        case 0x1245b0u: goto label_1245b0;
        case 0x1245b4u: goto label_1245b4;
        case 0x1245b8u: goto label_1245b8;
        case 0x1245bcu: goto label_1245bc;
        case 0x1245c0u: goto label_1245c0;
        case 0x1245c4u: goto label_1245c4;
        case 0x1245c8u: goto label_1245c8;
        case 0x1245ccu: goto label_1245cc;
        case 0x1245d0u: goto label_1245d0;
        case 0x1245d4u: goto label_1245d4;
        case 0x1245d8u: goto label_1245d8;
        case 0x1245dcu: goto label_1245dc;
        case 0x1245e0u: goto label_1245e0;
        case 0x1245e4u: goto label_1245e4;
        case 0x1245e8u: goto label_1245e8;
        case 0x1245ecu: goto label_1245ec;
        case 0x1245f0u: goto label_1245f0;
        case 0x1245f4u: goto label_1245f4;
        case 0x1245f8u: goto label_1245f8;
        case 0x1245fcu: goto label_1245fc;
        case 0x124600u: goto label_124600;
        case 0x124604u: goto label_124604;
        case 0x124608u: goto label_124608;
        case 0x12460cu: goto label_12460c;
        case 0x124610u: goto label_124610;
        case 0x124614u: goto label_124614;
        case 0x124618u: goto label_124618;
        case 0x12461cu: goto label_12461c;
        case 0x124620u: goto label_124620;
        case 0x124624u: goto label_124624;
        case 0x124628u: goto label_124628;
        case 0x12462cu: goto label_12462c;
        case 0x124630u: goto label_124630;
        case 0x124634u: goto label_124634;
        case 0x124638u: goto label_124638;
        case 0x12463cu: goto label_12463c;
        case 0x124640u: goto label_124640;
        default: break;
    }

    ctx->pc = 0x124280u;

label_124280:
    // 0x124280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x124280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_124284:
    // 0x124284: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x124284u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124288:
    // 0x124288: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x124288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_12428c:
    // 0x12428c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12428cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_124290:
    // 0x124290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_124294:
    // 0x124294: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x124294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124298:
    // 0x124298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12429c:
    // 0x12429c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12429cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1242a0:
    // 0x1242a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1242a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1242a4:
    // 0x1242a4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1242a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1242a8:
    // 0x1242a8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1242a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_1242ac:
    // 0x1242ac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1242acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1242b0:
    // 0x1242b0: 0x8cb20008  lw          $s2, 0x8($a1)
    ctx->pc = 0x1242b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1242b4:
    // 0x1242b4: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_1242b8:
    if (ctx->pc == 0x1242B8u) {
        ctx->pc = 0x1242B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242B4u;
        // 0x1242b8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1242BCu;
        goto label_1242bc;
    }
    ctx->pc = 0x1242B4u;
    {
        const bool branch_taken_0x1242b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242B4u;
        // 0x1242b8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242b4) {
            ctx->pc = 0x124364u;
            goto label_124364;
        }
    }
    ctx->pc = 0x1242BCu;
label_1242bc:
    // 0x1242bc: 0x948e000c  lhu         $t6, 0xC($a0)
    ctx->pc = 0x1242bcu;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_1242c0:
    // 0x1242c0: 0x31cf0008  andi        $t7, $t6, 0x8
    ctx->pc = 0x1242c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
label_1242c4:
    // 0x1242c4: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
label_1242c8:
    if (ctx->pc == 0x1242C8u) {
        ctx->pc = 0x1242CCu;
        goto label_1242cc;
    }
    ctx->pc = 0x1242C4u;
    {
        const bool branch_taken_0x1242c4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1242c4) {
            ctx->pc = 0x1242D8u;
            goto label_1242d8;
        }
    }
    ctx->pc = 0x1242CCu;
label_1242cc:
    // 0x1242cc: 0x8c8f0010  lw          $t7, 0x10($a0)
    ctx->pc = 0x1242ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1242d0:
    // 0x1242d0: 0x55e00007  bnel        $t7, $zero, . + 4 + (0x7 << 2)
label_1242d4:
    if (ctx->pc == 0x1242D4u) {
        ctx->pc = 0x1242D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242D0u;
        // 0x1242d4: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1242D8u;
        goto label_1242d8;
    }
    ctx->pc = 0x1242D0u;
    {
        const bool branch_taken_0x1242d0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1242d0) {
            ctx->pc = 0x1242D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1242D0u;
            // 0x1242d4: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1242F0u;
            goto label_1242f0;
        }
    }
    ctx->pc = 0x1242D8u;
label_1242d8:
    // 0x1242d8: 0xc04b054  jal         func_12C150
label_1242dc:
    if (ctx->pc == 0x1242DCu) {
        ctx->pc = 0x1242E0u;
        goto label_1242e0;
    }
    ctx->pc = 0x1242D8u;
    SET_GPR_U32(ctx, 31, 0x1242E0u);
    ctx->pc = 0x12C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C150u, 0x1242D8u, 0x1242E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1242E0u;
label_1242e0:
    // 0x1242e0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_1242e4:
    if (ctx->pc == 0x1242E4u) {
        ctx->pc = 0x1242E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242E0u;
        // 0x1242e4: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1242E8u;
        goto label_1242e8;
    }
    ctx->pc = 0x1242E0u;
    {
        const bool branch_taken_0x1242e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1242E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242E0u;
        // 0x1242e4: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242e0) {
            ctx->pc = 0x124364u;
            goto label_124364;
        }
    }
    ctx->pc = 0x1242E8u;
label_1242e8:
    // 0x1242e8: 0x966e000c  lhu         $t6, 0xC($s3)
    ctx->pc = 0x1242e8u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_1242ec:
    // 0x1242ec: 0x8eb10000  lw          $s1, 0x0($s5)
    ctx->pc = 0x1242ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1242f0:
    // 0x1242f0: 0x31cf0002  andi        $t7, $t6, 0x2
    ctx->pc = 0x1242f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
label_1242f4:
    // 0x1242f4: 0x11e0002c  beqz        $t7, . + 4 + (0x2C << 2)
label_1242f8:
    if (ctx->pc == 0x1242F8u) {
        ctx->pc = 0x1242F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242F4u;
        // 0x1242f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1242FCu;
        goto label_1242fc;
    }
    ctx->pc = 0x1242F4u;
    {
        const bool branch_taken_0x1242f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242F4u;
        // 0x1242f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242f4) {
            ctx->pc = 0x1243A8u;
            goto label_1243a8;
        }
    }
    ctx->pc = 0x1242FCu;
label_1242fc:
    // 0x1242fc: 0x24160400  addiu       $s6, $zero, 0x400
    ctx->pc = 0x1242fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_124300:
    // 0x124300: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_124304:
    if (ctx->pc == 0x124304u) {
        ctx->pc = 0x124304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124300u;
        // 0x124304: 0x2e4f0401  sltiu       $t7, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124308u;
        goto label_124308;
    }
    ctx->pc = 0x124300u;
    {
        const bool branch_taken_0x124300 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x124304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124300u;
        // 0x124304: 0x2e4f0401  sltiu       $t7, $s2, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124300) {
            ctx->pc = 0x12432Cu;
            goto label_12432c;
        }
    }
    ctx->pc = 0x124308u;
label_124308:
    // 0x124308: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x124308u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12430c:
    // 0x12430c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x12430cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_124310:
    // 0x124310: 0x0  nop
    ctx->pc = 0x124310u;
    // NOP
label_124314:
    // 0x124314: 0x0  nop
    ctx->pc = 0x124314u;
    // NOP
label_124318:
    // 0x124318: 0x0  nop
    ctx->pc = 0x124318u;
    // NOP
label_12431c:
    // 0x12431c: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
label_124320:
    if (ctx->pc == 0x124320u) {
        ctx->pc = 0x124320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12431Cu;
        // 0x124320: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124324u;
        goto label_124324;
    }
    ctx->pc = 0x12431Cu;
    {
        const bool branch_taken_0x12431c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x124320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12431Cu;
        // 0x124320: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12431c) {
            ctx->pc = 0x124308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124308;
        }
    }
    ctx->pc = 0x124324u;
label_124324:
    // 0x124324: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x124324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_124328:
    // 0x124328: 0x2e4f0401  sltiu       $t7, $s2, 0x401
    ctx->pc = 0x124328u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
label_12432c:
    // 0x12432c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x12432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_124330:
    // 0x124330: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x124330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_124334:
    // 0x124334: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x124334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_124338:
    // 0x124338: 0x24f300b  movn        $a2, $s2, $t7
    ctx->pc = 0x124338u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
label_12433c:
    // 0x12433c: 0x40f809  jalr        $v0
label_124340:
    if (ctx->pc == 0x124340u) {
        ctx->pc = 0x124340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12433Cu;
        // 0x124340: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124344u;
        goto label_124344;
    }
    ctx->pc = 0x12433Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124344u);
        ctx->pc = 0x124340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12433Cu;
        // 0x124340: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12433Cu, 0x124344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124344u;
label_124344:
    // 0x124344: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_124348:
    if (ctx->pc == 0x124348u) {
        ctx->pc = 0x124348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124344u;
        // 0x124348: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12434Cu;
        goto label_12434c;
    }
    ctx->pc = 0x124344u;
    {
        const bool branch_taken_0x124344 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x124348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124344u;
        // 0x124348: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124344) {
            ctx->pc = 0x124394u;
            goto label_124394;
        }
    }
    ctx->pc = 0x12434Cu;
label_12434c:
    // 0x12434c: 0x8eaf0008  lw          $t7, 0x8($s5)
    ctx->pc = 0x12434cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_124350:
    // 0x124350: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x124350u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_124354:
    // 0x124354: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x124354u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
label_124358:
    // 0x124358: 0x15e0ffe9  bnez        $t7, . + 4 + (-0x17 << 2)
label_12435c:
    if (ctx->pc == 0x12435Cu) {
        ctx->pc = 0x12435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124358u;
        // 0x12435c: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124360u;
        goto label_124360;
    }
    ctx->pc = 0x124358u;
    {
        const bool branch_taken_0x124358 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124358u;
        // 0x12435c: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124358) {
            ctx->pc = 0x124300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124300;
        }
    }
    ctx->pc = 0x124360u;
label_124360:
    // 0x124360: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x124360u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124364:
    // 0x124364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124368:
    // 0x124368: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x124368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_12436c:
    // 0x12436c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12436cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_124370:
    // 0x124370: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124370u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_124374:
    // 0x124374: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124374u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_124378:
    // 0x124378: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x124378u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12437c:
    // 0x12437c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12437cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_124380:
    // 0x124380: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x124380u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_124384:
    // 0x124384: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x124384u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_124388:
    // 0x124388: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x124388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12438c:
    // 0x12438c: 0x3e00008  jr          $ra
label_124390:
    if (ctx->pc == 0x124390u) {
        ctx->pc = 0x124390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12438Cu;
        // 0x124390: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124394u;
        goto label_124394;
    }
    ctx->pc = 0x12438Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12438Cu;
        // 0x124390: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12438Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124394u;
label_124394:
    // 0x124394: 0x966f000c  lhu         $t7, 0xC($s3)
    ctx->pc = 0x124394u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_124398:
    // 0x124398: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x124398u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12439c:
    // 0x12439c: 0x35ef0040  ori         $t7, $t7, 0x40
    ctx->pc = 0x12439cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
label_1243a0:
    // 0x1243a0: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_1243a4:
    if (ctx->pc == 0x1243A4u) {
        ctx->pc = 0x1243A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243A0u;
        // 0x1243a4: 0xa66f000c  sh          $t7, 0xC($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1243A8u;
        goto label_1243a8;
    }
    ctx->pc = 0x1243A0u;
    {
        const bool branch_taken_0x1243a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243A0u;
        // 0x1243a4: 0xa66f000c  sh          $t7, 0xC($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243a0) {
            ctx->pc = 0x124364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124364;
        }
    }
    ctx->pc = 0x1243A8u;
label_1243a8:
    // 0x1243a8: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x1243a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
label_1243ac:
    // 0x1243ac: 0xf7c00  sll         $t7, $t7, 16
    ctx->pc = 0x1243acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 16));
label_1243b0:
    // 0x1243b0: 0xf7c03  sra         $t7, $t7, 16
    ctx->pc = 0x1243b0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 16));
label_1243b4:
    // 0x1243b4: 0x15e0004f  bnez        $t7, . + 4 + (0x4F << 2)
label_1243b8:
    if (ctx->pc == 0x1243B8u) {
        ctx->pc = 0x1243B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243B4u;
        // 0x1243b8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1243BCu;
        goto label_1243bc;
    }
    ctx->pc = 0x1243B4u;
    {
        const bool branch_taken_0x1243b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1243B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243B4u;
        // 0x1243b8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243b4) {
            ctx->pc = 0x1244F4u;
            goto label_1244f4;
        }
    }
    ctx->pc = 0x1243BCu;
label_1243bc:
    // 0x1243bc: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_1243c0:
    if (ctx->pc == 0x1243C0u) {
        ctx->pc = 0x1243C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243BCu;
        // 0x1243c0: 0x31cf0200  andi        $t7, $t6, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1243C4u;
        goto label_1243c4;
    }
    ctx->pc = 0x1243BCu;
    {
        const bool branch_taken_0x1243bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1243C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243BCu;
        // 0x1243c0: 0x31cf0200  andi        $t7, $t6, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243bc) {
            ctx->pc = 0x1243E8u;
            goto label_1243e8;
        }
    }
    ctx->pc = 0x1243C4u;
label_1243c4:
    // 0x1243c4: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x1243c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1243c8:
    // 0x1243c8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1243c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1243cc:
    // 0x1243cc: 0x0  nop
    ctx->pc = 0x1243ccu;
    // NOP
label_1243d0:
    // 0x1243d0: 0x0  nop
    ctx->pc = 0x1243d0u;
    // NOP
label_1243d4:
    // 0x1243d4: 0x0  nop
    ctx->pc = 0x1243d4u;
    // NOP
label_1243d8:
    // 0x1243d8: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
label_1243dc:
    if (ctx->pc == 0x1243DCu) {
        ctx->pc = 0x1243DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243D8u;
        // 0x1243dc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1243E0u;
        goto label_1243e0;
    }
    ctx->pc = 0x1243D8u;
    {
        const bool branch_taken_0x1243d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243D8u;
        // 0x1243dc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243d8) {
            ctx->pc = 0x1243C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1243c4;
        }
    }
    ctx->pc = 0x1243E0u;
label_1243e0:
    // 0x1243e0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1243e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1243e4:
    // 0x1243e4: 0x31cf0200  andi        $t7, $t6, 0x200
    ctx->pc = 0x1243e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)512);
label_1243e8:
    // 0x1243e8: 0x11e00016  beqz        $t7, . + 4 + (0x16 << 2)
label_1243ec:
    if (ctx->pc == 0x1243ECu) {
        ctx->pc = 0x1243ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243E8u;
        // 0x1243ec: 0x8e700008  lw          $s0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1243F0u;
        goto label_1243f0;
    }
    ctx->pc = 0x1243E8u;
    {
        const bool branch_taken_0x1243e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1243E8u;
        // 0x1243ec: 0x8e700008  lw          $s0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243e8) {
            ctx->pc = 0x124444u;
            goto label_124444;
        }
    }
    ctx->pc = 0x1243F0u;
label_1243f0:
    // 0x1243f0: 0x250782b  sltu        $t7, $s2, $s0
    ctx->pc = 0x1243f0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1243f4:
    // 0x1243f4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1243f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1243f8:
    // 0x1243f8: 0x24f800b  movn        $s0, $s2, $t7
    ctx->pc = 0x1243f8u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_1243fc:
    // 0x1243fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1243fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_124400:
    // 0x124400: 0xc04954e  jal         func_125538
label_124404:
    if (ctx->pc == 0x124404u) {
        ctx->pc = 0x124404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124400u;
        // 0x124404: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124408u;
        goto label_124408;
    }
    ctx->pc = 0x124400u;
    SET_GPR_U32(ctx, 31, 0x124408u);
    ctx->pc = 0x124404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124400u;
    // 0x124404: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125538u, 0x124400u, 0x124408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124408u;
label_124408:
    // 0x124408: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x124408u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_12440c:
    // 0x12440c: 0x8e6e0000  lw          $t6, 0x0($s3)
    ctx->pc = 0x12440cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_124410:
    // 0x124410: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x124410u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_124414:
    // 0x124414: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x124414u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
label_124418:
    // 0x124418: 0xae6f0008  sw          $t7, 0x8($s3)
    ctx->pc = 0x124418u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 15));
label_12441c:
    // 0x12441c: 0xae6e0000  sw          $t6, 0x0($s3)
    ctx->pc = 0x12441cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
label_124420:
    // 0x124420: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x124420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124424:
    // 0x124424: 0x8eaf0008  lw          $t7, 0x8($s5)
    ctx->pc = 0x124424u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_124428:
    // 0x124428: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x124428u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_12442c:
    // 0x12442c: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x12442cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_124430:
    // 0x124430: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x124430u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_124434:
    // 0x124434: 0x11e0ffca  beqz        $t7, . + 4 + (-0x36 << 2)
label_124438:
    if (ctx->pc == 0x124438u) {
        ctx->pc = 0x124438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124434u;
        // 0x124438: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12443Cu;
        goto label_12443c;
    }
    ctx->pc = 0x124434u;
    {
        const bool branch_taken_0x124434 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124434u;
        // 0x124438: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124434) {
            ctx->pc = 0x124360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124360;
        }
    }
    ctx->pc = 0x12443Cu;
label_12443c:
    // 0x12443c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
label_124440:
    if (ctx->pc == 0x124440u) {
        ctx->pc = 0x124440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12443Cu;
        // 0x124440: 0x966e000c  lhu         $t6, 0xC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124444u;
        goto label_124444;
    }
    ctx->pc = 0x12443Cu;
    {
        const bool branch_taken_0x12443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12443Cu;
        // 0x124440: 0x966e000c  lhu         $t6, 0xC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12443c) {
            ctx->pc = 0x1243BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1243bc;
        }
    }
    ctx->pc = 0x124444u;
label_124444:
    // 0x124444: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x124444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_124448:
    // 0x124448: 0x8e6f0010  lw          $t7, 0x10($s3)
    ctx->pc = 0x124448u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_12444c:
    // 0x12444c: 0x1e4782b  sltu        $t7, $t7, $a0
    ctx->pc = 0x12444cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_124450:
    // 0x124450: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
label_124454:
    if (ctx->pc == 0x124454u) {
        ctx->pc = 0x124454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124450u;
        // 0x124454: 0x212782b  sltu        $t7, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124458u;
        goto label_124458;
    }
    ctx->pc = 0x124450u;
    {
        const bool branch_taken_0x124450 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124450u;
        // 0x124454: 0x212782b  sltu        $t7, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124450) {
            ctx->pc = 0x124490u;
            goto label_124490;
        }
    }
    ctx->pc = 0x124458u;
label_124458:
    // 0x124458: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
label_12445c:
    if (ctx->pc == 0x12445Cu) {
        ctx->pc = 0x12445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124458u;
        // 0x12445c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124460u;
        goto label_124460;
    }
    ctx->pc = 0x124458u;
    {
        const bool branch_taken_0x124458 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124458u;
        // 0x12445c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124458) {
            ctx->pc = 0x124490u;
            goto label_124490;
        }
    }
    ctx->pc = 0x124460u;
label_124460:
    // 0x124460: 0xc04954e  jal         func_125538
label_124464:
    if (ctx->pc == 0x124464u) {
        ctx->pc = 0x124464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124460u;
        // 0x124464: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124468u;
        goto label_124468;
    }
    ctx->pc = 0x124460u;
    SET_GPR_U32(ctx, 31, 0x124468u);
    ctx->pc = 0x124464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124460u;
    // 0x124464: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125538u, 0x124460u, 0x124468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124468u;
label_124468:
    // 0x124468: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x124468u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_12446c:
    // 0x12446c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12446cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_124470:
    // 0x124470: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x124470u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_124474:
    // 0x124474: 0xc048e58  jal         func_123960
label_124478:
    if (ctx->pc == 0x124478u) {
        ctx->pc = 0x124478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124474u;
        // 0x124478: 0xae6f0000  sw          $t7, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12447Cu;
        goto label_12447c;
    }
    ctx->pc = 0x124474u;
    SET_GPR_U32(ctx, 31, 0x12447Cu);
    ctx->pc = 0x124478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124474u;
    // 0x124478: 0xae6f0000  sw          $t7, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123960u, 0x124474u, 0x12447Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12447Cu;
label_12447c:
    // 0x12447c: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
label_124480:
    if (ctx->pc == 0x124480u) {
        ctx->pc = 0x124480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12447Cu;
        // 0x124480: 0x8eaf0008  lw          $t7, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124484u;
        goto label_124484;
    }
    ctx->pc = 0x12447Cu;
    {
        const bool branch_taken_0x12447c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12447c) {
            ctx->pc = 0x124480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12447Cu;
            // 0x124480: 0x8eaf0008  lw          $t7, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124428;
        }
    }
    ctx->pc = 0x124484u;
label_124484:
    // 0x124484: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_124488:
    if (ctx->pc == 0x124488u) {
        ctx->pc = 0x124488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124484u;
        // 0x124488: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12448Cu;
        goto label_12448c;
    }
    ctx->pc = 0x124484u;
    {
        const bool branch_taken_0x124484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124484u;
        // 0x124488: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124484) {
            ctx->pc = 0x124398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124398;
        }
    }
    ctx->pc = 0x12448Cu;
label_12448c:
    // 0x12448c: 0x0  nop
    ctx->pc = 0x12448cu;
    // NOP
label_124490:
    // 0x124490: 0x8e700014  lw          $s0, 0x14($s3)
    ctx->pc = 0x124490u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_124494:
    // 0x124494: 0x250782b  sltu        $t7, $s2, $s0
    ctx->pc = 0x124494u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_124498:
    // 0x124498: 0x55e0000b  bnel        $t7, $zero, . + 4 + (0xB << 2)
label_12449c:
    if (ctx->pc == 0x12449Cu) {
        ctx->pc = 0x12449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124498u;
        // 0x12449c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244A0u;
        goto label_1244a0;
    }
    ctx->pc = 0x124498u;
    {
        const bool branch_taken_0x124498 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x124498) {
            ctx->pc = 0x12449Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124498u;
            // 0x12449c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1244C8u;
            goto label_1244c8;
        }
    }
    ctx->pc = 0x1244A0u;
label_1244a0:
    // 0x1244a0: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1244a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1244a4:
    // 0x1244a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1244a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1244a8:
    // 0x1244a8: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1244a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1244ac:
    // 0x1244ac: 0x40f809  jalr        $v0
label_1244b0:
    if (ctx->pc == 0x1244B0u) {
        ctx->pc = 0x1244B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244ACu;
        // 0x1244b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244B4u;
        goto label_1244b4;
    }
    ctx->pc = 0x1244ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1244B4u);
        ctx->pc = 0x1244B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244ACu;
        // 0x1244b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1244ACu, 0x1244B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1244B4u;
label_1244b4:
    // 0x1244b4: 0x1c40ffdb  bgtz        $v0, . + 4 + (-0x25 << 2)
label_1244b8:
    if (ctx->pc == 0x1244B8u) {
        ctx->pc = 0x1244B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244B4u;
        // 0x1244b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244BCu;
        goto label_1244bc;
    }
    ctx->pc = 0x1244B4u;
    {
        const bool branch_taken_0x1244b4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1244B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244B4u;
        // 0x1244b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244b4) {
            ctx->pc = 0x124424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124424;
        }
    }
    ctx->pc = 0x1244BCu;
label_1244bc:
    // 0x1244bc: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_1244c0:
    if (ctx->pc == 0x1244C0u) {
        ctx->pc = 0x1244C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244BCu;
        // 0x1244c0: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244C4u;
        goto label_1244c4;
    }
    ctx->pc = 0x1244BCu;
    {
        const bool branch_taken_0x1244bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1244C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244BCu;
        // 0x1244c0: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244bc) {
            ctx->pc = 0x124398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124398;
        }
    }
    ctx->pc = 0x1244C4u;
label_1244c4:
    // 0x1244c4: 0x0  nop
    ctx->pc = 0x1244c4u;
    // NOP
label_1244c8:
    // 0x1244c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1244c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1244cc:
    // 0x1244cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1244ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1244d0:
    // 0x1244d0: 0xc04954e  jal         func_125538
label_1244d4:
    if (ctx->pc == 0x1244D4u) {
        ctx->pc = 0x1244D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244D0u;
        // 0x1244d4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244D8u;
        goto label_1244d8;
    }
    ctx->pc = 0x1244D0u;
    SET_GPR_U32(ctx, 31, 0x1244D8u);
    ctx->pc = 0x1244D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1244D0u;
    // 0x1244d4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125538u, 0x1244D0u, 0x1244D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1244D8u;
label_1244d8:
    // 0x1244d8: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1244d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1244dc:
    // 0x1244dc: 0x8e6e0000  lw          $t6, 0x0($s3)
    ctx->pc = 0x1244dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1244e0:
    // 0x1244e0: 0x1f27823  subu        $t7, $t7, $s2
    ctx->pc = 0x1244e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
label_1244e4:
    // 0x1244e4: 0x1d27021  addu        $t6, $t6, $s2
    ctx->pc = 0x1244e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
label_1244e8:
    // 0x1244e8: 0xae6f0008  sw          $t7, 0x8($s3)
    ctx->pc = 0x1244e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 15));
label_1244ec:
    // 0x1244ec: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
label_1244f0:
    if (ctx->pc == 0x1244F0u) {
        ctx->pc = 0x1244F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244ECu;
        // 0x1244f0: 0xae6e0000  sw          $t6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1244F4u;
        goto label_1244f4;
    }
    ctx->pc = 0x1244ECu;
    {
        const bool branch_taken_0x1244ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1244F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1244ECu;
        // 0x1244f0: 0xae6e0000  sw          $t6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1244ec) {
            ctx->pc = 0x124424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124424;
        }
    }
    ctx->pc = 0x1244F4u;
label_1244f4:
    // 0x1244f4: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_1244f8:
    if (ctx->pc == 0x1244F8u) {
        ctx->pc = 0x1244FCu;
        goto label_1244fc;
    }
    ctx->pc = 0x1244F4u;
    {
        const bool branch_taken_0x1244f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1244f4) {
            ctx->pc = 0x124520u;
            goto label_124520;
        }
    }
    ctx->pc = 0x1244FCu;
label_1244fc:
    // 0x1244fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1244fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124500:
    // 0x124500: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x124500u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_124504:
    // 0x124504: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x124504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_124508:
    // 0x124508: 0x0  nop
    ctx->pc = 0x124508u;
    // NOP
label_12450c:
    // 0x12450c: 0x0  nop
    ctx->pc = 0x12450cu;
    // NOP
label_124510:
    // 0x124510: 0x0  nop
    ctx->pc = 0x124510u;
    // NOP
label_124514:
    // 0x124514: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
label_124518:
    if (ctx->pc == 0x124518u) {
        ctx->pc = 0x124518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124514u;
        // 0x124518: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12451Cu;
        goto label_12451c;
    }
    ctx->pc = 0x124514u;
    {
        const bool branch_taken_0x124514 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x124518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124514u;
        // 0x124518: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124514) {
            ctx->pc = 0x124500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124500;
        }
    }
    ctx->pc = 0x12451Cu;
label_12451c:
    // 0x12451c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12451cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_124520:
    // 0x124520: 0x16e0000a  bnez        $s7, . + 4 + (0xA << 2)
label_124524:
    if (ctx->pc == 0x124524u) {
        ctx->pc = 0x124524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124520u;
        // 0x124524: 0x256782b  sltu        $t7, $s2, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124528u;
        goto label_124528;
    }
    ctx->pc = 0x124520u;
    {
        const bool branch_taken_0x124520 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x124524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124520u;
        // 0x124524: 0x256782b  sltu        $t7, $s2, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124520) {
            ctx->pc = 0x12454Cu;
            goto label_12454c;
        }
    }
    ctx->pc = 0x124528u;
label_124528:
    // 0x124528: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x124528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12452c:
    // 0x12452c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12452cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_124530:
    // 0x124530: 0xc0494c4  jal         func_125310
label_124534:
    if (ctx->pc == 0x124534u) {
        ctx->pc = 0x124534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124530u;
        // 0x124534: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124538u;
        goto label_124538;
    }
    ctx->pc = 0x124530u;
    SET_GPR_U32(ctx, 31, 0x124538u);
    ctx->pc = 0x124534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124530u;
    // 0x124534: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125310u, 0x124530u, 0x124538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124538u;
label_124538:
    // 0x124538: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_12453c:
    if (ctx->pc == 0x12453Cu) {
        ctx->pc = 0x12453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124538u;
        // 0x12453c: 0x547823  subu        $t7, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124540u;
        goto label_124540;
    }
    ctx->pc = 0x124538u;
    {
        const bool branch_taken_0x124538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124538u;
        // 0x12453c: 0x547823  subu        $t7, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124538) {
            ctx->pc = 0x12463Cu;
            goto label_12463c;
        }
    }
    ctx->pc = 0x124540u;
label_124540:
    // 0x124540: 0x25f60001  addiu       $s6, $t7, 0x1
    ctx->pc = 0x124540u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_124544:
    // 0x124544: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x124544u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124548:
    // 0x124548: 0x256782b  sltu        $t7, $s2, $s6
    ctx->pc = 0x124548u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_12454c:
    // 0x12454c: 0x8e6e0008  lw          $t6, 0x8($s3)
    ctx->pc = 0x12454cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_124550:
    // 0x124550: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x124550u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_124554:
    // 0x124554: 0x8e6c0014  lw          $t4, 0x14($s3)
    ctx->pc = 0x124554u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_124558:
    // 0x124558: 0x2cf680a  movz        $t5, $s6, $t7
    ctx->pc = 0x124558u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 22));
label_12455c:
    // 0x12455c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x12455cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_124560:
    // 0x124560: 0x8e6f0010  lw          $t7, 0x10($s3)
    ctx->pc = 0x124560u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_124564:
    // 0x124564: 0x1e4782b  sltu        $t7, $t7, $a0
    ctx->pc = 0x124564u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_124568:
    // 0x124568: 0x11e0001d  beqz        $t7, . + 4 + (0x1D << 2)
label_12456c:
    if (ctx->pc == 0x12456Cu) {
        ctx->pc = 0x12456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124568u;
        // 0x12456c: 0x1cc8021  addu        $s0, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124570u;
        goto label_124570;
    }
    ctx->pc = 0x124568u;
    {
        const bool branch_taken_0x124568 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124568u;
        // 0x12456c: 0x1cc8021  addu        $s0, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124568) {
            ctx->pc = 0x1245E0u;
            goto label_1245e0;
        }
    }
    ctx->pc = 0x124570u;
label_124570:
    // 0x124570: 0x20d782a  slt         $t7, $s0, $t5
    ctx->pc = 0x124570u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
label_124574:
    // 0x124574: 0x11e0001a  beqz        $t7, . + 4 + (0x1A << 2)
label_124578:
    if (ctx->pc == 0x124578u) {
        ctx->pc = 0x124578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124574u;
        // 0x124578: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12457Cu;
        goto label_12457c;
    }
    ctx->pc = 0x124574u;
    {
        const bool branch_taken_0x124574 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x124578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124574u;
        // 0x124578: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124574) {
            ctx->pc = 0x1245E0u;
            goto label_1245e0;
        }
    }
    ctx->pc = 0x12457Cu;
label_12457c:
    // 0x12457c: 0xc04954e  jal         func_125538
label_124580:
    if (ctx->pc == 0x124580u) {
        ctx->pc = 0x124580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12457Cu;
        // 0x124580: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124584u;
        goto label_124584;
    }
    ctx->pc = 0x12457Cu;
    SET_GPR_U32(ctx, 31, 0x124584u);
    ctx->pc = 0x124580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12457Cu;
    // 0x124580: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125538u, 0x12457Cu, 0x124584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124584u;
label_124584:
    // 0x124584: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x124584u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_124588:
    // 0x124588: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x124588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12458c:
    // 0x12458c: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12458cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_124590:
    // 0x124590: 0xc048e58  jal         func_123960
label_124594:
    if (ctx->pc == 0x124594u) {
        ctx->pc = 0x124594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124590u;
        // 0x124594: 0xae6f0000  sw          $t7, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124598u;
        goto label_124598;
    }
    ctx->pc = 0x124590u;
    SET_GPR_U32(ctx, 31, 0x124598u);
    ctx->pc = 0x124594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124590u;
    // 0x124594: 0xae6f0000  sw          $t7, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123960u, 0x124590u, 0x124598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124598u;
label_124598:
    // 0x124598: 0x5440ff7f  bnel        $v0, $zero, . + 4 + (-0x81 << 2)
label_12459c:
    if (ctx->pc == 0x12459Cu) {
        ctx->pc = 0x12459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124598u;
        // 0x12459c: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1245A0u;
        goto label_1245a0;
    }
    ctx->pc = 0x124598u;
    {
        const bool branch_taken_0x124598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124598) {
            ctx->pc = 0x12459Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124598u;
            // 0x12459c: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124398;
        }
    }
    ctx->pc = 0x1245A0u;
label_1245a0:
    // 0x1245a0: 0x2d0b023  subu        $s6, $s6, $s0
    ctx->pc = 0x1245a0u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_1245a4:
    // 0x1245a4: 0x56c00006  bnel        $s6, $zero, . + 4 + (0x6 << 2)
label_1245a8:
    if (ctx->pc == 0x1245A8u) {
        ctx->pc = 0x1245A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245A4u;
        // 0x1245a8: 0x8eaf0008  lw          $t7, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1245ACu;
        goto label_1245ac;
    }
    ctx->pc = 0x1245A4u;
    {
        const bool branch_taken_0x1245a4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1245a4) {
            ctx->pc = 0x1245A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1245A4u;
            // 0x1245a8: 0x8eaf0008  lw          $t7, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1245C0u;
            goto label_1245c0;
        }
    }
    ctx->pc = 0x1245ACu;
label_1245ac:
    // 0x1245ac: 0xc048e58  jal         func_123960
label_1245b0:
    if (ctx->pc == 0x1245B0u) {
        ctx->pc = 0x1245B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245ACu;
        // 0x1245b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1245B4u;
        goto label_1245b4;
    }
    ctx->pc = 0x1245ACu;
    SET_GPR_U32(ctx, 31, 0x1245B4u);
    ctx->pc = 0x1245B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1245ACu;
    // 0x1245b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123960u, 0x1245ACu, 0x1245B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1245B4u;
label_1245b4:
    // 0x1245b4: 0x1440ff77  bnez        $v0, . + 4 + (-0x89 << 2)
label_1245b8:
    if (ctx->pc == 0x1245B8u) {
        ctx->pc = 0x1245B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245B4u;
        // 0x1245b8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1245BCu;
        goto label_1245bc;
    }
    ctx->pc = 0x1245B4u;
    {
        const bool branch_taken_0x1245b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1245B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245B4u;
        // 0x1245b8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245b4) {
            ctx->pc = 0x124394u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124394;
        }
    }
    ctx->pc = 0x1245BCu;
label_1245bc:
    // 0x1245bc: 0x8eaf0008  lw          $t7, 0x8($s5)
    ctx->pc = 0x1245bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_1245c0:
    // 0x1245c0: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x1245c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1245c4:
    // 0x1245c4: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1245c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1245c8:
    // 0x1245c8: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x1245c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_1245cc:
    // 0x1245cc: 0x15e0ffc9  bnez        $t7, . + 4 + (-0x37 << 2)
label_1245d0:
    if (ctx->pc == 0x1245D0u) {
        ctx->pc = 0x1245D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245CCu;
        // 0x1245d0: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1245D4u;
        goto label_1245d4;
    }
    ctx->pc = 0x1245CCu;
    {
        const bool branch_taken_0x1245cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1245D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245CCu;
        // 0x1245d0: 0xaeaf0008  sw          $t7, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245cc) {
            ctx->pc = 0x1244F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1244f4;
        }
    }
    ctx->pc = 0x1245D4u;
label_1245d4:
    // 0x1245d4: 0x1000ff63  b           . + 4 + (-0x9D << 2)
label_1245d8:
    if (ctx->pc == 0x1245D8u) {
        ctx->pc = 0x1245D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245D4u;
        // 0x1245d8: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1245DCu;
        goto label_1245dc;
    }
    ctx->pc = 0x1245D4u;
    {
        const bool branch_taken_0x1245d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245D4u;
        // 0x1245d8: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245d4) {
            ctx->pc = 0x124364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124364;
        }
    }
    ctx->pc = 0x1245DCu;
label_1245dc:
    // 0x1245dc: 0x0  nop
    ctx->pc = 0x1245dcu;
    // NOP
label_1245e0:
    // 0x1245e0: 0x1ac782a  slt         $t7, $t5, $t4
    ctx->pc = 0x1245e0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_1245e4:
    // 0x1245e4: 0x55e0000a  bnel        $t7, $zero, . + 4 + (0xA << 2)
label_1245e8:
    if (ctx->pc == 0x1245E8u) {
        ctx->pc = 0x1245E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245E4u;
        // 0x1245e8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1245ECu;
        goto label_1245ec;
    }
    ctx->pc = 0x1245E4u;
    {
        const bool branch_taken_0x1245e4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1245e4) {
            ctx->pc = 0x1245E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1245E4u;
            // 0x1245e8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124610u;
            goto label_124610;
        }
    }
    ctx->pc = 0x1245ECu;
label_1245ec:
    // 0x1245ec: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1245ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1245f0:
    // 0x1245f0: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x1245f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_1245f4:
    // 0x1245f4: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1245f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1245f8:
    // 0x1245f8: 0x40f809  jalr        $v0
label_1245fc:
    if (ctx->pc == 0x1245FCu) {
        ctx->pc = 0x1245FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245F8u;
        // 0x1245fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124600u;
        goto label_124600;
    }
    ctx->pc = 0x1245F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124600u);
        ctx->pc = 0x1245FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1245F8u;
        // 0x1245fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1245F8u, 0x124600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124600u;
label_124600:
    // 0x124600: 0x1c40ffe7  bgtz        $v0, . + 4 + (-0x19 << 2)
label_124604:
    if (ctx->pc == 0x124604u) {
        ctx->pc = 0x124604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124600u;
        // 0x124604: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124608u;
        goto label_124608;
    }
    ctx->pc = 0x124600u;
    {
        const bool branch_taken_0x124600 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x124604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124600u;
        // 0x124604: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124600) {
            ctx->pc = 0x1245A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1245a0;
        }
    }
    ctx->pc = 0x124608u;
label_124608:
    // 0x124608: 0x1000ff63  b           . + 4 + (-0x9D << 2)
label_12460c:
    if (ctx->pc == 0x12460Cu) {
        ctx->pc = 0x12460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124608u;
        // 0x12460c: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124610u;
        goto label_124610;
    }
    ctx->pc = 0x124608u;
    {
        const bool branch_taken_0x124608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124608u;
        // 0x12460c: 0x966f000c  lhu         $t7, 0xC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124608) {
            ctx->pc = 0x124398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124398;
        }
    }
    ctx->pc = 0x124610u;
label_124610:
    // 0x124610: 0x1a0802d  daddu       $s0, $t5, $zero
    ctx->pc = 0x124610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_124614:
    // 0x124614: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x124614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_124618:
    // 0x124618: 0xc04954e  jal         func_125538
label_12461c:
    if (ctx->pc == 0x12461Cu) {
        ctx->pc = 0x12461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124618u;
        // 0x12461c: 0x1a0302d  daddu       $a2, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124620u;
        goto label_124620;
    }
    ctx->pc = 0x124618u;
    SET_GPR_U32(ctx, 31, 0x124620u);
    ctx->pc = 0x12461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124618u;
    // 0x12461c: 0x1a0302d  daddu       $a2, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125538u, 0x124618u, 0x124620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124620u;
label_124620:
    // 0x124620: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x124620u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_124624:
    // 0x124624: 0x8e6e0000  lw          $t6, 0x0($s3)
    ctx->pc = 0x124624u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_124628:
    // 0x124628: 0x1f07823  subu        $t7, $t7, $s0
    ctx->pc = 0x124628u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
label_12462c:
    // 0x12462c: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12462cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
label_124630:
    // 0x124630: 0xae6f0008  sw          $t7, 0x8($s3)
    ctx->pc = 0x124630u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 15));
label_124634:
    // 0x124634: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_124638:
    if (ctx->pc == 0x124638u) {
        ctx->pc = 0x124638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124634u;
        // 0x124638: 0xae6e0000  sw          $t6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12463Cu;
        goto label_12463c;
    }
    ctx->pc = 0x124634u;
    {
        const bool branch_taken_0x124634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124634u;
        // 0x124638: 0xae6e0000  sw          $t6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124634) {
            ctx->pc = 0x1245A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1245a0;
        }
    }
    ctx->pc = 0x12463Cu;
label_12463c:
    // 0x12463c: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
label_124640:
    if (ctx->pc == 0x124640u) {
        ctx->pc = 0x124640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12463Cu;
        // 0x124640: 0x26560001  addiu       $s6, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124644u;
        goto label_fallthrough_0x12463c;
    }
    ctx->pc = 0x12463Cu;
    {
        const bool branch_taken_0x12463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12463Cu;
        // 0x124640: 0x26560001  addiu       $s6, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12463c) {
            ctx->pc = 0x124544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124544;
        }
    }
label_fallthrough_0x12463c:
    ctx->pc = 0x124644u;
}
