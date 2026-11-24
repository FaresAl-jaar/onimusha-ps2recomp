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

// Function: sub_0033D390
// Address: 0x33d390 - 0x33d720
void sub_0033D390_0x33d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D390_0x33d390");
#endif

    switch (ctx->pc) {
        case 0x33d390u: goto label_33d390;
        case 0x33d394u: goto label_33d394;
        case 0x33d398u: goto label_33d398;
        case 0x33d39cu: goto label_33d39c;
        case 0x33d3a0u: goto label_33d3a0;
        case 0x33d3a4u: goto label_33d3a4;
        case 0x33d3a8u: goto label_33d3a8;
        case 0x33d3acu: goto label_33d3ac;
        case 0x33d3b0u: goto label_33d3b0;
        case 0x33d3b4u: goto label_33d3b4;
        case 0x33d3b8u: goto label_33d3b8;
        case 0x33d3bcu: goto label_33d3bc;
        case 0x33d3c0u: goto label_33d3c0;
        case 0x33d3c4u: goto label_33d3c4;
        case 0x33d3c8u: goto label_33d3c8;
        case 0x33d3ccu: goto label_33d3cc;
        case 0x33d3d0u: goto label_33d3d0;
        case 0x33d3d4u: goto label_33d3d4;
        case 0x33d3d8u: goto label_33d3d8;
        case 0x33d3dcu: goto label_33d3dc;
        case 0x33d3e0u: goto label_33d3e0;
        case 0x33d3e4u: goto label_33d3e4;
        case 0x33d3e8u: goto label_33d3e8;
        case 0x33d3ecu: goto label_33d3ec;
        case 0x33d3f0u: goto label_33d3f0;
        case 0x33d3f4u: goto label_33d3f4;
        case 0x33d3f8u: goto label_33d3f8;
        case 0x33d3fcu: goto label_33d3fc;
        case 0x33d400u: goto label_33d400;
        case 0x33d404u: goto label_33d404;
        case 0x33d408u: goto label_33d408;
        case 0x33d40cu: goto label_33d40c;
        case 0x33d410u: goto label_33d410;
        case 0x33d414u: goto label_33d414;
        case 0x33d418u: goto label_33d418;
        case 0x33d41cu: goto label_33d41c;
        case 0x33d420u: goto label_33d420;
        case 0x33d424u: goto label_33d424;
        case 0x33d428u: goto label_33d428;
        case 0x33d42cu: goto label_33d42c;
        case 0x33d430u: goto label_33d430;
        case 0x33d434u: goto label_33d434;
        case 0x33d438u: goto label_33d438;
        case 0x33d43cu: goto label_33d43c;
        case 0x33d440u: goto label_33d440;
        case 0x33d444u: goto label_33d444;
        case 0x33d448u: goto label_33d448;
        case 0x33d44cu: goto label_33d44c;
        case 0x33d450u: goto label_33d450;
        case 0x33d454u: goto label_33d454;
        case 0x33d458u: goto label_33d458;
        case 0x33d45cu: goto label_33d45c;
        case 0x33d460u: goto label_33d460;
        case 0x33d464u: goto label_33d464;
        case 0x33d468u: goto label_33d468;
        case 0x33d46cu: goto label_33d46c;
        case 0x33d470u: goto label_33d470;
        case 0x33d474u: goto label_33d474;
        case 0x33d478u: goto label_33d478;
        case 0x33d47cu: goto label_33d47c;
        case 0x33d480u: goto label_33d480;
        case 0x33d484u: goto label_33d484;
        case 0x33d488u: goto label_33d488;
        case 0x33d48cu: goto label_33d48c;
        case 0x33d490u: goto label_33d490;
        case 0x33d494u: goto label_33d494;
        case 0x33d498u: goto label_33d498;
        case 0x33d49cu: goto label_33d49c;
        case 0x33d4a0u: goto label_33d4a0;
        case 0x33d4a4u: goto label_33d4a4;
        case 0x33d4a8u: goto label_33d4a8;
        case 0x33d4acu: goto label_33d4ac;
        case 0x33d4b0u: goto label_33d4b0;
        case 0x33d4b4u: goto label_33d4b4;
        case 0x33d4b8u: goto label_33d4b8;
        case 0x33d4bcu: goto label_33d4bc;
        case 0x33d4c0u: goto label_33d4c0;
        case 0x33d4c4u: goto label_33d4c4;
        case 0x33d4c8u: goto label_33d4c8;
        case 0x33d4ccu: goto label_33d4cc;
        case 0x33d4d0u: goto label_33d4d0;
        case 0x33d4d4u: goto label_33d4d4;
        case 0x33d4d8u: goto label_33d4d8;
        case 0x33d4dcu: goto label_33d4dc;
        case 0x33d4e0u: goto label_33d4e0;
        case 0x33d4e4u: goto label_33d4e4;
        case 0x33d4e8u: goto label_33d4e8;
        case 0x33d4ecu: goto label_33d4ec;
        case 0x33d4f0u: goto label_33d4f0;
        case 0x33d4f4u: goto label_33d4f4;
        case 0x33d4f8u: goto label_33d4f8;
        case 0x33d4fcu: goto label_33d4fc;
        case 0x33d500u: goto label_33d500;
        case 0x33d504u: goto label_33d504;
        case 0x33d508u: goto label_33d508;
        case 0x33d50cu: goto label_33d50c;
        case 0x33d510u: goto label_33d510;
        case 0x33d514u: goto label_33d514;
        case 0x33d518u: goto label_33d518;
        case 0x33d51cu: goto label_33d51c;
        case 0x33d520u: goto label_33d520;
        case 0x33d524u: goto label_33d524;
        case 0x33d528u: goto label_33d528;
        case 0x33d52cu: goto label_33d52c;
        case 0x33d530u: goto label_33d530;
        case 0x33d534u: goto label_33d534;
        case 0x33d538u: goto label_33d538;
        case 0x33d53cu: goto label_33d53c;
        case 0x33d540u: goto label_33d540;
        case 0x33d544u: goto label_33d544;
        case 0x33d548u: goto label_33d548;
        case 0x33d54cu: goto label_33d54c;
        case 0x33d550u: goto label_33d550;
        case 0x33d554u: goto label_33d554;
        case 0x33d558u: goto label_33d558;
        case 0x33d55cu: goto label_33d55c;
        case 0x33d560u: goto label_33d560;
        case 0x33d564u: goto label_33d564;
        case 0x33d568u: goto label_33d568;
        case 0x33d56cu: goto label_33d56c;
        case 0x33d570u: goto label_33d570;
        case 0x33d574u: goto label_33d574;
        case 0x33d578u: goto label_33d578;
        case 0x33d57cu: goto label_33d57c;
        case 0x33d580u: goto label_33d580;
        case 0x33d584u: goto label_33d584;
        case 0x33d588u: goto label_33d588;
        case 0x33d58cu: goto label_33d58c;
        case 0x33d590u: goto label_33d590;
        case 0x33d594u: goto label_33d594;
        case 0x33d598u: goto label_33d598;
        case 0x33d59cu: goto label_33d59c;
        case 0x33d5a0u: goto label_33d5a0;
        case 0x33d5a4u: goto label_33d5a4;
        case 0x33d5a8u: goto label_33d5a8;
        case 0x33d5acu: goto label_33d5ac;
        case 0x33d5b0u: goto label_33d5b0;
        case 0x33d5b4u: goto label_33d5b4;
        case 0x33d5b8u: goto label_33d5b8;
        case 0x33d5bcu: goto label_33d5bc;
        case 0x33d5c0u: goto label_33d5c0;
        case 0x33d5c4u: goto label_33d5c4;
        case 0x33d5c8u: goto label_33d5c8;
        case 0x33d5ccu: goto label_33d5cc;
        case 0x33d5d0u: goto label_33d5d0;
        case 0x33d5d4u: goto label_33d5d4;
        case 0x33d5d8u: goto label_33d5d8;
        case 0x33d5dcu: goto label_33d5dc;
        case 0x33d5e0u: goto label_33d5e0;
        case 0x33d5e4u: goto label_33d5e4;
        case 0x33d5e8u: goto label_33d5e8;
        case 0x33d5ecu: goto label_33d5ec;
        case 0x33d5f0u: goto label_33d5f0;
        case 0x33d5f4u: goto label_33d5f4;
        case 0x33d5f8u: goto label_33d5f8;
        case 0x33d5fcu: goto label_33d5fc;
        case 0x33d600u: goto label_33d600;
        case 0x33d604u: goto label_33d604;
        case 0x33d608u: goto label_33d608;
        case 0x33d60cu: goto label_33d60c;
        case 0x33d610u: goto label_33d610;
        case 0x33d614u: goto label_33d614;
        case 0x33d618u: goto label_33d618;
        case 0x33d61cu: goto label_33d61c;
        case 0x33d620u: goto label_33d620;
        case 0x33d624u: goto label_33d624;
        case 0x33d628u: goto label_33d628;
        case 0x33d62cu: goto label_33d62c;
        case 0x33d630u: goto label_33d630;
        case 0x33d634u: goto label_33d634;
        case 0x33d638u: goto label_33d638;
        case 0x33d63cu: goto label_33d63c;
        case 0x33d640u: goto label_33d640;
        case 0x33d644u: goto label_33d644;
        case 0x33d648u: goto label_33d648;
        case 0x33d64cu: goto label_33d64c;
        case 0x33d650u: goto label_33d650;
        case 0x33d654u: goto label_33d654;
        case 0x33d658u: goto label_33d658;
        case 0x33d65cu: goto label_33d65c;
        case 0x33d660u: goto label_33d660;
        case 0x33d664u: goto label_33d664;
        case 0x33d668u: goto label_33d668;
        case 0x33d66cu: goto label_33d66c;
        case 0x33d670u: goto label_33d670;
        case 0x33d674u: goto label_33d674;
        case 0x33d678u: goto label_33d678;
        case 0x33d67cu: goto label_33d67c;
        case 0x33d680u: goto label_33d680;
        case 0x33d684u: goto label_33d684;
        case 0x33d688u: goto label_33d688;
        case 0x33d68cu: goto label_33d68c;
        case 0x33d690u: goto label_33d690;
        case 0x33d694u: goto label_33d694;
        case 0x33d698u: goto label_33d698;
        case 0x33d69cu: goto label_33d69c;
        case 0x33d6a0u: goto label_33d6a0;
        case 0x33d6a4u: goto label_33d6a4;
        case 0x33d6a8u: goto label_33d6a8;
        case 0x33d6acu: goto label_33d6ac;
        case 0x33d6b0u: goto label_33d6b0;
        case 0x33d6b4u: goto label_33d6b4;
        case 0x33d6b8u: goto label_33d6b8;
        case 0x33d6bcu: goto label_33d6bc;
        case 0x33d6c0u: goto label_33d6c0;
        case 0x33d6c4u: goto label_33d6c4;
        case 0x33d6c8u: goto label_33d6c8;
        case 0x33d6ccu: goto label_33d6cc;
        case 0x33d6d0u: goto label_33d6d0;
        case 0x33d6d4u: goto label_33d6d4;
        case 0x33d6d8u: goto label_33d6d8;
        case 0x33d6dcu: goto label_33d6dc;
        case 0x33d6e0u: goto label_33d6e0;
        case 0x33d6e4u: goto label_33d6e4;
        case 0x33d6e8u: goto label_33d6e8;
        case 0x33d6ecu: goto label_33d6ec;
        case 0x33d6f0u: goto label_33d6f0;
        case 0x33d6f4u: goto label_33d6f4;
        case 0x33d6f8u: goto label_33d6f8;
        case 0x33d6fcu: goto label_33d6fc;
        case 0x33d700u: goto label_33d700;
        case 0x33d704u: goto label_33d704;
        case 0x33d708u: goto label_33d708;
        case 0x33d70cu: goto label_33d70c;
        case 0x33d710u: goto label_33d710;
        case 0x33d714u: goto label_33d714;
        case 0x33d718u: goto label_33d718;
        case 0x33d71cu: goto label_33d71c;
        default: break;
    }

    ctx->pc = 0x33d390u;

label_33d390:
    // 0x33d390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_33d394:
    // 0x33d394: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x33d394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_33d398:
    // 0x33d398: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33d398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33d39c:
    // 0x33d39c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33d3a0:
    // 0x33d3a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33d3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_33d3a4:
    // 0x33d3a4: 0x8c8606ac  lw          $a2, 0x6AC($a0)
    ctx->pc = 0x33d3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
label_33d3a8:
    // 0x33d3a8: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x33d3a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
label_33d3ac:
    // 0x33d3ac: 0xac8606ac  sw          $a2, 0x6AC($a0)
    ctx->pc = 0x33d3acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 6));
label_33d3b0:
    // 0x33d3b0: 0x8c8606b4  lw          $a2, 0x6B4($a0)
    ctx->pc = 0x33d3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
label_33d3b4:
    // 0x33d3b4: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x33d3b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
label_33d3b8:
    // 0x33d3b8: 0xac8606b4  sw          $a2, 0x6B4($a0)
    ctx->pc = 0x33d3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 6));
label_33d3bc:
    // 0x33d3bc: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x33d3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_33d3c0:
    // 0x33d3c0: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x33d3c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
label_33d3c4:
    // 0x33d3c4: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x33d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_33d3c8:
    // 0x33d3c8: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x33d3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_33d3cc:
    // 0x33d3cc: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x33d3ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
label_33d3d0:
    // 0x33d3d0: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x33d3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_33d3d4:
    // 0x33d3d4: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x33d3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_33d3d8:
    // 0x33d3d8: 0x34c60200  ori         $a2, $a2, 0x200
    ctx->pc = 0x33d3d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
label_33d3dc:
    // 0x33d3dc: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x33d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_33d3e0:
    // 0x33d3e0: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x33d3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_33d3e4:
    // 0x33d3e4: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x33d3e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
label_33d3e8:
    // 0x33d3e8: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x33d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_33d3ec:
    // 0x33d3ec: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x33d3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_33d3f0:
    // 0x33d3f0: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x33d3f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_33d3f4:
    // 0x33d3f4: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x33d3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
label_33d3f8:
    // 0x33d3f8: 0x8c860148  lw          $a2, 0x148($a0)
    ctx->pc = 0x33d3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_33d3fc:
    // 0x33d3fc: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x33d3fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_33d400:
    // 0x33d400: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x33d400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_33d404:
    // 0x33d404: 0x90870821  lbu         $a3, 0x821($a0)
    ctx->pc = 0x33d404u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_33d408:
    // 0x33d408: 0x10e30087  beq         $a3, $v1, . + 4 + (0x87 << 2)
label_33d40c:
    if (ctx->pc == 0x33D40Cu) {
        ctx->pc = 0x33D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D408u;
        // 0x33d40c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D410u;
        goto label_33d410;
    }
    ctx->pc = 0x33D408u;
    {
        const bool branch_taken_0x33d408 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x33D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D408u;
        // 0x33d40c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d408) {
            ctx->pc = 0x33D628u;
            goto label_33d628;
        }
    }
    ctx->pc = 0x33D410u;
label_33d410:
    // 0x33d410: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x33d410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33d414:
    // 0x33d414: 0x10e60050  beq         $a3, $a2, . + 4 + (0x50 << 2)
label_33d418:
    if (ctx->pc == 0x33D418u) {
        ctx->pc = 0x33D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D414u;
        // 0x33d418: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D41Cu;
        goto label_33d41c;
    }
    ctx->pc = 0x33D414u;
    {
        const bool branch_taken_0x33d414 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x33D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D414u;
        // 0x33d418: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d414) {
            ctx->pc = 0x33D558u;
            goto label_33d558;
        }
    }
    ctx->pc = 0x33D41Cu;
label_33d41c:
    // 0x33d41c: 0x10e50040  beq         $a3, $a1, . + 4 + (0x40 << 2)
label_33d420:
    if (ctx->pc == 0x33D420u) {
        ctx->pc = 0x33D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D41Cu;
        // 0x33d420: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D424u;
        goto label_33d424;
    }
    ctx->pc = 0x33D41Cu;
    {
        const bool branch_taken_0x33d41c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x33D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D41Cu;
        // 0x33d420: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d41c) {
            ctx->pc = 0x33D520u;
            goto label_33d520;
        }
    }
    ctx->pc = 0x33D424u;
label_33d424:
    // 0x33d424: 0x10e30030  beq         $a3, $v1, . + 4 + (0x30 << 2)
label_33d428:
    if (ctx->pc == 0x33D428u) {
        ctx->pc = 0x33D42Cu;
        goto label_33d42c;
    }
    ctx->pc = 0x33D424u;
    {
        const bool branch_taken_0x33d424 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x33d424) {
            ctx->pc = 0x33D4E8u;
            goto label_33d4e8;
        }
    }
    ctx->pc = 0x33D42Cu;
label_33d42c:
    // 0x33d42c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_33d430:
    if (ctx->pc == 0x33D430u) {
        ctx->pc = 0x33D434u;
        goto label_33d434;
    }
    ctx->pc = 0x33D42Cu;
    {
        const bool branch_taken_0x33d42c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d42c) {
            ctx->pc = 0x33D440u;
            goto label_33d440;
        }
    }
    ctx->pc = 0x33D434u;
label_33d434:
    // 0x33d434: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_33d438:
    if (ctx->pc == 0x33D438u) {
        ctx->pc = 0x33D43Cu;
        goto label_33d43c;
    }
    ctx->pc = 0x33D434u;
    {
        const bool branch_taken_0x33d434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d434) {
            ctx->pc = 0x33D710u;
            goto label_33d710;
        }
    }
    ctx->pc = 0x33D43Cu;
label_33d43c:
    // 0x33d43c: 0x0  nop
    ctx->pc = 0x33d43cu;
    // NOP
label_33d440:
    // 0x33d440: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x33d440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_33d444:
    // 0x33d444: 0x24847550  addiu       $a0, $a0, 0x7550
    ctx->pc = 0x33d444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30032));
label_33d448:
    // 0x33d448: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x33d448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_33d44c:
    // 0x33d44c: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x33d44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_33d450:
    // 0x33d450: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x33d450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_33d454:
    // 0x33d454: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x33d454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33d458:
    // 0x33d458: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x33d458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_33d45c:
    // 0x33d45c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x33d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_33d460:
    // 0x33d460: 0xe60506a0  swc1        $f5, 0x6A0($s0)
    ctx->pc = 0x33d460u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
label_33d464:
    // 0x33d464: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x33d464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_33d468:
    // 0x33d468: 0xe60406a4  swc1        $f4, 0x6A4($s0)
    ctx->pc = 0x33d468u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
label_33d46c:
    // 0x33d46c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x33d46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_33d470:
    // 0x33d470: 0xe60206a8  swc1        $f2, 0x6A8($s0)
    ctx->pc = 0x33d470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
label_33d474:
    // 0x33d474: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x33d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33d478:
    // 0x33d478: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x33d478u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33d47c:
    // 0x33d47c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33d47cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33d480:
    // 0x33d480: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33d480u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_33d484:
    // 0x33d484: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33d484u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_33d488:
    // 0x33d488: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33d488u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33d48c:
    // 0x33d48c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_33d490:
    if (ctx->pc == 0x33D490u) {
        ctx->pc = 0x33D494u;
        goto label_33d494;
    }
    ctx->pc = 0x33D48Cu;
    {
        const bool branch_taken_0x33d48c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d48c) {
            ctx->pc = 0x33D4A4u;
            goto label_33d4a4;
        }
    }
    ctx->pc = 0x33D494u;
label_33d494:
    // 0x33d494: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33d494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_33d498:
    // 0x33d498: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x33d498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_33d49c:
    // 0x33d49c: 0x10000008  b           . + 4 + (0x8 << 2)
label_33d4a0:
    if (ctx->pc == 0x33D4A0u) {
        ctx->pc = 0x33D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D49Cu;
        // 0x33d4a0: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D4A4u;
        goto label_33d4a4;
    }
    ctx->pc = 0x33D49Cu;
    {
        const bool branch_taken_0x33d49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D49Cu;
        // 0x33d4a0: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d49c) {
            ctx->pc = 0x33D4C0u;
            goto label_33d4c0;
        }
    }
    ctx->pc = 0x33D4A4u;
label_33d4a4:
    // 0x33d4a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33d4a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_33d4a8:
    // 0x33d4a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_33d4ac:
    // 0x33d4ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33d4acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_33d4b0:
    // 0x33d4b0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x33d4b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_33d4b4:
    // 0x33d4b4: 0x0  nop
    ctx->pc = 0x33d4b4u;
    // NOP
label_33d4b8:
    // 0x33d4b8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x33d4b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_33d4bc:
    // 0x33d4bc: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x33d4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_33d4c0:
    // 0x33d4c0: 0x240400e5  addiu       $a0, $zero, 0xE5
    ctx->pc = 0x33d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
label_33d4c4:
    // 0x33d4c4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x33d4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_33d4c8:
    // 0x33d4c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_33d4cc:
    // 0x33d4cc: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x33d4ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
label_33d4d0:
    // 0x33d4d0: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x33d4d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_33d4d4:
    // 0x33d4d4: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x33d4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
label_33d4d8:
    // 0x33d4d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d4dc:
    // 0x33d4dc: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x33d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
label_33d4e0:
    // 0x33d4e0: 0x1000008b  b           . + 4 + (0x8B << 2)
label_33d4e4:
    if (ctx->pc == 0x33D4E4u) {
        ctx->pc = 0x33D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D4E0u;
        // 0x33d4e4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D4E8u;
        goto label_33d4e8;
    }
    ctx->pc = 0x33D4E0u;
    {
        const bool branch_taken_0x33d4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D4E0u;
        // 0x33d4e4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d4e0) {
            ctx->pc = 0x33D710u;
            goto label_33d710;
        }
    }
    ctx->pc = 0x33D4E8u;
label_33d4e8:
    // 0x33d4e8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x33d4e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_33d4ec:
    // 0x33d4ec: 0x10600088  beqz        $v1, . + 4 + (0x88 << 2)
label_33d4f0:
    if (ctx->pc == 0x33D4F0u) {
        ctx->pc = 0x33D4F4u;
        goto label_33d4f4;
    }
    ctx->pc = 0x33D4ECu;
    {
        const bool branch_taken_0x33d4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d4ec) {
            ctx->pc = 0x33D710u;
            goto label_33d710;
        }
    }
    ctx->pc = 0x33D4F4u;
label_33d4f4:
    // 0x33d4f4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x33d4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_33d4f8:
    // 0x33d4f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_33d4fc:
    // 0x33d4fc: 0x240400e6  addiu       $a0, $zero, 0xE6
    ctx->pc = 0x33d4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
label_33d500:
    // 0x33d500: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x33d500u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_33d504:
    // 0x33d504: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x33d504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
label_33d508:
    // 0x33d508: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x33d508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_33d50c:
    // 0x33d50c: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x33d50cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
label_33d510:
    // 0x33d510: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x33d510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_33d514:
    // 0x33d514: 0x1000007e  b           . + 4 + (0x7E << 2)
label_33d518:
    if (ctx->pc == 0x33D518u) {
        ctx->pc = 0x33D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D514u;
        // 0x33d518: 0xa2050821  sb          $a1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D51Cu;
        goto label_33d51c;
    }
    ctx->pc = 0x33D514u;
    {
        const bool branch_taken_0x33d514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D514u;
        // 0x33d518: 0xa2050821  sb          $a1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d514) {
            ctx->pc = 0x33D710u;
            goto label_33d710;
        }
    }
    ctx->pc = 0x33D51Cu;
label_33d51c:
    // 0x33d51c: 0x0  nop
    ctx->pc = 0x33d51cu;
    // NOP
label_33d520:
    // 0x33d520: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x33d520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_33d524:
    // 0x33d524: 0x1060007a  beqz        $v1, . + 4 + (0x7A << 2)
label_33d528:
    if (ctx->pc == 0x33D528u) {
        ctx->pc = 0x33D52Cu;
        goto label_33d52c;
    }
    ctx->pc = 0x33D524u;
    {
        const bool branch_taken_0x33d524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d524) {
            ctx->pc = 0x33D710u;
            goto label_33d710;
        }
    }
    ctx->pc = 0x33D52Cu;
label_33d52c:
    // 0x33d52c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x33d52cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_33d530:
    // 0x33d530: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33d530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_33d534:
    // 0x33d534: 0x240400e7  addiu       $a0, $zero, 0xE7
    ctx->pc = 0x33d534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
label_33d538:
    // 0x33d538: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x33d538u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_33d53c:
    // 0x33d53c: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x33d53cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
label_33d540:
    // 0x33d540: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x33d540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_33d544:
    // 0x33d544: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x33d544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
label_33d548:
    // 0x33d548: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x33d548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_33d54c:
    // 0x33d54c: 0x10000070  b           . + 4 + (0x70 << 2)
label_33d550:
    if (ctx->pc == 0x33D550u) {
        ctx->pc = 0x33D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D54Cu;
        // 0x33d550: 0xa2060821  sb          $a2, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D554u;
        goto label_33d554;
    }
    ctx->pc = 0x33D54Cu;
    {
        const bool branch_taken_0x33d54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D54Cu;
        // 0x33d550: 0xa2060821  sb          $a2, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d54c) {
            ctx->pc = 0x33D710u;
            goto label_33d710;
        }
    }
    ctx->pc = 0x33D554u;
label_33d554:
    // 0x33d554: 0x0  nop
    ctx->pc = 0x33d554u;
    // NOP
label_33d558:
    // 0x33d558: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x33d558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_33d55c:
    // 0x33d55c: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
label_33d560:
    if (ctx->pc == 0x33D560u) {
        ctx->pc = 0x33D564u;
        goto label_33d564;
    }
    ctx->pc = 0x33D55Cu;
    {
        const bool branch_taken_0x33d55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d55c) {
            ctx->pc = 0x33D710u;
            goto label_33d710;
        }
    }
    ctx->pc = 0x33D564u;
label_33d564:
    // 0x33d564: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x33d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33d568:
    // 0x33d568: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x33d568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_33d56c:
    // 0x33d56c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x33d56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_33d570:
    // 0x33d570: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x33d570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_33d574:
    // 0x33d574: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x33d574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_33d578:
    // 0x33d578: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x33d578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_33d57c:
    // 0x33d57c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33d57cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_33d580:
    // 0x33d580: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33d580u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33d584:
    // 0x33d584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33d588:
    // 0x33d588: 0x0  nop
    ctx->pc = 0x33d588u;
    // NOP
label_33d58c:
    // 0x33d58c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33d58cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_33d590:
    // 0x33d590: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33d590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33d594:
    // 0x33d594: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_33d598:
    if (ctx->pc == 0x33D598u) {
        ctx->pc = 0x33D59Cu;
        goto label_33d59c;
    }
    ctx->pc = 0x33D594u;
    {
        const bool branch_taken_0x33d594 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d594) {
            ctx->pc = 0x33D5ACu;
            goto label_33d5ac;
        }
    }
    ctx->pc = 0x33D59Cu;
label_33d59c:
    // 0x33d59c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33d59cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_33d5a0:
    // 0x33d5a0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x33d5a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_33d5a4:
    // 0x33d5a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_33d5a8:
    if (ctx->pc == 0x33D5A8u) {
        ctx->pc = 0x33D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5A4u;
        // 0x33d5a8: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D5ACu;
        goto label_33d5ac;
    }
    ctx->pc = 0x33D5A4u;
    {
        const bool branch_taken_0x33d5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5A4u;
        // 0x33d5a8: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d5a4) {
            ctx->pc = 0x33D5C8u;
            goto label_33d5c8;
        }
    }
    ctx->pc = 0x33D5ACu;
label_33d5ac:
    // 0x33d5ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33d5acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_33d5b0:
    // 0x33d5b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_33d5b4:
    // 0x33d5b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33d5b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_33d5b8:
    // 0x33d5b8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x33d5b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_33d5bc:
    // 0x33d5bc: 0x0  nop
    ctx->pc = 0x33d5bcu;
    // NOP
label_33d5c0:
    // 0x33d5c0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x33d5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_33d5c4:
    // 0x33d5c4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x33d5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_33d5c8:
    // 0x33d5c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_33d5cc:
    // 0x33d5cc: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x33d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_33d5d0:
    // 0x33d5d0: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x33d5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_33d5d4:
    // 0x33d5d4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x33d5d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
label_33d5d8:
    // 0x33d5d8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x33d5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_33d5dc:
    // 0x33d5dc: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x33d5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
label_33d5e0:
    // 0x33d5e0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x33d5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_33d5e4:
    // 0x33d5e4: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x33d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
label_33d5e8:
    // 0x33d5e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33d5ec:
    // 0x33d5ec: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x33d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_33d5f0:
    // 0x33d5f0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x33d5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_33d5f4:
    // 0x33d5f4: 0x24427560  addiu       $v0, $v0, 0x7560
    ctx->pc = 0x33d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30048));
label_33d5f8:
    // 0x33d5f8: 0xa6000824  sh          $zero, 0x824($s0)
    ctx->pc = 0x33d5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2084), (uint16_t)GPR_U32(ctx, 0));
label_33d5fc:
    // 0x33d5fc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x33d5fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_33d600:
    // 0x33d600: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x33d600u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_33d604:
    // 0x33d604: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x33d604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d608:
    // 0x33d608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33d60c:
    // 0x33d60c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33d60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33d610:
    // 0x33d610: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x33d610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33d614:
    // 0x33d614: 0xc0a6be8  jal         func_29AFA0
label_33d618:
    if (ctx->pc == 0x33D618u) {
        ctx->pc = 0x33D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D614u;
        // 0x33d618: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D61Cu;
        goto label_33d61c;
    }
    ctx->pc = 0x33D614u;
    SET_GPR_U32(ctx, 31, 0x33D61Cu);
    ctx->pc = 0x33D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D614u;
    // 0x33d618: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x33D614u, 0x33D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D61Cu;
label_33d61c:
    // 0x33d61c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_33d620:
    if (ctx->pc == 0x33D620u) {
        ctx->pc = 0x33D624u;
        goto label_33d624;
    }
    ctx->pc = 0x33D61Cu;
    {
        const bool branch_taken_0x33d61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d61c) {
            ctx->pc = 0x33D710u;
            goto label_33d710;
        }
    }
    ctx->pc = 0x33D624u;
label_33d624:
    // 0x33d624: 0x0  nop
    ctx->pc = 0x33d624u;
    // NOP
label_33d628:
    // 0x33d628: 0xc0a6c74  jal         func_29B1D0
label_33d62c:
    if (ctx->pc == 0x33D62Cu) {
        ctx->pc = 0x33D630u;
        goto label_33d630;
    }
    ctx->pc = 0x33D628u;
    SET_GPR_U32(ctx, 31, 0x33D630u);
    ctx->pc = 0x29B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B1D0u, 0x33D628u, 0x33D630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D630u;
label_33d630:
    // 0x33d630: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x33d630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_33d634:
    // 0x33d634: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_33d638:
    if (ctx->pc == 0x33D638u) {
        ctx->pc = 0x33D63Cu;
        goto label_33d63c;
    }
    ctx->pc = 0x33D634u;
    {
        const bool branch_taken_0x33d634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d634) {
            ctx->pc = 0x33D710u;
            goto label_33d710;
        }
    }
    ctx->pc = 0x33D63Cu;
label_33d63c:
    // 0x33d63c: 0x860508a0  lh          $a1, 0x8A0($s0)
    ctx->pc = 0x33d63cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2208)));
label_33d640:
    // 0x33d640: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x33d640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_33d644:
    // 0x33d644: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x33d644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_33d648:
    // 0x33d648: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x33d648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_33d64c:
    // 0x33d64c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x33d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_33d650:
    // 0x33d650: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33d650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_33d654:
    // 0x33d654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_33d658:
    // 0x33d658: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x33d658u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_33d65c:
    // 0x33d65c: 0x0  nop
    ctx->pc = 0x33d65cu;
    // NOP
label_33d660:
    // 0x33d660: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33d660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_33d664:
    // 0x33d664: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33d664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_33d668:
    // 0x33d668: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x33d668u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_33d66c:
    // 0x33d66c: 0x0  nop
    ctx->pc = 0x33d66cu;
    // NOP
label_33d670:
    // 0x33d670: 0x0  nop
    ctx->pc = 0x33d670u;
    // NOP
label_33d674:
    // 0x33d674: 0xc096784  jal         func_259E10
label_33d678:
    if (ctx->pc == 0x33D678u) {
        ctx->pc = 0x33D67Cu;
        goto label_33d67c;
    }
    ctx->pc = 0x33D674u;
    SET_GPR_U32(ctx, 31, 0x33D67Cu);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x33D674u, 0x33D67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D67Cu;
label_33d67c:
    // 0x33d67c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x33d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_33d680:
    // 0x33d680: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x33d680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_33d684:
    // 0x33d684: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33d684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_33d688:
    // 0x33d688: 0xc0414dc  jal         func_105370
label_33d68c:
    if (ctx->pc == 0x33D68Cu) {
        ctx->pc = 0x33D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D688u;
        // 0x33d68c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D690u;
        goto label_33d690;
    }
    ctx->pc = 0x33D688u;
    SET_GPR_U32(ctx, 31, 0x33D690u);
    ctx->pc = 0x33D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D688u;
    // 0x33d68c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x33D688u, 0x33D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D690u;
label_33d690:
    // 0x33d690: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x33d690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_33d694:
    // 0x33d694: 0x26060870  addiu       $a2, $s0, 0x870
    ctx->pc = 0x33d694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
label_33d698:
    // 0x33d698: 0xc096978  jal         func_25A5E0
label_33d69c:
    if (ctx->pc == 0x33D69Cu) {
        ctx->pc = 0x33D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D698u;
        // 0x33d69c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D6A0u;
        goto label_33d6a0;
    }
    ctx->pc = 0x33D698u;
    SET_GPR_U32(ctx, 31, 0x33D6A0u);
    ctx->pc = 0x33D69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D698u;
    // 0x33d69c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x33D698u, 0x33D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D6A0u;
label_33d6a0:
    // 0x33d6a0: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x33d6a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_33d6a4:
    // 0x33d6a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_33d6a8:
    // 0x33d6a8: 0xc0a99e8  jal         func_2A67A0
label_33d6ac:
    if (ctx->pc == 0x33D6ACu) {
        ctx->pc = 0x33D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6A8u;
        // 0x33d6ac: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D6B0u;
        goto label_33d6b0;
    }
    ctx->pc = 0x33D6A8u;
    SET_GPR_U32(ctx, 31, 0x33D6B0u);
    ctx->pc = 0x33D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D6A8u;
    // 0x33d6ac: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67A0u, 0x33D6A8u, 0x33D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D6B0u;
label_33d6b0:
    // 0x33d6b0: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x33d6b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
label_33d6b4:
    // 0x33d6b4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x33d6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_33d6b8:
    // 0x33d6b8: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x33d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
label_33d6bc:
    // 0x33d6bc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x33d6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_33d6c0:
    // 0x33d6c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33d6c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d6c4:
    // 0x33d6c4: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x33d6c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
label_33d6c8:
    // 0x33d6c8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x33d6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_33d6cc:
    // 0x33d6cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33d6ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d6d0:
    // 0x33d6d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33d6d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d6d4:
    // 0x33d6d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33d6d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d6d8:
    // 0x33d6d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x33d6d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d6dc:
    // 0x33d6dc: 0xc05e9e8  jal         func_17A7A0
label_33d6e0:
    if (ctx->pc == 0x33D6E0u) {
        ctx->pc = 0x33D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6DCu;
        // 0x33d6e0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D6E4u;
        goto label_33d6e4;
    }
    ctx->pc = 0x33D6DCu;
    SET_GPR_U32(ctx, 31, 0x33D6E4u);
    ctx->pc = 0x33D6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D6DCu;
    // 0x33d6e0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x33D6DCu, 0x33D6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D6E4u;
label_33d6e4:
    // 0x33d6e4: 0x8f838b84  lw          $v1, -0x747C($gp)
    ctx->pc = 0x33d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937476)));
label_33d6e8:
    // 0x33d6e8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_33d6ec:
    if (ctx->pc == 0x33D6ECu) {
        ctx->pc = 0x33D6F0u;
        goto label_33d6f0;
    }
    ctx->pc = 0x33D6E8u;
    {
        const bool branch_taken_0x33d6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d6e8) {
            ctx->pc = 0x33D700u;
            goto label_33d700;
        }
    }
    ctx->pc = 0x33D6F0u;
label_33d6f0:
    // 0x33d6f0: 0x8f858b88  lw          $a1, -0x7478($gp)
    ctx->pc = 0x33d6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937480)));
label_33d6f4:
    // 0x33d6f4: 0x60f809  jalr        $v1
label_33d6f8:
    if (ctx->pc == 0x33D6F8u) {
        ctx->pc = 0x33D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6F4u;
        // 0x33d6f8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D6FCu;
        goto label_33d6fc;
    }
    ctx->pc = 0x33D6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33D6FCu);
        ctx->pc = 0x33D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6F4u;
        // 0x33d6f8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D6F4u, 0x33D6FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D6FCu;
label_33d6fc:
    // 0x33d6fc: 0x0  nop
    ctx->pc = 0x33d6fcu;
    // NOP
label_33d700:
    // 0x33d700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33d700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d704:
    // 0x33d704: 0x10000002  b           . + 4 + (0x2 << 2)
label_33d708:
    if (ctx->pc == 0x33D708u) {
        ctx->pc = 0x33D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D704u;
        // 0x33d708: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D70Cu;
        goto label_33d70c;
    }
    ctx->pc = 0x33D704u;
    {
        const bool branch_taken_0x33d704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D704u;
        // 0x33d708: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d704) {
            ctx->pc = 0x33D710u;
            goto label_33d710;
        }
    }
    ctx->pc = 0x33D70Cu;
label_33d70c:
    // 0x33d70c: 0x0  nop
    ctx->pc = 0x33d70cu;
    // NOP
label_33d710:
    // 0x33d710: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33d710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33d714:
    // 0x33d714: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33d714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33d718:
    // 0x33d718: 0x3e00008  jr          $ra
label_33d71c:
    if (ctx->pc == 0x33D71Cu) {
        ctx->pc = 0x33D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D718u;
        // 0x33d71c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D720u;
        goto label_fallthrough_0x33d718;
    }
    ctx->pc = 0x33D718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D718u;
        // 0x33d71c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33d718:
    ctx->pc = 0x33D720u;
}
