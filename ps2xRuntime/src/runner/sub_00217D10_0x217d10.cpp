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

// Function: sub_00217D10
// Address: 0x217d10 - 0x217e18
void sub_00217D10_0x217d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217D10_0x217d10");
#endif

    switch (ctx->pc) {
        case 0x217d5cu: goto label_217d5c;
        case 0x217d8cu: goto label_217d8c;
        default: break;
    }

    ctx->pc = 0x217d10u;

    // 0x217d10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x217d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x217d14: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x217d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x217d18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x217d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d1c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x217d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x217d20: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x217d20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d24: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x217d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x217d28: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x217d28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x217d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x217d30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x217d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x217d34: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x217d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x217d38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x217d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x217d3c: 0x8e331fc0  lw          $s3, 0x1FC0($s1)
    ctx->pc = 0x217d3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8128)));
    // 0x217d40: 0x8e620110  lw          $v0, 0x110($s3)
    ctx->pc = 0x217d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x217d44: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x217d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x217d48: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x217D48u;
    {
        const bool branch_taken_0x217d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D48u;
        // 0x217d4c: 0x8e700074  lw          $s0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d48) {
            ctx->pc = 0x217DACu;
            goto label_217dac;
        }
    }
    ctx->pc = 0x217D50u;
    // 0x217d50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x217d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d54: 0xc07fb6e  jal         func_1FEDB8
    ctx->pc = 0x217D54u;
    SET_GPR_U32(ctx, 31, 0x217D5Cu);
    ctx->pc = 0x217D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D54u;
    // 0x217d58: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEDB8u, 0x217D54u, 0x217D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D5Cu;
label_217d5c:
    // 0x217d5c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x217d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217d60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x217d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217d64: 0x54720004  bnel        $v1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x217D64u;
    {
        const bool branch_taken_0x217d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x217d64) {
            ctx->pc = 0x217D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217D64u;
            // 0x217d68: 0x8e220e48  lw          $v0, 0xE48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217D78u;
            goto label_217d78;
        }
    }
    ctx->pc = 0x217D6Cu;
    // 0x217d6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x217D6Cu;
    {
        const bool branch_taken_0x217d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D6Cu;
        // 0x217d70: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d6c) {
            ctx->pc = 0x217DACu;
            goto label_217dac;
        }
    }
    ctx->pc = 0x217D74u;
    // 0x217d74: 0x0  nop
    ctx->pc = 0x217d74u;
    // NOP
label_217d78:
    // 0x217d78: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x217D78u;
    {
        const bool branch_taken_0x217d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217d78) {
            ctx->pc = 0x217D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217D78u;
            // 0x217d7c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217DA0u;
            goto label_217da0;
        }
    }
    ctx->pc = 0x217D80u;
    // 0x217d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d84: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x217D84u;
    SET_GPR_U32(ctx, 31, 0x217D8Cu);
    ctx->pc = 0x217D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D84u;
    // 0x217d88: 0x24050049  addiu       $a1, $zero, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x217D84u, 0x217D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D8Cu;
label_217d8c:
    // 0x217d8c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x217d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x217d90: 0x522026  xor         $a0, $v0, $s2
    ctx->pc = 0x217d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x217d94: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x217d94u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x217d98: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x217d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x217d9c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x217d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_217da0:
    // 0x217da0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x217da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217da4: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x217da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x217da8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x217da8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_217dac:
    // 0x217dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217db0: 0x16820009  bne         $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x217DB0u;
    {
        const bool branch_taken_0x217db0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x217DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DB0u;
        // 0x217db4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217db0) {
            ctx->pc = 0x217DD8u;
            goto label_217dd8;
        }
    }
    ctx->pc = 0x217DB8u;
    // 0x217db8: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x217db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x217dbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x217dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x217dc0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x217dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x217dc4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x217DC4u;
    {
        const bool branch_taken_0x217dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217dc4) {
            ctx->pc = 0x217DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217DC4u;
            // 0x217dc8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217DF0u;
            goto label_217df0;
        }
    }
    ctx->pc = 0x217DCCu;
    // 0x217dcc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x217DCCu;
    {
        const bool branch_taken_0x217dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DCCu;
        // 0x217dd0: 0xae700074  sw          $s0, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217dcc) {
            ctx->pc = 0x217DF4u;
            goto label_217df4;
        }
    }
    ctx->pc = 0x217DD4u;
    // 0x217dd4: 0x0  nop
    ctx->pc = 0x217dd4u;
    // NOP
label_217dd8:
    // 0x217dd8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217DD8u;
    {
        const bool branch_taken_0x217dd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x217DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DD8u;
        // 0x217ddc: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217dd8) {
            ctx->pc = 0x217DE8u;
            goto label_217de8;
        }
    }
    ctx->pc = 0x217DE0u;
    // 0x217de0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x217DE0u;
    {
        const bool branch_taken_0x217de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DE0u;
        // 0x217de4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217de0) {
            ctx->pc = 0x217DF0u;
            goto label_217df0;
        }
    }
    ctx->pc = 0x217DE8u;
label_217de8:
    // 0x217de8: 0x3a020003  xori        $v0, $s0, 0x3
    ctx->pc = 0x217de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)3);
    // 0x217dec: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x217decu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_217df0:
    // 0x217df0: 0xae700074  sw          $s0, 0x74($s3)
    ctx->pc = 0x217df0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 16));
label_217df4:
    // 0x217df4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x217df4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217df8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x217df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217dfc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x217dfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217e00: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x217e00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x217e04: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x217e04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217e08: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x217e08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x217e0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x217e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217e10: 0x3e00008  jr          $ra
    ctx->pc = 0x217E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E10u;
        // 0x217e14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217E18u;
}
