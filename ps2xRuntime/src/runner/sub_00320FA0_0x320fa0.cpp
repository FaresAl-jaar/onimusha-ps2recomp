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

// Function: sub_00320FA0
// Address: 0x320fa0 - 0x32104c
void sub_00320FA0_0x320fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320FA0_0x320fa0");
#endif

    switch (ctx->pc) {
        case 0x321040u: goto label_321040;
        default: break;
    }

    ctx->pc = 0x320fa0u;

    // 0x320fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x320fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320fa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x320fa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320fac: 0xc4a10050  lwc1        $f1, 0x50($a1)
    ctx->pc = 0x320facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320fb0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x320fb0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x320fb4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x320FB4u;
    {
        const bool branch_taken_0x320fb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x320FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FB4u;
        // 0x320fb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320fb4) {
            ctx->pc = 0x320FC0u;
            goto label_320fc0;
        }
    }
    ctx->pc = 0x320FBCu;
    // 0x320fbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x320fbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320fc0:
    // 0x320fc0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x320FC0u;
    {
        const bool branch_taken_0x320fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320fc0) {
            ctx->pc = 0x320FE4u;
            goto label_320fe4;
        }
    }
    ctx->pc = 0x320FC8u;
    // 0x320fc8: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x320fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320fcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x320fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320fd0: 0x0  nop
    ctx->pc = 0x320fd0u;
    // NOP
    // 0x320fd4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x320fd4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x320fd8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x320FD8u;
    {
        const bool branch_taken_0x320fd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x320FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FD8u;
        // 0x320fdc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320fd8) {
            ctx->pc = 0x320FE4u;
            goto label_320fe4;
        }
    }
    ctx->pc = 0x320FE0u;
    // 0x320fe0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x320fe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320fe4:
    // 0x320fe4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x320FE4u;
    {
        const bool branch_taken_0x320fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x320fe4) {
            ctx->pc = 0x321008u;
            goto label_321008;
        }
    }
    ctx->pc = 0x320FECu;
    // 0x320fec: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x320fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x320ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320ff4: 0x0  nop
    ctx->pc = 0x320ff4u;
    // NOP
    // 0x320ff8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x320ff8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x320ffc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x320FFCu;
    {
        const bool branch_taken_0x320ffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x321000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FFCu;
        // 0x321000: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320ffc) {
            ctx->pc = 0x321008u;
            goto label_321008;
        }
    }
    ctx->pc = 0x321004u;
    // 0x321004: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x321004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321008:
    // 0x321008: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x321008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32100c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x32100Cu;
    {
        const bool branch_taken_0x32100c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32100c) {
            ctx->pc = 0x321038u;
            goto label_321038;
        }
    }
    ctx->pc = 0x321014u;
    // 0x321014: 0xc4a30050  lwc1        $f3, 0x50($a1)
    ctx->pc = 0x321014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x321018: 0xc4a20054  lwc1        $f2, 0x54($a1)
    ctx->pc = 0x321018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32101c: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x32101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321020: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x321020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321024: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x321024u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x321028: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x321028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x32102c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x32102cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x321030: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x321030u;
    {
        const bool branch_taken_0x321030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321030u;
        // 0x321034: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x321030) {
            ctx->pc = 0x321040u;
            goto label_321040;
        }
    }
    ctx->pc = 0x321038u;
label_321038:
    // 0x321038: 0xc0c83e4  jal         func_320F90
    ctx->pc = 0x321038u;
    SET_GPR_U32(ctx, 31, 0x321040u);
    ctx->pc = 0x320F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320F90u, 0x321038u, 0x321040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321040u;
label_321040:
    // 0x321040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321044: 0x3e00008  jr          $ra
    ctx->pc = 0x321044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321044u;
        // 0x321048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32104Cu;
}
