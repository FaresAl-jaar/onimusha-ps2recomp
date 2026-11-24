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

// Function: sub_003991C0
// Address: 0x3991c0 - 0x399290
void sub_003991C0_0x3991c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003991C0_0x3991c0");
#endif

    switch (ctx->pc) {
        case 0x3991f0u: goto label_3991f0;
        case 0x399200u: goto label_399200;
        case 0x399210u: goto label_399210;
        default: break;
    }

    ctx->pc = 0x3991c0u;

    // 0x3991c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3991c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3991c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3991c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3991c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3991c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3991cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3991ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3991d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3991d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3991d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3991d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3991d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3991d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3991dc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3991dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3991e0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3991e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3991e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3991e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3991e8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3991E8u;
    SET_GPR_U32(ctx, 31, 0x3991F0u);
    ctx->pc = 0x3991ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3991E8u;
    // 0x3991ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3991E8u, 0x3991F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3991F0u;
label_3991f0:
    // 0x3991f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3991f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3991f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3991f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3991f8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3991F8u;
    SET_GPR_U32(ctx, 31, 0x399200u);
    ctx->pc = 0x3991FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3991F8u;
    // 0x3991fc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3991F8u, 0x399200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399200u;
label_399200:
    // 0x399200: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x399200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x399204: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x399204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x399208: 0xc041460  jal         func_105180
    ctx->pc = 0x399208u;
    SET_GPR_U32(ctx, 31, 0x399210u);
    ctx->pc = 0x39920Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399208u;
    // 0x39920c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x399208u, 0x399210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399210u;
label_399210:
    // 0x399210: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x399210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x399214: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x399214u;
    {
        const bool branch_taken_0x399214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x399214) {
            ctx->pc = 0x399240u;
            goto label_399240;
        }
    }
    ctx->pc = 0x39921Cu;
    // 0x39921c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x39921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x399220: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x399220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x399224: 0x0  nop
    ctx->pc = 0x399224u;
    // NOP
    // 0x399228: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x399228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39922c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x39922Cu;
    {
        const bool branch_taken_0x39922c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x399230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39922Cu;
        // 0x399230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39922c) {
            ctx->pc = 0x399240u;
            goto label_399240;
        }
    }
    ctx->pc = 0x399234u;
    // 0x399234: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x399234u;
    {
        const bool branch_taken_0x399234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x399234) {
            ctx->pc = 0x399278u;
            goto label_399278;
        }
    }
    ctx->pc = 0x39923Cu;
    // 0x39923c: 0x0  nop
    ctx->pc = 0x39923cu;
    // NOP
label_399240:
    // 0x399240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399244: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x399244u;
    {
        const bool branch_taken_0x399244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x399244) {
            ctx->pc = 0x399270u;
            goto label_399270;
        }
    }
    ctx->pc = 0x39924Cu;
    // 0x39924c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x39924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x399250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x399250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x399254: 0x0  nop
    ctx->pc = 0x399254u;
    // NOP
    // 0x399258: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x399258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39925c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x39925Cu;
    {
        const bool branch_taken_0x39925c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x39925c) {
            ctx->pc = 0x399270u;
            goto label_399270;
        }
    }
    ctx->pc = 0x399264u;
    // 0x399264: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x399264u;
    {
        const bool branch_taken_0x399264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x399264) {
            ctx->pc = 0x399278u;
            goto label_399278;
        }
    }
    ctx->pc = 0x39926Cu;
    // 0x39926c: 0x0  nop
    ctx->pc = 0x39926cu;
    // NOP
label_399270:
    // 0x399270: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x399270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399274: 0x0  nop
    ctx->pc = 0x399274u;
    // NOP
label_399278:
    // 0x399278: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x399278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39927c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39927cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399280: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x399280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x399284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399288: 0x3e00008  jr          $ra
    ctx->pc = 0x399288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399288u;
        // 0x39928c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399290u;
}
