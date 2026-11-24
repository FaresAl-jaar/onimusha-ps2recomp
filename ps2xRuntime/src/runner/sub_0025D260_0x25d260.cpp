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

// Function: sub_0025D260
// Address: 0x25d260 - 0x25d2e0
void sub_0025D260_0x25d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D260_0x25d260");
#endif

    ctx->pc = 0x25d260u;

    // 0x25d260: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x25d260u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25d264: 0x28610801  slti        $at, $v1, 0x801
    ctx->pc = 0x25d264u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x25d268: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D268u;
    {
        const bool branch_taken_0x25d268 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D268u;
        // 0x25d26c: 0x2861f800  slti        $at, $v1, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d268) {
            ctx->pc = 0x25D278u;
            goto label_25d278;
        }
    }
    ctx->pc = 0x25D270u;
    // 0x25d270: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25D270u;
    {
        const bool branch_taken_0x25d270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D270u;
        // 0x25d274: 0x2463f000  addiu       $v1, $v1, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d270) {
            ctx->pc = 0x25D288u;
            goto label_25d288;
        }
    }
    ctx->pc = 0x25D278u;
label_25d278:
    // 0x25d278: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D278u;
    {
        const bool branch_taken_0x25d278 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d278) {
            ctx->pc = 0x25D288u;
            goto label_25d288;
        }
    }
    ctx->pc = 0x25D280u;
    // 0x25d280: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x25D280u;
    {
        const bool branch_taken_0x25d280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D280u;
        // 0x25d284: 0x24631000  addiu       $v1, $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d280) {
            ctx->pc = 0x25D288u;
            goto label_25d288;
        }
    }
    ctx->pc = 0x25D288u;
label_25d288:
    // 0x25d288: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D288u;
    {
        const bool branch_taken_0x25d288 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x25D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D288u;
        // 0x25d28c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d288) {
            ctx->pc = 0x25D294u;
            goto label_25d294;
        }
    }
    ctx->pc = 0x25D290u;
    // 0x25d290: 0x31023  negu        $v0, $v1
    ctx->pc = 0x25d290u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_25d294:
    // 0x25d294: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x25d294u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x25d298: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D298u;
    {
        const bool branch_taken_0x25d298 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d298) {
            ctx->pc = 0x25D2A8u;
            goto label_25d2a8;
        }
    }
    ctx->pc = 0x25D2A0u;
    // 0x25d2a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25D2A0u;
    {
        const bool branch_taken_0x25d2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2A0u;
        // 0x25d2a4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2a0) {
            ctx->pc = 0x25D2D8u;
            goto label_25d2d8;
        }
    }
    ctx->pc = 0x25D2A8u;
label_25d2a8:
    // 0x25d2a8: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D2A8u;
    {
        const bool branch_taken_0x25d2a8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x25D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2A8u;
        // 0x25d2ac: 0x861023  subu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2a8) {
            ctx->pc = 0x25D2B4u;
            goto label_25d2b4;
        }
    }
    ctx->pc = 0x25D2B0u;
    // 0x25d2b0: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x25d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_25d2b4:
    // 0x25d2b4: 0x28410801  slti        $at, $v0, 0x801
    ctx->pc = 0x25d2b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x25d2b8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D2B8u;
    {
        const bool branch_taken_0x25d2b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2B8u;
        // 0x25d2bc: 0x2841f800  slti        $at, $v0, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2b8) {
            ctx->pc = 0x25D2C8u;
            goto label_25d2c8;
        }
    }
    ctx->pc = 0x25D2C0u;
    // 0x25d2c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25D2C0u;
    {
        const bool branch_taken_0x25d2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2C0u;
        // 0x25d2c4: 0x2442f000  addiu       $v0, $v0, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2c0) {
            ctx->pc = 0x25D2D8u;
            goto label_25d2d8;
        }
    }
    ctx->pc = 0x25D2C8u;
label_25d2c8:
    // 0x25d2c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D2C8u;
    {
        const bool branch_taken_0x25d2c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d2c8) {
            ctx->pc = 0x25D2D8u;
            goto label_25d2d8;
        }
    }
    ctx->pc = 0x25D2D0u;
    // 0x25d2d0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x25D2D0u;
    {
        const bool branch_taken_0x25d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2D0u;
        // 0x25d2d4: 0x24421000  addiu       $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d2d0) {
            ctx->pc = 0x25D2D8u;
            goto label_25d2d8;
        }
    }
    ctx->pc = 0x25D2D8u;
label_25d2d8:
    // 0x25d2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x25D2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D2E0u;
}
