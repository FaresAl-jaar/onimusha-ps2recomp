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

// Function: sub_003665B0
// Address: 0x3665b0 - 0x366664
void sub_003665B0_0x3665b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003665B0_0x3665b0");
#endif

    switch (ctx->pc) {
        case 0x366618u: goto label_366618;
        case 0x366620u: goto label_366620;
        case 0x36664cu: goto label_36664c;
        case 0x366654u: goto label_366654;
        default: break;
    }

    ctx->pc = 0x3665b0u;

    // 0x3665b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3665b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3665b4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3665b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3665b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3665b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3665bc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3665bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3665c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3665c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3665c4: 0x2463a8e8  addiu       $v1, $v1, -0x5718
    ctx->pc = 0x3665c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945000));
    // 0x3665c8: 0xa082001f  sb          $v0, 0x1F($a0)
    ctx->pc = 0x3665c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x3665cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3665ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3665d0: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x3665d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x3665d4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x3665d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x3665d8: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x3665d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x3665dc: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x3665dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x3665e0: 0xa0800022  sb          $zero, 0x22($a0)
    ctx->pc = 0x3665e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x3665e4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3665e4u;
    { uint32_t bits = FAST_READ32(0x65A8E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3665e8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3665e8u;
    { uint32_t bits = FAST_READ32(0x65A8ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3665ec: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3665ecu;
    { uint32_t bits = FAST_READ32(0x65A8F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3665f0: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x3665f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x3665f4: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x3665f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x3665f8: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x3665f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x3665fc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3665fcu;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x366600: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x366600u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366604: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x366604u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366608: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x366608u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x36660c: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x36660cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x366610: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x366610u;
    SET_GPR_U32(ctx, 31, 0x366618u);
    ctx->pc = 0x366614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366610u;
    // 0x366614: 0xe48000a4  swc1        $f0, 0xA4($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x366610u, 0x366618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366618u;
label_366618:
    // 0x366618: 0xc0ed6d8  jal         func_3B5B60
    ctx->pc = 0x366618u;
    SET_GPR_U32(ctx, 31, 0x366620u);
    ctx->pc = 0x3B5B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B60u, 0x366618u, 0x366620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366620u;
label_366620:
    // 0x366620: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x366620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x366624: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x366624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x366628: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x366628u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x36662c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x36662cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x366630: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x366630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x366634: 0xac22cebc  sw          $v0, -0x3144($at)
    ctx->pc = 0x366634u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x366638: 0x8202032e  lb          $v0, 0x32E($s0)
    ctx->pc = 0x366638u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 814)));
    // 0x36663c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x36663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x366640: 0x904501bd  lbu         $a1, 0x1BD($v0)
    ctx->pc = 0x366640u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 445)));
    // 0x366644: 0xc0d9f2c  jal         func_367CB0
    ctx->pc = 0x366644u;
    SET_GPR_U32(ctx, 31, 0x36664Cu);
    ctx->pc = 0x366648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366644u;
    // 0x366648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367CB0u, 0x366644u, 0x36664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36664Cu;
label_36664c:
    // 0x36664c: 0xc0d99c0  jal         func_366700
    ctx->pc = 0x36664Cu;
    SET_GPR_U32(ctx, 31, 0x366654u);
    ctx->pc = 0x366650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36664Cu;
    // 0x366650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366700u, 0x36664Cu, 0x366654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366654u;
label_366654:
    // 0x366654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x366654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x366658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36665c: 0x3e00008  jr          $ra
    ctx->pc = 0x36665Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36665Cu;
        // 0x366660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36665Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366664u;
}
