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

// Function: sub_0025B910
// Address: 0x25b910 - 0x25b96c
void sub_0025B910_0x25b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B910_0x25b910");
#endif

    switch (ctx->pc) {
        case 0x25b924u: goto label_25b924;
        default: break;
    }

    ctx->pc = 0x25b910u;

    // 0x25b910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25b910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25b914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b918: 0xc48d0008  lwc1        $f13, 0x8($a0)
    ctx->pc = 0x25b918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25b91c: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x25B91Cu;
    SET_GPR_U32(ctx, 31, 0x25B924u);
    ctx->pc = 0x25B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B91Cu;
    // 0x25b920: 0xc48c0000  lwc1        $f12, 0x0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x25B91Cu, 0x25B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B924u;
label_25b924:
    // 0x25b924: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x25b924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x25b928: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25b928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25b92c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x25b92cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25b930: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b934: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25b934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b93c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x25b93cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25b940: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x25b940u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x25b944: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25b944u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25b948: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25b948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25b94c: 0x0  nop
    ctx->pc = 0x25b94cu;
    // NOP
    // 0x25b950: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25b950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25b954: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25b954u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25b958: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x25b958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x25b95c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25b95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25b960: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25b960u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25b964: 0x3e00008  jr          $ra
    ctx->pc = 0x25B964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B964u;
        // 0x25b968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B96Cu;
}
