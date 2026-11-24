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

// Function: sub_0023D3D8
// Address: 0x23d3d8 - 0x23d7e4
void sub_0023D3D8_0x23d3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D3D8_0x23d3d8");
#endif

    switch (ctx->pc) {
        case 0x23d3d8u: goto label_23d3d8;
        case 0x23d3dcu: goto label_23d3dc;
        case 0x23d3e0u: goto label_23d3e0;
        case 0x23d3e4u: goto label_23d3e4;
        case 0x23d3e8u: goto label_23d3e8;
        case 0x23d3ecu: goto label_23d3ec;
        case 0x23d3f0u: goto label_23d3f0;
        case 0x23d3f4u: goto label_23d3f4;
        case 0x23d3f8u: goto label_23d3f8;
        case 0x23d3fcu: goto label_23d3fc;
        case 0x23d400u: goto label_23d400;
        case 0x23d404u: goto label_23d404;
        case 0x23d408u: goto label_23d408;
        case 0x23d40cu: goto label_23d40c;
        case 0x23d410u: goto label_23d410;
        case 0x23d414u: goto label_23d414;
        case 0x23d418u: goto label_23d418;
        case 0x23d41cu: goto label_23d41c;
        case 0x23d420u: goto label_23d420;
        case 0x23d424u: goto label_23d424;
        case 0x23d428u: goto label_23d428;
        case 0x23d42cu: goto label_23d42c;
        case 0x23d430u: goto label_23d430;
        case 0x23d434u: goto label_23d434;
        case 0x23d438u: goto label_23d438;
        case 0x23d43cu: goto label_23d43c;
        case 0x23d440u: goto label_23d440;
        case 0x23d444u: goto label_23d444;
        case 0x23d448u: goto label_23d448;
        case 0x23d44cu: goto label_23d44c;
        case 0x23d450u: goto label_23d450;
        case 0x23d454u: goto label_23d454;
        case 0x23d458u: goto label_23d458;
        case 0x23d45cu: goto label_23d45c;
        case 0x23d460u: goto label_23d460;
        case 0x23d464u: goto label_23d464;
        case 0x23d468u: goto label_23d468;
        case 0x23d46cu: goto label_23d46c;
        case 0x23d470u: goto label_23d470;
        case 0x23d474u: goto label_23d474;
        case 0x23d478u: goto label_23d478;
        case 0x23d47cu: goto label_23d47c;
        case 0x23d480u: goto label_23d480;
        case 0x23d484u: goto label_23d484;
        case 0x23d488u: goto label_23d488;
        case 0x23d48cu: goto label_23d48c;
        case 0x23d490u: goto label_23d490;
        case 0x23d494u: goto label_23d494;
        case 0x23d498u: goto label_23d498;
        case 0x23d49cu: goto label_23d49c;
        case 0x23d4a0u: goto label_23d4a0;
        case 0x23d4a4u: goto label_23d4a4;
        case 0x23d4a8u: goto label_23d4a8;
        case 0x23d4acu: goto label_23d4ac;
        case 0x23d4b0u: goto label_23d4b0;
        case 0x23d4b4u: goto label_23d4b4;
        case 0x23d4b8u: goto label_23d4b8;
        case 0x23d4bcu: goto label_23d4bc;
        case 0x23d4c0u: goto label_23d4c0;
        case 0x23d4c4u: goto label_23d4c4;
        case 0x23d4c8u: goto label_23d4c8;
        case 0x23d4ccu: goto label_23d4cc;
        case 0x23d4d0u: goto label_23d4d0;
        case 0x23d4d4u: goto label_23d4d4;
        case 0x23d4d8u: goto label_23d4d8;
        case 0x23d4dcu: goto label_23d4dc;
        case 0x23d4e0u: goto label_23d4e0;
        case 0x23d4e4u: goto label_23d4e4;
        case 0x23d4e8u: goto label_23d4e8;
        case 0x23d4ecu: goto label_23d4ec;
        case 0x23d4f0u: goto label_23d4f0;
        case 0x23d4f4u: goto label_23d4f4;
        case 0x23d4f8u: goto label_23d4f8;
        case 0x23d4fcu: goto label_23d4fc;
        case 0x23d500u: goto label_23d500;
        case 0x23d504u: goto label_23d504;
        case 0x23d508u: goto label_23d508;
        case 0x23d50cu: goto label_23d50c;
        case 0x23d510u: goto label_23d510;
        case 0x23d514u: goto label_23d514;
        case 0x23d518u: goto label_23d518;
        case 0x23d51cu: goto label_23d51c;
        case 0x23d520u: goto label_23d520;
        case 0x23d524u: goto label_23d524;
        case 0x23d528u: goto label_23d528;
        case 0x23d52cu: goto label_23d52c;
        case 0x23d530u: goto label_23d530;
        case 0x23d534u: goto label_23d534;
        case 0x23d538u: goto label_23d538;
        case 0x23d53cu: goto label_23d53c;
        case 0x23d540u: goto label_23d540;
        case 0x23d544u: goto label_23d544;
        case 0x23d548u: goto label_23d548;
        case 0x23d54cu: goto label_23d54c;
        case 0x23d550u: goto label_23d550;
        case 0x23d554u: goto label_23d554;
        case 0x23d558u: goto label_23d558;
        case 0x23d55cu: goto label_23d55c;
        case 0x23d560u: goto label_23d560;
        case 0x23d564u: goto label_23d564;
        case 0x23d568u: goto label_23d568;
        case 0x23d56cu: goto label_23d56c;
        case 0x23d570u: goto label_23d570;
        case 0x23d574u: goto label_23d574;
        case 0x23d578u: goto label_23d578;
        case 0x23d57cu: goto label_23d57c;
        case 0x23d580u: goto label_23d580;
        case 0x23d584u: goto label_23d584;
        case 0x23d588u: goto label_23d588;
        case 0x23d58cu: goto label_23d58c;
        case 0x23d590u: goto label_23d590;
        case 0x23d594u: goto label_23d594;
        case 0x23d598u: goto label_23d598;
        case 0x23d59cu: goto label_23d59c;
        case 0x23d5a0u: goto label_23d5a0;
        case 0x23d5a4u: goto label_23d5a4;
        case 0x23d5a8u: goto label_23d5a8;
        case 0x23d5acu: goto label_23d5ac;
        case 0x23d5b0u: goto label_23d5b0;
        case 0x23d5b4u: goto label_23d5b4;
        case 0x23d5b8u: goto label_23d5b8;
        case 0x23d5bcu: goto label_23d5bc;
        case 0x23d5c0u: goto label_23d5c0;
        case 0x23d5c4u: goto label_23d5c4;
        case 0x23d5c8u: goto label_23d5c8;
        case 0x23d5ccu: goto label_23d5cc;
        case 0x23d5d0u: goto label_23d5d0;
        case 0x23d5d4u: goto label_23d5d4;
        case 0x23d5d8u: goto label_23d5d8;
        case 0x23d5dcu: goto label_23d5dc;
        case 0x23d5e0u: goto label_23d5e0;
        case 0x23d5e4u: goto label_23d5e4;
        case 0x23d5e8u: goto label_23d5e8;
        case 0x23d5ecu: goto label_23d5ec;
        case 0x23d5f0u: goto label_23d5f0;
        case 0x23d5f4u: goto label_23d5f4;
        case 0x23d5f8u: goto label_23d5f8;
        case 0x23d5fcu: goto label_23d5fc;
        case 0x23d600u: goto label_23d600;
        case 0x23d604u: goto label_23d604;
        case 0x23d608u: goto label_23d608;
        case 0x23d60cu: goto label_23d60c;
        case 0x23d610u: goto label_23d610;
        case 0x23d614u: goto label_23d614;
        case 0x23d618u: goto label_23d618;
        case 0x23d61cu: goto label_23d61c;
        case 0x23d620u: goto label_23d620;
        case 0x23d624u: goto label_23d624;
        case 0x23d628u: goto label_23d628;
        case 0x23d62cu: goto label_23d62c;
        case 0x23d630u: goto label_23d630;
        case 0x23d634u: goto label_23d634;
        case 0x23d638u: goto label_23d638;
        case 0x23d63cu: goto label_23d63c;
        case 0x23d640u: goto label_23d640;
        case 0x23d644u: goto label_23d644;
        case 0x23d648u: goto label_23d648;
        case 0x23d64cu: goto label_23d64c;
        case 0x23d650u: goto label_23d650;
        case 0x23d654u: goto label_23d654;
        case 0x23d658u: goto label_23d658;
        case 0x23d65cu: goto label_23d65c;
        case 0x23d660u: goto label_23d660;
        case 0x23d664u: goto label_23d664;
        case 0x23d668u: goto label_23d668;
        case 0x23d66cu: goto label_23d66c;
        case 0x23d670u: goto label_23d670;
        case 0x23d674u: goto label_23d674;
        case 0x23d678u: goto label_23d678;
        case 0x23d67cu: goto label_23d67c;
        case 0x23d680u: goto label_23d680;
        case 0x23d684u: goto label_23d684;
        case 0x23d688u: goto label_23d688;
        case 0x23d68cu: goto label_23d68c;
        case 0x23d690u: goto label_23d690;
        case 0x23d694u: goto label_23d694;
        case 0x23d698u: goto label_23d698;
        case 0x23d69cu: goto label_23d69c;
        case 0x23d6a0u: goto label_23d6a0;
        case 0x23d6a4u: goto label_23d6a4;
        case 0x23d6a8u: goto label_23d6a8;
        case 0x23d6acu: goto label_23d6ac;
        case 0x23d6b0u: goto label_23d6b0;
        case 0x23d6b4u: goto label_23d6b4;
        case 0x23d6b8u: goto label_23d6b8;
        case 0x23d6bcu: goto label_23d6bc;
        case 0x23d6c0u: goto label_23d6c0;
        case 0x23d6c4u: goto label_23d6c4;
        case 0x23d6c8u: goto label_23d6c8;
        case 0x23d6ccu: goto label_23d6cc;
        case 0x23d6d0u: goto label_23d6d0;
        case 0x23d6d4u: goto label_23d6d4;
        case 0x23d6d8u: goto label_23d6d8;
        case 0x23d6dcu: goto label_23d6dc;
        case 0x23d6e0u: goto label_23d6e0;
        case 0x23d6e4u: goto label_23d6e4;
        case 0x23d6e8u: goto label_23d6e8;
        case 0x23d6ecu: goto label_23d6ec;
        case 0x23d6f0u: goto label_23d6f0;
        case 0x23d6f4u: goto label_23d6f4;
        case 0x23d6f8u: goto label_23d6f8;
        case 0x23d6fcu: goto label_23d6fc;
        case 0x23d700u: goto label_23d700;
        case 0x23d704u: goto label_23d704;
        case 0x23d708u: goto label_23d708;
        case 0x23d70cu: goto label_23d70c;
        case 0x23d710u: goto label_23d710;
        case 0x23d714u: goto label_23d714;
        case 0x23d718u: goto label_23d718;
        case 0x23d71cu: goto label_23d71c;
        case 0x23d720u: goto label_23d720;
        case 0x23d724u: goto label_23d724;
        case 0x23d728u: goto label_23d728;
        case 0x23d72cu: goto label_23d72c;
        case 0x23d730u: goto label_23d730;
        case 0x23d734u: goto label_23d734;
        case 0x23d738u: goto label_23d738;
        case 0x23d73cu: goto label_23d73c;
        case 0x23d740u: goto label_23d740;
        case 0x23d744u: goto label_23d744;
        case 0x23d748u: goto label_23d748;
        case 0x23d74cu: goto label_23d74c;
        case 0x23d750u: goto label_23d750;
        case 0x23d754u: goto label_23d754;
        case 0x23d758u: goto label_23d758;
        case 0x23d75cu: goto label_23d75c;
        case 0x23d760u: goto label_23d760;
        case 0x23d764u: goto label_23d764;
        case 0x23d768u: goto label_23d768;
        case 0x23d76cu: goto label_23d76c;
        case 0x23d770u: goto label_23d770;
        case 0x23d774u: goto label_23d774;
        case 0x23d778u: goto label_23d778;
        case 0x23d77cu: goto label_23d77c;
        case 0x23d780u: goto label_23d780;
        case 0x23d784u: goto label_23d784;
        case 0x23d788u: goto label_23d788;
        case 0x23d78cu: goto label_23d78c;
        case 0x23d790u: goto label_23d790;
        case 0x23d794u: goto label_23d794;
        case 0x23d798u: goto label_23d798;
        case 0x23d79cu: goto label_23d79c;
        case 0x23d7a0u: goto label_23d7a0;
        case 0x23d7a4u: goto label_23d7a4;
        case 0x23d7a8u: goto label_23d7a8;
        case 0x23d7acu: goto label_23d7ac;
        case 0x23d7b0u: goto label_23d7b0;
        case 0x23d7b4u: goto label_23d7b4;
        case 0x23d7b8u: goto label_23d7b8;
        case 0x23d7bcu: goto label_23d7bc;
        case 0x23d7c0u: goto label_23d7c0;
        case 0x23d7c4u: goto label_23d7c4;
        case 0x23d7c8u: goto label_23d7c8;
        case 0x23d7ccu: goto label_23d7cc;
        case 0x23d7d0u: goto label_23d7d0;
        case 0x23d7d4u: goto label_23d7d4;
        case 0x23d7d8u: goto label_23d7d8;
        case 0x23d7dcu: goto label_23d7dc;
        case 0x23d7e0u: goto label_23d7e0;
        default: break;
    }

    ctx->pc = 0x23d3d8u;

label_23d3d8:
    // 0x23d3d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23d3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_23d3dc:
    // 0x23d3dc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x23d3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_23d3e0:
    // 0x23d3e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23d3e4:
    // 0x23d3e4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x23d3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_23d3e8:
    // 0x23d3e8: 0x24130800  addiu       $s3, $zero, 0x800
    ctx->pc = 0x23d3e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_23d3ec:
    // 0x23d3ec: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x23d3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_23d3f0:
    // 0x23d3f0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x23d3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_23d3f4:
    // 0x23d3f4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x23d3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_23d3f8:
    // 0x23d3f8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x23d3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_23d3fc:
    // 0x23d3fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23d3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_23d400:
    // 0x23d400: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x23d400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_23d404:
    // 0x23d404: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x23d404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23d408:
    // 0x23d408: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x23d408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_23d40c:
    // 0x23d40c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x23d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_23d410:
    // 0x23d410: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23d410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23d414:
    // 0x23d414: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_23d418:
    if (ctx->pc == 0x23D418u) {
        ctx->pc = 0x23D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D414u;
        // 0x23d418: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D41Cu;
        goto label_23d41c;
    }
    ctx->pc = 0x23D414u;
    {
        const bool branch_taken_0x23d414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D414u;
        // 0x23d418: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d414) {
            ctx->pc = 0x23D478u;
            goto label_23d478;
        }
    }
    ctx->pc = 0x23D41Cu;
label_23d41c:
    // 0x23d41c: 0x820300ac  lb          $v1, 0xAC($s0)
    ctx->pc = 0x23d41cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 172)));
label_23d420:
    // 0x23d420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d424:
    // 0x23d424: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_23d428:
    if (ctx->pc == 0x23D428u) {
        ctx->pc = 0x23D42Cu;
        goto label_23d42c;
    }
    ctx->pc = 0x23D424u;
    {
        const bool branch_taken_0x23d424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d424) {
            ctx->pc = 0x23D478u;
            goto label_23d478;
        }
    }
    ctx->pc = 0x23D42Cu;
label_23d42c:
    // 0x23d42c: 0xc08dd84  jal         func_237610
label_23d430:
    if (ctx->pc == 0x23D430u) {
        ctx->pc = 0x23D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D42Cu;
        // 0x23d430: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D434u;
        goto label_23d434;
    }
    ctx->pc = 0x23D42Cu;
    SET_GPR_U32(ctx, 31, 0x23D434u);
    ctx->pc = 0x23D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D42Cu;
    // 0x23d430: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237610u, 0x23D42Cu, 0x23D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D434u;
label_23d434:
    // 0x23d434: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23d434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23d438:
    // 0x23d438: 0x504300e2  beql        $v0, $v1, . + 4 + (0xE2 << 2)
label_23d43c:
    if (ctx->pc == 0x23D43Cu) {
        ctx->pc = 0x23D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D438u;
        // 0x23d43c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D440u;
        goto label_23d440;
    }
    ctx->pc = 0x23D438u;
    {
        const bool branch_taken_0x23d438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23d438) {
            ctx->pc = 0x23D43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D438u;
            // 0x23d43c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D7C4u;
            goto label_23d7c4;
        }
    }
    ctx->pc = 0x23D440u;
label_23d440:
    // 0x23d440: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x23d440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_23d444:
    // 0x23d444: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_23d448:
    if (ctx->pc == 0x23D448u) {
        ctx->pc = 0x23D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D444u;
        // 0x23d448: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D44Cu;
        goto label_23d44c;
    }
    ctx->pc = 0x23D444u;
    {
        const bool branch_taken_0x23d444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d444) {
            ctx->pc = 0x23D448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D444u;
            // 0x23d448: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D460u;
            goto label_23d460;
        }
    }
    ctx->pc = 0x23D44Cu;
label_23d44c:
    // 0x23d44c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23d44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23d450:
    // 0x23d450: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x23d450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_23d454:
    // 0x23d454: 0x40f809  jalr        $v0
label_23d458:
    if (ctx->pc == 0x23D458u) {
        ctx->pc = 0x23D45Cu;
        goto label_23d45c;
    }
    ctx->pc = 0x23D454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D45Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D454u, 0x23D45Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D45Cu;
label_23d45c:
    // 0x23d45c: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x23d45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_23d460:
    // 0x23d460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d464:
    // 0x23d464: 0x8e0600b8  lw          $a2, 0xB8($s0)
    ctx->pc = 0x23d464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_23d468:
    // 0x23d468: 0x8e0700bc  lw          $a3, 0xBC($s0)
    ctx->pc = 0x23d468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23d46c:
    // 0x23d46c: 0xc08e65a  jal         func_239968
label_23d470:
    if (ctx->pc == 0x23D470u) {
        ctx->pc = 0x23D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D46Cu;
        // 0x23d470: 0x8e0800c0  lw          $t0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D474u;
        goto label_23d474;
    }
    ctx->pc = 0x23D46Cu;
    SET_GPR_U32(ctx, 31, 0x23D474u);
    ctx->pc = 0x23D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D46Cu;
    // 0x23d470: 0x8e0800c0  lw          $t0, 0xC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239968u, 0x23D46Cu, 0x23D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D474u;
label_23d474:
    // 0x23d474: 0xa20000ac  sb          $zero, 0xAC($s0)
    ctx->pc = 0x23d474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
label_23d478:
    // 0x23d478: 0xc08d6b2  jal         func_235AC8
label_23d47c:
    if (ctx->pc == 0x23D47Cu) {
        ctx->pc = 0x23D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D478u;
        // 0x23d47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D480u;
        goto label_23d480;
    }
    ctx->pc = 0x23D478u;
    SET_GPR_U32(ctx, 31, 0x23D480u);
    ctx->pc = 0x23D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D478u;
    // 0x23d47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235AC8u, 0x23D478u, 0x23D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D480u;
label_23d480:
    // 0x23d480: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d480u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d484:
    // 0x23d484: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23d484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23d488:
    // 0x23d488: 0x546200c9  bnel        $v1, $v0, . + 4 + (0xC9 << 2)
label_23d48c:
    if (ctx->pc == 0x23D48Cu) {
        ctx->pc = 0x23D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D488u;
        // 0x23d48c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D490u;
        goto label_23d490;
    }
    ctx->pc = 0x23D488u;
    {
        const bool branch_taken_0x23d488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d488) {
            ctx->pc = 0x23D48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D488u;
            // 0x23d48c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D7B0u;
            goto label_23d7b0;
        }
    }
    ctx->pc = 0x23D490u;
label_23d490:
    // 0x23d490: 0xc08db08  jal         func_236C20
label_23d494:
    if (ctx->pc == 0x23D494u) {
        ctx->pc = 0x23D494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D490u;
        // 0x23d494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D498u;
        goto label_23d498;
    }
    ctx->pc = 0x23D490u;
    SET_GPR_U32(ctx, 31, 0x23D498u);
    ctx->pc = 0x23D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D490u;
    // 0x23d494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C20u, 0x23D490u, 0x23D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D498u;
label_23d498:
    // 0x23d498: 0x82050003  lb          $a1, 0x3($s0)
    ctx->pc = 0x23d498u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_23d49c:
    // 0x23d49c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23d49cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d4a0:
    // 0x23d4a0: 0xb4102a  slt         $v0, $a1, $s4
    ctx->pc = 0x23d4a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_23d4a4:
    // 0x23d4a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_23d4a8:
    if (ctx->pc == 0x23D4A8u) {
        ctx->pc = 0x23D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4A4u;
        // 0x23d4a8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4ACu;
        goto label_23d4ac;
    }
    ctx->pc = 0x23D4A4u;
    {
        const bool branch_taken_0x23d4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4A4u;
        // 0x23d4a8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d4a4) {
            ctx->pc = 0x23D4D8u;
            goto label_23d4d8;
        }
    }
    ctx->pc = 0x23D4ACu;
label_23d4ac:
    // 0x23d4ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23d4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23d4b0:
    // 0x23d4b0: 0xc08bb2a  jal         func_22ECA8
label_23d4b4:
    if (ctx->pc == 0x23D4B4u) {
        ctx->pc = 0x23D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4B0u;
        // 0x23d4b4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4B8u;
        goto label_23d4b8;
    }
    ctx->pc = 0x23D4B0u;
    SET_GPR_U32(ctx, 31, 0x23D4B8u);
    ctx->pc = 0x23D4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4B0u;
    // 0x23d4b4: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ECA8u, 0x23D4B0u, 0x23D4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D4B8u;
label_23d4b8:
    // 0x23d4b8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23d4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_23d4bc:
    // 0x23d4bc: 0x2484b8e0  addiu       $a0, $a0, -0x4720
    ctx->pc = 0x23d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949088));
label_23d4c0:
    // 0x23d4c0: 0xc08bac2  jal         func_22EB08
label_23d4c4:
    if (ctx->pc == 0x23D4C4u) {
        ctx->pc = 0x23D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4C0u;
        // 0x23d4c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4C8u;
        goto label_23d4c8;
    }
    ctx->pc = 0x23D4C0u;
    SET_GPR_U32(ctx, 31, 0x23D4C8u);
    ctx->pc = 0x23D4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4C0u;
    // 0x23d4c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB08u, 0x23D4C0u, 0x23D4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D4C8u;
label_23d4c8:
    // 0x23d4c8: 0xc08e6f4  jal         func_239BD0
label_23d4cc:
    if (ctx->pc == 0x23D4CCu) {
        ctx->pc = 0x23D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4C8u;
        // 0x23d4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4D0u;
        goto label_23d4d0;
    }
    ctx->pc = 0x23D4C8u;
    SET_GPR_U32(ctx, 31, 0x23D4D0u);
    ctx->pc = 0x23D4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4C8u;
    // 0x23d4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x23D4C8u, 0x23D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D4D0u;
label_23d4d0:
    // 0x23d4d0: 0x100000bc  b           . + 4 + (0xBC << 2)
label_23d4d4:
    if (ctx->pc == 0x23D4D4u) {
        ctx->pc = 0x23D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4D0u;
        // 0x23d4d4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4D8u;
        goto label_23d4d8;
    }
    ctx->pc = 0x23D4D0u;
    {
        const bool branch_taken_0x23d4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4D0u;
        // 0x23d4d4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d4d0) {
            ctx->pc = 0x23D7C4u;
            goto label_23d7c4;
        }
    }
    ctx->pc = 0x23D4D8u;
label_23d4d8:
    // 0x23d4d8: 0xc08db02  jal         func_236C08
label_23d4dc:
    if (ctx->pc == 0x23D4DCu) {
        ctx->pc = 0x23D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4D8u;
        // 0x23d4dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4E0u;
        goto label_23d4e0;
    }
    ctx->pc = 0x23D4D8u;
    SET_GPR_U32(ctx, 31, 0x23D4E0u);
    ctx->pc = 0x23D4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4D8u;
    // 0x23d4dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C08u, 0x23D4D8u, 0x23D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D4E0u;
label_23d4e0:
    // 0x23d4e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d4e4:
    // 0x23d4e4: 0xc08db2c  jal         func_236CB0
label_23d4e8:
    if (ctx->pc == 0x23D4E8u) {
        ctx->pc = 0x23D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4E4u;
        // 0x23d4e8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4ECu;
        goto label_23d4ec;
    }
    ctx->pc = 0x23D4E4u;
    SET_GPR_U32(ctx, 31, 0x23D4ECu);
    ctx->pc = 0x23D4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4E4u;
    // 0x23d4e8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236CB0u, 0x23D4E4u, 0x23D4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D4ECu;
label_23d4ec:
    // 0x23d4ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23d4ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d4f0:
    // 0x23d4f0: 0x5a80000b  blezl       $s4, . + 4 + (0xB << 2)
label_23d4f4:
    if (ctx->pc == 0x23D4F4u) {
        ctx->pc = 0x23D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4F0u;
        // 0x23d4f4: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4F8u;
        goto label_23d4f8;
    }
    ctx->pc = 0x23D4F0u;
    {
        const bool branch_taken_0x23d4f0 = (GPR_S64(ctx, 20) <= 0);
        if (branch_taken_0x23d4f0) {
            ctx->pc = 0x23D4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D4F0u;
            // 0x23d4f4: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D520u;
            goto label_23d520;
        }
    }
    ctx->pc = 0x23D4F8u;
label_23d4f8:
    // 0x23d4f8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x23d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_23d4fc:
    // 0x23d4fc: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x23d4fcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23d500:
    // 0x23d500: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_23d504:
    if (ctx->pc == 0x23D504u) {
        ctx->pc = 0x23D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D500u;
        // 0x23d504: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D508u;
        goto label_23d508;
    }
    ctx->pc = 0x23D500u;
    {
        const bool branch_taken_0x23d500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d500) {
            ctx->pc = 0x23D504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D500u;
            // 0x23d504: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D508u;
            goto label_23d508;
        }
    }
    ctx->pc = 0x23D508u;
label_23d508:
    // 0x23d508: 0x2012  mflo        $a0
    ctx->pc = 0x23d508u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_23d50c:
    // 0x23d50c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x23d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_23d510:
    // 0x23d510: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23d510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23d514:
    // 0x23d514: 0x1000000c  b           . + 4 + (0xC << 2)
label_23d518:
    if (ctx->pc == 0x23D518u) {
        ctx->pc = 0x23D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D514u;
        // 0x23d518: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D51Cu;
        goto label_23d51c;
    }
    ctx->pc = 0x23D514u;
    {
        const bool branch_taken_0x23d514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D514u;
        // 0x23d518: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d514) {
            ctx->pc = 0x23D548u;
            goto label_23d548;
        }
    }
    ctx->pc = 0x23D51Cu;
label_23d51c:
    // 0x23d51c: 0x0  nop
    ctx->pc = 0x23d51cu;
    // NOP
label_23d520:
    // 0x23d520: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x23d520u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23d524:
    // 0x23d524: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_23d528:
    if (ctx->pc == 0x23D528u) {
        ctx->pc = 0x23D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D524u;
        // 0x23d528: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D52Cu;
        goto label_23d52c;
    }
    ctx->pc = 0x23D524u;
    {
        const bool branch_taken_0x23d524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d524) {
            ctx->pc = 0x23D528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D524u;
            // 0x23d528: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D52Cu;
            goto label_23d52c;
        }
    }
    ctx->pc = 0x23D52Cu;
label_23d52c:
    // 0x23d52c: 0x2012  mflo        $a0
    ctx->pc = 0x23d52cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_23d530:
    // 0x23d530: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x23d530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_23d534:
    // 0x23d534: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23d534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23d538:
    // 0x23d538: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x23d538u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_23d53c:
    // 0x23d53c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23d540:
    // 0x23d540: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x23d540u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_23d544:
    // 0x23d544: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x23d544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_23d548:
    // 0x23d548: 0xc08db14  jal         func_236C50
label_23d54c:
    if (ctx->pc == 0x23D54Cu) {
        ctx->pc = 0x23D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D548u;
        // 0x23d54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D550u;
        goto label_23d550;
    }
    ctx->pc = 0x23D548u;
    SET_GPR_U32(ctx, 31, 0x23D550u);
    ctx->pc = 0x23D54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D548u;
    // 0x23d54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C50u, 0x23D548u, 0x23D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D550u;
label_23d550:
    // 0x23d550: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x23d550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_23d554:
    // 0x23d554: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23d554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_23d558:
    // 0x23d558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d55c:
    // 0x23d55c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23d55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_23d560:
    // 0x23d560: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_23d564:
    if (ctx->pc == 0x23D564u) {
        ctx->pc = 0x23D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D560u;
        // 0x23d564: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D568u;
        goto label_23d568;
    }
    ctx->pc = 0x23D560u;
    {
        const bool branch_taken_0x23d560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d560) {
            ctx->pc = 0x23D564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D560u;
            // 0x23d564: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D568u;
            goto label_23d568;
        }
    }
    ctx->pc = 0x23D568u;
label_23d568:
    // 0x23d568: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x23d568u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23d56c:
    // 0x23d56c: 0x2812  mflo        $a1
    ctx->pc = 0x23d56cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_23d570:
    // 0x23d570: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x23d570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_23d574:
    // 0x23d574: 0xc08d6c8  jal         func_235B20
label_23d578:
    if (ctx->pc == 0x23D578u) {
        ctx->pc = 0x23D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D574u;
        // 0x23d578: 0xae050048  sw          $a1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D57Cu;
        goto label_23d57c;
    }
    ctx->pc = 0x23D574u;
    SET_GPR_U32(ctx, 31, 0x23D57Cu);
    ctx->pc = 0x23D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D574u;
    // 0x23d578: 0xae050048  sw          $a1, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235B20u, 0x23D574u, 0x23D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D57Cu;
label_23d57c:
    // 0x23d57c: 0x5a800034  blezl       $s4, . + 4 + (0x34 << 2)
label_23d580:
    if (ctx->pc == 0x23D580u) {
        ctx->pc = 0x23D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D57Cu;
        // 0x23d580: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D584u;
        goto label_23d584;
    }
    ctx->pc = 0x23D57Cu;
    {
        const bool branch_taken_0x23d57c = (GPR_S64(ctx, 20) <= 0);
        if (branch_taken_0x23d57c) {
            ctx->pc = 0x23D580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D57Cu;
            // 0x23d580: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D650u;
            goto label_23d650;
        }
    }
    ctx->pc = 0x23D584u;
label_23d584:
    // 0x23d584: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x23d584u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_23d588:
    // 0x23d588: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23d588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23d58c:
    // 0x23d58c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_23d590:
    if (ctx->pc == 0x23D590u) {
        ctx->pc = 0x23D594u;
        goto label_23d594;
    }
    ctx->pc = 0x23D58Cu;
    {
        const bool branch_taken_0x23d58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d58c) {
            ctx->pc = 0x23D5A0u;
            goto label_23d5a0;
        }
    }
    ctx->pc = 0x23D594u;
label_23d594:
    // 0x23d594: 0x10000019  b           . + 4 + (0x19 << 2)
label_23d598:
    if (ctx->pc == 0x23D598u) {
        ctx->pc = 0x23D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D594u;
        // 0x23d598: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D59Cu;
        goto label_23d59c;
    }
    ctx->pc = 0x23D594u;
    {
        const bool branch_taken_0x23d594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D594u;
        // 0x23d598: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d594) {
            ctx->pc = 0x23D5FCu;
            goto label_23d5fc;
        }
    }
    ctx->pc = 0x23D59Cu;
label_23d59c:
    // 0x23d59c: 0x0  nop
    ctx->pc = 0x23d59cu;
    // NOP
label_23d5a0:
    // 0x23d5a0: 0xc08db50  jal         func_236D40
label_23d5a4:
    if (ctx->pc == 0x23D5A4u) {
        ctx->pc = 0x23D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5A0u;
        // 0x23d5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5A8u;
        goto label_23d5a8;
    }
    ctx->pc = 0x23D5A0u;
    SET_GPR_U32(ctx, 31, 0x23D5A8u);
    ctx->pc = 0x23D5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D5A0u;
    // 0x23d5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236D40u, 0x23D5A0u, 0x23D5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D5A8u;
label_23d5a8:
    // 0x23d5a8: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_23d5ac:
    if (ctx->pc == 0x23D5ACu) {
        ctx->pc = 0x23D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5A8u;
        // 0x23d5ac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5B0u;
        goto label_23d5b0;
    }
    ctx->pc = 0x23D5A8u;
    {
        const bool branch_taken_0x23d5a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d5a8) {
            ctx->pc = 0x23D5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D5A8u;
            // 0x23d5ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D5B0u;
            goto label_23d5b0;
        }
    }
    ctx->pc = 0x23D5B0u;
label_23d5b0:
    // 0x23d5b0: 0x53001a  div         $zero, $v0, $s3
    ctx->pc = 0x23d5b0u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23d5b4:
    // 0x23d5b4: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x23d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_23d5b8:
    // 0x23d5b8: 0x1810  mfhi        $v1
    ctx->pc = 0x23d5b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_23d5bc:
    // 0x23d5bc: 0x53001a  div         $zero, $v0, $s3
    ctx->pc = 0x23d5bcu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23d5c0:
    // 0x23d5c0: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x23d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_23d5c4:
    // 0x23d5c4: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x23d5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_23d5c8:
    // 0x23d5c8: 0x1012  mflo        $v0
    ctx->pc = 0x23d5c8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_23d5cc:
    // 0x23d5cc: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x23d5ccu;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23d5d0:
    // 0x23d5d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23d5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d5d4:
    // 0x23d5d4: 0x2010  mfhi        $a0
    ctx->pc = 0x23d5d4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_23d5d8:
    // 0x23d5d8: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x23d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
label_23d5dc:
    // 0x23d5dc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23d5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23d5e0:
    // 0x23d5e0: 0xc08de70  jal         func_2379C0
label_23d5e4:
    if (ctx->pc == 0x23D5E4u) {
        ctx->pc = 0x23D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5E0u;
        // 0x23d5e4: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5E8u;
        goto label_23d5e8;
    }
    ctx->pc = 0x23D5E0u;
    SET_GPR_U32(ctx, 31, 0x23D5E8u);
    ctx->pc = 0x23D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D5E0u;
    // 0x23d5e4: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2379C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2379C0u, 0x23D5E0u, 0x23D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D5E8u;
label_23d5e8:
    // 0x23d5e8: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x23d5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_23d5ec:
    // 0x23d5ec: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x23d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23d5f0:
    // 0x23d5f0: 0x24a5cfc0  addiu       $a1, $a1, -0x3040
    ctx->pc = 0x23d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954944));
label_23d5f4:
    // 0x23d5f4: 0xc08de58  jal         func_237960
label_23d5f8:
    if (ctx->pc == 0x23D5F8u) {
        ctx->pc = 0x23D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5F4u;
        // 0x23d5f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D5FCu;
        goto label_23d5fc;
    }
    ctx->pc = 0x23D5F4u;
    SET_GPR_U32(ctx, 31, 0x23D5FCu);
    ctx->pc = 0x23D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D5F4u;
    // 0x23d5f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237960u, 0x23D5F4u, 0x23D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D5FCu;
label_23d5fc:
    // 0x23d5fc: 0xc08db4a  jal         func_236D28
label_23d600:
    if (ctx->pc == 0x23D600u) {
        ctx->pc = 0x23D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5FCu;
        // 0x23d600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D604u;
        goto label_23d604;
    }
    ctx->pc = 0x23D5FCu;
    SET_GPR_U32(ctx, 31, 0x23D604u);
    ctx->pc = 0x23D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D5FCu;
    // 0x23d600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236D28u, 0x23D5FCu, 0x23D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D604u;
label_23d604:
    // 0x23d604: 0xc08db38  jal         func_236CE0
label_23d608:
    if (ctx->pc == 0x23D608u) {
        ctx->pc = 0x23D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D604u;
        // 0x23d608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D60Cu;
        goto label_23d60c;
    }
    ctx->pc = 0x23D604u;
    SET_GPR_U32(ctx, 31, 0x23D60Cu);
    ctx->pc = 0x23D608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D604u;
    // 0x23d608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236CE0u, 0x23D604u, 0x23D60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D60Cu;
label_23d60c:
    // 0x23d60c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d610:
    // 0x23d610: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x23d610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_23d614:
    // 0x23d614: 0xc08daf0  jal         func_236BC0
label_23d618:
    if (ctx->pc == 0x23D618u) {
        ctx->pc = 0x23D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D614u;
        // 0x23d618: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D61Cu;
        goto label_23d61c;
    }
    ctx->pc = 0x23D614u;
    SET_GPR_U32(ctx, 31, 0x23D61Cu);
    ctx->pc = 0x23D618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D614u;
    // 0x23d618: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BC0u, 0x23D614u, 0x23D61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D61Cu;
label_23d61c:
    // 0x23d61c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d620:
    // 0x23d620: 0xc08daf8  jal         func_236BE0
label_23d624:
    if (ctx->pc == 0x23D624u) {
        ctx->pc = 0x23D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D620u;
        // 0x23d624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D628u;
        goto label_23d628;
    }
    ctx->pc = 0x23D620u;
    SET_GPR_U32(ctx, 31, 0x23D628u);
    ctx->pc = 0x23D624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D620u;
    // 0x23d624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x23D620u, 0x23D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D628u;
label_23d628:
    // 0x23d628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d62c:
    // 0x23d62c: 0xc08daf4  jal         func_236BD0
label_23d630:
    if (ctx->pc == 0x23D630u) {
        ctx->pc = 0x23D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D62Cu;
        // 0x23d630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D634u;
        goto label_23d634;
    }
    ctx->pc = 0x23D62Cu;
    SET_GPR_U32(ctx, 31, 0x23D634u);
    ctx->pc = 0x23D630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D62Cu;
    // 0x23d630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BD0u, 0x23D62Cu, 0x23D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D634u;
label_23d634:
    // 0x23d634: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x23d634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_23d638:
    // 0x23d638: 0x24a5cd70  addiu       $a1, $a1, -0x3290
    ctx->pc = 0x23d638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954352));
label_23d63c:
    // 0x23d63c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d640:
    // 0x23d640: 0xc08daec  jal         func_236BB0
label_23d644:
    if (ctx->pc == 0x23D644u) {
        ctx->pc = 0x23D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D640u;
        // 0x23d644: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D648u;
        goto label_23d648;
    }
    ctx->pc = 0x23D640u;
    SET_GPR_U32(ctx, 31, 0x23D648u);
    ctx->pc = 0x23D644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D640u;
    // 0x23d644: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BB0u, 0x23D640u, 0x23D648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D648u;
label_23d648:
    // 0x23d648: 0x10000016  b           . + 4 + (0x16 << 2)
label_23d64c:
    if (ctx->pc == 0x23D64Cu) {
        ctx->pc = 0x23D650u;
        goto label_23d650;
    }
    ctx->pc = 0x23D648u;
    {
        const bool branch_taken_0x23d648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d648) {
            ctx->pc = 0x23D6A4u;
            goto label_23d6a4;
        }
    }
    ctx->pc = 0x23D650u;
label_23d650:
    // 0x23d650: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_23d654:
    if (ctx->pc == 0x23D654u) {
        ctx->pc = 0x23D658u;
        goto label_23d658;
    }
    ctx->pc = 0x23D650u;
    {
        const bool branch_taken_0x23d650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d650) {
            ctx->pc = 0x23D664u;
            goto label_23d664;
        }
    }
    ctx->pc = 0x23D658u;
label_23d658:
    // 0x23d658: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x23d658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_23d65c:
    // 0x23d65c: 0xc08de70  jal         func_2379C0
label_23d660:
    if (ctx->pc == 0x23D660u) {
        ctx->pc = 0x23D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D65Cu;
        // 0x23d660: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D664u;
        goto label_23d664;
    }
    ctx->pc = 0x23D65Cu;
    SET_GPR_U32(ctx, 31, 0x23D664u);
    ctx->pc = 0x23D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D65Cu;
    // 0x23d660: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2379C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2379C0u, 0x23D65Cu, 0x23D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D664u;
label_23d664:
    // 0x23d664: 0xc08db20  jal         func_236C80
label_23d668:
    if (ctx->pc == 0x23D668u) {
        ctx->pc = 0x23D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D664u;
        // 0x23d668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D66Cu;
        goto label_23d66c;
    }
    ctx->pc = 0x23D664u;
    SET_GPR_U32(ctx, 31, 0x23D66Cu);
    ctx->pc = 0x23D668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D664u;
    // 0x23d668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C80u, 0x23D664u, 0x23D66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D66Cu;
label_23d66c:
    // 0x23d66c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d670:
    // 0x23d670: 0xc08daf0  jal         func_236BC0
label_23d674:
    if (ctx->pc == 0x23D674u) {
        ctx->pc = 0x23D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D670u;
        // 0x23d674: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D678u;
        goto label_23d678;
    }
    ctx->pc = 0x23D670u;
    SET_GPR_U32(ctx, 31, 0x23D678u);
    ctx->pc = 0x23D674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D670u;
    // 0x23d674: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BC0u, 0x23D670u, 0x23D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D678u;
label_23d678:
    // 0x23d678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d67c:
    // 0x23d67c: 0xc08daf8  jal         func_236BE0
label_23d680:
    if (ctx->pc == 0x23D680u) {
        ctx->pc = 0x23D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D67Cu;
        // 0x23d680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D684u;
        goto label_23d684;
    }
    ctx->pc = 0x23D67Cu;
    SET_GPR_U32(ctx, 31, 0x23D684u);
    ctx->pc = 0x23D680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D67Cu;
    // 0x23d680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x23D67Cu, 0x23D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D684u;
label_23d684:
    // 0x23d684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d688:
    // 0x23d688: 0xc08daf4  jal         func_236BD0
label_23d68c:
    if (ctx->pc == 0x23D68Cu) {
        ctx->pc = 0x23D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D688u;
        // 0x23d68c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D690u;
        goto label_23d690;
    }
    ctx->pc = 0x23D688u;
    SET_GPR_U32(ctx, 31, 0x23D690u);
    ctx->pc = 0x23D68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D688u;
    // 0x23d68c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BD0u, 0x23D688u, 0x23D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D690u;
label_23d690:
    // 0x23d690: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x23d690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_23d694:
    // 0x23d694: 0x24a5d0f0  addiu       $a1, $a1, -0x2F10
    ctx->pc = 0x23d694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955248));
label_23d698:
    // 0x23d698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d69c:
    // 0x23d69c: 0xc08daec  jal         func_236BB0
label_23d6a0:
    if (ctx->pc == 0x23D6A0u) {
        ctx->pc = 0x23D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D69Cu;
        // 0x23d6a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6A4u;
        goto label_23d6a4;
    }
    ctx->pc = 0x23D69Cu;
    SET_GPR_U32(ctx, 31, 0x23D6A4u);
    ctx->pc = 0x23D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D69Cu;
    // 0x23d6a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BB0u, 0x23D69Cu, 0x23D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6A4u;
label_23d6a4:
    // 0x23d6a4: 0xc08db02  jal         func_236C08
label_23d6a8:
    if (ctx->pc == 0x23D6A8u) {
        ctx->pc = 0x23D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6A4u;
        // 0x23d6a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6ACu;
        goto label_23d6ac;
    }
    ctx->pc = 0x23D6A4u;
    SET_GPR_U32(ctx, 31, 0x23D6ACu);
    ctx->pc = 0x23D6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6A4u;
    // 0x23d6a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C08u, 0x23D6A4u, 0x23D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6ACu;
label_23d6ac:
    // 0x23d6ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d6b0:
    // 0x23d6b0: 0xc08db08  jal         func_236C20
label_23d6b4:
    if (ctx->pc == 0x23D6B4u) {
        ctx->pc = 0x23D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6B0u;
        // 0x23d6b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6B8u;
        goto label_23d6b8;
    }
    ctx->pc = 0x23D6B0u;
    SET_GPR_U32(ctx, 31, 0x23D6B8u);
    ctx->pc = 0x23D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6B0u;
    // 0x23d6b4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C20u, 0x23D6B0u, 0x23D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6B8u;
label_23d6b8:
    // 0x23d6b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d6bc:
    // 0x23d6bc: 0xc08db20  jal         func_236C80
label_23d6c0:
    if (ctx->pc == 0x23D6C0u) {
        ctx->pc = 0x23D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6BCu;
        // 0x23d6c0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6C4u;
        goto label_23d6c4;
    }
    ctx->pc = 0x23D6BCu;
    SET_GPR_U32(ctx, 31, 0x23D6C4u);
    ctx->pc = 0x23D6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6BCu;
    // 0x23d6c0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C80u, 0x23D6BCu, 0x23D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6C4u;
label_23d6c4:
    // 0x23d6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d6c8:
    // 0x23d6c8: 0xc08db0e  jal         func_236C38
label_23d6cc:
    if (ctx->pc == 0x23D6CCu) {
        ctx->pc = 0x23D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6C8u;
        // 0x23d6cc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6D0u;
        goto label_23d6d0;
    }
    ctx->pc = 0x23D6C8u;
    SET_GPR_U32(ctx, 31, 0x23D6D0u);
    ctx->pc = 0x23D6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6C8u;
    // 0x23d6cc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C38u, 0x23D6C8u, 0x23D6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6D0u;
label_23d6d0:
    // 0x23d6d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x23d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23d6d4:
    // 0x23d6d4: 0xc08d5a8  jal         func_2356A0
label_23d6d8:
    if (ctx->pc == 0x23D6D8u) {
        ctx->pc = 0x23D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6D4u;
        // 0x23d6d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6DCu;
        goto label_23d6dc;
    }
    ctx->pc = 0x23D6D4u;
    SET_GPR_U32(ctx, 31, 0x23D6DCu);
    ctx->pc = 0x23D6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6D4u;
    // 0x23d6d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2356A0u, 0x23D6D4u, 0x23D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6DCu;
label_23d6dc:
    // 0x23d6dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x23d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23d6e0:
    // 0x23d6e0: 0xc08d590  jal         func_235640
label_23d6e4:
    if (ctx->pc == 0x23D6E4u) {
        ctx->pc = 0x23D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6E0u;
        // 0x23d6e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6E8u;
        goto label_23d6e8;
    }
    ctx->pc = 0x23D6E0u;
    SET_GPR_U32(ctx, 31, 0x23D6E8u);
    ctx->pc = 0x23D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6E0u;
    // 0x23d6e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235640u, 0x23D6E0u, 0x23D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6E8u;
label_23d6e8:
    // 0x23d6e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x23d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23d6ec:
    // 0x23d6ec: 0xc08d58a  jal         func_235628
label_23d6f0:
    if (ctx->pc == 0x23D6F0u) {
        ctx->pc = 0x23D6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6ECu;
        // 0x23d6f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6F4u;
        goto label_23d6f4;
    }
    ctx->pc = 0x23D6ECu;
    SET_GPR_U32(ctx, 31, 0x23D6F4u);
    ctx->pc = 0x23D6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6ECu;
    // 0x23d6f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235628u, 0x23D6ECu, 0x23D6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D6F4u;
label_23d6f4:
    // 0x23d6f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x23d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23d6f8:
    // 0x23d6f8: 0xc08d5e2  jal         func_235788
label_23d6fc:
    if (ctx->pc == 0x23D6FCu) {
        ctx->pc = 0x23D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6F8u;
        // 0x23d6fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D700u;
        goto label_23d700;
    }
    ctx->pc = 0x23D6F8u;
    SET_GPR_U32(ctx, 31, 0x23D700u);
    ctx->pc = 0x23D6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D6F8u;
    // 0x23d6fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235788u, 0x23D6F8u, 0x23D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D700u;
label_23d700:
    // 0x23d700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d704:
    // 0x23d704: 0xc08ea76  jal         func_23A9D8
label_23d708:
    if (ctx->pc == 0x23D708u) {
        ctx->pc = 0x23D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D704u;
        // 0x23d708: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D70Cu;
        goto label_23d70c;
    }
    ctx->pc = 0x23D704u;
    SET_GPR_U32(ctx, 31, 0x23D70Cu);
    ctx->pc = 0x23D708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D704u;
    // 0x23d708: 0x86050040  lh          $a1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A9D8u, 0x23D704u, 0x23D70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D70Cu;
label_23d70c:
    // 0x23d70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d710:
    // 0x23d710: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23d710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23d714:
    // 0x23d714: 0xc08eeee  jal         func_23BBB8
label_23d718:
    if (ctx->pc == 0x23D718u) {
        ctx->pc = 0x23D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D714u;
        // 0x23d718: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D71Cu;
        goto label_23d71c;
    }
    ctx->pc = 0x23D714u;
    SET_GPR_U32(ctx, 31, 0x23D71Cu);
    ctx->pc = 0x23D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D714u;
    // 0x23d718: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BBB8u, 0x23D714u, 0x23D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D71Cu;
label_23d71c:
    // 0x23d71c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23d71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23d720:
    // 0x23d720: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_23d724:
    if (ctx->pc == 0x23D724u) {
        ctx->pc = 0x23D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D720u;
        // 0x23d724: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D728u;
        goto label_23d728;
    }
    ctx->pc = 0x23D720u;
    {
        const bool branch_taken_0x23d720 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D720u;
        // 0x23d724: 0x8fa60024  lw          $a2, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d720) {
            ctx->pc = 0x23D730u;
            goto label_23d730;
        }
    }
    ctx->pc = 0x23D728u;
label_23d728:
    // 0x23d728: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_23d72c:
    if (ctx->pc == 0x23D72Cu) {
        ctx->pc = 0x23D730u;
        goto label_23d730;
    }
    ctx->pc = 0x23D728u;
    {
        const bool branch_taken_0x23d728 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d728) {
            ctx->pc = 0x23D738u;
            goto label_23d738;
        }
    }
    ctx->pc = 0x23D730u;
label_23d730:
    // 0x23d730: 0xc08eeec  jal         func_23BBB0
label_23d734:
    if (ctx->pc == 0x23D734u) {
        ctx->pc = 0x23D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D730u;
        // 0x23d734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D738u;
        goto label_23d738;
    }
    ctx->pc = 0x23D730u;
    SET_GPR_U32(ctx, 31, 0x23D738u);
    ctx->pc = 0x23D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D730u;
    // 0x23d734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BBB0u, 0x23D730u, 0x23D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D738u;
label_23d738:
    // 0x23d738: 0xc08f422  jal         func_23D088
label_23d73c:
    if (ctx->pc == 0x23D73Cu) {
        ctx->pc = 0x23D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D738u;
        // 0x23d73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D740u;
        goto label_23d740;
    }
    ctx->pc = 0x23D738u;
    SET_GPR_U32(ctx, 31, 0x23D740u);
    ctx->pc = 0x23D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D738u;
    // 0x23d73c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D088u, 0x23D738u, 0x23D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D740u;
label_23d740:
    // 0x23d740: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x23d740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_23d744:
    // 0x23d744: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_23d748:
    if (ctx->pc == 0x23D748u) {
        ctx->pc = 0x23D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D744u;
        // 0x23d748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D74Cu;
        goto label_23d74c;
    }
    ctx->pc = 0x23D744u;
    {
        const bool branch_taken_0x23d744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d744) {
            ctx->pc = 0x23D748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D744u;
            // 0x23d748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D758u;
            goto label_23d758;
        }
    }
    ctx->pc = 0x23D74Cu;
label_23d74c:
    // 0x23d74c: 0xc08a67c  jal         func_2299F0
label_23d750:
    if (ctx->pc == 0x23D750u) {
        ctx->pc = 0x23D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D74Cu;
        // 0x23d750: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D754u;
        goto label_23d754;
    }
    ctx->pc = 0x23D74Cu;
    SET_GPR_U32(ctx, 31, 0x23D754u);
    ctx->pc = 0x23D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D74Cu;
    // 0x23d750: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2299F0u, 0x23D74Cu, 0x23D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D754u;
label_23d754:
    // 0x23d754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d758:
    // 0x23d758: 0xc08dafc  jal         func_236BF0
label_23d75c:
    if (ctx->pc == 0x23D75Cu) {
        ctx->pc = 0x23D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D758u;
        // 0x23d75c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D760u;
        goto label_23d760;
    }
    ctx->pc = 0x23D758u;
    SET_GPR_U32(ctx, 31, 0x23D760u);
    ctx->pc = 0x23D75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D758u;
    // 0x23d75c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BF0u, 0x23D758u, 0x23D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D760u;
label_23d760:
    // 0x23d760: 0x54530007  bnel        $v0, $s3, . + 4 + (0x7 << 2)
label_23d764:
    if (ctx->pc == 0x23D764u) {
        ctx->pc = 0x23D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D760u;
        // 0x23d764: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D768u;
        goto label_23d768;
    }
    ctx->pc = 0x23D760u;
    {
        const bool branch_taken_0x23d760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x23d760) {
            ctx->pc = 0x23D764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D760u;
            // 0x23d764: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D780u;
            goto label_23d780;
        }
    }
    ctx->pc = 0x23D768u;
label_23d768:
    // 0x23d768: 0xc08dbaa  jal         func_236EA8
label_23d76c:
    if (ctx->pc == 0x23D76Cu) {
        ctx->pc = 0x23D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D768u;
        // 0x23d76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D770u;
        goto label_23d770;
    }
    ctx->pc = 0x23D768u;
    SET_GPR_U32(ctx, 31, 0x23D770u);
    ctx->pc = 0x23D76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D768u;
    // 0x23d76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236EA8u, 0x23D768u, 0x23D770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D770u;
label_23d770:
    // 0x23d770: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x23d770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23d774:
    // 0x23d774: 0xc08d5e6  jal         func_235798
label_23d778:
    if (ctx->pc == 0x23D778u) {
        ctx->pc = 0x23D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D774u;
        // 0x23d778: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D77Cu;
        goto label_23d77c;
    }
    ctx->pc = 0x23D774u;
    SET_GPR_U32(ctx, 31, 0x23D77Cu);
    ctx->pc = 0x23D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D774u;
    // 0x23d778: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235798u, 0x23D774u, 0x23D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D77Cu;
label_23d77c:
    // 0x23d77c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x23d77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23d780:
    // 0x23d780: 0xc08d552  jal         func_235548
label_23d784:
    if (ctx->pc == 0x23D784u) {
        ctx->pc = 0x23D784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D780u;
        // 0x23d784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D788u;
        goto label_23d788;
    }
    ctx->pc = 0x23D780u;
    SET_GPR_U32(ctx, 31, 0x23D788u);
    ctx->pc = 0x23D784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D780u;
    // 0x23d784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235548u, 0x23D780u, 0x23D788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D788u;
label_23d788:
    // 0x23d788: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x23d788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_23d78c:
    // 0x23d78c: 0x8c428fd8  lw          $v0, -0x7028($v0)
    ctx->pc = 0x23d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938584)));
label_23d790:
    // 0x23d790: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23d794:
    if (ctx->pc == 0x23D794u) {
        ctx->pc = 0x23D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D790u;
        // 0x23d794: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D798u;
        goto label_23d798;
    }
    ctx->pc = 0x23D790u;
    {
        const bool branch_taken_0x23d790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D790u;
        // 0x23d794: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d790) {
            ctx->pc = 0x23D7A8u;
            goto label_23d7a8;
        }
    }
    ctx->pc = 0x23D798u;
label_23d798:
    // 0x23d798: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23d798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23d79c:
    // 0x23d79c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x23d79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23d7a0:
    // 0x23d7a0: 0x40f809  jalr        $v0
label_23d7a4:
    if (ctx->pc == 0x23D7A4u) {
        ctx->pc = 0x23D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7A0u;
        // 0x23d7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7A8u;
        goto label_23d7a8;
    }
    ctx->pc = 0x23D7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D7A8u);
        ctx->pc = 0x23D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7A0u;
        // 0x23d7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D7A0u, 0x23D7A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D7A8u;
label_23d7a8:
    // 0x23d7a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_23d7ac:
    if (ctx->pc == 0x23D7ACu) {
        ctx->pc = 0x23D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7A8u;
        // 0x23d7ac: 0xa2130001  sb          $s3, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7B0u;
        goto label_23d7b0;
    }
    ctx->pc = 0x23D7A8u;
    {
        const bool branch_taken_0x23d7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7A8u;
        // 0x23d7ac: 0xa2130001  sb          $s3, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7a8) {
            ctx->pc = 0x23D7C0u;
            goto label_23d7c0;
        }
    }
    ctx->pc = 0x23D7B0u;
label_23d7b0:
    // 0x23d7b0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_23d7b4:
    if (ctx->pc == 0x23D7B4u) {
        ctx->pc = 0x23D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7B0u;
        // 0x23d7b4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7B8u;
        goto label_23d7b8;
    }
    ctx->pc = 0x23D7B0u;
    {
        const bool branch_taken_0x23d7b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d7b0) {
            ctx->pc = 0x23D7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D7B0u;
            // 0x23d7b4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D7C4u;
            goto label_23d7c4;
        }
    }
    ctx->pc = 0x23D7B8u;
label_23d7b8:
    // 0x23d7b8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x23d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23d7bc:
    // 0x23d7bc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x23d7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_23d7c0:
    // 0x23d7c0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x23d7c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23d7c4:
    // 0x23d7c4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x23d7c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23d7c8:
    // 0x23d7c8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x23d7c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23d7cc:
    // 0x23d7cc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x23d7ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_23d7d0:
    // 0x23d7d0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x23d7d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23d7d4:
    // 0x23d7d4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x23d7d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_23d7d8:
    // 0x23d7d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x23d7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23d7dc:
    // 0x23d7dc: 0x3e00008  jr          $ra
label_23d7e0:
    if (ctx->pc == 0x23D7E0u) {
        ctx->pc = 0x23D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7DCu;
        // 0x23d7e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D7E4u;
        goto label_fallthrough_0x23d7dc;
    }
    ctx->pc = 0x23D7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D7DCu;
        // 0x23d7e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23d7dc:
    ctx->pc = 0x23D7E4u;
}
