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

// Function: sub_002278F8
// Address: 0x2278f8 - 0x227938
void sub_002278F8_0x2278f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002278F8_0x2278f8");
#endif

    switch (ctx->pc) {
        case 0x227928u: goto label_227928;
        default: break;
    }

    ctx->pc = 0x2278f8u;

    // 0x2278f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2278f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2278fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2278FCu;
    {
        const bool branch_taken_0x2278fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x227900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278FCu;
        // 0x227900: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278fc) {
            ctx->pc = 0x22790Cu;
            goto label_22790c;
        }
    }
    ctx->pc = 0x227904u;
    // 0x227904: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x227904u;
    {
        const bool branch_taken_0x227904 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x227908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227904u;
        // 0x227908: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227904) {
            ctx->pc = 0x227918u;
            goto label_227918;
        }
    }
    ctx->pc = 0x22790Cu;
label_22790c:
    // 0x22790c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22790Cu;
    {
        const bool branch_taken_0x22790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22790Cu;
        // 0x227910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22790c) {
            ctx->pc = 0x22792Cu;
            goto label_22792c;
        }
    }
    ctx->pc = 0x227914u;
    // 0x227914: 0x0  nop
    ctx->pc = 0x227914u;
    // NOP
label_227918:
    // 0x227918: 0x24840012  addiu       $a0, $a0, 0x12
    ctx->pc = 0x227918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18));
    // 0x22791c: 0x24a59568  addiu       $a1, $a1, -0x6A98
    ctx->pc = 0x22791cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940008));
    // 0x227920: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x227920u;
    SET_GPR_U32(ctx, 31, 0x227928u);
    ctx->pc = 0x227924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227920u;
    // 0x227924: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x227920u, 0x227928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227928u;
label_227928:
    // 0x227928: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x227928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22792c:
    // 0x22792c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22792cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227930: 0x3e00008  jr          $ra
    ctx->pc = 0x227930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227930u;
        // 0x227934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227938u;
}
