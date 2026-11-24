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

// Function: sub_00327DC0
// Address: 0x327dc0 - 0x327e88
void sub_00327DC0_0x327dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327DC0_0x327dc0");
#endif

    switch (ctx->pc) {
        case 0x327de0u: goto label_327de0;
        case 0x327e04u: goto label_327e04;
        case 0x327e5cu: goto label_327e5c;
        default: break;
    }

    ctx->pc = 0x327dc0u;

    // 0x327dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327dc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x327dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x327dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x327dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327dd0: 0x8e050518  lw          $a1, 0x518($s0)
    ctx->pc = 0x327dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x327dd4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x327dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x327dd8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x327DD8u;
    SET_GPR_U32(ctx, 31, 0x327DE0u);
    ctx->pc = 0x327DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327DD8u;
    // 0x327ddc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x327DD8u, 0x327DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327DE0u;
label_327de0:
    // 0x327de0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x327DE0u;
    {
        const bool branch_taken_0x327de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327de0) {
            ctx->pc = 0x327E08u;
            goto label_327e08;
        }
    }
    ctx->pc = 0x327DE8u;
    // 0x327de8: 0x92040570  lbu         $a0, 0x570($s0)
    ctx->pc = 0x327de8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1392)));
    // 0x327dec: 0x3c02491f  lui         $v0, 0x491F
    ctx->pc = 0x327decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18719 << 16));
    // 0x327df0: 0x3442ff60  ori         $v0, $v0, 0xFF60
    ctx->pc = 0x327df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65376);
    // 0x327df4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x327df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x327df8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x327df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x327dfc: 0xc09712c  jal         func_25C4B0
    ctx->pc = 0x327DFCu;
    SET_GPR_U32(ctx, 31, 0x327E04u);
    ctx->pc = 0x327E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327DFCu;
    // 0x327e00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C4B0u, 0x327DFCu, 0x327E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E04u;
label_327e04:
    // 0x327e04: 0x0  nop
    ctx->pc = 0x327e04u;
    // NOP
label_327e08:
    // 0x327e08: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x327E08u;
    {
        const bool branch_taken_0x327e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327e08) {
            ctx->pc = 0x327E68u;
            goto label_327e68;
        }
    }
    ctx->pc = 0x327E10u;
    // 0x327e10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x327e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x327e14: 0xae030518  sw          $v1, 0x518($s0)
    ctx->pc = 0x327e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 3));
    // 0x327e18: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x327e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x327e1c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x327E1Cu;
    {
        const bool branch_taken_0x327e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x327e1c) {
            ctx->pc = 0x327E30u;
            goto label_327e30;
        }
    }
    ctx->pc = 0x327E24u;
    // 0x327e24: 0xae000518  sw          $zero, 0x518($s0)
    ctx->pc = 0x327e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
    // 0x327e28: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x327E28u;
    {
        const bool branch_taken_0x327e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E28u;
        // 0x327e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e28) {
            ctx->pc = 0x327E78u;
            goto label_327e78;
        }
    }
    ctx->pc = 0x327E30u;
label_327e30:
    // 0x327e30: 0x8c650094  lw          $a1, 0x94($v1)
    ctx->pc = 0x327e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x327e34: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x327e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x327e38: 0x90430733  lbu         $v1, 0x733($v0)
    ctx->pc = 0x327e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1843)));
    // 0x327e3c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x327e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x327e40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x327e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x327e44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327e48: 0x90c30730  lbu         $v1, 0x730($a2)
    ctx->pc = 0x327e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1840)));
    // 0x327e4c: 0x24460700  addiu       $a2, $v0, 0x700
    ctx->pc = 0x327e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x327e50: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x327e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x327e54: 0xc041442  jal         func_105108
    ctx->pc = 0x327E54u;
    SET_GPR_U32(ctx, 31, 0x327E5Cu);
    ctx->pc = 0x327E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E54u;
    // 0x327e58: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x327E54u, 0x327E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E5Cu;
label_327e5c:
    // 0x327e5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x327E5Cu;
    {
        const bool branch_taken_0x327e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327e5c) {
            ctx->pc = 0x327E70u;
            goto label_327e70;
        }
    }
    ctx->pc = 0x327E64u;
    // 0x327e64: 0x0  nop
    ctx->pc = 0x327e64u;
    // NOP
label_327e68:
    // 0x327e68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x327E68u;
    {
        const bool branch_taken_0x327e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E68u;
        // 0x327e6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e68) {
            ctx->pc = 0x327E78u;
            goto label_327e78;
        }
    }
    ctx->pc = 0x327E70u;
label_327e70:
    // 0x327e70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x327e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327e74: 0x0  nop
    ctx->pc = 0x327e74u;
    // NOP
label_327e78:
    // 0x327e78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327e7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327e80: 0x3e00008  jr          $ra
    ctx->pc = 0x327E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E80u;
        // 0x327e84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327E88u;
}
