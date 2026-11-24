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

// Function: sub_0039DA00
// Address: 0x39da00 - 0x39da98
void sub_0039DA00_0x39da00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039DA00_0x39da00");
#endif

    switch (ctx->pc) {
        case 0x39da5cu: goto label_39da5c;
        case 0x39da74u: goto label_39da74;
        default: break;
    }

    ctx->pc = 0x39da00u;

    // 0x39da00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39da00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39da04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39da04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39da08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39da08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39da0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39da0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39da10: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x39da10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x39da14: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x39DA14u;
    {
        const bool branch_taken_0x39da14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x39DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA14u;
        // 0x39da18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da14) {
            ctx->pc = 0x39DA78u;
            goto label_39da78;
        }
    }
    ctx->pc = 0x39DA1Cu;
    // 0x39da1c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39DA1Cu;
    {
        const bool branch_taken_0x39da1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x39da1c) {
            ctx->pc = 0x39DA30u;
            goto label_39da30;
        }
    }
    ctx->pc = 0x39DA24u;
    // 0x39da24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x39DA24u;
    {
        const bool branch_taken_0x39da24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39da24) {
            ctx->pc = 0x39DA88u;
            goto label_39da88;
        }
    }
    ctx->pc = 0x39DA2Cu;
    // 0x39da2c: 0x0  nop
    ctx->pc = 0x39da2cu;
    // NOP
label_39da30:
    // 0x39da30: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x39da30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x39da34: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x39da34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x39da38: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x39da38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x39da3c: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x39da3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x39da40: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x39da40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x39da44: 0xa20207f5  sb          $v0, 0x7F5($s0)
    ctx->pc = 0x39da44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 2));
    // 0x39da48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39da48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39da4c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x39da4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x39da50: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x39da50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x39da54: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x39DA54u;
    SET_GPR_U32(ctx, 31, 0x39DA5Cu);
    ctx->pc = 0x39DA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DA54u;
    // 0x39da58: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x39DA54u, 0x39DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DA5Cu;
label_39da5c:
    // 0x39da5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39da5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39da60: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x39da60u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x39da64: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x39da64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39da68: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x39da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x39da6c: 0xc0aa1c8  jal         func_2A8720
    ctx->pc = 0x39DA6Cu;
    SET_GPR_U32(ctx, 31, 0x39DA74u);
    ctx->pc = 0x39DA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39DA6Cu;
    // 0x39da70: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8720u, 0x39DA6Cu, 0x39DA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39DA74u;
label_39da74:
    // 0x39da74: 0x0  nop
    ctx->pc = 0x39da74u;
    // NOP
label_39da78:
    // 0x39da78: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x39da78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x39da7c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x39DA7Cu;
    {
        const bool branch_taken_0x39da7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA7Cu;
        // 0x39da80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da7c) {
            ctx->pc = 0x39DA88u;
            goto label_39da88;
        }
    }
    ctx->pc = 0x39DA84u;
    // 0x39da84: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x39da84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_39da88:
    // 0x39da88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39da88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39da8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39da8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39da90: 0x3e00008  jr          $ra
    ctx->pc = 0x39DA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39DA90u;
        // 0x39da94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39DA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39DA98u;
}
