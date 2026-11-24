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

// Function: sub_00220168
// Address: 0x220168 - 0x2201ac
void sub_00220168_0x220168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220168_0x220168");
#endif

    switch (ctx->pc) {
        case 0x22018cu: goto label_22018c;
        default: break;
    }

    ctx->pc = 0x220168u;

    // 0x220168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22016c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22016cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x220170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220174: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x220174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x220178: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x220178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22017c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22017cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x220180: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x220180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x220184: 0xc08806c  jal         func_2201B0
    ctx->pc = 0x220184u;
    SET_GPR_U32(ctx, 31, 0x22018Cu);
    ctx->pc = 0x220188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220184u;
    // 0x220188: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2201B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2201B0u, 0x220184u, 0x22018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22018Cu;
label_22018c:
    // 0x22018c: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x22018cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x220190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x220194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220198: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x220198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x22019c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22019cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2201a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2201a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2201a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2201A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2201A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201A4u;
        // 0x2201a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2201A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2201ACu;
}
