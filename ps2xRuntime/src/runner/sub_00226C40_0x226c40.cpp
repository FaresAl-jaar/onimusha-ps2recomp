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

// Function: sub_00226C40
// Address: 0x226c40 - 0x226d94
void sub_00226C40_0x226c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226C40_0x226c40");
#endif

    switch (ctx->pc) {
        case 0x226c80u: goto label_226c80;
        case 0x226ca8u: goto label_226ca8;
        case 0x226cd0u: goto label_226cd0;
        case 0x226d08u: goto label_226d08;
        case 0x226d40u: goto label_226d40;
        case 0x226d70u: goto label_226d70;
        default: break;
    }

    ctx->pc = 0x226c40u;

    // 0x226c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x226c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226c4c: 0x8089b16  j           func_226C58
    ctx->pc = 0x226C4Cu;
    ctx->pc = 0x226C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C4Cu;
    // 0x226c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C58u;
    goto label_226c58;
    ctx->pc = 0x226C54u;
    // 0x226c54: 0x0  nop
    ctx->pc = 0x226c54u;
    // NOP
label_226c58:
    // 0x226c58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x226c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x226c5c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x226c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x226c60: 0xa22026  xor         $a0, $a1, $v0
    ctx->pc = 0x226c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x226c64: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x226c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x226c68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x226c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x226c6c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x226c6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x226c70: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x226c70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x226c74: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x226c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x226c78: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x226c78u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x226c7c: 0x0  nop
    ctx->pc = 0x226c7cu;
    // NOP
label_226c80:
    // 0x226c80: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x226c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x226c84: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x226c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x226c88: 0x0  nop
    ctx->pc = 0x226c88u;
    // NOP
    // 0x226c8c: 0x0  nop
    ctx->pc = 0x226c8cu;
    // NOP
    // 0x226c90: 0x0  nop
    ctx->pc = 0x226c90u;
    // NOP
    // 0x226c94: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x226C94u;
    {
        const bool branch_taken_0x226c94 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x226C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C94u;
        // 0x226c98: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c94) {
            ctx->pc = 0x226C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226c80;
        }
    }
    ctx->pc = 0x226C9Cu;
    // 0x226c9c: 0x24e20024  addiu       $v0, $a3, 0x24
    ctx->pc = 0x226c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x226ca0: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x226ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x226ca4: 0x0  nop
    ctx->pc = 0x226ca4u;
    // NOP
label_226ca8:
    // 0x226ca8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x226ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x226cac: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x226cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x226cb0: 0x0  nop
    ctx->pc = 0x226cb0u;
    // NOP
    // 0x226cb4: 0x0  nop
    ctx->pc = 0x226cb4u;
    // NOP
    // 0x226cb8: 0x0  nop
    ctx->pc = 0x226cb8u;
    // NOP
    // 0x226cbc: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x226CBCu;
    {
        const bool branch_taken_0x226cbc = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x226CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CBCu;
        // 0x226cc0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226cbc) {
            ctx->pc = 0x226CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226ca8;
        }
    }
    ctx->pc = 0x226CC4u;
    // 0x226cc4: 0x14a6000c  bne         $a1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x226CC4u;
    {
        const bool branch_taken_0x226cc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x226CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CC4u;
        // 0x226cc8: 0x24080011  addiu       $t0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226cc4) {
            ctx->pc = 0x226CF8u;
            goto label_226cf8;
        }
    }
    ctx->pc = 0x226CCCu;
    // 0x226ccc: 0x24e30044  addiu       $v1, $a3, 0x44
    ctx->pc = 0x226cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
label_226cd0:
    // 0x226cd0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x226cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x226cd4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x226cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x226cd8: 0x290200e0  slti        $v0, $t0, 0xE0
    ctx->pc = 0x226cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x226cdc: 0x0  nop
    ctx->pc = 0x226cdcu;
    // NOP
    // 0x226ce0: 0x0  nop
    ctx->pc = 0x226ce0u;
    // NOP
    // 0x226ce4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x226CE4u;
    {
        const bool branch_taken_0x226ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CE4u;
        // 0x226ce8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226ce4) {
            ctx->pc = 0x226CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226cd0;
        }
    }
    ctx->pc = 0x226CECu;
    // 0x226cec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x226CECu;
    {
        const bool branch_taken_0x226cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CECu;
        // 0x226cf0: 0x24e20380  addiu       $v0, $a3, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226cec) {
            ctx->pc = 0x226D3Cu;
            goto label_226d3c;
        }
    }
    ctx->pc = 0x226CF4u;
    // 0x226cf4: 0x0  nop
    ctx->pc = 0x226cf4u;
    // NOP
label_226cf8:
    // 0x226cf8: 0xc55023  subu        $t2, $a2, $a1
    ctx->pc = 0x226cf8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x226cfc: 0x240b00cf  addiu       $t3, $zero, 0xCF
    ctx->pc = 0x226cfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x226d00: 0x24e90044  addiu       $t1, $a3, 0x44
    ctx->pc = 0x226d00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
    // 0x226d04: 0x0  nop
    ctx->pc = 0x226d04u;
    // NOP
label_226d08:
    // 0x226d08: 0x14b001b  divu        $zero, $t2, $t3
    ctx->pc = 0x226d08u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x226d0c: 0x2503ffef  addiu       $v1, $t0, -0x11
    ctx->pc = 0x226d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967279));
    // 0x226d10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x226d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x226d14: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x226D14u;
    {
        const bool branch_taken_0x226d14 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x226d14) {
            ctx->pc = 0x226D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226D14u;
            // 0x226d18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x226D1Cu;
            goto label_226d1c;
        }
    }
    ctx->pc = 0x226D1Cu;
label_226d1c:
    // 0x226d1c: 0x290400e0  slti        $a0, $t0, 0xE0
    ctx->pc = 0x226d1cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x226d20: 0x1012  mflo        $v0
    ctx->pc = 0x226d20u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x226d24: 0x436018  mult        $t4, $v0, $v1
    ctx->pc = 0x226d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x226d28: 0x1851021  addu        $v0, $t4, $a1
    ctx->pc = 0x226d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x226d2c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x226d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x226d30: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x226D30u;
    {
        const bool branch_taken_0x226d30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x226D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D30u;
        // 0x226d34: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d30) {
            ctx->pc = 0x226D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226d08;
        }
    }
    ctx->pc = 0x226D38u;
    // 0x226d38: 0x24e20380  addiu       $v0, $a3, 0x380
    ctx->pc = 0x226d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 896));
label_226d3c:
    // 0x226d3c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x226d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_226d40:
    // 0x226d40: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x226d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x226d44: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x226d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x226d48: 0x0  nop
    ctx->pc = 0x226d48u;
    // NOP
    // 0x226d4c: 0x0  nop
    ctx->pc = 0x226d4cu;
    // NOP
    // 0x226d50: 0x0  nop
    ctx->pc = 0x226d50u;
    // NOP
    // 0x226d54: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x226D54u;
    {
        const bool branch_taken_0x226d54 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x226D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D54u;
        // 0x226d58: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d54) {
            ctx->pc = 0x226D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226d40;
        }
    }
    ctx->pc = 0x226D5Cu;
    // 0x226d5c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x226d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x226d60: 0x24e703c0  addiu       $a3, $a3, 0x3C0
    ctx->pc = 0x226d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 960));
    // 0x226d64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x226d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x226d68: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x226d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x226d6c: 0x0  nop
    ctx->pc = 0x226d6cu;
    // NOP
label_226d70:
    // 0x226d70: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x226d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x226d74: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x226d74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x226d78: 0x0  nop
    ctx->pc = 0x226d78u;
    // NOP
    // 0x226d7c: 0x0  nop
    ctx->pc = 0x226d7cu;
    // NOP
    // 0x226d80: 0x0  nop
    ctx->pc = 0x226d80u;
    // NOP
    // 0x226d84: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x226D84u;
    {
        const bool branch_taken_0x226d84 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x226D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D84u;
        // 0x226d88: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d84) {
            ctx->pc = 0x226D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226d70;
        }
    }
    ctx->pc = 0x226D8Cu;
    // 0x226d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x226D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226D94u;
}
