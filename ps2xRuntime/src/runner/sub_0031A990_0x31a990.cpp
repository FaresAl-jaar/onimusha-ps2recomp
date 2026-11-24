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

// Function: sub_0031A990
// Address: 0x31a990 - 0x31aa20
void sub_0031A990_0x31a990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A990_0x31a990");
#endif

    switch (ctx->pc) {
        case 0x31a9bcu: goto label_31a9bc;
        case 0x31a9c4u: goto label_31a9c4;
        case 0x31a9ccu: goto label_31a9cc;
        case 0x31a9d4u: goto label_31a9d4;
        case 0x31a9f0u: goto label_31a9f0;
        case 0x31aa00u: goto label_31aa00;
        case 0x31aa10u: goto label_31aa10;
        default: break;
    }

    ctx->pc = 0x31a990u;

    // 0x31a990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31a990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31a994: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x31a994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31a998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31a99c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x31a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x31a9a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31a9a4: 0x8c23cee0  lw          $v1, -0x3120($at)
    ctx->pc = 0x31a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEE0u));
    // 0x31a9a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31a9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31a9ac: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31A9ACu;
    {
        const bool branch_taken_0x31a9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A9ACu;
        // 0x31a9b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a9ac) {
            ctx->pc = 0x31A9E0u;
            goto label_31a9e0;
        }
    }
    ctx->pc = 0x31A9B4u;
    // 0x31a9b4: 0xc0c6a88  jal         func_31AA20
    ctx->pc = 0x31A9B4u;
    SET_GPR_U32(ctx, 31, 0x31A9BCu);
    ctx->pc = 0x31AA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AA20u, 0x31A9B4u, 0x31A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A9BCu;
label_31a9bc:
    // 0x31a9bc: 0xc0c6ac0  jal         func_31AB00
    ctx->pc = 0x31A9BCu;
    SET_GPR_U32(ctx, 31, 0x31A9C4u);
    ctx->pc = 0x31A9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A9BCu;
    // 0x31a9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AB00u, 0x31A9BCu, 0x31A9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A9C4u;
label_31a9c4:
    // 0x31a9c4: 0xc0c6bf0  jal         func_31AFC0
    ctx->pc = 0x31A9C4u;
    SET_GPR_U32(ctx, 31, 0x31A9CCu);
    ctx->pc = 0x31A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A9C4u;
    // 0x31a9c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFC0u, 0x31A9C4u, 0x31A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A9CCu;
label_31a9cc:
    // 0x31a9cc: 0xc0c6a9c  jal         func_31AA70
    ctx->pc = 0x31A9CCu;
    SET_GPR_U32(ctx, 31, 0x31A9D4u);
    ctx->pc = 0x31A9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A9CCu;
    // 0x31a9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AA70u, 0x31A9CCu, 0x31A9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A9D4u;
label_31a9d4:
    // 0x31a9d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31A9D4u;
    {
        const bool branch_taken_0x31a9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a9d4) {
            ctx->pc = 0x31AA00u;
            goto label_31aa00;
        }
    }
    ctx->pc = 0x31A9DCu;
    // 0x31a9dc: 0x0  nop
    ctx->pc = 0x31a9dcu;
    // NOP
label_31a9e0:
    // 0x31a9e0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31a9e4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x31a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x31a9e8: 0xc05e564  jal         func_179590
    ctx->pc = 0x31A9E8u;
    SET_GPR_U32(ctx, 31, 0x31A9F0u);
    ctx->pc = 0x31A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A9E8u;
    // 0x31a9ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179590u, 0x31A9E8u, 0x31A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A9F0u;
label_31a9f0:
    // 0x31a9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a9f4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x31a9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x31a9f8: 0xc0c6df4  jal         func_31B7D0
    ctx->pc = 0x31A9F8u;
    SET_GPR_U32(ctx, 31, 0x31AA00u);
    ctx->pc = 0x31A9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A9F8u;
    // 0x31a9fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B7D0u, 0x31A9F8u, 0x31AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AA00u;
label_31aa00:
    // 0x31aa00: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x31aa00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x31aa04: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x31aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x31aa08: 0xc04c918  jal         func_132460
    ctx->pc = 0x31AA08u;
    SET_GPR_U32(ctx, 31, 0x31AA10u);
    ctx->pc = 0x31AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AA08u;
    // 0x31aa0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x31AA08u, 0x31AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AA10u;
label_31aa10:
    // 0x31aa10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31aa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31aa14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31aa14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31aa18: 0x3e00008  jr          $ra
    ctx->pc = 0x31AA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA18u;
        // 0x31aa1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AA20u;
}
