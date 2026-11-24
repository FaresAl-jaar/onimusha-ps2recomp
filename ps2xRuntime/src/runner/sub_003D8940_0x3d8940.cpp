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

// Function: sub_003D8940
// Address: 0x3d8940 - 0x3d89e0
void sub_003D8940_0x3d8940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8940_0x3d8940");
#endif

    ctx->pc = 0x3d8940u;

    // 0x3d8940: 0xdf838448  ld          $v1, -0x7BB8($gp)
    ctx->pc = 0x3d8940u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935624)));
    // 0x3d8944: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d8944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d8948: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x3d8948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3d894c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x3d894cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x3d8950: 0x90832bda  lbu         $v1, 0x2BDA($a0)
    ctx->pc = 0x3d8950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11226)));
    // 0x3d8954: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3d8954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3d8958: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3d8958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3d895c: 0x94630008  lhu         $v1, 0x8($v1)
    ctx->pc = 0x3d895cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d8960: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8960u;
    {
        const bool branch_taken_0x3d8960 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3D8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8960u;
        // 0x3d8964: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8960) {
            ctx->pc = 0x3D8974u;
            goto label_3d8974;
        }
    }
    ctx->pc = 0x3D8968u;
    // 0x3d8968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d8968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d896c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D896Cu;
    {
        const bool branch_taken_0x3d896c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D896Cu;
        // 0x3d8970: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d896c) {
            ctx->pc = 0x3D898Cu;
            goto label_3d898c;
        }
    }
    ctx->pc = 0x3D8974u;
label_3d8974:
    // 0x3d8974: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d8974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d8978: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3d8978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3d897c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3d897cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d8980: 0x0  nop
    ctx->pc = 0x3d8980u;
    // NOP
    // 0x3d8984: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d8984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3d8988: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d8988u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d898c:
    // 0x3d898c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3d898cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d8990: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3d8990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3d8994: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d8994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d8998: 0x0  nop
    ctx->pc = 0x3d8998u;
    // NOP
    // 0x3d899c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3d899cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3d89a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d89a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d89a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D89A4u;
    {
        const bool branch_taken_0x3d89a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d89a4) {
            ctx->pc = 0x3D89BCu;
            goto label_3d89bc;
        }
    }
    ctx->pc = 0x3D89ACu;
    // 0x3d89ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d89acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d89b0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3d89b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3d89b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D89B4u;
    {
        const bool branch_taken_0x3d89b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D89B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89B4u;
        // 0x3d89b8: 0xac852bf4  sw          $a1, 0x2BF4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11252), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d89b4) {
            ctx->pc = 0x3D89D8u;
            goto label_3d89d8;
        }
    }
    ctx->pc = 0x3D89BCu;
label_3d89bc:
    // 0x3d89bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d89bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d89c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d89c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d89c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d89c8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3d89c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3d89cc: 0x0  nop
    ctx->pc = 0x3d89ccu;
    // NOP
    // 0x3d89d0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3d89d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3d89d4: 0xac852bf4  sw          $a1, 0x2BF4($a0)
    ctx->pc = 0x3d89d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11252), GPR_U32(ctx, 5));
label_3d89d8:
    // 0x3d89d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D89D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D89D8u;
        // 0x3d89dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D89D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D89E0u;
}
