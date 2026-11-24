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

// Function: sub_0026C000
// Address: 0x26c000 - 0x26c050
void sub_0026C000_0x26c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C000_0x26c000");
#endif

    ctx->pc = 0x26c000u;

    // 0x26c000: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x26c000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x26c004: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x26c004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26c008: 0xa08000a0  sb          $zero, 0xA0($a0)
    ctx->pc = 0x26c008u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 160), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c00c: 0xa08000a1  sb          $zero, 0xA1($a0)
    ctx->pc = 0x26c00cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 161), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c010: 0xa08000a2  sb          $zero, 0xA2($a0)
    ctx->pc = 0x26c010u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 162), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c014: 0xa08300a3  sb          $v1, 0xA3($a0)
    ctx->pc = 0x26c014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 163), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c018: 0xa08000a5  sb          $zero, 0xA5($a0)
    ctx->pc = 0x26c018u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 165), (uint8_t)GPR_U32(ctx, 0));
    // 0x26c01c: 0x908300aa  lbu         $v1, 0xAA($a0)
    ctx->pc = 0x26c01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x26c020: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C020u;
    {
        const bool branch_taken_0x26c020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C020u;
        // 0x26c024: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c020) {
            ctx->pc = 0x26C030u;
            goto label_26c030;
        }
    }
    ctx->pc = 0x26C028u;
    // 0x26c028: 0xa08300a5  sb          $v1, 0xA5($a0)
    ctx->pc = 0x26c028u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 165), (uint8_t)GPR_U32(ctx, 3));
    // 0x26c02c: 0x0  nop
    ctx->pc = 0x26c02cu;
    // NOP
label_26c030:
    // 0x26c030: 0x808500a5  lb          $a1, 0xA5($a0)
    ctx->pc = 0x26c030u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 165)));
    // 0x26c034: 0x3c038090  lui         $v1, 0x8090
    ctx->pc = 0x26c034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32912 << 16));
    // 0x26c038: 0x34639090  ori         $v1, $v1, 0x9090
    ctx->pc = 0x26c038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x26c03c: 0xa08500a4  sb          $a1, 0xA4($a0)
    ctx->pc = 0x26c03cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 164), (uint8_t)GPR_U32(ctx, 5));
    // 0x26c040: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x26c040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x26c044: 0xac8300b4  sw          $v1, 0xB4($a0)
    ctx->pc = 0x26c044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 3));
    // 0x26c048: 0x3e00008  jr          $ra
    ctx->pc = 0x26C048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C048u;
        // 0x26c04c: 0xac8300b8  sw          $v1, 0xB8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C050u;
}
