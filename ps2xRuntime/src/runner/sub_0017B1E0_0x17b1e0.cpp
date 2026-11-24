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

// Function: sub_0017B1E0
// Address: 0x17b1e0 - 0x17b2c0
void sub_0017B1E0_0x17b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B1E0_0x17b1e0");
#endif

    ctx->pc = 0x17b1e0u;

    // 0x17b1e0: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x17b1e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17b1e4: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x17b1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x17b1e8: 0x10c3002b  beq         $a2, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x17B1E8u;
    {
        const bool branch_taken_0x17b1e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x17B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B1E8u;
        // 0x17b1ec: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b1e8) {
            ctx->pc = 0x17B298u;
            goto label_17b298;
        }
    }
    ctx->pc = 0x17B1F0u;
    // 0x17b1f0: 0x10c30021  beq         $a2, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x17B1F0u;
    {
        const bool branch_taken_0x17b1f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x17b1f0) {
            ctx->pc = 0x17B278u;
            goto label_17b278;
        }
    }
    ctx->pc = 0x17B1F8u;
    // 0x17b1f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b1fc: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x17B1FCu;
    {
        const bool branch_taken_0x17b1fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x17B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B1FCu;
        // 0x17b200: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b1fc) {
            ctx->pc = 0x17B278u;
            goto label_17b278;
        }
    }
    ctx->pc = 0x17B204u;
    // 0x17b204: 0x10c50010  beq         $a2, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B204u;
    {
        const bool branch_taken_0x17b204 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x17b204) {
            ctx->pc = 0x17B248u;
            goto label_17b248;
        }
    }
    ctx->pc = 0x17B20Cu;
    // 0x17b20c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B20Cu;
    {
        const bool branch_taken_0x17b20c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b20c) {
            ctx->pc = 0x17B220u;
            goto label_17b220;
        }
    }
    ctx->pc = 0x17B214u;
    // 0x17b214: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x17B214u;
    {
        const bool branch_taken_0x17b214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b214) {
            ctx->pc = 0x17B2B8u;
            goto label_17b2b8;
        }
    }
    ctx->pc = 0x17B21Cu;
    // 0x17b21c: 0x0  nop
    ctx->pc = 0x17b21cu;
    // NOP
label_17b220:
    // 0x17b220: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17b220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17b224: 0x24a56ca0  addiu       $a1, $a1, 0x6CA0
    ctx->pc = 0x17b224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27808));
    // 0x17b228: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17b228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17b22c: 0xac852c60  sw          $a1, 0x2C60($a0)
    ctx->pc = 0x17b22cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11360), GPR_U32(ctx, 5));
    // 0x17b230: 0x24636cb0  addiu       $v1, $v1, 0x6CB0
    ctx->pc = 0x17b230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27824));
    // 0x17b234: 0xac832c64  sw          $v1, 0x2C64($a0)
    ctx->pc = 0x17b234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11364), GPR_U32(ctx, 3));
    // 0x17b238: 0xac852c68  sw          $a1, 0x2C68($a0)
    ctx->pc = 0x17b238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11368), GPR_U32(ctx, 5));
    // 0x17b23c: 0xa0802c72  sb          $zero, 0x2C72($a0)
    ctx->pc = 0x17b23cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11378), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b240: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x17B240u;
    {
        const bool branch_taken_0x17b240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B240u;
        // 0x17b244: 0xa0802c71  sb          $zero, 0x2C71($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11377), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b240) {
            ctx->pc = 0x17B2B8u;
            goto label_17b2b8;
        }
    }
    ctx->pc = 0x17B248u;
label_17b248:
    // 0x17b248: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x17b248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x17b24c: 0x24636cb0  addiu       $v1, $v1, 0x6CB0
    ctx->pc = 0x17b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27824));
    // 0x17b250: 0xac832c60  sw          $v1, 0x2C60($a0)
    ctx->pc = 0x17b250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11360), GPR_U32(ctx, 3));
    // 0x17b254: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17b254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17b258: 0x24636cb0  addiu       $v1, $v1, 0x6CB0
    ctx->pc = 0x17b258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27824));
    // 0x17b25c: 0xac832c64  sw          $v1, 0x2C64($a0)
    ctx->pc = 0x17b25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11364), GPR_U32(ctx, 3));
    // 0x17b260: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17b260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17b264: 0x24636ca0  addiu       $v1, $v1, 0x6CA0
    ctx->pc = 0x17b264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27808));
    // 0x17b268: 0xac832c68  sw          $v1, 0x2C68($a0)
    ctx->pc = 0x17b268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11368), GPR_U32(ctx, 3));
    // 0x17b26c: 0xa0852c72  sb          $a1, 0x2C72($a0)
    ctx->pc = 0x17b26cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11378), (uint8_t)GPR_U32(ctx, 5));
    // 0x17b270: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17B270u;
    {
        const bool branch_taken_0x17b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B270u;
        // 0x17b274: 0xa0852c71  sb          $a1, 0x2C71($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11377), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b270) {
            ctx->pc = 0x17B2B8u;
            goto label_17b2b8;
        }
    }
    ctx->pc = 0x17B278u;
label_17b278:
    // 0x17b278: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x17b278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x17b27c: 0x2463d250  addiu       $v1, $v1, -0x2DB0
    ctx->pc = 0x17b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955600));
    // 0x17b280: 0xac832c60  sw          $v1, 0x2C60($a0)
    ctx->pc = 0x17b280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11360), GPR_U32(ctx, 3));
    // 0x17b284: 0xac832c64  sw          $v1, 0x2C64($a0)
    ctx->pc = 0x17b284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11364), GPR_U32(ctx, 3));
    // 0x17b288: 0xac832c68  sw          $v1, 0x2C68($a0)
    ctx->pc = 0x17b288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11368), GPR_U32(ctx, 3));
    // 0x17b28c: 0xa0802c72  sb          $zero, 0x2C72($a0)
    ctx->pc = 0x17b28cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11378), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b290: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17B290u;
    {
        const bool branch_taken_0x17b290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B290u;
        // 0x17b294: 0xa0802c71  sb          $zero, 0x2C71($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11377), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b290) {
            ctx->pc = 0x17B2B8u;
            goto label_17b2b8;
        }
    }
    ctx->pc = 0x17B298u;
label_17b298:
    // 0x17b298: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x17b298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x17b29c: 0x24a5d250  addiu       $a1, $a1, -0x2DB0
    ctx->pc = 0x17b29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955600));
    // 0x17b2a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b2a4: 0xac852c60  sw          $a1, 0x2C60($a0)
    ctx->pc = 0x17b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11360), GPR_U32(ctx, 5));
    // 0x17b2a8: 0xac852c64  sw          $a1, 0x2C64($a0)
    ctx->pc = 0x17b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11364), GPR_U32(ctx, 5));
    // 0x17b2ac: 0xac852c68  sw          $a1, 0x2C68($a0)
    ctx->pc = 0x17b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11368), GPR_U32(ctx, 5));
    // 0x17b2b0: 0xa0832c72  sb          $v1, 0x2C72($a0)
    ctx->pc = 0x17b2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11378), (uint8_t)GPR_U32(ctx, 3));
    // 0x17b2b4: 0xa0832c71  sb          $v1, 0x2C71($a0)
    ctx->pc = 0x17b2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11377), (uint8_t)GPR_U32(ctx, 3));
label_17b2b8:
    // 0x17b2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B2C0u;
}
