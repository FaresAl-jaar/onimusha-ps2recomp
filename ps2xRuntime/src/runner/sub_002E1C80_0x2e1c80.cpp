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

// Function: sub_002E1C80
// Address: 0x2e1c80 - 0x2e1d5c
void sub_002E1C80_0x2e1c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1C80_0x2e1c80");
#endif

    switch (ctx->pc) {
        case 0x2e1d50u: goto label_2e1d50;
        default: break;
    }

    ctx->pc = 0x2e1c80u;

    // 0x2e1c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e1c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1c88: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e1c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e1c8c: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x2E1C8Cu;
    {
        const bool branch_taken_0x2e1c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1c8c) {
            ctx->pc = 0x2E1D50u;
            goto label_2e1d50;
        }
    }
    ctx->pc = 0x2E1C94u;
    // 0x2e1c94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1c98: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2e1c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e1c9c: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x2e1c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1ca0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2e1ca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1ca4: 0xa3a20014  sb          $v0, 0x14($sp)
    ctx->pc = 0x2e1ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1ca8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2e1ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2e1cac: 0xa3a20015  sb          $v0, 0x15($sp)
    ctx->pc = 0x2e1cacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1cb0: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x2e1cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e1cb4: 0xa3a20016  sb          $v0, 0x16($sp)
    ctx->pc = 0x2e1cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1cb8: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x2e1cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2e1cbc: 0xa3a20017  sb          $v0, 0x17($sp)
    ctx->pc = 0x2e1cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1cc0: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x2e1cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1cc4: 0xa3a20018  sb          $v0, 0x18($sp)
    ctx->pc = 0x2e1cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1cc8: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x2e1cc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2e1ccc: 0xa3a20019  sb          $v0, 0x19($sp)
    ctx->pc = 0x2e1cccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1cd0: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x2e1cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2e1cd4: 0xa3a2001a  sb          $v0, 0x1A($sp)
    ctx->pc = 0x2e1cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1cd8: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x2e1cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x2e1cdc: 0xa3a2001b  sb          $v0, 0x1B($sp)
    ctx->pc = 0x2e1cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1ce0: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x2e1ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e1ce4: 0xa3a2001c  sb          $v0, 0x1C($sp)
    ctx->pc = 0x2e1ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1ce8: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x2e1ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x2e1cec: 0xa3a2001d  sb          $v0, 0x1D($sp)
    ctx->pc = 0x2e1cecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1cf0: 0x9082000a  lbu         $v0, 0xA($a0)
    ctx->pc = 0x2e1cf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x2e1cf4: 0xa3a2001e  sb          $v0, 0x1E($sp)
    ctx->pc = 0x2e1cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1cf8: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x2e1cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x2e1cfc: 0xa3a2001f  sb          $v0, 0x1F($sp)
    ctx->pc = 0x2e1cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1d00: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x2e1d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e1d04: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x2e1d04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1d08: 0x9082000d  lbu         $v0, 0xD($a0)
    ctx->pc = 0x2e1d08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x2e1d0c: 0xa3a20021  sb          $v0, 0x21($sp)
    ctx->pc = 0x2e1d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1d10: 0x9482000e  lhu         $v0, 0xE($a0)
    ctx->pc = 0x2e1d10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2e1d14: 0xa7a20022  sh          $v0, 0x22($sp)
    ctx->pc = 0x2e1d14u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1d18: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x2e1d18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e1d1c: 0xa7a20024  sh          $v0, 0x24($sp)
    ctx->pc = 0x2e1d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1d20: 0x84820012  lh          $v0, 0x12($a0)
    ctx->pc = 0x2e1d20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x2e1d24: 0xa7a20026  sh          $v0, 0x26($sp)
    ctx->pc = 0x2e1d24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1d28: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x2e1d28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2e1d2c: 0xa7a20028  sh          $v0, 0x28($sp)
    ctx->pc = 0x2e1d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1d30: 0x94820016  lhu         $v0, 0x16($a0)
    ctx->pc = 0x2e1d30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x2e1d34: 0xa7a2002a  sh          $v0, 0x2A($sp)
    ctx->pc = 0x2e1d34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1d38: 0x84820018  lh          $v0, 0x18($a0)
    ctx->pc = 0x2e1d38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e1d3c: 0xa7a2002c  sh          $v0, 0x2C($sp)
    ctx->pc = 0x2e1d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1d40: 0x8482001a  lh          $v0, 0x1A($a0)
    ctx->pc = 0x2e1d40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x2e1d44: 0xa7a2002e  sh          $v0, 0x2E($sp)
    ctx->pc = 0x2e1d44u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1d48: 0xc0b8248  jal         func_2E0920
    ctx->pc = 0x2E1D48u;
    SET_GPR_U32(ctx, 31, 0x2E1D50u);
    ctx->pc = 0x2E1D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1D48u;
    // 0x2e1d4c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0920u, 0x2E1D48u, 0x2E1D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1D50u;
label_2e1d50:
    // 0x2e1d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1d54: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D54u;
        // 0x2e1d58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1D5Cu;
}
