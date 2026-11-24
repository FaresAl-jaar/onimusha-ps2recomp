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

// Function: sub_003B84B0
// Address: 0x3b84b0 - 0x3b8524
void sub_003B84B0_0x3b84b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B84B0_0x3b84b0");
#endif

    switch (ctx->pc) {
        case 0x3b84ccu: goto label_3b84cc;
        case 0x3b84dcu: goto label_3b84dc;
        case 0x3b84ecu: goto label_3b84ec;
        default: break;
    }

    ctx->pc = 0x3b84b0u;

    // 0x3b84b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b84b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b84b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b84b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b84b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b84b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b84bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b84bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b84c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b84c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b84c4: 0xc0ef288  jal         func_3BCA20
    ctx->pc = 0x3B84C4u;
    SET_GPR_U32(ctx, 31, 0x3B84CCu);
    ctx->pc = 0x3B84C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B84C4u;
    // 0x3b84c8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCA20u, 0x3B84C4u, 0x3B84CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B84CCu;
label_3b84cc:
    // 0x3b84cc: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x3b84ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x3b84d0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3b84d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3b84d4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3B84D4u;
    SET_GPR_U32(ctx, 31, 0x3B84DCu);
    ctx->pc = 0x3B84D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B84D4u;
    // 0x3b84d8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3B84D4u, 0x3B84DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B84DCu;
label_3b84dc:
    // 0x3b84dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B84DCu;
    {
        const bool branch_taken_0x3b84dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B84E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B84DCu;
        // 0x3b84e0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b84dc) {
            ctx->pc = 0x3B8508u;
            goto label_3b8508;
        }
    }
    ctx->pc = 0x3B84E4u;
    // 0x3b84e4: 0xc04d80c  jal         func_136030
    ctx->pc = 0x3B84E4u;
    SET_GPR_U32(ctx, 31, 0x3B84ECu);
    ctx->pc = 0x3B84E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B84E4u;
    // 0x3b84e8: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x3B84E4u, 0x3B84ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B84ECu;
label_3b84ec:
    // 0x3b84ec: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x3b84ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x3b84f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b84f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b84f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3B84F4u;
    {
        const bool branch_taken_0x3b84f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B84F4u;
        // 0x3b84f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b84f4) {
            ctx->pc = 0x3B8500u;
            goto label_3b8500;
        }
    }
    ctx->pc = 0x3B84FCu;
    // 0x3b84fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b84fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b8500:
    // 0x3b8500: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B8500u;
    {
        const bool branch_taken_0x3b8500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8500u;
        // 0x3b8504: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8500) {
            ctx->pc = 0x3B8510u;
            goto label_3b8510;
        }
    }
    ctx->pc = 0x3B8508u;
label_3b8508:
    // 0x3b8508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b8508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b850c: 0x0  nop
    ctx->pc = 0x3b850cu;
    // NOP
label_3b8510:
    // 0x3b8510: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b8510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b8514: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b8514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b8518: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b8518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b851c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B851Cu;
        // 0x3b8520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B851Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B8524u;
}
