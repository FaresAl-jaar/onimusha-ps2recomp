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

// Function: sub_003B8E10
// Address: 0x3b8e10 - 0x3b9010
void sub_003B8E10_0x3b8e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8E10_0x3b8e10");
#endif

    switch (ctx->pc) {
        case 0x3b8e74u: goto label_3b8e74;
        case 0x3b9000u: goto label_3b9000;
        default: break;
    }

    ctx->pc = 0x3b8e10u;

    // 0x3b8e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b8e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b8e14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b8e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b8e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b8e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b8e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b8e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b8e20: 0x90852b55  lbu         $a1, 0x2B55($a0)
    ctx->pc = 0x3b8e20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11093)));
    // 0x3b8e24: 0x10a3006e  beq         $a1, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x3B8E24u;
    {
        const bool branch_taken_0x3b8e24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8E24u;
        // 0x3b8e28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8e24) {
            ctx->pc = 0x3B8FE0u;
            goto label_3b8fe0;
        }
    }
    ctx->pc = 0x3B8E2Cu;
    // 0x3b8e2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b8e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b8e30: 0x10a30045  beq         $a1, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3B8E30u;
    {
        const bool branch_taken_0x3b8e30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B8E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8E30u;
        // 0x3b8e34: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8e30) {
            ctx->pc = 0x3B8F48u;
            goto label_3b8f48;
        }
    }
    ctx->pc = 0x3B8E38u;
    // 0x3b8e38: 0x10a30039  beq         $a1, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3B8E38u;
    {
        const bool branch_taken_0x3b8e38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b8e38) {
            ctx->pc = 0x3B8F20u;
            goto label_3b8f20;
        }
    }
    ctx->pc = 0x3B8E40u;
    // 0x3b8e40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b8e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b8e44: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B8E44u;
    {
        const bool branch_taken_0x3b8e44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b8e44) {
            ctx->pc = 0x3B8E98u;
            goto label_3b8e98;
        }
    }
    ctx->pc = 0x3B8E4Cu;
    // 0x3b8e4c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B8E4Cu;
    {
        const bool branch_taken_0x3b8e4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8e4c) {
            ctx->pc = 0x3B8E60u;
            goto label_3b8e60;
        }
    }
    ctx->pc = 0x3B8E54u;
    // 0x3b8e54: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x3B8E54u;
    {
        const bool branch_taken_0x3b8e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8e54) {
            ctx->pc = 0x3B9000u;
            goto label_3b9000;
        }
    }
    ctx->pc = 0x3B8E5Cu;
    // 0x3b8e5c: 0x0  nop
    ctx->pc = 0x3b8e5cu;
    // NOP
label_3b8e60:
    // 0x3b8e60: 0xa6002b46  sh          $zero, 0x2B46($s0)
    ctx->pc = 0x3b8e60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11078), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b8e64: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b8e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b8e68: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3b8e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3b8e6c: 0xc0eef00  jal         func_3BBC00
    ctx->pc = 0x3B8E6Cu;
    SET_GPR_U32(ctx, 31, 0x3B8E74u);
    ctx->pc = 0x3B8E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8E6Cu;
    // 0x3b8e70: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC00u, 0x3B8E6Cu, 0x3B8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8E74u;
label_3b8e74:
    // 0x3b8e74: 0x240300f1  addiu       $v1, $zero, 0xF1
    ctx->pc = 0x3b8e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x3b8e78: 0xa2032b57  sb          $v1, 0x2B57($s0)
    ctx->pc = 0x3b8e78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8e7c: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b8e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8e80: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b8e80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8e84: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b8e84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8e88: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b8e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b8e8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b8e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b8e90: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b8e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8e94: 0x0  nop
    ctx->pc = 0x3b8e94u;
    // NOP
label_3b8e98:
    // 0x3b8e98: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b8e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b8e9c: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x3B8E9Cu;
    {
        const bool branch_taken_0x3b8e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8E9Cu;
        // 0x3b8ea0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8e9c) {
            ctx->pc = 0x3B9000u;
            goto label_3b9000;
        }
    }
    ctx->pc = 0x3B8EA4u;
    // 0x3b8ea4: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3b8ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x3b8ea8: 0xa2042b57  sb          $a0, 0x2B57($s0)
    ctx->pc = 0x3b8ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8eac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3b8eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b8eb0: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b8eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8eb4: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3b8eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8eb8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3b8eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3b8ebc: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b8ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8ec0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3b8ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3b8ec4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b8ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b8ec8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b8ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b8ecc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b8eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3b8ed0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b8ed4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b8ed4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b8ed8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b8ed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b8edc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b8edcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b8ee0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8EE0u;
    {
        const bool branch_taken_0x3b8ee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8ee0) {
            ctx->pc = 0x3B8EF8u;
            goto label_3b8ef8;
        }
    }
    ctx->pc = 0x3B8EE8u;
    // 0x3b8ee8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8ee8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b8eec: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b8eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b8ef0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B8EF0u;
    {
        const bool branch_taken_0x3b8ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8EF0u;
        // 0x3b8ef4: 0xae042b88  sw          $a0, 0x2B88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8ef0) {
            ctx->pc = 0x3B8F14u;
            goto label_3b8f14;
        }
    }
    ctx->pc = 0x3B8EF8u;
label_3b8ef8:
    // 0x3b8ef8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b8ef8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b8efc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b8efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3b8f00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8f00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b8f04: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b8f04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b8f08: 0x0  nop
    ctx->pc = 0x3b8f08u;
    // NOP
    // 0x3b8f0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b8f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b8f10: 0xae042b88  sw          $a0, 0x2B88($s0)
    ctx->pc = 0x3b8f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
label_3b8f14:
    // 0x3b8f14: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b8f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b8f18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b8f1c: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b8f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b8f20:
    // 0x3b8f20: 0x8e032b88  lw          $v1, 0x2B88($s0)
    ctx->pc = 0x3b8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x3b8f24: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3B8F24u;
    {
        const bool branch_taken_0x3b8f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8F24u;
        // 0x3b8f28: 0x240300fa  addiu       $v1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f24) {
            ctx->pc = 0x3B9000u;
            goto label_3b9000;
        }
    }
    ctx->pc = 0x3B8F2Cu;
    // 0x3b8f2c: 0xa2032b57  sb          $v1, 0x2B57($s0)
    ctx->pc = 0x3b8f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8f30: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b8f30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8f34: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3b8f34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8f38: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b8f38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8f3c: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b8f3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b8f40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b8f44: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b8f44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
label_3b8f48:
    // 0x3b8f48: 0x92032b56  lbu         $v1, 0x2B56($s0)
    ctx->pc = 0x3b8f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11094)));
    // 0x3b8f4c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3B8F4Cu;
    {
        const bool branch_taken_0x3b8f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8F4Cu;
        // 0x3b8f50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8f4c) {
            ctx->pc = 0x3B9000u;
            goto label_3b9000;
        }
    }
    ctx->pc = 0x3B8F54u;
    // 0x3b8f54: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x3b8f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x3b8f58: 0xa2042b57  sb          $a0, 0x2B57($s0)
    ctx->pc = 0x3b8f58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8f5c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3b8f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b8f60: 0xa2002b59  sb          $zero, 0x2B59($s0)
    ctx->pc = 0x3b8f60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8f64: 0xa2040780  sb          $a0, 0x780($s0)
    ctx->pc = 0x3b8f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b8f68: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3b8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3b8f6c: 0xa2002b56  sb          $zero, 0x2B56($s0)
    ctx->pc = 0x3b8f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b8f70: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3b8f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3b8f74: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b8f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b8f78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b8f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b8f7c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3b8f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3b8f80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b8f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b8f84: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b8f84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b8f88: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b8f88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b8f8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b8f8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b8f90: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B8F90u;
    {
        const bool branch_taken_0x3b8f90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b8f90) {
            ctx->pc = 0x3B8FA8u;
            goto label_3b8fa8;
        }
    }
    ctx->pc = 0x3B8F98u;
    // 0x3b8f98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8f98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b8f9c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b8f9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b8fa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B8FA0u;
    {
        const bool branch_taken_0x3b8fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8FA0u;
        // 0x3b8fa4: 0xae042b88  sw          $a0, 0x2B88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8fa0) {
            ctx->pc = 0x3B8FC4u;
            goto label_3b8fc4;
        }
    }
    ctx->pc = 0x3B8FA8u;
label_3b8fa8:
    // 0x3b8fa8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b8fa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b8fac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3b8facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3b8fb0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b8fb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b8fb4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b8fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b8fb8: 0x0  nop
    ctx->pc = 0x3b8fb8u;
    // NOP
    // 0x3b8fbc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b8fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b8fc0: 0xae042b88  sw          $a0, 0x2B88($s0)
    ctx->pc = 0x3b8fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11144), GPR_U32(ctx, 4));
label_3b8fc4:
    // 0x3b8fc4: 0x92032b4b  lbu         $v1, 0x2B4B($s0)
    ctx->pc = 0x3b8fc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b8fc8: 0x306300bf  andi        $v1, $v1, 0xBF
    ctx->pc = 0x3b8fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
    // 0x3b8fcc: 0xa2032b4b  sb          $v1, 0x2B4B($s0)
    ctx->pc = 0x3b8fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8fd0: 0x92032b55  lbu         $v1, 0x2B55($s0)
    ctx->pc = 0x3b8fd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11093)));
    // 0x3b8fd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b8fd8: 0xa2032b55  sb          $v1, 0x2B55($s0)
    ctx->pc = 0x3b8fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11093), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b8fdc: 0x0  nop
    ctx->pc = 0x3b8fdcu;
    // NOP
label_3b8fe0:
    // 0x3b8fe0: 0x8e032b88  lw          $v1, 0x2B88($s0)
    ctx->pc = 0x3b8fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11144)));
    // 0x3b8fe4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B8FE4u;
    {
        const bool branch_taken_0x3b8fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b8fe4) {
            ctx->pc = 0x3B9000u;
            goto label_3b9000;
        }
    }
    ctx->pc = 0x3B8FECu;
    // 0x3b8fec: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3b8fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3b8ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b8ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b8ff4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3b8ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3b8ff8: 0xc0ee024  jal         func_3B8090
    ctx->pc = 0x3B8FF8u;
    SET_GPR_U32(ctx, 31, 0x3B9000u);
    ctx->pc = 0x3B8FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8FF8u;
    // 0x3b8ffc: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8090u, 0x3B8FF8u, 0x3B9000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B9000u;
label_3b9000:
    // 0x3b9000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b9000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b9004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b9004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b9008: 0x3e00008  jr          $ra
    ctx->pc = 0x3B9008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B9008u;
        // 0x3b900c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B9008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B9010u;
}
