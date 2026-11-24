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

// Function: sub_002E1BC0
// Address: 0x2e1bc0 - 0x2e1c74
void sub_002E1BC0_0x2e1bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1BC0_0x2e1bc0");
#endif

    switch (ctx->pc) {
        case 0x2e1c64u: goto label_2e1c64;
        default: break;
    }

    ctx->pc = 0x2e1bc0u;

    // 0x2e1bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e1bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e1bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1bc8: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e1bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e1bcc: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2E1BCCu;
    {
        const bool branch_taken_0x2e1bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1bcc) {
            ctx->pc = 0x2E1C68u;
            goto label_2e1c68;
        }
    }
    ctx->pc = 0x2E1BD4u;
    // 0x2e1bd4: 0xa3a00011  sb          $zero, 0x11($sp)
    ctx->pc = 0x2e1bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e1bd8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2e1bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e1bdc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2e1bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e1be0: 0xa3a20014  sb          $v0, 0x14($sp)
    ctx->pc = 0x2e1be0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1be4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2e1be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2e1be8: 0xa3a20015  sb          $v0, 0x15($sp)
    ctx->pc = 0x2e1be8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1bec: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x2e1becu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e1bf0: 0xa3a20016  sb          $v0, 0x16($sp)
    ctx->pc = 0x2e1bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1bf4: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x2e1bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x2e1bf8: 0xa3a20017  sb          $v0, 0x17($sp)
    ctx->pc = 0x2e1bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1bfc: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x2e1bfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1c00: 0xa3a20018  sb          $v0, 0x18($sp)
    ctx->pc = 0x2e1c00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1c04: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x2e1c04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2e1c08: 0xa3a20019  sb          $v0, 0x19($sp)
    ctx->pc = 0x2e1c08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1c0c: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x2e1c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2e1c10: 0xa3a2001a  sb          $v0, 0x1A($sp)
    ctx->pc = 0x2e1c10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1c14: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x2e1c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x2e1c18: 0xa3a2001b  sb          $v0, 0x1B($sp)
    ctx->pc = 0x2e1c18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1c1c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2e1c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1c20: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e1c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e1c24: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2e1c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1c28: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e1c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e1c2c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2e1c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1c30: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e1c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e1c34: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x2e1c34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2e1c38: 0xa7a20028  sh          $v0, 0x28($sp)
    ctx->pc = 0x2e1c38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1c3c: 0x90820016  lbu         $v0, 0x16($a0)
    ctx->pc = 0x2e1c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x2e1c40: 0xa3a2002a  sb          $v0, 0x2A($sp)
    ctx->pc = 0x2e1c40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1c44: 0x90820017  lbu         $v0, 0x17($a0)
    ctx->pc = 0x2e1c44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x2e1c48: 0xa3a2002b  sb          $v0, 0x2B($sp)
    ctx->pc = 0x2e1c48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e1c4c: 0x84820018  lh          $v0, 0x18($a0)
    ctx->pc = 0x2e1c4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e1c50: 0xa7a2002c  sh          $v0, 0x2C($sp)
    ctx->pc = 0x2e1c50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1c54: 0x8482001a  lh          $v0, 0x1A($a0)
    ctx->pc = 0x2e1c54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x2e1c58: 0xa7a2002e  sh          $v0, 0x2E($sp)
    ctx->pc = 0x2e1c58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e1c5c: 0xc0b8248  jal         func_2E0920
    ctx->pc = 0x2E1C5Cu;
    SET_GPR_U32(ctx, 31, 0x2E1C64u);
    ctx->pc = 0x2E1C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C5Cu;
    // 0x2e1c60: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0920u, 0x2E1C5Cu, 0x2E1C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C64u;
label_2e1c64:
    // 0x2e1c64: 0x0  nop
    ctx->pc = 0x2e1c64u;
    // NOP
label_2e1c68:
    // 0x2e1c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C6Cu;
        // 0x2e1c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1C74u;
}
