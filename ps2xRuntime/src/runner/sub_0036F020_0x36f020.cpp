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

// Function: sub_0036F020
// Address: 0x36f020 - 0x36f0f0
void sub_0036F020_0x36f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F020_0x36f020");
#endif

    switch (ctx->pc) {
        case 0x36f080u: goto label_36f080;
        case 0x36f094u: goto label_36f094;
        case 0x36f0a0u: goto label_36f0a0;
        case 0x36f0acu: goto label_36f0ac;
        case 0x36f0b4u: goto label_36f0b4;
        case 0x36f0c0u: goto label_36f0c0;
        case 0x36f0c8u: goto label_36f0c8;
        default: break;
    }

    ctx->pc = 0x36f020u;

    // 0x36f020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36f020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36f024: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x36f024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x36f028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36f02c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x36f02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36f030: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36f034: 0x2463ab98  addiu       $v1, $v1, -0x5468
    ctx->pc = 0x36f034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945688));
    // 0x36f038: 0xa082001f  sb          $v0, 0x1F($a0)
    ctx->pc = 0x36f038u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x36f03c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f040: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x36f040u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x36f044: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x36f044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x36f048: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x36f048u;
    { uint32_t bits = FAST_READ32(0x65AB98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f04c: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x36f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x36f050: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x36f050u;
    { uint32_t bits = FAST_READ32(0x65AB9Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f054: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x36f054u;
    { uint32_t bits = FAST_READ32(0x65ABA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36f058: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x36f058u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x36f05c: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x36f05cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x36f060: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x36f060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x36f064: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x36f064u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36f068: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x36f068u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36f06c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x36f06cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36f070: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x36f070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x36f074: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x36f074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x36f078: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x36F078u;
    SET_GPR_U32(ctx, 31, 0x36F080u);
    ctx->pc = 0x36F07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F078u;
    // 0x36f07c: 0xe48000a4  swc1        $f0, 0xA4($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x36F078u, 0x36F080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F080u;
label_36f080:
    // 0x36f080: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36f080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36f084: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36f084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36f088: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x36f088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36f08c: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x36F08Cu;
    SET_GPR_U32(ctx, 31, 0x36F094u);
    ctx->pc = 0x36F090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F08Cu;
    // 0x36f090: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x36F08Cu, 0x36F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F094u;
label_36f094:
    // 0x36f094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36f094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f098: 0xc0dbbe8  jal         func_36EFA0
    ctx->pc = 0x36F098u;
    SET_GPR_U32(ctx, 31, 0x36F0A0u);
    ctx->pc = 0x36F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F098u;
    // 0x36f09c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EFA0u, 0x36F098u, 0x36F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F0A0u;
label_36f0a0:
    // 0x36f0a0: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x36f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x36f0a4: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x36F0A4u;
    SET_GPR_U32(ctx, 31, 0x36F0ACu);
    ctx->pc = 0x36F0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F0A4u;
    // 0x36f0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x36F0A4u, 0x36F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F0ACu;
label_36f0ac:
    // 0x36f0ac: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x36F0ACu;
    SET_GPR_U32(ctx, 31, 0x36F0B4u);
    ctx->pc = 0x36F0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F0ACu;
    // 0x36f0b0: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x36F0ACu, 0x36F0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F0B4u;
label_36f0b4:
    // 0x36f0b4: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x36f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x36f0b8: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x36F0B8u;
    SET_GPR_U32(ctx, 31, 0x36F0C0u);
    ctx->pc = 0x36F0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F0B8u;
    // 0x36f0bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x36F0B8u, 0x36F0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F0C0u;
label_36f0c0:
    // 0x36f0c0: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x36F0C0u;
    SET_GPR_U32(ctx, 31, 0x36F0C8u);
    ctx->pc = 0x36F0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F0C0u;
    // 0x36f0c4: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x36F0C0u, 0x36F0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F0C8u;
label_36f0c8:
    // 0x36f0c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36f0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36f0cc: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x36f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x36f0d0: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x36f0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x36f0d4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x36f0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x36f0d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x36f0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x36f0dc: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x36f0dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x36f0e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f0e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x36F0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F0E8u;
        // 0x36f0ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F0F0u;
}
