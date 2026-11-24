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

// Function: sub_0028F040
// Address: 0x28f040 - 0x28f13c
void sub_0028F040_0x28f040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F040_0x28f040");
#endif

    switch (ctx->pc) {
        case 0x28f064u: goto label_28f064;
        case 0x28f0bcu: goto label_28f0bc;
        case 0x28f0fcu: goto label_28f0fc;
        case 0x28f11cu: goto label_28f11c;
        default: break;
    }

    ctx->pc = 0x28f040u;

    // 0x28f040: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28f040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28f044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28f044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28f048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28f048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28f04c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28f04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28f054: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x28f054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28f058: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x28f058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x28f05c: 0xc0e3684  jal         func_38DA10
    ctx->pc = 0x28F05Cu;
    SET_GPR_U32(ctx, 31, 0x28F064u);
    ctx->pc = 0x28F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F05Cu;
    // 0x28f060: 0x24842ce0  addiu       $a0, $a0, 0x2CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DA10u, 0x28F05Cu, 0x28F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F064u;
label_28f064:
    // 0x28f064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28f064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f068: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F068u;
    {
        const bool branch_taken_0x28f068 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f068) {
            ctx->pc = 0x28F078u;
            goto label_28f078;
        }
    }
    ctx->pc = 0x28F070u;
    // 0x28f070: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x28F070u;
    {
        const bool branch_taken_0x28f070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F070u;
        // 0x28f074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f070) {
            ctx->pc = 0x28F128u;
            goto label_28f128;
        }
    }
    ctx->pc = 0x28F078u;
label_28f078:
    // 0x28f078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f07c: 0xc622001c  lwc1        $f2, 0x1C($s1)
    ctx->pc = 0x28f07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f080: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x28f080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f084: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x28f084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f088: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28f088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28f08c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x28f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x28f090: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28f090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28f094: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28f094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28f098: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x28f098u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x28f09c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x28f09cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x28f0a0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x28f0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28f0a4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x28f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28f0a8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28F0A8u;
    {
        const bool branch_taken_0x28f0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0A8u;
        // 0x28f0ac: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0a8) {
            ctx->pc = 0x28F0F0u;
            goto label_28f0f0;
        }
    }
    ctx->pc = 0x28F0B0u;
    // 0x28f0b0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x28f0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x28f0b4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x28F0B4u;
    SET_GPR_U32(ctx, 31, 0x28F0BCu);
    ctx->pc = 0x28F0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F0B4u;
    // 0x28f0b8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x28F0B4u, 0x28F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F0BCu;
label_28f0bc:
    // 0x28f0bc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x28f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28f0c0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x28f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28f0c4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x28f0c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f0c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x28f0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x28f0cc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x28f0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f0d0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x28f0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f0d4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x28f0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f0d8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x28f0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f0dc: 0xe6030020  swc1        $f3, 0x20($s0)
    ctx->pc = 0x28f0dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x28f0e0: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x28f0e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x28f0e4: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x28f0e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x28f0e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28F0E8u;
    {
        const bool branch_taken_0x28f0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F0E8u;
        // 0x28f0ec: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0e8) {
            ctx->pc = 0x28F120u;
            goto label_28f120;
        }
    }
    ctx->pc = 0x28F0F0u;
label_28f0f0:
    // 0x28f0f0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x28f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x28f0f4: 0xc0d0a30  jal         func_3428C0
    ctx->pc = 0x28F0F4u;
    SET_GPR_U32(ctx, 31, 0x28F0FCu);
    ctx->pc = 0x28F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F0F4u;
    // 0x28f0f8: 0x24844100  addiu       $a0, $a0, 0x4100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3428C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3428C0u, 0x28F0F4u, 0x28F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F0FCu;
label_28f0fc:
    // 0x28f0fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F0FCu;
    {
        const bool branch_taken_0x28f0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f0fc) {
            ctx->pc = 0x28F120u;
            goto label_28f120;
        }
    }
    ctx->pc = 0x28F104u;
    // 0x28f104: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x28f104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28f108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28f108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f10c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x28f10cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28f110: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x28f110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x28f114: 0xc0d08b0  jal         func_3422C0
    ctx->pc = 0x28F114u;
    SET_GPR_U32(ctx, 31, 0x28F11Cu);
    ctx->pc = 0x28F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F114u;
    // 0x28f118: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3422C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3422C0u, 0x28F114u, 0x28F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F11Cu;
label_28f11c:
    // 0x28f11c: 0x0  nop
    ctx->pc = 0x28f11cu;
    // NOP
label_28f120:
    // 0x28f120: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f124: 0x0  nop
    ctx->pc = 0x28f124u;
    // NOP
label_28f128:
    // 0x28f128: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28f128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f12c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28f12cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f134: 0x3e00008  jr          $ra
    ctx->pc = 0x28F134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F134u;
        // 0x28f138: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F13Cu;
}
