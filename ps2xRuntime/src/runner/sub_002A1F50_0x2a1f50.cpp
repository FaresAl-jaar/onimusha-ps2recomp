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

// Function: sub_002A1F50
// Address: 0x2a1f50 - 0x2a1fb8
void sub_002A1F50_0x2a1f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1F50_0x2a1f50");
#endif

    ctx->pc = 0x2a1f50u;

    // 0x2a1f50: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x2a1f50u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a1f54: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2a1f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a1f58: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a1f58u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a1f5c: 0x8c89007c  lw          $t1, 0x7C($a0)
    ctx->pc = 0x2a1f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1f60: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2a1f60u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a1f64: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2a1f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a1f68: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x2a1f68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a1f6c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2a1f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a1f70: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2a1f70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a1f74: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2a1f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a1f78: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2a1f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a1f7c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a1f7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a1f80: 0xe92821  addu        $a1, $a3, $t1
    ctx->pc = 0x2a1f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2a1f84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a1f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a1f88: 0xe4a20160  swc1        $f2, 0x160($a1)
    ctx->pc = 0x2a1f88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 352), bits); }
    // 0x2a1f8c: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x2a1f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1f90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2a1f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a1f94: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2a1f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a1f98: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2a1f98u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1f9c: 0x0  nop
    ctx->pc = 0x2a1f9cu;
    // NOP
    // 0x2a1fa0: 0xe4a10164  swc1        $f1, 0x164($a1)
    ctx->pc = 0x2a1fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 356), bits); }
    // 0x2a1fa4: 0x8c84007c  lw          $a0, 0x7C($a0)
    ctx->pc = 0x2a1fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a1fa8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2a1fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2a1fac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a1facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1FB0u;
        // 0x2a1fb4: 0xe4600168  swc1        $f0, 0x168($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 360), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1FB8u;
}
