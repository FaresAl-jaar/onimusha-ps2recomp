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

// Function: sub_0023E218
// Address: 0x23e218 - 0x23e284
void sub_0023E218_0x23e218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E218_0x23e218");
#endif

    ctx->pc = 0x23e218u;

    // 0x23e218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23e21c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23e21cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e224: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x23E224u;
    {
        const bool branch_taken_0x23e224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E224u;
        // 0x23e228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e224) {
            ctx->pc = 0x23E278u;
            goto label_23e278;
        }
    }
    ctx->pc = 0x23E22Cu;
    // 0x23e22c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x23e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x23e230: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23E230u;
    {
        const bool branch_taken_0x23e230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E230u;
        // 0x23e234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e230) {
            ctx->pc = 0x23E268u;
            goto label_23e268;
        }
    }
    ctx->pc = 0x23E238u;
    // 0x23e238: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x23e238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x23e23c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x23E23Cu;
    {
        const bool branch_taken_0x23e23c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E23Cu;
        // 0x23e240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e23c) {
            ctx->pc = 0x23E278u;
            goto label_23e278;
        }
    }
    ctx->pc = 0x23E244u;
    // 0x23e244: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x23e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x23e248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E248u;
    {
        const bool branch_taken_0x23e248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E248u;
        // 0x23e24c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e248) {
            ctx->pc = 0x23E260u;
            goto label_23e260;
        }
    }
    ctx->pc = 0x23E250u;
    // 0x23e250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e254: 0x808e26c  j           func_2389B0
    ctx->pc = 0x23E254u;
    ctx->pc = 0x23E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E254u;
    // 0x23e258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2389B0u;
    sub_002389B0_0x2389b0(rdram, ctx, runtime); return;
    ctx->pc = 0x23E25Cu;
    // 0x23e25c: 0x0  nop
    ctx->pc = 0x23e25cu;
    // NOP
label_23e260:
    // 0x23e260: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23E260u;
    {
        const bool branch_taken_0x23e260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E260u;
        // 0x23e264: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e260) {
            ctx->pc = 0x23E278u;
            goto label_23e278;
        }
    }
    ctx->pc = 0x23E268u;
label_23e268:
    // 0x23e268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e26c: 0x808e26c  j           func_2389B0
    ctx->pc = 0x23E26Cu;
    ctx->pc = 0x23E270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E26Cu;
    // 0x23e270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2389B0u;
    sub_002389B0_0x2389b0(rdram, ctx, runtime); return;
    ctx->pc = 0x23E274u;
    // 0x23e274: 0x0  nop
    ctx->pc = 0x23e274u;
    // NOP
label_23e278:
    // 0x23e278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23e278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e27c: 0x3e00008  jr          $ra
    ctx->pc = 0x23E27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E27Cu;
        // 0x23e280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E284u;
}
