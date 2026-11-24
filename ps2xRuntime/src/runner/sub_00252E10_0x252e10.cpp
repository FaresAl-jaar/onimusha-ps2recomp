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

// Function: sub_00252E10
// Address: 0x252e10 - 0x252e9c
void sub_00252E10_0x252e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252E10_0x252e10");
#endif

    switch (ctx->pc) {
        case 0x252e10u: goto label_252e10;
        case 0x252e14u: goto label_252e14;
        case 0x252e18u: goto label_252e18;
        case 0x252e1cu: goto label_252e1c;
        case 0x252e20u: goto label_252e20;
        case 0x252e24u: goto label_252e24;
        case 0x252e28u: goto label_252e28;
        case 0x252e2cu: goto label_252e2c;
        case 0x252e30u: goto label_252e30;
        case 0x252e34u: goto label_252e34;
        case 0x252e38u: goto label_252e38;
        case 0x252e3cu: goto label_252e3c;
        case 0x252e40u: goto label_252e40;
        case 0x252e44u: goto label_252e44;
        case 0x252e48u: goto label_252e48;
        case 0x252e4cu: goto label_252e4c;
        case 0x252e50u: goto label_252e50;
        case 0x252e54u: goto label_252e54;
        case 0x252e58u: goto label_252e58;
        case 0x252e5cu: goto label_252e5c;
        case 0x252e60u: goto label_252e60;
        case 0x252e64u: goto label_252e64;
        case 0x252e68u: goto label_252e68;
        case 0x252e6cu: goto label_252e6c;
        case 0x252e70u: goto label_252e70;
        case 0x252e74u: goto label_252e74;
        case 0x252e78u: goto label_252e78;
        case 0x252e7cu: goto label_252e7c;
        case 0x252e80u: goto label_252e80;
        case 0x252e84u: goto label_252e84;
        case 0x252e88u: goto label_252e88;
        case 0x252e8cu: goto label_252e8c;
        case 0x252e90u: goto label_252e90;
        case 0x252e94u: goto label_252e94;
        case 0x252e98u: goto label_252e98;
        default: break;
    }

    ctx->pc = 0x252e10u;

label_252e10:
    // 0x252e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_252e14:
    // 0x252e14: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x252e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_252e18:
    // 0x252e18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x252e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_252e1c:
    // 0x252e1c: 0x3c110089  lui         $s1, 0x89
    ctx->pc = 0x252e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)137 << 16));
label_252e20:
    // 0x252e20: 0x8e228968  lw          $v0, -0x7698($s1)
    ctx->pc = 0x252e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936936)));
label_252e24:
    // 0x252e24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_252e28:
    // 0x252e28: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_252e2c:
    if (ctx->pc == 0x252E2Cu) {
        ctx->pc = 0x252E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E28u;
        // 0x252e2c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E30u;
        goto label_252e30;
    }
    ctx->pc = 0x252E28u;
    {
        const bool branch_taken_0x252e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E28u;
        // 0x252e2c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e28) {
            ctx->pc = 0x252E88u;
            goto label_252e88;
        }
    }
    ctx->pc = 0x252E30u;
label_252e30:
    // 0x252e30: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x252e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_252e34:
    // 0x252e34: 0x24420710  addiu       $v0, $v0, 0x710
    ctx->pc = 0x252e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1808));
label_252e38:
    // 0x252e38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x252e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_252e3c:
    // 0x252e3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x252e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_252e40:
    // 0x252e40: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x252e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_252e44:
    // 0x252e44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x252e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_252e48:
    // 0x252e48: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_252e4c:
    if (ctx->pc == 0x252E4Cu) {
        ctx->pc = 0x252E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E48u;
        // 0x252e4c: 0x26238968  addiu       $v1, $s1, -0x7698 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E50u;
        goto label_252e50;
    }
    ctx->pc = 0x252E48u;
    {
        const bool branch_taken_0x252e48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x252E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E48u;
        // 0x252e4c: 0x26238968  addiu       $v1, $s1, -0x7698 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e48) {
            ctx->pc = 0x252E7Cu;
            goto label_252e7c;
        }
    }
    ctx->pc = 0x252E50u;
label_252e50:
    // 0x252e50: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x252e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_252e54:
    // 0x252e54: 0x24500714  addiu       $s0, $v0, 0x714
    ctx->pc = 0x252e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1812));
label_252e58:
    // 0x252e58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x252e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_252e5c:
    // 0x252e5c: 0x10660005  beq         $v1, $a2, . + 4 + (0x5 << 2)
label_252e60:
    if (ctx->pc == 0x252E60u) {
        ctx->pc = 0x252E64u;
        goto label_252e64;
    }
    ctx->pc = 0x252E5Cu;
    {
        const bool branch_taken_0x252e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x252e5c) {
            ctx->pc = 0x252E74u;
            goto label_252e74;
        }
    }
    ctx->pc = 0x252E64u;
label_252e64:
    // 0x252e64: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x252e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_252e68:
    // 0x252e68: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x252e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_252e6c:
    // 0x252e6c: 0xc094bf4  jal         func_252FD0
label_252e70:
    if (ctx->pc == 0x252E70u) {
        ctx->pc = 0x252E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E6Cu;
        // 0x252e70: 0x2484ef20  addiu       $a0, $a0, -0x10E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E74u;
        goto label_252e74;
    }
    ctx->pc = 0x252E6Cu;
    SET_GPR_U32(ctx, 31, 0x252E74u);
    ctx->pc = 0x252E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252E6Cu;
    // 0x252e70: 0x2484ef20  addiu       $a0, $a0, -0x10E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252FD0u, 0x252E6Cu, 0x252E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252E74u;
label_252e74:
    // 0x252e74: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x252e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_252e78:
    // 0x252e78: 0x26238968  addiu       $v1, $s1, -0x7698
    ctx->pc = 0x252e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936936));
label_252e7c:
    // 0x252e7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x252e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_252e80:
    // 0x252e80: 0x40f809  jalr        $v0
label_252e84:
    if (ctx->pc == 0x252E84u) {
        ctx->pc = 0x252E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E80u;
        // 0x252e84: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E88u;
        goto label_252e88;
    }
    ctx->pc = 0x252E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x252E88u);
        ctx->pc = 0x252E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E80u;
        // 0x252e84: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252E80u, 0x252E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x252E88u;
label_252e88:
    // 0x252e88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_252e8c:
    // 0x252e8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x252e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_252e90:
    // 0x252e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_252e94:
    // 0x252e94: 0x3e00008  jr          $ra
label_252e98:
    if (ctx->pc == 0x252E98u) {
        ctx->pc = 0x252E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E94u;
        // 0x252e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x252E9Cu;
        goto label_fallthrough_0x252e94;
    }
    ctx->pc = 0x252E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E94u;
        // 0x252e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x252e94:
    ctx->pc = 0x252E9Cu;
}
