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

// Function: sub_002746F0
// Address: 0x2746f0 - 0x274774
void sub_002746F0_0x2746f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002746F0_0x2746f0");
#endif

    ctx->pc = 0x2746f0u;

    // 0x2746f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2746f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2746f4: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x2746f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2746f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2746f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2746fc: 0xa4a30012  sh          $v1, 0x12($a1)
    ctx->pc = 0x2746fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x274700: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x274700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274704: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x274704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x274708: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x274708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27470c: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x27470cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x274710: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x274710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274714: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x274714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x274718: 0x80830028  lb          $v1, 0x28($a0)
    ctx->pc = 0x274718u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x27471c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x27471cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x274720: 0x90830029  lbu         $v1, 0x29($a0)
    ctx->pc = 0x274720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
    // 0x274724: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x274724u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x274728: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x274728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x27472c: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x27472cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x274730: 0x9083002b  lbu         $v1, 0x2B($a0)
    ctx->pc = 0x274730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 43)));
    // 0x274734: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x274734u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x274738: 0x9083002c  lbu         $v1, 0x2C($a0)
    ctx->pc = 0x274738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x27473c: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x27473cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x274740: 0x9483001c  lhu         $v1, 0x1C($a0)
    ctx->pc = 0x274740u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x274744: 0xa4a30006  sh          $v1, 0x6($a1)
    ctx->pc = 0x274744u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x274748: 0x9483001e  lhu         $v1, 0x1E($a0)
    ctx->pc = 0x274748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x27474c: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x27474cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x274750: 0x94830020  lhu         $v1, 0x20($a0)
    ctx->pc = 0x274750u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x274754: 0xa4a3000a  sh          $v1, 0xA($a1)
    ctx->pc = 0x274754u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x274758: 0x94830022  lhu         $v1, 0x22($a0)
    ctx->pc = 0x274758u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x27475c: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x27475cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x274760: 0x94830024  lhu         $v1, 0x24($a0)
    ctx->pc = 0x274760u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x274764: 0xa4a3000e  sh          $v1, 0xE($a1)
    ctx->pc = 0x274764u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x274768: 0x94830026  lhu         $v1, 0x26($a0)
    ctx->pc = 0x274768u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x27476c: 0x3e00008  jr          $ra
    ctx->pc = 0x27476Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27476Cu;
        // 0x274770: 0xa4a30010  sh          $v1, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27476Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274774u;
}
