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

// Function: sub_00256D40
// Address: 0x256d40 - 0x256e14
void sub_00256D40_0x256d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256D40_0x256d40");
#endif

    switch (ctx->pc) {
        case 0x256d68u: goto label_256d68;
        case 0x256d88u: goto label_256d88;
        case 0x256dfcu: goto label_256dfc;
        default: break;
    }

    ctx->pc = 0x256d40u;

    // 0x256d40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x256d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x256d44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x256d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x256d48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x256d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x256d4c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x256d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x256d50: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x256d50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256d54: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x256d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x256d58: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x256D58u;
    {
        const bool branch_taken_0x256d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D58u;
        // 0x256d5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d58) {
            ctx->pc = 0x256D80u;
            goto label_256d80;
        }
    }
    ctx->pc = 0x256D60u;
    // 0x256d60: 0xc0954d4  jal         func_255350
    ctx->pc = 0x256D60u;
    SET_GPR_U32(ctx, 31, 0x256D68u);
    ctx->pc = 0x255350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255350u, 0x256D60u, 0x256D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D68u;
label_256d68:
    // 0x256d68: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x256d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256d6c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x256d6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256d70: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x256d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x256d74: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x256D74u;
    {
        const bool branch_taken_0x256d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D74u;
        // 0x256d78: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d74) {
            ctx->pc = 0x256E00u;
            goto label_256e00;
        }
    }
    ctx->pc = 0x256D7Cu;
    // 0x256d7c: 0x0  nop
    ctx->pc = 0x256d7cu;
    // NOP
label_256d80:
    // 0x256d80: 0xc09556c  jal         func_2555B0
    ctx->pc = 0x256D80u;
    SET_GPR_U32(ctx, 31, 0x256D88u);
    ctx->pc = 0x2555B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2555B0u, 0x256D80u, 0x256D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D88u;
label_256d88:
    // 0x256d88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x256d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x256d8c: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x256d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x256d90: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x256D90u;
    {
        const bool branch_taken_0x256d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256d90) {
            ctx->pc = 0x256E00u;
            goto label_256e00;
        }
    }
    ctx->pc = 0x256D98u;
    // 0x256d98: 0x8e0c0050  lw          $t4, 0x50($s0)
    ctx->pc = 0x256d98u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256d9c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x256d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x256da0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x256da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x256da4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x256da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x256da8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x256da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x256dac: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x256dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x256db0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x256db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256db4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x256db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256db8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x256db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256dbc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x256dbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256dc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x256dc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256dc4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x256dc4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256dc8: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x256dc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x256dcc: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x256dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x256dd0: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x256dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x256dd4: 0x8e0c0050  lw          $t4, 0x50($s0)
    ctx->pc = 0x256dd4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256dd8: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x256dd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x256ddc: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x256ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x256de0: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x256de0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x256de4: 0x8e0c0050  lw          $t4, 0x50($s0)
    ctx->pc = 0x256de4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x256de8: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x256de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x256dec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x256decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x256df0: 0xad820010  sw          $v0, 0x10($t4)
    ctx->pc = 0x256df0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 2));
    // 0x256df4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x256DF4u;
    SET_GPR_U32(ctx, 31, 0x256DFCu);
    ctx->pc = 0x256DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256DF4u;
    // 0x256df8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x256DF4u, 0x256DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256DFCu;
label_256dfc:
    // 0x256dfc: 0x0  nop
    ctx->pc = 0x256dfcu;
    // NOP
label_256e00:
    // 0x256e00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x256e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256e04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x256e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256e08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x256E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256E0Cu;
        // 0x256e10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256E14u;
}
