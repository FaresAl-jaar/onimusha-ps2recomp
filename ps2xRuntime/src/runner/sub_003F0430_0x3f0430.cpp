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

// Function: sub_003F0430
// Address: 0x3f0430 - 0x3f06fc
void sub_003F0430_0x3f0430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0430_0x3f0430");
#endif

    switch (ctx->pc) {
        case 0x3f0430u: goto label_3f0430;
        case 0x3f0434u: goto label_3f0434;
        case 0x3f0438u: goto label_3f0438;
        case 0x3f043cu: goto label_3f043c;
        case 0x3f0440u: goto label_3f0440;
        case 0x3f0444u: goto label_3f0444;
        case 0x3f0448u: goto label_3f0448;
        case 0x3f044cu: goto label_3f044c;
        case 0x3f0450u: goto label_3f0450;
        case 0x3f0454u: goto label_3f0454;
        case 0x3f0458u: goto label_3f0458;
        case 0x3f045cu: goto label_3f045c;
        case 0x3f0460u: goto label_3f0460;
        case 0x3f0464u: goto label_3f0464;
        case 0x3f0468u: goto label_3f0468;
        case 0x3f046cu: goto label_3f046c;
        case 0x3f0470u: goto label_3f0470;
        case 0x3f0474u: goto label_3f0474;
        case 0x3f0478u: goto label_3f0478;
        case 0x3f047cu: goto label_3f047c;
        case 0x3f0480u: goto label_3f0480;
        case 0x3f0484u: goto label_3f0484;
        case 0x3f0488u: goto label_3f0488;
        case 0x3f048cu: goto label_3f048c;
        case 0x3f0490u: goto label_3f0490;
        case 0x3f0494u: goto label_3f0494;
        case 0x3f0498u: goto label_3f0498;
        case 0x3f049cu: goto label_3f049c;
        case 0x3f04a0u: goto label_3f04a0;
        case 0x3f04a4u: goto label_3f04a4;
        case 0x3f04a8u: goto label_3f04a8;
        case 0x3f04acu: goto label_3f04ac;
        case 0x3f04b0u: goto label_3f04b0;
        case 0x3f04b4u: goto label_3f04b4;
        case 0x3f04b8u: goto label_3f04b8;
        case 0x3f04bcu: goto label_3f04bc;
        case 0x3f04c0u: goto label_3f04c0;
        case 0x3f04c4u: goto label_3f04c4;
        case 0x3f04c8u: goto label_3f04c8;
        case 0x3f04ccu: goto label_3f04cc;
        case 0x3f04d0u: goto label_3f04d0;
        case 0x3f04d4u: goto label_3f04d4;
        case 0x3f04d8u: goto label_3f04d8;
        case 0x3f04dcu: goto label_3f04dc;
        case 0x3f04e0u: goto label_3f04e0;
        case 0x3f04e4u: goto label_3f04e4;
        case 0x3f04e8u: goto label_3f04e8;
        case 0x3f04ecu: goto label_3f04ec;
        case 0x3f04f0u: goto label_3f04f0;
        case 0x3f04f4u: goto label_3f04f4;
        case 0x3f04f8u: goto label_3f04f8;
        case 0x3f04fcu: goto label_3f04fc;
        case 0x3f0500u: goto label_3f0500;
        case 0x3f0504u: goto label_3f0504;
        case 0x3f0508u: goto label_3f0508;
        case 0x3f050cu: goto label_3f050c;
        case 0x3f0510u: goto label_3f0510;
        case 0x3f0514u: goto label_3f0514;
        case 0x3f0518u: goto label_3f0518;
        case 0x3f051cu: goto label_3f051c;
        case 0x3f0520u: goto label_3f0520;
        case 0x3f0524u: goto label_3f0524;
        case 0x3f0528u: goto label_3f0528;
        case 0x3f052cu: goto label_3f052c;
        case 0x3f0530u: goto label_3f0530;
        case 0x3f0534u: goto label_3f0534;
        case 0x3f0538u: goto label_3f0538;
        case 0x3f053cu: goto label_3f053c;
        case 0x3f0540u: goto label_3f0540;
        case 0x3f0544u: goto label_3f0544;
        case 0x3f0548u: goto label_3f0548;
        case 0x3f054cu: goto label_3f054c;
        case 0x3f0550u: goto label_3f0550;
        case 0x3f0554u: goto label_3f0554;
        case 0x3f0558u: goto label_3f0558;
        case 0x3f055cu: goto label_3f055c;
        case 0x3f0560u: goto label_3f0560;
        case 0x3f0564u: goto label_3f0564;
        case 0x3f0568u: goto label_3f0568;
        case 0x3f056cu: goto label_3f056c;
        case 0x3f0570u: goto label_3f0570;
        case 0x3f0574u: goto label_3f0574;
        case 0x3f0578u: goto label_3f0578;
        case 0x3f057cu: goto label_3f057c;
        case 0x3f0580u: goto label_3f0580;
        case 0x3f0584u: goto label_3f0584;
        case 0x3f0588u: goto label_3f0588;
        case 0x3f058cu: goto label_3f058c;
        case 0x3f0590u: goto label_3f0590;
        case 0x3f0594u: goto label_3f0594;
        case 0x3f0598u: goto label_3f0598;
        case 0x3f059cu: goto label_3f059c;
        case 0x3f05a0u: goto label_3f05a0;
        case 0x3f05a4u: goto label_3f05a4;
        case 0x3f05a8u: goto label_3f05a8;
        case 0x3f05acu: goto label_3f05ac;
        case 0x3f05b0u: goto label_3f05b0;
        case 0x3f05b4u: goto label_3f05b4;
        case 0x3f05b8u: goto label_3f05b8;
        case 0x3f05bcu: goto label_3f05bc;
        case 0x3f05c0u: goto label_3f05c0;
        case 0x3f05c4u: goto label_3f05c4;
        case 0x3f05c8u: goto label_3f05c8;
        case 0x3f05ccu: goto label_3f05cc;
        case 0x3f05d0u: goto label_3f05d0;
        case 0x3f05d4u: goto label_3f05d4;
        case 0x3f05d8u: goto label_3f05d8;
        case 0x3f05dcu: goto label_3f05dc;
        case 0x3f05e0u: goto label_3f05e0;
        case 0x3f05e4u: goto label_3f05e4;
        case 0x3f05e8u: goto label_3f05e8;
        case 0x3f05ecu: goto label_3f05ec;
        case 0x3f05f0u: goto label_3f05f0;
        case 0x3f05f4u: goto label_3f05f4;
        case 0x3f05f8u: goto label_3f05f8;
        case 0x3f05fcu: goto label_3f05fc;
        case 0x3f0600u: goto label_3f0600;
        case 0x3f0604u: goto label_3f0604;
        case 0x3f0608u: goto label_3f0608;
        case 0x3f060cu: goto label_3f060c;
        case 0x3f0610u: goto label_3f0610;
        case 0x3f0614u: goto label_3f0614;
        case 0x3f0618u: goto label_3f0618;
        case 0x3f061cu: goto label_3f061c;
        case 0x3f0620u: goto label_3f0620;
        case 0x3f0624u: goto label_3f0624;
        case 0x3f0628u: goto label_3f0628;
        case 0x3f062cu: goto label_3f062c;
        case 0x3f0630u: goto label_3f0630;
        case 0x3f0634u: goto label_3f0634;
        case 0x3f0638u: goto label_3f0638;
        case 0x3f063cu: goto label_3f063c;
        case 0x3f0640u: goto label_3f0640;
        case 0x3f0644u: goto label_3f0644;
        case 0x3f0648u: goto label_3f0648;
        case 0x3f064cu: goto label_3f064c;
        case 0x3f0650u: goto label_3f0650;
        case 0x3f0654u: goto label_3f0654;
        case 0x3f0658u: goto label_3f0658;
        case 0x3f065cu: goto label_3f065c;
        case 0x3f0660u: goto label_3f0660;
        case 0x3f0664u: goto label_3f0664;
        case 0x3f0668u: goto label_3f0668;
        case 0x3f066cu: goto label_3f066c;
        case 0x3f0670u: goto label_3f0670;
        case 0x3f0674u: goto label_3f0674;
        case 0x3f0678u: goto label_3f0678;
        case 0x3f067cu: goto label_3f067c;
        case 0x3f0680u: goto label_3f0680;
        case 0x3f0684u: goto label_3f0684;
        case 0x3f0688u: goto label_3f0688;
        case 0x3f068cu: goto label_3f068c;
        case 0x3f0690u: goto label_3f0690;
        case 0x3f0694u: goto label_3f0694;
        case 0x3f0698u: goto label_3f0698;
        case 0x3f069cu: goto label_3f069c;
        case 0x3f06a0u: goto label_3f06a0;
        case 0x3f06a4u: goto label_3f06a4;
        case 0x3f06a8u: goto label_3f06a8;
        case 0x3f06acu: goto label_3f06ac;
        case 0x3f06b0u: goto label_3f06b0;
        case 0x3f06b4u: goto label_3f06b4;
        case 0x3f06b8u: goto label_3f06b8;
        case 0x3f06bcu: goto label_3f06bc;
        case 0x3f06c0u: goto label_3f06c0;
        case 0x3f06c4u: goto label_3f06c4;
        case 0x3f06c8u: goto label_3f06c8;
        case 0x3f06ccu: goto label_3f06cc;
        case 0x3f06d0u: goto label_3f06d0;
        case 0x3f06d4u: goto label_3f06d4;
        case 0x3f06d8u: goto label_3f06d8;
        case 0x3f06dcu: goto label_3f06dc;
        case 0x3f06e0u: goto label_3f06e0;
        case 0x3f06e4u: goto label_3f06e4;
        case 0x3f06e8u: goto label_3f06e8;
        case 0x3f06ecu: goto label_3f06ec;
        case 0x3f06f0u: goto label_3f06f0;
        case 0x3f06f4u: goto label_3f06f4;
        case 0x3f06f8u: goto label_3f06f8;
        default: break;
    }

    ctx->pc = 0x3f0430u;

label_3f0430:
    // 0x3f0430: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3f0430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_3f0434:
    // 0x3f0434: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f0434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f0438:
    // 0x3f0438: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x3f0438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3f043c:
    // 0x3f043c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f043cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f0440:
    // 0x3f0440: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x3f0440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3f0444:
    // 0x3f0444: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f0444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f0448:
    // 0x3f0448: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x3f0448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3f044c:
    // 0x3f044c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f0450:
    // 0x3f0450: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3f0450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3f0454:
    // 0x3f0454: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f0454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f0458:
    // 0x3f0458: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3f0458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3f045c:
    // 0x3f045c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f0460:
    // 0x3f0460: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3f0460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f0464:
    // 0x3f0464: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f0464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f0468:
    // 0x3f0468: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f0468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f046c:
    // 0x3f046c: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x3f046cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_3f0470:
    // 0x3f0470: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3f0470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3f0474:
    // 0x3f0474: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x3f0474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_3f0478:
    // 0x3f0478: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x3f0478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_3f047c:
    // 0x3f047c: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x3f047cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_3f0480:
    // 0x3f0480: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3f0480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f0484:
    // 0x3f0484: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3f0484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f0488:
    // 0x3f0488: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3f0488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f048c:
    // 0x3f048c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3f048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0490:
    // 0x3f0490: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x3f0490u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3f0494:
    // 0x3f0494: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3f0494u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3f0498:
    // 0x3f0498: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3f0498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3f049c:
    // 0x3f049c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3f049cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3f04a0:
    // 0x3f04a0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3f04a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f04a4:
    // 0x3f04a4: 0xc09d210  jal         func_274840
label_3f04a8:
    if (ctx->pc == 0x3F04A8u) {
        ctx->pc = 0x3F04A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F04A4u;
        // 0x3f04a8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F04ACu;
        goto label_3f04ac;
    }
    ctx->pc = 0x3F04A4u;
    SET_GPR_U32(ctx, 31, 0x3F04ACu);
    ctx->pc = 0x3F04A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F04A4u;
    // 0x3f04a8: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274840u, 0x3F04A4u, 0x3F04ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F04ACu;
label_3f04ac:
    // 0x3f04ac: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x3f04acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f04b0:
    // 0x3f04b0: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3f04b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_3f04b4:
    // 0x3f04b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f04b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f04b8:
    // 0x3f04b8: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x3f04b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_3f04bc:
    // 0x3f04bc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3f04bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3f04c0:
    // 0x3f04c0: 0x2406021b  addiu       $a2, $zero, 0x21B
    ctx->pc = 0x3f04c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 539));
label_3f04c4:
    // 0x3f04c4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3f04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3f04c8:
    // 0x3f04c8: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x3f04c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3f04cc:
    // 0x3f04cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f04ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f04d0:
    // 0x3f04d0: 0x0  nop
    ctx->pc = 0x3f04d0u;
    // NOP
label_3f04d4:
    // 0x3f04d4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3f04d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3f04d8:
    // 0x3f04d8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3f04d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3f04dc:
    // 0x3f04dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f04dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f04e0:
    // 0x3f04e0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3f04e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3f04e4:
    // 0x3f04e4: 0x0  nop
    ctx->pc = 0x3f04e4u;
    // NOP
label_3f04e8:
    // 0x3f04e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3f04e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3f04ec:
    // 0x3f04ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f04ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f04f0:
    // 0x3f04f0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3f04f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_3f04f4:
    // 0x3f04f4: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x3f04f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
label_3f04f8:
    // 0x3f04f8: 0xc09d1e0  jal         func_274780
label_3f04fc:
    if (ctx->pc == 0x3F04FCu) {
        ctx->pc = 0x3F04FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F04F8u;
        // 0x3f04fc: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0500u;
        goto label_3f0500;
    }
    ctx->pc = 0x3F04F8u;
    SET_GPR_U32(ctx, 31, 0x3F0500u);
    ctx->pc = 0x3F04FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F04F8u;
    // 0x3f04fc: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274780u, 0x3F04F8u, 0x3F0500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0500u;
label_3f0500:
    // 0x3f0500: 0xc09d19c  jal         func_274670
label_3f0504:
    if (ctx->pc == 0x3F0504u) {
        ctx->pc = 0x3F0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0500u;
        // 0x3f0504: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0508u;
        goto label_3f0508;
    }
    ctx->pc = 0x3F0500u;
    SET_GPR_U32(ctx, 31, 0x3F0508u);
    ctx->pc = 0x3F0504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0500u;
    // 0x3f0504: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274670u, 0x3F0500u, 0x3F0508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0508u;
label_3f0508:
    // 0x3f0508: 0x8c5904d4  lw          $t9, 0x4D4($v0)
    ctx->pc = 0x3f0508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1236)));
label_3f050c:
    // 0x3f050c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f050cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0510:
    // 0x3f0510: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3f0510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3f0514:
    // 0x3f0514: 0x320f809  jalr        $t9
label_3f0518:
    if (ctx->pc == 0x3F0518u) {
        ctx->pc = 0x3F0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0514u;
        // 0x3f0518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F051Cu;
        goto label_3f051c;
    }
    ctx->pc = 0x3F0514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F051Cu);
        ctx->pc = 0x3F0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0514u;
        // 0x3f0518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0514u, 0x3F051Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F051Cu;
label_3f051c:
    // 0x3f051c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x3f051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0520:
    // 0x3f0520: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3f0520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_3f0524:
    // 0x3f0524: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f0524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0528:
    // 0x3f0528: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3f0528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_3f052c:
    // 0x3f052c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f052cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0530:
    // 0x3f0530: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3f0530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3f0534:
    // 0x3f0534: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3f0534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3f0538:
    // 0x3f0538: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f0538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f053c:
    // 0x3f053c: 0x0  nop
    ctx->pc = 0x3f053cu;
    // NOP
label_3f0540:
    // 0x3f0540: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3f0540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3f0544:
    // 0x3f0544: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3f0544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
label_3f0548:
    // 0x3f0548: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3f0548u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3f054c:
    // 0x3f054c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f054cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f0550:
    // 0x3f0550: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3f0550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3f0554:
    // 0x3f0554: 0x0  nop
    ctx->pc = 0x3f0554u;
    // NOP
label_3f0558:
    // 0x3f0558: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x3f0558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
label_3f055c:
    // 0x3f055c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3f055cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_3f0560:
    // 0x3f0560: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x3f0560u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
label_3f0564:
    // 0x3f0564: 0xa60600c0  sh          $a2, 0xC0($s0)
    ctx->pc = 0x3f0564u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 6));
label_3f0568:
    // 0x3f0568: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x3f0568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f056c:
    // 0x3f056c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3f056cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3f0570:
    // 0x3f0570: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3f0570u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3f0574:
    // 0x3f0574: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f0574u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f0578:
    // 0x3f0578: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3f0578u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3f057c:
    // 0x3f057c: 0x0  nop
    ctx->pc = 0x3f057cu;
    // NOP
label_3f0580:
    // 0x3f0580: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x3f0580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
label_3f0584:
    // 0x3f0584: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3f0584u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_3f0588:
    // 0x3f0588: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x3f0588u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
label_3f058c:
    // 0x3f058c: 0xa60600c4  sh          $a2, 0xC4($s0)
    ctx->pc = 0x3f058cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 196), (uint16_t)GPR_U32(ctx, 6));
label_3f0590:
    // 0x3f0590: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x3f0590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_3f0594:
    // 0x3f0594: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x3f0594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_3f0598:
    // 0x3f0598: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x3f0598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_3f059c:
    // 0x3f059c: 0xc0d04c0  jal         func_341300
label_3f05a0:
    if (ctx->pc == 0x3F05A0u) {
        ctx->pc = 0x3F05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F059Cu;
        // 0x3f05a0: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F05A4u;
        goto label_3f05a4;
    }
    ctx->pc = 0x3F059Cu;
    SET_GPR_U32(ctx, 31, 0x3F05A4u);
    ctx->pc = 0x3F05A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F059Cu;
    // 0x3f05a0: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341300u, 0x3F059Cu, 0x3F05A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F05A4u;
label_3f05a4:
    // 0x3f05a4: 0x8e10004c  lw          $s0, 0x4C($s0)
    ctx->pc = 0x3f05a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3f05a8:
    // 0x3f05a8: 0xc0d168c  jal         func_345A30
label_3f05ac:
    if (ctx->pc == 0x3F05ACu) {
        ctx->pc = 0x3F05ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F05A8u;
        // 0x3f05ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F05B0u;
        goto label_3f05b0;
    }
    ctx->pc = 0x3F05A8u;
    SET_GPR_U32(ctx, 31, 0x3F05B0u);
    ctx->pc = 0x3F05ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F05A8u;
    // 0x3f05ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345A30u, 0x3F05A8u, 0x3F05B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F05B0u;
label_3f05b0:
    // 0x3f05b0: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x3f05b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3f05b4:
    // 0x3f05b4: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x3f05b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
label_3f05b8:
    // 0x3f05b8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3f05b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_3f05bc:
    // 0x3f05bc: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x3f05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_3f05c0:
    // 0x3f05c0: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x3f05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3f05c4:
    // 0x3f05c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3f05c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3f05c8:
    // 0x3f05c8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3f05c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f05cc:
    // 0x3f05cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3f05ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3f05d0:
    // 0x3f05d0: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x3f05d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
label_3f05d4:
    // 0x3f05d4: 0x2484ea90  addiu       $a0, $a0, -0x1570
    ctx->pc = 0x3f05d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
label_3f05d8:
    // 0x3f05d8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x3f05d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3f05dc:
    // 0x3f05dc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3f05dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3f05e0:
    // 0x3f05e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3f05e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3f05e4:
    // 0x3f05e4: 0xc0c8a34  jal         func_3228D0
label_3f05e8:
    if (ctx->pc == 0x3F05E8u) {
        ctx->pc = 0x3F05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F05E4u;
        // 0x3f05e8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F05ECu;
        goto label_3f05ec;
    }
    ctx->pc = 0x3F05E4u;
    SET_GPR_U32(ctx, 31, 0x3F05ECu);
    ctx->pc = 0x3F05E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F05E4u;
    // 0x3f05e8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228D0u, 0x3F05E4u, 0x3F05ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F05ECu;
label_3f05ec:
    // 0x3f05ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f05ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f05f0:
    // 0x3f05f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3f05f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3f05f4:
    // 0x3f05f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3f05f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3f05f8:
    // 0x3f05f8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x3f05f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3f05fc:
    // 0x3f05fc: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x3f05fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
label_3f0600:
    // 0x3f0600: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3f0600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3f0604:
    // 0x3f0604: 0x2463ea90  addiu       $v1, $v1, -0x1570
    ctx->pc = 0x3f0604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961808));
label_3f0608:
    // 0x3f0608: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3f0608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_3f060c:
    // 0x3f060c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x3f060cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3f0610:
    // 0x3f0610: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3f0610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f0614:
    // 0x3f0614: 0xc0c83cc  jal         func_320F30
label_3f0618:
    if (ctx->pc == 0x3F0618u) {
        ctx->pc = 0x3F0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0614u;
        // 0x3f0618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F061Cu;
        goto label_3f061c;
    }
    ctx->pc = 0x3F0614u;
    SET_GPR_U32(ctx, 31, 0x3F061Cu);
    ctx->pc = 0x3F0618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0614u;
    // 0x3f0618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320F30u, 0x3F0614u, 0x3F061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F061Cu;
label_3f061c:
    // 0x3f061c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f061cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0620:
    // 0x3f0620: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f0620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0624:
    // 0x3f0624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f0624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0628:
    // 0x3f0628: 0xc0c8020  jal         func_320080
label_3f062c:
    if (ctx->pc == 0x3F062Cu) {
        ctx->pc = 0x3F062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0628u;
        // 0x3f062c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0630u;
        goto label_3f0630;
    }
    ctx->pc = 0x3F0628u;
    SET_GPR_U32(ctx, 31, 0x3F0630u);
    ctx->pc = 0x3F062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0628u;
    // 0x3f062c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320080u, 0x3F0628u, 0x3F0630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0630u;
label_3f0630:
    // 0x3f0630: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3f0630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3f0634:
    // 0x3f0634: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x3f0634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_3f0638:
    // 0x3f0638: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x3f0638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
label_3f063c:
    // 0x3f063c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f063cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0640:
    // 0x3f0640: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3f0640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3f0644:
    // 0x3f0644: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3f0644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f0648:
    // 0x3f0648: 0xc0c8340  jal         func_320D00
label_3f064c:
    if (ctx->pc == 0x3F064Cu) {
        ctx->pc = 0x3F064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0648u;
        // 0x3f064c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0650u;
        goto label_3f0650;
    }
    ctx->pc = 0x3F0648u;
    SET_GPR_U32(ctx, 31, 0x3F0650u);
    ctx->pc = 0x3F064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0648u;
    // 0x3f064c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320D00u, 0x3F0648u, 0x3F0650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0650u;
label_3f0650:
    // 0x3f0650: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3f0650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3f0654:
    // 0x3f0654: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3f0654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_3f0658:
    // 0x3f0658: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x3f0658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_3f065c:
    // 0x3f065c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3f065cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f0660:
    // 0x3f0660: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3f0660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_3f0664:
    // 0x3f0664: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x3f0664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3f0668:
    // 0x3f0668: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3f0668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f066c:
    // 0x3f066c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3f066cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3f0670:
    // 0x3f0670: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3f0670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3f0674:
    // 0x3f0674: 0xc0414ca  jal         func_105328
label_3f0678:
    if (ctx->pc == 0x3F0678u) {
        ctx->pc = 0x3F0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0674u;
        // 0x3f0678: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F067Cu;
        goto label_3f067c;
    }
    ctx->pc = 0x3F0674u;
    SET_GPR_U32(ctx, 31, 0x3F067Cu);
    ctx->pc = 0x3F0678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0674u;
    // 0x3f0678: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3F0674u, 0x3F067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F067Cu;
label_3f067c:
    // 0x3f067c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3f067cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3f0680:
    // 0x3f0680: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3f0680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3f0684:
    // 0x3f0684: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x3f0684u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3f0688:
    // 0x3f0688: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3f0688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3f068c:
    // 0x3f068c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3f068cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_3f0690:
    // 0x3f0690: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x3f0690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3f0694:
    // 0x3f0694: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3f0694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3f0698:
    // 0x3f0698: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x3f0698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
label_3f069c:
    // 0x3f069c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3f069cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3f06a0:
    // 0x3f06a0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3f06a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3f06a4:
    // 0x3f06a4: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x3f06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
label_3f06a8:
    // 0x3f06a8: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x3f06a8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_3f06ac:
    // 0x3f06ac: 0x2442ea90  addiu       $v0, $v0, -0x1570
    ctx->pc = 0x3f06acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
label_3f06b0:
    // 0x3f06b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f06b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f06b4:
    // 0x3f06b4: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x3f06b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_3f06b8:
    // 0x3f06b8: 0x70e01628  paddub      $v0, $a3, $zero
    ctx->pc = 0x3f06b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
label_3f06bc:
    // 0x3f06bc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3f06bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_3f06c0:
    // 0x3f06c0: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3f06c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f06c4:
    // 0x3f06c4: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f06c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f06c8:
    // 0x3f06c8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3f06c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f06cc:
    // 0x3f06cc: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3f06ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f06d0:
    // 0x3f06d0: 0xe6030050  swc1        $f3, 0x50($s0)
    ctx->pc = 0x3f06d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_3f06d4:
    // 0x3f06d4: 0xe6020054  swc1        $f2, 0x54($s0)
    ctx->pc = 0x3f06d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_3f06d8:
    // 0x3f06d8: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x3f06d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_3f06dc:
    // 0x3f06dc: 0xc0cfd08  jal         func_33F420
label_3f06e0:
    if (ctx->pc == 0x3F06E0u) {
        ctx->pc = 0x3F06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F06DCu;
        // 0x3f06e0: 0xe600005c  swc1        $f0, 0x5C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F06E4u;
        goto label_3f06e4;
    }
    ctx->pc = 0x3F06DCu;
    SET_GPR_U32(ctx, 31, 0x3F06E4u);
    ctx->pc = 0x3F06E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F06DCu;
    // 0x3f06e0: 0xe600005c  swc1        $f0, 0x5C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F420u, 0x3F06DCu, 0x3F06E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F06E4u;
label_3f06e4:
    // 0x3f06e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f06e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f06e8:
    // 0x3f06e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f06e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f06ec:
    // 0x3f06ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f06ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f06f0:
    // 0x3f06f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f06f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f06f4:
    // 0x3f06f4: 0x3e00008  jr          $ra
label_3f06f8:
    if (ctx->pc == 0x3F06F8u) {
        ctx->pc = 0x3F06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F06F4u;
        // 0x3f06f8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F06FCu;
        goto label_fallthrough_0x3f06f4;
    }
    ctx->pc = 0x3F06F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F06F4u;
        // 0x3f06f8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F06F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f06f4:
    ctx->pc = 0x3F06FCu;
}
