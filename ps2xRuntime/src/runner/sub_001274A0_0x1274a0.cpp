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

// Function: sub_001274A0
// Address: 0x1274a0 - 0x127534
void sub_001274A0_0x1274a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001274A0_0x1274a0");
#endif

    switch (ctx->pc) {
        case 0x1274e4u: goto label_1274e4;
        case 0x127520u: goto label_127520;
        default: break;
    }

    ctx->pc = 0x1274a0u;

    // 0x1274a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1274a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1274a4: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x1274a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1274a8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1274a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1274ac: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1274acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1274b0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1274b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1274b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1274b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274b8: 0xffa70088  sd          $a3, 0x88($sp)
    ctx->pc = 0x1274b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
    // 0x1274bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1274bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274c0: 0xffa80090  sd          $t0, 0x90($sp)
    ctx->pc = 0x1274c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x1274c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1274c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274c8: 0xffa90098  sd          $t1, 0x98($sp)
    ctx->pc = 0x1274c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x1274cc: 0xffaa00a0  sd          $t2, 0xA0($sp)
    ctx->pc = 0x1274ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    // 0x1274d0: 0xffab00a8  sd          $t3, 0xA8($sp)
    ctx->pc = 0x1274d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    // 0x1274d4: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x1274d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x1274d8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1274d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1274dc: 0xc049f18  jal         func_127C60
    ctx->pc = 0x1274DCu;
    SET_GPR_U32(ctx, 31, 0x1274E4u);
    ctx->pc = 0x1274E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1274DCu;
    // 0x1274e0: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x1274DCu, 0x1274E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1274E4u;
label_1274e4:
    // 0x1274e4: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x1274e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x1274e8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1274e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1274ec: 0x8dee6048  lw          $t6, 0x6048($t7)
    ctx->pc = 0x1274ecu;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x406048u));
    // 0x1274f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1274f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274f4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1274f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1274f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1274f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1274fc: 0x3c0f0012  lui         $t7, 0x12
    ctx->pc = 0x1274fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)18 << 16));
    // 0x127500: 0xafae0054  sw          $t6, 0x54($sp)
    ctx->pc = 0x127500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 14));
    // 0x127504: 0x25ef7410  addiu       $t7, $t7, 0x7410
    ctx->pc = 0x127504u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 29712));
    // 0x127508: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x127508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x12750c: 0xafaf0020  sw          $t7, 0x20($sp)
    ctx->pc = 0x12750cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 15));
    // 0x127510: 0x27a70088  addiu       $a3, $sp, 0x88
    ctx->pc = 0x127510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x127514: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x127514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x127518: 0xc04acb2  jal         func_12B2C8
    ctx->pc = 0x127518u;
    SET_GPR_U32(ctx, 31, 0x127520u);
    ctx->pc = 0x12751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127518u;
    // 0x12751c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B2C8u, 0x127518u, 0x127520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127520u;
label_127520:
    // 0x127520: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x127520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127524: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x127524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x127528: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x127528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12752c: 0x3e00008  jr          $ra
    ctx->pc = 0x12752Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12752Cu;
        // 0x127530: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12752Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127534u;
}
