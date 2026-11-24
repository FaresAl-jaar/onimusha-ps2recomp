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

// Function: sub_0024A300
// Address: 0x24a300 - 0x24a34c
void sub_0024A300_0x24a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A300_0x24a300");
#endif

    switch (ctx->pc) {
        case 0x24a31cu: goto label_24a31c;
        default: break;
    }

    ctx->pc = 0x24a300u;

    // 0x24a300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a304: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24a304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a308: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A308u;
    {
        const bool branch_taken_0x24a308 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A308u;
        // 0x24a30c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a308) {
            ctx->pc = 0x24A328u;
            goto label_24a328;
        }
    }
    ctx->pc = 0x24A310u;
    // 0x24a310: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24a310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24a314: 0xc0925d4  jal         func_249750
    ctx->pc = 0x24A314u;
    SET_GPR_U32(ctx, 31, 0x24A31Cu);
    ctx->pc = 0x24A318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A314u;
    // 0x24a318: 0x24a5d4e0  addiu       $a1, $a1, -0x2B20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249750u, 0x24A314u, 0x24A31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A31Cu;
label_24a31c:
    // 0x24a31c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24A31Cu;
    {
        const bool branch_taken_0x24a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A31Cu;
        // 0x24a320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a31c) {
            ctx->pc = 0x24A340u;
            goto label_24a340;
        }
    }
    ctx->pc = 0x24A324u;
    // 0x24a324: 0x0  nop
    ctx->pc = 0x24a324u;
    // NOP
label_24a328:
    // 0x24a328: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x24a328u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x24a32c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a330: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A330u;
    {
        const bool branch_taken_0x24a330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24a330) {
            ctx->pc = 0x24A334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A330u;
            // 0x24a334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A340u;
            goto label_24a340;
        }
    }
    ctx->pc = 0x24A338u;
    // 0x24a338: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x24a338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x24a33c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x24a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_24a340:
    // 0x24a340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24a340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a344: 0x3e00008  jr          $ra
    ctx->pc = 0x24A344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A344u;
        // 0x24a348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A34Cu;
}
