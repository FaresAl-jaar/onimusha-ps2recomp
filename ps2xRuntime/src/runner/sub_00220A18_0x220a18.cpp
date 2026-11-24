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

// Function: sub_00220A18
// Address: 0x220a18 - 0x220a74
void sub_00220A18_0x220a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220A18_0x220a18");
#endif

    switch (ctx->pc) {
        case 0x220a3cu: goto label_220a3c;
        default: break;
    }

    ctx->pc = 0x220a18u;

    // 0x220a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x220a1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220a20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x220a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x220a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x220a28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x220a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x220a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x220a30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x220a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x220a34: 0xc0882e4  jal         func_220B90
    ctx->pc = 0x220A34u;
    SET_GPR_U32(ctx, 31, 0x220A3Cu);
    ctx->pc = 0x220A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A34u;
    // 0x220a38: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220B90u, 0x220A34u, 0x220A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A3Cu;
label_220a3c:
    // 0x220a3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220A3Cu;
    {
        const bool branch_taken_0x220a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A3Cu;
        // 0x220a40: 0x26100d30  addiu       $s0, $s0, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a3c) {
            ctx->pc = 0x220A5Cu;
            goto label_220a5c;
        }
    }
    ctx->pc = 0x220A44u;
    // 0x220a44: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x220a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x220a48: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x220a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x220a4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x220a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x220a50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x220a54: 0x8c83a180  lw          $v1, -0x5E80($a0)
    ctx->pc = 0x220a54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BA180u));
    // 0x220a58: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x220a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_220a5c:
    // 0x220a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220a60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220a64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220a68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x220a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x220A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A6Cu;
        // 0x220a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220A74u;
}
