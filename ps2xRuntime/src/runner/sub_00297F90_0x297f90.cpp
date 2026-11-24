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

// Function: sub_00297F90
// Address: 0x297f90 - 0x29803c
void sub_00297F90_0x297f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297F90_0x297f90");
#endif

    switch (ctx->pc) {
        case 0x297fc0u: goto label_297fc0;
        default: break;
    }

    ctx->pc = 0x297f90u;

    // 0x297f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x297f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297f98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x297f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x297fa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fa4: 0x9084000a  lbu         $a0, 0xA($a0)
    ctx->pc = 0x297fa4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x297fa8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x297FA8u;
    {
        const bool branch_taken_0x297fa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x297fa8) {
            ctx->pc = 0x297FC0u;
            goto label_297fc0;
        }
    }
    ctx->pc = 0x297FB0u;
    // 0x297fb0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x297fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x297fb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fb8: 0xc0b9ea4  jal         func_2E7A90
    ctx->pc = 0x297FB8u;
    SET_GPR_U32(ctx, 31, 0x297FC0u);
    ctx->pc = 0x297FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297FB8u;
    // 0x297fbc: 0x2484b7f0  addiu       $a0, $a0, -0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7A90u, 0x297FB8u, 0x297FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297FC0u;
label_297fc0:
    // 0x297fc0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x297fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x297fc4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x297fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297fc8: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x297fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x297fcc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x297fccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x297fd0: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x297fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x297fd4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x297fd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297fd8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x297fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x297fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297fe0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x297fe0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x297fe4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x297fe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x297fe8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x297fe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297fec: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x297FECu;
    {
        const bool branch_taken_0x297fec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x297fec) {
            ctx->pc = 0x298004u;
            goto label_298004;
        }
    }
    ctx->pc = 0x297FF4u;
    // 0x297ff4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x297ff4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x297ff8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x297ff8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x297ffc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x297FFCu;
    {
        const bool branch_taken_0x297ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FFCu;
        // 0x298000: 0xa20404ef  sb          $a0, 0x4EF($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1263), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ffc) {
            ctx->pc = 0x298020u;
            goto label_298020;
        }
    }
    ctx->pc = 0x298004u;
label_298004:
    // 0x298004: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x298004u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298008: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x298008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29800c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29800cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x298010: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x298010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x298014: 0x0  nop
    ctx->pc = 0x298014u;
    // NOP
    // 0x298018: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x298018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29801c: 0xa20404ef  sb          $a0, 0x4EF($s0)
    ctx->pc = 0x29801cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1263), (uint8_t)GPR_U32(ctx, 4));
label_298020:
    // 0x298020: 0x8e0306b4  lw          $v1, 0x6B4($s0)
    ctx->pc = 0x298020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    // 0x298024: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x298024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x298028: 0xae0306b4  sw          $v1, 0x6B4($s0)
    ctx->pc = 0x298028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1716), GPR_U32(ctx, 3));
    // 0x29802c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29802cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298034: 0x3e00008  jr          $ra
    ctx->pc = 0x298034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298034u;
        // 0x298038: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29803Cu;
}
