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

// Function: sub_0033D340
// Address: 0x33d340 - 0x33d388
void sub_0033D340_0x33d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D340_0x33d340");
#endif

    ctx->pc = 0x33d340u;

    // 0x33d340: 0x8c8b06ac  lw          $t3, 0x6AC($a0)
    ctx->pc = 0x33d340u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x33d344: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x33d344u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x33d348: 0x240900e1  addiu       $t1, $zero, 0xE1
    ctx->pc = 0x33d348u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x33d34c: 0x240300b1  addiu       $v1, $zero, 0xB1
    ctx->pc = 0x33d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x33d350: 0x356b0040  ori         $t3, $t3, 0x40
    ctx->pc = 0x33d350u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)64);
    // 0x33d354: 0xac8b06ac  sw          $t3, 0x6AC($a0)
    ctx->pc = 0x33d354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 11));
    // 0x33d358: 0x8c8b06b4  lw          $t3, 0x6B4($a0)
    ctx->pc = 0x33d358u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x33d35c: 0x356b0040  ori         $t3, $t3, 0x40
    ctx->pc = 0x33d35cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)64);
    // 0x33d360: 0xac8b06b4  sw          $t3, 0x6B4($a0)
    ctx->pc = 0x33d360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 11));
    // 0x33d364: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x33d364u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33d368: 0x7c850870  sq          $a1, 0x870($a0)
    ctx->pc = 0x33d368u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 2160), GPR_VEC(ctx, 5));
    // 0x33d36c: 0xac8a087c  sw          $t2, 0x87C($a0)
    ctx->pc = 0x33d36cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2172), GPR_U32(ctx, 10));
    // 0x33d370: 0xa48608a0  sh          $a2, 0x8A0($a0)
    ctx->pc = 0x33d370u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2208), (uint16_t)GPR_U32(ctx, 6));
    // 0x33d374: 0xa0890822  sb          $t1, 0x822($a0)
    ctx->pc = 0x33d374u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2082), (uint8_t)GPR_U32(ctx, 9));
    // 0x33d378: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x33d378u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x33d37c: 0xaf878b84  sw          $a3, -0x747C($gp)
    ctx->pc = 0x33d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937476), GPR_U32(ctx, 7));
    // 0x33d380: 0x3e00008  jr          $ra
    ctx->pc = 0x33D380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D380u;
        // 0x33d384: 0xaf888b88  sw          $t0, -0x7478($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937480), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D388u;
}
