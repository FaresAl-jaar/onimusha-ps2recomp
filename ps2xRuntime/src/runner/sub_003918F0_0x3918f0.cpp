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

// Function: sub_003918F0
// Address: 0x3918f0 - 0x3919b4
void sub_003918F0_0x3918f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003918F0_0x3918f0");
#endif

    switch (ctx->pc) {
        case 0x391950u: goto label_391950;
        case 0x391964u: goto label_391964;
        case 0x391970u: goto label_391970;
        case 0x391978u: goto label_391978;
        case 0x39198cu: goto label_39198c;
        default: break;
    }

    ctx->pc = 0x3918f0u;

    // 0x3918f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3918f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3918f4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3918f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3918f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3918f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3918fc: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3918fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x391900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x391900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x391904: 0x2463c7f0  addiu       $v1, $v1, -0x3810
    ctx->pc = 0x391904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952944));
    // 0x391908: 0xa082001f  sb          $v0, 0x1F($a0)
    ctx->pc = 0x391908u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x39190c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39190cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391910: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x391910u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x391914: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x391914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x391918: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x391918u;
    { uint32_t bits = FAST_READ32(0x65C7F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39191c: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x39191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x391920: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x391920u;
    { uint32_t bits = FAST_READ32(0x65C7F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x391924: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x391924u;
    { uint32_t bits = FAST_READ32(0x65C7F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x391928: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x391928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x39192c: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x39192cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x391930: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x391930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x391934: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x391934u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x391938: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x391938u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39193c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x39193cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x391940: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x391940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x391944: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x391944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x391948: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x391948u;
    SET_GPR_U32(ctx, 31, 0x391950u);
    ctx->pc = 0x39194Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391948u;
    // 0x39194c: 0xe48000a4  swc1        $f0, 0xA4($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x391948u, 0x391950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391950u;
label_391950:
    // 0x391950: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x391950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x391954: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x391954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x391958: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x391958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x39195c: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x39195Cu;
    SET_GPR_U32(ctx, 31, 0x391964u);
    ctx->pc = 0x391960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39195Cu;
    // 0x391960: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x39195Cu, 0x391964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391964u;
label_391964:
    // 0x391964: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x391964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x391968: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x391968u;
    SET_GPR_U32(ctx, 31, 0x391970u);
    ctx->pc = 0x39196Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391968u;
    // 0x39196c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x391968u, 0x391970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391970u;
label_391970:
    // 0x391970: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x391970u;
    SET_GPR_U32(ctx, 31, 0x391978u);
    ctx->pc = 0x391974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391970u;
    // 0x391974: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x391970u, 0x391978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391978u;
label_391978:
    // 0x391978: 0x92050339  lbu         $a1, 0x339($s0)
    ctx->pc = 0x391978u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 825)));
    // 0x39197c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x39197cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x391980: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x391980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x391984: 0xc0e47d8  jal         func_391F60
    ctx->pc = 0x391984u;
    SET_GPR_U32(ctx, 31, 0x39198Cu);
    ctx->pc = 0x391988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391984u;
    // 0x391988: 0x24843090  addiu       $a0, $a0, 0x3090 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391F60u, 0x391984u, 0x39198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39198Cu;
label_39198c:
    // 0x39198c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x39198cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x391990: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x391990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x391994: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x391994u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x391998: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x391998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x39199c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x39199cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3919a0: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x3919a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3919a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3919a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3919a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3919a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3919ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3919ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3919B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3919ACu;
        // 0x3919b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3919ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3919B4u;
}
