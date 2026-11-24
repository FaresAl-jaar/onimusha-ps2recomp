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

// Function: sub_002D9570
// Address: 0x2d9570 - 0x2d95d8
void sub_002D9570_0x2d9570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9570_0x2d9570");
#endif

    switch (ctx->pc) {
        case 0x2d9598u: goto label_2d9598;
        case 0x2d95b4u: goto label_2d95b4;
        default: break;
    }

    ctx->pc = 0x2d9570u;

    // 0x2d9570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9574: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2d9574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2d9578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d957c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2d957cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d9580: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9584: 0x34461012  ori         $a2, $v0, 0x1012
    ctx->pc = 0x2d9584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4114);
    // 0x2d9588: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d958c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2d958cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2d9590: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x2D9590u;
    SET_GPR_U32(ctx, 31, 0x2D9598u);
    ctx->pc = 0x2D9594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9590u;
    // 0x2d9594: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x2D9590u, 0x2D9598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9598u;
label_2d9598:
    // 0x2d9598: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2d9598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2d959c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2d959cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2d95a0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2d95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2d95a4: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x2d95a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x2d95a8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2d95a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2d95ac: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x2D95ACu;
    SET_GPR_U32(ctx, 31, 0x2D95B4u);
    ctx->pc = 0x2D95B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D95ACu;
    // 0x2d95b0: 0x34461012  ori         $a2, $v0, 0x1012 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4114);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x2D95ACu, 0x2D95B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95B4u;
label_2d95b4:
    // 0x2d95b4: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2d95b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2d95b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2d95b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d95bc: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x2d95bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x2d95c0: 0xa2000048  sb          $zero, 0x48($s0)
    ctx->pc = 0x2d95c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d95c4: 0xa2000049  sb          $zero, 0x49($s0)
    ctx->pc = 0x2d95c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d95c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d95c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d95cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d95ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d95d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D95D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95D0u;
        // 0x2d95d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D95D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D95D8u;
}
