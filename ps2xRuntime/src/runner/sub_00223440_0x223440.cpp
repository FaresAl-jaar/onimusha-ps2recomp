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

// Function: sub_00223440
// Address: 0x223440 - 0x223498
void sub_00223440_0x223440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223440_0x223440");
#endif

    switch (ctx->pc) {
        case 0x22345cu: goto label_22345c;
        case 0x22346cu: goto label_22346c;
        case 0x223474u: goto label_223474;
        case 0x223480u: goto label_223480;
        default: break;
    }

    ctx->pc = 0x223440u;

    // 0x223440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223444: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x223444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x223448: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22344c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22344cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223450: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223454: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x223454u;
    SET_GPR_U32(ctx, 31, 0x22345Cu);
    ctx->pc = 0x223458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223454u;
    // 0x223458: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x223454u, 0x22345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22345Cu;
label_22345c:
    // 0x22345c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22345Cu;
    {
        const bool branch_taken_0x22345c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22345Cu;
        // 0x223460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22345c) {
            ctx->pc = 0x223484u;
            goto label_223484;
        }
    }
    ctx->pc = 0x223464u;
    // 0x223464: 0xc088d26  jal         func_223498
    ctx->pc = 0x223464u;
    SET_GPR_U32(ctx, 31, 0x22346Cu);
    ctx->pc = 0x223498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223498u, 0x223464u, 0x22346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22346Cu;
label_22346c:
    // 0x22346c: 0xc088d7a  jal         func_2235E8
    ctx->pc = 0x22346Cu;
    SET_GPR_U32(ctx, 31, 0x223474u);
    ctx->pc = 0x223470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22346Cu;
    // 0x223470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2235E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235E8u, 0x22346Cu, 0x223474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223474u;
label_223474:
    // 0x223474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223478: 0xc088d58  jal         func_223560
    ctx->pc = 0x223478u;
    SET_GPR_U32(ctx, 31, 0x223480u);
    ctx->pc = 0x22347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223478u;
    // 0x22347c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223560u, 0x223478u, 0x223480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223480u;
label_223480:
    // 0x223480: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x223480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223484:
    // 0x223484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22348c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22348cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223490: 0x3e00008  jr          $ra
    ctx->pc = 0x223490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223490u;
        // 0x223494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223498u;
}
