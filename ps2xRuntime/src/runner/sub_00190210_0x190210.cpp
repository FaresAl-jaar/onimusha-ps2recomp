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

// Function: sub_00190210
// Address: 0x190210 - 0x190288
void sub_00190210_0x190210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190210_0x190210");
#endif

    ctx->pc = 0x190210u;

    // 0x190210: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x190210u;
    {
        const bool branch_taken_0x190210 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x190210) {
            ctx->pc = 0x190230u;
            goto label_190230;
        }
    }
    ctx->pc = 0x190218u;
    // 0x190218: 0x93868730  lbu         $a2, -0x78D0($gp)
    ctx->pc = 0x190218u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x19021c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190220: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190220u;
    {
        const bool branch_taken_0x190220 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x190220) {
            ctx->pc = 0x190230u;
            goto label_190230;
        }
    }
    ctx->pc = 0x190228u;
    // 0x190228: 0xaf83870c  sw          $v1, -0x78F4($gp)
    ctx->pc = 0x190228u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936332), GPR_U32(ctx, 3));
    // 0x19022c: 0x0  nop
    ctx->pc = 0x19022cu;
    // NOP
label_190230:
    // 0x190230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x190230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190234: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x190234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x190238: 0xa383872c  sb          $v1, -0x78D4($gp)
    ctx->pc = 0x190238u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936364), (uint8_t)GPR_U32(ctx, 3));
    // 0x19023c: 0xaf848724  sw          $a0, -0x78DC($gp)
    ctx->pc = 0x19023cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936356), GPR_U32(ctx, 4));
    // 0x190240: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x190240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x190244: 0x8c26fe84  lw          $a2, -0x17C($at)
    ctx->pc = 0x190244u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x92FE84u));
    // 0x190248: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x190248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x19024c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x19024cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x190250: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x190250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x190254: 0xac24fe50  sw          $a0, -0x1B0($at)
    ctx->pc = 0x190254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x92FE50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE50u, _value); } while (0);
    // 0x190258: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x190258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x19025c: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19025Cu;
    {
        const bool branch_taken_0x19025c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x190260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19025Cu;
        // 0x190260: 0xac23fe84  sw          $v1, -0x17C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19025c) {
            ctx->pc = 0x190280u;
            goto label_190280;
        }
    }
    ctx->pc = 0x190264u;
    // 0x190264: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x190264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x190268: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x190268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x19026c: 0x8c24fe84  lw          $a0, -0x17C($at)
    ctx->pc = 0x19026cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x92FE84u));
    // 0x190270: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x190270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x190274: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x190274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x190278: 0xac23fe84  sw          $v1, -0x17C($at)
    ctx->pc = 0x190278u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x92FE84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x92FE84u, _value); } while (0);
    // 0x19027c: 0x0  nop
    ctx->pc = 0x19027cu;
    // NOP
label_190280:
    // 0x190280: 0x3e00008  jr          $ra
    ctx->pc = 0x190280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190288u;
}
