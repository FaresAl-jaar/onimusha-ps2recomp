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

// Function: sub_0025B830
// Address: 0x25b830 - 0x25b8d0
void sub_0025B830_0x25b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B830_0x25b830");
#endif

    switch (ctx->pc) {
        case 0x25b8a0u: goto label_25b8a0;
        case 0x25b8b0u: goto label_25b8b0;
        default: break;
    }

    ctx->pc = 0x25b830u;

    // 0x25b830: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25b830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25b834: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b838: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b83c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25b83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25b840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b844: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25b844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25b848: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25b848u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25b84c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x25b84cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b850: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x25B850u;
    {
        const bool branch_taken_0x25b850 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B850u;
        // 0x25b854: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b850) {
            ctx->pc = 0x25B86Cu;
            goto label_25b86c;
        }
    }
    ctx->pc = 0x25B858u;
    // 0x25b858: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25b858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25b85c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b864: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25B864u;
    {
        const bool branch_taken_0x25b864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B864u;
        // 0x25b868: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b864) {
            ctx->pc = 0x25B898u;
            goto label_25b898;
        }
    }
    ctx->pc = 0x25B86Cu;
label_25b86c:
    // 0x25b86c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x25b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x25b870: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b878: 0x0  nop
    ctx->pc = 0x25b878u;
    // NOP
    // 0x25b87c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x25b87cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b880: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25B880u;
    {
        const bool branch_taken_0x25b880 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B880u;
        // 0x25b884: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b880) {
            ctx->pc = 0x25B898u;
            goto label_25b898;
        }
    }
    ctx->pc = 0x25B888u;
    // 0x25b888: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b88c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25b88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b890: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x25B890u;
    {
        const bool branch_taken_0x25b890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B890u;
        // 0x25b894: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b890) {
            ctx->pc = 0x25B898u;
            goto label_25b898;
        }
    }
    ctx->pc = 0x25B898u;
label_25b898:
    // 0x25b898: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x25B898u;
    SET_GPR_U32(ctx, 31, 0x25B8A0u);
    ctx->pc = 0x25B89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B898u;
    // 0x25b89c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x25B898u, 0x25B8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B8A0u;
label_25b8a0:
    // 0x25b8a0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x25b8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x25b8a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25b8a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25b8a8: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x25B8A8u;
    SET_GPR_U32(ctx, 31, 0x25B8B0u);
    ctx->pc = 0x25B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B8A8u;
    // 0x25b8ac: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x25B8A8u, 0x25B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B8B0u;
label_25b8b0:
    // 0x25b8b0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x25b8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x25b8b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25b8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25b8b8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x25b8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x25b8bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25b8bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b8c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25b8c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25b8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x25B8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B8C8u;
        // 0x25b8cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B8D0u;
}
