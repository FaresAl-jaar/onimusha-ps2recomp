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

// Function: sub_002209D0
// Address: 0x2209d0 - 0x220a18
void sub_002209D0_0x2209d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002209D0_0x2209d0");
#endif

    switch (ctx->pc) {
        case 0x2209ecu: goto label_2209ec;
        default: break;
    }

    ctx->pc = 0x2209d0u;

    // 0x2209d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2209d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2209d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2209d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2209d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2209d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2209dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2209e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2209e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2209e4: 0xc0882e4  jal         func_220B90
    ctx->pc = 0x2209E4u;
    SET_GPR_U32(ctx, 31, 0x2209ECu);
    ctx->pc = 0x2209E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2209E4u;
    // 0x2209e8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220B90u, 0x2209E4u, 0x2209ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2209ECu;
label_2209ec:
    // 0x2209ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2209ECu;
    {
        const bool branch_taken_0x2209ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2209F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209ECu;
        // 0x2209f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209ec) {
            ctx->pc = 0x220A04u;
            goto label_220a04;
        }
    }
    ctx->pc = 0x2209F4u;
    // 0x2209f4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2209f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2209f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2209f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2209fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2209fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x220a00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_220a04:
    // 0x220a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220a08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220a0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x220a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220a10: 0x3e00008  jr          $ra
    ctx->pc = 0x220A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A10u;
        // 0x220a14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220A18u;
}
