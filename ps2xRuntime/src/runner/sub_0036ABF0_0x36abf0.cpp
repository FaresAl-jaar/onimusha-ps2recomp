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

// Function: sub_0036ABF0
// Address: 0x36abf0 - 0x36ac34
void sub_0036ABF0_0x36abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036ABF0_0x36abf0");
#endif

    ctx->pc = 0x36abf0u;

    // 0x36abf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36abf4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x36abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x36abf8: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x36abf8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x36abfc: 0x2463ab10  addiu       $v1, $v1, -0x54F0
    ctx->pc = 0x36abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945552));
    // 0x36ac00: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x36ac00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x36ac04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x36ac04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36ac08: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x36ac08u;
    { uint32_t bits = FAST_READ32(0x65AB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36ac0c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x36ac0cu;
    { uint32_t bits = FAST_READ32(0x65AB14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36ac10: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x36ac10u;
    { uint32_t bits = FAST_READ32(0x65AB18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36ac14: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x36ac14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x36ac18: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x36ac18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x36ac1c: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x36ac1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x36ac20: 0xac80019c  sw          $zero, 0x19C($a0)
    ctx->pc = 0x36ac20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 0));
    // 0x36ac24: 0xa48201a0  sh          $v0, 0x1A0($a0)
    ctx->pc = 0x36ac24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 416), (uint16_t)GPR_U32(ctx, 2));
    // 0x36ac28: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36ac2c: 0x80cbee4  j           func_32FB90
    ctx->pc = 0x36AC2Cu;
    ctx->pc = 0x36AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AC2Cu;
    // 0x36ac30: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB90u;
    sub_0032FB90_0x32fb90(rdram, ctx, runtime); return;
    ctx->pc = 0x36AC34u;
}
