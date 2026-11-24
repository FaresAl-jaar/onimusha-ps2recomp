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

// Function: sub_003EA810
// Address: 0x3ea810 - 0x3eab28
void sub_003EA810_0x3ea810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA810_0x3ea810");
#endif

    switch (ctx->pc) {
        case 0x3ea88cu: goto label_3ea88c;
        case 0x3ea8a0u: goto label_3ea8a0;
        case 0x3ea8b4u: goto label_3ea8b4;
        case 0x3ea8c0u: goto label_3ea8c0;
        case 0x3ea8ccu: goto label_3ea8cc;
        case 0x3ea8d8u: goto label_3ea8d8;
        case 0x3ea904u: goto label_3ea904;
        case 0x3ea938u: goto label_3ea938;
        case 0x3ea948u: goto label_3ea948;
        case 0x3ea95cu: goto label_3ea95c;
        case 0x3ea978u: goto label_3ea978;
        case 0x3ea9c0u: goto label_3ea9c0;
        case 0x3ea9c8u: goto label_3ea9c8;
        case 0x3ea9dcu: goto label_3ea9dc;
        case 0x3eaa28u: goto label_3eaa28;
        case 0x3eaa48u: goto label_3eaa48;
        case 0x3eaa78u: goto label_3eaa78;
        case 0x3eaa80u: goto label_3eaa80;
        case 0x3eaa90u: goto label_3eaa90;
        case 0x3eaa98u: goto label_3eaa98;
        default: break;
    }

    ctx->pc = 0x3ea810u;

    // 0x3ea810: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ea810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3ea814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ea814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ea818: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ea818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3ea81c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ea81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3ea820: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ea820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3ea824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ea824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea828: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ea828u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ea82c: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x3ea82cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ea830: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x3EA830u;
    {
        const bool branch_taken_0x3ea830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3EA834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA830u;
        // 0x3ea834: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea830) {
            ctx->pc = 0x3EA9B0u;
            goto label_3ea9b0;
        }
    }
    ctx->pc = 0x3EA838u;
    // 0x3ea838: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EA838u;
    {
        const bool branch_taken_0x3ea838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea838) {
            ctx->pc = 0x3EA848u;
            goto label_3ea848;
        }
    }
    ctx->pc = 0x3EA840u;
    // 0x3ea840: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x3EA840u;
    {
        const bool branch_taken_0x3ea840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea840) {
            ctx->pc = 0x3EAB10u;
            goto label_3eab10;
        }
    }
    ctx->pc = 0x3EA848u;
label_3ea848:
    // 0x3ea848: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x3ea848u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea84c: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x3ea84cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ea850: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x3ea850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3ea854: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x3ea854u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ea858: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3ea858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3ea85c: 0xa22207f5  sb          $v0, 0x7F5($s1)
    ctx->pc = 0x3ea85cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea860: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ea860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ea864: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3ea864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3ea868: 0x12030045  beq         $s0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3EA868u;
    {
        const bool branch_taken_0x3ea868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3EA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA868u;
        // 0x3ea86c: 0xae2207ec  sw          $v0, 0x7EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea868) {
            ctx->pc = 0x3EA980u;
            goto label_3ea980;
        }
    }
    ctx->pc = 0x3EA870u;
    // 0x3ea870: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EA870u;
    {
        const bool branch_taken_0x3ea870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea870) {
            ctx->pc = 0x3EA880u;
            goto label_3ea880;
        }
    }
    ctx->pc = 0x3EA878u;
    // 0x3ea878: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x3EA878u;
    {
        const bool branch_taken_0x3ea878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea878) {
            ctx->pc = 0x3EA998u;
            goto label_3ea998;
        }
    }
    ctx->pc = 0x3EA880u;
label_3ea880:
    // 0x3ea880: 0x862500c2  lh          $a1, 0xC2($s1)
    ctx->pc = 0x3ea880u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x3ea884: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3EA884u;
    SET_GPR_U32(ctx, 31, 0x3EA88Cu);
    ctx->pc = 0x3EA888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA884u;
    // 0x3ea888: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3EA884u, 0x3EA88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA88Cu;
label_3ea88c:
    // 0x3ea88c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3ea88cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3ea890: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3ea890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3ea894: 0x24a549e0  addiu       $a1, $a1, 0x49E0
    ctx->pc = 0x3ea894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18912));
    // 0x3ea898: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3EA898u;
    SET_GPR_U32(ctx, 31, 0x3EA8A0u);
    ctx->pc = 0x3EA89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA898u;
    // 0x3ea89c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3EA898u, 0x3EA8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA8A0u;
label_3ea8a0:
    // 0x3ea8a0: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3ea8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3ea8a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3ea8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3ea8a8: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3ea8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3ea8ac: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3EA8ACu;
    SET_GPR_U32(ctx, 31, 0x3EA8B4u);
    ctx->pc = 0x3EA8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA8ACu;
    // 0x3ea8b0: 0x24c649e0  addiu       $a2, $a2, 0x49E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3EA8ACu, 0x3EA8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA8B4u;
label_3ea8b4:
    // 0x3ea8b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3ea8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3ea8b8: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3EA8B8u;
    SET_GPR_U32(ctx, 31, 0x3EA8C0u);
    ctx->pc = 0x3EA8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA8B8u;
    // 0x3ea8bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3EA8B8u, 0x3EA8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA8C0u;
label_3ea8c0:
    // 0x3ea8c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3ea8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3ea8c4: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3EA8C4u;
    SET_GPR_U32(ctx, 31, 0x3EA8CCu);
    ctx->pc = 0x3EA8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA8C4u;
    // 0x3ea8c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3EA8C4u, 0x3EA8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA8CCu;
label_3ea8cc:
    // 0x3ea8cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3ea8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3ea8d0: 0xc076654  jal         func_1D9950
    ctx->pc = 0x3EA8D0u;
    SET_GPR_U32(ctx, 31, 0x3EA8D8u);
    ctx->pc = 0x3EA8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA8D0u;
    // 0x3ea8d4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x3EA8D0u, 0x3EA8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA8D8u;
label_3ea8d8:
    // 0x3ea8d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3ea8d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ea8dc: 0x0  nop
    ctx->pc = 0x3ea8dcu;
    // NOP
    // 0x3ea8e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ea8e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ea8e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3EA8E4u;
    {
        const bool branch_taken_0x3ea8e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ea8e4) {
            ctx->pc = 0x3EA8F8u;
            goto label_3ea8f8;
        }
    }
    ctx->pc = 0x3EA8ECu;
    // 0x3ea8ec: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ea8ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ea8f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3EA8F0u;
    {
        const bool branch_taken_0x3ea8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA8F0u;
        // 0x3ea8f4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea8f0) {
            ctx->pc = 0x3EA930u;
            goto label_3ea930;
        }
    }
    ctx->pc = 0x3EA8F8u;
label_3ea8f8:
    // 0x3ea8f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3ea8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3ea8fc: 0xc076654  jal         func_1D9950
    ctx->pc = 0x3EA8FCu;
    SET_GPR_U32(ctx, 31, 0x3EA904u);
    ctx->pc = 0x3EA900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA8FCu;
    // 0x3ea900: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x3EA8FCu, 0x3EA904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA904u;
label_3ea904:
    // 0x3ea904: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3ea904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ea908: 0x0  nop
    ctx->pc = 0x3ea908u;
    // NOP
    // 0x3ea90c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ea90cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ea910: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EA910u;
    {
        const bool branch_taken_0x3ea910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ea910) {
            ctx->pc = 0x3EA928u;
            goto label_3ea928;
        }
    }
    ctx->pc = 0x3EA918u;
    // 0x3ea918: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3ea918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ea91c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EA91Cu;
    {
        const bool branch_taken_0x3ea91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA91Cu;
        // 0x3ea920: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea91c) {
            ctx->pc = 0x3EA930u;
            goto label_3ea930;
        }
    }
    ctx->pc = 0x3EA924u;
    // 0x3ea924: 0x0  nop
    ctx->pc = 0x3ea924u;
    // NOP
label_3ea928:
    // 0x3ea928: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ea928u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ea92c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3ea92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3ea930:
    // 0x3ea930: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3EA930u;
    SET_GPR_U32(ctx, 31, 0x3EA938u);
    ctx->pc = 0x3EA934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA930u;
    // 0x3ea934: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3EA930u, 0x3EA938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA938u;
label_3ea938:
    // 0x3ea938: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3ea938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3ea93c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3ea93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3ea940: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3EA940u;
    SET_GPR_U32(ctx, 31, 0x3EA948u);
    ctx->pc = 0x3EA944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA940u;
    // 0x3ea944: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3EA940u, 0x3EA948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA948u;
label_3ea948:
    // 0x3ea948: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x3ea948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x3ea94c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3ea94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3ea950: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ea950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ea954: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3EA954u;
    SET_GPR_U32(ctx, 31, 0x3EA95Cu);
    ctx->pc = 0x3EA958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA954u;
    // 0x3ea958: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3EA954u, 0x3EA95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA95Cu;
label_3ea95c:
    // 0x3ea95c: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3ea95cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3ea960: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x3ea960u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x3ea964: 0x26242b70  addiu       $a0, $s1, 0x2B70
    ctx->pc = 0x3ea964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11120));
    // 0x3ea968: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3ea968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3ea96c: 0x24c649e0  addiu       $a2, $a2, 0x49E0
    ctx->pc = 0x3ea96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18912));
    // 0x3ea970: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3EA970u;
    SET_GPR_U32(ctx, 31, 0x3EA978u);
    ctx->pc = 0x3EA974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA970u;
    // 0x3ea974: 0x7e222b60  sq          $v0, 0x2B60($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 11104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3EA970u, 0x3EA978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA978u;
label_3ea978:
    // 0x3ea978: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EA978u;
    {
        const bool branch_taken_0x3ea978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea978) {
            ctx->pc = 0x3EA998u;
            goto label_3ea998;
        }
    }
    ctx->pc = 0x3EA980u;
label_3ea980:
    // 0x3ea980: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3ea980u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3ea984: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3ea984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3ea988: 0x7e222b60  sq          $v0, 0x2B60($s1)
    ctx->pc = 0x3ea988u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 11104), GPR_VEC(ctx, 2));
    // 0x3ea98c: 0x782249e0  lq          $v0, 0x49E0($at)
    ctx->pc = 0x3ea98cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x6849E0u));
    // 0x3ea990: 0x7e222b70  sq          $v0, 0x2B70($s1)
    ctx->pc = 0x3ea990u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 11120), GPR_VEC(ctx, 2));
    // 0x3ea994: 0x0  nop
    ctx->pc = 0x3ea994u;
    // NOP
label_3ea998:
    // 0x3ea998: 0xae202ba0  sw          $zero, 0x2BA0($s1)
    ctx->pc = 0x3ea998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11168), GPR_U32(ctx, 0));
    // 0x3ea99c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x3ea99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x3ea9a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ea9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ea9a4: 0xae232ba4  sw          $v1, 0x2BA4($s1)
    ctx->pc = 0x3ea9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11172), GPR_U32(ctx, 3));
    // 0x3ea9a8: 0xa2220821  sb          $v0, 0x821($s1)
    ctx->pc = 0x3ea9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ea9ac: 0x0  nop
    ctx->pc = 0x3ea9acu;
    // NOP
label_3ea9b0:
    // 0x3ea9b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3ea9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3ea9b4: 0x26252b60  addiu       $a1, $s1, 0x2B60
    ctx->pc = 0x3ea9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11104));
    // 0x3ea9b8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3EA9B8u;
    SET_GPR_U32(ctx, 31, 0x3EA9C0u);
    ctx->pc = 0x3EA9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA9B8u;
    // 0x3ea9bc: 0x26262b70  addiu       $a2, $s1, 0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 11120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3EA9B8u, 0x3EA9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA9C0u;
label_3ea9c0:
    // 0x3ea9c0: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3EA9C0u;
    SET_GPR_U32(ctx, 31, 0x3EA9C8u);
    ctx->pc = 0x3EA9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA9C0u;
    // 0x3ea9c4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3EA9C0u, 0x3EA9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA9C8u;
label_3ea9c8:
    // 0x3ea9c8: 0x862400c2  lh          $a0, 0xC2($s1)
    ctx->pc = 0x3ea9c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x3ea9cc: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3ea9ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3ea9d0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3ea9d0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3ea9d4: 0xc097498  jal         func_25D260
    ctx->pc = 0x3EA9D4u;
    SET_GPR_U32(ctx, 31, 0x3EA9DCu);
    ctx->pc = 0x3EA9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA9D4u;
    // 0x3ea9d8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x3EA9D4u, 0x3EA9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA9DCu;
label_3ea9dc:
    // 0x3ea9dc: 0xa62200c2  sh          $v0, 0xC2($s1)
    ctx->pc = 0x3ea9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ea9e0: 0xc6222ba4  lwc1        $f2, 0x2BA4($s1)
    ctx->pc = 0x3ea9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ea9e4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ea9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ea9e8: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3ea9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3ea9ec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ea9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ea9f0: 0xc6212ba0  lwc1        $f1, 0x2BA0($s1)
    ctx->pc = 0x3ea9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ea9f4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3ea9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3ea9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ea9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ea9fc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ea9fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eaa00: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3eaa00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3eaa04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3eaa04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eaa08: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3EAA08u;
    {
        const bool branch_taken_0x3eaa08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EAA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA08u;
        // 0x3eaa0c: 0xe6212ba0  swc1        $f1, 0x2BA0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaa08) {
            ctx->pc = 0x3EAA18u;
            goto label_3eaa18;
        }
    }
    ctx->pc = 0x3EAA10u;
    // 0x3eaa10: 0xe6202ba0  swc1        $f0, 0x2BA0($s1)
    ctx->pc = 0x3eaa10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11168), bits); }
    // 0x3eaa14: 0x0  nop
    ctx->pc = 0x3eaa14u;
    // NOP
label_3eaa18:
    // 0x3eaa18: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3eaa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3eaa1c: 0x26252b70  addiu       $a1, $s1, 0x2B70
    ctx->pc = 0x3eaa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11120));
    // 0x3eaa20: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3EAA20u;
    SET_GPR_U32(ctx, 31, 0x3EAA28u);
    ctx->pc = 0x3EAA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAA20u;
    // 0x3eaa24: 0x26262b60  addiu       $a2, $s1, 0x2B60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 11104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3EAA20u, 0x3EAA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAA28u;
label_3eaa28:
    // 0x3eaa28: 0xc6202ba0  lwc1        $f0, 0x2BA0($s1)
    ctx->pc = 0x3eaa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3eaa2c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3eaa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3eaa30: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3eaa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3eaa34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3eaa34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3eaa38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3eaa38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eaa3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3eaa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eaa40: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x3EAA40u;
    SET_GPR_U32(ctx, 31, 0x3EAA48u);
    ctx->pc = 0x3EAA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAA40u;
    // 0x3eaa44: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x3EAA40u, 0x3EAA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAA48u;
label_3eaa48:
    // 0x3eaa48: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x3eaa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3eaa4c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3eaa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3eaa50: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x3eaa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3eaa54: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3eaa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3eaa58: 0x24a549e0  addiu       $a1, $a1, 0x49E0
    ctx->pc = 0x3eaa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18912));
    // 0x3eaa5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3eaa5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3eaa60: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x3eaa60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x3eaa64: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x3eaa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3eaa68: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x3eaa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3eaa6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3eaa6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3eaa70: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3EAA70u;
    SET_GPR_U32(ctx, 31, 0x3EAA78u);
    ctx->pc = 0x3EAA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAA70u;
    // 0x3eaa74: 0xe6200028  swc1        $f0, 0x28($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3EAA70u, 0x3EAA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAA78u;
label_3eaa78:
    // 0x3eaa78: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3EAA78u;
    SET_GPR_U32(ctx, 31, 0x3EAA80u);
    ctx->pc = 0x3EAA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAA78u;
    // 0x3eaa7c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3EAA78u, 0x3EAA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAA80u;
label_3eaa80:
    // 0x3eaa80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3eaa80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3eaa84: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3eaa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3eaa88: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3EAA88u;
    SET_GPR_U32(ctx, 31, 0x3EAA90u);
    ctx->pc = 0x3EAA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAA88u;
    // 0x3eaa8c: 0x26252b70  addiu       $a1, $s1, 0x2B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3EAA88u, 0x3EAA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAA90u;
label_3eaa90:
    // 0x3eaa90: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3EAA90u;
    SET_GPR_U32(ctx, 31, 0x3EAA98u);
    ctx->pc = 0x3EAA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAA90u;
    // 0x3eaa94: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3EAA90u, 0x3EAA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAA98u;
label_3eaa98:
    // 0x3eaa98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3eaa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eaa9c: 0x12040014  beq         $s0, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3EAA9Cu;
    {
        const bool branch_taken_0x3eaa9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x3eaa9c) {
            ctx->pc = 0x3EAAF0u;
            goto label_3eaaf0;
        }
    }
    ctx->pc = 0x3EAAA4u;
    // 0x3eaaa4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EAAA4u;
    {
        const bool branch_taken_0x3eaaa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eaaa4) {
            ctx->pc = 0x3EAAB8u;
            goto label_3eaab8;
        }
    }
    ctx->pc = 0x3EAAACu;
    // 0x3eaaac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3EAAACu;
    {
        const bool branch_taken_0x3eaaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eaaac) {
            ctx->pc = 0x3EAB10u;
            goto label_3eab10;
        }
    }
    ctx->pc = 0x3EAAB4u;
    // 0x3eaab4: 0x0  nop
    ctx->pc = 0x3eaab4u;
    // NOP
label_3eaab8:
    // 0x3eaab8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3eaab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x3eaabc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3eaabcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eaac0: 0x0  nop
    ctx->pc = 0x3eaac0u;
    // NOP
    // 0x3eaac4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3eaac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eaac8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x3EAAC8u;
    {
        const bool branch_taken_0x3eaac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAAC8u;
        // 0x3eaacc: 0x3c0343c8  lui         $v1, 0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaac8) {
            ctx->pc = 0x3EAB10u;
            goto label_3eab10;
        }
    }
    ctx->pc = 0x3EAAD0u;
    // 0x3eaad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eaad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eaad4: 0x0  nop
    ctx->pc = 0x3eaad4u;
    // NOP
    // 0x3eaad8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3eaad8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eaadc: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x3EAADCu;
    {
        const bool branch_taken_0x3eaadc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eaadc) {
            ctx->pc = 0x3EAB10u;
            goto label_3eab10;
        }
    }
    ctx->pc = 0x3EAAE4u;
    // 0x3eaae4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3EAAE4u;
    {
        const bool branch_taken_0x3eaae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAAE4u;
        // 0x3eaae8: 0xa2240780  sb          $a0, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaae4) {
            ctx->pc = 0x3EAB10u;
            goto label_3eab10;
        }
    }
    ctx->pc = 0x3EAAECu;
    // 0x3eaaec: 0x0  nop
    ctx->pc = 0x3eaaecu;
    // NOP
label_3eaaf0:
    // 0x3eaaf0: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x3eaaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x3eaaf4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3eaaf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eaaf8: 0x0  nop
    ctx->pc = 0x3eaaf8u;
    // NOP
    // 0x3eaafc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3eaafcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eab00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3EAB00u;
    {
        const bool branch_taken_0x3eab00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eab00) {
            ctx->pc = 0x3EAB10u;
            goto label_3eab10;
        }
    }
    ctx->pc = 0x3EAB08u;
    // 0x3eab08: 0xa2240780  sb          $a0, 0x780($s1)
    ctx->pc = 0x3eab08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3eab0c: 0x0  nop
    ctx->pc = 0x3eab0cu;
    // NOP
label_3eab10:
    // 0x3eab10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3eab10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3eab14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3eab14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eab18: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3eab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3eab1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3eab1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eab20: 0x3e00008  jr          $ra
    ctx->pc = 0x3EAB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB20u;
        // 0x3eab24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EAB28u;
}
