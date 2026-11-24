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

// Function: sub_00227938
// Address: 0x227938 - 0x227978
void sub_00227938_0x227938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227938_0x227938");
#endif

    switch (ctx->pc) {
        case 0x227968u: goto label_227968;
        default: break;
    }

    ctx->pc = 0x227938u;

    // 0x227938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22793c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22793Cu;
    {
        const bool branch_taken_0x22793c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x227940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22793Cu;
        // 0x227940: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22793c) {
            ctx->pc = 0x22794Cu;
            goto label_22794c;
        }
    }
    ctx->pc = 0x227944u;
    // 0x227944: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x227944u;
    {
        const bool branch_taken_0x227944 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x227948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227944u;
        // 0x227948: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227944) {
            ctx->pc = 0x227958u;
            goto label_227958;
        }
    }
    ctx->pc = 0x22794Cu;
label_22794c:
    // 0x22794c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22794Cu;
    {
        const bool branch_taken_0x22794c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22794Cu;
        // 0x227950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22794c) {
            ctx->pc = 0x22796Cu;
            goto label_22796c;
        }
    }
    ctx->pc = 0x227954u;
    // 0x227954: 0x0  nop
    ctx->pc = 0x227954u;
    // NOP
label_227958:
    // 0x227958: 0x24840013  addiu       $a0, $a0, 0x13
    ctx->pc = 0x227958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19));
    // 0x22795c: 0x24a59580  addiu       $a1, $a1, -0x6A80
    ctx->pc = 0x22795cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940032));
    // 0x227960: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x227960u;
    SET_GPR_U32(ctx, 31, 0x227968u);
    ctx->pc = 0x227964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227960u;
    // 0x227964: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x227960u, 0x227968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227968u;
label_227968:
    // 0x227968: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x227968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22796c:
    // 0x22796c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22796cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227970: 0x3e00008  jr          $ra
    ctx->pc = 0x227970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227970u;
        // 0x227974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227978u;
}
