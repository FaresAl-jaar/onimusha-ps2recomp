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

// Function: sub_00219D60
// Address: 0x219d60 - 0x219dfc
void sub_00219D60_0x219d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219D60_0x219d60");
#endif

    switch (ctx->pc) {
        case 0x219d7cu: goto label_219d7c;
        case 0x219dacu: goto label_219dac;
        case 0x219dc4u: goto label_219dc4;
        default: break;
    }

    ctx->pc = 0x219d60u;

    // 0x219d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219d64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219d68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219d6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219d70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x219d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x219d74: 0xc084968  jal         func_2125A0
    ctx->pc = 0x219D74u;
    SET_GPR_U32(ctx, 31, 0x219D7Cu);
    ctx->pc = 0x219D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D74u;
    // 0x219d78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x219D74u, 0x219D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219D7Cu;
label_219d7c:
    // 0x219d7c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x219d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x219d80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x219D80u;
    {
        const bool branch_taken_0x219d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219D80u;
        // 0x219d84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219d80) {
            ctx->pc = 0x219DA0u;
            goto label_219da0;
        }
    }
    ctx->pc = 0x219D88u;
    // 0x219d88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219d8c: 0x34a50188  ori         $a1, $a1, 0x188
    ctx->pc = 0x219d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)392);
    // 0x219d90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219d90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219d94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x219d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219d98: 0x80848e0  j           func_212380
    ctx->pc = 0x219D98u;
    ctx->pc = 0x219D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219D98u;
    // 0x219d9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x219DA0u;
label_219da0:
    // 0x219da0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x219da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219da4: 0xc0867aa  jal         func_219EA8
    ctx->pc = 0x219DA4u;
    SET_GPR_U32(ctx, 31, 0x219DACu);
    ctx->pc = 0x219DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DA4u;
    // 0x219da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219EA8u, 0x219DA4u, 0x219DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DACu;
label_219dac:
    // 0x219dac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x219dacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219db0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x219db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x219db4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x219DB4u;
    {
        const bool branch_taken_0x219db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x219DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DB4u;
        // 0x219db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219db4) {
            ctx->pc = 0x219DD0u;
            goto label_219dd0;
        }
    }
    ctx->pc = 0x219DBCu;
    // 0x219dbc: 0xc0848e0  jal         func_212380
    ctx->pc = 0x219DBCu;
    SET_GPR_U32(ctx, 31, 0x219DC4u);
    ctx->pc = 0x219DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219DBCu;
    // 0x219dc0: 0x34a50f30  ori         $a1, $a1, 0xF30 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3888);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x219DBCu, 0x219DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219DC4u;
label_219dc4:
    // 0x219dc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x219DC4u;
    {
        const bool branch_taken_0x219dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DC4u;
        // 0x219dc8: 0x8e020980  lw          $v0, 0x980($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219dc4) {
            ctx->pc = 0x219DE0u;
            goto label_219de0;
        }
    }
    ctx->pc = 0x219DCCu;
    // 0x219dcc: 0x0  nop
    ctx->pc = 0x219dccu;
    // NOP
label_219dd0:
    // 0x219dd0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x219dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x219dd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x219dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x219dd8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x219dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x219ddc: 0x8e020980  lw          $v0, 0x980($s0)
    ctx->pc = 0x219ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2432)));
label_219de0:
    // 0x219de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219de4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x219de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x219de8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x219de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219dec: 0xae020980  sw          $v0, 0x980($s0)
    ctx->pc = 0x219decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2432), GPR_U32(ctx, 2));
    // 0x219df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219df4: 0x3e00008  jr          $ra
    ctx->pc = 0x219DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DF4u;
        // 0x219df8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219DFCu;
}
