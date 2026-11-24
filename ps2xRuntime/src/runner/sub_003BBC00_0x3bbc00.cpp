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

// Function: sub_003BBC00
// Address: 0x3bbc00 - 0x3bbc64
void sub_003BBC00_0x3bbc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBC00_0x3bbc00");
#endif

    switch (ctx->pc) {
        case 0x3bbc58u: goto label_3bbc58;
        default: break;
    }

    ctx->pc = 0x3bbc00u;

    // 0x3bbc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bbc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bbc04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bbc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bbc08: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3bbc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bbc0c: 0x8c822b50  lw          $v0, 0x2B50($a0)
    ctx->pc = 0x3bbc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11088)));
    // 0x3bbc10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3bbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3bbc14: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x3bbc14u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bbc18: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3bbc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bbc1c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x3bbc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3bbc20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bbc20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbc24: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3bbc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3bbc28: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x3bbc28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x3bbc2c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3bbc2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3bbc30: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3bbc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bbc34: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3bbc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3bbc38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bbc38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bbc3c: 0x8c822b50  lw          $v0, 0x2B50($a0)
    ctx->pc = 0x3bbc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11088)));
    // 0x3bbc40: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x3bbc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bbc44: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3bbc44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3bbc48: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3bbc48u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3bbc4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3bbc4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3bbc50: 0xc0eef1c  jal         func_3BBC70
    ctx->pc = 0x3BBC50u;
    SET_GPR_U32(ctx, 31, 0x3BBC58u);
    ctx->pc = 0x3BBC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBC50u;
    // 0x3bbc54: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC70u, 0x3BBC50u, 0x3BBC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBC58u;
label_3bbc58:
    // 0x3bbc58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bbc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bbc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BBC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBC5Cu;
        // 0x3bbc60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BBC64u;
}
