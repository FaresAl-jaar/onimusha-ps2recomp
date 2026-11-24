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

// Function: sub_00190310
// Address: 0x190310 - 0x190390
void sub_00190310_0x190310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190310_0x190310");
#endif

    ctx->pc = 0x190310u;

    // 0x190310: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x190310u;
    {
        const bool branch_taken_0x190310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x190310) {
            ctx->pc = 0x190330u;
            goto label_190330;
        }
    }
    ctx->pc = 0x190318u;
    // 0x190318: 0x93868730  lbu         $a2, -0x78D0($gp)
    ctx->pc = 0x190318u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x19031c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19031cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x190320: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190320u;
    {
        const bool branch_taken_0x190320 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x190324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190320u;
        // 0x190324: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190320) {
            ctx->pc = 0x190330u;
            goto label_190330;
        }
    }
    ctx->pc = 0x190328u;
    // 0x190328: 0xaf83870c  sw          $v1, -0x78F4($gp)
    ctx->pc = 0x190328u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 3));
    // 0x19032c: 0x0  nop
    ctx->pc = 0x19032cu;
    // NOP
label_190330:
    // 0x190330: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x190330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x190334: 0x8c26fe84  lw          $a2, -0x17C($at)
    ctx->pc = 0x190334u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x92FE84u));
    // 0x190338: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x190338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x19033c: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x19033cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190340: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x190340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x190344: 0x3c010084  lui         $at, 0x84
    ctx->pc = 0x190344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)132 << 16));
    // 0x190348: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x190348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x19034c: 0x7c2830f0  sq          $t0, 0x30F0($at)
    ctx->pc = 0x19034cu;
    do { __m128i _value = (GPR_VEC(ctx, 8)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x8430F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x8430F0u, _value); } while (0);
    // 0x190350: 0xa387872c  sb          $a3, -0x78D4($gp)
    ctx->pc = 0x190350u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936364), (uint8_t)GPR_U32(ctx, 7));
    // 0x190354: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x190354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x190358: 0xaf808724  sw          $zero, -0x78DC($gp)
    ctx->pc = 0x190358u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936356), GPR_U32(ctx, 0));
    // 0x19035c: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x19035cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190360: 0x7c24fe60  sq          $a0, -0x1A0($at)
    ctx->pc = 0x190360u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x92FE60u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x92FE60u, _value); } while (0);
    // 0x190364: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x190364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x190368: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x190368u;
    {
        const bool branch_taken_0x190368 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190368u;
        // 0x19036c: 0xac23fe84  sw          $v1, -0x17C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190368) {
            ctx->pc = 0x190388u;
            goto label_190388;
        }
    }
    ctx->pc = 0x190370u;
    // 0x190370: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x190370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x190374: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x190374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x190378: 0x8c24fe84  lw          $a0, -0x17C($at)
    ctx->pc = 0x190378u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x92FE84u));
    // 0x19037c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x19037cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x190380: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x190380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x190384: 0xac23fe84  sw          $v1, -0x17C($at)
    ctx->pc = 0x190384u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
label_190388:
    // 0x190388: 0x3e00008  jr          $ra
    ctx->pc = 0x190388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190390u;
}
