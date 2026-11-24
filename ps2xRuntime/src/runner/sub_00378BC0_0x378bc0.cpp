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

// Function: sub_00378BC0
// Address: 0x378bc0 - 0x378c20
void sub_00378BC0_0x378bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378BC0_0x378bc0");
#endif

    switch (ctx->pc) {
        case 0x378bf4u: goto label_378bf4;
        default: break;
    }

    ctx->pc = 0x378bc0u;

    // 0x378bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x378bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x378bc4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x378bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x378bc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x378bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x378bcc: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x378bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x378bd0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x378bd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x378bd4: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x378bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x378bd8: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x378bd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x378bdc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x378bdcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x378be0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x378be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x378be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x378be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x378be8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x378be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x378bec: 0xc076664  jal         func_1D9990
    ctx->pc = 0x378BECu;
    SET_GPR_U32(ctx, 31, 0x378BF4u);
    ctx->pc = 0x378BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378BECu;
    // 0x378bf0: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x378BECu, 0x378BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378BF4u;
label_378bf4:
    // 0x378bf4: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x378bf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x378bf8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x378bf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378bfc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x378BFCu;
    {
        const bool branch_taken_0x378bfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x378C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378BFCu;
        // 0x378c00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378bfc) {
            ctx->pc = 0x378C08u;
            goto label_378c08;
        }
    }
    ctx->pc = 0x378C04u;
    // 0x378c04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378c08:
    // 0x378c08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x378c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378c0c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x378c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x378c10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x378c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x378c14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x378c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x378c18: 0x3e00008  jr          $ra
    ctx->pc = 0x378C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378C18u;
        // 0x378c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378C20u;
}
