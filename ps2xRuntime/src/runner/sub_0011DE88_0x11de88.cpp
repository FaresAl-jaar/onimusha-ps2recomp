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

// Function: sub_0011DE88
// Address: 0x11de88 - 0x11e180
void sub_0011DE88_0x11de88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DE88_0x11de88");
#endif

    switch (ctx->pc) {
        case 0x11dedcu: goto label_11dedc;
        case 0x11def8u: goto label_11def8;
        case 0x11defcu: goto label_11defc;
        default: break;
    }

    ctx->pc = 0x11de88u;

    // 0x11de88: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11de88u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11de8c: 0x440b6000  mfc1        $t3, $f12
    ctx->pc = 0x11de8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x11de90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11de90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11de94: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11de94u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11de98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11de98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11de9c: 0x3c0f317f  lui         $t7, 0x317F
    ctx->pc = 0x11de9cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)12671 << 16));
    // 0x11dea0: 0x16e6824  and         $t5, $t3, $t6
    ctx->pc = 0x11dea0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) & GPR_U64(ctx, 14));
    // 0x11dea4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11dea4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11dea8: 0x1ed782a  slt         $t7, $t7, $t5
    ctx->pc = 0x11dea8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11deac: 0x15e00020  bnez        $t7, . + 4 + (0x20 << 2)
    ctx->pc = 0x11DEACu;
    {
        const bool branch_taken_0x11deac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEACu;
        // 0x11deb0: 0x46006146  mov.s       $f5, $f12 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11deac) {
            ctx->pc = 0x11DF30u;
            goto label_11df30;
        }
    }
    ctx->pc = 0x11DEB4u;
    // 0x11deb4: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11deb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11deb8: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x11deb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11debc: 0x15e0001d  bnez        $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x11DEBCu;
    {
        const bool branch_taken_0x11debc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEBCu;
        // 0x11dec0: 0x3c0f3f2c  lui         $t7, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11debc) {
            ctx->pc = 0x11DF34u;
            goto label_11df34;
        }
    }
    ctx->pc = 0x11DEC4u;
    // 0x11dec4: 0x248f0001  addiu       $t7, $a0, 0x1
    ctx->pc = 0x11dec4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11dec8: 0x1af7825  or          $t7, $t5, $t7
    ctx->pc = 0x11dec8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x11decc: 0x15e0000d  bnez        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x11DECCu;
    {
        const bool branch_taken_0x11decc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DECCu;
        // 0x11ded0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11decc) {
            ctx->pc = 0x11DF04u;
            goto label_11df04;
        }
    }
    ctx->pc = 0x11DED4u;
    // 0x11ded4: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x11DED4u;
    SET_GPR_U32(ctx, 31, 0x11DEDCu);
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x11DED4u, 0x11DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DEDCu;
label_11dedc:
    // 0x11dedc: 0x3c0c0066  lui         $t4, 0x66
    ctx->pc = 0x11dedcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)102 << 16));
    // 0x11dee0: 0x258c3584  addiu       $t4, $t4, 0x3584
    ctx->pc = 0x11dee0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 13700));
    // 0x11dee4: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x11dee4u;
    { uint32_t bits = FAST_READ32(0x663584u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11dee8: 0x0  nop
    ctx->pc = 0x11dee8u;
    // NOP
    // 0x11deec: 0x0  nop
    ctx->pc = 0x11deecu;
    // NOP
    // 0x11def0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11def0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x11def4: 0x0  nop
    ctx->pc = 0x11def4u;
    // NOP
label_11def8:
    // 0x11def8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11def8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11defc:
    // 0x11defc: 0x3e00008  jr          $ra
    ctx->pc = 0x11DEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DEFCu;
        // 0x11df00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DF04u;
label_11df04:
    // 0x11df04: 0x108f0008  beq         $a0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x11DF04u;
    {
        const bool branch_taken_0x11df04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x11DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF04u;
        // 0x11df08: 0x3c0d0066  lui         $t5, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df04) {
            ctx->pc = 0x11DF28u;
            goto label_11df28;
        }
    }
    ctx->pc = 0x11DF0Cu;
    // 0x11df0c: 0x25ad3588  addiu       $t5, $t5, 0x3588
    ctx->pc = 0x11df0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 13704));
    // 0x11df10: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11df10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11df14: 0x0  nop
    ctx->pc = 0x11df14u;
    // NOP
    // 0x11df18: 0x0  nop
    ctx->pc = 0x11df18u;
    // NOP
    // 0x11df1c: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x11df1cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x11df20: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x11DF20u;
    {
        const bool branch_taken_0x11df20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF20u;
        // 0x11df24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df20) {
            ctx->pc = 0x11DEFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11defc;
        }
    }
    ctx->pc = 0x11DF28u;
label_11df28:
    // 0x11df28: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x11DF28u;
    {
        const bool branch_taken_0x11df28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF28u;
        // 0x11df2c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df28) {
            ctx->pc = 0x11DEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11def8;
        }
    }
    ctx->pc = 0x11DF30u;
label_11df30:
    // 0x11df30: 0x3c0f3f2c  lui         $t7, 0x3F2C
    ctx->pc = 0x11df30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16172 << 16));
label_11df34:
    // 0x11df34: 0x35efa13f  ori         $t7, $t7, 0xA13F
    ctx->pc = 0x11df34u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)41279);
    // 0x11df38: 0x1ed782a  slt         $t7, $t7, $t5
    ctx->pc = 0x11df38u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11df3c: 0x51e0000f  beql        $t7, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x11DF3Cu;
    {
        const bool branch_taken_0x11df3c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x11df3c) {
            ctx->pc = 0x11DF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DF3Cu;
            // 0x11df40: 0x46052802  mul.s       $f0, $f5, $f5 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DF7Cu;
            goto label_11df7c;
        }
    }
    ctx->pc = 0x11DF44u;
    // 0x11df44: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DF44u;
    {
        const bool branch_taken_0x11df44 = (GPR_S64(ctx, 11) >= 0);
        ctx->pc = 0x11DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF44u;
        // 0x11df48: 0x3c0e0066  lui         $t6, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11df44) {
            ctx->pc = 0x11DF54u;
            goto label_11df54;
        }
    }
    ctx->pc = 0x11DF4Cu;
    // 0x11df4c: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x11df4cu;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x11df50: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x11df50u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_11df54:
    // 0x11df54: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11df54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11df58: 0x25ce358c  addiu       $t6, $t6, 0x358C
    ctx->pc = 0x11df58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13708));
    // 0x11df5c: 0x25ef3590  addiu       $t7, $t7, 0x3590
    ctx->pc = 0x11df5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13712));
    // 0x11df60: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x11df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11df64: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11df64u;
    { uint32_t bits = FAST_READ32(0x663590u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11df68: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x11df68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x11df6c: 0x460d0841  sub.s       $f1, $f1, $f13
    ctx->pc = 0x11df6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x11df70: 0x46010140  add.s       $f5, $f0, $f1
    ctx->pc = 0x11df70u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11df74: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11df74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11df78: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x11df78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_11df7c:
    // 0x11df7c: 0x3c0f3f2c  lui         $t7, 0x3F2C
    ctx->pc = 0x11df7cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16172 << 16));
    // 0x11df80: 0x35efa13f  ori         $t7, $t7, 0xA13F
    ctx->pc = 0x11df80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)41279);
    // 0x11df84: 0x1ed782a  slt         $t7, $t7, $t5
    ctx->pc = 0x11df84u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11df88: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11df88u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11df8c: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x11df8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x11df90: 0x25ad3594  addiu       $t5, $t5, 0x3594
    ctx->pc = 0x11df90u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 13716));
    // 0x11df94: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x11df94u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11df98: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x11df98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x11df9c: 0x46050902  mul.s       $f4, $f1, $f5
    ctx->pc = 0x11df9cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x11dfa0: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x11dfa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11dfa4: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11dfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dfa8: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x11dfa8u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11dfac: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11dfacu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11dfb0: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x11dfb0u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11dfb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11dfb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11dfb8: 0x25ad3598  addiu       $t5, $t5, 0x3598
    ctx->pc = 0x11dfb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 13720));
    // 0x11dfbc: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x11dfbcu;
    { uint32_t bits = FAST_READ32(0x663598u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11dfc0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x11dfc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11dfc4: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11dfc4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11dfc8: 0x25ad359c  addiu       $t5, $t5, 0x359C
    ctx->pc = 0x11dfc8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 13724));
    // 0x11dfcc: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x11dfccu;
    { uint32_t bits = FAST_READ32(0x66359Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11dfd0: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11dfd0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11dfd4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11dfd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11dfd8: 0x25ad35a0  addiu       $t5, $t5, 0x35A0
    ctx->pc = 0x11dfd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 13728));
    // 0x11dfdc: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x11dfdcu;
    { uint32_t bits = FAST_READ32(0x6635A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11dfe0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11dfe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11dfe4: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11dfe4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11dfe8: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x11dfe8u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11dfec: 0x25ad35a4  addiu       $t5, $t5, 0x35A4
    ctx->pc = 0x11dfecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 13732));
    // 0x11dff0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11dff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11dff4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x11dff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11dff8: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x11dff8u;
    { uint32_t bits = FAST_READ32(0x6635A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11dffc: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11dffcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11e000: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11e000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11e004: 0x25ad35a8  addiu       $t5, $t5, 0x35A8
    ctx->pc = 0x11e004u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 13736));
    // 0x11e008: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x11e008u;
    { uint32_t bits = FAST_READ32(0x6635A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e00c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11e00cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11e010: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11e010u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11e014: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x11e014u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e018: 0x25ad35ac  addiu       $t5, $t5, 0x35AC
    ctx->pc = 0x11e018u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 13740));
    // 0x11e01c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11e01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11e020: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x11e020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11e024: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x11e024u;
    { uint32_t bits = FAST_READ32(0x6635ACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e028: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11e028u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11e02c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11e02cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11e030: 0x25ad35b0  addiu       $t5, $t5, 0x35B0
    ctx->pc = 0x11e030u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 13744));
    // 0x11e034: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x11e034u;
    { uint32_t bits = FAST_READ32(0x6635B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e038: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11e038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11e03c: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11e03cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11e040: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x11e040u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e044: 0x25ad35b4  addiu       $t5, $t5, 0x35B4
    ctx->pc = 0x11e044u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 13748));
    // 0x11e048: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11e048u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11e04c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x11e04cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11e050: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x11e050u;
    { uint32_t bits = FAST_READ32(0x6635B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e054: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11e054u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11e058: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11e058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11e05c: 0x25ad35b8  addiu       $t5, $t5, 0x35B8
    ctx->pc = 0x11e05cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 13752));
    // 0x11e060: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x11e060u;
    { uint32_t bits = FAST_READ32(0x6635B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e064: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11e064u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11e068: 0x3c0d0066  lui         $t5, 0x66
    ctx->pc = 0x11e068u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)102 << 16));
    // 0x11e06c: 0x448e1000  mtc1        $t6, $f2
    ctx->pc = 0x11e06cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e070: 0x25ad35bc  addiu       $t5, $t5, 0x35BC
    ctx->pc = 0x11e070u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 13756));
    // 0x11e074: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x11e074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x11e078: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x11e078u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x11e07c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x11e07cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11e080: 0x25ce35c0  addiu       $t6, $t6, 0x35C0
    ctx->pc = 0x11e080u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13760));
    // 0x11e084: 0xc5c30000  lwc1        $f3, 0x0($t6)
    ctx->pc = 0x11e084u;
    { uint32_t bits = FAST_READ32(0x6635C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11e088: 0xc5a20000  lwc1        $f2, 0x0($t5)
    ctx->pc = 0x11e088u;
    { uint32_t bits = FAST_READ32(0x6635BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e08c: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x11e08cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
    // 0x11e090: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11e090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11e094: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x11e094u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e098: 0x3c0c0066  lui         $t4, 0x66
    ctx->pc = 0x11e098u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)102 << 16));
    // 0x11e09c: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x11e09cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x11e0a0: 0x258c35c4  addiu       $t4, $t4, 0x35C4
    ctx->pc = 0x11e0a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 13764));
    // 0x11e0a4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x11e0a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x11e0a8: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x11e0a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x11e0ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11e0acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11e0b0: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x11e0b0u;
    { uint32_t bits = FAST_READ32(0x6635C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11e0b4: 0x46006818  adda.s      $f13, $f0
    ctx->pc = 0x11e0b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[13], ctx->f[0]));
    // 0x11e0b8: 0x460120dc  madd.s      $f3, $f4, $f1
    ctx->pc = 0x11e0b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x11e0bc: 0x46032800  add.s       $f0, $f5, $f3
    ctx->pc = 0x11e0bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x11e0c0: 0x11e00015  beqz        $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x11E0C0u;
    {
        const bool branch_taken_0x11e0c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0C0u;
        // 0x11e0c4: 0x440e0000  mfc1        $t6, $f0 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0c0) {
            ctx->pc = 0x11E118u;
            goto label_11e118;
        }
    }
    ctx->pc = 0x11E0C8u;
    // 0x11e0c8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x11e0c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11e0cc: 0xb7783  sra         $t6, $t3, 30
    ctx->pc = 0x11e0ccu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 11), 30));
    // 0x11e0d0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x11e0d0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x11e0d4: 0x31ce0002  andi        $t6, $t6, 0x2
    ctx->pc = 0x11e0d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
    // 0x11e0d8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x11e0d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x11e0dc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11e0dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e0e0: 0x1ee7823  subu        $t7, $t7, $t6
    ctx->pc = 0x11e0e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x11e0e4: 0x448f1000  mtc1        $t7, $f2
    ctx->pc = 0x11e0e4u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e0e8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x11e0e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x11e0ec: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x11e0ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x11e0f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x11e0f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x11e0f4: 0x0  nop
    ctx->pc = 0x11e0f4u;
    // NOP
    // 0x11e0f8: 0x0  nop
    ctx->pc = 0x11e0f8u;
    // NOP
    // 0x11e0fc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x11e0fcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x11e100: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x11e100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x11e104: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x11e104u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x11e108: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11e108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11e10c: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x11e10cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x11e110: 0x1000ff79  b           . + 4 + (-0x87 << 2)
    ctx->pc = 0x11E110u;
    {
        const bool branch_taken_0x11e110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E110u;
        // 0x11e114: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e110) {
            ctx->pc = 0x11DEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11def8;
        }
    }
    ctx->pc = 0x11E118u;
label_11e118:
    // 0x11e118: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11e118u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e11c: 0x108fff76  beq         $a0, $t7, . + 4 + (-0x8A << 2)
    ctx->pc = 0x11E11Cu;
    {
        const bool branch_taken_0x11e11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x11E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E11Cu;
        // 0x11e120: 0x3c0c0066  lui         $t4, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e11c) {
            ctx->pc = 0x11DEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11def8;
        }
    }
    ctx->pc = 0x11E124u;
    // 0x11e124: 0x240df000  addiu       $t5, $zero, -0x1000
    ctx->pc = 0x11e124u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11e128: 0x258c3588  addiu       $t4, $t4, 0x3588
    ctx->pc = 0x11e128u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 13704));
    // 0x11e12c: 0xc5820000  lwc1        $f2, 0x0($t4)
    ctx->pc = 0x11e12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11e130: 0x0  nop
    ctx->pc = 0x11e130u;
    // NOP
    // 0x11e134: 0x0  nop
    ctx->pc = 0x11e134u;
    // NOP
    // 0x11e138: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x11e138u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x11e13c: 0x1cd6024  and         $t4, $t6, $t5
    ctx->pc = 0x11e13cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) & GPR_U64(ctx, 13));
    // 0x11e140: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x11e140u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e144: 0x3c0c0066  lui         $t4, 0x66
    ctx->pc = 0x11e144u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)102 << 16));
    // 0x11e148: 0x258c3584  addiu       $t4, $t4, 0x3584
    ctx->pc = 0x11e148u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 13700));
    // 0x11e14c: 0x46050801  sub.s       $f0, $f1, $f5
    ctx->pc = 0x11e14cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x11e150: 0x440f1000  mfc1        $t7, $f2
    ctx->pc = 0x11e150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11e154: 0x1ed7024  and         $t6, $t7, $t5
    ctx->pc = 0x11e154u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11e158: 0x46001b01  sub.s       $f12, $f3, $f0
    ctx->pc = 0x11e158u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x11e15c: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x11e15cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e160: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x11e160u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11e164: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x11e164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11e168: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x11e168u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x11e16c: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x11e16cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e170: 0x460c005c  madd.s      $f1, $f0, $f12
    ctx->pc = 0x11e170u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[12]));
    // 0x11e174: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x11e174u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11e178: 0x1000ff5f  b           . + 4 + (-0xA1 << 2)
    ctx->pc = 0x11E178u;
    {
        const bool branch_taken_0x11e178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E178u;
        // 0x11e17c: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e178) {
            ctx->pc = 0x11DEF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11def8;
        }
    }
    ctx->pc = 0x11E180u;
}
