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

// Function: sub_00342A10
// Address: 0x342a10 - 0x342a90
void sub_00342A10_0x342a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342A10_0x342a10");
#endif

    switch (ctx->pc) {
        case 0x342a3cu: goto label_342a3c;
        case 0x342a48u: goto label_342a48;
        case 0x342a54u: goto label_342a54;
        case 0x342a60u: goto label_342a60;
        default: break;
    }

    ctx->pc = 0x342a10u;

    // 0x342a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x342a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x342a14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x342a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x342a18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x342a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x342a1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x342a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x342a20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x342a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342a24: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x342a24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x342a28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x342a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342a2c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x342a2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x342a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x342a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342a34: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x342A34u;
    SET_GPR_U32(ctx, 31, 0x342A3Cu);
    ctx->pc = 0x342A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A34u;
    // 0x342a38: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x342A34u, 0x342A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A3Cu;
label_342a3c:
    // 0x342a3c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x342a3cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x342a40: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x342A40u;
    SET_GPR_U32(ctx, 31, 0x342A48u);
    ctx->pc = 0x342A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A40u;
    // 0x342a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x342A40u, 0x342A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A48u;
label_342a48:
    // 0x342a48: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x342a48u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x342a4c: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x342A4Cu;
    SET_GPR_U32(ctx, 31, 0x342A54u);
    ctx->pc = 0x342A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A4Cu;
    // 0x342a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x342A4Cu, 0x342A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A54u;
label_342a54:
    // 0x342a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x342a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342a58: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x342A58u;
    SET_GPR_U32(ctx, 31, 0x342A60u);
    ctx->pc = 0x342A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342A58u;
    // 0x342a5c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x342A58u, 0x342A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342A60u;
label_342a60:
    // 0x342a60: 0xe6360000  swc1        $f22, 0x0($s1)
    ctx->pc = 0x342a60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x342a64: 0xe6350004  swc1        $f21, 0x4($s1)
    ctx->pc = 0x342a64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x342a68: 0xe6340008  swc1        $f20, 0x8($s1)
    ctx->pc = 0x342a68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x342a6c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x342a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x342a70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x342a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x342a74: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x342a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x342a78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x342a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x342a7c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x342a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x342a80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x342a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342a84: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x342a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x342a88: 0x3e00008  jr          $ra
    ctx->pc = 0x342A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342A88u;
        // 0x342a8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342A90u;
}
