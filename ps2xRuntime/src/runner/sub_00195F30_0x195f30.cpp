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

// Function: sub_00195F30
// Address: 0x195f30 - 0x195fa4
void sub_00195F30_0x195f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195F30_0x195f30");
#endif

    switch (ctx->pc) {
        case 0x195f68u: goto label_195f68;
        default: break;
    }

    ctx->pc = 0x195f30u;

    // 0x195f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195f34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x195f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195f3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195f40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195f44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x195f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f48: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x195F48u;
    {
        const bool branch_taken_0x195f48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F48u;
        // 0x195f4c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f48) {
            ctx->pc = 0x195F90u;
            goto label_195f90;
        }
    }
    ctx->pc = 0x195F50u;
    // 0x195f50: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x195f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x195f54: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x195f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x195f58: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x195f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x195f5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195f60: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x195F60u;
    SET_GPR_U32(ctx, 31, 0x195F68u);
    ctx->pc = 0x195F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195F60u;
    // 0x195f64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x195F60u, 0x195F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195F68u;
label_195f68:
    // 0x195f68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x195F68u;
    {
        const bool branch_taken_0x195f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195f68) {
            ctx->pc = 0x195F90u;
            goto label_195f90;
        }
    }
    ctx->pc = 0x195F70u;
    // 0x195f70: 0xa2300004  sb          $s0, 0x4($s1)
    ctx->pc = 0x195f70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 16));
    // 0x195f74: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x195f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x195f78: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x195f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x195f7c: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x195f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x195f80: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x195f80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x195f84: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x195f84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x195f88: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x195f88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x195f8c: 0x0  nop
    ctx->pc = 0x195f8cu;
    // NOP
label_195f90:
    // 0x195f90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195f94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x195F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F9Cu;
        // 0x195fa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195FA4u;
}
