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

// Function: sub_001DAFE0
// Address: 0x1dafe0 - 0x1db0ec
void sub_001DAFE0_0x1dafe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAFE0_0x1dafe0");
#endif

    ctx->pc = 0x1dafe0u;

    // 0x1dafe0: 0x24a3ffe0  addiu       $v1, $a1, -0x20
    ctx->pc = 0x1dafe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x1dafe4: 0x248600af  addiu       $a2, $a0, 0xAF
    ctx->pc = 0x1dafe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 175));
    // 0x1dafe8: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x1dafe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1dafec: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1dafecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1daff0: 0xc54024  and         $t0, $a2, $a1
    ctx->pc = 0x1daff0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1daff4: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x1daff4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1daff8: 0x1042823  subu        $a1, $t0, $a0
    ctx->pc = 0x1daff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1daffc: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1daffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1db000: 0xa5000002  sh          $zero, 0x2($t0)
    ctx->pc = 0x1db000u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1db004: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x1db004u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x1db008: 0x24860048  addiu       $a2, $a0, 0x48
    ctx->pc = 0x1db008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x1db00c: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x1db00cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x1db010: 0x24850018  addiu       $a1, $a0, 0x18
    ctx->pc = 0x1db010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x1db014: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x1db014u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x1db018: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x1db018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1db01c: 0xad050014  sw          $a1, 0x14($t0)
    ctx->pc = 0x1db01cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 5));
    // 0x1db020: 0x24860078  addiu       $a2, $a0, 0x78
    ctx->pc = 0x1db020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x1db024: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x1db024u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x1db028: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x1db028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1db02c: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x1db02cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x1db030: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1db030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db034: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x1db034u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1db038: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1db038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1db03c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1db03cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1db040: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1db040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1db044: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1db044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1db048: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x1db048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x1db04c: 0xa0870018  sb          $a3, 0x18($a0)
    ctx->pc = 0x1db04cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 7));
    // 0x1db050: 0xa480001a  sh          $zero, 0x1A($a0)
    ctx->pc = 0x1db050u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x1db054: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1db054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1db058: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1db058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1db05c: 0xac880020  sw          $t0, 0x20($a0)
    ctx->pc = 0x1db05cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
    // 0x1db060: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1db060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1db064: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x1db064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x1db068: 0xa0870030  sb          $a3, 0x30($a0)
    ctx->pc = 0x1db068u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 7));
    // 0x1db06c: 0xa4800032  sh          $zero, 0x32($a0)
    ctx->pc = 0x1db06cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x1db070: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1db070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1db074: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1db074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1db078: 0xac860038  sw          $a2, 0x38($a0)
    ctx->pc = 0x1db078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 6));
    // 0x1db07c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1db07cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1db080: 0xac860040  sw          $a2, 0x40($a0)
    ctx->pc = 0x1db080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
    // 0x1db084: 0xa0870048  sb          $a3, 0x48($a0)
    ctx->pc = 0x1db084u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 7));
    // 0x1db088: 0xa480004a  sh          $zero, 0x4A($a0)
    ctx->pc = 0x1db088u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x1db08c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1db08cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x1db090: 0xac880054  sw          $t0, 0x54($a0)
    ctx->pc = 0x1db090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 8));
    // 0x1db094: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x1db094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x1db098: 0xac88005c  sw          $t0, 0x5C($a0)
    ctx->pc = 0x1db098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 8));
    // 0x1db09c: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1db09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x1db0a0: 0xa0870060  sb          $a3, 0x60($a0)
    ctx->pc = 0x1db0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 7));
    // 0x1db0a4: 0xa4800062  sh          $zero, 0x62($a0)
    ctx->pc = 0x1db0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 98), (uint16_t)GPR_U32(ctx, 0));
    // 0x1db0a8: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x1db0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x1db0ac: 0xac88006c  sw          $t0, 0x6C($a0)
    ctx->pc = 0x1db0acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 8));
    // 0x1db0b0: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x1db0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x1db0b4: 0xac880074  sw          $t0, 0x74($a0)
    ctx->pc = 0x1db0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 8));
    // 0x1db0b8: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x1db0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x1db0bc: 0xa0870078  sb          $a3, 0x78($a0)
    ctx->pc = 0x1db0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 7));
    // 0x1db0c0: 0xa480007a  sh          $zero, 0x7A($a0)
    ctx->pc = 0x1db0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 122), (uint16_t)GPR_U32(ctx, 0));
    // 0x1db0c4: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x1db0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x1db0c8: 0xac850084  sw          $a1, 0x84($a0)
    ctx->pc = 0x1db0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 5));
    // 0x1db0cc: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1db0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1db0d0: 0xac85008c  sw          $a1, 0x8C($a0)
    ctx->pc = 0x1db0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 5));
    // 0x1db0d4: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x1db0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x1db0d8: 0xac840098  sw          $a0, 0x98($a0)
    ctx->pc = 0x1db0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 4));
    // 0x1db0dc: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x1db0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1db0e0: 0xac85009c  sw          $a1, 0x9C($a0)
    ctx->pc = 0x1db0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 5));
    // 0x1db0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0E4u;
        // 0x1db0e8: 0xa4830090  sh          $v1, 0x90($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB0ECu;
}
