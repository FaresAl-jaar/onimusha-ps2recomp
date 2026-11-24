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

// Function: sub_002D2BA0
// Address: 0x2d2ba0 - 0x2d2de0
void sub_002D2BA0_0x2d2ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2BA0_0x2d2ba0");
#endif

    ctx->pc = 0x2d2ba0u;

    // 0x2d2ba0: 0x9085001a  lbu         $a1, 0x1A($a0)
    ctx->pc = 0x2d2ba0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x2d2ba4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d2ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d2ba8: 0x10a30047  beq         $a1, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2D2BA8u;
    {
        const bool branch_taken_0x2d2ba8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BA8u;
        // 0x2d2bac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2ba8) {
            ctx->pc = 0x2D2CC8u;
            goto label_2d2cc8;
        }
    }
    ctx->pc = 0x2D2BB0u;
    // 0x2d2bb0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2BB0u;
    {
        const bool branch_taken_0x2d2bb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d2bb0) {
            ctx->pc = 0x2D2BC0u;
            goto label_2d2bc0;
        }
    }
    ctx->pc = 0x2D2BB8u;
    // 0x2d2bb8: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2D2BB8u;
    {
        const bool branch_taken_0x2d2bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2bb8) {
            ctx->pc = 0x2D2DD8u;
            goto label_2d2dd8;
        }
    }
    ctx->pc = 0x2D2BC0u;
label_2d2bc0:
    // 0x2d2bc0: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x2d2bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d2bc4: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2d2bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d2bc8: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x2d2bc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2d2bcc: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D2BCCu;
    {
        const bool branch_taken_0x2d2bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2bcc) {
            ctx->pc = 0x2D2CB8u;
            goto label_2d2cb8;
        }
    }
    ctx->pc = 0x2D2BD4u;
    // 0x2d2bd4: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D2BD4u;
    {
        const bool branch_taken_0x2d2bd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2bd4) {
            ctx->pc = 0x2D2C50u;
            goto label_2d2c50;
        }
    }
    ctx->pc = 0x2D2BDCu;
    // 0x2d2bdc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2BDCu;
    {
        const bool branch_taken_0x2d2bdc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2D2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BDCu;
        // 0x2d2be0: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2bdc) {
            ctx->pc = 0x2D2BF0u;
            goto label_2d2bf0;
        }
    }
    ctx->pc = 0x2D2BE4u;
    // 0x2d2be4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d2be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2be8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2BE8u;
    {
        const bool branch_taken_0x2d2be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BE8u;
        // 0x2d2bec: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2be8) {
            ctx->pc = 0x2D2C08u;
            goto label_2d2c08;
        }
    }
    ctx->pc = 0x2D2BF0u;
label_2d2bf0:
    // 0x2d2bf0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d2bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d2bf4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2d2bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2d2bf8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d2bf8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2bfc: 0x0  nop
    ctx->pc = 0x2d2bfcu;
    // NOP
    // 0x2d2c00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2d2c00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d2c04: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2d2c04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2d2c08:
    // 0x2d2c08: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2C08u;
    {
        const bool branch_taken_0x2d2c08 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2D2C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C08u;
        // 0x2d2c0c: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c08) {
            ctx->pc = 0x2D2C1Cu;
            goto label_2d2c1c;
        }
    }
    ctx->pc = 0x2D2C10u;
    // 0x2d2c10: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2d2c10u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2c14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2C14u;
    {
        const bool branch_taken_0x2d2c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C14u;
        // 0x2d2c18: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c14) {
            ctx->pc = 0x2D2C34u;
            goto label_2d2c34;
        }
    }
    ctx->pc = 0x2D2C1Cu;
label_2d2c1c:
    // 0x2d2c1c: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x2d2c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2d2c20: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2d2c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2d2c24: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d2c24u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2c28: 0x0  nop
    ctx->pc = 0x2d2c28u;
    // NOP
    // 0x2d2c2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2c30: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d2c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d2c34:
    // 0x2d2c34: 0x0  nop
    ctx->pc = 0x2d2c34u;
    // NOP
    // 0x2d2c38: 0x0  nop
    ctx->pc = 0x2d2c38u;
    // NOP
    // 0x2d2c3c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x2d2c3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d2c40: 0x0  nop
    ctx->pc = 0x2d2c40u;
    // NOP
    // 0x2d2c44: 0x0  nop
    ctx->pc = 0x2d2c44u;
    // NOP
    // 0x2d2c48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2C48u;
    {
        const bool branch_taken_0x2d2c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2c48) {
            ctx->pc = 0x2D2C58u;
            goto label_2d2c58;
        }
    }
    ctx->pc = 0x2D2C50u;
label_2d2c50:
    // 0x2d2c50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2d2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2d2c54: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2d2c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2d2c58:
    // 0x2d2c58: 0x3c0542fe  lui         $a1, 0x42FE
    ctx->pc = 0x2d2c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17150 << 16));
    // 0x2d2c5c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2d2c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2d2c60: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2d2c60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2c64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d2c64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2c68: 0x0  nop
    ctx->pc = 0x2d2c68u;
    // NOP
    // 0x2d2c6c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d2c6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d2c70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d2c70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2c74: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2C74u;
    {
        const bool branch_taken_0x2d2c74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2c74) {
            ctx->pc = 0x2D2C8Cu;
            goto label_2d2c8c;
        }
    }
    ctx->pc = 0x2D2C7Cu;
    // 0x2d2c7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d2c7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d2c80: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2d2c80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d2c84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2C84u;
    {
        const bool branch_taken_0x2d2c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2C84u;
        // 0x2d2c88: 0xa0850044  sb          $a1, 0x44($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c84) {
            ctx->pc = 0x2D2CA8u;
            goto label_2d2ca8;
        }
    }
    ctx->pc = 0x2D2C8Cu;
label_2d2c8c:
    // 0x2d2c8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d2c8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d2c90: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d2c94: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d2c94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d2c98: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2d2c98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d2c9c: 0x0  nop
    ctx->pc = 0x2d2c9cu;
    // NOP
    // 0x2d2ca0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2d2ca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2d2ca4: 0xa0850044  sb          $a1, 0x44($a0)
    ctx->pc = 0x2d2ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 5));
label_2d2ca8:
    // 0x2d2ca8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2d2ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d2cac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d2cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d2cb0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2D2CB0u;
    {
        const bool branch_taken_0x2d2cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CB0u;
        // 0x2d2cb4: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2cb0) {
            ctx->pc = 0x2D2DD8u;
            goto label_2d2dd8;
        }
    }
    ctx->pc = 0x2D2CB8u;
label_2d2cb8:
    // 0x2d2cb8: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2d2cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2d2cbc: 0xa0830044  sb          $v1, 0x44($a0)
    ctx->pc = 0x2d2cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2cc0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2D2CC0u;
    {
        const bool branch_taken_0x2d2cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CC0u;
        // 0x2d2cc4: 0xa080001a  sb          $zero, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2cc0) {
            ctx->pc = 0x2D2DD8u;
            goto label_2d2dd8;
        }
    }
    ctx->pc = 0x2D2CC8u;
label_2d2cc8:
    // 0x2d2cc8: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x2d2cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d2ccc: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2d2cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d2cd0: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x2d2cd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2d2cd4: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D2CD4u;
    {
        const bool branch_taken_0x2d2cd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2cd4) {
            ctx->pc = 0x2D2DD0u;
            goto label_2d2dd0;
        }
    }
    ctx->pc = 0x2D2CDCu;
    // 0x2d2cdc: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D2CDCu;
    {
        const bool branch_taken_0x2d2cdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2cdc) {
            ctx->pc = 0x2D2D58u;
            goto label_2d2d58;
        }
    }
    ctx->pc = 0x2D2CE4u;
    // 0x2d2ce4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2CE4u;
    {
        const bool branch_taken_0x2d2ce4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2D2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CE4u;
        // 0x2d2ce8: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2ce4) {
            ctx->pc = 0x2D2CF8u;
            goto label_2d2cf8;
        }
    }
    ctx->pc = 0x2D2CECu;
    // 0x2d2cec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d2cecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2cf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2CF0u;
    {
        const bool branch_taken_0x2d2cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2CF0u;
        // 0x2d2cf4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2cf0) {
            ctx->pc = 0x2D2D10u;
            goto label_2d2d10;
        }
    }
    ctx->pc = 0x2D2CF8u;
label_2d2cf8:
    // 0x2d2cf8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d2cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d2cfc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2d2cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2d2d00: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d2d00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2d04: 0x0  nop
    ctx->pc = 0x2d2d04u;
    // NOP
    // 0x2d2d08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2d2d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d2d0c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2d2d0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2d2d10:
    // 0x2d2d10: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2D10u;
    {
        const bool branch_taken_0x2d2d10 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2D2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D10u;
        // 0x2d2d14: 0x62842  srl         $a1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d10) {
            ctx->pc = 0x2D2D24u;
            goto label_2d2d24;
        }
    }
    ctx->pc = 0x2D2D18u;
    // 0x2d2d18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2d2d18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2d1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2D1Cu;
    {
        const bool branch_taken_0x2d2d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D1Cu;
        // 0x2d2d20: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d1c) {
            ctx->pc = 0x2D2D3Cu;
            goto label_2d2d3c;
        }
    }
    ctx->pc = 0x2D2D24u;
label_2d2d24:
    // 0x2d2d24: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x2d2d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2d2d28: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2d2d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2d2d2c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2d2d2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2d30: 0x0  nop
    ctx->pc = 0x2d2d30u;
    // NOP
    // 0x2d2d34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2d34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2d38: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d2d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d2d3c:
    // 0x2d2d3c: 0x0  nop
    ctx->pc = 0x2d2d3cu;
    // NOP
    // 0x2d2d40: 0x0  nop
    ctx->pc = 0x2d2d40u;
    // NOP
    // 0x2d2d44: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x2d2d44u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d2d48: 0x0  nop
    ctx->pc = 0x2d2d48u;
    // NOP
    // 0x2d2d4c: 0x0  nop
    ctx->pc = 0x2d2d4cu;
    // NOP
    // 0x2d2d50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2D50u;
    {
        const bool branch_taken_0x2d2d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2d50) {
            ctx->pc = 0x2D2D60u;
            goto label_2d2d60;
        }
    }
    ctx->pc = 0x2D2D58u;
label_2d2d58:
    // 0x2d2d58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2d2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2d2d5c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2d2d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2d2d60:
    // 0x2d2d60: 0x3c0542fe  lui         $a1, 0x42FE
    ctx->pc = 0x2d2d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17150 << 16));
    // 0x2d2d64: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2d2d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2d2d68: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2d2d68u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2d6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d2d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2d70: 0x0  nop
    ctx->pc = 0x2d2d70u;
    // NOP
    // 0x2d2d74: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d2d74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d2d78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d2d78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2d7c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2D7Cu;
    {
        const bool branch_taken_0x2d2d7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2d7c) {
            ctx->pc = 0x2D2D94u;
            goto label_2d2d94;
        }
    }
    ctx->pc = 0x2D2D84u;
    // 0x2d2d84: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d2d84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d2d88: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2d2d88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d2d8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2D8Cu;
    {
        const bool branch_taken_0x2d2d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2D8Cu;
        // 0x2d2d90: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2d8c) {
            ctx->pc = 0x2D2DB0u;
            goto label_2d2db0;
        }
    }
    ctx->pc = 0x2D2D94u;
label_2d2d94:
    // 0x2d2d94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d2d94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d2d98: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d2d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d2d9c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d2d9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d2da0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2d2da0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2d2da4: 0x0  nop
    ctx->pc = 0x2d2da4u;
    // NOP
    // 0x2d2da8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x2d2da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2d2dac: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2d2dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2d2db0:
    // 0x2d2db0: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x2d2db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2d2db4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2d2db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d2db8: 0xa0830044  sb          $v1, 0x44($a0)
    ctx->pc = 0x2d2db8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2dbc: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2d2dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2d2dc0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d2dc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2DC4u;
    {
        const bool branch_taken_0x2d2dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DC4u;
        // 0x2d2dc8: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2dc4) {
            ctx->pc = 0x2D2DD8u;
            goto label_2d2dd8;
        }
    }
    ctx->pc = 0x2D2DCCu;
    // 0x2d2dcc: 0x0  nop
    ctx->pc = 0x2d2dccu;
    // NOP
label_2d2dd0:
    // 0x2d2dd0: 0xa0800044  sb          $zero, 0x44($a0)
    ctx->pc = 0x2d2dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d2dd4: 0xa080001a  sb          $zero, 0x1A($a0)
    ctx->pc = 0x2d2dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 0));
label_2d2dd8:
    // 0x2d2dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2DE0u;
}
