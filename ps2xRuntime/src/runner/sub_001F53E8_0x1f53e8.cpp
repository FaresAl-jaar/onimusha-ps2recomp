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

// Function: sub_001F53E8
// Address: 0x1f53e8 - 0x1f5438
void sub_001F53E8_0x1f53e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F53E8_0x1f53e8");
#endif

    switch (ctx->pc) {
        case 0x1f53fcu: goto label_1f53fc;
        default: break;
    }

    ctx->pc = 0x1f53e8u;

    // 0x1f53e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f53e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f53ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f53ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f53f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f53f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f53f4: 0xc07eb5e  jal         func_1FAD78
    ctx->pc = 0x1F53F4u;
    SET_GPR_U32(ctx, 31, 0x1F53FCu);
    ctx->pc = 0x1F53F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F53F4u;
    // 0x1f53f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD78u, 0x1F53F4u, 0x1F53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F53FCu;
label_1f53fc:
    // 0x1f53fc: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1f53fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1f5400: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f5400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5404: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5404u;
    {
        const bool branch_taken_0x1f5404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5404u;
        // 0x1f5408: 0x34a50210  ori         $a1, $a1, 0x210 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)528);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5404) {
            ctx->pc = 0x1F5420u;
            goto label_1f5420;
        }
    }
    ctx->pc = 0x1F540Cu;
    // 0x1f540c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f540cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5410: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f5410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5414: 0x807d4a8  j           func_1F52A0
    ctx->pc = 0x1F5414u;
    ctx->pc = 0x1F5418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5414u;
    // 0x1f5418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    sub_001F52A0_0x1f52a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F541Cu;
    // 0x1f541c: 0x0  nop
    ctx->pc = 0x1f541cu;
    // NOP
label_1f5420:
    // 0x1f5420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5424: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f5424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5428: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x1f5428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x1f542c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f542cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5430: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5430u;
        // 0x1f5434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5438u;
}
