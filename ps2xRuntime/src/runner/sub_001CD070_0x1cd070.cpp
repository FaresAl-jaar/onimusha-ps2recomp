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

// Function: sub_001CD070
// Address: 0x1cd070 - 0x1cd398
void sub_001CD070_0x1cd070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD070_0x1cd070");
#endif

    switch (ctx->pc) {
        case 0x1cd0b4u: goto label_1cd0b4;
        case 0x1cd0c0u: goto label_1cd0c0;
        case 0x1cd0d0u: goto label_1cd0d0;
        case 0x1cd0d8u: goto label_1cd0d8;
        case 0x1cd0f0u: goto label_1cd0f0;
        case 0x1cd118u: goto label_1cd118;
        case 0x1cd130u: goto label_1cd130;
        case 0x1cd154u: goto label_1cd154;
        case 0x1cd16cu: goto label_1cd16c;
        case 0x1cd240u: goto label_1cd240;
        case 0x1cd304u: goto label_1cd304;
        case 0x1cd344u: goto label_1cd344;
        case 0x1cd358u: goto label_1cd358;
        case 0x1cd364u: goto label_1cd364;
        default: break;
    }

    ctx->pc = 0x1cd070u;

    // 0x1cd070: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1cd070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1cd074: 0x3c040086  lui         $a0, 0x86
    ctx->pc = 0x1cd074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)134 << 16));
    // 0x1cd078: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1cd078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1cd07c: 0x248481d0  addiu       $a0, $a0, -0x7E30
    ctx->pc = 0x1cd07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934992));
    // 0x1cd080: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1cd080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1cd084: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1cd084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1cd088: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1cd088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1cd08c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd090: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1cd090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1cd094: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1cd094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1cd098: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1cd098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1cd09c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1cd09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1cd0a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cd0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cd0a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cd0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cd0a8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1cd0a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cd0ac: 0xc0743e4  jal         func_1D0F90
    ctx->pc = 0x1CD0ACu;
    SET_GPR_U32(ctx, 31, 0x1CD0B4u);
    ctx->pc = 0x1CD0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0ACu;
    // 0x1cd0b0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F90u, 0x1CD0ACu, 0x1CD0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0B4u;
label_1cd0b4:
    // 0x1cd0b4: 0x3c040086  lui         $a0, 0x86
    ctx->pc = 0x1cd0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)134 << 16));
    // 0x1cd0b8: 0xc074568  jal         func_1D15A0
    ctx->pc = 0x1CD0B8u;
    SET_GPR_U32(ctx, 31, 0x1CD0C0u);
    ctx->pc = 0x1CD0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0B8u;
    // 0x1cd0bc: 0x248481b0  addiu       $a0, $a0, -0x7E50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15A0u, 0x1CD0B8u, 0x1CD0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0C0u;
label_1cd0c0:
    // 0x1cd0c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0c8: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x1CD0C8u;
    SET_GPR_U32(ctx, 31, 0x1CD0D0u);
    ctx->pc = 0x1CD0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0C8u;
    // 0x1cd0cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x1CD0C8u, 0x1CD0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0D0u;
label_1cd0d0:
    // 0x1cd0d0: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1CD0D0u;
    SET_GPR_U32(ctx, 31, 0x1CD0D8u);
    ctx->pc = 0x1CD0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0D0u;
    // 0x1cd0d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1CD0D0u, 0x1CD0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0D8u;
label_1cd0d8:
    // 0x1cd0d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1cd0d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0dc: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1cd0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1cd0e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cd0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd0e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd0e8: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1CD0E8u;
    SET_GPR_U32(ctx, 31, 0x1CD0F0u);
    ctx->pc = 0x1CD0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD0E8u;
    // 0x1cd0ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1CD0E8u, 0x1CD0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD0F0u;
label_1cd0f0:
    // 0x1cd0f0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1cd0f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cd0f4: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1cd0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1cd0f8: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1cd0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1cd0fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd100: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x1cd100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1cd104: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1cd104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cd108: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1cd108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1cd10c: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1cd10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1cd110: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1CD110u;
    SET_GPR_U32(ctx, 31, 0x1CD118u);
    ctx->pc = 0x1CD114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD110u;
    // 0x1cd114: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1CD110u, 0x1CD118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD118u;
label_1cd118:
    // 0x1cd118: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1cd118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cd11c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1cd11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1cd120: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1cd120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1cd124: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x1cd124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x1cd128: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1CD128u;
    SET_GPR_U32(ctx, 31, 0x1CD130u);
    ctx->pc = 0x1CD12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD128u;
    // 0x1cd12c: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1CD128u, 0x1CD130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD130u;
label_1cd130:
    // 0x1cd130: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1cd130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cd134: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1cd134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1cd138: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1cd138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1cd13c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1cd13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cd140: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x1cd140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1cd144: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1cd144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cd148: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1cd148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cd14c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1CD14Cu;
    SET_GPR_U32(ctx, 31, 0x1CD154u);
    ctx->pc = 0x1CD150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD14Cu;
    // 0x1cd150: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1CD14Cu, 0x1CD154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD154u;
label_1cd154:
    // 0x1cd154: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1cd154u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cd158: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd15c: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1cd15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1cd160: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1cd160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cd164: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1CD164u;
    SET_GPR_U32(ctx, 31, 0x1CD16Cu);
    ctx->pc = 0x1CD168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD164u;
    // 0x1cd168: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1CD164u, 0x1CD16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD16Cu;
label_1cd16c:
    // 0x1cd16c: 0x27b600d0  addiu       $s6, $sp, 0xD0
    ctx->pc = 0x1cd16cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1cd170: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1cd170u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cd174: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x1cd174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1cd178: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1cd178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1cd17c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1cd17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cd180: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1cd180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cd184: 0x27b500d4  addiu       $s5, $sp, 0xD4
    ctx->pc = 0x1cd184u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1cd188: 0x27b700a4  addiu       $s7, $sp, 0xA4
    ctx->pc = 0x1cd188u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1cd18c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cd18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1cd190: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1cd190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1cd194: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cd194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1cd198: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd19c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd19cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd1a0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1cd1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1cd1a4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1cd1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1cd1a8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1cd1a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cd1ac: 0x0  nop
    ctx->pc = 0x1cd1acu;
    // NOP
    // 0x1cd1b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cd1b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1cd1b4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1cd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cd1b8: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x1cd1b8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x1cd1bc: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1cd1bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1cd1c0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1cd1c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd1c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd1c8: 0x0  nop
    ctx->pc = 0x1cd1c8u;
    // NOP
    // 0x1cd1cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cd1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cd1d0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x1cd1d0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1cd1d4: 0x0  nop
    ctx->pc = 0x1cd1d4u;
    // NOP
    // 0x1cd1d8: 0x0  nop
    ctx->pc = 0x1cd1d8u;
    // NOP
    // 0x1cd1dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD1DCu;
    {
        const bool branch_taken_0x1cd1dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD1DCu;
        // 0x1cd1e0: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd1dc) {
            ctx->pc = 0x1CD1F8u;
            goto label_1cd1f8;
        }
    }
    ctx->pc = 0x1CD1E4u;
    // 0x1cd1e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cd1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1cd1e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd1ec: 0x0  nop
    ctx->pc = 0x1cd1ecu;
    // NOP
    // 0x1cd1f0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1cd1f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1cd1f4: 0x0  nop
    ctx->pc = 0x1cd1f4u;
    // NOP
label_1cd1f8:
    // 0x1cd1f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd1f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd1fc: 0x0  nop
    ctx->pc = 0x1cd1fcu;
    // NOP
    // 0x1cd200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cd200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cd204: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD204u;
    {
        const bool branch_taken_0x1cd204 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD204u;
        // 0x1cd208: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd204) {
            ctx->pc = 0x1CD218u;
            goto label_1cd218;
        }
    }
    ctx->pc = 0x1CD20Cu;
    // 0x1cd20c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd210: 0x0  nop
    ctx->pc = 0x1cd210u;
    // NOP
    // 0x1cd214: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1cd214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cd218:
    // 0x1cd218: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1cd218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1cd21c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd220: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x1cd220u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x1cd224: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x1cd224u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x1cd228: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cd228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd22c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1cd22cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd230: 0x26315a38  addiu       $s1, $s1, 0x5A38
    ctx->pc = 0x1cd230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 23096));
    // 0x1cd234: 0x26105a50  addiu       $s0, $s0, 0x5A50
    ctx->pc = 0x1cd234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23120));
    // 0x1cd238: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x1cd238u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1cd23c: 0x0  nop
    ctx->pc = 0x1cd23cu;
    // NOP
label_1cd240:
    // 0x1cd240: 0x878587d0  lh          $a1, -0x7830($gp)
    ctx->pc = 0x1cd240u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936528)));
    // 0x1cd244: 0x3c044200  lui         $a0, 0x4200
    ctx->pc = 0x1cd244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16896 << 16));
    // 0x1cd248: 0x3c0243e7  lui         $v0, 0x43E7
    ctx->pc = 0x1cd248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17383 << 16));
    // 0x1cd24c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1cd24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1cd250: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1cd250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1cd254: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1cd254u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1cd258: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x1cd258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cd25c: 0x3c0243c4  lui         $v0, 0x43C4
    ctx->pc = 0x1cd25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17348 << 16));
    // 0x1cd260: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x1cd260u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1cd264: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x1cd264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1cd268: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x1cd268u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1cd26c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1cd26cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cd270: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1cd270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1cd274: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd278: 0x8ea90000  lw          $t1, 0x0($s5)
    ctx->pc = 0x1cd278u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1cd27c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1cd27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd280: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1cd280u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd284: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1cd284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1cd288: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x1cd288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x1cd28c: 0x3465fff0  ori         $a1, $v1, 0xFFF0
    ctx->pc = 0x1cd28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x1cd290: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cd290u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd294: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1cd294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1cd298: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cd298u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1cd29c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1cd29cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1cd2a0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1cd2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1cd2a4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1cd2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1cd2a8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1cd2a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1cd2ac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cd2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cd2b0: 0x246c0400  addiu       $t4, $v1, 0x400
    ctx->pc = 0x1cd2b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x1cd2b4: 0x24426540  addiu       $v0, $v0, 0x6540
    ctx->pc = 0x1cd2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25920));
    // 0x1cd2b8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1cd2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1cd2bc: 0x318c0fff  andi        $t4, $t4, 0xFFF
    ctx->pc = 0x1cd2bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4095);
    // 0x1cd2c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cd2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cd2c4: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x1cd2c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1cd2c8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1cd2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cd2cc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1cd2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd2d0: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x1cd2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1cd2d4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1cd2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cd2d8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1cd2d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1cd2dc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1cd2dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1cd2e0: 0x46152001  sub.s       $f0, $f4, $f21
    ctx->pc = 0x1cd2e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[21]);
    // 0x1cd2e4: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1cd2e4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cd2e8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1cd2e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1cd2ec: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x1cd2ecu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x1cd2f0: 0x46152000  add.s       $f0, $f4, $f21
    ctx->pc = 0x1cd2f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[21]);
    // 0x1cd2f4: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x1cd2f4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cd2f8: 0x46142b01  sub.s       $f12, $f5, $f20
    ctx->pc = 0x1cd2f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[20]);
    // 0x1cd2fc: 0xc075458  jal         func_1D5160
    ctx->pc = 0x1CD2FCu;
    SET_GPR_U32(ctx, 31, 0x1CD304u);
    ctx->pc = 0x1CD300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD2FCu;
    // 0x1cd300: 0x46142b80  add.s       $f14, $f5, $f20 (Delay Slot)
    ctx->f[14] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5160u, 0x1CD2FCu, 0x1CD304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD304u;
label_1cd304:
    // 0x1cd304: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1cd304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cd308: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cd308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1cd30c: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x1cd30cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cd310: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1cd310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1cd314: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1CD314u;
    {
        const bool branch_taken_0x1cd314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD314u;
        // 0x1cd318: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd314) {
            ctx->pc = 0x1CD240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd240;
        }
    }
    ctx->pc = 0x1CD31Cu;
    // 0x1cd31c: 0x878287d0  lh          $v0, -0x7830($gp)
    ctx->pc = 0x1cd31cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936528)));
    // 0x1cd320: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1cd320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1cd324: 0xa78287d0  sh          $v0, -0x7830($gp)
    ctx->pc = 0x1cd324u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936528), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cd328: 0x878287d0  lh          $v0, -0x7830($gp)
    ctx->pc = 0x1cd328u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936528)));
    // 0x1cd32c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1cd32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1cd330: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD330u;
    {
        const bool branch_taken_0x1cd330 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD330u;
        // 0x1cd334: 0xa78287d0  sh          $v0, -0x7830($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936528), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd330) {
            ctx->pc = 0x1CD358u;
            goto label_1cd358;
        }
    }
    ctx->pc = 0x1CD338u;
    // 0x1cd338: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cd338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd33c: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1CD33Cu;
    SET_GPR_U32(ctx, 31, 0x1CD344u);
    ctx->pc = 0x1CD340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD33Cu;
    // 0x1cd340: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1CD33Cu, 0x1CD344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD344u;
label_1cd344:
    // 0x1cd344: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1cd344u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1cd348: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cd348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd34c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cd34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd350: 0xc07461c  jal         func_1D1870
    ctx->pc = 0x1CD350u;
    SET_GPR_U32(ctx, 31, 0x1CD358u);
    ctx->pc = 0x1CD354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD350u;
    // 0x1cd354: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1870u, 0x1CD350u, 0x1CD358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD358u;
label_1cd358:
    // 0x1cd358: 0x3c040086  lui         $a0, 0x86
    ctx->pc = 0x1cd358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)134 << 16));
    // 0x1cd35c: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x1CD35Cu;
    SET_GPR_U32(ctx, 31, 0x1CD364u);
    ctx->pc = 0x1CD360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD35Cu;
    // 0x1cd360: 0x248481d0  addiu       $a0, $a0, -0x7E30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1CD35Cu, 0x1CD364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD364u;
label_1cd364:
    // 0x1cd364: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1cd364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cd368: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1cd368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cd36c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1cd36cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cd370: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1cd370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cd374: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1cd374u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cd378: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1cd378u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cd37c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1cd37cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cd380: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1cd380u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cd384: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1cd384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cd388: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cd388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cd38c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cd38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd390: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD390u;
        // 0x1cd394: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD398u;
}
