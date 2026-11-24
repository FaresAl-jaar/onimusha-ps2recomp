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

// Function: sub_0011B690
// Address: 0x11b690 - 0x11b948
void sub_0011B690_0x11b690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B690_0x11b690");
#endif

    switch (ctx->pc) {
        case 0x11b6d8u: goto label_11b6d8;
        case 0x11b7d0u: goto label_11b7d0;
        case 0x11b8d0u: goto label_11b8d0;
        default: break;
    }

    ctx->pc = 0x11b690u;

    // 0x11b690: 0x440d6000  mfc1        $t5, $f12
    ctx->pc = 0x11b690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x11b694: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11b694u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11b698: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11b698u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11b69c: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x11b69cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x11b6a0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x11b6a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x11b6a4: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x11b6a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x11b6a8: 0x14f782a  slt         $t7, $t2, $t7
    ctx->pc = 0x11b6a8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x11b6ac: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B6ACu;
    {
        const bool branch_taken_0x11b6ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6ACu;
        // 0x11b6b0: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6ac) {
            ctx->pc = 0x11B6BCu;
            goto label_11b6bc;
        }
    }
    ctx->pc = 0x11B6B4u;
    // 0x11b6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x11B6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6B4u;
        // 0x11b6b8: 0xc5e02dec  lwc1        $f0, 0x2DEC($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 11756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B6BCu;
label_11b6bc:
    // 0x11b6bc: 0x5a10008  bgez        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B6BCu;
    {
        const bool branch_taken_0x11b6bc = (GPR_S64(ctx, 13) >= 0);
        ctx->pc = 0x11B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6BCu;
        // 0x11b6c0: 0x3c0e004a  lui         $t6, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6bc) {
            ctx->pc = 0x11B6E0u;
            goto label_11b6e0;
        }
    }
    ctx->pc = 0x11B6C4u;
    // 0x11b6c4: 0x460c6041  sub.s       $f1, $f12, $f12
    ctx->pc = 0x11b6c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x11b6c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b6c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b6cc: 0x0  nop
    ctx->pc = 0x11b6ccu;
    // NOP
    // 0x11b6d0: 0x0  nop
    ctx->pc = 0x11b6d0u;
    // NOP
    // 0x11b6d4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11b6d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_11b6d8:
    // 0x11b6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11B6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B6E0u;
label_11b6e0:
    // 0x11b6e0: 0x1aa5824  and         $t3, $t5, $t2
    ctx->pc = 0x11b6e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
    // 0x11b6e4: 0xd65c3  sra         $t4, $t5, 23
    ctx->pc = 0x11b6e4u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 13), 23));
    // 0x11b6e8: 0x35cefb20  ori         $t6, $t6, 0xFB20
    ctx->pc = 0x11b6e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)64288);
    // 0x11b6ec: 0x16e7021  addu        $t6, $t3, $t6
    ctx->pc = 0x11b6ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x11b6f0: 0x3c0d0080  lui         $t5, 0x80
    ctx->pc = 0x11b6f0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)128 << 16));
    // 0x11b6f4: 0x1cd4824  and         $t1, $t6, $t5
    ctx->pc = 0x11b6f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) & GPR_U64(ctx, 13));
    // 0x11b6f8: 0x3c0f3f80  lui         $t7, 0x3F80
    ctx->pc = 0x11b6f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
    // 0x11b6fc: 0x12f7826  xor         $t7, $t1, $t7
    ctx->pc = 0x11b6fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 15));
    // 0x11b700: 0x256e000f  addiu       $t6, $t3, 0xF
    ctx->pc = 0x11b700u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 15));
    // 0x11b704: 0x16f6825  or          $t5, $t3, $t7
    ctx->pc = 0x11b704u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) | GPR_U64(ctx, 15));
    // 0x11b708: 0x1ca7024  and         $t6, $t6, $t2
    ctx->pc = 0x11b708u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 10));
    // 0x11b70c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b70cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b710: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x11b710u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11b714: 0x25ef2df0  addiu       $t7, $t7, 0x2DF0
    ctx->pc = 0x11b714u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11760));
    // 0x11b718: 0x258cff81  addiu       $t4, $t4, -0x7F
    ctx->pc = 0x11b718u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967169));
    // 0x11b71c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11b71cu;
    { uint32_t bits = FAST_READ32(0x662DF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b720: 0x29ce0010  slti        $t6, $t6, 0x10
    ctx->pc = 0x11b720u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x11b724: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x11b724u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11b728: 0x97dc3  sra         $t7, $t1, 23
    ctx->pc = 0x11b728u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 9), 23));
    // 0x11b72c: 0x11c0002b  beqz        $t6, . + 4 + (0x2B << 2)
    ctx->pc = 0x11B72Cu;
    {
        const bool branch_taken_0x11b72c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B72Cu;
        // 0x11b730: 0x18f6021  addu        $t4, $t4, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b72c) {
            ctx->pc = 0x11B7DCu;
            goto label_11b7dc;
        }
    }
    ctx->pc = 0x11B734u;
    // 0x11b734: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b738: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x11b738u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11b73c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x11B73Cu;
    {
        const bool branch_taken_0x11b73c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B73Cu;
        // 0x11b740: 0x3c0d0066  lui         $t5, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b73c) {
            ctx->pc = 0x11B774u;
            goto label_11b774;
        }
    }
    ctx->pc = 0x11B744u;
    // 0x11b744: 0x1180ffe4  beqz        $t4, . + 4 + (-0x1C << 2)
    ctx->pc = 0x11B744u;
    {
        const bool branch_taken_0x11b744 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B744u;
        // 0x11b748: 0x3c0d0066  lui         $t5, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b744) {
            ctx->pc = 0x11B6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b6d8;
        }
    }
    ctx->pc = 0x11B74Cu;
    // 0x11b74c: 0x448c3000  mtc1        $t4, $f6
    ctx->pc = 0x11b74cu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11b750: 0x25ad2df4  addiu       $t5, $t5, 0x2DF4
    ctx->pc = 0x11b750u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11764));
    // 0x11b754: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b754u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b758: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x11b758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x11b75c: 0x25ef2df8  addiu       $t7, $t7, 0x2DF8
    ctx->pc = 0x11b75cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11768));
    // 0x11b760: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b764: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b764u;
    { uint32_t bits = FAST_READ32(0x662DF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b768: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x11b768u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x11b76c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B76Cu;
        // 0x11b770: 0x4601301c  madd.s      $f0, $f6, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B774u;
label_11b774:
    // 0x11b774: 0x460c6082  mul.s       $f2, $f12, $f12
    ctx->pc = 0x11b774u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x11b778: 0x25ad2dfc  addiu       $t5, $t5, 0x2DFC
    ctx->pc = 0x11b778u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11772));
    // 0x11b77c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b77cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b780: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x11b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b784: 0x25ef2e00  addiu       $t7, $t7, 0x2E00
    ctx->pc = 0x11b784u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11776));
    // 0x11b788: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11b788u;
    { uint32_t bits = FAST_READ32(0x662E00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b78c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x11b78cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x11b790: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11b790u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11b794: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B794u;
    {
        const bool branch_taken_0x11b794 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B794u;
        // 0x11b798: 0x46001082  mul.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b794) {
            ctx->pc = 0x11B7A4u;
            goto label_11b7a4;
        }
    }
    ctx->pc = 0x11B79Cu;
    // 0x11b79c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B79Cu;
        // 0x11b7a0: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B7A4u;
label_11b7a4:
    // 0x11b7a4: 0x448c3000  mtc1        $t4, $f6
    ctx->pc = 0x11b7a4u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11b7a8: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11b7a8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11b7ac: 0x25ad2df8  addiu       $t5, $t5, 0x2DF8
    ctx->pc = 0x11b7acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11768));
    // 0x11b7b0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b7b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b7b4: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x11b7b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x11b7b8: 0x25ef2df4  addiu       $t7, $t7, 0x2DF4
    ctx->pc = 0x11b7b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11764));
    // 0x11b7bc: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11b7bcu;
    { uint32_t bits = FAST_READ32(0x662DF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b7c0: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b7c0u;
    { uint32_t bits = FAST_READ32(0x662DF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b7c4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x11b7c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x11b7c8: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x11b7c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x11b7cc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x11b7ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_11b7d0:
    // 0x11b7d0: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x11b7d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x11b7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x11B7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B7D4u;
        // 0x11b7d8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B7DCu;
label_11b7dc:
    // 0x11b7dc: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11b7dcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11b7e0: 0x448c3000  mtc1        $t4, $f6
    ctx->pc = 0x11b7e0u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11b7e4: 0x25ad2e04  addiu       $t5, $t5, 0x2E04
    ctx->pc = 0x11b7e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11780));
    // 0x11b7e8: 0x3c0effcf  lui         $t6, 0xFFCF
    ctx->pc = 0x11b7e8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65487 << 16));
    // 0x11b7ec: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11b7ecu;
    { uint32_t bits = FAST_READ32(0x662E04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b7f0: 0x3c0f0035  lui         $t7, 0x35
    ctx->pc = 0x11b7f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)53 << 16));
    // 0x11b7f4: 0x35ce5c30  ori         $t6, $t6, 0x5C30
    ctx->pc = 0x11b7f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)23600);
    // 0x11b7f8: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x11b7f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x11b7fc: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11b7fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11b800: 0x35efc288  ori         $t7, $t7, 0xC288
    ctx->pc = 0x11b800u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)49800);
    // 0x11b804: 0x1eb7823  subu        $t7, $t7, $t3
    ctx->pc = 0x11b804u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x11b808: 0x16e4821  addu        $t1, $t3, $t6
    ctx->pc = 0x11b808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x11b80c: 0x12f4825  or          $t1, $t1, $t7
    ctx->pc = 0x11b80cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x11b810: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11b810u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11b814: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b814u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b818: 0x25ad2e0c  addiu       $t5, $t5, 0x2E0C
    ctx->pc = 0x11b818u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11788));
    // 0x11b81c: 0x0  nop
    ctx->pc = 0x11b81cu;
    // NOP
    // 0x11b820: 0x0  nop
    ctx->pc = 0x11b820u;
    // NOP
    // 0x11b824: 0x460061c3  div.s       $f7, $f12, $f0
    ctx->pc = 0x11b824u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x11b828: 0x25ef2e08  addiu       $t7, $t7, 0x2E08
    ctx->pc = 0x11b828u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11784));
    // 0x11b82c: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x11b82cu;
    { uint32_t bits = FAST_READ32(0x662E0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b830: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11b830u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11b834: 0x25ad2e14  addiu       $t5, $t5, 0x2E14
    ctx->pc = 0x11b834u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11796));
    // 0x11b838: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x11b838u;
    { uint32_t bits = FAST_READ32(0x662E14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11b83c: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11b83cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11b840: 0x46073942  mul.s       $f5, $f7, $f7
    ctx->pc = 0x11b840u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x11b844: 0x25ad2e1c  addiu       $t5, $t5, 0x2E1C
    ctx->pc = 0x11b844u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11804));
    // 0x11b848: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11b848u;
    { uint32_t bits = FAST_READ32(0x662E08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b84c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b84cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b850: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x11b850u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x11b854: 0x25ef2e10  addiu       $t7, $t7, 0x2E10
    ctx->pc = 0x11b854u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11792));
    // 0x11b858: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11b858u;
    { uint32_t bits = FAST_READ32(0x662E10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b85c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b85cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b860: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11b860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11b864: 0x25ef2e18  addiu       $t7, $t7, 0x2E18
    ctx->pc = 0x11b864u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11800));
    // 0x11b868: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11b868u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11b86c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11b86cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11b870: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11b870u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11b874: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11b874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11b878: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11b878u;
    { uint32_t bits = FAST_READ32(0x662E18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b87c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x11b87cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11b880: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b880u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b884: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x11b884u;
    { uint32_t bits = FAST_READ32(0x662E1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11b888: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11b888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11b88c: 0x25ef2e20  addiu       $t7, $t7, 0x2E20
    ctx->pc = 0x11b88cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11808));
    // 0x11b890: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11b890u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11b894: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11b894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11b898: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11b898u;
    { uint32_t bits = FAST_READ32(0x662E20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b89c: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x11b89cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x11b8a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11b8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11b8a4: 0x19200018  blez        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x11B8A4u;
    {
        const bool branch_taken_0x11b8a4 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x11B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8A4u;
        // 0x11b8a8: 0x4600289c  madd.s      $f2, $f5, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8a4) {
            ctx->pc = 0x11B908u;
            goto label_11b908;
        }
    }
    ctx->pc = 0x11B8ACu;
    // 0x11b8ac: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11b8acu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11b8b0: 0x25ad2e00  addiu       $t5, $t5, 0x2E00
    ctx->pc = 0x11b8b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11776));
    // 0x11b8b4: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11b8b4u;
    { uint32_t bits = FAST_READ32(0x662E00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b8b8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x11b8b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11b8bc: 0x15800006  bnez        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B8BCu;
    {
        const bool branch_taken_0x11b8bc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8BCu;
        // 0x11b8c0: 0x460c00c2  mul.s       $f3, $f0, $f12 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8bc) {
            ctx->pc = 0x11B8D8u;
            goto label_11b8d8;
        }
    }
    ctx->pc = 0x11B8C4u;
    // 0x11b8c4: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x11b8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x11b8c8: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x11b8c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x11b8cc: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x11b8ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_11b8d0:
    // 0x11b8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8D0u;
        // 0x11b8d4: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B8D8u;
label_11b8d8:
    // 0x11b8d8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x11b8d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x11b8dc: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11b8dcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11b8e0: 0x25ad2df8  addiu       $t5, $t5, 0x2DF8
    ctx->pc = 0x11b8e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11768));
    // 0x11b8e4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b8e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b8e8: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11b8e8u;
    { uint32_t bits = FAST_READ32(0x662DF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b8ec: 0x25ef2df4  addiu       $t7, $t7, 0x2DF4
    ctx->pc = 0x11b8ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11764));
    // 0x11b8f0: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b8f0u;
    { uint32_t bits = FAST_READ32(0x662DF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b8f4: 0x4602381a  mula.s      $f7, $f2
    ctx->pc = 0x11b8f4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x11b8f8: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x11b8f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x11b8fc: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x11b8fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x11b900: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x11B900u;
    {
        const bool branch_taken_0x11b900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B900u;
        // 0x11b904: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b900) {
            ctx->pc = 0x11B7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b7d0;
        }
    }
    ctx->pc = 0x11B908u;
label_11b908:
    // 0x11b908: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B908u;
    {
        const bool branch_taken_0x11b908 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B908u;
        // 0x11b90c: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b908) {
            ctx->pc = 0x11B918u;
            goto label_11b918;
        }
    }
    ctx->pc = 0x11B910u;
    // 0x11b910: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x11B910u;
    {
        const bool branch_taken_0x11b910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B910u;
        // 0x11b914: 0x46003802  mul.s       $f0, $f7, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b910) {
            ctx->pc = 0x11B8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b8d0;
        }
    }
    ctx->pc = 0x11B918u;
label_11b918:
    // 0x11b918: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11b918u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11b91c: 0x25ad2df8  addiu       $t5, $t5, 0x2DF8
    ctx->pc = 0x11b91cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 11768));
    // 0x11b920: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b920u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b924: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x11b924u;
    { uint32_t bits = FAST_READ32(0x662DF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b928: 0x25ef2df4  addiu       $t7, $t7, 0x2DF4
    ctx->pc = 0x11b928u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11764));
    // 0x11b92c: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x11b92cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[7], ctx->f[0]));
    // 0x11b930: 0x4601301d  msub.s      $f0, $f6, $f1
    ctx->pc = 0x11b930u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[1]));
    // 0x11b934: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11b934u;
    { uint32_t bits = FAST_READ32(0x662DF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b938: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x11b938u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x11b93c: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x11b93cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x11b940: 0x3e00008  jr          $ra
    ctx->pc = 0x11B940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B940u;
        // 0x11b944: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B948u;
}
