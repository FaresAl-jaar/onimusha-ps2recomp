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

// Function: sub_00302110
// Address: 0x302110 - 0x30215c
void sub_00302110_0x302110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302110_0x302110");
#endif

    switch (ctx->pc) {
        case 0x302140u: goto label_302140;
        case 0x302150u: goto label_302150;
        default: break;
    }

    ctx->pc = 0x302110u;

    // 0x302110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x302110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x302114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x302114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x302118: 0x90830539  lbu         $v1, 0x539($a0)
    ctx->pc = 0x302118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1337)));
    // 0x30211c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x30211Cu;
    {
        const bool branch_taken_0x30211c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x302120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30211Cu;
        // 0x302120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30211c) {
            ctx->pc = 0x302148u;
            goto label_302148;
        }
    }
    ctx->pc = 0x302124u;
    // 0x302124: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x302124u;
    {
        const bool branch_taken_0x302124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x302124) {
            ctx->pc = 0x302138u;
            goto label_302138;
        }
    }
    ctx->pc = 0x30212Cu;
    // 0x30212c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30212Cu;
    {
        const bool branch_taken_0x30212c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30212c) {
            ctx->pc = 0x302148u;
            goto label_302148;
        }
    }
    ctx->pc = 0x302134u;
    // 0x302134: 0x0  nop
    ctx->pc = 0x302134u;
    // NOP
label_302138:
    // 0x302138: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x302138u;
    SET_GPR_U32(ctx, 31, 0x302140u);
    ctx->pc = 0x30213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302138u;
    // 0x30213c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x302138u, 0x302140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302140u;
label_302140:
    // 0x302140: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x302140u;
    {
        const bool branch_taken_0x302140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302140) {
            ctx->pc = 0x302150u;
            goto label_302150;
        }
    }
    ctx->pc = 0x302148u;
label_302148:
    // 0x302148: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x302148u;
    SET_GPR_U32(ctx, 31, 0x302150u);
    ctx->pc = 0x30214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302148u;
    // 0x30214c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x302148u, 0x302150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302150u;
label_302150:
    // 0x302150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x302150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302154: 0x3e00008  jr          $ra
    ctx->pc = 0x302154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302154u;
        // 0x302158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30215Cu;
}
