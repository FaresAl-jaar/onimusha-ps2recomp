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

// Function: sub_001344D0
// Address: 0x1344d0 - 0x1345a8
void sub_001344D0_0x1344d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001344D0_0x1344d0");
#endif

    ctx->pc = 0x1344d0u;

    // 0x1344d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1344d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1344d4: 0x871804  sllv        $v1, $a3, $a0
    ctx->pc = 0x1344d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x1344d8: 0xa71004  sllv        $v0, $a3, $a1
    ctx->pc = 0x1344d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x1344dc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1344dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1344e0: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x1344e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1344e4: 0x10c3002a  beq         $a2, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1344E4u;
    {
        const bool branch_taken_0x1344e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1344E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344E4u;
        // 0x1344e8: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344e4) {
            ctx->pc = 0x134590u;
            goto label_134590;
        }
    }
    ctx->pc = 0x1344ECu;
    // 0x1344ec: 0x10c30028  beq         $a2, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1344ECu;
    {
        const bool branch_taken_0x1344ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x1344ec) {
            ctx->pc = 0x134590u;
            goto label_134590;
        }
    }
    ctx->pc = 0x1344F4u;
    // 0x1344f4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1344f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1344f8: 0x10c30025  beq         $a2, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1344F8u;
    {
        const bool branch_taken_0x1344f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1344FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1344F8u;
        // 0x1344fc: 0x2403001b  addiu       $v1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1344f8) {
            ctx->pc = 0x134590u;
            goto label_134590;
        }
    }
    ctx->pc = 0x134500u;
    // 0x134500: 0x10c3001f  beq         $a2, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x134500u;
    {
        const bool branch_taken_0x134500 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x134500) {
            ctx->pc = 0x134580u;
            goto label_134580;
        }
    }
    ctx->pc = 0x134508u;
    // 0x134508: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x134508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x13450c: 0x10c3001c  beq         $a2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x13450Cu;
    {
        const bool branch_taken_0x13450c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x134510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13450Cu;
        // 0x134510: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13450c) {
            ctx->pc = 0x134580u;
            goto label_134580;
        }
    }
    ctx->pc = 0x134514u;
    // 0x134514: 0x10c30016  beq         $a2, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x134514u;
    {
        const bool branch_taken_0x134514 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x134514) {
            ctx->pc = 0x134570u;
            goto label_134570;
        }
    }
    ctx->pc = 0x13451Cu;
    // 0x13451c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x13451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x134520: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x134520u;
    {
        const bool branch_taken_0x134520 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x134524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134520u;
        // 0x134524: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134520) {
            ctx->pc = 0x134570u;
            goto label_134570;
        }
    }
    ctx->pc = 0x134528u;
    // 0x134528: 0x10c30011  beq         $a2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x134528u;
    {
        const bool branch_taken_0x134528 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x134528) {
            ctx->pc = 0x134570u;
            goto label_134570;
        }
    }
    ctx->pc = 0x134530u;
    // 0x134530: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x134530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134534: 0x10c3000e  beq         $a2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x134534u;
    {
        const bool branch_taken_0x134534 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x134538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134534u;
        // 0x134538: 0x24030031  addiu       $v1, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134534) {
            ctx->pc = 0x134570u;
            goto label_134570;
        }
    }
    ctx->pc = 0x13453Cu;
    // 0x13453c: 0x10c3000a  beq         $a2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13453Cu;
    {
        const bool branch_taken_0x13453c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x13453c) {
            ctx->pc = 0x134568u;
            goto label_134568;
        }
    }
    ctx->pc = 0x134544u;
    // 0x134544: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x134544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x134548: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x134548u;
    {
        const bool branch_taken_0x134548 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x134548) {
            ctx->pc = 0x134568u;
            goto label_134568;
        }
    }
    ctx->pc = 0x134550u;
    // 0x134550: 0x10c70005  beq         $a2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x134550u;
    {
        const bool branch_taken_0x134550 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x134550) {
            ctx->pc = 0x134568u;
            goto label_134568;
        }
    }
    ctx->pc = 0x134558u;
    // 0x134558: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x134558u;
    {
        const bool branch_taken_0x134558 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x134558) {
            ctx->pc = 0x134568u;
            goto label_134568;
        }
    }
    ctx->pc = 0x134560u;
    // 0x134560: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x134560u;
    {
        const bool branch_taken_0x134560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134560) {
            ctx->pc = 0x1345A0u;
            goto label_1345a0;
        }
    }
    ctx->pc = 0x134568u;
label_134568:
    // 0x134568: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x134568u;
    {
        const bool branch_taken_0x134568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134568u;
        // 0x13456c: 0x21182  srl         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134568) {
            ctx->pc = 0x1345A0u;
            goto label_1345a0;
        }
    }
    ctx->pc = 0x134570u;
label_134570:
    // 0x134570: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x134570u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x134574: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x134574u;
    {
        const bool branch_taken_0x134574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134574u;
        // 0x134578: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134574) {
            ctx->pc = 0x1345A0u;
            goto label_1345a0;
        }
    }
    ctx->pc = 0x13457Cu;
    // 0x13457c: 0x0  nop
    ctx->pc = 0x13457cu;
    // NOP
label_134580:
    // 0x134580: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x134580u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x134584: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x134584u;
    {
        const bool branch_taken_0x134584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134584u;
        // 0x134588: 0x21082  srl         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134584) {
            ctx->pc = 0x1345A0u;
            goto label_1345a0;
        }
    }
    ctx->pc = 0x13458Cu;
    // 0x13458c: 0x0  nop
    ctx->pc = 0x13458cu;
    // NOP
label_134590:
    // 0x134590: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x134590u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x134594: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x134594u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x134598: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x134598u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x13459c: 0x0  nop
    ctx->pc = 0x13459cu;
    // NOP
label_1345a0:
    // 0x1345a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1345A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1345A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1345A8u;
}
