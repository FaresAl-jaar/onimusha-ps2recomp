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

// Function: sub_002AD6E0
// Address: 0x2ad6e0 - 0x2ad750
void sub_002AD6E0_0x2ad6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD6E0_0x2ad6e0");
#endif

    ctx->pc = 0x2ad6e0u;

    // 0x2ad6e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ad6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ad6e4: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x2ad6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x2ad6e8: 0xa023e000  sb          $v1, -0x2000($at)
    ctx->pc = 0x2ad6e8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8DE000u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8DE000u, _value); } while (0);
    // 0x2ad6ec: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2ad6ecu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad6f0: 0xac8b08c4  sw          $t3, 0x8C4($a0)
    ctx->pc = 0x2ad6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2244), GPR_U32(ctx, 11));
    // 0x2ad6f4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ad6f4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad6f8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2ad6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad6fc: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x2ad6fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2ad700: 0x240300c3  addiu       $v1, $zero, 0xC3
    ctx->pc = 0x2ad700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    // 0x2ad704: 0xac8508b4  sw          $a1, 0x8B4($a0)
    ctx->pc = 0x2ad704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2228), GPR_U32(ctx, 5));
    // 0x2ad708: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2ad708u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ad70c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2ad70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad710: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2ad710u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad714: 0xac8508b8  sw          $a1, 0x8B8($a0)
    ctx->pc = 0x2ad714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2232), GPR_U32(ctx, 5));
    // 0x2ad718: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2ad718u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad71c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2ad71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad720: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ad720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ad724: 0xac8508bc  sw          $a1, 0x8BC($a0)
    ctx->pc = 0x2ad724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2236), GPR_U32(ctx, 5));
    // 0x2ad728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ad728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ad72c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2ad72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ad730: 0xac8508c0  sw          $a1, 0x8C0($a0)
    ctx->pc = 0x2ad730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2240), GPR_U32(ctx, 5));
    // 0x2ad734: 0xa48a08a0  sh          $t2, 0x8A0($a0)
    ctx->pc = 0x2ad734u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2208), (uint16_t)GPR_U32(ctx, 10));
    // 0x2ad738: 0xe4830890  swc1        $f3, 0x890($a0)
    ctx->pc = 0x2ad738u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2192), bits); }
    // 0x2ad73c: 0xe4820894  swc1        $f2, 0x894($a0)
    ctx->pc = 0x2ad73cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2196), bits); }
    // 0x2ad740: 0xe4810898  swc1        $f1, 0x898($a0)
    ctx->pc = 0x2ad740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2200), bits); }
    // 0x2ad744: 0xe480089c  swc1        $f0, 0x89C($a0)
    ctx->pc = 0x2ad744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 2204), bits); }
    // 0x2ad748: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD748u;
        // 0x2ad74c: 0xa0830780  sb          $v1, 0x780($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD750u;
}
