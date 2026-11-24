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

// Function: sub_0029C950
// Address: 0x29c950 - 0x29ca24
void sub_0029C950_0x29c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C950_0x29c950");
#endif

    ctx->pc = 0x29c950u;

    // 0x29c950: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c954: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x29c954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x29c958: 0xac20501c  sw          $zero, 0x501C($at)
    ctx->pc = 0x29c958u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D501Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D501Cu, _value); } while (0);
    // 0x29c95c: 0x24635030  addiu       $v1, $v1, 0x5030
    ctx->pc = 0x29c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20528));
    // 0x29c960: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c964: 0xac205048  sw          $zero, 0x5048($at)
    ctx->pc = 0x29c964u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D5048u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5048u, _value); } while (0);
    // 0x29c968: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c96c: 0xac235018  sw          $v1, 0x5018($at)
    ctx->pc = 0x29c96cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D5018u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D5018u, _value); } while (0);
    // 0x29c970: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x29c970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x29c974: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c978: 0x24635000  addiu       $v1, $v1, 0x5000
    ctx->pc = 0x29c978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20480));
    // 0x29c97c: 0xac23504c  sw          $v1, 0x504C($at)
    ctx->pc = 0x29c97cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D504Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D504Cu, _value); } while (0);
    // 0x29c980: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x29c980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x29c984: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c988: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x29c988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x29c98c: 0xac234fb8  sw          $v1, 0x4FB8($at)
    ctx->pc = 0x29c98cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D4FB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D4FB8u, _value); } while (0);
    // 0x29c990: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x29c990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x29c994: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c998: 0x24634fa0  addiu       $v1, $v1, 0x4FA0
    ctx->pc = 0x29c998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20384));
    // 0x29c99c: 0xac234fec  sw          $v1, 0x4FEC($at)
    ctx->pc = 0x29c99cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D4FECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D4FECu, _value); } while (0);
    // 0x29c9a0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c9a4: 0xa0205030  sb          $zero, 0x5030($at)
    ctx->pc = 0x29c9a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D5030u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D5030u, _value); } while (0);
    // 0x29c9a8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c9ac: 0xa0205000  sb          $zero, 0x5000($at)
    ctx->pc = 0x29c9acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D5000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D5000u, _value); } while (0);
    // 0x29c9b0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c9b4: 0xac204fbc  sw          $zero, 0x4FBC($at)
    ctx->pc = 0x29c9b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D4FBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D4FBCu, _value); } while (0);
    // 0x29c9b8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c9bc: 0xac204fe8  sw          $zero, 0x4FE8($at)
    ctx->pc = 0x29c9bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D4FE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D4FE8u, _value); } while (0);
    // 0x29c9c0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c9c4: 0xa0204fd0  sb          $zero, 0x4FD0($at)
    ctx->pc = 0x29c9c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D4FD0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D4FD0u, _value); } while (0);
    // 0x29c9c8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c9cc: 0xa0204fa0  sb          $zero, 0x4FA0($at)
    ctx->pc = 0x29c9ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D4FA0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D4FA0u, _value); } while (0);
    // 0x29c9d0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c9d4: 0xa4205070  sh          $zero, 0x5070($at)
    ctx->pc = 0x29c9d4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D5070u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D5070u, _value); } while (0);
    // 0x29c9d8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c9dc: 0xa4205060  sh          $zero, 0x5060($at)
    ctx->pc = 0x29c9dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D5060u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D5060u, _value); } while (0);
    // 0x29c9e0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c9e4: 0xa4205072  sh          $zero, 0x5072($at)
    ctx->pc = 0x29c9e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D5072u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D5072u, _value); } while (0);
    // 0x29c9e8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c9ec: 0xa4205062  sh          $zero, 0x5062($at)
    ctx->pc = 0x29c9ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D5062u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D5062u, _value); } while (0);
    // 0x29c9f0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c9f4: 0xa4205074  sh          $zero, 0x5074($at)
    ctx->pc = 0x29c9f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D5074u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D5074u, _value); } while (0);
    // 0x29c9f8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29c9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29c9fc: 0xa4205064  sh          $zero, 0x5064($at)
    ctx->pc = 0x29c9fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D5064u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D5064u, _value); } while (0);
    // 0x29ca00: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29ca00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29ca04: 0xa4205076  sh          $zero, 0x5076($at)
    ctx->pc = 0x29ca04u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D5076u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D5076u, _value); } while (0);
    // 0x29ca08: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29ca08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29ca0c: 0xa4205066  sh          $zero, 0x5066($at)
    ctx->pc = 0x29ca0cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D5066u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D5066u, _value); } while (0);
    // 0x29ca10: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29ca10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29ca14: 0xa4205078  sh          $zero, 0x5078($at)
    ctx->pc = 0x29ca14u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D5078u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8D5078u, _value); } while (0);
    // 0x29ca18: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x29ca18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x29ca1c: 0x3e00008  jr          $ra
    ctx->pc = 0x29CA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA1Cu;
        // 0x29ca20: 0xa4205068  sh          $zero, 0x5068($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 20584), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CA24u;
}
