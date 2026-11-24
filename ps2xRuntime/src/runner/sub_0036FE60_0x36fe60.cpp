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

// Function: sub_0036FE60
// Address: 0x36fe60 - 0x36ff50
void sub_0036FE60_0x36fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FE60_0x36fe60");
#endif

    switch (ctx->pc) {
        case 0x36fed8u: goto label_36fed8;
        case 0x36ff40u: goto label_36ff40;
        default: break;
    }

    ctx->pc = 0x36fe60u;

    // 0x36fe60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36fe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36fe64: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x36fe64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x36fe68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36fe68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36fe6c: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x36fe6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x36fe70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36fe70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36fe74: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x36fe74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x36fe78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36fe78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fe7c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x36fe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x36fe80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x36fe80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x36fe84: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x36FE84u;
    {
        const bool branch_taken_0x36fe84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36fe84) {
            ctx->pc = 0x36FED8u;
            goto label_36fed8;
        }
    }
    ctx->pc = 0x36FE8Cu;
    // 0x36fe8c: 0x82030115  lb          $v1, 0x115($s0)
    ctx->pc = 0x36fe8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 277)));
    // 0x36fe90: 0x82020117  lb          $v0, 0x117($s0)
    ctx->pc = 0x36fe90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 279)));
    // 0x36fe94: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x36fe94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x36fe98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x36FE98u;
    {
        const bool branch_taken_0x36fe98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FE98u;
        // 0x36fe9c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fe98) {
            ctx->pc = 0x36FEA8u;
            goto label_36fea8;
        }
    }
    ctx->pc = 0x36FEA0u;
    // 0x36fea0: 0xa2020115  sb          $v0, 0x115($s0)
    ctx->pc = 0x36fea0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 277), (uint8_t)GPR_U32(ctx, 2));
    // 0x36fea4: 0x0  nop
    ctx->pc = 0x36fea4u;
    // NOP
label_36fea8:
    // 0x36fea8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36feac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36feacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36feb0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36feb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36feb4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36feb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36feb8: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x36feb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x36febc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36febcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36fec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fec4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36fec4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fec8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36fec8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fecc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36feccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fed0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36FED0u;
    SET_GPR_U32(ctx, 31, 0x36FED8u);
    ctx->pc = 0x36FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FED0u;
    // 0x36fed4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36FED0u, 0x36FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FED8u;
label_36fed8:
    // 0x36fed8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x36fed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x36fedc: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x36fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x36fee0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x36fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x36fee4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x36fee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x36fee8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x36fee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x36feec: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x36FEECu;
    {
        const bool branch_taken_0x36feec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36feec) {
            ctx->pc = 0x36FF40u;
            goto label_36ff40;
        }
    }
    ctx->pc = 0x36FEF4u;
    // 0x36fef4: 0x82030115  lb          $v1, 0x115($s0)
    ctx->pc = 0x36fef4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 277)));
    // 0x36fef8: 0x82020116  lb          $v0, 0x116($s0)
    ctx->pc = 0x36fef8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 278)));
    // 0x36fefc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x36fefcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x36ff00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x36FF00u;
    {
        const bool branch_taken_0x36ff00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF00u;
        // 0x36ff04: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff00) {
            ctx->pc = 0x36FF10u;
            goto label_36ff10;
        }
    }
    ctx->pc = 0x36FF08u;
    // 0x36ff08: 0xa2020115  sb          $v0, 0x115($s0)
    ctx->pc = 0x36ff08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 277), (uint8_t)GPR_U32(ctx, 2));
    // 0x36ff0c: 0x0  nop
    ctx->pc = 0x36ff0cu;
    // NOP
label_36ff10:
    // 0x36ff10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ff14: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36ff18: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36ff18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36ff1c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36ff20: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x36ff20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x36ff24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ff24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ff28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36ff28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ff2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36ff2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ff30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36ff30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ff34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36ff34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ff38: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36FF38u;
    SET_GPR_U32(ctx, 31, 0x36FF40u);
    ctx->pc = 0x36FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FF38u;
    // 0x36ff3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36FF38u, 0x36FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF40u;
label_36ff40:
    // 0x36ff40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36ff40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ff44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36ff44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ff48: 0x3e00008  jr          $ra
    ctx->pc = 0x36FF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF48u;
        // 0x36ff4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FF50u;
}
