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

// Function: sub_003E0990
// Address: 0x3e0990 - 0x3e09f0
void sub_003E0990_0x3e0990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0990_0x3e0990");
#endif

    switch (ctx->pc) {
        case 0x3e09a4u: goto label_3e09a4;
        default: break;
    }

    ctx->pc = 0x3e0990u;

    // 0x3e0990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e0990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e0994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e0994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e0998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e0998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e099c: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3E099Cu;
    SET_GPR_U32(ctx, 31, 0x3E09A4u);
    ctx->pc = 0x3E09A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E099Cu;
    // 0x3e09a0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3E099Cu, 0x3E09A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E09A4u;
label_3e09a4:
    // 0x3e09a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E09A4u;
    {
        const bool branch_taken_0x3e09a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09A4u;
        // 0x3e09a8: 0x101c3c  dsll32      $v1, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e09a4) {
            ctx->pc = 0x3E09E0u;
            goto label_3e09e0;
        }
    }
    ctx->pc = 0x3E09ACu;
    // 0x3e09ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3e09acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3e09b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E09B0u;
    {
        const bool branch_taken_0x3e09b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e09b0) {
            ctx->pc = 0x3E09C0u;
            goto label_3e09c0;
        }
    }
    ctx->pc = 0x3E09B8u;
    // 0x3e09b8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3e09b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e09bc: 0x0  nop
    ctx->pc = 0x3e09bcu;
    // NOP
label_3e09c0:
    // 0x3e09c0: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x3e09c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x3e09c4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3e09c4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e09c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e09c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e09cc: 0x0  nop
    ctx->pc = 0x3e09ccu;
    // NOP
    // 0x3e09d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e09d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e09d4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3e09d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3e09d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3e09d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3e09dc: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x3e09dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_3e09e0:
    // 0x3e09e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e09e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e09e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e09e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e09e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E09E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E09E8u;
        // 0x3e09ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E09E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E09F0u;
}
