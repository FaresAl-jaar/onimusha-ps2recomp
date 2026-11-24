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

// Function: sub_00208598
// Address: 0x208598 - 0x2085e0
void sub_00208598_0x208598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208598_0x208598");
#endif

    switch (ctx->pc) {
        case 0x2085bcu: goto label_2085bc;
        case 0x2085ccu: goto label_2085cc;
        default: break;
    }

    ctx->pc = 0x208598u;

    // 0x208598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20859c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2085a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2085a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2085a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2085a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2085a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2085acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2085b0: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x2085b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x2085b4: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x2085B4u;
    SET_GPR_U32(ctx, 31, 0x2085BCu);
    ctx->pc = 0x2085B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2085B4u;
    // 0x2085b8: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x2085B4u, 0x2085BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2085BCu;
label_2085bc:
    // 0x2085bc: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2085bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2085c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2085c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085c4: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x2085C4u;
    SET_GPR_U32(ctx, 31, 0x2085CCu);
    ctx->pc = 0x2085C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2085C4u;
    // 0x2085c8: 0x2405005b  addiu       $a1, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x2085C4u, 0x2085CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2085CCu;
label_2085cc:
    // 0x2085cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2085ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2085d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2085d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2085d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2085d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2085d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2085D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2085DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085D8u;
        // 0x2085dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2085D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2085E0u;
}
