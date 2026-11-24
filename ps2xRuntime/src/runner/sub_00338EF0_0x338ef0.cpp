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

// Function: sub_00338EF0
// Address: 0x338ef0 - 0x338fa4
void sub_00338EF0_0x338ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338EF0_0x338ef0");
#endif

    switch (ctx->pc) {
        case 0x338f38u: goto label_338f38;
        case 0x338f4cu: goto label_338f4c;
        case 0x338f68u: goto label_338f68;
        default: break;
    }

    ctx->pc = 0x338ef0u;

    // 0x338ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x338ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x338ef4: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x338ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x338ef8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x338ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x338efc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x338efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x338f00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x338f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x338f04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x338f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x338f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x338f0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x338f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338f14: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x338f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x338f18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x338f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x338f1c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x338F1Cu;
    {
        const bool branch_taken_0x338f1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x338F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F1Cu;
        // 0x338f20: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338f1c) {
            ctx->pc = 0x338F88u;
            goto label_338f88;
        }
    }
    ctx->pc = 0x338F24u;
    // 0x338f24: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x338f24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x338f28: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x338F28u;
    {
        const bool branch_taken_0x338f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x338f28) {
            ctx->pc = 0x338F88u;
            goto label_338f88;
        }
    }
    ctx->pc = 0x338F30u;
    // 0x338f30: 0xc08e6f4  jal         func_239BD0
    ctx->pc = 0x338F30u;
    SET_GPR_U32(ctx, 31, 0x338F38u);
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x338F30u, 0x338F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F38u;
label_338f38:
    // 0x338f38: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x338F38u;
    {
        const bool branch_taken_0x338f38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x338F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F38u;
        // 0x338f3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338f38) {
            ctx->pc = 0x338F50u;
            goto label_338f50;
        }
    }
    ctx->pc = 0x338F40u;
    // 0x338f40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f44: 0xc0ce3ec  jal         func_338FB0
    ctx->pc = 0x338F44u;
    SET_GPR_U32(ctx, 31, 0x338F4Cu);
    ctx->pc = 0x338F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F44u;
    // 0x338f48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338FB0u, 0x338F44u, 0x338F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F4Cu;
label_338f4c:
    // 0x338f4c: 0x0  nop
    ctx->pc = 0x338f4cu;
    // NOP
label_338f50:
    // 0x338f50: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x338f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x338f54: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x338f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x338f58: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x338F58u;
    {
        const bool branch_taken_0x338f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x338f58) {
            ctx->pc = 0x338F68u;
            goto label_338f68;
        }
    }
    ctx->pc = 0x338F60u;
    // 0x338f60: 0xc08cbe8  jal         func_232FA0
    ctx->pc = 0x338F60u;
    SET_GPR_U32(ctx, 31, 0x338F68u);
    ctx->pc = 0x338F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F60u;
    // 0x338f64: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232FA0u, 0x338F60u, 0x338F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F68u;
label_338f68:
    // 0x338f68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x338f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338f6c: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x338f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x338f70: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x338f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x338f74: 0x2403fc19  addiu       $v1, $zero, -0x3E7
    ctx->pc = 0x338f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
    // 0x338f78: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x338f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x338f7c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x338f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x338f80: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x338f80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x338f84: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x338f84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
label_338f88:
    // 0x338f88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x338f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x338f8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x338f8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x338f90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x338f90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338f94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x338F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F9Cu;
        // 0x338fa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338FA4u;
}
