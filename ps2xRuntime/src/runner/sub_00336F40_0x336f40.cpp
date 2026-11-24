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

// Function: sub_00336F40
// Address: 0x336f40 - 0x336fa0
void sub_00336F40_0x336f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336F40_0x336f40");
#endif

    switch (ctx->pc) {
        case 0x336f6cu: goto label_336f6c;
        default: break;
    }

    ctx->pc = 0x336f40u;

    // 0x336f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x336f44: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x336f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x336f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x336f4c: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x336f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x336f50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x336f54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x336f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336f58: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x336f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336f5c: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x336f5cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x336f60: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x336f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x336f64: 0xc0bd2ec  jal         func_2F4BB0
    ctx->pc = 0x336F64u;
    SET_GPR_U32(ctx, 31, 0x336F6Cu);
    ctx->pc = 0x336F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336F64u;
    // 0x336f68: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4BB0u, 0x336F64u, 0x336F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336F6Cu;
label_336f6c:
    // 0x336f6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x336F6Cu;
    {
        const bool branch_taken_0x336f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336f6c) {
            ctx->pc = 0x336F80u;
            goto label_336f80;
        }
    }
    ctx->pc = 0x336F74u;
    // 0x336f74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x336F74u;
    {
        const bool branch_taken_0x336f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F74u;
        // 0x336f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336f74) {
            ctx->pc = 0x336F90u;
            goto label_336f90;
        }
    }
    ctx->pc = 0x336F7Cu;
    // 0x336f7c: 0x0  nop
    ctx->pc = 0x336f7cu;
    // NOP
label_336f80:
    // 0x336f80: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x336f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x336f84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x336f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x336f88: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x336f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x336f8c: 0x0  nop
    ctx->pc = 0x336f8cu;
    // NOP
label_336f90:
    // 0x336f90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336f94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336f98: 0x3e00008  jr          $ra
    ctx->pc = 0x336F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F98u;
        // 0x336f9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336FA0u;
}
