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

// Function: sub_00210D18
// Address: 0x210d18 - 0x210e04
void sub_00210D18_0x210d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210D18_0x210d18");
#endif

    switch (ctx->pc) {
        case 0x210d50u: goto label_210d50;
        case 0x210d74u: goto label_210d74;
        case 0x210d98u: goto label_210d98;
        default: break;
    }

    ctx->pc = 0x210d18u;

    // 0x210d18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x210d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210d20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x210d20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x210d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x210d28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x210d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x210d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x210d30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x210d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d34: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x210d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x210d38: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x210d38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x210d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x210d40: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x210d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x210d44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x210D44u;
    {
        const bool branch_taken_0x210d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D44u;
        // 0x210d48: 0x8e920010  lw          $s2, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d44) {
            ctx->pc = 0x210D68u;
            goto label_210d68;
        }
    }
    ctx->pc = 0x210D4Cu;
    // 0x210d4c: 0x0  nop
    ctx->pc = 0x210d4cu;
    // NOP
label_210d50:
    // 0x210d50: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x210d50u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x210d54: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x210D54u;
    {
        const bool branch_taken_0x210d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D54u;
        // 0x210d58: 0x2328821  addu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d54) {
            ctx->pc = 0x210DE4u;
            goto label_210de4;
        }
    }
    ctx->pc = 0x210D5Cu;
    // 0x210d5c: 0x5a000022  blezl       $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x210D5Cu;
    {
        const bool branch_taken_0x210d5c = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x210d5c) {
            ctx->pc = 0x210D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210D5Cu;
            // 0x210d60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210DE8u;
            goto label_210de8;
        }
    }
    ctx->pc = 0x210D64u;
    // 0x210d64: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x210d64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_210d68:
    // 0x210d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d6c: 0xc0845ee  jal         func_2117B8
    ctx->pc = 0x210D6Cu;
    SET_GPR_U32(ctx, 31, 0x210D74u);
    ctx->pc = 0x210D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210D6Cu;
    // 0x210d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2117B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2117B8u, 0x210D6Cu, 0x210D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D74u;
label_210d74:
    // 0x210d74: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x210D74u;
    {
        const bool branch_taken_0x210d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D74u;
        // 0x210d78: 0x2a630003  slti        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d74) {
            ctx->pc = 0x210D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210d50;
        }
    }
    ctx->pc = 0x210D7Cu;
    // 0x210d7c: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x210d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x210d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d84: 0x24510378  addiu       $s1, $v0, 0x378
    ctx->pc = 0x210d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 888));
    // 0x210d88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d8c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x210d8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x880378u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x880378u, _value); } while (0);
    // 0x210d90: 0xc084382  jal         func_210E08
    ctx->pc = 0x210D90u;
    SET_GPR_U32(ctx, 31, 0x210D98u);
    ctx->pc = 0x210D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210D90u;
    // 0x210d94: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210E08u, 0x210D90u, 0x210D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D98u;
label_210d98:
    // 0x210d98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x210d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x210d9c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x210D9Cu;
    {
        const bool branch_taken_0x210d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210d9c) {
            ctx->pc = 0x210DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210D9Cu;
            // 0x210da0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210DE8u;
            goto label_210de8;
        }
    }
    ctx->pc = 0x210DA4u;
    // 0x210da4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x210da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x210da8: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x210DA8u;
    {
        const bool branch_taken_0x210da8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x210da8) {
            ctx->pc = 0x210DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210DA8u;
            // 0x210dac: 0xae82001c  sw          $v0, 0x1C($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210DB0u;
            goto label_210db0;
        }
    }
    ctx->pc = 0x210DB0u;
label_210db0:
    // 0x210db0: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x210db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x210db4: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x210DB4u;
    {
        const bool branch_taken_0x210db4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x210db4) {
            ctx->pc = 0x210DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210DB4u;
            // 0x210db8: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210DBCu;
            goto label_210dbc;
        }
    }
    ctx->pc = 0x210DBCu;
label_210dbc:
    // 0x210dbc: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x210dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x210dc0: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x210DC0u;
    {
        const bool branch_taken_0x210dc0 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x210dc0) {
            ctx->pc = 0x210DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210DC0u;
            // 0x210dc4: 0xae820018  sw          $v0, 0x18($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210DC8u;
            goto label_210dc8;
        }
    }
    ctx->pc = 0x210DC8u;
label_210dc8:
    // 0x210dc8: 0x8e26006c  lw          $a2, 0x6C($s1)
    ctx->pc = 0x210dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x210dcc: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x210DCCu;
    {
        const bool branch_taken_0x210dcc = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x210DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DCCu;
        // 0x210dd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210dcc) {
            ctx->pc = 0x210DE8u;
            goto label_210de8;
        }
    }
    ctx->pc = 0x210DD4u;
    // 0x210dd4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x210dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x210dd8: 0xae860020  sw          $a2, 0x20($s4)
    ctx->pc = 0x210dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 6));
    // 0x210ddc: 0x244289e0  addiu       $v0, $v0, -0x7620
    ctx->pc = 0x210ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937056));
    // 0x210de0: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x210de0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_210de4:
    // 0x210de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_210de8:
    // 0x210de8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210dec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x210decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210df0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x210df0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210df4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x210df4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210df8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x210df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x210DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DFCu;
        // 0x210e00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210E04u;
}
