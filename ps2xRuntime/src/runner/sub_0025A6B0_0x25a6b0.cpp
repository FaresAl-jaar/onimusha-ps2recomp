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

// Function: sub_0025A6B0
// Address: 0x25a6b0 - 0x25a718
void sub_0025A6B0_0x25a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A6B0_0x25a6b0");
#endif

    switch (ctx->pc) {
        case 0x25a6c4u: goto label_25a6c4;
        default: break;
    }

    ctx->pc = 0x25a6b0u;

    // 0x25a6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a6b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a6b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25a6b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25a6bc: 0xc096998  jal         func_25A660
    ctx->pc = 0x25A6BCu;
    SET_GPR_U32(ctx, 31, 0x25A6C4u);
    ctx->pc = 0x25A6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A6BCu;
    // 0x25a6c0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A660u, 0x25A6BCu, 0x25A6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A6C4u;
label_25a6c4:
    // 0x25a6c4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A6C4u;
    {
        const bool branch_taken_0x25a6c4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x25A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6C4u;
        // 0x25a6c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6c4) {
            ctx->pc = 0x25A6D8u;
            goto label_25a6d8;
        }
    }
    ctx->pc = 0x25A6CCu;
    // 0x25a6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25a6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a6d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25A6D0u;
    {
        const bool branch_taken_0x25a6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6D0u;
        // 0x25a6d4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6d0) {
            ctx->pc = 0x25A6F0u;
            goto label_25a6f0;
        }
    }
    ctx->pc = 0x25A6D8u;
label_25a6d8:
    // 0x25a6d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25a6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25a6dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25a6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25a6e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25a6e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a6e4: 0x0  nop
    ctx->pc = 0x25a6e4u;
    // NOP
    // 0x25a6e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25a6e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25a6ec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25a6ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25a6f0:
    // 0x25a6f0: 0x3c023780  lui         $v0, 0x3780
    ctx->pc = 0x25a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14208 << 16));
    // 0x25a6f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a6f8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x25a6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x25a6fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25a6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a700: 0x0  nop
    ctx->pc = 0x25a700u;
    // NOP
    // 0x25a704: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25a704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25a708: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x25a708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x25a70c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25a70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25a710: 0x3e00008  jr          $ra
    ctx->pc = 0x25A710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A710u;
        // 0x25a714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A718u;
}
