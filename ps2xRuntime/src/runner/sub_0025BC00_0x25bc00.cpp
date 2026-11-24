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

// Function: sub_0025BC00
// Address: 0x25bc00 - 0x25bcb4
void sub_0025BC00_0x25bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BC00_0x25bc00");
#endif

    switch (ctx->pc) {
        case 0x25bc3cu: goto label_25bc3c;
        case 0x25bc54u: goto label_25bc54;
        case 0x25bc5cu: goto label_25bc5c;
        case 0x25bc6cu: goto label_25bc6c;
        case 0x25bc7cu: goto label_25bc7c;
        case 0x25bc90u: goto label_25bc90;
        default: break;
    }

    ctx->pc = 0x25bc00u;

    // 0x25bc00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25bc04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25bc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25bc08: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25bc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x25bc0c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25bc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25bc10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25bc10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25bc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25bc18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25bc18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25bc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25bc20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25bc20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc24: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25bc24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25bc28: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x25bc28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc2c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x25bc2cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x25bc30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25bc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc34: 0xc096e5c  jal         func_25B970
    ctx->pc = 0x25BC34u;
    SET_GPR_U32(ctx, 31, 0x25BC3Cu);
    ctx->pc = 0x25BC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC34u;
    // 0x25bc38: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B970u, 0x25BC34u, 0x25BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC3Cu;
label_25bc3c:
    // 0x25bc3c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x25BC3Cu;
    {
        const bool branch_taken_0x25bc3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BC3Cu;
        // 0x25bc40: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bc3c) {
            ctx->pc = 0x25BC70u;
            goto label_25bc70;
        }
    }
    ctx->pc = 0x25BC44u;
    // 0x25bc44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25bc44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25bc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc4c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x25BC4Cu;
    SET_GPR_U32(ctx, 31, 0x25BC54u);
    ctx->pc = 0x25BC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC4Cu;
    // 0x25bc50: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x25BC4Cu, 0x25BC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC54u;
label_25bc54:
    // 0x25bc54: 0xc096e5c  jal         func_25B970
    ctx->pc = 0x25BC54u;
    SET_GPR_U32(ctx, 31, 0x25BC5Cu);
    ctx->pc = 0x25BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC54u;
    // 0x25bc58: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B970u, 0x25BC54u, 0x25BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC5Cu;
label_25bc5c:
    // 0x25bc5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25bc5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25bc60: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x25bc60u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x25bc64: 0xc096e84  jal         func_25BA10
    ctx->pc = 0x25BC64u;
    SET_GPR_U32(ctx, 31, 0x25BC6Cu);
    ctx->pc = 0x25BC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC64u;
    // 0x25bc68: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA10u, 0x25BC64u, 0x25BC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC6Cu;
label_25bc6c:
    // 0x25bc6c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25bc6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_25bc70:
    // 0x25bc70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25bc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc74: 0xc096e0c  jal         func_25B830
    ctx->pc = 0x25BC74u;
    SET_GPR_U32(ctx, 31, 0x25BC7Cu);
    ctx->pc = 0x25BC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC74u;
    // 0x25bc78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B830u, 0x25BC74u, 0x25BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC7Cu;
label_25bc7c:
    // 0x25bc7c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x25bc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bc80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25bc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc84: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25bc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bc88: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x25BC88u;
    SET_GPR_U32(ctx, 31, 0x25BC90u);
    ctx->pc = 0x25BC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BC88u;
    // 0x25bc8c: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x25BC88u, 0x25BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BC90u;
label_25bc90:
    // 0x25bc90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25bc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25bc94: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25bc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25bc98: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25bc98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25bc9c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25bca0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25bca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25bca4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25bca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25bca8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25bca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bcac: 0x3e00008  jr          $ra
    ctx->pc = 0x25BCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BCACu;
        // 0x25bcb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BCB4u;
}
