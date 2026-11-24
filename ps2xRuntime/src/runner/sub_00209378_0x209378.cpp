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

// Function: sub_00209378
// Address: 0x209378 - 0x2093d8
void sub_00209378_0x209378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209378_0x209378");
#endif

    switch (ctx->pc) {
        case 0x209390u: goto label_209390;
        case 0x2093a8u: goto label_2093a8;
        case 0x2093bcu: goto label_2093bc;
        case 0x2093c4u: goto label_2093c4;
        default: break;
    }

    ctx->pc = 0x209378u;

    // 0x209378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20937c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20937cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209384: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x209384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x209388: 0xc0824d4  jal         func_209350
    ctx->pc = 0x209388u;
    SET_GPR_U32(ctx, 31, 0x209390u);
    ctx->pc = 0x20938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209388u;
    // 0x20938c: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209350u, 0x209388u, 0x209390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209390u;
label_209390:
    // 0x209390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209394: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x209394u;
    {
        const bool branch_taken_0x209394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x209398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209394u;
        // 0x209398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209394) {
            ctx->pc = 0x2093C4u;
            goto label_2093c4;
        }
    }
    ctx->pc = 0x20939Cu;
    // 0x20939c: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x20939cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x2093a0: 0xc09422c  jal         func_2508B0
    ctx->pc = 0x2093A0u;
    SET_GPR_U32(ctx, 31, 0x2093A8u);
    ctx->pc = 0x2093A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2093A0u;
    // 0x2093a4: 0x8e050184  lw          $a1, 0x184($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2508B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2508B0u, 0x2093A0u, 0x2093A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093A8u;
label_2093a8:
    // 0x2093a8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2093a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2093ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2093ACu;
    {
        const bool branch_taken_0x2093ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2093B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093ACu;
        // 0x2093b0: 0x24847fb8  addiu       $a0, $a0, 0x7FB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093ac) {
            ctx->pc = 0x2093C8u;
            goto label_2093c8;
        }
    }
    ctx->pc = 0x2093B4u;
    // 0x2093b4: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2093B4u;
    SET_GPR_U32(ctx, 31, 0x2093BCu);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2093B4u, 0x2093BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093BCu;
label_2093bc:
    // 0x2093bc: 0xc080e42  jal         func_203908
    ctx->pc = 0x2093BCu;
    SET_GPR_U32(ctx, 31, 0x2093C4u);
    ctx->pc = 0x2093C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2093BCu;
    // 0x2093c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203908u, 0x2093BCu, 0x2093C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093C4u;
label_2093c4:
    // 0x2093c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2093c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2093c8:
    // 0x2093c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2093c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2093cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2093ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2093d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2093D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2093D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093D0u;
        // 0x2093d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2093D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2093D8u;
}
