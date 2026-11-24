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

// Function: sub_002CAD30
// Address: 0x2cad30 - 0x2cad9c
void sub_002CAD30_0x2cad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAD30_0x2cad30");
#endif

    switch (ctx->pc) {
        case 0x2cad80u: goto label_2cad80;
        default: break;
    }

    ctx->pc = 0x2cad30u;

    // 0x2cad30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cad34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cad34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cad38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cad3c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CAD3Cu;
    {
        const bool branch_taken_0x2cad3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cad3c) {
            ctx->pc = 0x2CAD88u;
            goto label_2cad88;
        }
    }
    ctx->pc = 0x2CAD44u;
    // 0x2cad44: 0x90a30640  lbu         $v1, 0x640($a1)
    ctx->pc = 0x2cad44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1600)));
    // 0x2cad48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cad4c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CAD4Cu;
    {
        const bool branch_taken_0x2cad4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cad4c) {
            ctx->pc = 0x2CAD88u;
            goto label_2cad88;
        }
    }
    ctx->pc = 0x2CAD54u;
    // 0x2cad54: 0xaf8689e0  sw          $a2, -0x7620($gp)
    ctx->pc = 0x2cad54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U32(ctx, 6));
    // 0x2cad58: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2cad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cad5c: 0x90420067  lbu         $v0, 0x67($v0)
    ctx->pc = 0x2cad5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 103)));
    // 0x2cad60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CAD60u;
    {
        const bool branch_taken_0x2cad60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cad60) {
            ctx->pc = 0x2CAD88u;
            goto label_2cad88;
        }
    }
    ctx->pc = 0x2CAD68u;
    // 0x2cad68: 0xfc800060  sd          $zero, 0x60($a0)
    ctx->pc = 0x2cad68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 0));
    // 0x2cad6c: 0xfc800068  sd          $zero, 0x68($a0)
    ctx->pc = 0x2cad6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 0));
    // 0x2cad70: 0xa480003c  sh          $zero, 0x3C($a0)
    ctx->pc = 0x2cad70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cad74: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2cad74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cad78: 0xc0b21a8  jal         func_2C86A0
    ctx->pc = 0x2CAD78u;
    SET_GPR_U32(ctx, 31, 0x2CAD80u);
    ctx->pc = 0x2CAD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAD78u;
    // 0x2cad7c: 0x90460067  lbu         $a2, 0x67($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 103)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C86A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C86A0u, 0x2CAD78u, 0x2CAD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD80u;
label_2cad80:
    // 0x2cad80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CAD80u;
    {
        const bool branch_taken_0x2cad80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD80u;
        // 0x2cad84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad80) {
            ctx->pc = 0x2CAD90u;
            goto label_2cad90;
        }
    }
    ctx->pc = 0x2CAD88u;
label_2cad88:
    // 0x2cad88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cad88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cad8c: 0x0  nop
    ctx->pc = 0x2cad8cu;
    // NOP
label_2cad90:
    // 0x2cad90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cad90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cad94: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD94u;
        // 0x2cad98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAD9Cu;
}
