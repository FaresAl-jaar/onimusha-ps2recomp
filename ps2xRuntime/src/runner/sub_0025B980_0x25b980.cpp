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

// Function: sub_0025B980
// Address: 0x25b980 - 0x25ba0c
void sub_0025B980_0x25b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B980_0x25b980");
#endif

    switch (ctx->pc) {
        case 0x25b9acu: goto label_25b9ac;
        case 0x25b9d4u: goto label_25b9d4;
        case 0x25b9e4u: goto label_25b9e4;
        case 0x25b9f0u: goto label_25b9f0;
        default: break;
    }

    ctx->pc = 0x25b980u;

    // 0x25b980: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x25b980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x25b984: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25b984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25b988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25b988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25b98c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25b990: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25b990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b994: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b998: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25b998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b99c: 0xc4cc0004  lwc1        $f12, 0x4($a2)
    ctx->pc = 0x25b99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b9a0: 0xc4cd0008  lwc1        $f13, 0x8($a2)
    ctx->pc = 0x25b9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25b9a4: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x25B9A4u;
    SET_GPR_U32(ctx, 31, 0x25B9ACu);
    ctx->pc = 0x25B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B9A4u;
    // 0x25b9a8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x25B9A4u, 0x25B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9ACu;
label_25b9ac:
    // 0x25b9ac: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x25b9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x25b9b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25b9b4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x25b9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b9b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25b9bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b9c0: 0x0  nop
    ctx->pc = 0x25b9c0u;
    // NOP
    // 0x25b9c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25b9c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25b9c8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x25b9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x25b9cc: 0xc07671c  jal         func_1D9C70
    ctx->pc = 0x25B9CCu;
    SET_GPR_U32(ctx, 31, 0x25B9D4u);
    ctx->pc = 0x25B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B9CCu;
    // 0x25b9d0: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C70u, 0x25B9CCu, 0x25B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9D4u;
label_25b9d4:
    // 0x25b9d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25b9d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b9d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x25b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x25b9dc: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x25B9DCu;
    SET_GPR_U32(ctx, 31, 0x25B9E4u);
    ctx->pc = 0x25B9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B9DCu;
    // 0x25b9e0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x25B9DCu, 0x25B9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9E4u;
label_25b9e4:
    // 0x25b9e4: 0xc7ad0088  lwc1        $f13, 0x88($sp)
    ctx->pc = 0x25b9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25b9e8: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x25B9E8u;
    SET_GPR_U32(ctx, 31, 0x25B9F0u);
    ctx->pc = 0x25B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B9E8u;
    // 0x25b9ec: 0xc7ac0080  lwc1        $f12, 0x80($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x25B9E8u, 0x25B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B9F0u;
label_25b9f0:
    // 0x25b9f0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25b9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x25b9f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25b9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b9f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25b9f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b9fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ba00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ba00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ba04: 0x3e00008  jr          $ra
    ctx->pc = 0x25BA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BA04u;
        // 0x25ba08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BA0Cu;
}
