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

// Function: sub_00180300
// Address: 0x180300 - 0x1803e4
void sub_00180300_0x180300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180300_0x180300");
#endif

    ctx->pc = 0x180300u;

    // 0x180300: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x180300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x180304: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x180304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x180308: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x180308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x18030c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18030cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180310: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x180310u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x180314: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x180314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x180318: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x180318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x18031c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x18031cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x180320: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x180320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x180324: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x180324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x180328: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x180328u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x18032c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x18032cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x180330: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x180330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x180334: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x180334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x180338: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x180338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x18033c: 0xac860040  sw          $a2, 0x40($a0)
    ctx->pc = 0x18033cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
    // 0x180340: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x180340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x180344: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x180344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x180348: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x180348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x18034c: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x18034cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x180350: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x180350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x180354: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x180354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x180358: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x180358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x18035c: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x18035cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x180360: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x180360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x180364: 0xa4800068  sh          $zero, 0x68($a0)
    ctx->pc = 0x180364u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x180368: 0xa480006a  sh          $zero, 0x6A($a0)
    ctx->pc = 0x180368u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x18036c: 0xa480006c  sh          $zero, 0x6C($a0)
    ctx->pc = 0x18036cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x180370: 0xa080006e  sb          $zero, 0x6E($a0)
    ctx->pc = 0x180370u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x180374: 0xa080006f  sb          $zero, 0x6F($a0)
    ctx->pc = 0x180374u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x180378: 0xac830070  sw          $v1, 0x70($a0)
    ctx->pc = 0x180378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
    // 0x18037c: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x18037cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x180380: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x180380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x180384: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x180384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x180388: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x180388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x18038c: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x18038cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x180390: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x180390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x180394: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x180394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x180398: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x180398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x18039c: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x18039cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x1803a0: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x1803a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x1803a4: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x1803a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x1803a8: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x1803a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x1803ac: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x1803acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x1803b0: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x1803b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x1803b4: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x1803b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x1803b8: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x1803b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x1803bc: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x1803bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x1803c0: 0xac8000c0  sw          $zero, 0xC0($a0)
    ctx->pc = 0x1803c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x1803c4: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x1803c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x1803c8: 0xa48000c8  sh          $zero, 0xC8($a0)
    ctx->pc = 0x1803c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 200), (uint16_t)GPR_U32(ctx, 0));
    // 0x1803cc: 0xa08000ca  sb          $zero, 0xCA($a0)
    ctx->pc = 0x1803ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 202), (uint8_t)GPR_U32(ctx, 0));
    // 0x1803d0: 0xa08000cb  sb          $zero, 0xCB($a0)
    ctx->pc = 0x1803d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 203), (uint8_t)GPR_U32(ctx, 0));
    // 0x1803d4: 0xa08000cc  sb          $zero, 0xCC($a0)
    ctx->pc = 0x1803d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 0));
    // 0x1803d8: 0xa08000cd  sb          $zero, 0xCD($a0)
    ctx->pc = 0x1803d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 205), (uint8_t)GPR_U32(ctx, 0));
    // 0x1803dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1803DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1803E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803DCu;
        // 0x1803e0: 0xa08000ce  sb          $zero, 0xCE($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 206), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1803DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1803E4u;
}
