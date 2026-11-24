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

// Function: sub_002BC3F0
// Address: 0x2bc3f0 - 0x2bc7b4
void sub_002BC3F0_0x2bc3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC3F0_0x2bc3f0");
#endif

    switch (ctx->pc) {
        case 0x2bc470u: goto label_2bc470;
        case 0x2bc48cu: goto label_2bc48c;
        case 0x2bc4acu: goto label_2bc4ac;
        case 0x2bc4c8u: goto label_2bc4c8;
        case 0x2bc4e4u: goto label_2bc4e4;
        case 0x2bc4f8u: goto label_2bc4f8;
        case 0x2bc510u: goto label_2bc510;
        case 0x2bc5acu: goto label_2bc5ac;
        case 0x2bc5bcu: goto label_2bc5bc;
        case 0x2bc708u: goto label_2bc708;
        case 0x2bc724u: goto label_2bc724;
        case 0x2bc734u: goto label_2bc734;
        case 0x2bc788u: goto label_2bc788;
        default: break;
    }

    ctx->pc = 0x2bc3f0u;

    // 0x2bc3f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bc3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bc3f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2bc3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2bc3f8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2bc3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2bc3fc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2bc3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2bc400: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2bc400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2bc404: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2bc404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc408: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2bc408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2bc40c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2bc40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2bc410: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bc410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bc414: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bc414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bc418: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2bc418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bc41c: 0x90860051  lbu         $a2, 0x51($a0)
    ctx->pc = 0x2bc41cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 81)));
    // 0x2bc420: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x2bc420u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bc424: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BC424u;
    {
        const bool branch_taken_0x2bc424 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC424u;
        // 0x2bc428: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc424) {
            ctx->pc = 0x2BC478u;
            goto label_2bc478;
        }
    }
    ctx->pc = 0x2BC42Cu;
    // 0x2bc42c: 0xc6820020  lwc1        $f2, 0x20($s4)
    ctx->pc = 0x2bc42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc430: 0xc6a100d0  lwc1        $f1, 0xD0($s5)
    ctx->pc = 0x2bc430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc434: 0xc6840028  lwc1        $f4, 0x28($s4)
    ctx->pc = 0x2bc434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bc438: 0xc6a300d8  lwc1        $f3, 0xD8($s5)
    ctx->pc = 0x2bc438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bc43c: 0xc6a000dc  lwc1        $f0, 0xDC($s5)
    ctx->pc = 0x2bc43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc440: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2bc440u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2bc444: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2bc444u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2bc448: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2bc448u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2bc44c: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x2bc44cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2bc450: 0x46010044  c1          0x10044
    ctx->pc = 0x2bc450u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x2bc454: 0x0  nop
    ctx->pc = 0x2bc454u;
    // NOP
    // 0x2bc458: 0x0  nop
    ctx->pc = 0x2bc458u;
    // NOP
    // 0x2bc45c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2bc45cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc460: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC460u;
    {
        const bool branch_taken_0x2bc460 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc460) {
            ctx->pc = 0x2BC478u;
            goto label_2bc478;
        }
    }
    ctx->pc = 0x2BC468u;
    // 0x2bc468: 0xc0b21a8  jal         func_2C86A0
    ctx->pc = 0x2BC468u;
    SET_GPR_U32(ctx, 31, 0x2BC470u);
    ctx->pc = 0x2C86A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86A0u, 0x2BC468u, 0x2BC470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC470u;
label_2bc470:
    // 0x2bc470: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x2BC470u;
    {
        const bool branch_taken_0x2bc470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc470) {
            ctx->pc = 0x2BC788u;
            goto label_2bc788;
        }
    }
    ctx->pc = 0x2BC478u;
label_2bc478:
    // 0x2bc478: 0x8ea50088  lw          $a1, 0x88($s5)
    ctx->pc = 0x2bc478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x2bc47c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC47Cu;
    {
        const bool branch_taken_0x2bc47c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC47Cu;
        // 0x2bc480: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc47c) {
            ctx->pc = 0x2BC498u;
            goto label_2bc498;
        }
    }
    ctx->pc = 0x2BC484u;
    // 0x2bc484: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2BC484u;
    SET_GPR_U32(ctx, 31, 0x2BC48Cu);
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2BC484u, 0x2BC48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC48Cu;
label_2bc48c:
    // 0x2bc48c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2BC48Cu;
    {
        const bool branch_taken_0x2bc48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC48Cu;
        // 0x2bc490: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc48c) {
            ctx->pc = 0x2BC4D0u;
            goto label_2bc4d0;
        }
    }
    ctx->pc = 0x2BC494u;
    // 0x2bc494: 0x0  nop
    ctx->pc = 0x2bc494u;
    // NOP
label_2bc498:
    // 0x2bc498: 0x8ea50090  lw          $a1, 0x90($s5)
    ctx->pc = 0x2bc498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x2bc49c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC49Cu;
    {
        const bool branch_taken_0x2bc49c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC49Cu;
        // 0x2bc4a0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc49c) {
            ctx->pc = 0x2BC4B8u;
            goto label_2bc4b8;
        }
    }
    ctx->pc = 0x2BC4A4u;
    // 0x2bc4a4: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2BC4A4u;
    SET_GPR_U32(ctx, 31, 0x2BC4ACu);
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2BC4A4u, 0x2BC4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4ACu;
label_2bc4ac:
    // 0x2bc4ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BC4ACu;
    {
        const bool branch_taken_0x2bc4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4ACu;
        // 0x2bc4b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc4ac) {
            ctx->pc = 0x2BC4D0u;
            goto label_2bc4d0;
        }
    }
    ctx->pc = 0x2BC4B4u;
    // 0x2bc4b4: 0x0  nop
    ctx->pc = 0x2bc4b4u;
    // NOP
label_2bc4b8:
    // 0x2bc4b8: 0x82a60082  lb          $a2, 0x82($s5)
    ctx->pc = 0x2bc4b8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 130)));
    // 0x2bc4bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bc4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc4c0: 0xc0b22ac  jal         func_2C8AB0
    ctx->pc = 0x2BC4C0u;
    SET_GPR_U32(ctx, 31, 0x2BC4C8u);
    ctx->pc = 0x2BC4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4C0u;
    // 0x2bc4c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8AB0u, 0x2BC4C0u, 0x2BC4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4C8u;
label_2bc4c8:
    // 0x2bc4c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bc4c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc4cc: 0x0  nop
    ctx->pc = 0x2bc4ccu;
    // NOP
label_2bc4d0:
    // 0x2bc4d0: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BC4D0u;
    {
        const bool branch_taken_0x2bc4d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4D0u;
        // 0x2bc4d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc4d0) {
            ctx->pc = 0x2BC518u;
            goto label_2bc518;
        }
    }
    ctx->pc = 0x2BC4D8u;
    // 0x2bc4d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bc4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc4dc: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x2BC4DCu;
    SET_GPR_U32(ctx, 31, 0x2BC4E4u);
    ctx->pc = 0x2BC4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4DCu;
    // 0x2bc4e0: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x2BC4DCu, 0x2BC4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4E4u;
label_2bc4e4:
    // 0x2bc4e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2bc4e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2bc4e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bc4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc4ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bc4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc4f0: 0xc0b2288  jal         func_2C8A20
    ctx->pc = 0x2BC4F0u;
    SET_GPR_U32(ctx, 31, 0x2BC4F8u);
    ctx->pc = 0x2BC4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4F0u;
    // 0x2bc4f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8A20u, 0x2BC4F0u, 0x2BC4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4F8u;
label_2bc4f8:
    // 0x2bc4f8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2bc4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bc4fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bc4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc500: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bc500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc504: 0xaea20094  sw          $v0, 0x94($s5)
    ctx->pc = 0x2bc504u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 2));
    // 0x2bc508: 0xc0b25e8  jal         func_2C97A0
    ctx->pc = 0x2BC508u;
    SET_GPR_U32(ctx, 31, 0x2BC510u);
    ctx->pc = 0x2BC50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC508u;
    // 0x2bc50c: 0xae8207c0  sw          $v0, 0x7C0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1984), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C97A0u, 0x2BC508u, 0x2BC510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC510u;
label_2bc510:
    // 0x2bc510: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC510u;
    {
        const bool branch_taken_0x2bc510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC510u;
        // 0x2bc514: 0xa6a200e4  sh          $v0, 0xE4($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 228), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc510) {
            ctx->pc = 0x2BC520u;
            goto label_2bc520;
        }
    }
    ctx->pc = 0x2BC518u;
label_2bc518:
    // 0x2bc518: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2BC518u;
    {
        const bool branch_taken_0x2bc518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC518u;
        // 0x2bc51c: 0xaea00088  sw          $zero, 0x88($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc518) {
            ctx->pc = 0x2BC710u;
            goto label_2bc710;
        }
    }
    ctx->pc = 0x2BC520u;
label_2bc520:
    // 0x2bc520: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2bc520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc524: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bc524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc528: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2BC528u;
    {
        const bool branch_taken_0x2bc528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bc528) {
            ctx->pc = 0x2BC55Cu;
            goto label_2bc55c;
        }
    }
    ctx->pc = 0x2BC530u;
    // 0x2bc530: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x2bc530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc534: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bc534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc538: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC538u;
    {
        const bool branch_taken_0x2bc538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC538u;
        // 0x2bc53c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc538) {
            ctx->pc = 0x2BC554u;
            goto label_2bc554;
        }
    }
    ctx->pc = 0x2BC540u;
    // 0x2bc540: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2bc540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc544: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bc544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc548: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC548u;
    {
        const bool branch_taken_0x2bc548 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC548u;
        // 0x2bc54c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc548) {
            ctx->pc = 0x2BC554u;
            goto label_2bc554;
        }
    }
    ctx->pc = 0x2BC550u;
    // 0x2bc550: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2bc550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc554:
    // 0x2bc554: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2BC554u;
    {
        const bool branch_taken_0x2bc554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC554u;
        // 0x2bc558: 0x8e4306ac  lw          $v1, 0x6AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc554) {
            ctx->pc = 0x2BC58Cu;
            goto label_2bc58c;
        }
    }
    ctx->pc = 0x2BC55Cu;
label_2bc55c:
    // 0x2bc55c: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2bc55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc560: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bc560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc564: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2BC564u;
    {
        const bool branch_taken_0x2bc564 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC564u;
        // 0x2bc568: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc564) {
            ctx->pc = 0x2BC588u;
            goto label_2bc588;
        }
    }
    ctx->pc = 0x2BC56Cu;
    // 0x2bc56c: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x2bc56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc570: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2bc570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc574: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC574u;
    {
        const bool branch_taken_0x2bc574 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC574u;
        // 0x2bc578: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc574) {
            ctx->pc = 0x2BC580u;
            goto label_2bc580;
        }
    }
    ctx->pc = 0x2BC57Cu;
    // 0x2bc57c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2bc57cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bc580:
    // 0x2bc580: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2BC580u;
    {
        const bool branch_taken_0x2bc580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc580) {
            ctx->pc = 0x2BC588u;
            goto label_2bc588;
        }
    }
    ctx->pc = 0x2BC588u;
label_2bc588:
    // 0x2bc588: 0x8e4306ac  lw          $v1, 0x6AC($s2)
    ctx->pc = 0x2bc588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
label_2bc58c:
    // 0x2bc58c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2bc58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc590: 0x92a20101  lbu         $v0, 0x101($s5)
    ctx->pc = 0x2bc590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 257)));
    // 0x2bc594: 0x92b60031  lbu         $s6, 0x31($s5)
    ctx->pc = 0x2bc594u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 49)));
    // 0x2bc598: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2bc598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2bc59c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC59Cu;
    {
        const bool branch_taken_0x2bc59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC59Cu;
        // 0x2bc5a0: 0x3800a  movz        $s0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc59c) {
            ctx->pc = 0x2BC5B4u;
            goto label_2bc5b4;
        }
    }
    ctx->pc = 0x2BC5A4u;
    // 0x2bc5a4: 0xc0b34d0  jal         func_2CD340
    ctx->pc = 0x2BC5A4u;
    SET_GPR_U32(ctx, 31, 0x2BC5ACu);
    ctx->pc = 0x2CD340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD340u, 0x2BC5A4u, 0x2BC5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC5ACu;
label_2bc5ac:
    // 0x2bc5ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC5ACu;
    {
        const bool branch_taken_0x2bc5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC5ACu;
        // 0x2bc5b0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc5ac) {
            ctx->pc = 0x2BC5BCu;
            goto label_2bc5bc;
        }
    }
    ctx->pc = 0x2BC5B4u;
label_2bc5b4:
    // 0x2bc5b4: 0xc0ae860  jal         func_2BA180
    ctx->pc = 0x2BC5B4u;
    SET_GPR_U32(ctx, 31, 0x2BC5BCu);
    ctx->pc = 0x2BC5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC5B4u;
    // 0x2bc5b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA180u, 0x2BC5B4u, 0x2BC5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC5BCu;
label_2bc5bc:
    // 0x2bc5bc: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bc5bcu;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2bc5c0: 0x48252001  qmfc2.i     $a1, $vf4
    ctx->pc = 0x2bc5c0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc5c4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2bc5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2bc5c8: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2bc5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2bc5cc: 0x24637700  addiu       $v1, $v1, 0x7700
    ctx->pc = 0x2bc5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30464));
    // 0x2bc5d0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2bc5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bc5d4: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x2bc5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x2bc5d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bc5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2bc5dc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2bc5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2bc5e0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2bc5e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc5e4: 0x24637600  addiu       $v1, $v1, 0x7600
    ctx->pc = 0x2bc5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30208));
    // 0x2bc5e8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2bc5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2bc5ec: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x2bc5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2bc5f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bc5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bc5f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc5f8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2bc5f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc5fc: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bc5fcu;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2bc600: 0x48232001  qmfc2.i     $v1, $vf4
    ctx->pc = 0x2bc600u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc604: 0x92a50031  lbu         $a1, 0x31($s5)
    ctx->pc = 0x2bc604u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 49)));
    // 0x2bc608: 0x30640fff  andi        $a0, $v1, 0xFFF
    ctx->pc = 0x2bc608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x2bc60c: 0x92a30106  lbu         $v1, 0x106($s5)
    ctx->pc = 0x2bc60cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 262)));
    // 0x2bc610: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2bc610u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2bc614: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x2bc614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2bc618: 0x94a50078  lhu         $a1, 0x78($a1)
    ctx->pc = 0x2bc618u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x2bc61c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC61Cu;
    {
        const bool branch_taken_0x2bc61c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC61Cu;
        // 0x2bc620: 0x85202b  sltu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc61c) {
            ctx->pc = 0x2BC628u;
            goto label_2bc628;
        }
    }
    ctx->pc = 0x2BC624u;
    // 0x2bc624: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x2bc624u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2bc628:
    // 0x2bc628: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2BC628u;
    {
        const bool branch_taken_0x2bc628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc628) {
            ctx->pc = 0x2BC6B8u;
            goto label_2bc6b8;
        }
    }
    ctx->pc = 0x2BC630u;
    // 0x2bc630: 0x8e4406ac  lw          $a0, 0x6AC($s2)
    ctx->pc = 0x2bc630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x2bc634: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x2bc634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2bc638: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC638u;
    {
        const bool branch_taken_0x2bc638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC638u;
        // 0x2bc63c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc638) {
            ctx->pc = 0x2BC648u;
            goto label_2bc648;
        }
    }
    ctx->pc = 0x2BC640u;
    // 0x2bc640: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2BC640u;
    {
        const bool branch_taken_0x2bc640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc640) {
            ctx->pc = 0x2BC6B0u;
            goto label_2bc6b0;
        }
    }
    ctx->pc = 0x2BC648u;
label_2bc648:
    // 0x2bc648: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x2bc648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2bc64c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC64Cu;
    {
        const bool branch_taken_0x2bc64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC64Cu;
        // 0x2bc650: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc64c) {
            ctx->pc = 0x2BC660u;
            goto label_2bc660;
        }
    }
    ctx->pc = 0x2BC654u;
    // 0x2bc654: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2BC654u;
    {
        const bool branch_taken_0x2bc654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc654) {
            ctx->pc = 0x2BC6B0u;
            goto label_2bc6b0;
        }
    }
    ctx->pc = 0x2BC65Cu;
    // 0x2bc65c: 0x0  nop
    ctx->pc = 0x2bc65cu;
    // NOP
label_2bc660:
    // 0x2bc660: 0x9243083b  lbu         $v1, 0x83B($s2)
    ctx->pc = 0x2bc660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2107)));
    // 0x2bc664: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2bc664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2bc668: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC668u;
    {
        const bool branch_taken_0x2bc668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC668u;
        // 0x2bc66c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc668) {
            ctx->pc = 0x2BC678u;
            goto label_2bc678;
        }
    }
    ctx->pc = 0x2BC670u;
    // 0x2bc670: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2BC670u;
    {
        const bool branch_taken_0x2bc670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc670) {
            ctx->pc = 0x2BC6B0u;
            goto label_2bc6b0;
        }
    }
    ctx->pc = 0x2BC678u;
label_2bc678:
    // 0x2bc678: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x2bc678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2bc67c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC67Cu;
    {
        const bool branch_taken_0x2bc67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC67Cu;
        // 0x2bc680: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc67c) {
            ctx->pc = 0x2BC690u;
            goto label_2bc690;
        }
    }
    ctx->pc = 0x2BC684u;
    // 0x2bc684: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BC684u;
    {
        const bool branch_taken_0x2bc684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc684) {
            ctx->pc = 0x2BC6B0u;
            goto label_2bc6b0;
        }
    }
    ctx->pc = 0x2BC68Cu;
    // 0x2bc68c: 0x0  nop
    ctx->pc = 0x2bc68cu;
    // NOP
label_2bc690:
    // 0x2bc690: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x2bc690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x2bc694: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC694u;
    {
        const bool branch_taken_0x2bc694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC694u;
        // 0x2bc698: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc694) {
            ctx->pc = 0x2BC6A8u;
            goto label_2bc6a8;
        }
    }
    ctx->pc = 0x2BC69Cu;
    // 0x2bc69c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC69Cu;
    {
        const bool branch_taken_0x2bc69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc69c) {
            ctx->pc = 0x2BC6B0u;
            goto label_2bc6b0;
        }
    }
    ctx->pc = 0x2BC6A4u;
    // 0x2bc6a4: 0x0  nop
    ctx->pc = 0x2bc6a4u;
    // NOP
label_2bc6a8:
    // 0x2bc6a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2bc6a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc6ac: 0x0  nop
    ctx->pc = 0x2bc6acu;
    // NOP
label_2bc6b0:
    // 0x2bc6b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC6B0u;
    {
        const bool branch_taken_0x2bc6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc6b0) {
            ctx->pc = 0x2BC6C0u;
            goto label_2bc6c0;
        }
    }
    ctx->pc = 0x2BC6B8u;
label_2bc6b8:
    // 0x2bc6b8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2bc6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bc6bc: 0x0  nop
    ctx->pc = 0x2bc6bcu;
    // NOP
label_2bc6c0:
    // 0x2bc6c0: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x2bc6c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2bc6c4: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2bc6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2bc6c8: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x2bc6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2bc6cc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2bc6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2bc6d0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2bc6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2bc6d4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2bc6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2bc6d8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2bc6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2bc6dc: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x2bc6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2bc6e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2bc6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bc6e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2bc6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2bc6e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bc6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc6ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bc6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bc6f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc6f4: 0x90460090  lbu         $a2, 0x90($v0)
    ctx->pc = 0x2bc6f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2bc6f8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC6F8u;
    {
        const bool branch_taken_0x2bc6f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC6F8u;
        // 0x2bc6fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc6f8) {
            ctx->pc = 0x2BC710u;
            goto label_2bc710;
        }
    }
    ctx->pc = 0x2BC700u;
    // 0x2bc700: 0xc0b21a8  jal         func_2C86A0
    ctx->pc = 0x2BC700u;
    SET_GPR_U32(ctx, 31, 0x2BC708u);
    ctx->pc = 0x2BC704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC700u;
    // 0x2bc704: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C86A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86A0u, 0x2BC700u, 0x2BC708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC708u;
label_2bc708:
    // 0x2bc708: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2BC708u;
    {
        const bool branch_taken_0x2bc708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc708) {
            ctx->pc = 0x2BC788u;
            goto label_2bc788;
        }
    }
    ctx->pc = 0x2BC710u;
label_2bc710:
    // 0x2bc710: 0x92a20101  lbu         $v0, 0x101($s5)
    ctx->pc = 0x2bc710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 257)));
    // 0x2bc714: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC714u;
    {
        const bool branch_taken_0x2bc714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC714u;
        // 0x2bc718: 0x92b00031  lbu         $s0, 0x31($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 49)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc714) {
            ctx->pc = 0x2BC72Cu;
            goto label_2bc72c;
        }
    }
    ctx->pc = 0x2BC71Cu;
    // 0x2bc71c: 0xc0b34d0  jal         func_2CD340
    ctx->pc = 0x2BC71Cu;
    SET_GPR_U32(ctx, 31, 0x2BC724u);
    ctx->pc = 0x2CD340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD340u, 0x2BC71Cu, 0x2BC724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC724u;
label_2bc724:
    // 0x2bc724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC724u;
    {
        const bool branch_taken_0x2bc724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC724u;
        // 0x2bc728: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc724) {
            ctx->pc = 0x2BC734u;
            goto label_2bc734;
        }
    }
    ctx->pc = 0x2BC72Cu;
label_2bc72c:
    // 0x2bc72c: 0xc0ae860  jal         func_2BA180
    ctx->pc = 0x2BC72Cu;
    SET_GPR_U32(ctx, 31, 0x2BC734u);
    ctx->pc = 0x2BC730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC72Cu;
    // 0x2bc730: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA180u, 0x2BC72Cu, 0x2BC734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC734u;
label_2bc734:
    // 0x2bc734: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2bc734u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2bc738: 0x48272001  qmfc2.i     $a3, $vf4
    ctx->pc = 0x2bc738u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc73c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2bc73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2bc740: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2bc740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2bc744: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x2bc744u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2bc748: 0x24427700  addiu       $v0, $v0, 0x7700
    ctx->pc = 0x2bc748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30464));
    // 0x2bc74c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bc74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc750: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc754: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2bc754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2bc758: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2bc758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2bc75c: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x2bc75cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2bc760: 0x24637600  addiu       $v1, $v1, 0x7600
    ctx->pc = 0x2bc760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30208));
    // 0x2bc764: 0x30e2001f  andi        $v0, $a3, 0x1F
    ctx->pc = 0x2bc764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x2bc768: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2bc768u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2bc76c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2bc76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2bc770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bc774: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2bc774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc778: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2bc778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2bc77c: 0x90460088  lbu         $a2, 0x88($v0)
    ctx->pc = 0x2bc77cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2bc780: 0xc0b21a8  jal         func_2C86A0
    ctx->pc = 0x2BC780u;
    SET_GPR_U32(ctx, 31, 0x2BC788u);
    ctx->pc = 0x2BC784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC780u;
    // 0x2bc784: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C86A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86A0u, 0x2BC780u, 0x2BC788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC788u;
label_2bc788:
    // 0x2bc788: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2bc788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bc78c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2bc78cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bc790: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2bc790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bc794: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2bc794u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bc798: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2bc798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bc79c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2bc79cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc7a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2bc7a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc7a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2bc7a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc7a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bc7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC7ACu;
        // 0x2bc7b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC7B4u;
}
