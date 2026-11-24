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

// Function: sub_001DB270
// Address: 0x1db270 - 0x1db2f4
void sub_001DB270_0x1db270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB270_0x1db270");
#endif

    switch (ctx->pc) {
        case 0x1db2ccu: goto label_1db2cc;
        case 0x1db2e8u: goto label_1db2e8;
        default: break;
    }

    ctx->pc = 0x1db270u;

    // 0x1db270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db274: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x1db274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1db278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db27c: 0x24a8ffe0  addiu       $t0, $a1, -0x20
    ctx->pc = 0x1db27cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1db280: 0xa0a0ffe0  sb          $zero, -0x20($a1)
    ctx->pc = 0x1db280u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294967264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1db284: 0x8ca7fff4  lw          $a3, -0xC($a1)
    ctx->pc = 0x1db284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967284)));
    // 0x1db288: 0x8ca6fff0  lw          $a2, -0x10($a1)
    ctx->pc = 0x1db288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1db28c: 0xacc70014  sw          $a3, 0x14($a2)
    ctx->pc = 0x1db28cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 7));
    // 0x1db290: 0x8ca7fff0  lw          $a3, -0x10($a1)
    ctx->pc = 0x1db290u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1db294: 0x8ca6fff4  lw          $a2, -0xC($a1)
    ctx->pc = 0x1db294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967284)));
    // 0x1db298: 0xacc70010  sw          $a3, 0x10($a2)
    ctx->pc = 0x1db298u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 7));
    // 0x1db29c: 0x8c860074  lw          $a2, 0x74($a0)
    ctx->pc = 0x1db29cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1db2a0: 0xaca6fff4  sw          $a2, -0xC($a1)
    ctx->pc = 0x1db2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), GPR_U32(ctx, 6));
    // 0x1db2a4: 0xaca3fff0  sw          $v1, -0x10($a1)
    ctx->pc = 0x1db2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967280), GPR_U32(ctx, 3));
    // 0x1db2a8: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x1db2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1db2ac: 0xac680010  sw          $t0, 0x10($v1)
    ctx->pc = 0x1db2acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 8));
    // 0x1db2b0: 0xac880074  sw          $t0, 0x74($a0)
    ctx->pc = 0x1db2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 8));
    // 0x1db2b4: 0x8ca5ffe8  lw          $a1, -0x18($a1)
    ctx->pc = 0x1db2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967272)));
    // 0x1db2b8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1db2b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1db2bc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB2BCu;
    {
        const bool branch_taken_0x1db2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db2bc) {
            ctx->pc = 0x1DB2D0u;
            goto label_1db2d0;
        }
    }
    ctx->pc = 0x1DB2C4u;
    // 0x1db2c4: 0xc076c88  jal         func_1DB220
    ctx->pc = 0x1DB2C4u;
    SET_GPR_U32(ctx, 31, 0x1DB2CCu);
    ctx->pc = 0x1DB2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2C4u;
    // 0x1db2c8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB220u, 0x1DB2C4u, 0x1DB2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2CCu;
label_1db2cc:
    // 0x1db2cc: 0x0  nop
    ctx->pc = 0x1db2ccu;
    // NOP
label_1db2d0:
    // 0x1db2d0: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x1db2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1db2d4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1db2d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1db2d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB2D8u;
    {
        const bool branch_taken_0x1db2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2D8u;
        // 0x1db2dc: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2d8) {
            ctx->pc = 0x1DB2E8u;
            goto label_1db2e8;
        }
    }
    ctx->pc = 0x1DB2E0u;
    // 0x1db2e0: 0xc076c88  jal         func_1DB220
    ctx->pc = 0x1DB2E0u;
    SET_GPR_U32(ctx, 31, 0x1DB2E8u);
    ctx->pc = 0x1DB220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB220u, 0x1DB2E0u, 0x1DB2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2E8u;
label_1db2e8:
    // 0x1db2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2ECu;
        // 0x1db2f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB2F4u;
}
