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

// Function: sub_00223DD8
// Address: 0x223dd8 - 0x223ea4
void sub_00223DD8_0x223dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223DD8_0x223dd8");
#endif

    switch (ctx->pc) {
        case 0x223e10u: goto label_223e10;
        case 0x223e2cu: goto label_223e2c;
        default: break;
    }

    ctx->pc = 0x223dd8u;

    // 0x223dd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x223dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x223ddc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x223ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x223de0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x223de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x223de4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x223de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223de8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x223de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x223dec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x223decu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223df0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x223df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x223df4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x223df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223df8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x223df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x223dfc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x223dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x223e00: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x223e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x223e04: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x223e04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x223e08: 0xc088f50  jal         func_223D40
    ctx->pc = 0x223E08u;
    SET_GPR_U32(ctx, 31, 0x223E10u);
    ctx->pc = 0x223E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E08u;
    // 0x223e0c: 0x24500020  addiu       $s0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223D40u, 0x223E08u, 0x223E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E10u;
label_223e10:
    // 0x223e10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x223e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e14: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x223e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x223e18: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x223E18u;
    {
        const bool branch_taken_0x223e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E18u;
        // 0x223e1c: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e18) {
            ctx->pc = 0x223E88u;
            goto label_223e88;
        }
    }
    ctx->pc = 0x223E20u;
    // 0x223e20: 0x92130019  lbu         $s3, 0x19($s0)
    ctx->pc = 0x223e20u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x223e24: 0xc089030  jal         func_2240C0
    ctx->pc = 0x223E24u;
    SET_GPR_U32(ctx, 31, 0x223E2Cu);
    ctx->pc = 0x223E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E24u;
    // 0x223e28: 0x92100018  lbu         $s0, 0x18($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2240C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2240C0u, 0x223E24u, 0x223E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E2Cu;
label_223e2c:
    // 0x223e2c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x223e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x223e30: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x223E30u;
    {
        const bool branch_taken_0x223e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E30u;
        // 0x223e34: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e30) {
            ctx->pc = 0x223E88u;
            goto label_223e88;
        }
    }
    ctx->pc = 0x223E38u;
    // 0x223e38: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x223e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223e3c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x223e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x223e40: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x223e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x223e44: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x223e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x223e48: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x223e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x223e4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x223e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x223e50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x223e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x223e54: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x223e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x223e58: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x223e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x223e5c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x223e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x223e60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x223e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x223e64: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x223e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x223e68: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x223e68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x223e6c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x223E6Cu;
    {
        const bool branch_taken_0x223e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x223e6c) {
            ctx->pc = 0x223E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223E6Cu;
            // 0x223e70: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223E80u;
            goto label_223e80;
        }
    }
    ctx->pc = 0x223E74u;
    // 0x223e74: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x223e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x223e78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x223E78u;
    {
        const bool branch_taken_0x223e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E78u;
        // 0x223e7c: 0xae530000  sw          $s3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e78) {
            ctx->pc = 0x223E84u;
            goto label_223e84;
        }
    }
    ctx->pc = 0x223E80u;
label_223e80:
    // 0x223e80: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x223e80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
label_223e84:
    // 0x223e84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223e88:
    // 0x223e88: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x223e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223e8c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x223e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x223e90: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x223e90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223e94: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x223e94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x223e98: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x223e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x223e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x223E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E9Cu;
        // 0x223ea0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223EA4u;
}
