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

// Function: sub_0021E500
// Address: 0x21e500 - 0x21e554
void sub_0021E500_0x21e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E500_0x21e500");
#endif

    ctx->pc = 0x21e500u;

    // 0x21e500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e504: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21e504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e50c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x21e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x21e510: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E510u;
    {
        const bool branch_taken_0x21e510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e510) {
            ctx->pc = 0x21E528u;
            goto label_21e528;
        }
    }
    ctx->pc = 0x21E518u;
    // 0x21e518: 0xac450058  sw          $a1, 0x58($v0)
    ctx->pc = 0x21e518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 5));
    // 0x21e51c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21E51Cu;
    {
        const bool branch_taken_0x21e51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E51Cu;
        // 0x21e520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e51c) {
            ctx->pc = 0x21E548u;
            goto label_21e548;
        }
    }
    ctx->pc = 0x21E524u;
    // 0x21e524: 0x0  nop
    ctx->pc = 0x21e524u;
    // NOP
label_21e528:
    // 0x21e528: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E528u;
    {
        const bool branch_taken_0x21e528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x21E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E528u;
        // 0x21e52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e528) {
            ctx->pc = 0x21E548u;
            goto label_21e548;
        }
    }
    ctx->pc = 0x21E530u;
    // 0x21e530: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21e530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21e534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e538: 0x34a50207  ori         $a1, $a1, 0x207
    ctx->pc = 0x21e538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)519);
    // 0x21e53c: 0x80848e0  j           func_212380
    ctx->pc = 0x21E53Cu;
    ctx->pc = 0x21E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E53Cu;
    // 0x21e540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21E544u;
    // 0x21e544: 0x0  nop
    ctx->pc = 0x21e544u;
    // NOP
label_21e548:
    // 0x21e548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e54c: 0x3e00008  jr          $ra
    ctx->pc = 0x21E54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E54Cu;
        // 0x21e550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E554u;
}
