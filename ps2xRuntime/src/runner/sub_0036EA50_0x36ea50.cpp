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

// Function: sub_0036EA50
// Address: 0x36ea50 - 0x36eb20
void sub_0036EA50_0x36ea50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EA50_0x36ea50");
#endif

    switch (ctx->pc) {
        case 0x36eab0u: goto label_36eab0;
        case 0x36eac4u: goto label_36eac4;
        case 0x36ead0u: goto label_36ead0;
        case 0x36eadcu: goto label_36eadc;
        case 0x36eae4u: goto label_36eae4;
        case 0x36eaf0u: goto label_36eaf0;
        case 0x36eaf8u: goto label_36eaf8;
        default: break;
    }

    ctx->pc = 0x36ea50u;

    // 0x36ea50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36ea50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36ea54: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x36ea54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x36ea58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36ea5c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36ea60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36ea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36ea64: 0x2463ab58  addiu       $v1, $v1, -0x54A8
    ctx->pc = 0x36ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945624));
    // 0x36ea68: 0xa082001f  sb          $v0, 0x1F($a0)
    ctx->pc = 0x36ea68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x36ea6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36ea6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ea70: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x36ea70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ea74: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x36ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x36ea78: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x36ea78u;
    { uint32_t bits = FAST_READ32(0x65AB58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ea7c: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x36ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x36ea80: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x36ea80u;
    { uint32_t bits = FAST_READ32(0x65AB5Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ea84: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x36ea84u;
    { uint32_t bits = FAST_READ32(0x65AB60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ea88: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x36ea88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x36ea8c: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x36ea8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x36ea90: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x36ea90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x36ea94: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x36ea94u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ea98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36ea98u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ea9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36ea9cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36eaa0: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x36eaa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x36eaa4: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x36eaa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x36eaa8: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x36EAA8u;
    SET_GPR_U32(ctx, 31, 0x36EAB0u);
    ctx->pc = 0x36EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EAA8u;
    // 0x36eaac: 0xe48000a4  swc1        $f0, 0xA4($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x36EAA8u, 0x36EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAB0u;
label_36eab0:
    // 0x36eab0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36eab4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36eab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36eab8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x36eab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36eabc: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x36EABCu;
    SET_GPR_U32(ctx, 31, 0x36EAC4u);
    ctx->pc = 0x36EAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EABCu;
    // 0x36eac0: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x36EABCu, 0x36EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAC4u;
label_36eac4:
    // 0x36eac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36eac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eac8: 0xc0dbbe8  jal         func_36EFA0
    ctx->pc = 0x36EAC8u;
    SET_GPR_U32(ctx, 31, 0x36EAD0u);
    ctx->pc = 0x36EACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EAC8u;
    // 0x36eacc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EFA0u, 0x36EAC8u, 0x36EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAD0u;
label_36ead0:
    // 0x36ead0: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x36ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x36ead4: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x36EAD4u;
    SET_GPR_U32(ctx, 31, 0x36EADCu);
    ctx->pc = 0x36EAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EAD4u;
    // 0x36ead8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x36EAD4u, 0x36EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EADCu;
label_36eadc:
    // 0x36eadc: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x36EADCu;
    SET_GPR_U32(ctx, 31, 0x36EAE4u);
    ctx->pc = 0x36EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EADCu;
    // 0x36eae0: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x36EADCu, 0x36EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAE4u;
label_36eae4:
    // 0x36eae4: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x36eae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x36eae8: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x36EAE8u;
    SET_GPR_U32(ctx, 31, 0x36EAF0u);
    ctx->pc = 0x36EAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EAE8u;
    // 0x36eaec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x36EAE8u, 0x36EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAF0u;
label_36eaf0:
    // 0x36eaf0: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x36EAF0u;
    SET_GPR_U32(ctx, 31, 0x36EAF8u);
    ctx->pc = 0x36EAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EAF0u;
    // 0x36eaf4: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x36EAF0u, 0x36EAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAF8u;
label_36eaf8:
    // 0x36eaf8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36eaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36eafc: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x36eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x36eb00: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x36eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x36eb04: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x36eb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x36eb08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36eb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36eb0c: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x36eb0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x36eb10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36eb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36eb14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36eb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36eb18: 0x3e00008  jr          $ra
    ctx->pc = 0x36EB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB18u;
        // 0x36eb1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EB20u;
}
