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

// Function: sub_00104238
// Address: 0x104238 - 0x104260
void sub_00104238_0x104238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104238_0x104238");
#endif

    ctx->pc = 0x104238u;

    // 0x104238: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x104238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10423c: 0x41702  srl         $v0, $a0, 28
    ctx->pc = 0x10423cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x104240: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x104240u;
    {
        const bool branch_taken_0x104240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x104244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104240u;
        // 0x104244: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104240) {
            ctx->pc = 0x104258u;
            goto label_104258;
        }
    }
    ctx->pc = 0x104248u;
    // 0x104248: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x104248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x10424c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10424cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x104250: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x104250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x104254: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x104254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_104258:
    // 0x104258: 0x3e00008  jr          $ra
    ctx->pc = 0x104258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104258u;
        // 0x10425c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104260u;
}
