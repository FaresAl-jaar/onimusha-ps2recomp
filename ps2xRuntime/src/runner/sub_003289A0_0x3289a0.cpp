#include <cstdio>
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

// Function: sub_003289A0
// Address: 0x3289a0 - 0x328a3c
void sub_003289A0_0x3289a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003289A0_0x3289a0");
#endif
    { static uint32_t n=0; ++n; if (n<=5 || (n%600)==0) fprintf(stderr,"[probe e3289a0] call %u a0=0x%x ra=0x%x\n",n,GPR_U32(ctx,4),GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x3289b0u: goto label_3289b0;
        case 0x3289c0u: goto label_3289c0;
        case 0x3289c8u: goto label_3289c8;
        case 0x3289d8u: goto label_3289d8;
        case 0x3289e0u: goto label_3289e0;
        case 0x3289f8u: goto label_3289f8;
        case 0x328a00u: goto label_328a00;
        case 0x328a10u: goto label_328a10;
        case 0x328a30u: goto label_328a30;
        default: break;
    }

    ctx->pc = 0x3289a0u;

    // 0x3289a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3289a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3289a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3289a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3289a8: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3289A8u;
    SET_GPR_U32(ctx, 31, 0x3289B0u);
    ctx->pc = 0x3289ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3289A8u;
    // 0x3289ac: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3289A8u, 0x3289B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3289B0u;
label_3289b0:
    // 0x3289b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3289b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3289b4: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3289B4u;
    {
        const bool branch_taken_0x3289b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3289b4) {
            ctx->pc = 0x3289F0u;
            goto label_3289f0;
        }
    }
    ctx->pc = 0x3289BCu;
    // 0x3289bc: 0x0  nop
    ctx->pc = 0x3289bcu;
    // NOP
label_3289c0:
    // 0x3289c0: 0xc0554e4  jal         func_155390
    ctx->pc = 0x3289C0u;
    SET_GPR_U32(ctx, 31, 0x3289C8u);
    ctx->pc = 0x3289C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3289C0u;
    // 0x3289c4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155390u, 0x3289C0u, 0x3289C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3289C8u;
label_3289c8:
    // 0x3289c8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3289c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3289cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3289ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3289d0: 0xc04c918  jal         func_132460
    ctx->pc = 0x3289D0u;
    SET_GPR_U32(ctx, 31, 0x3289D8u);
    ctx->pc = 0x3289D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3289D0u;
    // 0x3289d4: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x3289D0u, 0x3289D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3289D8u;
label_3289d8:
    // 0x3289d8: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3289D8u;
    SET_GPR_U32(ctx, 31, 0x3289E0u);
    ctx->pc = 0x3289DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3289D8u;
    // 0x3289dc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3289D8u, 0x3289E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3289E0u;
label_3289e0:
    // 0x3289e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3289e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3289e4: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3289E4u;
    {
        const bool branch_taken_0x3289e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3289e4) {
            ctx->pc = 0x3289C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3289c0;
        }
    }
    ctx->pc = 0x3289ECu;
    // 0x3289ec: 0x0  nop
    ctx->pc = 0x3289ecu;
    // NOP
label_3289f0:
    // 0x3289f0: 0xc0ca290  jal         func_328A40
    ctx->pc = 0x3289F0u;
    SET_GPR_U32(ctx, 31, 0x3289F8u);
    ctx->pc = 0x3289F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3289F0u;
    // 0x3289f4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328A40u, 0x3289F0u, 0x3289F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3289F8u;
label_3289f8:
    // 0x3289f8: 0xc0ca2dc  jal         func_328B70
    ctx->pc = 0x3289F8u;
    SET_GPR_U32(ctx, 31, 0x328A00u);
    ctx->pc = 0x3289FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3289F8u;
    // 0x3289fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328B70u, 0x3289F8u, 0x328A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A00u;
label_328a00:
    // 0x328a00: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x328a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x328a04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x328a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328a08: 0xc04c918  jal         func_132460
    ctx->pc = 0x328A08u;
    SET_GPR_U32(ctx, 31, 0x328A10u);
    ctx->pc = 0x328A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A08u;
    // 0x328a0c: 0x2484fca0  addiu       $a0, $a0, -0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x328A08u, 0x328A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A10u;
label_328a10:
    // 0x328a10: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x328a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328a14: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x328a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x328a18: 0x1462fff7  bne         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x328A18u;
    {
        const bool branch_taken_0x328a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x328A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A18u;
        // 0x328a1c: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328a18) {
            ctx->pc = 0x3289F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3289f8;
        }
    }
    ctx->pc = 0x328A20u;
    // 0x328a20: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x328a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x328a24: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x328a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x328a28: 0xc04c910  jal         func_132440
    ctx->pc = 0x328A28u;
    SET_GPR_U32(ctx, 31, 0x328A30u);
    ctx->pc = 0x328A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328A28u;
    // 0x328a2c: 0x24a556c0  addiu       $a1, $a1, 0x56C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132440u, 0x328A28u, 0x328A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328A30u;
label_328a30:
    // 0x328a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328a34: 0x3e00008  jr          $ra
    ctx->pc = 0x328A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328A34u;
        // 0x328a38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328A3Cu;
}
