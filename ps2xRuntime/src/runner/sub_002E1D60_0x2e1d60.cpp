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

// Function: sub_002E1D60
// Address: 0x2e1d60 - 0x2e1e2c
void sub_002E1D60_0x2e1d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1D60_0x2e1d60");
#endif

    switch (ctx->pc) {
        case 0x2e1e20u: goto label_2e1e20;
        default: break;
    }

    ctx->pc = 0x2e1d60u;

    // 0x2e1d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e1d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1d68: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e1d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e1d6c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E1D6Cu;
    {
        const bool branch_taken_0x2e1d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1d6c) {
            ctx->pc = 0x2E1E20u;
            goto label_2e1e20;
        }
    }
    ctx->pc = 0x2E1D74u;
    // 0x2e1d74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1d78: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2e1d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e1d7c: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x2e1d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1d80: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2e1d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1d84: 0xa3a20014  sb          $v0, 0x14($sp)
    ctx->pc = 0x2e1d84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1d88: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2e1d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2e1d8c: 0xa3a20015  sb          $v0, 0x15($sp)
    ctx->pc = 0x2e1d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1d90: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x2e1d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e1d94: 0xa3a20016  sb          $v0, 0x16($sp)
    ctx->pc = 0x2e1d94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1d98: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x2e1d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2e1d9c: 0xa3a20017  sb          $v0, 0x17($sp)
    ctx->pc = 0x2e1d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1da0: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x2e1da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1da4: 0xa3a20018  sb          $v0, 0x18($sp)
    ctx->pc = 0x2e1da4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1da8: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x2e1da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2e1dac: 0xa3a20019  sb          $v0, 0x19($sp)
    ctx->pc = 0x2e1dacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1db0: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x2e1db0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2e1db4: 0xa3a2001a  sb          $v0, 0x1A($sp)
    ctx->pc = 0x2e1db4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1db8: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x2e1db8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x2e1dbc: 0xa3a2001b  sb          $v0, 0x1B($sp)
    ctx->pc = 0x2e1dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1dc0: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x2e1dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e1dc4: 0xa3a2001c  sb          $v0, 0x1C($sp)
    ctx->pc = 0x2e1dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1dc8: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x2e1dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x2e1dcc: 0xa3a2001d  sb          $v0, 0x1D($sp)
    ctx->pc = 0x2e1dccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1dd0: 0x9082000a  lbu         $v0, 0xA($a0)
    ctx->pc = 0x2e1dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x2e1dd4: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x2e1dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1dd8: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x2e1dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x2e1ddc: 0xa3a2001f  sb          $v0, 0x1F($sp)
    ctx->pc = 0x2e1ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1de0: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x2e1de0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e1de4: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x2e1de4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1de8: 0x9082000d  lbu         $v0, 0xD($a0)
    ctx->pc = 0x2e1de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x2e1dec: 0xa3a20021  sb          $v0, 0x21($sp)
    ctx->pc = 0x2e1decu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1df0: 0x8482000e  lh          $v0, 0xE($a0)
    ctx->pc = 0x2e1df0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2e1df4: 0xa7a20022  sh          $v0, 0x22($sp)
    ctx->pc = 0x2e1df4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1df8: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x2e1df8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e1dfc: 0xa7a20024  sh          $v0, 0x24($sp)
    ctx->pc = 0x2e1dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1e00: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x2e1e00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2e1e04: 0xa7a20026  sh          $v0, 0x26($sp)
    ctx->pc = 0x2e1e04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1e08: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x2e1e08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2e1e0c: 0xa7a20028  sh          $v0, 0x28($sp)
    ctx->pc = 0x2e1e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1e10: 0x84820016  lh          $v0, 0x16($a0)
    ctx->pc = 0x2e1e10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x2e1e14: 0xa7a2002a  sh          $v0, 0x2A($sp)
    ctx->pc = 0x2e1e14u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1e18: 0xc0b8248  jal         func_2E0920
    ctx->pc = 0x2E1E18u;
    SET_GPR_U32(ctx, 31, 0x2E1E20u);
    ctx->pc = 0x2E1E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1E18u;
    // 0x2e1e1c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0920u, 0x2E1E18u, 0x2E1E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1E20u;
label_2e1e20:
    // 0x2e1e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1e24: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E24u;
        // 0x2e1e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1E2Cu;
}
