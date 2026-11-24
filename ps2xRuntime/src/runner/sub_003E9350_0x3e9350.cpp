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

// Function: sub_003E9350
// Address: 0x3e9350 - 0x3e9430
void sub_003E9350_0x3e9350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9350_0x3e9350");
#endif

    switch (ctx->pc) {
        case 0x3e9370u: goto label_3e9370;
        case 0x3e937cu: goto label_3e937c;
        case 0x3e938cu: goto label_3e938c;
        case 0x3e9398u: goto label_3e9398;
        case 0x3e93acu: goto label_3e93ac;
        case 0x3e93c0u: goto label_3e93c0;
        case 0x3e93ccu: goto label_3e93cc;
        case 0x3e93fcu: goto label_3e93fc;
        case 0x3e9420u: goto label_3e9420;
        default: break;
    }

    ctx->pc = 0x3e9350u;

    // 0x3e9350: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e9350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3e9354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e9354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e9358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e9358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e935c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e935cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9360: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3e9360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e9364: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3e9364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3e9368: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3E9368u;
    SET_GPR_U32(ctx, 31, 0x3E9370u);
    ctx->pc = 0x3E936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9368u;
    // 0x3e936c: 0x26062b80  addiu       $a2, $s0, 0x2B80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3E9368u, 0x3E9370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9370u;
label_3e9370:
    // 0x3e9370: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3e9370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e9374: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3E9374u;
    SET_GPR_U32(ctx, 31, 0x3E937Cu);
    ctx->pc = 0x3E9378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9374u;
    // 0x3e9378: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3E9374u, 0x3E937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E937Cu;
label_3e937c:
    // 0x3e937c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e9380: 0x26052b70  addiu       $a1, $s0, 0x2B70
    ctx->pc = 0x3e9380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11120));
    // 0x3e9384: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3E9384u;
    SET_GPR_U32(ctx, 31, 0x3E938Cu);
    ctx->pc = 0x3E9388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9384u;
    // 0x3e9388: 0x26062b60  addiu       $a2, $s0, 0x2B60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 11104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3E9384u, 0x3E938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E938Cu;
label_3e938c:
    // 0x3e938c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e938cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3e9390: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x3E9390u;
    SET_GPR_U32(ctx, 31, 0x3E9398u);
    ctx->pc = 0x3E9394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9390u;
    // 0x3e9394: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x3E9390u, 0x3E9398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9398u;
label_3e9398:
    // 0x3e9398: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e9398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3e939c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3e939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3e93a0: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x3e93a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x3e93a4: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x3E93A4u;
    SET_GPR_U32(ctx, 31, 0x3E93ACu);
    ctx->pc = 0x3E93A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E93A4u;
    // 0x3e93a8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x3E93A4u, 0x3E93ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E93ACu;
label_3e93ac:
    // 0x3e93ac: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3e93acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3e93b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3e93b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3e93b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3e93b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e93b8: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x3E93B8u;
    SET_GPR_U32(ctx, 31, 0x3E93C0u);
    ctx->pc = 0x3E93BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E93B8u;
    // 0x3e93bc: 0x24c65c70  addiu       $a2, $a2, 0x5C70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x3E93B8u, 0x3E93C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E93C0u;
label_3e93c0:
    // 0x3e93c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3e93c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3e93c4: 0xc076654  jal         func_1D9950
    ctx->pc = 0x3E93C4u;
    SET_GPR_U32(ctx, 31, 0x3E93CCu);
    ctx->pc = 0x3E93C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E93C4u;
    // 0x3e93c8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x3E93C4u, 0x3E93CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E93CCu;
label_3e93cc:
    // 0x3e93cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e93ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e93d0: 0x0  nop
    ctx->pc = 0x3e93d0u;
    // NOP
    // 0x3e93d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3e93d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e93d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E93D8u;
    {
        const bool branch_taken_0x3e93d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e93d8) {
            ctx->pc = 0x3E93F0u;
            goto label_3e93f0;
        }
    }
    ctx->pc = 0x3E93E0u;
    // 0x3e93e0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3e93e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e93e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3E93E4u;
    {
        const bool branch_taken_0x3e93e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E93E4u;
        // 0x3e93e8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e93e4) {
            ctx->pc = 0x3E9418u;
            goto label_3e9418;
        }
    }
    ctx->pc = 0x3E93ECu;
    // 0x3e93ec: 0x0  nop
    ctx->pc = 0x3e93ecu;
    // NOP
label_3e93f0:
    // 0x3e93f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3e93f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3e93f4: 0xc076654  jal         func_1D9950
    ctx->pc = 0x3E93F4u;
    SET_GPR_U32(ctx, 31, 0x3E93FCu);
    ctx->pc = 0x3E93F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E93F4u;
    // 0x3e93f8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9950u, 0x3E93F4u, 0x3E93FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E93FCu;
label_3e93fc:
    // 0x3e93fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e93fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e9400: 0x0  nop
    ctx->pc = 0x3e9400u;
    // NOP
    // 0x3e9404: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3e9404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e9408: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9408u;
    {
        const bool branch_taken_0x3e9408 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e9408) {
            ctx->pc = 0x3E9418u;
            goto label_3e9418;
        }
    }
    ctx->pc = 0x3E9410u;
    // 0x3e9410: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3e9410u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e9414: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3e9414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3e9418:
    // 0x3e9418: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3E9418u;
    SET_GPR_U32(ctx, 31, 0x3E9420u);
    ctx->pc = 0x3E941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9418u;
    // 0x3e941c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3E9418u, 0x3E9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9420u;
label_3e9420:
    // 0x3e9420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e9420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9424: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e9424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e9428: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9428u;
        // 0x3e942c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9430u;
}
