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

// Function: sub_00145690
// Address: 0x145690 - 0x145704
void sub_00145690_0x145690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145690_0x145690");
#endif

    switch (ctx->pc) {
        case 0x1456c0u: goto label_1456c0;
        case 0x1456e8u: goto label_1456e8;
        default: break;
    }

    ctx->pc = 0x145690u;

    // 0x145690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145694: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x145694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x145698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x145698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14569c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14569cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1456a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1456a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1456a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1456A4u;
    {
        const bool branch_taken_0x1456a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1456A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456A4u;
        // 0x1456a8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1456a4) {
            ctx->pc = 0x1456B8u;
            goto label_1456b8;
        }
    }
    ctx->pc = 0x1456ACu;
    // 0x1456ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1456ACu;
    {
        const bool branch_taken_0x1456ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1456ac) {
            ctx->pc = 0x1456E8u;
            goto label_1456e8;
        }
    }
    ctx->pc = 0x1456B4u;
    // 0x1456b4: 0x0  nop
    ctx->pc = 0x1456b4u;
    // NOP
label_1456b8:
    // 0x1456b8: 0xc0515d8  jal         func_145760
    ctx->pc = 0x1456B8u;
    SET_GPR_U32(ctx, 31, 0x1456C0u);
    ctx->pc = 0x145760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145760u, 0x1456B8u, 0x1456C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1456C0u;
label_1456c0:
    // 0x1456c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1456c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456c4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1456C4u;
    {
        const bool branch_taken_0x1456c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1456c4) {
            ctx->pc = 0x1456D8u;
            goto label_1456d8;
        }
    }
    ctx->pc = 0x1456CCu;
    // 0x1456cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1456CCu;
    {
        const bool branch_taken_0x1456cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1456D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456CCu;
        // 0x1456d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1456cc) {
            ctx->pc = 0x1456F0u;
            goto label_1456f0;
        }
    }
    ctx->pc = 0x1456D4u;
    // 0x1456d4: 0x0  nop
    ctx->pc = 0x1456d4u;
    // NOP
label_1456d8:
    // 0x1456d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1456d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1456dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456e0: 0xc049590  jal         func_125640
    ctx->pc = 0x1456E0u;
    SET_GPR_U32(ctx, 31, 0x1456E8u);
    ctx->pc = 0x1456E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1456E0u;
    // 0x1456e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1456E0u, 0x1456E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1456E8u;
label_1456e8:
    // 0x1456e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1456e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1456ec: 0x0  nop
    ctx->pc = 0x1456ecu;
    // NOP
label_1456f0:
    // 0x1456f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1456f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1456f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1456f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1456f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1456f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1456fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1456FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1456FCu;
        // 0x145700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1456FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145704u;
}
