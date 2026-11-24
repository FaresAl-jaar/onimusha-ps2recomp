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

// Function: sub_003475B0
// Address: 0x3475b0 - 0x3478ac
void sub_003475B0_0x3475b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003475B0_0x3475b0");
#endif

    switch (ctx->pc) {
        case 0x3475ecu: goto label_3475ec;
        case 0x34761cu: goto label_34761c;
        case 0x34763cu: goto label_34763c;
        case 0x34767cu: goto label_34767c;
        case 0x3476b0u: goto label_3476b0;
        case 0x3476c0u: goto label_3476c0;
        case 0x3476e0u: goto label_3476e0;
        case 0x34770cu: goto label_34770c;
        case 0x347720u: goto label_347720;
        case 0x347760u: goto label_347760;
        case 0x347780u: goto label_347780;
        case 0x34779cu: goto label_34779c;
        case 0x3477c4u: goto label_3477c4;
        case 0x3477e4u: goto label_3477e4;
        case 0x347804u: goto label_347804;
        case 0x347820u: goto label_347820;
        case 0x347848u: goto label_347848;
        case 0x347884u: goto label_347884;
        default: break;
    }

    ctx->pc = 0x3475b0u;

    // 0x3475b0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x3475b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x3475b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3475b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3475b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3475b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3475bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3475bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3475c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3475c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3475c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3475c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3475c8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3475c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3475cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3475ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3475d0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3475d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3475d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3475d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3475d8: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x3475d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3475dc: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3475dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3475e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3475e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3475e4: 0xc0d18e0  jal         func_346380
    ctx->pc = 0x3475E4u;
    SET_GPR_U32(ctx, 31, 0x3475ECu);
    ctx->pc = 0x3475E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3475E4u;
    // 0x3475e8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346380u, 0x3475E4u, 0x3475ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3475ECu;
label_3475ec:
    // 0x3475ec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3475ECu;
    {
        const bool branch_taken_0x3475ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3475ec) {
            ctx->pc = 0x347640u;
            goto label_347640;
        }
    }
    ctx->pc = 0x3475F4u;
    // 0x3475f4: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x3475f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3475f8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3475f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3475fc: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x3475fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x347600: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x347600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347604: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x347604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347608: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x347608u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x34760c: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x34760cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x347610: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x347610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x347614: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x347614u;
    SET_GPR_U32(ctx, 31, 0x34761Cu);
    ctx->pc = 0x347618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347614u;
    // 0x347618: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x347614u, 0x34761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34761Cu;
label_34761c:
    // 0x34761c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x34761cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347620: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x347620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x347624: 0x3c025b00  lui         $v0, 0x5B00
    ctx->pc = 0x347624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23296 << 16));
    // 0x347628: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x347628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x34762c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x34762cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x347630: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x347630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x347634: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x347634u;
    SET_GPR_U32(ctx, 31, 0x34763Cu);
    ctx->pc = 0x347638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347634u;
    // 0x347638: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x347634u, 0x34763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34763Cu;
label_34763c:
    // 0x34763c: 0x0  nop
    ctx->pc = 0x34763cu;
    // NOP
label_347640:
    // 0x347640: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x347640u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x347644: 0x14200088  bnez        $at, . + 4 + (0x88 << 2)
    ctx->pc = 0x347644u;
    {
        const bool branch_taken_0x347644 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x347648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347644u;
        // 0x347648: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347644) {
            ctx->pc = 0x347868u;
            goto label_347868;
        }
    }
    ctx->pc = 0x34764Cu;
    // 0x34764c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x34764cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x347650: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x347650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x347654: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x347654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
    // 0x347658: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x347658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
    // 0x34765c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x34765cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x347660: 0xafa001b4  sw          $zero, 0x1B4($sp)
    ctx->pc = 0x347660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
    // 0x347664: 0xafa001b8  sw          $zero, 0x1B8($sp)
    ctx->pc = 0x347664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
    // 0x347668: 0xafa001bc  sw          $zero, 0x1BC($sp)
    ctx->pc = 0x347668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 0));
    // 0x34766c: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x34766cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x347670: 0xafa001a8  sw          $zero, 0x1A8($sp)
    ctx->pc = 0x347670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
    // 0x347674: 0xc0996b8  jal         func_265AE0
    ctx->pc = 0x347674u;
    SET_GPR_U32(ctx, 31, 0x34767Cu);
    ctx->pc = 0x347678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347674u;
    // 0x347678: 0xafa001ac  sw          $zero, 0x1AC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265AE0u, 0x347674u, 0x34767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34767Cu;
label_34767c:
    // 0x34767c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x34767cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x347680: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x347680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x347684: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x347684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x347688: 0x3c023bb6  lui         $v0, 0x3BB6
    ctx->pc = 0x347688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15286 << 16));
    // 0x34768c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x34768cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x347690: 0x34420b61  ori         $v0, $v0, 0xB61
    ctx->pc = 0x347690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
    // 0x347694: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x347694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x347698: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x347698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34769c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34769cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3476a0: 0x0  nop
    ctx->pc = 0x3476a0u;
    // NOP
    // 0x3476a4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3476a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3476a8: 0xc099778  jal         func_265DE0
    ctx->pc = 0x3476A8u;
    SET_GPR_U32(ctx, 31, 0x3476B0u);
    ctx->pc = 0x3476ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3476A8u;
    // 0x3476ac: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x265DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DE0u, 0x3476A8u, 0x3476B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3476B0u;
label_3476b0:
    // 0x3476b0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x3476b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3476b4: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x3476b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x3476b8: 0xc0997ac  jal         func_265EB0
    ctx->pc = 0x3476B8u;
    SET_GPR_U32(ctx, 31, 0x3476C0u);
    ctx->pc = 0x3476BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3476B8u;
    // 0x3476bc: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x3476B8u, 0x3476C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3476C0u;
label_3476c0:
    // 0x3476c0: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x3476c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3476c4: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x3476c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x3476c8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3476c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3476cc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3476ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3476d0: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x3476d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x3476d4: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x3476d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3476d8: 0xc0997ac  jal         func_265EB0
    ctx->pc = 0x3476D8u;
    SET_GPR_U32(ctx, 31, 0x3476E0u);
    ctx->pc = 0x3476DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3476D8u;
    // 0x3476dc: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x3476D8u, 0x3476E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3476E0u;
label_3476e0:
    // 0x3476e0: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x3476e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3476e4: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3476e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3476e8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3476e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3476ec: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x3476ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x3476f0: 0x24844c30  addiu       $a0, $a0, 0x4C30
    ctx->pc = 0x3476f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
    // 0x3476f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3476f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3476f8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3476f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3476fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3476fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347700: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x347700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347704: 0xc0d1934  jal         func_3464D0
    ctx->pc = 0x347704u;
    SET_GPR_U32(ctx, 31, 0x34770Cu);
    ctx->pc = 0x347708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347704u;
    // 0x347708: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3464D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3464D0u, 0x347704u, 0x34770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34770Cu;
label_34770c:
    // 0x34770c: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x34770cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x347710: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x347710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x347714: 0x1020005c  beqz        $at, . + 4 + (0x5C << 2)
    ctx->pc = 0x347714u;
    {
        const bool branch_taken_0x347714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x347718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347714u;
        // 0x347718: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347714) {
            ctx->pc = 0x347888u;
            goto label_347888;
        }
    }
    ctx->pc = 0x34771Cu;
    // 0x34771c: 0x0  nop
    ctx->pc = 0x34771cu;
    // NOP
label_347720:
    // 0x347720: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x347720u;
    {
        const bool branch_taken_0x347720 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x347724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347720u;
        // 0x347724: 0x101843  sra         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347720) {
            ctx->pc = 0x347730u;
            goto label_347730;
        }
    }
    ctx->pc = 0x347728u;
    // 0x347728: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x347728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34772c: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x34772cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_347730:
    // 0x347730: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x347730u;
    {
        const bool branch_taken_0x347730 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x347734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347730u;
        // 0x347734: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347730) {
            ctx->pc = 0x347744u;
            goto label_347744;
        }
    }
    ctx->pc = 0x347738u;
    // 0x347738: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x347738u;
    {
        const bool branch_taken_0x347738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x347738) {
            ctx->pc = 0x347744u;
            goto label_347744;
        }
    }
    ctx->pc = 0x347740u;
    // 0x347740: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x347740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_347744:
    // 0x347744: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x347744u;
    {
        const bool branch_taken_0x347744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347744) {
            ctx->pc = 0x3477D0u;
            goto label_3477d0;
        }
    }
    ctx->pc = 0x34774Cu;
    // 0x34774c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34774cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347750: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x347750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x347754: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x347754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x347758: 0xc0414dc  jal         func_105370
    ctx->pc = 0x347758u;
    SET_GPR_U32(ctx, 31, 0x347760u);
    ctx->pc = 0x34775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347758u;
    // 0x34775c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x347758u, 0x347760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347760u;
label_347760:
    // 0x347760: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x347760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x347764: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x347764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x347768: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x347768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34776c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x34776cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x347770: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x347770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347774: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x347774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x347778: 0xc0414ca  jal         func_105328
    ctx->pc = 0x347778u;
    SET_GPR_U32(ctx, 31, 0x347780u);
    ctx->pc = 0x34777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347778u;
    // 0x34777c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x347778u, 0x347780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347780u;
label_347780:
    // 0x347780: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x347780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x347784: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x347784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x347788: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x347788u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34778c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x34778cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x347790: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x347790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x347794: 0xc0414ca  jal         func_105328
    ctx->pc = 0x347794u;
    SET_GPR_U32(ctx, 31, 0x34779Cu);
    ctx->pc = 0x347798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347794u;
    // 0x347798: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x347794u, 0x34779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34779Cu;
label_34779c:
    // 0x34779c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x34779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3477a0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3477a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3477a4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3477a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3477a8: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x3477a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3477ac: 0x24844c30  addiu       $a0, $a0, 0x4C30
    ctx->pc = 0x3477acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
    // 0x3477b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3477b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477b4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3477b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477b8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3477b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477bc: 0xc0d1934  jal         func_3464D0
    ctx->pc = 0x3477BCu;
    SET_GPR_U32(ctx, 31, 0x3477C4u);
    ctx->pc = 0x3477C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3477BCu;
    // 0x3477c0: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3464D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3464D0u, 0x3477BCu, 0x3477C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477C4u;
label_3477c4:
    // 0x3477c4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3477C4u;
    {
        const bool branch_taken_0x3477c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3477c4) {
            ctx->pc = 0x347848u;
            goto label_347848;
        }
    }
    ctx->pc = 0x3477CCu;
    // 0x3477cc: 0x0  nop
    ctx->pc = 0x3477ccu;
    // NOP
label_3477d0:
    // 0x3477d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3477d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3477d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3477d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3477d8: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x3477d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x3477dc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3477DCu;
    SET_GPR_U32(ctx, 31, 0x3477E4u);
    ctx->pc = 0x3477E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3477DCu;
    // 0x3477e0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3477DCu, 0x3477E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3477E4u;
label_3477e4:
    // 0x3477e4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x3477e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3477e8: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x3477e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3477ec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3477ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3477f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3477f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3477f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3477f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477f8: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x3477f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x3477fc: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3477FCu;
    SET_GPR_U32(ctx, 31, 0x347804u);
    ctx->pc = 0x347800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3477FCu;
    // 0x347800: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3477FCu, 0x347804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347804u;
label_347804:
    // 0x347804: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x347804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x347808: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x347808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x34780c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x34780cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x347810: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x347810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x347814: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x347814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x347818: 0xc0414d0  jal         func_105340
    ctx->pc = 0x347818u;
    SET_GPR_U32(ctx, 31, 0x347820u);
    ctx->pc = 0x34781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347818u;
    // 0x34781c: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x347818u, 0x347820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347820u;
label_347820:
    // 0x347820: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x347820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x347824: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x347824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x347828: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x347828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34782c: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x34782cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x347830: 0x24844c30  addiu       $a0, $a0, 0x4C30
    ctx->pc = 0x347830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
    // 0x347834: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x347834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347838: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x347838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34783c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x34783cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347840: 0xc0d1934  jal         func_3464D0
    ctx->pc = 0x347840u;
    SET_GPR_U32(ctx, 31, 0x347848u);
    ctx->pc = 0x347844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347840u;
    // 0x347844: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3464D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3464D0u, 0x347840u, 0x347848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347848u;
label_347848:
    // 0x347848: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x347848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34784c: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x34784cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x347850: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x347850u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x347854: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x347854u;
    {
        const bool branch_taken_0x347854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x347854) {
            ctx->pc = 0x347720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347720;
        }
    }
    ctx->pc = 0x34785Cu;
    // 0x34785c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x34785Cu;
    {
        const bool branch_taken_0x34785c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34785c) {
            ctx->pc = 0x347888u;
            goto label_347888;
        }
    }
    ctx->pc = 0x347864u;
    // 0x347864: 0x0  nop
    ctx->pc = 0x347864u;
    // NOP
label_347868:
    // 0x347868: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x347868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x34786c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34786cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347870: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x347870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347874: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x347874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347878: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x347878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34787c: 0xc0d1934  jal         func_3464D0
    ctx->pc = 0x34787Cu;
    SET_GPR_U32(ctx, 31, 0x347884u);
    ctx->pc = 0x347880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34787Cu;
    // 0x347880: 0x24844c30  addiu       $a0, $a0, 0x4C30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3464D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3464D0u, 0x34787Cu, 0x347884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347884u;
label_347884:
    // 0x347884: 0x0  nop
    ctx->pc = 0x347884u;
    // NOP
label_347888:
    // 0x347888: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x347888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34788c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34788cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x347890: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x347890u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x347894: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x347894u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x347898: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x347898u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34789c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34789cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3478a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3478a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3478a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3478A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3478A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478A4u;
        // 0x3478a8: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3478A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3478ACu;
}
