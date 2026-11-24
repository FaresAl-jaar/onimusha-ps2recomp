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

// Function: sub_003A3130
// Address: 0x3a3130 - 0x3a3200
void sub_003A3130_0x3a3130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3130_0x3a3130");
#endif

    switch (ctx->pc) {
        case 0x3a3160u: goto label_3a3160;
        case 0x3a3170u: goto label_3a3170;
        case 0x3a3180u: goto label_3a3180;
        default: break;
    }

    ctx->pc = 0x3a3130u;

    // 0x3a3130: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a3130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a3134: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a3134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3a3138: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a3138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a313c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a313cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a3140: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a3140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3144: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a3144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a3148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a314c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3a314cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3150: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3a3150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3154: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3a3154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a3158: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3A3158u;
    SET_GPR_U32(ctx, 31, 0x3A3160u);
    ctx->pc = 0x3A315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3158u;
    // 0x3a315c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3A3158u, 0x3A3160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3160u;
label_3a3160:
    // 0x3a3160: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a3160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3164: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3a3164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3168: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3A3168u;
    SET_GPR_U32(ctx, 31, 0x3A3170u);
    ctx->pc = 0x3A316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3168u;
    // 0x3a316c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3A3168u, 0x3A3170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3170u;
label_3a3170:
    // 0x3a3170: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3a3170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a3174: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3a3174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3a3178: 0xc041460  jal         func_105180
    ctx->pc = 0x3A3178u;
    SET_GPR_U32(ctx, 31, 0x3A3180u);
    ctx->pc = 0x3A317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3178u;
    // 0x3a317c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x3A3178u, 0x3A3180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3180u;
label_3a3180:
    // 0x3a3180: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x3a3180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3a3184: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A3184u;
    {
        const bool branch_taken_0x3a3184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3184) {
            ctx->pc = 0x3A31B0u;
            goto label_3a31b0;
        }
    }
    ctx->pc = 0x3A318Cu;
    // 0x3a318c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3a318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a3190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a3190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3194: 0x0  nop
    ctx->pc = 0x3a3194u;
    // NOP
    // 0x3a3198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a3198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a319c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3A319Cu;
    {
        const bool branch_taken_0x3a319c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A31A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A319Cu;
        // 0x3a31a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a319c) {
            ctx->pc = 0x3A31B0u;
            goto label_3a31b0;
        }
    }
    ctx->pc = 0x3A31A4u;
    // 0x3a31a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3A31A4u;
    {
        const bool branch_taken_0x3a31a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a31a4) {
            ctx->pc = 0x3A31E8u;
            goto label_3a31e8;
        }
    }
    ctx->pc = 0x3A31ACu;
    // 0x3a31ac: 0x0  nop
    ctx->pc = 0x3a31acu;
    // NOP
label_3a31b0:
    // 0x3a31b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a31b4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A31B4u;
    {
        const bool branch_taken_0x3a31b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a31b4) {
            ctx->pc = 0x3A31E0u;
            goto label_3a31e0;
        }
    }
    ctx->pc = 0x3A31BCu;
    // 0x3a31bc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3a31bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a31c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a31c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a31c4: 0x0  nop
    ctx->pc = 0x3a31c4u;
    // NOP
    // 0x3a31c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3a31c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a31cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3A31CCu;
    {
        const bool branch_taken_0x3a31cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a31cc) {
            ctx->pc = 0x3A31E0u;
            goto label_3a31e0;
        }
    }
    ctx->pc = 0x3A31D4u;
    // 0x3a31d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A31D4u;
    {
        const bool branch_taken_0x3a31d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a31d4) {
            ctx->pc = 0x3A31E8u;
            goto label_3a31e8;
        }
    }
    ctx->pc = 0x3A31DCu;
    // 0x3a31dc: 0x0  nop
    ctx->pc = 0x3a31dcu;
    // NOP
label_3a31e0:
    // 0x3a31e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a31e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a31e4: 0x0  nop
    ctx->pc = 0x3a31e4u;
    // NOP
label_3a31e8:
    // 0x3a31e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a31e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a31ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a31ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a31f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a31f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a31f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a31f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a31f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A31F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A31F8u;
        // 0x3a31fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A31F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3200u;
}
