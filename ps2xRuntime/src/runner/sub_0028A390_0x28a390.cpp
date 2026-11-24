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

// Function: sub_0028A390
// Address: 0x28a390 - 0x28a4b8
void sub_0028A390_0x28a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A390_0x28a390");
#endif

    switch (ctx->pc) {
        case 0x28a3f0u: goto label_28a3f0;
        case 0x28a430u: goto label_28a430;
        case 0x28a464u: goto label_28a464;
        case 0x28a4a4u: goto label_28a4a4;
        default: break;
    }

    ctx->pc = 0x28a390u;

    // 0x28a390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28a390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28a394: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28a394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x28a398: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28a398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28a39c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28a39cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a3a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28a3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28a3a4: 0x24426b00  addiu       $v0, $v0, 0x6B00
    ctx->pc = 0x28a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
    // 0x28a3a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28a3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28a3ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28a3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3b0: 0x8ca8004c  lw          $t0, 0x4C($a1)
    ctx->pc = 0x28a3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x28a3b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28a3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28a3b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28a3bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3c0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28a3c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a3c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x28a3c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x28a3c8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x28a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x28a3cc: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x28a3ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x28a3d0: 0x8ca40050  lw          $a0, 0x50($a1)
    ctx->pc = 0x28a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x28a3d4: 0x9106006a  lbu         $a2, 0x6A($t0)
    ctx->pc = 0x28a3d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 106)));
    // 0x28a3d8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x28a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28a3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a3e0: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x28a3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x28a3e4: 0x80490000  lb          $t1, 0x0($v0)
    ctx->pc = 0x28a3e4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a3e8: 0xc0603b4  jal         func_180ED0
    ctx->pc = 0x28A3E8u;
    SET_GPR_U32(ctx, 31, 0x28A3F0u);
    ctx->pc = 0x28A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A3E8u;
    // 0x28a3ec: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x180ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180ED0u, 0x28A3E8u, 0x28A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A3F0u;
label_28a3f0:
    // 0x28a3f0: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x28a3f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28a3f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28a3f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a3f8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x28a3fc: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x28a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x28a400: 0x24426b00  addiu       $v0, $v0, 0x6B00
    ctx->pc = 0x28a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
    // 0x28a404: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x28a404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x28a408: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28a408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a40c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x28a40cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x28a410: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x28a410u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x28a414: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x28a414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28a418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a41c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x28a41cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a420: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28a424: 0x23e3c  dsll32      $a3, $v0, 24
    ctx->pc = 0x28a424u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28a428: 0xc0a84b4  jal         func_2A12D0
    ctx->pc = 0x28A428u;
    SET_GPR_U32(ctx, 31, 0x28A430u);
    ctx->pc = 0x28A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A428u;
    // 0x28a42c: 0x73e3f  dsra32      $a3, $a3, 24 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A12D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A12D0u, 0x28A428u, 0x28A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A430u;
label_28a430:
    // 0x28a430: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x28a430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28a434: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28a434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a438: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28a438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x28a43c: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x28a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x28a440: 0x24426b01  addiu       $v0, $v0, 0x6B01
    ctx->pc = 0x28a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27393));
    // 0x28a444: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x28a444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x28a448: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28a448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a44c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x28a44cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x28a450: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x28a450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28a454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a458: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x28a458u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a45c: 0xc0a84b4  jal         func_2A12D0
    ctx->pc = 0x28A45Cu;
    SET_GPR_U32(ctx, 31, 0x28A464u);
    ctx->pc = 0x28A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A45Cu;
    // 0x28a460: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A12D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A12D0u, 0x28A45Cu, 0x28A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A464u;
label_28a464:
    // 0x28a464: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x28a464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x28a468: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28a468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a46c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x28a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x28a470: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x28a470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x28a474: 0x24426b01  addiu       $v0, $v0, 0x6B01
    ctx->pc = 0x28a474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27393));
    // 0x28a478: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x28a478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x28a47c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x28a47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a480: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x28a480u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x28a484: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x28a484u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x28a488: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x28a488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x28a48c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28a490: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x28a490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a494: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28a494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28a498: 0x23e3c  dsll32      $a3, $v0, 24
    ctx->pc = 0x28a498u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28a49c: 0xc0a84b4  jal         func_2A12D0
    ctx->pc = 0x28A49Cu;
    SET_GPR_U32(ctx, 31, 0x28A4A4u);
    ctx->pc = 0x28A4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A49Cu;
    // 0x28a4a0: 0x73e3f  dsra32      $a3, $a3, 24 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A12D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A12D0u, 0x28A49Cu, 0x28A4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A4A4u;
label_28a4a4:
    // 0x28a4a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28a4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a4a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28a4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a4ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28a4acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x28A4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4B0u;
        // 0x28a4b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A4B8u;
}
