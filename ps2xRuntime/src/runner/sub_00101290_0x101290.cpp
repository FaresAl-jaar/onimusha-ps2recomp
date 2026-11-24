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

// Function: sub_00101290
// Address: 0x101290 - 0x1012ec
void sub_00101290_0x101290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101290_0x101290");
#endif

    switch (ctx->pc) {
        case 0x1012d8u: goto label_1012d8;
        default: break;
    }

    ctx->pc = 0x101290u;

    // 0x101290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x101294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x101298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10129c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10129cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1012a0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1012A0u;
    {
        const bool branch_taken_0x1012a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012A0u;
        // 0x1012a4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012a0) {
            ctx->pc = 0x1012D8u;
            goto label_1012d8;
        }
    }
    ctx->pc = 0x1012A8u;
    // 0x1012a8: 0x24425fc0  addiu       $v0, $v0, 0x5FC0
    ctx->pc = 0x1012a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24512));
    // 0x1012ac: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1012ACu;
    {
        const bool branch_taken_0x1012ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012ACu;
        // 0x1012b0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012ac) {
            ctx->pc = 0x1012C0u;
            goto label_1012c0;
        }
    }
    ctx->pc = 0x1012B4u;
    // 0x1012b4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1012b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x1012b8: 0x24425fb0  addiu       $v0, $v0, 0x5FB0
    ctx->pc = 0x1012b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24496));
    // 0x1012bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1012bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1012c0:
    // 0x1012c0: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1012c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1012c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1012c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1012c8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1012C8u;
    {
        const bool branch_taken_0x1012c8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1012CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012C8u;
        // 0x1012cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012c8) {
            ctx->pc = 0x1012D8u;
            goto label_1012d8;
        }
    }
    ctx->pc = 0x1012D0u;
    // 0x1012d0: 0xc040148  jal         func_100520
    ctx->pc = 0x1012D0u;
    SET_GPR_U32(ctx, 31, 0x1012D8u);
    ctx->pc = 0x100520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100520u, 0x1012D0u, 0x1012D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012D8u;
label_1012d8:
    // 0x1012d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1012d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1012dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1012dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1012e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1012e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1012e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1012E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1012E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012E4u;
        // 0x1012e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1012E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1012ECu;
}
