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

// Function: sub_0035AE20
// Address: 0x35ae20 - 0x35aec8
void sub_0035AE20_0x35ae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AE20_0x35ae20");
#endif

    switch (ctx->pc) {
        case 0x35ae5cu: goto label_35ae5c;
        case 0x35ae70u: goto label_35ae70;
        case 0x35ae80u: goto label_35ae80;
        default: break;
    }

    ctx->pc = 0x35ae20u;

    // 0x35ae20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35ae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35ae24: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x35ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x35ae28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35ae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35ae2c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x35ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x35ae30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35ae34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35ae34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35ae38: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35ae38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35ae40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35ae40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae44: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x35ae44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae48: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35AE48u;
    {
        const bool branch_taken_0x35ae48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE48u;
        // 0x35ae4c: 0xacc3000c  sw          $v1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ae48) {
            ctx->pc = 0x35AE78u;
            goto label_35ae78;
        }
    }
    ctx->pc = 0x35AE50u;
    // 0x35ae50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35ae50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae54: 0xc041714  jal         func_105C50
    ctx->pc = 0x35AE54u;
    SET_GPR_U32(ctx, 31, 0x35AE5Cu);
    ctx->pc = 0x35AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE54u;
    // 0x35ae58: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C50u, 0x35AE54u, 0x35AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE5Cu;
label_35ae5c:
    // 0x35ae5c: 0xc62c00cc  lwc1        $f12, 0xCC($s1)
    ctx->pc = 0x35ae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35ae60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35ae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35ae64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae68: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x35AE68u;
    SET_GPR_U32(ctx, 31, 0x35AE70u);
    ctx->pc = 0x35AE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE68u;
    // 0x35ae6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x35AE68u, 0x35AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE70u;
label_35ae70:
    // 0x35ae70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x35AE70u;
    {
        const bool branch_taken_0x35ae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ae70) {
            ctx->pc = 0x35AEB0u;
            goto label_35aeb0;
        }
    }
    ctx->pc = 0x35AE78u;
label_35ae78:
    // 0x35ae78: 0xc0414e2  jal         func_105388
    ctx->pc = 0x35AE78u;
    SET_GPR_U32(ctx, 31, 0x35AE80u);
    ctx->pc = 0x35AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE78u;
    // 0x35ae7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105388u, 0x35AE78u, 0x35AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE80u;
label_35ae80:
    // 0x35ae80: 0xc62100c0  lwc1        $f1, 0xC0($s1)
    ctx->pc = 0x35ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ae84: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x35ae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ae88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x35ae88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35ae8c: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x35ae8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
    // 0x35ae90: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x35ae90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ae94: 0xc62000c4  lwc1        $f0, 0xC4($s1)
    ctx->pc = 0x35ae94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ae98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35ae98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35ae9c: 0xe62000c4  swc1        $f0, 0xC4($s1)
    ctx->pc = 0x35ae9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 196), bits); }
    // 0x35aea0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x35aea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35aea4: 0xc62000c8  lwc1        $f0, 0xC8($s1)
    ctx->pc = 0x35aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35aea8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35aea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35aeac: 0xe62000c8  swc1        $f0, 0xC8($s1)
    ctx->pc = 0x35aeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 200), bits); }
label_35aeb0:
    // 0x35aeb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35aeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35aeb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35aeb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35aeb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35aeb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35aebc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35aebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aec0: 0x3e00008  jr          $ra
    ctx->pc = 0x35AEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AEC0u;
        // 0x35aec4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AEC8u;
}
