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

// Function: sub_00285070
// Address: 0x285070 - 0x2852c0
void sub_00285070_0x285070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285070_0x285070");
#endif

    switch (ctx->pc) {
        case 0x2850c8u: goto label_2850c8;
        case 0x2850dcu: goto label_2850dc;
        case 0x2850f0u: goto label_2850f0;
        case 0x285108u: goto label_285108;
        case 0x285124u: goto label_285124;
        case 0x285140u: goto label_285140;
        case 0x285164u: goto label_285164;
        case 0x285194u: goto label_285194;
        case 0x2851c0u: goto label_2851c0;
        case 0x285260u: goto label_285260;
        case 0x285280u: goto label_285280;
        default: break;
    }

    ctx->pc = 0x285070u;

    // 0x285070: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x285070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x285074: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x285074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x285078: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x285078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x28507c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28507cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x285080: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x285080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x285084: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x285084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x285088: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x285088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28508c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x285090: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x285090u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285094: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x285094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x285098: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x285098u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28509c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2850a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2850a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2850a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2850a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2850a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2850a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2850ac: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x2850acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x2850b0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2850b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2850b4: 0x90e50010  lbu         $a1, 0x10($a3)
    ctx->pc = 0x2850b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2850b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2850b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2850bc: 0x90e60011  lbu         $a2, 0x11($a3)
    ctx->pc = 0x2850bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 17)));
    // 0x2850c0: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x2850C0u;
    SET_GPR_U32(ctx, 31, 0x2850C8u);
    ctx->pc = 0x2850C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2850C0u;
    // 0x2850c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x2850C0u, 0x2850C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2850C8u;
label_2850c8:
    // 0x2850c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2850c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2850cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2850ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2850d0: 0xdc265ae8  ld          $a2, 0x5AE8($at)
    ctx->pc = 0x2850d0u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x665AE8u));
    // 0x2850d4: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2850D4u;
    SET_GPR_U32(ctx, 31, 0x2850DCu);
    ctx->pc = 0x2850D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2850D4u;
    // 0x2850d8: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2850D4u, 0x2850DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2850DCu;
label_2850dc:
    // 0x2850dc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2850dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2850e0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2850e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2850e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2850e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2850e8: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x2850E8u;
    SET_GPR_U32(ctx, 31, 0x2850F0u);
    ctx->pc = 0x2850ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2850E8u;
    // 0x2850ec: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x2850E8u, 0x2850F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2850F0u;
label_2850f0:
    // 0x2850f0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2850f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2850f4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2850f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2850f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2850f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2850fc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2850fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x285100: 0xc074648  jal         func_1D1920
    ctx->pc = 0x285100u;
    SET_GPR_U32(ctx, 31, 0x285108u);
    ctx->pc = 0x285104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285100u;
    // 0x285104: 0x2232021  addu        $a0, $s1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x285100u, 0x285108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285108u;
label_285108:
    // 0x285108: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x285108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28510c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28510cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285110: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x285110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x285114: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x285114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x285118: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x285118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28511c: 0xc07549c  jal         func_1D5270
    ctx->pc = 0x28511Cu;
    SET_GPR_U32(ctx, 31, 0x285124u);
    ctx->pc = 0x285120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28511Cu;
    // 0x285120: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5270u, 0x28511Cu, 0x285124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285124u;
label_285124:
    // 0x285124: 0x9282001c  lbu         $v0, 0x1C($s4)
    ctx->pc = 0x285124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x285128: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x285128u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28512c: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x28512Cu;
    {
        const bool branch_taken_0x28512c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x285130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28512Cu;
        // 0x285130: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28512c) {
            ctx->pc = 0x285278u;
            goto label_285278;
        }
    }
    ctx->pc = 0x285134u;
    // 0x285134: 0x10f43c  dsll32      $fp, $s0, 16
    ctx->pc = 0x285134u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 16) << (32 + 16));
    // 0x285138: 0x1ef43f  dsra32      $fp, $fp, 16
    ctx->pc = 0x285138u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
    // 0x28513c: 0x0  nop
    ctx->pc = 0x28513cu;
    // NOP
label_285140:
    // 0x285140: 0x86a30004  lh          $v1, 0x4($s5)
    ctx->pc = 0x285140u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x285144: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x285144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x285148: 0x10620045  beq         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x285148u;
    {
        const bool branch_taken_0x285148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x285148) {
            ctx->pc = 0x285260u;
            goto label_285260;
        }
    }
    ctx->pc = 0x285150u;
    // 0x285150: 0x92a6000a  lbu         $a2, 0xA($s5)
    ctx->pc = 0x285150u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x285154: 0x14c0000c  bnez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x285154u;
    {
        const bool branch_taken_0x285154 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x285158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285154u;
        // 0x285158: 0x26a40030  addiu       $a0, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285154) {
            ctx->pc = 0x285188u;
            goto label_285188;
        }
    }
    ctx->pc = 0x28515Cu;
    // 0x28515c: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x28515Cu;
    SET_GPR_U32(ctx, 31, 0x285164u);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x28515Cu, 0x285164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285164u;
label_285164:
    // 0x285164: 0x94520004  lhu         $s2, 0x4($v0)
    ctx->pc = 0x285164u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x285168: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x285168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28516c: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x28516cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x285170: 0x94510006  lhu         $s1, 0x6($v0)
    ctx->pc = 0x285170u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x285174: 0x243b021  addu        $s6, $s2, $v1
    ctx->pc = 0x285174u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x285178: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x285178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x28517c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28517Cu;
    {
        const bool branch_taken_0x28517c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28517Cu;
        // 0x285180: 0x222b821  addu        $s7, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28517c) {
            ctx->pc = 0x2851B8u;
            goto label_2851b8;
        }
    }
    ctx->pc = 0x285184u;
    // 0x285184: 0x0  nop
    ctx->pc = 0x285184u;
    // NOP
label_285188:
    // 0x285188: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x285188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x28518c: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x28518Cu;
    SET_GPR_U32(ctx, 31, 0x285194u);
    ctx->pc = 0x285190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28518Cu;
    // 0x285190: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x28518Cu, 0x285194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285194u;
label_285194:
    // 0x285194: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x285194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285198: 0x8fb200b0  lw          $s2, 0xB0($sp)
    ctx->pc = 0x285198u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28519c: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x28519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2851a0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2851a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2851a4: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2851a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2851a8: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x2851a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2851ac: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x2851acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x2851b0: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x2851b0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2851b4: 0x0  nop
    ctx->pc = 0x2851b4u;
    // NOP
label_2851b8:
    // 0x2851b8: 0xc0a1224  jal         func_284890
    ctx->pc = 0x2851B8u;
    SET_GPR_U32(ctx, 31, 0x2851C0u);
    ctx->pc = 0x2851BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2851B8u;
    // 0x2851bc: 0x9284001d  lbu         $a0, 0x1D($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 29)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284890u, 0x2851B8u, 0x2851C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2851C0u;
label_2851c0:
    // 0x2851c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2851c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2851c4: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x2851c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2851c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2851c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2851cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2851ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2851d0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2851d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2851d4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2851d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2851d8: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x2851d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2851dc: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x2851dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2851e0: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x2851e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2851e4: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x2851e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x2851e8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2851e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2851ec: 0x86a30008  lh          $v1, 0x8($s5)
    ctx->pc = 0x2851ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2851f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2851f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2851f4: 0x9282001e  lbu         $v0, 0x1E($s4)
    ctx->pc = 0x2851f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 30)));
    // 0x2851f8: 0x7e1818  mult        $v1, $v1, $fp
    ctx->pc = 0x2851f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2851fc: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2851fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x285200: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x285200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x285204: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x285204u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x285208: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x285208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28520c: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x28520cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x285210: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x285210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x285214: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x285214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x285218: 0x860c0008  lh          $t4, 0x8($s0)
    ctx->pc = 0x285218u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x28521c: 0xc6b10000  lwc1        $f17, 0x0($s5)
    ctx->pc = 0x28521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x285220: 0x860b000a  lh          $t3, 0xA($s0)
    ctx->pc = 0x285220u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x285224: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x285224u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x285228: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x285228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28522c: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x28522cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x285230: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x285230u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285234: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x285234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x285238: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28523c: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x28523cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x285240: 0x46011303  div.s       $f12, $f2, $f1
    ctx->pc = 0x285240u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x285244: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x285244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28524c: 0x0  nop
    ctx->pc = 0x28524cu;
    // NOP
    // 0x285250: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x285250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x285254: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x285254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x285258: 0xc0754d0  jal         func_1D5340
    ctx->pc = 0x285258u;
    SET_GPR_U32(ctx, 31, 0x285260u);
    ctx->pc = 0x28525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285258u;
    // 0x28525c: 0x46008c86  mov.s       $f18, $f17 (Delay Slot)
    ctx->f[18] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5340u, 0x285258u, 0x285260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285260u;
label_285260:
    // 0x285260: 0x9282001c  lbu         $v0, 0x1C($s4)
    ctx->pc = 0x285260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x285264: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x285264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x285268: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x285268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28526c: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x28526Cu;
    {
        const bool branch_taken_0x28526c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28526Cu;
        // 0x285270: 0x26b50040  addiu       $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28526c) {
            ctx->pc = 0x285140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285140;
        }
    }
    ctx->pc = 0x285274u;
    // 0x285274: 0x0  nop
    ctx->pc = 0x285274u;
    // NOP
label_285278:
    // 0x285278: 0xc0754ac  jal         func_1D52B0
    ctx->pc = 0x285278u;
    SET_GPR_U32(ctx, 31, 0x285280u);
    ctx->pc = 0x1D52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52B0u, 0x285278u, 0x285280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285280u;
label_285280:
    // 0x285280: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x285280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x285284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x285284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x285288: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x285288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x28528c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x28528cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x285290: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x285290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x285294: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x285294u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x285298: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x285298u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28529c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28529cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2852a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2852a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2852a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2852a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2852a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2852a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2852ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2852acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2852b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2852b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2852b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2852b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2852b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2852B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2852BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852B8u;
        // 0x2852bc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2852B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2852C0u;
}
