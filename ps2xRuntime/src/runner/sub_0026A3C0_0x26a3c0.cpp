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

// Function: sub_0026A3C0
// Address: 0x26a3c0 - 0x26a624
void sub_0026A3C0_0x26a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A3C0_0x26a3c0");
#endif

    switch (ctx->pc) {
        case 0x26a3c0u: goto label_26a3c0;
        case 0x26a3c4u: goto label_26a3c4;
        case 0x26a3c8u: goto label_26a3c8;
        case 0x26a3ccu: goto label_26a3cc;
        case 0x26a3d0u: goto label_26a3d0;
        case 0x26a3d4u: goto label_26a3d4;
        case 0x26a3d8u: goto label_26a3d8;
        case 0x26a3dcu: goto label_26a3dc;
        case 0x26a3e0u: goto label_26a3e0;
        case 0x26a3e4u: goto label_26a3e4;
        case 0x26a3e8u: goto label_26a3e8;
        case 0x26a3ecu: goto label_26a3ec;
        case 0x26a3f0u: goto label_26a3f0;
        case 0x26a3f4u: goto label_26a3f4;
        case 0x26a3f8u: goto label_26a3f8;
        case 0x26a3fcu: goto label_26a3fc;
        case 0x26a400u: goto label_26a400;
        case 0x26a404u: goto label_26a404;
        case 0x26a408u: goto label_26a408;
        case 0x26a40cu: goto label_26a40c;
        case 0x26a410u: goto label_26a410;
        case 0x26a414u: goto label_26a414;
        case 0x26a418u: goto label_26a418;
        case 0x26a41cu: goto label_26a41c;
        case 0x26a420u: goto label_26a420;
        case 0x26a424u: goto label_26a424;
        case 0x26a428u: goto label_26a428;
        case 0x26a42cu: goto label_26a42c;
        case 0x26a430u: goto label_26a430;
        case 0x26a434u: goto label_26a434;
        case 0x26a438u: goto label_26a438;
        case 0x26a43cu: goto label_26a43c;
        case 0x26a440u: goto label_26a440;
        case 0x26a444u: goto label_26a444;
        case 0x26a448u: goto label_26a448;
        case 0x26a44cu: goto label_26a44c;
        case 0x26a450u: goto label_26a450;
        case 0x26a454u: goto label_26a454;
        case 0x26a458u: goto label_26a458;
        case 0x26a45cu: goto label_26a45c;
        case 0x26a460u: goto label_26a460;
        case 0x26a464u: goto label_26a464;
        case 0x26a468u: goto label_26a468;
        case 0x26a46cu: goto label_26a46c;
        case 0x26a470u: goto label_26a470;
        case 0x26a474u: goto label_26a474;
        case 0x26a478u: goto label_26a478;
        case 0x26a47cu: goto label_26a47c;
        case 0x26a480u: goto label_26a480;
        case 0x26a484u: goto label_26a484;
        case 0x26a488u: goto label_26a488;
        case 0x26a48cu: goto label_26a48c;
        case 0x26a490u: goto label_26a490;
        case 0x26a494u: goto label_26a494;
        case 0x26a498u: goto label_26a498;
        case 0x26a49cu: goto label_26a49c;
        case 0x26a4a0u: goto label_26a4a0;
        case 0x26a4a4u: goto label_26a4a4;
        case 0x26a4a8u: goto label_26a4a8;
        case 0x26a4acu: goto label_26a4ac;
        case 0x26a4b0u: goto label_26a4b0;
        case 0x26a4b4u: goto label_26a4b4;
        case 0x26a4b8u: goto label_26a4b8;
        case 0x26a4bcu: goto label_26a4bc;
        case 0x26a4c0u: goto label_26a4c0;
        case 0x26a4c4u: goto label_26a4c4;
        case 0x26a4c8u: goto label_26a4c8;
        case 0x26a4ccu: goto label_26a4cc;
        case 0x26a4d0u: goto label_26a4d0;
        case 0x26a4d4u: goto label_26a4d4;
        case 0x26a4d8u: goto label_26a4d8;
        case 0x26a4dcu: goto label_26a4dc;
        case 0x26a4e0u: goto label_26a4e0;
        case 0x26a4e4u: goto label_26a4e4;
        case 0x26a4e8u: goto label_26a4e8;
        case 0x26a4ecu: goto label_26a4ec;
        case 0x26a4f0u: goto label_26a4f0;
        case 0x26a4f4u: goto label_26a4f4;
        case 0x26a4f8u: goto label_26a4f8;
        case 0x26a4fcu: goto label_26a4fc;
        case 0x26a500u: goto label_26a500;
        case 0x26a504u: goto label_26a504;
        case 0x26a508u: goto label_26a508;
        case 0x26a50cu: goto label_26a50c;
        case 0x26a510u: goto label_26a510;
        case 0x26a514u: goto label_26a514;
        case 0x26a518u: goto label_26a518;
        case 0x26a51cu: goto label_26a51c;
        case 0x26a520u: goto label_26a520;
        case 0x26a524u: goto label_26a524;
        case 0x26a528u: goto label_26a528;
        case 0x26a52cu: goto label_26a52c;
        case 0x26a530u: goto label_26a530;
        case 0x26a534u: goto label_26a534;
        case 0x26a538u: goto label_26a538;
        case 0x26a53cu: goto label_26a53c;
        case 0x26a540u: goto label_26a540;
        case 0x26a544u: goto label_26a544;
        case 0x26a548u: goto label_26a548;
        case 0x26a54cu: goto label_26a54c;
        case 0x26a550u: goto label_26a550;
        case 0x26a554u: goto label_26a554;
        case 0x26a558u: goto label_26a558;
        case 0x26a55cu: goto label_26a55c;
        case 0x26a560u: goto label_26a560;
        case 0x26a564u: goto label_26a564;
        case 0x26a568u: goto label_26a568;
        case 0x26a56cu: goto label_26a56c;
        case 0x26a570u: goto label_26a570;
        case 0x26a574u: goto label_26a574;
        case 0x26a578u: goto label_26a578;
        case 0x26a57cu: goto label_26a57c;
        case 0x26a580u: goto label_26a580;
        case 0x26a584u: goto label_26a584;
        case 0x26a588u: goto label_26a588;
        case 0x26a58cu: goto label_26a58c;
        case 0x26a590u: goto label_26a590;
        case 0x26a594u: goto label_26a594;
        case 0x26a598u: goto label_26a598;
        case 0x26a59cu: goto label_26a59c;
        case 0x26a5a0u: goto label_26a5a0;
        case 0x26a5a4u: goto label_26a5a4;
        case 0x26a5a8u: goto label_26a5a8;
        case 0x26a5acu: goto label_26a5ac;
        case 0x26a5b0u: goto label_26a5b0;
        case 0x26a5b4u: goto label_26a5b4;
        case 0x26a5b8u: goto label_26a5b8;
        case 0x26a5bcu: goto label_26a5bc;
        case 0x26a5c0u: goto label_26a5c0;
        case 0x26a5c4u: goto label_26a5c4;
        case 0x26a5c8u: goto label_26a5c8;
        case 0x26a5ccu: goto label_26a5cc;
        case 0x26a5d0u: goto label_26a5d0;
        case 0x26a5d4u: goto label_26a5d4;
        case 0x26a5d8u: goto label_26a5d8;
        case 0x26a5dcu: goto label_26a5dc;
        case 0x26a5e0u: goto label_26a5e0;
        case 0x26a5e4u: goto label_26a5e4;
        case 0x26a5e8u: goto label_26a5e8;
        case 0x26a5ecu: goto label_26a5ec;
        case 0x26a5f0u: goto label_26a5f0;
        case 0x26a5f4u: goto label_26a5f4;
        case 0x26a5f8u: goto label_26a5f8;
        case 0x26a5fcu: goto label_26a5fc;
        case 0x26a600u: goto label_26a600;
        case 0x26a604u: goto label_26a604;
        case 0x26a608u: goto label_26a608;
        case 0x26a60cu: goto label_26a60c;
        case 0x26a610u: goto label_26a610;
        case 0x26a614u: goto label_26a614;
        case 0x26a618u: goto label_26a618;
        case 0x26a61cu: goto label_26a61c;
        case 0x26a620u: goto label_26a620;
        default: break;
    }

    ctx->pc = 0x26a3c0u;

label_26a3c0:
    // 0x26a3c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26a3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_26a3c4:
    // 0x26a3c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26a3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_26a3c8:
    // 0x26a3c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_26a3cc:
    // 0x26a3cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_26a3d0:
    // 0x26a3d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26a3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_26a3d4:
    // 0x26a3d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26a3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_26a3d8:
    // 0x26a3d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26a3d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26a3dc:
    // 0x26a3dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26a3e0:
    // 0x26a3e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26a3e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26a3e4:
    // 0x26a3e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26a3e8:
    // 0x26a3e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26a3e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_26a3ec:
    // 0x26a3ec: 0x8c23cee4  lw          $v1, -0x311C($at)
    ctx->pc = 0x26a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954724)));
label_26a3f0:
    // 0x26a3f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26a3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_26a3f4:
    // 0x26a3f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26a3f8:
    if (ctx->pc == 0x26A3F8u) {
        ctx->pc = 0x26A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3F4u;
        // 0x26a3f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A3FCu;
        goto label_26a3fc;
    }
    ctx->pc = 0x26A3F4u;
    {
        const bool branch_taken_0x26a3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3F4u;
        // 0x26a3f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3f4) {
            ctx->pc = 0x26A408u;
            goto label_26a408;
        }
    }
    ctx->pc = 0x26A3FCu;
label_26a3fc:
    // 0x26a3fc: 0x10000082  b           . + 4 + (0x82 << 2)
label_26a400:
    if (ctx->pc == 0x26A400u) {
        ctx->pc = 0x26A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3FCu;
        // 0x26a400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A404u;
        goto label_26a404;
    }
    ctx->pc = 0x26A3FCu;
    {
        const bool branch_taken_0x26a3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3FCu;
        // 0x26a400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3fc) {
            ctx->pc = 0x26A608u;
            goto label_26a608;
        }
    }
    ctx->pc = 0x26A404u;
label_26a404:
    // 0x26a404: 0x0  nop
    ctx->pc = 0x26a404u;
    // NOP
label_26a408:
    // 0x26a408: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x26a408u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_26a40c:
    // 0x26a40c: 0x92670001  lbu         $a3, 0x1($s3)
    ctx->pc = 0x26a40cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_26a410:
    // 0x26a410: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x26a410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_26a414:
    // 0x26a414: 0x92680002  lbu         $t0, 0x2($s3)
    ctx->pc = 0x26a414u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_26a418:
    // 0x26a418: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26a418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26a41c:
    // 0x26a41c: 0xc09a4e4  jal         func_269390
label_26a420:
    if (ctx->pc == 0x26A420u) {
        ctx->pc = 0x26A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A41Cu;
        // 0x26a420: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A424u;
        goto label_26a424;
    }
    ctx->pc = 0x26A41Cu;
    SET_GPR_U32(ctx, 31, 0x26A424u);
    ctx->pc = 0x26A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A41Cu;
    // 0x26a420: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269390u, 0x26A41Cu, 0x26A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A424u;
label_26a424:
    // 0x26a424: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x26a424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_26a428:
    // 0x26a428: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_26a42c:
    if (ctx->pc == 0x26A42Cu) {
        ctx->pc = 0x26A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A428u;
        // 0x26a42c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A430u;
        goto label_26a430;
    }
    ctx->pc = 0x26A428u;
    {
        const bool branch_taken_0x26a428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A428u;
        // 0x26a42c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a428) {
            ctx->pc = 0x26A438u;
            goto label_26a438;
        }
    }
    ctx->pc = 0x26A430u;
label_26a430:
    // 0x26a430: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_26a434:
    if (ctx->pc == 0x26A434u) {
        ctx->pc = 0x26A438u;
        goto label_26a438;
    }
    ctx->pc = 0x26A430u;
    {
        const bool branch_taken_0x26a430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26a430) {
            ctx->pc = 0x26A498u;
            goto label_26a498;
        }
    }
    ctx->pc = 0x26A438u;
label_26a438:
    // 0x26a438: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x26a438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_26a43c:
    // 0x26a43c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x26a43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26a440:
    // 0x26a440: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x26a440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_26a444:
    // 0x26a444: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x26a444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_26a448:
    // 0x26a448: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x26a448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_26a44c:
    // 0x26a44c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x26a44cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26a450:
    // 0x26a450: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x26a450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_26a454:
    // 0x26a454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26a458:
    // 0x26a458: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x26a458u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_26a45c:
    // 0x26a45c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x26a45cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_26a460:
    // 0x26a460: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x26a460u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26a464:
    // 0x26a464: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_26a468:
    if (ctx->pc == 0x26A468u) {
        ctx->pc = 0x26A46Cu;
        goto label_26a46c;
    }
    ctx->pc = 0x26A464u;
    {
        const bool branch_taken_0x26a464 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a464) {
            ctx->pc = 0x26A47Cu;
            goto label_26a47c;
        }
    }
    ctx->pc = 0x26A46Cu;
label_26a46c:
    // 0x26a46c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a46cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_26a470:
    // 0x26a470: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x26a470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_26a474:
    // 0x26a474: 0x10000008  b           . + 4 + (0x8 << 2)
label_26a478:
    if (ctx->pc == 0x26A478u) {
        ctx->pc = 0x26A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A474u;
        // 0x26a478: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A47Cu;
        goto label_26a47c;
    }
    ctx->pc = 0x26A474u;
    {
        const bool branch_taken_0x26a474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A474u;
        // 0x26a478: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a474) {
            ctx->pc = 0x26A498u;
            goto label_26a498;
        }
    }
    ctx->pc = 0x26A47Cu;
label_26a47c:
    // 0x26a47c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26a47cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_26a480:
    // 0x26a480: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26a480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_26a484:
    // 0x26a484: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_26a488:
    // 0x26a488: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x26a488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_26a48c:
    // 0x26a48c: 0x0  nop
    ctx->pc = 0x26a48cu;
    // NOP
label_26a490:
    // 0x26a490: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26a490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_26a494:
    // 0x26a494: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x26a494u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_26a498:
    // 0x26a498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26a49c:
    // 0x26a49c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26a49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26a4a0:
    // 0x26a4a0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x26a4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26a4a4:
    // 0x26a4a4: 0xc09a6c4  jal         func_269B10
label_26a4a8:
    if (ctx->pc == 0x26A4A8u) {
        ctx->pc = 0x26A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4A4u;
        // 0x26a4a8: 0x27a7007e  addiu       $a3, $sp, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4ACu;
        goto label_26a4ac;
    }
    ctx->pc = 0x26A4A4u;
    SET_GPR_U32(ctx, 31, 0x26A4ACu);
    ctx->pc = 0x26A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A4A4u;
    // 0x26a4a8: 0x27a7007e  addiu       $a3, $sp, 0x7E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269B10u, 0x26A4A4u, 0x26A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A4ACu;
label_26a4ac:
    // 0x26a4ac: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x26a4acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_26a4b0:
    // 0x26a4b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26a4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26a4b4:
    // 0x26a4b4: 0xc0b2ebc  jal         func_2CBAF0
label_26a4b8:
    if (ctx->pc == 0x26A4B8u) {
        ctx->pc = 0x26A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4B4u;
        // 0x26a4b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4BCu;
        goto label_26a4bc;
    }
    ctx->pc = 0x26A4B4u;
    SET_GPR_U32(ctx, 31, 0x26A4BCu);
    ctx->pc = 0x26A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A4B4u;
    // 0x26a4b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x26A4B4u, 0x26A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A4BCu;
label_26a4bc:
    // 0x26a4bc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_26a4c0:
    if (ctx->pc == 0x26A4C0u) {
        ctx->pc = 0x26A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4BCu;
        // 0x26a4c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A4C4u;
        goto label_26a4c4;
    }
    ctx->pc = 0x26A4BCu;
    {
        const bool branch_taken_0x26a4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4BCu;
        // 0x26a4c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4bc) {
            ctx->pc = 0x26A560u;
            goto label_26a560;
        }
    }
    ctx->pc = 0x26A4C4u;
label_26a4c4:
    // 0x26a4c4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x26a4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a4c8:
    // 0x26a4c8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x26a4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_26a4cc:
    // 0x26a4cc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x26a4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a4d0:
    // 0x26a4d0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x26a4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_26a4d4:
    // 0x26a4d4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x26a4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a4d8:
    // 0x26a4d8: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x26a4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_26a4dc:
    // 0x26a4dc: 0x87a2007e  lh          $v0, 0x7E($sp)
    ctx->pc = 0x26a4dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
label_26a4e0:
    // 0x26a4e0: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x26a4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_26a4e4:
    // 0x26a4e4: 0x92620005  lbu         $v0, 0x5($s3)
    ctx->pc = 0x26a4e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_26a4e8:
    // 0x26a4e8: 0xa20207d8  sb          $v0, 0x7D8($s0)
    ctx->pc = 0x26a4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2008), (uint8_t)GPR_U32(ctx, 2));
label_26a4ec:
    // 0x26a4ec: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x26a4ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_26a4f0:
    // 0x26a4f0: 0xa20207d9  sb          $v0, 0x7D9($s0)
    ctx->pc = 0x26a4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2009), (uint8_t)GPR_U32(ctx, 2));
label_26a4f4:
    // 0x26a4f4: 0x86620018  lh          $v0, 0x18($s3)
    ctx->pc = 0x26a4f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_26a4f8:
    // 0x26a4f8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_26a4fc:
    if (ctx->pc == 0x26A4FCu) {
        ctx->pc = 0x26A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4F8u;
        // 0x26a4fc: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A500u;
        goto label_26a500;
    }
    ctx->pc = 0x26A4F8u;
    {
        const bool branch_taken_0x26a4f8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x26A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A4F8u;
        // 0x26a4fc: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4f8) {
            ctx->pc = 0x26A510u;
            goto label_26a510;
        }
    }
    ctx->pc = 0x26A500u;
label_26a500:
    // 0x26a500: 0x2442ef40  addiu       $v0, $v0, -0x10C0
    ctx->pc = 0x26a500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963008));
label_26a504:
    // 0x26a504: 0xae0208d8  sw          $v0, 0x8D8($s0)
    ctx->pc = 0x26a504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2264), GPR_U32(ctx, 2));
label_26a508:
    // 0x26a508: 0x86620018  lh          $v0, 0x18($s3)
    ctx->pc = 0x26a508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_26a50c:
    // 0x26a50c: 0xae0208dc  sw          $v0, 0x8DC($s0)
    ctx->pc = 0x26a50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2268), GPR_U32(ctx, 2));
label_26a510:
    // 0x26a510: 0x8665001a  lh          $a1, 0x1A($s3)
    ctx->pc = 0x26a510u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
label_26a514:
    // 0x26a514: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
label_26a518:
    if (ctx->pc == 0x26A518u) {
        ctx->pc = 0x26A51Cu;
        goto label_26a51c;
    }
    ctx->pc = 0x26A514u;
    {
        const bool branch_taken_0x26a514 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x26a514) {
            ctx->pc = 0x26A530u;
            goto label_26a530;
        }
    }
    ctx->pc = 0x26A51Cu;
label_26a51c:
    // 0x26a51c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x26a51cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_26a520:
    // 0x26a520: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x26a520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_26a524:
    // 0x26a524: 0xc0e360c  jal         func_38D830
label_26a528:
    if (ctx->pc == 0x26A528u) {
        ctx->pc = 0x26A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A524u;
        // 0x26a528: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A52Cu;
        goto label_26a52c;
    }
    ctx->pc = 0x26A524u;
    SET_GPR_U32(ctx, 31, 0x26A52Cu);
    ctx->pc = 0x26A528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A524u;
    // 0x26a528: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x26A524u, 0x26A52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A52Cu;
label_26a52c:
    // 0x26a52c: 0x0  nop
    ctx->pc = 0x26a52cu;
    // NOP
label_26a530:
    // 0x26a530: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x26a530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_26a534:
    // 0x26a534: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x26a534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_26a538:
    // 0x26a538: 0x320f809  jalr        $t9
label_26a53c:
    if (ctx->pc == 0x26A53Cu) {
        ctx->pc = 0x26A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A538u;
        // 0x26a53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A540u;
        goto label_26a540;
    }
    ctx->pc = 0x26A538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26A540u);
        ctx->pc = 0x26A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A538u;
        // 0x26a53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A538u, 0x26A540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A540u;
label_26a540:
    // 0x26a540: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26a540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26a544:
    // 0x26a544: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26a544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a548:
    // 0x26a548: 0xa2050640  sb          $a1, 0x640($s0)
    ctx->pc = 0x26a548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 5));
label_26a54c:
    // 0x26a54c: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x26a54cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26a550:
    // 0x26a550: 0x7e0200d0  sq          $v0, 0xD0($s0)
    ctx->pc = 0x26a550u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 2));
label_26a554:
    // 0x26a554: 0x10000004  b           . + 4 + (0x4 << 2)
label_26a558:
    if (ctx->pc == 0x26A558u) {
        ctx->pc = 0x26A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A554u;
        // 0x26a558: 0xae0700dc  sw          $a3, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A55Cu;
        goto label_26a55c;
    }
    ctx->pc = 0x26A554u;
    {
        const bool branch_taken_0x26a554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A554u;
        // 0x26a558: 0xae0700dc  sw          $a3, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a554) {
            ctx->pc = 0x26A568u;
            goto label_26a568;
        }
    }
    ctx->pc = 0x26A55Cu;
label_26a55c:
    // 0x26a55c: 0x0  nop
    ctx->pc = 0x26a55cu;
    // NOP
label_26a560:
    // 0x26a560: 0x10000029  b           . + 4 + (0x29 << 2)
label_26a564:
    if (ctx->pc == 0x26A564u) {
        ctx->pc = 0x26A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A560u;
        // 0x26a564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A568u;
        goto label_26a568;
    }
    ctx->pc = 0x26A560u;
    {
        const bool branch_taken_0x26a560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A560u;
        // 0x26a564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a560) {
            ctx->pc = 0x26A608u;
            goto label_26a608;
        }
    }
    ctx->pc = 0x26A568u;
label_26a568:
    // 0x26a568: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x26a568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_26a56c:
    // 0x26a56c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_26a570:
    if (ctx->pc == 0x26A570u) {
        ctx->pc = 0x26A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A56Cu;
        // 0x26a570: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A574u;
        goto label_26a574;
    }
    ctx->pc = 0x26A56Cu;
    {
        const bool branch_taken_0x26a56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A56Cu;
        // 0x26a570: 0x3c010092  lui         $at, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a56c) {
            ctx->pc = 0x26A5E8u;
            goto label_26a5e8;
        }
    }
    ctx->pc = 0x26A574u;
label_26a574:
    // 0x26a574: 0x90222cb4  lbu         $v0, 0x2CB4($at)
    ctx->pc = 0x26a574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11444)));
label_26a578:
    // 0x26a578: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_26a57c:
    if (ctx->pc == 0x26A57Cu) {
        ctx->pc = 0x26A580u;
        goto label_26a580;
    }
    ctx->pc = 0x26A578u;
    {
        const bool branch_taken_0x26a578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a578) {
            ctx->pc = 0x26A5E8u;
            goto label_26a5e8;
        }
    }
    ctx->pc = 0x26A580u;
label_26a580:
    // 0x26a580: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_26a584:
    if (ctx->pc == 0x26A584u) {
        ctx->pc = 0x26A588u;
        goto label_26a588;
    }
    ctx->pc = 0x26A580u;
    {
        const bool branch_taken_0x26a580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a580) {
            ctx->pc = 0x26A5E8u;
            goto label_26a5e8;
        }
    }
    ctx->pc = 0x26A588u;
label_26a588:
    // 0x26a588: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x26a588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_26a58c:
    // 0x26a58c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26a58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26a590:
    // 0x26a590: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
label_26a594:
    if (ctx->pc == 0x26A594u) {
        ctx->pc = 0x26A598u;
        goto label_26a598;
    }
    ctx->pc = 0x26A590u;
    {
        const bool branch_taken_0x26a590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x26a590) {
            ctx->pc = 0x26A5E0u;
            goto label_26a5e0;
        }
    }
    ctx->pc = 0x26A598u;
label_26a598:
    // 0x26a598: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
label_26a59c:
    if (ctx->pc == 0x26A59Cu) {
        ctx->pc = 0x26A5A0u;
        goto label_26a5a0;
    }
    ctx->pc = 0x26A598u;
    {
        const bool branch_taken_0x26a598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x26a598) {
            ctx->pc = 0x26A5C0u;
            goto label_26a5c0;
        }
    }
    ctx->pc = 0x26A5A0u;
label_26a5a0:
    // 0x26a5a0: 0x10670007  beq         $v1, $a3, . + 4 + (0x7 << 2)
label_26a5a4:
    if (ctx->pc == 0x26A5A4u) {
        ctx->pc = 0x26A5A8u;
        goto label_26a5a8;
    }
    ctx->pc = 0x26A5A0u;
    {
        const bool branch_taken_0x26a5a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x26a5a0) {
            ctx->pc = 0x26A5C0u;
            goto label_26a5c0;
        }
    }
    ctx->pc = 0x26A5A8u;
label_26a5a8:
    // 0x26a5a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_26a5ac:
    if (ctx->pc == 0x26A5ACu) {
        ctx->pc = 0x26A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5A8u;
        // 0x26a5ac: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A5B0u;
        goto label_26a5b0;
    }
    ctx->pc = 0x26A5A8u;
    {
        const bool branch_taken_0x26a5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5A8u;
        // 0x26a5ac: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a5a8) {
            ctx->pc = 0x26A5C0u;
            goto label_26a5c0;
        }
    }
    ctx->pc = 0x26A5B0u;
label_26a5b0:
    // 0x26a5b0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_26a5b4:
    if (ctx->pc == 0x26A5B4u) {
        ctx->pc = 0x26A5B8u;
        goto label_26a5b8;
    }
    ctx->pc = 0x26A5B0u;
    {
        const bool branch_taken_0x26a5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a5b0) {
            ctx->pc = 0x26A5E8u;
            goto label_26a5e8;
        }
    }
    ctx->pc = 0x26A5B8u;
label_26a5b8:
    // 0x26a5b8: 0x1000000b  b           . + 4 + (0xB << 2)
label_26a5bc:
    if (ctx->pc == 0x26A5BCu) {
        ctx->pc = 0x26A5C0u;
        goto label_26a5c0;
    }
    ctx->pc = 0x26A5B8u;
    {
        const bool branch_taken_0x26a5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a5b8) {
            ctx->pc = 0x26A5E8u;
            goto label_26a5e8;
        }
    }
    ctx->pc = 0x26A5C0u;
label_26a5c0:
    // 0x26a5c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26a5c4:
    // 0x26a5c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26a5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26a5c8:
    // 0x26a5c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26a5c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a5cc:
    // 0x26a5cc: 0xc0b6b28  jal         func_2DACA0
label_26a5d0:
    if (ctx->pc == 0x26A5D0u) {
        ctx->pc = 0x26A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5CCu;
        // 0x26a5d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A5D4u;
        goto label_26a5d4;
    }
    ctx->pc = 0x26A5CCu;
    SET_GPR_U32(ctx, 31, 0x26A5D4u);
    ctx->pc = 0x26A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A5CCu;
    // 0x26a5d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DACA0u, 0x26A5CCu, 0x26A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A5D4u;
label_26a5d4:
    // 0x26a5d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_26a5d8:
    if (ctx->pc == 0x26A5D8u) {
        ctx->pc = 0x26A5DCu;
        goto label_26a5dc;
    }
    ctx->pc = 0x26A5D4u;
    {
        const bool branch_taken_0x26a5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a5d4) {
            ctx->pc = 0x26A5E8u;
            goto label_26a5e8;
        }
    }
    ctx->pc = 0x26A5DCu;
label_26a5dc:
    // 0x26a5dc: 0x0  nop
    ctx->pc = 0x26a5dcu;
    // NOP
label_26a5e0:
    // 0x26a5e0: 0xc0b6b28  jal         func_2DACA0
label_26a5e4:
    if (ctx->pc == 0x26A5E4u) {
        ctx->pc = 0x26A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5E0u;
        // 0x26a5e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A5E8u;
        goto label_26a5e8;
    }
    ctx->pc = 0x26A5E0u;
    SET_GPR_U32(ctx, 31, 0x26A5E8u);
    ctx->pc = 0x26A5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A5E0u;
    // 0x26a5e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DACA0u, 0x26A5E0u, 0x26A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A5E8u;
label_26a5e8:
    // 0x26a5e8: 0x92680008  lbu         $t0, 0x8($s3)
    ctx->pc = 0x26a5e8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_26a5ec:
    // 0x26a5ec: 0x92660007  lbu         $a2, 0x7($s3)
    ctx->pc = 0x26a5ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_26a5f0:
    // 0x26a5f0: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x26a5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
label_26a5f4:
    // 0x26a5f4: 0x92670009  lbu         $a3, 0x9($s3)
    ctx->pc = 0x26a5f4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
label_26a5f8:
    // 0x26a5f8: 0xc0b273c  jal         func_2C9CF0
label_26a5fc:
    if (ctx->pc == 0x26A5FCu) {
        ctx->pc = 0x26A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A5F8u;
        // 0x26a5fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A600u;
        goto label_26a600;
    }
    ctx->pc = 0x26A5F8u;
    SET_GPR_U32(ctx, 31, 0x26A600u);
    ctx->pc = 0x26A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A5F8u;
    // 0x26a5fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CF0u, 0x26A5F8u, 0x26A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A600u;
label_26a600:
    // 0x26a600: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26a600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a604:
    // 0x26a604: 0x0  nop
    ctx->pc = 0x26a604u;
    // NOP
label_26a608:
    // 0x26a608: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26a608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26a60c:
    // 0x26a60c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26a60cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26a610:
    // 0x26a610: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26a610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26a614:
    // 0x26a614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26a618:
    // 0x26a618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26a61c:
    // 0x26a61c: 0x3e00008  jr          $ra
label_26a620:
    if (ctx->pc == 0x26A620u) {
        ctx->pc = 0x26A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A61Cu;
        // 0x26a620: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A624u;
        goto label_fallthrough_0x26a61c;
    }
    ctx->pc = 0x26A61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A61Cu;
        // 0x26a620: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26a61c:
    ctx->pc = 0x26A624u;
}
