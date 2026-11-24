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

// Function: sub_00190290
// Address: 0x190290 - 0x190308
void sub_00190290_0x190290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190290_0x190290");
#endif

    ctx->pc = 0x190290u;

    // 0x190290: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x190290u;
    {
        const bool branch_taken_0x190290 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x190290) {
            ctx->pc = 0x1902B0u;
            goto label_1902b0;
        }
    }
    ctx->pc = 0x190298u;
    // 0x190298: 0x93868730  lbu         $a2, -0x78D0($gp)
    ctx->pc = 0x190298u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x19029c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19029cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1902a0: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1902A0u;
    {
        const bool branch_taken_0x1902a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1902A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902A0u;
        // 0x1902a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1902a0) {
            ctx->pc = 0x1902B0u;
            goto label_1902b0;
        }
    }
    ctx->pc = 0x1902A8u;
    // 0x1902a8: 0xaf83870c  sw          $v1, -0x78F4($gp)
    ctx->pc = 0x1902a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 3));
    // 0x1902ac: 0x0  nop
    ctx->pc = 0x1902acu;
    // NOP
label_1902b0:
    // 0x1902b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1902b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1902b4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1902b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1902b8: 0xa383872c  sb          $v1, -0x78D4($gp)
    ctx->pc = 0x1902b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936364), (uint8_t)GPR_U32(ctx, 3));
    // 0x1902bc: 0xaf848724  sw          $a0, -0x78DC($gp)
    ctx->pc = 0x1902bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936356), GPR_U32(ctx, 4));
    // 0x1902c0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1902c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1902c4: 0x8c26fe84  lw          $a2, -0x17C($at)
    ctx->pc = 0x1902c4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x92FE84u));
    // 0x1902c8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1902c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1902cc: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1902ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1902d0: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1902d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1902d4: 0xac24fe50  sw          $a0, -0x1B0($at)
    ctx->pc = 0x1902d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x92FE50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE50u, _value); } while (0);
    // 0x1902d8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1902d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1902dc: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1902DCu;
    {
        const bool branch_taken_0x1902dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1902E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902DCu;
        // 0x1902e0: 0xac23fe84  sw          $v1, -0x17C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1902dc) {
            ctx->pc = 0x190300u;
            goto label_190300;
        }
    }
    ctx->pc = 0x1902E4u;
    // 0x1902e4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1902e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1902e8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1902e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1902ec: 0x8c24fe84  lw          $a0, -0x17C($at)
    ctx->pc = 0x1902ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x92FE84u));
    // 0x1902f0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1902f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1902f4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1902f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1902f8: 0xac23fe84  sw          $v1, -0x17C($at)
    ctx->pc = 0x1902f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
    // 0x1902fc: 0x0  nop
    ctx->pc = 0x1902fcu;
    // NOP
label_190300:
    // 0x190300: 0x3e00008  jr          $ra
    ctx->pc = 0x190300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190308u;
}
