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

// Function: sub_00116DB8
// Address: 0x116db8 - 0x116e48
void sub_00116DB8_0x116db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116DB8_0x116db8");
#endif

    switch (ctx->pc) {
        case 0x116dd0u: goto label_116dd0;
        case 0x116de0u: goto label_116de0;
        case 0x116e24u: goto label_116e24;
        default: break;
    }

    ctx->pc = 0x116db8u;

    // 0x116db8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x116db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x116dbc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x116dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x116dc0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x116dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x116dc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x116dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116dc8: 0xc0459f8  jal         func_1167E0
    ctx->pc = 0x116DC8u;
    SET_GPR_U32(ctx, 31, 0x116DD0u);
    ctx->pc = 0x116DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116DC8u;
    // 0x116dcc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1167E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1167E0u, 0x116DC8u, 0x116DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DD0u;
label_116dd0:
    // 0x116dd0: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x116DD0u;
    {
        const bool branch_taken_0x116dd0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x116DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DD0u;
        // 0x116dd4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116dd0) {
            ctx->pc = 0x116E34u;
            goto label_116e34;
        }
    }
    ctx->pc = 0x116DD8u;
    // 0x116dd8: 0xc045a38  jal         func_1168E0
    ctx->pc = 0x116DD8u;
    SET_GPR_U32(ctx, 31, 0x116DE0u);
    ctx->pc = 0x1168E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1168E0u, 0x116DD8u, 0x116DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DE0u;
label_116de0:
    // 0x116de0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116DE0u;
    {
        const bool branch_taken_0x116de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DE0u;
        // 0x116de4: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116de0) {
            ctx->pc = 0x116DF4u;
            goto label_116df4;
        }
    }
    ctx->pc = 0x116DE8u;
    // 0x116de8: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x116de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x116dec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x116DECu;
    {
        const bool branch_taken_0x116dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DECu;
        // 0x116df0: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116dec) {
            ctx->pc = 0x116E34u;
            goto label_116e34;
        }
    }
    ctx->pc = 0x116DF4u;
label_116df4:
    // 0x116df4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x116df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x116df8: 0x26070640  addiu       $a3, $s0, 0x640
    ctx->pc = 0x116df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x116dfc: 0xae110640  sw          $s1, 0x640($s0)
    ctx->pc = 0x116dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1600), GPR_U32(ctx, 17));
    // 0x116e00: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x116e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x116e04: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x116e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116e08: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x116e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x116e0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e10: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x116e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116e14: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x116e14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116e18: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x116e18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116e1c: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x116E1Cu;
    SET_GPR_U32(ctx, 31, 0x116E24u);
    ctx->pc = 0x116E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E1Cu;
    // 0x116e20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x116E1Cu, 0x116E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E24u;
label_116e24:
    // 0x116e24: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116E24u;
    {
        const bool branch_taken_0x116e24 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x116e24) {
            ctx->pc = 0x116E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116E24u;
            // 0x116e28: 0x8e020640  lw          $v0, 0x640($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E34u;
            goto label_116e34;
        }
    }
    ctx->pc = 0x116E2Cu;
    // 0x116e2c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x116e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x116e30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x116e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_116e34:
    // 0x116e34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x116e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116e38: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x116e38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116e3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116e40: 0x3e00008  jr          $ra
    ctx->pc = 0x116E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E40u;
        // 0x116e44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116E48u;
}
