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

// Function: sub_00366A70
// Address: 0x366a70 - 0x366b28
void sub_00366A70_0x366a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366A70_0x366a70");
#endif

    switch (ctx->pc) {
        case 0x366ab0u: goto label_366ab0;
        case 0x366ab8u: goto label_366ab8;
        case 0x366af8u: goto label_366af8;
        case 0x366b04u: goto label_366b04;
        case 0x366b18u: goto label_366b18;
        default: break;
    }

    ctx->pc = 0x366a70u;

    // 0x366a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x366a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x366a74: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x366a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x366a78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x366a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x366a7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x366a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x366a80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x366a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x366a84: 0x2442a908  addiu       $v0, $v0, -0x56F8
    ctx->pc = 0x366a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945032));
    // 0x366a88: 0xa0830020  sb          $v1, 0x20($a0)
    ctx->pc = 0x366a88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x366a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x366a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366a90: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x366a90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x366a94: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x366a94u;
    { uint32_t bits = FAST_READ32(0x65A908u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x366a98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x366a98u;
    { uint32_t bits = FAST_READ32(0x65A90Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366a9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x366a9cu;
    { uint32_t bits = FAST_READ32(0x65A910u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366aa0: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x366aa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x366aa4: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x366aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x366aa8: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x366AA8u;
    SET_GPR_U32(ctx, 31, 0x366AB0u);
    ctx->pc = 0x366AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366AA8u;
    // 0x366aac: 0xe4800098  swc1        $f0, 0x98($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x366AA8u, 0x366AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366AB0u;
label_366ab0:
    // 0x366ab0: 0xc0ed6d4  jal         func_3B5B50
    ctx->pc = 0x366AB0u;
    SET_GPR_U32(ctx, 31, 0x366AB8u);
    ctx->pc = 0x366AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366AB0u;
    // 0x366ab4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B50u, 0x366AB0u, 0x366AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366AB8u;
label_366ab8:
    // 0x366ab8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x366ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x366abc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x366abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x366ac0: 0x8c25cebc  lw          $a1, -0x3144($at)
    ctx->pc = 0x366ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x366ac4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x366ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x366ac8: 0x27828368  addiu       $v0, $gp, -0x7C98
    ctx->pc = 0x366ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935400));
    // 0x366acc: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x366accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x366ad0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x366ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x366ad4: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x366ad4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x366ad8: 0x82050334  lb          $a1, 0x334($s0)
    ctx->pc = 0x366ad8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x366adc: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x366adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x366ae0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x366ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x366ae4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x366ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x366ae8: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x366ae8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x366aec: 0x9446011c  lhu         $a2, 0x11C($v0)
    ctx->pc = 0x366aecu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x366af0: 0xc0cbe14  jal         func_32F850
    ctx->pc = 0x366AF0u;
    SET_GPR_U32(ctx, 31, 0x366AF8u);
    ctx->pc = 0x366AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366AF0u;
    // 0x366af4: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F850u, 0x366AF0u, 0x366AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366AF8u;
label_366af8:
    // 0x366af8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x366af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x366afc: 0xc0cbf18  jal         func_32FC60
    ctx->pc = 0x366AFCu;
    SET_GPR_U32(ctx, 31, 0x366B04u);
    ctx->pc = 0x366B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366AFCu;
    // 0x366b00: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FC60u, 0x366AFCu, 0x366B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366B04u;
label_366b04:
    // 0x366b04: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x366b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x366b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x366b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366b0c: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x366b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x366b10: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x366B10u;
    SET_GPR_U32(ctx, 31, 0x366B18u);
    ctx->pc = 0x366B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366B10u;
    // 0x366b14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x366B10u, 0x366B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366B18u;
label_366b18:
    // 0x366b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x366b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x366b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366b20: 0x3e00008  jr          $ra
    ctx->pc = 0x366B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366B20u;
        // 0x366b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366B28u;
}
