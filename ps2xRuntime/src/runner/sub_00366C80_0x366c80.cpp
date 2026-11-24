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

// Function: sub_00366C80
// Address: 0x366c80 - 0x366d50
void sub_00366C80_0x366c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366C80_0x366c80");
#endif

    switch (ctx->pc) {
        case 0x366ce8u: goto label_366ce8;
        case 0x366cf0u: goto label_366cf0;
        case 0x366d10u: goto label_366d10;
        case 0x366d3cu: goto label_366d3c;
        default: break;
    }

    ctx->pc = 0x366c80u;

    // 0x366c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x366c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x366c84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x366c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x366c88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x366c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x366c8c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x366c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x366c90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x366c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x366c94: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x366c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x366c98: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x366c98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x366c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x366c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ca0: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x366ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x366ca4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x366ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x366ca8: 0xa0800022  sb          $zero, 0x22($a0)
    ctx->pc = 0x366ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x366cac: 0x2442a918  addiu       $v0, $v0, -0x56E8
    ctx->pc = 0x366cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945048));
    // 0x366cb0: 0xa083015c  sb          $v1, 0x15C($a0)
    ctx->pc = 0x366cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 348), (uint8_t)GPR_U32(ctx, 3));
    // 0x366cb4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x366cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x366cb8: 0xa080015d  sb          $zero, 0x15D($a0)
    ctx->pc = 0x366cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 349), (uint8_t)GPR_U32(ctx, 0));
    // 0x366cbc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x366cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x366cc0: 0xac80014c  sw          $zero, 0x14C($a0)
    ctx->pc = 0x366cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 0));
    // 0x366cc4: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x366cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x366cc8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x366cc8u;
    { uint32_t bits = FAST_READ32(0x65A918u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x366ccc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x366cccu;
    { uint32_t bits = FAST_READ32(0x65A91Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x366cd0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x366cd0u;
    { uint32_t bits = FAST_READ32(0x65A920u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x366cd4: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x366cd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x366cd8: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x366cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x366cdc: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x366cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x366ce0: 0xc0ed6cc  jal         func_3B5B30
    ctx->pc = 0x366CE0u;
    SET_GPR_U32(ctx, 31, 0x366CE8u);
    ctx->pc = 0x366CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366CE0u;
    // 0x366ce4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B30u, 0x366CE0u, 0x366CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366CE8u;
label_366ce8:
    // 0x366ce8: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x366CE8u;
    SET_GPR_U32(ctx, 31, 0x366CF0u);
    ctx->pc = 0x366CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366CE8u;
    // 0x366cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x366CE8u, 0x366CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366CF0u;
label_366cf0:
    // 0x366cf0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x366cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x366cf4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x366cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x366cf8: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x366cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x366cfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x366cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366d00: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x366d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x366d04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x366d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x366d08: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x366D08u;
    SET_GPR_U32(ctx, 31, 0x366D10u);
    ctx->pc = 0x366D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D08u;
    // 0x366d0c: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x366D08u, 0x366D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D10u;
label_366d10:
    // 0x366d10: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x366d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x366d14: 0x2604013c  addiu       $a0, $s0, 0x13C
    ctx->pc = 0x366d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 316));
    // 0x366d18: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x366d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x366d1c: 0xae030154  sw          $v1, 0x154($s0)
    ctx->pc = 0x366d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 3));
    // 0x366d20: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x366d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x366d24: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x366d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x366d28: 0x82020334  lb          $v0, 0x334($s0)
    ctx->pc = 0x366d28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x366d2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x366d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x366d30: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x366d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x366d34: 0xc049522  jal         func_125488
    ctx->pc = 0x366D34u;
    SET_GPR_U32(ctx, 31, 0x366D3Cu);
    ctx->pc = 0x366D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366D34u;
    // 0x366d38: 0x2445011c  addiu       $a1, $v0, 0x11C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x366D34u, 0x366D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366D3Cu;
label_366d3c:
    // 0x366d3c: 0xaf808be0  sw          $zero, -0x7420($gp)
    ctx->pc = 0x366d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937568), GPR_U32(ctx, 0));
    // 0x366d40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x366d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366d44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x366d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366d48: 0x3e00008  jr          $ra
    ctx->pc = 0x366D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366D48u;
        // 0x366d4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366D50u;
}
