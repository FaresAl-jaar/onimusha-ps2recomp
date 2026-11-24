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

// Function: sub_00242988
// Address: 0x242988 - 0x242a24
void sub_00242988_0x242988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242988_0x242988");
#endif

    switch (ctx->pc) {
        case 0x2429b8u: goto label_2429b8;
        case 0x2429f8u: goto label_2429f8;
        default: break;
    }

    ctx->pc = 0x242988u;

    // 0x242988: 0x3c08004d  lui         $t0, 0x4D
    ctx->pc = 0x242988u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)77 << 16));
    // 0x24298c: 0x8d02d6fc  lw          $v0, -0x2904($t0)
    ctx->pc = 0x24298cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4CD6FCu));
    // 0x242990: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x242990u;
    {
        const bool branch_taken_0x242990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242990u;
        // 0x242994: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242990) {
            ctx->pc = 0x242A1Cu;
            goto label_242a1c;
        }
    }
    ctx->pc = 0x242998u;
    // 0x242998: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x242998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x24299c: 0x2442e54f  addiu       $v0, $v0, -0x1AB1
    ctx->pc = 0x24299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960463));
    // 0x2429a0: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x2429a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x2429a4: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x2429a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2429a8: 0x2447ffe1  addiu       $a3, $v0, -0x1F
    ctx->pc = 0x2429a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967265));
    // 0x2429ac: 0xac86d704  sw          $a2, -0x28FC($a0)
    ctx->pc = 0x2429acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956804), GPR_U32(ctx, 6));
    // 0x2429b0: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x2429b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2429b4: 0x0  nop
    ctx->pc = 0x2429b4u;
    // NOP
label_2429b8:
    // 0x2429b8: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x2429b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2429bc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x2429bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2429c0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2429c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2429c4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2429c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2429c8: 0x0  nop
    ctx->pc = 0x2429c8u;
    // NOP
    // 0x2429cc: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2429CCu;
    {
        const bool branch_taken_0x2429cc = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2429D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429CCu;
        // 0x2429d0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429cc) {
            ctx->pc = 0x2429B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2429b8;
        }
    }
    ctx->pc = 0x2429D4u;
    // 0x2429d4: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2429d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2429d8: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x2429d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x2429dc: 0x2442c6d7  addiu       $v0, $v0, -0x3929
    ctx->pc = 0x2429dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952663));
    // 0x2429e0: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x2429e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x2429e4: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x2429e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2429e8: 0x2447ffe1  addiu       $a3, $v0, -0x1F
    ctx->pc = 0x2429e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967265));
    // 0x2429ec: 0xac86d700  sw          $a2, -0x2900($a0)
    ctx->pc = 0x2429ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956800), GPR_U32(ctx, 6));
    // 0x2429f0: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x2429f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2429f4: 0x0  nop
    ctx->pc = 0x2429f4u;
    // NOP
label_2429f8:
    // 0x2429f8: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x2429f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2429fc: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x2429fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x242a00: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x242a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x242a04: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x242a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x242a08: 0x0  nop
    ctx->pc = 0x242a08u;
    // NOP
    // 0x242a0c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x242A0Cu;
    {
        const bool branch_taken_0x242a0c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x242A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A0Cu;
        // 0x242a10: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a0c) {
            ctx->pc = 0x2429F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2429f8;
        }
    }
    ctx->pc = 0x242A14u;
    // 0x242a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242a18: 0xad02d6fc  sw          $v0, -0x2904($t0)
    ctx->pc = 0x242a18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294956796), GPR_U32(ctx, 2));
label_242a1c:
    // 0x242a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x242A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242A24u;
}
