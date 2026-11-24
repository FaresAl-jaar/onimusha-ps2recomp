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

// Function: sub_0017BD50
// Address: 0x17bd50 - 0x17be58
void sub_0017BD50_0x17bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BD50_0x17bd50");
#endif

    switch (ctx->pc) {
        case 0x17bd74u: goto label_17bd74;
        case 0x17bd90u: goto label_17bd90;
        case 0x17bda0u: goto label_17bda0;
        case 0x17bdbcu: goto label_17bdbc;
        default: break;
    }

    ctx->pc = 0x17bd50u;

    // 0x17bd50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bd54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17bd54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17bd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17bd5c: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x17bd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x17bd60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17bd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17bd64: 0x2484e040  addiu       $a0, $a0, -0x1FC0
    ctx->pc = 0x17bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959168));
    // 0x17bd68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17bd68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd6c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x17BD6Cu;
    SET_GPR_U32(ctx, 31, 0x17BD74u);
    ctx->pc = 0x17BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD6Cu;
    // 0x17bd70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x17BD6Cu, 0x17BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD74u;
label_17bd74:
    // 0x17bd74: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x17bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x17bd78: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x17bd78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x17bd7c: 0x3c060084  lui         $a2, 0x84
    ctx->pc = 0x17bd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)132 << 16));
    // 0x17bd80: 0x2484e050  addiu       $a0, $a0, -0x1FB0
    ctx->pc = 0x17bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959184));
    // 0x17bd84: 0x24a5d260  addiu       $a1, $a1, -0x2DA0
    ctx->pc = 0x17bd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955616));
    // 0x17bd88: 0xc041460  jal         func_105180
    ctx->pc = 0x17BD88u;
    SET_GPR_U32(ctx, 31, 0x17BD90u);
    ctx->pc = 0x17BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD88u;
    // 0x17bd8c: 0x24c6e040  addiu       $a2, $a2, -0x1FC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x17BD88u, 0x17BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BD90u;
label_17bd90:
    // 0x17bd90: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x17bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x17bd94: 0x2484e050  addiu       $a0, $a0, -0x1FB0
    ctx->pc = 0x17bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959184));
    // 0x17bd98: 0xc041472  jal         func_1051C8
    ctx->pc = 0x17BD98u;
    SET_GPR_U32(ctx, 31, 0x17BDA0u);
    ctx->pc = 0x17BD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BD98u;
    // 0x17bd9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x17BD98u, 0x17BDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDA0u;
label_17bda0:
    // 0x17bda0: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x17bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x17bda4: 0x3c050084  lui         $a1, 0x84
    ctx->pc = 0x17bda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)132 << 16));
    // 0x17bda8: 0x3c060084  lui         $a2, 0x84
    ctx->pc = 0x17bda8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)132 << 16));
    // 0x17bdac: 0x2484e060  addiu       $a0, $a0, -0x1FA0
    ctx->pc = 0x17bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959200));
    // 0x17bdb0: 0x24a5e040  addiu       $a1, $a1, -0x1FC0
    ctx->pc = 0x17bdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959168));
    // 0x17bdb4: 0xc041460  jal         func_105180
    ctx->pc = 0x17BDB4u;
    SET_GPR_U32(ctx, 31, 0x17BDBCu);
    ctx->pc = 0x17BDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BDB4u;
    // 0x17bdb8: 0x24c6e050  addiu       $a2, $a2, -0x1FB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x17BDB4u, 0x17BDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDBCu;
label_17bdbc:
    // 0x17bdbc: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x17bdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x17bdc0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17bdc4: 0xc420e050  lwc1        $f0, -0x1FB0($at)
    ctx->pc = 0x17bdc4u;
    { uint32_t bits = FAST_READ32(0x83E050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bdc8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x17bdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x17bdcc: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x17bdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x17bdd0: 0xc420e060  lwc1        $f0, -0x1FA0($at)
    ctx->pc = 0x17bdd0u;
    { uint32_t bits = FAST_READ32(0x83E060u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bdd4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x17bdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x17bdd8: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x17bdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x17bddc: 0xc420e040  lwc1        $f0, -0x1FC0($at)
    ctx->pc = 0x17bddcu;
    { uint32_t bits = FAST_READ32(0x83E040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bde0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x17bde0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x17bde4: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x17bde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x17bde8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x17bde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x17bdec: 0xc420e054  lwc1        $f0, -0x1FAC($at)
    ctx->pc = 0x17bdecu;
    { uint32_t bits = FAST_READ32(0x83E054u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bdf0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x17bdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x17bdf4: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x17bdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x17bdf8: 0xc420e064  lwc1        $f0, -0x1F9C($at)
    ctx->pc = 0x17bdf8u;
    { uint32_t bits = FAST_READ32(0x83E064u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bdfc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x17bdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x17be00: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x17be00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x17be04: 0xc420e044  lwc1        $f0, -0x1FBC($at)
    ctx->pc = 0x17be04u;
    { uint32_t bits = FAST_READ32(0x83E044u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17be08: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x17be08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x17be0c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x17be0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x17be10: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x17be10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x17be14: 0xc420e058  lwc1        $f0, -0x1FA8($at)
    ctx->pc = 0x17be14u;
    { uint32_t bits = FAST_READ32(0x83E058u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17be18: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x17be18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x17be1c: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x17be1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x17be20: 0xc420e068  lwc1        $f0, -0x1F98($at)
    ctx->pc = 0x17be20u;
    { uint32_t bits = FAST_READ32(0x83E068u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17be24: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x17be24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x17be28: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x17be28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x17be2c: 0xc420e048  lwc1        $f0, -0x1FB8($at)
    ctx->pc = 0x17be2cu;
    { uint32_t bits = FAST_READ32(0x83E048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17be30: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x17be30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x17be34: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x17be34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x17be38: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x17be38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17be3c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x17be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x17be40: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x17be40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x17be44: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x17be44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x17be48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17be48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17be4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17be4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17be50: 0x3e00008  jr          $ra
    ctx->pc = 0x17BE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE50u;
        // 0x17be54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BE58u;
}
