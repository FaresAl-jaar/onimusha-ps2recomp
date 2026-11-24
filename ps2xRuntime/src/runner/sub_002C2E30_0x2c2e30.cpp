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

// Function: sub_002C2E30
// Address: 0x2c2e30 - 0x2c3014
void sub_002C2E30_0x2c2e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2E30_0x2c2e30");
#endif

    switch (ctx->pc) {
        case 0x2c2fe0u: goto label_2c2fe0;
        default: break;
    }

    ctx->pc = 0x2c2e30u;

    // 0x2c2e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c2e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c2e38: 0x90c90002  lbu         $t1, 0x2($a2)
    ctx->pc = 0x2c2e38u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c2e3c: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2c2e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c2e40: 0x11200027  beqz        $t1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C2E40u;
    {
        const bool branch_taken_0x2c2e40 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E40u;
        // 0x2c2e44: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e40) {
            ctx->pc = 0x2C2EE0u;
            goto label_2c2ee0;
        }
    }
    ctx->pc = 0x2C2E48u;
    // 0x2c2e48: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x2c2e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2c2e4c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2E4Cu;
    {
        const bool branch_taken_0x2c2e4c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E4Cu;
        // 0x2c2e50: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e4c) {
            ctx->pc = 0x2C2E60u;
            goto label_2c2e60;
        }
    }
    ctx->pc = 0x2C2E54u;
    // 0x2c2e54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2e54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2e58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2E58u;
    {
        const bool branch_taken_0x2c2e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2E58u;
        // 0x2c2e5c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2e58) {
            ctx->pc = 0x2C2E78u;
            goto label_2c2e78;
        }
    }
    ctx->pc = 0x2C2E60u;
label_2c2e60:
    // 0x2c2e60: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c2e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c2e64: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2c2e64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2c2e68: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2c2e68u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2e6c: 0x0  nop
    ctx->pc = 0x2c2e6cu;
    // NOP
    // 0x2c2e70: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c2e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c2e74: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c2e74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c2e78:
    // 0x2c2e78: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c2e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c2e7c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2c2e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2c2e80: 0x34678889  ori         $a3, $v1, 0x8889
    ctx->pc = 0x2c2e80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2c2e84: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2c2e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2c2e88: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2c2e88u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2e8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2e90: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c2e90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c2e94: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c2e94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c2e98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c2e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2e9c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2E9Cu;
    {
        const bool branch_taken_0x2c2e9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2e9c) {
            ctx->pc = 0x2C2EB4u;
            goto label_2c2eb4;
        }
    }
    ctx->pc = 0x2C2EA4u;
    // 0x2c2ea4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c2ea4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c2ea8: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2c2ea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c2eac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2EACu;
    {
        const bool branch_taken_0x2c2eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EACu;
        // 0x2c2eb0: 0x7182b  sltu        $v1, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2eac) {
            ctx->pc = 0x2C2ED0u;
            goto label_2c2ed0;
        }
    }
    ctx->pc = 0x2C2EB4u;
label_2c2eb4:
    // 0x2c2eb4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c2eb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c2eb8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2c2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2c2ebc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c2ebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c2ec0: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2c2ec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c2ec4: 0x0  nop
    ctx->pc = 0x2c2ec4u;
    // NOP
    // 0x2c2ec8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2c2ec8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2c2ecc: 0x7182b  sltu        $v1, $zero, $a3
    ctx->pc = 0x2c2eccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_2c2ed0:
    // 0x2c2ed0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c2ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c2ed4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2ED4u;
    {
        const bool branch_taken_0x2c2ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2ed4) {
            ctx->pc = 0x2C2EE0u;
            goto label_2c2ee0;
        }
    }
    ctx->pc = 0x2C2EDCu;
    // 0x2c2edc: 0x640a0001  daddiu      $t2, $zero, 0x1
    ctx->pc = 0x2c2edcu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2c2ee0:
    // 0x2c2ee0: 0x11400003  beqz        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2EE0u;
    {
        const bool branch_taken_0x2c2ee0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EE0u;
        // 0x2c2ee4: 0x94880056  lhu         $t0, 0x56($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 86)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ee0) {
            ctx->pc = 0x2C2EF0u;
            goto label_2c2ef0;
        }
    }
    ctx->pc = 0x2C2EE8u;
    // 0x2c2ee8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C2EE8u;
    {
        const bool branch_taken_0x2c2ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EE8u;
        // 0x2c2eec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ee8) {
            ctx->pc = 0x2C2F74u;
            goto label_2c2f74;
        }
    }
    ctx->pc = 0x2C2EF0u;
label_2c2ef0:
    // 0x2c2ef0: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x2c2ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2c2ef4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2EF4u;
    {
        const bool branch_taken_0x2c2ef4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2C2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2EF4u;
        // 0x2c2ef8: 0x33842  srl         $a3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2ef4) {
            ctx->pc = 0x2C2F08u;
            goto label_2c2f08;
        }
    }
    ctx->pc = 0x2C2EFCu;
    // 0x2c2efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2f00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2F00u;
    {
        const bool branch_taken_0x2c2f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F00u;
        // 0x2c2f04: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f00) {
            ctx->pc = 0x2C2F20u;
            goto label_2c2f20;
        }
    }
    ctx->pc = 0x2C2F08u;
label_2c2f08:
    // 0x2c2f08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2c2f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c2f0c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2c2f0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2c2f10: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2c2f10u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2f14: 0x0  nop
    ctx->pc = 0x2c2f14u;
    // NOP
    // 0x2c2f18: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c2f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c2f1c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c2f1cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c2f20:
    // 0x2c2f20: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c2f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c2f24: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2c2f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2c2f28: 0x34678889  ori         $a3, $v1, 0x8889
    ctx->pc = 0x2c2f28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2c2f2c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2c2f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2c2f30: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2c2f30u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c2f34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c2f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c2f38: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c2f38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c2f3c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c2f3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c2f40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c2f40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c2f44: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C2F44u;
    {
        const bool branch_taken_0x2c2f44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c2f44) {
            ctx->pc = 0x2C2F5Cu;
            goto label_2c2f5c;
        }
    }
    ctx->pc = 0x2C2F4Cu;
    // 0x2c2f4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c2f4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c2f50: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2c2f50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c2f54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2F54u;
    {
        const bool branch_taken_0x2c2f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2f54) {
            ctx->pc = 0x2C2F74u;
            goto label_2c2f74;
        }
    }
    ctx->pc = 0x2C2F5Cu;
label_2c2f5c:
    // 0x2c2f5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c2f5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c2f60: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2c2f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2c2f64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c2f64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c2f68: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2c2f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2c2f6c: 0x0  nop
    ctx->pc = 0x2c2f6cu;
    // NOP
    // 0x2c2f70: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2c2f70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_2c2f74:
    // 0x2c2f74: 0x107182b  sltu        $v1, $t0, $a3
    ctx->pc = 0x2c2f74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2c2f78: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2F78u;
    {
        const bool branch_taken_0x2c2f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2f78) {
            ctx->pc = 0x2C2F88u;
            goto label_2c2f88;
        }
    }
    ctx->pc = 0x2C2F80u;
    // 0x2c2f80: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c2f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c2f84: 0x0  nop
    ctx->pc = 0x2c2f84u;
    // NOP
label_2c2f88:
    // 0x2c2f88: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C2F88u;
    {
        const bool branch_taken_0x2c2f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2f88) {
            ctx->pc = 0x2C3000u;
            goto label_2c3000;
        }
    }
    ctx->pc = 0x2C2F90u;
    // 0x2c2f90: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c2f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c2f94: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C2F94u;
    {
        const bool branch_taken_0x2c2f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F94u;
        // 0x2c2f98: 0x90c60003  lbu         $a2, 0x3($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f94) {
            ctx->pc = 0x2C2FE8u;
            goto label_2c2fe8;
        }
    }
    ctx->pc = 0x2C2F9Cu;
    // 0x2c2f9c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2F9Cu;
    {
        const bool branch_taken_0x2c2f9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2F9Cu;
        // 0x2c2fa0: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2f9c) {
            ctx->pc = 0x2C2FD8u;
            goto label_2c2fd8;
        }
    }
    ctx->pc = 0x2C2FA4u;
    // 0x2c2fa4: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c2fa4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c2fa8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c2fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c2fac: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c2facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2fb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2fb4: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c2fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c2fb8: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c2fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c2fbc: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c2fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2fc0: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c2fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2fc4: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c2fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c2fc8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2fcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c2fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2fd0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2FD0u;
    {
        const bool branch_taken_0x2c2fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2FD0u;
        // 0x2c2fd4: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2fd0) {
            ctx->pc = 0x2C2FF8u;
            goto label_2c2ff8;
        }
    }
    ctx->pc = 0x2C2FD8u;
label_2c2fd8:
    // 0x2c2fd8: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C2FD8u;
    SET_GPR_U32(ctx, 31, 0x2C2FE0u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C2FD8u, 0x2C2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2FE0u;
label_2c2fe0:
    // 0x2c2fe0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2FE0u;
    {
        const bool branch_taken_0x2c2fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2fe0) {
            ctx->pc = 0x2C2FF0u;
            goto label_2c2ff0;
        }
    }
    ctx->pc = 0x2C2FE8u;
label_2c2fe8:
    // 0x2c2fe8: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c2fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c2fec: 0x0  nop
    ctx->pc = 0x2c2fecu;
    // NOP
label_2c2ff0:
    // 0x2c2ff0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ff4: 0x0  nop
    ctx->pc = 0x2c2ff4u;
    // NOP
label_2c2ff8:
    // 0x2c2ff8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2FF8u;
    {
        const bool branch_taken_0x2c2ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2ff8) {
            ctx->pc = 0x2C3008u;
            goto label_2c3008;
        }
    }
    ctx->pc = 0x2C3000u;
label_2c3000:
    // 0x2c3000: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x2c3000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2c3004: 0x0  nop
    ctx->pc = 0x2c3004u;
    // NOP
label_2c3008:
    // 0x2c3008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c300c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C300Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C300Cu;
        // 0x2c3010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C300Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3014u;
}
