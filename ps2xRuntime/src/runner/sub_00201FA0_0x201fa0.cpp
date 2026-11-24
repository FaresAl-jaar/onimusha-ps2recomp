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

// Function: sub_00201FA0
// Address: 0x201fa0 - 0x201ffc
void sub_00201FA0_0x201fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201FA0_0x201fa0");
#endif

    switch (ctx->pc) {
        case 0x201fbcu: goto label_201fbc;
        case 0x201fc8u: goto label_201fc8;
        default: break;
    }

    ctx->pc = 0x201fa0u;

    // 0x201fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201fa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x201facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x201fb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201fb4: 0xc0807b2  jal         func_201EC8
    ctx->pc = 0x201FB4u;
    SET_GPR_U32(ctx, 31, 0x201FBCu);
    ctx->pc = 0x201FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FB4u;
    // 0x201fb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201EC8u, 0x201FB4u, 0x201FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201FBCu;
label_201fbc:
    // 0x201fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fc0: 0xc080800  jal         func_202000
    ctx->pc = 0x201FC0u;
    SET_GPR_U32(ctx, 31, 0x201FC8u);
    ctx->pc = 0x201FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FC0u;
    // 0x201fc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202000u, 0x201FC0u, 0x201FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201FC8u;
label_201fc8:
    // 0x201fc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201fcc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201FCCu;
    {
        const bool branch_taken_0x201fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FCCu;
        // 0x201fd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201fcc) {
            ctx->pc = 0x201FE8u;
            goto label_201fe8;
        }
    }
    ctx->pc = 0x201FD4u;
    // 0x201fd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201fd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201fd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201fdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201fe0: 0x80807c6  j           func_201F18
    ctx->pc = 0x201FE0u;
    ctx->pc = 0x201FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201FE0u;
    // 0x201fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201F18u;
    sub_00201F18_0x201f18(rdram, ctx, runtime); return;
    ctx->pc = 0x201FE8u;
label_201fe8:
    // 0x201fe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201fec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x201FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FF4u;
        // 0x201ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201FFCu;
}
