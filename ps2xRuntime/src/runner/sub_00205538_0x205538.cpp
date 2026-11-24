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

// Function: sub_00205538
// Address: 0x205538 - 0x2056ec
void sub_00205538_0x205538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205538_0x205538");
#endif

    switch (ctx->pc) {
        case 0x205560u: goto label_205560;
        case 0x205574u: goto label_205574;
        case 0x2055d0u: goto label_2055d0;
        case 0x2055d8u: goto label_2055d8;
        case 0x2055fcu: goto label_2055fc;
        case 0x205604u: goto label_205604;
        case 0x20560cu: goto label_20560c;
        case 0x205614u: goto label_205614;
        case 0x20561cu: goto label_20561c;
        case 0x20562cu: goto label_20562c;
        case 0x205638u: goto label_205638;
        case 0x205640u: goto label_205640;
        case 0x205678u: goto label_205678;
        case 0x20568cu: goto label_20568c;
        case 0x2056a0u: goto label_2056a0;
        case 0x2056a8u: goto label_2056a8;
        case 0x2056b8u: goto label_2056b8;
        case 0x2056c0u: goto label_2056c0;
        case 0x2056c8u: goto label_2056c8;
        default: break;
    }

    ctx->pc = 0x205538u;

    // 0x205538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x205538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20553c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20553cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x205540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x205540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205544: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x205544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x205548: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x205548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20554c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20554Cu;
    {
        const bool branch_taken_0x20554c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x205550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20554Cu;
        // 0x205550: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20554c) {
            ctx->pc = 0x205568u;
            goto label_205568;
        }
    }
    ctx->pc = 0x205554u;
    // 0x205554: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x205554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x205558: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x205558u;
    SET_GPR_U32(ctx, 31, 0x205560u);
    ctx->pc = 0x20555Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205558u;
    // 0x20555c: 0x24846e70  addiu       $a0, $a0, 0x6E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x205558u, 0x205560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205560u;
label_205560:
    // 0x205560: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x205560u;
    {
        const bool branch_taken_0x205560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205560u;
        // 0x205564: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205560) {
            ctx->pc = 0x2056DCu;
            goto label_2056dc;
        }
    }
    ctx->pc = 0x205568u;
label_205568:
    // 0x205568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x205568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20556c: 0xc049590  jal         func_125640
    ctx->pc = 0x20556Cu;
    SET_GPR_U32(ctx, 31, 0x205574u);
    ctx->pc = 0x205570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20556Cu;
    // 0x205570: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x20556Cu, 0x205574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205574u;
label_205574:
    // 0x205574: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x205574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205578: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x205578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
    // 0x20557c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x20557cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x205580: 0x246378d8  addiu       $v1, $v1, 0x78D8
    ctx->pc = 0x205580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30936));
    // 0x205584: 0x24426dd0  addiu       $v0, $v0, 0x6DD0
    ctx->pc = 0x205584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28112));
    // 0x205588: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x205588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20558c: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x20558cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x205590: 0x8e0a001c  lw          $t2, 0x1C($s0)
    ctx->pc = 0x205590u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x205594: 0x8e090004  lw          $t1, 0x4($s0)
    ctx->pc = 0x205594u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x205598: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x205598u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20559c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x20559cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2055a0: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2055a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2055a4: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x2055a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2055a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2055a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8778D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8778D8u, _value); } while (0);
    // 0x2055ac: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x2055acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x2055b0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2055b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2055b4: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x2055b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x2055b8: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x2055b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x2055bc: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x2055bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x2055c0: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x2055c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x2055c4: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x2055c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x2055c8: 0xc082d5e  jal         func_20B578
    ctx->pc = 0x2055C8u;
    SET_GPR_U32(ctx, 31, 0x2055D0u);
    ctx->pc = 0x2055CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2055C8u;
    // 0x2055cc: 0xafaa001c  sw          $t2, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B578u, 0x2055C8u, 0x2055D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2055D0u;
label_2055d0:
    // 0x2055d0: 0xc081abe  jal         func_206AF8
    ctx->pc = 0x2055D0u;
    SET_GPR_U32(ctx, 31, 0x2055D8u);
    ctx->pc = 0x206AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206AF8u, 0x2055D0u, 0x2055D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2055D8u;
label_2055d8:
    // 0x2055d8: 0x8e2486d8  lw          $a0, -0x7928($s1)
    ctx->pc = 0x2055d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936280)));
    // 0x2055dc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2055dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2055e0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2055e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2055e4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x2055e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2055e8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2055e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2055ec: 0x14800036  bnez        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2055ECu;
    {
        const bool branch_taken_0x2055ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2055F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2055ECu;
        // 0x2055f0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2055ec) {
            ctx->pc = 0x2056C8u;
            goto label_2056c8;
        }
    }
    ctx->pc = 0x2055F4u;
    // 0x2055f4: 0xc08c9b6  jal         func_2326D8
    ctx->pc = 0x2055F4u;
    SET_GPR_U32(ctx, 31, 0x2055FCu);
    ctx->pc = 0x2326D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326D8u, 0x2055F4u, 0x2055FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2055FCu;
label_2055fc:
    // 0x2055fc: 0xc0941ec  jal         func_2507B0
    ctx->pc = 0x2055FCu;
    SET_GPR_U32(ctx, 31, 0x205604u);
    ctx->pc = 0x2507B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2507B0u, 0x2055FCu, 0x205604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205604u;
label_205604:
    // 0x205604: 0xc093f66  jal         func_24FD98
    ctx->pc = 0x205604u;
    SET_GPR_U32(ctx, 31, 0x20560Cu);
    ctx->pc = 0x24FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD98u, 0x205604u, 0x20560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20560Cu;
label_20560c:
    // 0x20560c: 0xc0944ee  jal         func_2513B8
    ctx->pc = 0x20560Cu;
    SET_GPR_U32(ctx, 31, 0x205614u);
    ctx->pc = 0x2513B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513B8u, 0x20560Cu, 0x205614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205614u;
label_205614:
    // 0x205614: 0xc083202  jal         func_20C808
    ctx->pc = 0x205614u;
    SET_GPR_U32(ctx, 31, 0x20561Cu);
    ctx->pc = 0x20C808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C808u, 0x205614u, 0x20561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20561Cu;
label_20561c:
    // 0x20561c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20561Cu;
    {
        const bool branch_taken_0x20561c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20561c) {
            ctx->pc = 0x205638u;
            goto label_205638;
        }
    }
    ctx->pc = 0x205624u;
    // 0x205624: 0xc08168c  jal         func_205A30
    ctx->pc = 0x205624u;
    SET_GPR_U32(ctx, 31, 0x20562Cu);
    ctx->pc = 0x205628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205624u;
    // 0x205628: 0x2404ff9b  addiu       $a0, $zero, -0x65 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x205624u, 0x20562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20562Cu;
label_20562c:
    // 0x20562c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x20562cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x205630: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x205630u;
    SET_GPR_U32(ctx, 31, 0x205638u);
    ctx->pc = 0x205634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205630u;
    // 0x205634: 0x24846e98  addiu       $a0, $a0, 0x6E98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x205630u, 0x205638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205638u;
label_205638:
    // 0x205638: 0xc0815d4  jal         func_205750
    ctx->pc = 0x205638u;
    SET_GPR_U32(ctx, 31, 0x205640u);
    ctx->pc = 0x20563Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205638u;
    // 0x20563c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205750u, 0x205638u, 0x205640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205640u;
label_205640:
    // 0x205640: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x205640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x205644: 0x24429f9c  addiu       $v0, $v0, -0x6064
    ctx->pc = 0x205644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942620));
    // 0x205648: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x205648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x20564c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20564cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x205650: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x205650u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B9F9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B9F9Cu, _value); } while (0);
    // 0x205654: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x205654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x205658: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x205658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20565c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x20565cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205660: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x205660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x205664: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x205664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x205668: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x205668u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20566c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x20566cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x205670: 0xc0816a0  jal         func_205A80
    ctx->pc = 0x205670u;
    SET_GPR_U32(ctx, 31, 0x205678u);
    ctx->pc = 0x205A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A80u, 0x205670u, 0x205678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205678u;
label_205678:
    // 0x205678: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x205678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20567c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20567Cu;
    {
        const bool branch_taken_0x20567c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20567Cu;
        // 0x205680: 0x24846ec0  addiu       $a0, $a0, 0x6EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20567c) {
            ctx->pc = 0x20568Cu;
            goto label_20568c;
        }
    }
    ctx->pc = 0x205684u;
    // 0x205684: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x205684u;
    SET_GPR_U32(ctx, 31, 0x20568Cu);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x205684u, 0x20568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20568Cu;
label_20568c:
    // 0x20568c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20568cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205690: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x205690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x205694: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205698: 0xc081622  jal         func_205888
    ctx->pc = 0x205698u;
    SET_GPR_U32(ctx, 31, 0x2056A0u);
    ctx->pc = 0x20569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205698u;
    // 0x20569c: 0xac4386dc  sw          $v1, -0x7924($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936284), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205888u, 0x205698u, 0x2056A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056A0u;
label_2056a0:
    // 0x2056a0: 0xc093030  jal         func_24C0C0
    ctx->pc = 0x2056A0u;
    SET_GPR_U32(ctx, 31, 0x2056A8u);
    ctx->pc = 0x24C0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C0C0u, 0x2056A0u, 0x2056A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056A8u;
label_2056a8:
    // 0x2056a8: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x2056a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x2056ac: 0x24845520  addiu       $a0, $a0, 0x5520
    ctx->pc = 0x2056acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21792));
    // 0x2056b0: 0xc092ffe  jal         func_24BFF8
    ctx->pc = 0x2056B0u;
    SET_GPR_U32(ctx, 31, 0x2056B8u);
    ctx->pc = 0x2056B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2056B0u;
    // 0x2056b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFF8u, 0x2056B0u, 0x2056B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056B8u;
label_2056b8:
    // 0x2056b8: 0xc0821c2  jal         func_208708
    ctx->pc = 0x2056B8u;
    SET_GPR_U32(ctx, 31, 0x2056C0u);
    ctx->pc = 0x208708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208708u, 0x2056B8u, 0x2056C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056C0u;
label_2056c0:
    // 0x2056c0: 0xc0815bc  jal         func_2056F0
    ctx->pc = 0x2056C0u;
    SET_GPR_U32(ctx, 31, 0x2056C8u);
    ctx->pc = 0x2056C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2056C0u;
    // 0x2056c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2056F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2056F0u, 0x2056C0u, 0x2056C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2056C8u;
label_2056c8:
    // 0x2056c8: 0x262386d8  addiu       $v1, $s1, -0x7928
    ctx->pc = 0x2056c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936280));
    // 0x2056cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2056ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2056d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2056d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2056d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2056d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2056d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2056d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2056dc:
    // 0x2056dc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2056dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2056e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2056e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2056e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2056E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2056E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2056E4u;
        // 0x2056e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2056E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2056ECu;
}
