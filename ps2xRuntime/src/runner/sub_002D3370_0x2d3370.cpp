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

// Function: sub_002D3370
// Address: 0x2d3370 - 0x2d3470
void sub_002D3370_0x2d3370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3370_0x2d3370");
#endif

    ctx->pc = 0x2d3370u;

    // 0x2d3370: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x2d3370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2d3374: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x2d3374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x2d3378: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x2d3378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2d337c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x2d337cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d3380: 0x0  nop
    ctx->pc = 0x2d3380u;
    // NOP
    // 0x2d3384: 0x0  nop
    ctx->pc = 0x2d3384u;
    // NOP
    // 0x2d3388: 0x1810  mfhi        $v1
    ctx->pc = 0x2d3388u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2d338c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x2d338cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2d3390: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2d3390u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2d3394: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x2d3394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d3398: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3398u;
    {
        const bool branch_taken_0x2d3398 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3398) {
            ctx->pc = 0x2D33A8u;
            goto label_2d33a8;
        }
    }
    ctx->pc = 0x2D33A0u;
    // 0x2d33a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d33a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d33a4: 0x0  nop
    ctx->pc = 0x2d33a4u;
    // NOP
label_2d33a8:
    // 0x2d33a8: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x2d33a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2d33ac: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x2d33acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2d33b0: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x2d33b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d33b4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D33B4u;
    {
        const bool branch_taken_0x2d33b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D33B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33B4u;
        // 0x2d33b8: 0xc71823  subu        $v1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d33b4) {
            ctx->pc = 0x2D33D8u;
            goto label_2d33d8;
        }
    }
    ctx->pc = 0x2D33BCu;
    // 0x2d33bc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2d33bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d33c0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D33C0u;
    {
        const bool branch_taken_0x2d33c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d33c0) {
            ctx->pc = 0x2D33CCu;
            goto label_2d33cc;
        }
    }
    ctx->pc = 0x2D33C8u;
    // 0x2d33c8: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x2d33c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2d33cc:
    // 0x2d33cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2D33CCu;
    {
        const bool branch_taken_0x2d33cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d33cc) {
            ctx->pc = 0x2D3408u;
            goto label_2d3408;
        }
    }
    ctx->pc = 0x2D33D4u;
    // 0x2d33d4: 0x0  nop
    ctx->pc = 0x2d33d4u;
    // NOP
label_2d33d8:
    // 0x2d33d8: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x2d33d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d33dc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D33DCu;
    {
        const bool branch_taken_0x2d33dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D33E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D33DCu;
        // 0x2d33e0: 0xc71821  addu        $v1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d33dc) {
            ctx->pc = 0x2D3400u;
            goto label_2d3400;
        }
    }
    ctx->pc = 0x2D33E4u;
    // 0x2d33e4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2d33e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d33e8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D33E8u;
    {
        const bool branch_taken_0x2d33e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d33e8) {
            ctx->pc = 0x2D33F4u;
            goto label_2d33f4;
        }
    }
    ctx->pc = 0x2D33F0u;
    // 0x2d33f0: 0x873023  subu        $a2, $a0, $a3
    ctx->pc = 0x2d33f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2d33f4:
    // 0x2d33f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D33F4u;
    {
        const bool branch_taken_0x2d33f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d33f4) {
            ctx->pc = 0x2D3408u;
            goto label_2d3408;
        }
    }
    ctx->pc = 0x2D33FCu;
    // 0x2d33fc: 0x0  nop
    ctx->pc = 0x2d33fcu;
    // NOP
label_2d3400:
    // 0x2d3400: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d3400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3404: 0x0  nop
    ctx->pc = 0x2d3404u;
    // NOP
label_2d3408:
    // 0x2d3408: 0xaca60024  sw          $a2, 0x24($a1)
    ctx->pc = 0x2d3408u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 6));
    // 0x2d340c: 0x8ca60020  lw          $a2, 0x20($a1)
    ctx->pc = 0x2d340cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2d3410: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x2d3410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2d3414: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x2d3414u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d3418: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3418u;
    {
        const bool branch_taken_0x2d3418 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3418u;
        // 0x2d341c: 0xc71823  subu        $v1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3418) {
            ctx->pc = 0x2D3438u;
            goto label_2d3438;
        }
    }
    ctx->pc = 0x2D3420u;
    // 0x2d3420: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2d3420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d3424: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3424u;
    {
        const bool branch_taken_0x2d3424 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3424) {
            ctx->pc = 0x2D3430u;
            goto label_2d3430;
        }
    }
    ctx->pc = 0x2D342Cu;
    // 0x2d342c: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x2d342cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2d3430:
    // 0x2d3430: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D3430u;
    {
        const bool branch_taken_0x2d3430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3430) {
            ctx->pc = 0x2D3468u;
            goto label_2d3468;
        }
    }
    ctx->pc = 0x2D3438u;
label_2d3438:
    // 0x2d3438: 0xc4082a  slt         $at, $a2, $a0
    ctx->pc = 0x2d3438u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d343c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D343Cu;
    {
        const bool branch_taken_0x2d343c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D343Cu;
        // 0x2d3440: 0xc71821  addu        $v1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d343c) {
            ctx->pc = 0x2D3460u;
            goto label_2d3460;
        }
    }
    ctx->pc = 0x2D3444u;
    // 0x2d3444: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x2d3444u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d3448: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3448u;
    {
        const bool branch_taken_0x2d3448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3448) {
            ctx->pc = 0x2D3454u;
            goto label_2d3454;
        }
    }
    ctx->pc = 0x2D3450u;
    // 0x2d3450: 0x873023  subu        $a2, $a0, $a3
    ctx->pc = 0x2d3450u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2d3454:
    // 0x2d3454: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3454u;
    {
        const bool branch_taken_0x2d3454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3454) {
            ctx->pc = 0x2D3468u;
            goto label_2d3468;
        }
    }
    ctx->pc = 0x2D345Cu;
    // 0x2d345c: 0x0  nop
    ctx->pc = 0x2d345cu;
    // NOP
label_2d3460:
    // 0x2d3460: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d3460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3464: 0x0  nop
    ctx->pc = 0x2d3464u;
    // NOP
label_2d3468:
    // 0x2d3468: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3468u;
        // 0x2d346c: 0xaca60028  sw          $a2, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3470u;
}
