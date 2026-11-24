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

// Function: sub_002E0A60
// Address: 0x2e0a60 - 0x2e0b10
void sub_002E0A60_0x2e0a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0A60_0x2e0a60");
#endif

    switch (ctx->pc) {
        case 0x2e0a9cu: goto label_2e0a9c;
        case 0x2e0adcu: goto label_2e0adc;
        default: break;
    }

    ctx->pc = 0x2e0a60u;

    // 0x2e0a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e0a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e0a68: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e0a68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e0a6c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2e0a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0a70: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2e0a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e0a74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e0a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0a78: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x2E0A78u;
    {
        const bool branch_taken_0x2e0a78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A78u;
        // 0x2e0a7c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a78) {
            ctx->pc = 0x2E0AF8u;
            goto label_2e0af8;
        }
    }
    ctx->pc = 0x2E0A80u;
    // 0x2e0a80: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x2e0a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x2e0a84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e0a84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0a88: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2E0A88u;
    {
        const bool branch_taken_0x2e0a88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0a88) {
            ctx->pc = 0x2E0AF8u;
            goto label_2e0af8;
        }
    }
    ctx->pc = 0x2E0A90u;
    // 0x2e0a90: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2e0a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e0a94: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E0A94u;
    {
        const bool branch_taken_0x2e0a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0A94u;
        // 0x2e0a98: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0a94) {
            ctx->pc = 0x2E0AB8u;
            goto label_2e0ab8;
        }
    }
    ctx->pc = 0x2E0A9Cu;
label_2e0a9c:
    // 0x2e0a9c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2e0a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0aa0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e0aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e0aa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e0aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e0aa8: 0x0  nop
    ctx->pc = 0x2e0aa8u;
    // NOP
    // 0x2e0aac: 0x0  nop
    ctx->pc = 0x2e0aacu;
    // NOP
    // 0x2e0ab0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E0AB0u;
    {
        const bool branch_taken_0x2e0ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0ab0) {
            ctx->pc = 0x2E0A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0a9c;
        }
    }
    ctx->pc = 0x2E0AB8u;
label_2e0ab8:
    // 0x2e0ab8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2e0ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0abc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e0abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e0ac0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2e0ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0ac4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e0ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e0ac8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2e0ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0acc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e0accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0ad0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e0ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e0ad4: 0xc096988  jal         func_25A620
    ctx->pc = 0x2E0AD4u;
    SET_GPR_U32(ctx, 31, 0x2E0ADCu);
    ctx->pc = 0x2E0AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0AD4u;
    // 0x2e0ad8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x2E0AD4u, 0x2E0ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0ADCu;
label_2e0adc:
    // 0x2e0adc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2e0adcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0ae0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0AE0u;
    {
        const bool branch_taken_0x2e0ae0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0AE0u;
        // 0x2e0ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0ae0) {
            ctx->pc = 0x2E0B00u;
            goto label_2e0b00;
        }
    }
    ctx->pc = 0x2E0AE8u;
    // 0x2e0ae8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e0ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0aec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0AECu;
    {
        const bool branch_taken_0x2e0aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0aec) {
            ctx->pc = 0x2E0B00u;
            goto label_2e0b00;
        }
    }
    ctx->pc = 0x2E0AF4u;
    // 0x2e0af4: 0x0  nop
    ctx->pc = 0x2e0af4u;
    // NOP
label_2e0af8:
    // 0x2e0af8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e0af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0afc: 0x0  nop
    ctx->pc = 0x2e0afcu;
    // NOP
label_2e0b00:
    // 0x2e0b00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0b04: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e0b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e0b08: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0B08u;
        // 0x2e0b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0B10u;
}
