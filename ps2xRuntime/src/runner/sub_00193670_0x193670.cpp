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

// Function: sub_00193670
// Address: 0x193670 - 0x1936d8
void sub_00193670_0x193670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193670_0x193670");
#endif

    ctx->pc = 0x193670u;

    // 0x193670: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x193670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x193674: 0x2463d7c0  addiu       $v1, $v1, -0x2840
    ctx->pc = 0x193674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956992));
    // 0x193678: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x193678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x19367c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x19367cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193680: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x193680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193684: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x193684u;
    {
        const bool branch_taken_0x193684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x193684) {
            ctx->pc = 0x1936C8u;
            goto label_1936c8;
        }
    }
    ctx->pc = 0x19368Cu;
    // 0x19368c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19368Cu;
    {
        const bool branch_taken_0x19368c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19368c) {
            ctx->pc = 0x1936A0u;
            goto label_1936a0;
        }
    }
    ctx->pc = 0x193694u;
    // 0x193694: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x193694u;
    {
        const bool branch_taken_0x193694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193694) {
            ctx->pc = 0x1936D0u;
            goto label_1936d0;
        }
    }
    ctx->pc = 0x19369Cu;
    // 0x19369c: 0x0  nop
    ctx->pc = 0x19369cu;
    // NOP
label_1936a0:
    // 0x1936a0: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x1936a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x1936a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1936a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1936a8: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x1936a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1936ac: 0xc460007c  lwc1        $f0, 0x7C($v1)
    ctx->pc = 0x1936acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1936b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1936b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1936b4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1936b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1936b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1936b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1936bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1936BCu;
    {
        const bool branch_taken_0x1936bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1936C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1936BCu;
        // 0x1936c0: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1936bc) {
            ctx->pc = 0x1936D0u;
            goto label_1936d0;
        }
    }
    ctx->pc = 0x1936C4u;
    // 0x1936c4: 0x0  nop
    ctx->pc = 0x1936c4u;
    // NOP
label_1936c8:
    // 0x1936c8: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x1936c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1936cc: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1936ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_1936d0:
    // 0x1936d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1936D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1936D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1936D8u;
}
