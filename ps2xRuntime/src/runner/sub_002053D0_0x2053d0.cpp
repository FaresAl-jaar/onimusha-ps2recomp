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

// Function: sub_002053D0
// Address: 0x2053d0 - 0x205440
void sub_002053D0_0x2053d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002053D0_0x2053d0");
#endif

    switch (ctx->pc) {
        case 0x2053e4u: goto label_2053e4;
        case 0x2053fcu: goto label_2053fc;
        case 0x205410u: goto label_205410;
        default: break;
    }

    ctx->pc = 0x2053d0u;

    // 0x2053d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2053d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2053d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2053d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2053d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2053d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2053dc: 0xc081d84  jal         func_207610
    ctx->pc = 0x2053DCu;
    SET_GPR_U32(ctx, 31, 0x2053E4u);
    ctx->pc = 0x2053E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2053DCu;
    // 0x2053e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x2053DCu, 0x2053E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2053E4u;
label_2053e4:
    // 0x2053e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2053e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2053e8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2053E8u;
    {
        const bool branch_taken_0x2053e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2053ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053E8u;
        // 0x2053ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053e8) {
            ctx->pc = 0x205408u;
            goto label_205408;
        }
    }
    ctx->pc = 0x2053F0u;
    // 0x2053f0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2053f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2053f4: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2053F4u;
    SET_GPR_U32(ctx, 31, 0x2053FCu);
    ctx->pc = 0x2053F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2053F4u;
    // 0x2053f8: 0x24846d98  addiu       $a0, $a0, 0x6D98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2053F4u, 0x2053FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2053FCu;
label_2053fc:
    // 0x2053fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2053FCu;
    {
        const bool branch_taken_0x2053fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053FCu;
        // 0x205400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053fc) {
            ctx->pc = 0x205430u;
            goto label_205430;
        }
    }
    ctx->pc = 0x205404u;
    // 0x205404: 0x0  nop
    ctx->pc = 0x205404u;
    // NOP
label_205408:
    // 0x205408: 0xc081c12  jal         func_207048
    ctx->pc = 0x205408u;
    SET_GPR_U32(ctx, 31, 0x205410u);
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x205408u, 0x205410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205410u;
label_205410:
    // 0x205410: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x205410u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205414: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x205414u;
    {
        const bool branch_taken_0x205414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x205418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205414u;
        // 0x205418: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205414) {
            ctx->pc = 0x205430u;
            goto label_205430;
        }
    }
    ctx->pc = 0x20541Cu;
    // 0x20541c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20541cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205420: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x205420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205424: 0x80868a2  j           func_21A288
    ctx->pc = 0x205424u;
    ctx->pc = 0x205428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205424u;
    // 0x205428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A288u;
    sub_0021A288_0x21a288(rdram, ctx, runtime); return;
    ctx->pc = 0x20542Cu;
    // 0x20542c: 0x0  nop
    ctx->pc = 0x20542cu;
    // NOP
label_205430:
    // 0x205430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205434: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x205434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205438: 0x3e00008  jr          $ra
    ctx->pc = 0x205438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205438u;
        // 0x20543c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205440u;
}
