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

// Function: sub_00371C00
// Address: 0x371c00 - 0x371d14
void sub_00371C00_0x371c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371C00_0x371c00");
#endif

    switch (ctx->pc) {
        case 0x371c5cu: goto label_371c5c;
        case 0x371c84u: goto label_371c84;
        case 0x371c90u: goto label_371c90;
        case 0x371cc0u: goto label_371cc0;
        case 0x371cfcu: goto label_371cfc;
        default: break;
    }

    ctx->pc = 0x371c00u;

    // 0x371c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x371c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x371c04: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x371c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x371c08: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x371c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x371c0c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x371c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x371c10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x371c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x371c14: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x371c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x371c18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x371c1c: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x371c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x371c20: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x371c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x371c24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x371c28: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x371c28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x371c2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x371c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371c30: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x371C30u;
    {
        const bool branch_taken_0x371c30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x371C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371C30u;
        // 0x371c34: 0x24100141  addiu       $s0, $zero, 0x141 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371c30) {
            ctx->pc = 0x371C40u;
            goto label_371c40;
        }
    }
    ctx->pc = 0x371C38u;
    // 0x371c38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x371C38u;
    {
        const bool branch_taken_0x371c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371c38) {
            ctx->pc = 0x371C68u;
            goto label_371c68;
        }
    }
    ctx->pc = 0x371C40u;
label_371c40:
    // 0x371c40: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x371c40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x371c44: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x371c44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x371c48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x371c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c4c: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x371c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x371c50: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x371c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x371c54: 0xc0dc788  jal         func_371E20
    ctx->pc = 0x371C54u;
    SET_GPR_U32(ctx, 31, 0x371C5Cu);
    ctx->pc = 0x371C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371C54u;
    // 0x371c58: 0x2446ffec  addiu       $a2, $v0, -0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371E20u, 0x371C54u, 0x371C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371C5Cu;
label_371c5c:
    // 0x371c5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x371C5Cu;
    {
        const bool branch_taken_0x371c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371c5c) {
            ctx->pc = 0x371C88u;
            goto label_371c88;
        }
    }
    ctx->pc = 0x371C64u;
    // 0x371c64: 0x0  nop
    ctx->pc = 0x371c64u;
    // NOP
label_371c68:
    // 0x371c68: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x371c68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x371c6c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x371c6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x371c70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x371c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c74: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x371c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x371c78: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x371c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x371c7c: 0xc0dc748  jal         func_371D20
    ctx->pc = 0x371C7Cu;
    SET_GPR_U32(ctx, 31, 0x371C84u);
    ctx->pc = 0x371C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371C7Cu;
    // 0x371c80: 0x2446ffec  addiu       $a2, $v0, -0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371D20u, 0x371C7Cu, 0x371C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371C84u;
label_371c84:
    // 0x371c84: 0x0  nop
    ctx->pc = 0x371c84u;
    // NOP
label_371c88:
    // 0x371c88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x371c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c8c: 0x0  nop
    ctx->pc = 0x371c8cu;
    // NOP
label_371c90:
    // 0x371c90: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x371c90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x371c94: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x371c94u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x371c98: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x371c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x371c9c: 0x344a8080  ori         $t2, $v0, 0x8080
    ctx->pc = 0x371c9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x371ca0: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x371ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x371ca4: 0x2484703c  addiu       $a0, $a0, 0x703C
    ctx->pc = 0x371ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28732));
    // 0x371ca8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x371ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371cac: 0x3407fff5  ori         $a3, $zero, 0xFFF5
    ctx->pc = 0x371cacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x371cb0: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x371cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x371cb4: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x371cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x371cb8: 0xc09c844  jal         func_272110
    ctx->pc = 0x371CB8u;
    SET_GPR_U32(ctx, 31, 0x371CC0u);
    ctx->pc = 0x371CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371CB8u;
    // 0x371cbc: 0x454023  subu        $t0, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272110u, 0x371CB8u, 0x371CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371CC0u;
label_371cc0:
    // 0x371cc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x371cc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x371cc4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x371cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x371cc8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x371CC8u;
    {
        const bool branch_taken_0x371cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x371CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371CC8u;
        // 0x371ccc: 0x26100016  addiu       $s0, $s0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371cc8) {
            ctx->pc = 0x371C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371c90;
        }
    }
    ctx->pc = 0x371CD0u;
    // 0x371cd0: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x371cd0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x371cd4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x371cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x371cd8: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x371cd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x371cdc: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x371cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x371ce0: 0x24847028  addiu       $a0, $a0, 0x7028
    ctx->pc = 0x371ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28712));
    // 0x371ce4: 0x24060134  addiu       $a2, $zero, 0x134
    ctx->pc = 0x371ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
    // 0x371ce8: 0x3407fff5  ori         $a3, $zero, 0xFFF5
    ctx->pc = 0x371ce8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x371cec: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x371cecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x371cf0: 0x344a8080  ori         $t2, $v0, 0x8080
    ctx->pc = 0x371cf0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x371cf4: 0xc09c720  jal         func_271C80
    ctx->pc = 0x371CF4u;
    SET_GPR_U32(ctx, 31, 0x371CFCu);
    ctx->pc = 0x371CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371CF4u;
    // 0x371cf8: 0x654023  subu        $t0, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271C80u, 0x371CF4u, 0x371CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371CFCu;
label_371cfc:
    // 0x371cfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x371cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371d00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x371d00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371d04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371d08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x371D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371D0Cu;
        // 0x371d10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371D14u;
}
