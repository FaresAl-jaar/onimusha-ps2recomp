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

// Function: sub_003C59A0
// Address: 0x3c59a0 - 0x3c5a10
void sub_003C59A0_0x3c59a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C59A0_0x3c59a0");
#endif

    switch (ctx->pc) {
        case 0x3c59e0u: goto label_3c59e0;
        case 0x3c59e8u: goto label_3c59e8;
        case 0x3c59f0u: goto label_3c59f0;
        case 0x3c5a00u: goto label_3c5a00;
        default: break;
    }

    ctx->pc = 0x3c59a0u;

    // 0x3c59a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c59a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c59a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c59a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c59a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c59a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c59ac: 0x9082057c  lbu         $v0, 0x57C($a0)
    ctx->pc = 0x3c59acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1404)));
    // 0x3c59b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c59b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c59b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3C59B4u;
    {
        const bool branch_taken_0x3c59b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C59B4u;
        // 0x3c59b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c59b4) {
            ctx->pc = 0x3C59E8u;
            goto label_3c59e8;
        }
    }
    ctx->pc = 0x3C59BCu;
    // 0x3c59bc: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3c59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3c59c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c59c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c59c4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3c59c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c59c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3c59c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3c59cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3c59ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3c59d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C59D0u;
    {
        const bool branch_taken_0x3c59d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c59d0) {
            ctx->pc = 0x3C59E0u;
            goto label_3c59e0;
        }
    }
    ctx->pc = 0x3C59D8u;
    // 0x3c59d8: 0xc0f1af8  jal         func_3C6BE0
    ctx->pc = 0x3C59D8u;
    SET_GPR_U32(ctx, 31, 0x3C59E0u);
    ctx->pc = 0x3C6BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6BE0u, 0x3C59D8u, 0x3C59E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C59E0u;
label_3c59e0:
    // 0x3c59e0: 0xc0f1df0  jal         func_3C77C0
    ctx->pc = 0x3C59E0u;
    SET_GPR_U32(ctx, 31, 0x3C59E8u);
    ctx->pc = 0x3C59E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C59E0u;
    // 0x3c59e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C77C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C77C0u, 0x3C59E0u, 0x3C59E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C59E8u;
label_3c59e8:
    // 0x3c59e8: 0xc0a71a4  jal         func_29C690
    ctx->pc = 0x3C59E8u;
    SET_GPR_U32(ctx, 31, 0x3C59F0u);
    ctx->pc = 0x3C59ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C59E8u;
    // 0x3c59ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C690u, 0x3C59E8u, 0x3C59F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C59F0u;
label_3c59f0:
    // 0x3c59f0: 0x8e050500  lw          $a1, 0x500($s0)
    ctx->pc = 0x3c59f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x3c59f4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3c59f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3c59f8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3C59F8u;
    SET_GPR_U32(ctx, 31, 0x3C5A00u);
    ctx->pc = 0x3C59FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C59F8u;
    // 0x3c59fc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3C59F8u, 0x3C5A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5A00u;
label_3c5a00:
    // 0x3c5a00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c5a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5a04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c5a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5a08: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5A08u;
        // 0x3c5a0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5A10u;
}
