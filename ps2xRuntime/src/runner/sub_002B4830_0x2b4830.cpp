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

// Function: sub_002B4830
// Address: 0x2b4830 - 0x2b4b0c
void sub_002B4830_0x2b4830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4830_0x2b4830");
#endif

    switch (ctx->pc) {
        case 0x2b4890u: goto label_2b4890;
        case 0x2b48bcu: goto label_2b48bc;
        case 0x2b48c8u: goto label_2b48c8;
        case 0x2b48dcu: goto label_2b48dc;
        case 0x2b48ecu: goto label_2b48ec;
        case 0x2b494cu: goto label_2b494c;
        case 0x2b4968u: goto label_2b4968;
        case 0x2b4978u: goto label_2b4978;
        case 0x2b4990u: goto label_2b4990;
        case 0x2b49e8u: goto label_2b49e8;
        case 0x2b4a34u: goto label_2b4a34;
        case 0x2b4a50u: goto label_2b4a50;
        case 0x2b4a58u: goto label_2b4a58;
        case 0x2b4a9cu: goto label_2b4a9c;
        default: break;
    }

    ctx->pc = 0x2b4830u;

    // 0x2b4830: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b4830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b4834: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b4834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b4838: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b4838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b483c: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2b483cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2b4840: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b4840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b4844: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b4844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b4848: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b4848u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b484c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b4850: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b4850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4854: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b4854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b4858: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2b4858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2b485c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2b485cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2b4860: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b4860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4864: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2b4864u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2b4868: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2b4868u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b486c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2b486cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b4870: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x2b4870u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b4874: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2b4874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2b4878: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2b4878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b487c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2b487cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2b4880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b4880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b4884: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x2b4884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4888: 0xc096908  jal         func_25A420
    ctx->pc = 0x2B4888u;
    SET_GPR_U32(ctx, 31, 0x2B4890u);
    ctx->pc = 0x2B488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4888u;
    // 0x2b488c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x2B4888u, 0x2B4890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4890u;
label_2b4890:
    // 0x2b4890: 0x7a630020  lq          $v1, 0x20($s3)
    ctx->pc = 0x2b4890u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2b4894: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x2b4894u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2b4898: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2b4898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2b489c: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2b489cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2b48a0: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x2b48a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2b48a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b48a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b48a8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2b48a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x2b48ac: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2b48acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b48b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2b48b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b48b4: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2B48B4u;
    SET_GPR_U32(ctx, 31, 0x2B48BCu);
    ctx->pc = 0x2B48B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B48B4u;
    // 0x2b48b8: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2B48B4u, 0x2B48BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B48BCu;
label_2b48bc:
    // 0x2b48bc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2b48bcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2b48c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b48c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b48c4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b48c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2b48c8:
    // 0x2b48c8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2b48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2b48cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b48ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b48d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b48d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b48d4: 0xc09681c  jal         func_25A070
    ctx->pc = 0x2B48D4u;
    SET_GPR_U32(ctx, 31, 0x2B48DCu);
    ctx->pc = 0x2B48D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B48D4u;
    // 0x2b48d8: 0x46160300  add.s       $f12, $f0, $f22 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2B48D4u, 0x2B48DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B48DCu;
label_2b48dc:
    // 0x2b48dc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2b48dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2b48e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b48e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b48e4: 0xc096784  jal         func_259E10
    ctx->pc = 0x2B48E4u;
    SET_GPR_U32(ctx, 31, 0x2B48ECu);
    ctx->pc = 0x2B48E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B48E4u;
    // 0x2b48e8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x2B48E4u, 0x2B48ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B48ECu;
label_2b48ec:
    // 0x2b48ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b48f0: 0x16020019  bne         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B48F0u;
    {
        const bool branch_taken_0x2b48f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b48f0) {
            ctx->pc = 0x2B4958u;
            goto label_2b4958;
        }
    }
    ctx->pc = 0x2B48F8u;
    // 0x2b48f8: 0x92670002  lbu         $a3, 0x2($s3)
    ctx->pc = 0x2b48f8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2b48fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2b4900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4904: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2b4904u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2b4908: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2b4908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b490c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b490cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b4910: 0x24c6f380  addiu       $a2, $a2, -0xC80
    ctx->pc = 0x2b4910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964096));
    // 0x2b4914: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b4914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4918: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2b4918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2b491c: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2b491cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2b4920: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2b4920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2b4924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b4924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b4928: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b4928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b492c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2b492cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2b4930: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b4930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b4934: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2b4934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b4938: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2b4938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b493c: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2b493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4940: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b4940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b4944: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2B4944u;
    SET_GPR_U32(ctx, 31, 0x2B494Cu);
    ctx->pc = 0x2B4948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4944u;
    // 0x2b4948: 0x46001300  add.s       $f12, $f2, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2B4944u, 0x2B494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B494Cu;
label_2b494c:
    // 0x2b494c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B494Cu;
    {
        const bool branch_taken_0x2b494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b494c) {
            ctx->pc = 0x2B4968u;
            goto label_2b4968;
        }
    }
    ctx->pc = 0x2B4954u;
    // 0x2b4954: 0x0  nop
    ctx->pc = 0x2b4954u;
    // NOP
label_2b4958:
    // 0x2b4958: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b4958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b495c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b495cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4960: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2B4960u;
    SET_GPR_U32(ctx, 31, 0x2B4968u);
    ctx->pc = 0x2B4964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4960u;
    // 0x2b4964: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2B4960u, 0x2B4968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4968u;
label_2b4968:
    // 0x2b4968: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b4968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b496c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b496cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4970: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2B4970u;
    SET_GPR_U32(ctx, 31, 0x2B4978u);
    ctx->pc = 0x2B4974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4970u;
    // 0x2b4974: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2B4970u, 0x2B4978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4978u;
label_2b4978:
    // 0x2b4978: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2b4978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2b497c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4980: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2b4980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b4984: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2b4984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b4988: 0xc0ec964  jal         func_3B2590
    ctx->pc = 0x2B4988u;
    SET_GPR_U32(ctx, 31, 0x2B4990u);
    ctx->pc = 0x2B498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4988u;
    // 0x2b498c: 0x34471100  ori         $a3, $v0, 0x1100 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2590u, 0x2B4988u, 0x2B4990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4990u;
label_2b4990:
    // 0x2b4990: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4990u;
    {
        const bool branch_taken_0x2b4990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4990) {
            ctx->pc = 0x2B49B0u;
            goto label_2b49b0;
        }
    }
    ctx->pc = 0x2B4998u;
    // 0x2b4998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b499c: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x2b499cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x2b49a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b49a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b49a4: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x2b49a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2b49a8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2b49a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b49ac: 0x0  nop
    ctx->pc = 0x2b49acu;
    // NOP
label_2b49b0:
    // 0x2b49b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b49b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b49b4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2b49b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b49b8: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2B49B8u;
    {
        const bool branch_taken_0x2b49b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B49BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49B8u;
        // 0x2b49bc: 0x322200ff  andi        $v0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49b8) {
            ctx->pc = 0x2B48C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b48c8;
        }
    }
    ctx->pc = 0x2B49C0u;
    // 0x2b49c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B49C0u;
    {
        const bool branch_taken_0x2b49c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b49c0) {
            ctx->pc = 0x2B49D0u;
            goto label_2b49d0;
        }
    }
    ctx->pc = 0x2B49C8u;
    // 0x2b49c8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2B49C8u;
    {
        const bool branch_taken_0x2b49c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49C8u;
        // 0x2b49cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b49c8) {
            ctx->pc = 0x2B4AE0u;
            goto label_2b4ae0;
        }
    }
    ctx->pc = 0x2B49D0u;
label_2b49d0:
    // 0x2b49d0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2b49d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2b49d4: 0x8c302410  lw          $s0, 0x2410($at)
    ctx->pc = 0x2b49d4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x8D2410u));
    // 0x2b49d8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b49d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b49dc: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2B49DCu;
    {
        const bool branch_taken_0x2b49dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b49dc) {
            ctx->pc = 0x2B4AD8u;
            goto label_2b4ad8;
        }
    }
    ctx->pc = 0x2B49E4u;
    // 0x2b49e4: 0x0  nop
    ctx->pc = 0x2b49e4u;
    // NOP
label_2b49e8:
    // 0x2b49e8: 0x12700037  beq         $s3, $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2B49E8u;
    {
        const bool branch_taken_0x2b49e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x2b49e8) {
            ctx->pc = 0x2B4AC8u;
            goto label_2b4ac8;
        }
    }
    ctx->pc = 0x2B49F0u;
    // 0x2b49f0: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x2b49f0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b49f4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2b49f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2b49f8: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2b49f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2b49fc: 0x24c6f380  addiu       $a2, $a2, -0xC80
    ctx->pc = 0x2b49fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964096));
    // 0x2b4a00: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2b4a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b4a04: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2b4a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2b4a08: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2b4a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2b4a0c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2b4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2b4a10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b4a14: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2b4a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2b4a18: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b4a1c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2b4a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b4a20: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b4a24: 0xc477000c  lwc1        $f23, 0xC($v1)
    ctx->pc = 0x2b4a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b4a28: 0xc456000c  lwc1        $f22, 0xC($v0)
    ctx->pc = 0x2b4a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b4a2c: 0xc096988  jal         func_25A620
    ctx->pc = 0x2B4A2Cu;
    SET_GPR_U32(ctx, 31, 0x2B4A34u);
    ctx->pc = 0x2B4A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A2Cu;
    // 0x2b4a30: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x2B4A2Cu, 0x2B4A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A34u;
label_2b4a34:
    // 0x2b4a34: 0x4617a040  add.s       $f1, $f20, $f23
    ctx->pc = 0x2b4a34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    // 0x2b4a38: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x2b4a38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x2b4a3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b4a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4a40: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2B4A40u;
    {
        const bool branch_taken_0x2b4a40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A40u;
        // 0x2b4a44: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a40) {
            ctx->pc = 0x2B4AC8u;
            goto label_2b4ac8;
        }
    }
    ctx->pc = 0x2B4A48u;
    // 0x2b4a48: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2B4A48u;
    SET_GPR_U32(ctx, 31, 0x2B4A50u);
    ctx->pc = 0x2B4A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A48u;
    // 0x2b4a4c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2B4A48u, 0x2B4A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A50u;
label_2b4a50:
    // 0x2b4a50: 0xc09681c  jal         func_25A070
    ctx->pc = 0x2B4A50u;
    SET_GPR_U32(ctx, 31, 0x2B4A58u);
    ctx->pc = 0x2B4A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A50u;
    // 0x2b4a54: 0x46150301  sub.s       $f12, $f0, $f21 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2B4A50u, 0x2B4A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A58u;
label_2b4a58:
    // 0x2b4a58: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2b4a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x2b4a5c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2b4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2b4a60: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2b4a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b4a64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b4a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b4a68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b4a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4a6c: 0x0  nop
    ctx->pc = 0x2b4a6cu;
    // NOP
    // 0x2b4a70: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2b4a70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b4a74: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b4a74u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b4a78: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b4a78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b4a7c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b4a7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b4a80: 0x0  nop
    ctx->pc = 0x2b4a80u;
    // NOP
    // 0x2b4a84: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b4a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b4a88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b4a88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b4a8c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2b4a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2b4a90: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2b4a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b4a94: 0xc096a08  jal         func_25A820
    ctx->pc = 0x2B4A94u;
    SET_GPR_U32(ctx, 31, 0x2B4A9Cu);
    ctx->pc = 0x2B4A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A94u;
    // 0x2b4a98: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x2B4A94u, 0x2B4A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A9Cu;
label_2b4a9c:
    // 0x2b4a9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b4a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b4aa0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4AA0u;
    {
        const bool branch_taken_0x2b4aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4AA0u;
        // 0x2b4aa4: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4aa0) {
            ctx->pc = 0x2B4AC8u;
            goto label_2b4ac8;
        }
    }
    ctx->pc = 0x2B4AA8u;
    // 0x2b4aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4aac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b4ab0: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x2b4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2b4ab4: 0x401027  not         $v0, $v0
    ctx->pc = 0x2b4ab4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x2b4ab8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b4ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b4abc: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x2b4abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2b4ac0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2b4ac0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b4ac4: 0x0  nop
    ctx->pc = 0x2b4ac4u;
    // NOP
label_2b4ac8:
    // 0x2b4ac8: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x2b4ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2b4acc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2b4accu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4ad0: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2B4AD0u;
    {
        const bool branch_taken_0x2b4ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4ad0) {
            ctx->pc = 0x2B49E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b49e8;
        }
    }
    ctx->pc = 0x2B4AD8u;
label_2b4ad8:
    // 0x2b4ad8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b4ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4adc: 0x0  nop
    ctx->pc = 0x2b4adcu;
    // NOP
label_2b4ae0:
    // 0x2b4ae0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b4ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b4ae4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b4ae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4ae8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2b4ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b4aec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b4aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4af0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2b4af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b4af4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b4af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4af8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2b4af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b4afc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b4afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4b00: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2b4b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4b04: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4B04u;
        // 0x2b4b08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4B0Cu;
}
