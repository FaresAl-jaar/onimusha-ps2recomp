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

// Function: sub_00363F50
// Address: 0x363f50 - 0x364054
void sub_00363F50_0x363f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363F50_0x363f50");
#endif

    switch (ctx->pc) {
        case 0x363f88u: goto label_363f88;
        case 0x363f9cu: goto label_363f9c;
        case 0x363fe0u: goto label_363fe0;
        case 0x364010u: goto label_364010;
        default: break;
    }

    ctx->pc = 0x363f50u;

    // 0x363f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x363f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x363f54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x363f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x363f58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x363f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x363f5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x363f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x363f60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x363f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x363f64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x363f68: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x363f68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x363f6c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x363f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x363f70: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x363F70u;
    {
        const bool branch_taken_0x363f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363F70u;
        // 0x363f74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363f70) {
            ctx->pc = 0x363FD8u;
            goto label_363fd8;
        }
    }
    ctx->pc = 0x363F78u;
    // 0x363f78: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x363f78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
    // 0x363f7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x363f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363f80: 0x2631a7c0  addiu       $s1, $s1, -0x5840
    ctx->pc = 0x363f80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944704));
    // 0x363f84: 0x0  nop
    ctx->pc = 0x363f84u;
    // NOP
label_363f88:
    // 0x363f88: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x363f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x363f8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x363F8Cu;
    {
        const bool branch_taken_0x363f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x363f8c) {
            ctx->pc = 0x363FC0u;
            goto label_363fc0;
        }
    }
    ctx->pc = 0x363F94u;
    // 0x363f94: 0xc0d3518  jal         func_34D460
    ctx->pc = 0x363F94u;
    SET_GPR_U32(ctx, 31, 0x363F9Cu);
    ctx->pc = 0x363F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363F94u;
    // 0x363f98: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D460u, 0x363F94u, 0x363F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363F9Cu;
label_363f9c:
    // 0x363f9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x363F9Cu;
    {
        const bool branch_taken_0x363f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x363f9c) {
            ctx->pc = 0x363FC0u;
            goto label_363fc0;
        }
    }
    ctx->pc = 0x363FA4u;
    // 0x363fa4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x363fa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x363fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x363fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363fac: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x363facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x363fb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x363fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363fb4: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x363fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x363fb8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x363fb8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363fbc: 0x0  nop
    ctx->pc = 0x363fbcu;
    // NOP
label_363fc0:
    // 0x363fc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x363fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x363fc4: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x363fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x363fc8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x363FC8u;
    {
        const bool branch_taken_0x363fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x363FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363FC8u;
        // 0x363fcc: 0x26310006  addiu       $s1, $s1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363fc8) {
            ctx->pc = 0x363F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363f88;
        }
    }
    ctx->pc = 0x363FD0u;
    // 0x363fd0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x363FD0u;
    {
        const bool branch_taken_0x363fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363fd0) {
            ctx->pc = 0x364038u;
            goto label_364038;
        }
    }
    ctx->pc = 0x363FD8u;
label_363fd8:
    // 0x363fd8: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x363FD8u;
    SET_GPR_U32(ctx, 31, 0x363FE0u);
    ctx->pc = 0x363FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363FD8u;
    // 0x363fdc: 0x8f848060  lw          $a0, -0x7FA0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x363FD8u, 0x363FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363FE0u;
label_363fe0:
    // 0x363fe0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x363fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363fe4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x363fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x363fe8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x363FE8u;
    {
        const bool branch_taken_0x363fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363fe8) {
            ctx->pc = 0x364008u;
            goto label_364008;
        }
    }
    ctx->pc = 0x363FF0u;
    // 0x363ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x363ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363ff4: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x363ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x363ff8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x363ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x363ffc: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x363ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x364000: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x364000u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364004: 0x0  nop
    ctx->pc = 0x364004u;
    // NOP
label_364008:
    // 0x364008: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x364008u;
    SET_GPR_U32(ctx, 31, 0x364010u);
    ctx->pc = 0x36400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364008u;
    // 0x36400c: 0x8f848064  lw          $a0, -0x7F9C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x364008u, 0x364010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364010u;
label_364010:
    // 0x364010: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x364010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364014: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x364014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x364018: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x364018u;
    {
        const bool branch_taken_0x364018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x364018) {
            ctx->pc = 0x364038u;
            goto label_364038;
        }
    }
    ctx->pc = 0x364020u;
    // 0x364020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x364020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364024: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x364024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x364028: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x364028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36402c: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x36402cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x364030: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x364030u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x364034: 0x0  nop
    ctx->pc = 0x364034u;
    // NOP
label_364038:
    // 0x364038: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x364038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36403c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36403cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x364040: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x364040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x364044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36404c: 0x3e00008  jr          $ra
    ctx->pc = 0x36404Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36404Cu;
        // 0x364050: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36404Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364054u;
}
