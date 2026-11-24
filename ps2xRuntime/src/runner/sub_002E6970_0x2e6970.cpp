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

// Function: sub_002E6970
// Address: 0x2e6970 - 0x2e6a68
void sub_002E6970_0x2e6970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6970_0x2e6970");
#endif

    ctx->pc = 0x2e6970u;

    // 0x2e6970: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x2e6970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2e6974: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2e6974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e6978: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x2e6978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x2e697c: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x2e697cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x2e6980: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x2e6980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2e6984: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2e6984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2e6988: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x2e6988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x2e698c: 0x90860821  lbu         $a2, 0x821($a0)
    ctx->pc = 0x2e698cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2e6990: 0x10c70033  beq         $a2, $a3, . + 4 + (0x33 << 2)
    ctx->pc = 0x2E6990u;
    {
        const bool branch_taken_0x2e6990 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2E6994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6990u;
        // 0x2e6994: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6990) {
            ctx->pc = 0x2E6A60u;
            goto label_2e6a60;
        }
    }
    ctx->pc = 0x2E6998u;
    // 0x2e6998: 0x10c30023  beq         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E6998u;
    {
        const bool branch_taken_0x2e6998 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6998u;
        // 0x2e699c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6998) {
            ctx->pc = 0x2E6A28u;
            goto label_2e6a28;
        }
    }
    ctx->pc = 0x2E69A0u;
    // 0x2e69a0: 0x10c5000f  beq         $a2, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E69A0u;
    {
        const bool branch_taken_0x2e69a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x2e69a0) {
            ctx->pc = 0x2E69E0u;
            goto label_2e69e0;
        }
    }
    ctx->pc = 0x2E69A8u;
    // 0x2e69a8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E69A8u;
    {
        const bool branch_taken_0x2e69a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e69a8) {
            ctx->pc = 0x2E69B8u;
            goto label_2e69b8;
        }
    }
    ctx->pc = 0x2E69B0u;
    // 0x2e69b0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2E69B0u;
    {
        const bool branch_taken_0x2e69b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e69b0) {
            ctx->pc = 0x2E6A60u;
            goto label_2e6a60;
        }
    }
    ctx->pc = 0x2E69B8u;
label_2e69b8:
    // 0x2e69b8: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x2e69b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e69bc: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x2e69bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e69c0: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x2e69c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x2e69c4: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x2e69c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e69c8: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2e69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2e69cc: 0xa08007f5  sb          $zero, 0x7F5($a0)
    ctx->pc = 0x2e69ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e69d0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2e69d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2e69d4: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x2e69d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x2e69d8: 0xa0850821  sb          $a1, 0x821($a0)
    ctx->pc = 0x2e69d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e69dc: 0x0  nop
    ctx->pc = 0x2e69dcu;
    // NOP
label_2e69e0:
    // 0x2e69e0: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x2e69e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2e69e4: 0xa4830786  sh          $v1, 0x786($a0)
    ctx->pc = 0x2e69e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1926), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e69e8: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x2e69e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x2e69ec: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E69ECu;
    {
        const bool branch_taken_0x2e69ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e69ec) {
            ctx->pc = 0x2E6A60u;
            goto label_2e6a60;
        }
    }
    ctx->pc = 0x2E69F4u;
    // 0x2e69f4: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x2e69f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e69f8: 0x24030085  addiu       $v1, $zero, 0x85
    ctx->pc = 0x2e69f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x2e69fc: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x2e69fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6a00: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e6a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e6a04: 0xa48307f2  sh          $v1, 0x7F2($a0)
    ctx->pc = 0x2e6a04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e6a08: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2e6a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2e6a0c: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x2e6a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e6a10: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2e6a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2e6a14: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x2e6a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x2e6a18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e6a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e6a1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E6A1Cu;
    {
        const bool branch_taken_0x2e6a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A1Cu;
        // 0x2e6a20: 0xa0830821  sb          $v1, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a1c) {
            ctx->pc = 0x2E6A60u;
            goto label_2e6a60;
        }
    }
    ctx->pc = 0x2E6A24u;
    // 0x2e6a24: 0x0  nop
    ctx->pc = 0x2e6a24u;
    // NOP
label_2e6a28:
    // 0x2e6a28: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x2e6a28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x2e6a2c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E6A2Cu;
    {
        const bool branch_taken_0x2e6a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6A2Cu;
        // 0x2e6a30: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a2c) {
            ctx->pc = 0x2E6A60u;
            goto label_2e6a60;
        }
    }
    ctx->pc = 0x2E6A34u;
    // 0x2e6a34: 0x2406009b  addiu       $a2, $zero, 0x9B
    ctx->pc = 0x2e6a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x2e6a38: 0xa4830786  sh          $v1, 0x786($a0)
    ctx->pc = 0x2e6a38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1926), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e6a3c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e6a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e6a40: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x2e6a40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6a44: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2e6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2e6a48: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x2e6a48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6a4c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2e6a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2e6a50: 0xa48607f2  sh          $a2, 0x7F2($a0)
    ctx->pc = 0x2e6a50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x2e6a54: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x2e6a54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e6a58: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x2e6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x2e6a5c: 0xa0870821  sb          $a3, 0x821($a0)
    ctx->pc = 0x2e6a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 7));
label_2e6a60:
    // 0x2e6a60: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6A68u;
}
