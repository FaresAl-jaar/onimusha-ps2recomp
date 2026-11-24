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

// Function: sub_0024A000
// Address: 0x24a000 - 0x24a038
void sub_0024A000_0x24a000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A000_0x24a000");
#endif

    switch (ctx->pc) {
        case 0x24a01cu: goto label_24a01c;
        default: break;
    }

    ctx->pc = 0x24a000u;

    // 0x24a000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a004: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24a004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a008: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A008u;
    {
        const bool branch_taken_0x24a008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A008u;
        // 0x24a00c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a008) {
            ctx->pc = 0x24A028u;
            goto label_24a028;
        }
    }
    ctx->pc = 0x24A010u;
    // 0x24a010: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24a010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24a014: 0xc0925d4  jal         func_249750
    ctx->pc = 0x24A014u;
    SET_GPR_U32(ctx, 31, 0x24A01Cu);
    ctx->pc = 0x24A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A014u;
    // 0x24a018: 0x24a5d4e0  addiu       $a1, $a1, -0x2B20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249750u, 0x24A014u, 0x24A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A01Cu;
label_24a01c:
    // 0x24a01c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24A01Cu;
    {
        const bool branch_taken_0x24a01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A01Cu;
        // 0x24a020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a01c) {
            ctx->pc = 0x24A02Cu;
            goto label_24a02c;
        }
    }
    ctx->pc = 0x24A024u;
    // 0x24a024: 0x0  nop
    ctx->pc = 0x24a024u;
    // NOP
label_24a028:
    // 0x24a028: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x24a028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_24a02c:
    // 0x24a02c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a030: 0x3e00008  jr          $ra
    ctx->pc = 0x24A030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A030u;
        // 0x24a034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A038u;
}
