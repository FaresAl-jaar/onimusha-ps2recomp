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

// Function: sub_003B4BE0
// Address: 0x3b4be0 - 0x3b4ca8
void sub_003B4BE0_0x3b4be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4BE0_0x3b4be0");
#endif

    switch (ctx->pc) {
        case 0x3b4c2cu: goto label_3b4c2c;
        case 0x3b4c34u: goto label_3b4c34;
        case 0x3b4c4cu: goto label_3b4c4c;
        case 0x3b4c70u: goto label_3b4c70;
        case 0x3b4c88u: goto label_3b4c88;
        case 0x3b4c90u: goto label_3b4c90;
        case 0x3b4c98u: goto label_3b4c98;
        default: break;
    }

    ctx->pc = 0x3b4be0u;

    // 0x3b4be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b4be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b4be4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b4be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b4be8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b4be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b4bec: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x3b4becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x3b4bf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b4bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b4bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4bf8: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x3b4bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3b4bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4c00: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x3b4c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3b4c04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b4c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b4c08: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x3b4c08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3b4c0c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3b4c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3b4c10: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3b4c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3b4c14: 0xa0850008  sb          $a1, 0x8($a0)
    ctx->pc = 0x3b4c14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x3b4c18: 0xa0820009  sb          $v0, 0x9($a0)
    ctx->pc = 0x3b4c18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b4c1c: 0xa080000a  sb          $zero, 0xA($a0)
    ctx->pc = 0x3b4c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b4c20: 0xa080000b  sb          $zero, 0xB($a0)
    ctx->pc = 0x3b4c20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b4c24: 0xc0d9018  jal         func_364060
    ctx->pc = 0x3B4C24u;
    SET_GPR_U32(ctx, 31, 0x3B4C2Cu);
    ctx->pc = 0x3B4C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4C24u;
    // 0x3b4c28: 0xa080000c  sb          $zero, 0xC($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364060u, 0x3B4C24u, 0x3B4C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4C2Cu;
label_3b4c2c:
    // 0x3b4c2c: 0xc0d9034  jal         func_3640D0
    ctx->pc = 0x3B4C2Cu;
    SET_GPR_U32(ctx, 31, 0x3B4C34u);
    ctx->pc = 0x3B4C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4C2Cu;
    // 0x3b4c30: 0xa202000d  sb          $v0, 0xD($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3640D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3640D0u, 0x3B4C2Cu, 0x3B4C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4C34u;
label_3b4c34:
    // 0x3b4c34: 0xa202000e  sb          $v0, 0xE($s0)
    ctx->pc = 0x3b4c34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b4c38: 0x9202000e  lbu         $v0, 0xE($s0)
    ctx->pc = 0x3b4c38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3b4c3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B4C3Cu;
    {
        const bool branch_taken_0x3b4c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4C3Cu;
        // 0x3b4c40: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4c3c) {
            ctx->pc = 0x3B4C68u;
            goto label_3b4c68;
        }
    }
    ctx->pc = 0x3B4C44u;
    // 0x3b4c44: 0xc09c45c  jal         func_271170
    ctx->pc = 0x3B4C44u;
    SET_GPR_U32(ctx, 31, 0x3B4C4Cu);
    ctx->pc = 0x271170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271170u, 0x3B4C44u, 0x3B4C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4C4Cu;
label_3b4c4c:
    // 0x3b4c4c: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x3b4c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b4c50: 0x8202000f  lb          $v0, 0xF($s0)
    ctx->pc = 0x3b4c50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x3b4c54: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x3b4c54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b4c58: 0x8202000f  lb          $v0, 0xF($s0)
    ctx->pc = 0x3b4c58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x3b4c5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B4C5Cu;
    {
        const bool branch_taken_0x3b4c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4C5Cu;
        // 0x3b4c60: 0xa2020011  sb          $v0, 0x11($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4c5c) {
            ctx->pc = 0x3B4C80u;
            goto label_3b4c80;
        }
    }
    ctx->pc = 0x3B4C64u;
    // 0x3b4c64: 0x0  nop
    ctx->pc = 0x3b4c64u;
    // NOP
label_3b4c68:
    // 0x3b4c68: 0xc09c45c  jal         func_271170
    ctx->pc = 0x3B4C68u;
    SET_GPR_U32(ctx, 31, 0x3B4C70u);
    ctx->pc = 0x3B4C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4C68u;
    // 0x3b4c6c: 0x9204000d  lbu         $a0, 0xD($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271170u, 0x3B4C68u, 0x3B4C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4C70u;
label_3b4c70:
    // 0x3b4c70: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x3b4c70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b4c74: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3b4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3b4c78: 0xa2020011  sb          $v0, 0x11($s0)
    ctx->pc = 0x3b4c78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b4c7c: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x3b4c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
label_3b4c80:
    // 0x3b4c80: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x3B4C80u;
    SET_GPR_U32(ctx, 31, 0x3B4C88u);
    ctx->pc = 0x3B4C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4C80u;
    // 0x3b4c84: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x3B4C80u, 0x3B4C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4C88u;
label_3b4c88:
    // 0x3b4c88: 0xc0ed6c4  jal         func_3B5B10
    ctx->pc = 0x3B4C88u;
    SET_GPR_U32(ctx, 31, 0x3B4C90u);
    ctx->pc = 0x3B5B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B10u, 0x3B4C88u, 0x3B4C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4C90u;
label_3b4c90:
    // 0x3b4c90: 0xc0ed350  jal         func_3B4D40
    ctx->pc = 0x3B4C90u;
    SET_GPR_U32(ctx, 31, 0x3B4C98u);
    ctx->pc = 0x3B4C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4C90u;
    // 0x3b4c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4D40u, 0x3B4C90u, 0x3B4C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4C98u;
label_3b4c98:
    // 0x3b4c98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b4c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b4c9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b4c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b4ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4CA0u;
        // 0x3b4ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4CA8u;
}
