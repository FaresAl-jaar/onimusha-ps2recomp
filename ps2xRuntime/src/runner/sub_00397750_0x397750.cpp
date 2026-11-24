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

// Function: sub_00397750
// Address: 0x397750 - 0x3977f0
void sub_00397750_0x397750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397750_0x397750");
#endif

    switch (ctx->pc) {
        case 0x3977b0u: goto label_3977b0;
        case 0x3977c4u: goto label_3977c4;
        case 0x3977d0u: goto label_3977d0;
        case 0x3977d8u: goto label_3977d8;
        default: break;
    }

    ctx->pc = 0x397750u;

    // 0x397750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x397750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x397754: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x397754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x397758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x397758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39775c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x397760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x397764: 0x2463c850  addiu       $v1, $v1, -0x37B0
    ctx->pc = 0x397764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953040));
    // 0x397768: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x397768u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x39776c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39776cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397770: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x397770u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x397774: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x397774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x397778: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x397778u;
    { uint32_t bits = FAST_READ32(0x65C850u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39777c: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x39777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x397780: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x397780u;
    { uint32_t bits = FAST_READ32(0x65C854u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x397784: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x397784u;
    { uint32_t bits = FAST_READ32(0x65C858u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x397788: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x397788u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x39778c: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x39778cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x397790: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x397790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x397794: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x397794u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x397798: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x397798u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39779c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x39779cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3977a0: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x3977a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x3977a4: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x3977a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x3977a8: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x3977A8u;
    SET_GPR_U32(ctx, 31, 0x3977B0u);
    ctx->pc = 0x3977ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3977A8u;
    // 0x3977ac: 0xe48000a4  swc1        $f0, 0xA4($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x3977A8u, 0x3977B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3977B0u;
label_3977b0:
    // 0x3977b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3977b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3977b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3977b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3977b8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x3977b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3977bc: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x3977BCu;
    SET_GPR_U32(ctx, 31, 0x3977C4u);
    ctx->pc = 0x3977C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3977BCu;
    // 0x3977c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x3977BCu, 0x3977C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3977C4u;
label_3977c4:
    // 0x3977c4: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x3977c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3977c8: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x3977C8u;
    SET_GPR_U32(ctx, 31, 0x3977D0u);
    ctx->pc = 0x3977CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3977C8u;
    // 0x3977cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x3977C8u, 0x3977D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3977D0u;
label_3977d0:
    // 0x3977d0: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x3977D0u;
    SET_GPR_U32(ctx, 31, 0x3977D8u);
    ctx->pc = 0x3977D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3977D0u;
    // 0x3977d4: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x3977D0u, 0x3977D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3977D8u;
label_3977d8:
    // 0x3977d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3977d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3977dc: 0xa60301ac  sh          $v1, 0x1AC($s0)
    ctx->pc = 0x3977dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 428), (uint16_t)GPR_U32(ctx, 3));
    // 0x3977e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3977e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3977e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3977e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3977e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3977E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3977ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977E8u;
        // 0x3977ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3977E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3977F0u;
}
