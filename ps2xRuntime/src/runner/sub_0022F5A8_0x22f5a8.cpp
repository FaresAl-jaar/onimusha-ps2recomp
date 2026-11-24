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

// Function: sub_0022F5A8
// Address: 0x22f5a8 - 0x22f630
void sub_0022F5A8_0x22f5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F5A8_0x22f5a8");
#endif

    switch (ctx->pc) {
        case 0x22f5e4u: goto label_22f5e4;
        case 0x22f600u: goto label_22f600;
        case 0x22f608u: goto label_22f608;
        default: break;
    }

    ctx->pc = 0x22f5a8u;

    // 0x22f5a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22f5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22f5ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f5b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22f5b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22f5b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22f5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22f5c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22f5c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22f5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22f5c8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22f5c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22f5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x22f5d0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x22f5d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x22f5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x22f5d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22f5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22f5dc: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x22F5DCu;
    SET_GPR_U32(ctx, 31, 0x22F5E4u);
    ctx->pc = 0x22F5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F5DCu;
    // 0x22f5e0: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x22F5DCu, 0x22F5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F5E4u;
label_22f5e4:
    // 0x22f5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22f5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22f5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5f4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x22f5f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5f8: 0xc08bd8c  jal         func_22F630
    ctx->pc = 0x22F5F8u;
    SET_GPR_U32(ctx, 31, 0x22F600u);
    ctx->pc = 0x22F5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F5F8u;
    // 0x22f5fc: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F630u, 0x22F5F8u, 0x22F600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F600u;
label_22f600:
    // 0x22f600: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x22F600u;
    SET_GPR_U32(ctx, 31, 0x22F608u);
    ctx->pc = 0x22F604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F600u;
    // 0x22f604: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x22F600u, 0x22F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F608u;
label_22f608:
    // 0x22f608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22f608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f60c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22f60cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f610: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22f610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f618: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22f618u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f61c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22f61cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f620: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x22f620u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22f624: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22f624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f628: 0x3e00008  jr          $ra
    ctx->pc = 0x22F628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F628u;
        // 0x22f62c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F630u;
}
