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

// Function: sub_003B2210
// Address: 0x3b2210 - 0x3b2290
void sub_003B2210_0x3b2210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2210_0x3b2210");
#endif

    switch (ctx->pc) {
        case 0x3b2240u: goto label_3b2240;
        default: break;
    }

    ctx->pc = 0x3b2210u;

    // 0x3b2210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b2210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b2214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b2214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b2218: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3b2218u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3b221c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3b221cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3b2220: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3b2220u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b2224: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b2224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b2228: 0x460d6501  sub.s       $f20, $f12, $f13
    ctx->pc = 0x3b2228u;
    ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x3b222c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x3b222cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x3b2230: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x3b2230u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x3b2234: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x3b2234u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x3b2238: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x3B2238u;
    SET_GPR_U32(ctx, 31, 0x3B2240u);
    ctx->pc = 0x3B223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2238u;
    // 0x3b223c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x3B2238u, 0x3B2240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2240u;
label_3b2240:
    // 0x3b2240: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x3b2240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x3b2244: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x3b2244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x3b2248: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b2248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b224c: 0x0  nop
    ctx->pc = 0x3b224cu;
    // NOP
    // 0x3b2250: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x3b2250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x3b2254: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b2254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b2258: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2258u;
    {
        const bool branch_taken_0x3b2258 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b2258) {
            ctx->pc = 0x3B2268u;
            goto label_3b2268;
        }
    }
    ctx->pc = 0x3B2260u;
    // 0x3b2260: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2260u;
    {
        const bool branch_taken_0x3b2260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2260u;
        // 0x3b2264: 0x4600b806  mov.s       $f0, $f23 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2260) {
            ctx->pc = 0x3B2274u;
            goto label_3b2274;
        }
    }
    ctx->pc = 0x3B2268u;
label_3b2268:
    // 0x3b2268: 0x4614a802  mul.s       $f0, $f21, $f20
    ctx->pc = 0x3b2268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x3b226c: 0x4600b5c0  add.s       $f23, $f22, $f0
    ctx->pc = 0x3b226cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x3b2270: 0x4600b806  mov.s       $f0, $f23
    ctx->pc = 0x3b2270u;
    ctx->f[0] = FPU_MOV_S(ctx->f[23]);
label_3b2274:
    // 0x3b2274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b2274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2278: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3b2278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3b227c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3b227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3b2280: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3b2280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3b2284: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b2284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b2288: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2288u;
        // 0x3b228c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2290u;
}
