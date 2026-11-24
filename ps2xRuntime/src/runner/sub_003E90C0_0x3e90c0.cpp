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

// Function: sub_003E90C0
// Address: 0x3e90c0 - 0x3e9348
void sub_003E90C0_0x3e90c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E90C0_0x3e90c0");
#endif

    switch (ctx->pc) {
        case 0x3e9100u: goto label_3e9100;
        case 0x3e9118u: goto label_3e9118;
        case 0x3e9134u: goto label_3e9134;
        case 0x3e9144u: goto label_3e9144;
        case 0x3e915cu: goto label_3e915c;
        case 0x3e9174u: goto label_3e9174;
        case 0x3e9184u: goto label_3e9184;
        case 0x3e9198u: goto label_3e9198;
        case 0x3e91a8u: goto label_3e91a8;
        case 0x3e91b8u: goto label_3e91b8;
        case 0x3e91c8u: goto label_3e91c8;
        case 0x3e91dcu: goto label_3e91dc;
        case 0x3e920cu: goto label_3e920c;
        case 0x3e9214u: goto label_3e9214;
        case 0x3e9228u: goto label_3e9228;
        case 0x3e9230u: goto label_3e9230;
        case 0x3e9244u: goto label_3e9244;
        case 0x3e924cu: goto label_3e924c;
        default: break;
    }

    ctx->pc = 0x3e90c0u;

    // 0x3e90c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3e90c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3e90c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e90c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3e90c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e90c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3e90cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3e90ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3e90d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e90d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e90d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e90d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e90d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e90d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e90dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3e90dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e90e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e90e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e90e4: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x3e90e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3e90e8: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3e90e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3e90ec: 0x7c822b60  sq          $v0, 0x2B60($a0)
    ctx->pc = 0x3e90ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 11104), GPR_VEC(ctx, 2));
    // 0x3e90f0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3e90f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e90f4: 0x7c822b70  sq          $v0, 0x2B70($a0)
    ctx->pc = 0x3e90f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 11120), GPR_VEC(ctx, 2));
    // 0x3e90f8: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3E90F8u;
    SET_GPR_U32(ctx, 31, 0x3E9100u);
    ctx->pc = 0x3E90FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E90F8u;
    // 0x3e90fc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3E90F8u, 0x3E9100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9100u;
label_3e9100:
    // 0x3e9100: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e9100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3e9104: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3e9104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e9108: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e9108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e910c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3e910cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9110: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x3E9110u;
    SET_GPR_U32(ctx, 31, 0x3E9118u);
    ctx->pc = 0x3E9114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9110u;
    // 0x3e9114: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x3E9110u, 0x3E9118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9118u;
label_3e9118:
    // 0x3e9118: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e9118u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3e911c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3e911cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3e9120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e9120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e9124: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3e9124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3e9128: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3e9128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e912c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3E912Cu;
    SET_GPR_U32(ctx, 31, 0x3E9134u);
    ctx->pc = 0x3E9130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E912Cu;
    // 0x3e9130: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3E912Cu, 0x3E9134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9134u;
label_3e9134:
    // 0x3e9134: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3e9134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3e9138: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x3e9138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3e913c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3E913Cu;
    SET_GPR_U32(ctx, 31, 0x3E9144u);
    ctx->pc = 0x3E9140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E913Cu;
    // 0x3e9140: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3E913Cu, 0x3E9144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9144u;
label_3e9144:
    // 0x3e9144: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e9144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3e9148: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e9148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e914c: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x3e914cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x3e9150: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x3e9150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e9154: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x3E9154u;
    SET_GPR_U32(ctx, 31, 0x3E915Cu);
    ctx->pc = 0x3E9158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9154u;
    // 0x3e9158: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x3E9154u, 0x3E915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E915Cu;
label_3e915c:
    // 0x3e915c: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x3e915cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3e9160: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3e9160u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3e9164: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3e9164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e9168: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e9168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e916c: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x3E916Cu;
    SET_GPR_U32(ctx, 31, 0x3E9174u);
    ctx->pc = 0x3E9170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E916Cu;
    // 0x3e9170: 0x24c65c70  addiu       $a2, $a2, 0x5C70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x3E916Cu, 0x3E9174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9174u;
label_3e9174:
    // 0x3e9174: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e9174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e9178: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3e9178u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3e917c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3E917Cu;
    SET_GPR_U32(ctx, 31, 0x3E9184u);
    ctx->pc = 0x3E9180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E917Cu;
    // 0x3e9180: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3E917Cu, 0x3E9184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9184u;
label_3e9184:
    // 0x3e9184: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x3e9184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9188: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e9188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e918c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3e918cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3e9190: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3E9190u;
    SET_GPR_U32(ctx, 31, 0x3E9198u);
    ctx->pc = 0x3E9194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9190u;
    // 0x3e9194: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3E9190u, 0x3E9198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9198u;
label_3e9198:
    // 0x3e9198: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e9198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e919c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3e919cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3e91a0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3E91A0u;
    SET_GPR_U32(ctx, 31, 0x3E91A8u);
    ctx->pc = 0x3E91A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E91A0u;
    // 0x3e91a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3E91A0u, 0x3E91A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E91A8u;
label_3e91a8:
    // 0x3e91a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e91a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e91ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e91acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e91b0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3E91B0u;
    SET_GPR_U32(ctx, 31, 0x3E91B8u);
    ctx->pc = 0x3E91B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E91B0u;
    // 0x3e91b4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3E91B0u, 0x3E91B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E91B8u;
label_3e91b8:
    // 0x3e91b8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3e91b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3e91bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e91bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e91c0: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3E91C0u;
    SET_GPR_U32(ctx, 31, 0x3E91C8u);
    ctx->pc = 0x3E91C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E91C0u;
    // 0x3e91c4: 0x24a549e0  addiu       $a1, $a1, 0x49E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3E91C0u, 0x3E91C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E91C8u;
label_3e91c8:
    // 0x3e91c8: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3e91c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3e91cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e91ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e91d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e91d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3e91d4: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3E91D4u;
    SET_GPR_U32(ctx, 31, 0x3E91DCu);
    ctx->pc = 0x3E91D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E91D4u;
    // 0x3e91d8: 0x24a549e0  addiu       $a1, $a1, 0x49E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3E91D4u, 0x3E91DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E91DCu;
label_3e91dc:
    // 0x3e91dc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3e91dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e91e0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E91E0u;
    {
        const bool branch_taken_0x3e91e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e91e0) {
            ctx->pc = 0x3E91F8u;
            goto label_3e91f8;
        }
    }
    ctx->pc = 0x3E91E8u;
    // 0x3e91e8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3e91e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e91ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E91ECu;
    {
        const bool branch_taken_0x3e91ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E91ECu;
        // 0x3e91f0: 0x7e222b80  sq          $v0, 0x2B80($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 11136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e91ec) {
            ctx->pc = 0x3E9200u;
            goto label_3e9200;
        }
    }
    ctx->pc = 0x3E91F4u;
    // 0x3e91f4: 0x0  nop
    ctx->pc = 0x3e91f4u;
    // NOP
label_3e91f8:
    // 0x3e91f8: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3e91f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3e91fc: 0x7e222b80  sq          $v0, 0x2B80($s1)
    ctx->pc = 0x3e91fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 11136), GPR_VEC(ctx, 2));
label_3e9200:
    // 0x3e9200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e9200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9204: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3E9204u;
    SET_GPR_U32(ctx, 31, 0x3E920Cu);
    ctx->pc = 0x3E9208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9204u;
    // 0x3e9208: 0x26252b80  addiu       $a1, $s1, 0x2B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 11136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3E9204u, 0x3E920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E920Cu;
label_3e920c:
    // 0x3e920c: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3E920Cu;
    SET_GPR_U32(ctx, 31, 0x3E9214u);
    ctx->pc = 0x3E9210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E920Cu;
    // 0x3e9210: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3E920Cu, 0x3E9214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9214u;
label_3e9214:
    // 0x3e9214: 0xe6202b90  swc1        $f0, 0x2B90($s1)
    ctx->pc = 0x3e9214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11152), bits); }
    // 0x3e9218: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3e9218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e921c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3e921cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3e9220: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3E9220u;
    SET_GPR_U32(ctx, 31, 0x3E9228u);
    ctx->pc = 0x3E9224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9220u;
    // 0x3e9224: 0x26262b80  addiu       $a2, $s1, 0x2B80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 11136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3E9220u, 0x3E9228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9228u;
label_3e9228:
    // 0x3e9228: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3E9228u;
    SET_GPR_U32(ctx, 31, 0x3E9230u);
    ctx->pc = 0x3E922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9228u;
    // 0x3e922c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3E9228u, 0x3E9230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9230u;
label_3e9230:
    // 0x3e9230: 0xa6222b96  sh          $v0, 0x2B96($s1)
    ctx->pc = 0x3e9230u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11158), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e9234: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e9234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9238: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3e9238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e923c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3E923Cu;
    SET_GPR_U32(ctx, 31, 0x3E9244u);
    ctx->pc = 0x3E9240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E923Cu;
    // 0x3e9240: 0x26262b80  addiu       $a2, $s1, 0x2B80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 11136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3E923Cu, 0x3E9244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9244u;
label_3e9244:
    // 0x3e9244: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3E9244u;
    SET_GPR_U32(ctx, 31, 0x3E924Cu);
    ctx->pc = 0x3E9248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9244u;
    // 0x3e9248: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3E9244u, 0x3E924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E924Cu;
label_3e924c:
    // 0x3e924c: 0xa6222b98  sh          $v0, 0x2B98($s1)
    ctx->pc = 0x3e924cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11160), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e9250: 0x86232b96  lh          $v1, 0x2B96($s1)
    ctx->pc = 0x3e9250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11158)));
    // 0x3e9254: 0x28610801  slti        $at, $v1, 0x801
    ctx->pc = 0x3e9254u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x3e9258: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9258u;
    {
        const bool branch_taken_0x3e9258 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9258u;
        // 0x3e925c: 0x2861f800  slti        $at, $v1, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9258) {
            ctx->pc = 0x3E9268u;
            goto label_3e9268;
        }
    }
    ctx->pc = 0x3E9260u;
    // 0x3e9260: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9260u;
    {
        const bool branch_taken_0x3e9260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9260u;
        // 0x3e9264: 0x2463f000  addiu       $v1, $v1, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9260) {
            ctx->pc = 0x3E9278u;
            goto label_3e9278;
        }
    }
    ctx->pc = 0x3E9268u;
label_3e9268:
    // 0x3e9268: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9268u;
    {
        const bool branch_taken_0x3e9268 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9268) {
            ctx->pc = 0x3E9278u;
            goto label_3e9278;
        }
    }
    ctx->pc = 0x3E9270u;
    // 0x3e9270: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3E9270u;
    {
        const bool branch_taken_0x3e9270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9270u;
        // 0x3e9274: 0x24631000  addiu       $v1, $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9270) {
            ctx->pc = 0x3E9278u;
            goto label_3e9278;
        }
    }
    ctx->pc = 0x3E9278u;
label_3e9278:
    // 0x3e9278: 0xa6232b96  sh          $v1, 0x2B96($s1)
    ctx->pc = 0x3e9278u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11158), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e927c: 0x86232b98  lh          $v1, 0x2B98($s1)
    ctx->pc = 0x3e927cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11160)));
    // 0x3e9280: 0x28610801  slti        $at, $v1, 0x801
    ctx->pc = 0x3e9280u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x3e9284: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9284u;
    {
        const bool branch_taken_0x3e9284 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9284u;
        // 0x3e9288: 0x2861f800  slti        $at, $v1, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9284) {
            ctx->pc = 0x3E9294u;
            goto label_3e9294;
        }
    }
    ctx->pc = 0x3E928Cu;
    // 0x3e928c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E928Cu;
    {
        const bool branch_taken_0x3e928c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E928Cu;
        // 0x3e9290: 0x2463f000  addiu       $v1, $v1, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e928c) {
            ctx->pc = 0x3E92A4u;
            goto label_3e92a4;
        }
    }
    ctx->pc = 0x3E9294u;
label_3e9294:
    // 0x3e9294: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9294u;
    {
        const bool branch_taken_0x3e9294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9294) {
            ctx->pc = 0x3E92A4u;
            goto label_3e92a4;
        }
    }
    ctx->pc = 0x3E929Cu;
    // 0x3e929c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3E929Cu;
    {
        const bool branch_taken_0x3e929c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E92A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E929Cu;
        // 0x3e92a0: 0x24631000  addiu       $v1, $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e929c) {
            ctx->pc = 0x3E92A4u;
            goto label_3e92a4;
        }
    }
    ctx->pc = 0x3E92A4u;
label_3e92a4:
    // 0x3e92a4: 0xa6232b98  sh          $v1, 0x2B98($s1)
    ctx->pc = 0x3e92a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11160), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e92a8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3e92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3e92ac: 0x86262b98  lh          $a2, 0x2B98($s1)
    ctx->pc = 0x3e92acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11160)));
    // 0x3e92b0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3e92b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3e92b4: 0x86252b96  lh          $a1, 0x2B96($s1)
    ctx->pc = 0x3e92b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11158)));
    // 0x3e92b8: 0xc6232b90  lwc1        $f3, 0x2B90($s1)
    ctx->pc = 0x3e92b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e92bc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3e92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3e92c0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3e92c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3e92c4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3e92c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e92c8: 0x3c03457f  lui         $v1, 0x457F
    ctx->pc = 0x3e92c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17791 << 16));
    // 0x3e92cc: 0x3464f000  ori         $a0, $v1, 0xF000
    ctx->pc = 0x3e92ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3e92d0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x3e92d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3e92d4: 0x3c0340d5  lui         $v1, 0x40D5
    ctx->pc = 0x3e92d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16597 << 16));
    // 0x3e92d8: 0x34635550  ori         $v1, $v1, 0x5550
    ctx->pc = 0x3e92d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21840);
    // 0x3e92dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e92dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e92e0: 0x46031102  mul.s       $f4, $f2, $f3
    ctx->pc = 0x3e92e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3e92e4: 0xc51823  subu        $v1, $a2, $a1
    ctx->pc = 0x3e92e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3e92e8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3e92e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3e92ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3e92ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3e92f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3e92f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3e92f4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3e92f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e92f8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3e92f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e92fc: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x3e92fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3e9300: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x3e9300u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3e9304: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3e9304u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3e9308: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3e9308u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3e930c: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x3e930cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x3e9310: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e9310u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3e9314: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3e9314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3e9318: 0x0  nop
    ctx->pc = 0x3e9318u;
    // NOP
    // 0x3e931c: 0xa6232b9a  sh          $v1, 0x2B9A($s1)
    ctx->pc = 0x3e931cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11162), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e9320: 0x86232b96  lh          $v1, 0x2B96($s1)
    ctx->pc = 0x3e9320u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11158)));
    // 0x3e9324: 0xa6232b94  sh          $v1, 0x2B94($s1)
    ctx->pc = 0x3e9324u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11156), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e9328: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e9328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e932c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3e932cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e9330: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e9330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e9334: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e9334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e9338: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e9338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e933c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e933cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9340: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9340u;
        // 0x3e9344: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9348u;
}
