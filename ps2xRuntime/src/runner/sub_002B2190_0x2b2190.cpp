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

// Function: sub_002B2190
// Address: 0x2b2190 - 0x2b2200
void sub_002B2190_0x2b2190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2190_0x2b2190");
#endif

    switch (ctx->pc) {
        case 0x2b21d0u: goto label_2b21d0;
        case 0x2b21e0u: goto label_2b21e0;
        case 0x2b21f0u: goto label_2b21f0;
        default: break;
    }

    ctx->pc = 0x2b2190u;

    // 0x2b2190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b2194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b2198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b2198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b219c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2b219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b21a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b21a4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2b21a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2b21a8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2b21a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2b21ac: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2b21acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2b21b0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2b21b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b21b4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2B21B4u;
    {
        const bool branch_taken_0x2b21b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21B4u;
        // 0x2b21b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b21b4) {
            ctx->pc = 0x2B21E8u;
            goto label_2b21e8;
        }
    }
    ctx->pc = 0x2B21BCu;
    // 0x2b21bc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2b21bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b21c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B21C0u;
    {
        const bool branch_taken_0x2b21c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21C0u;
        // 0x2b21c4: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b21c0) {
            ctx->pc = 0x2B21D0u;
            goto label_2b21d0;
        }
    }
    ctx->pc = 0x2B21C8u;
    // 0x2b21c8: 0xc069324  jal         func_1A4C90
    ctx->pc = 0x2B21C8u;
    SET_GPR_U32(ctx, 31, 0x2B21D0u);
    ctx->pc = 0x2B21CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B21C8u;
    // 0x2b21cc: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x2B21C8u, 0x2B21D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B21D0u;
label_2b21d0:
    // 0x2b21d0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b21d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b21d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b21d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b21d8: 0xc0ad0ec  jal         func_2B43B0
    ctx->pc = 0x2B21D8u;
    SET_GPR_U32(ctx, 31, 0x2B21E0u);
    ctx->pc = 0x2B21DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B21D8u;
    // 0x2b21dc: 0x24845a80  addiu       $a0, $a0, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B43B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B43B0u, 0x2B21D8u, 0x2B21E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B21E0u;
label_2b21e0:
    // 0x2b21e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B21E0u;
    {
        const bool branch_taken_0x2b21e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b21e0) {
            ctx->pc = 0x2B21F0u;
            goto label_2b21f0;
        }
    }
    ctx->pc = 0x2B21E8u;
label_2b21e8:
    // 0x2b21e8: 0xc0ac7a8  jal         func_2B1EA0
    ctx->pc = 0x2B21E8u;
    SET_GPR_U32(ctx, 31, 0x2B21F0u);
    ctx->pc = 0x2B1EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1EA0u, 0x2B21E8u, 0x2B21F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B21F0u;
label_2b21f0:
    // 0x2b21f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b21f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b21f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b21f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b21f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B21F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B21F8u;
        // 0x2b21fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B21F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2200u;
}
