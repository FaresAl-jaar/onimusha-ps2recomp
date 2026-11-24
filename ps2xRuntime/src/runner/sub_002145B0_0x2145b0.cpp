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

// Function: sub_002145B0
// Address: 0x2145b0 - 0x214600
void sub_002145B0_0x2145b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002145B0_0x2145b0");
#endif

    switch (ctx->pc) {
        case 0x2145ccu: goto label_2145cc;
        default: break;
    }

    ctx->pc = 0x2145b0u;

    // 0x2145b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2145b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2145b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2145b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2145b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2145b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2145bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2145c0: 0x8e021f7c  lw          $v0, 0x1F7C($s0)
    ctx->pc = 0x2145c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8060)));
    // 0x2145c4: 0xc085180  jal         func_214600
    ctx->pc = 0x2145C4u;
    SET_GPR_U32(ctx, 31, 0x2145CCu);
    ctx->pc = 0x2145C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2145C4u;
    // 0x2145c8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214600u, 0x2145C4u, 0x2145CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2145CCu;
label_2145cc:
    // 0x2145cc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x2145ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x2145d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2145D0u;
    {
        const bool branch_taken_0x2145d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145D0u;
        // 0x2145d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145d0) {
            ctx->pc = 0x2145F0u;
            goto label_2145f0;
        }
    }
    ctx->pc = 0x2145D8u;
    // 0x2145d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2145d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2145dc: 0x34a50d0a  ori         $a1, $a1, 0xD0A
    ctx->pc = 0x2145dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3338);
    // 0x2145e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2145e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2145e4: 0x80848e0  j           func_212380
    ctx->pc = 0x2145E4u;
    ctx->pc = 0x2145E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2145E4u;
    // 0x2145e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x2145ECu;
    // 0x2145ec: 0x0  nop
    ctx->pc = 0x2145ecu;
    // NOP
label_2145f0:
    // 0x2145f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2145f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2145f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2145f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2145f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2145F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2145FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145F8u;
        // 0x2145fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2145F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214600u;
}
