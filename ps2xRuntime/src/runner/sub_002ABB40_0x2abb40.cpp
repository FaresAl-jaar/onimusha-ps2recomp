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

// Function: sub_002ABB40
// Address: 0x2abb40 - 0x2abd88
void sub_002ABB40_0x2abb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABB40_0x2abb40");
#endif

    switch (ctx->pc) {
        case 0x2abc94u: goto label_2abc94;
        case 0x2abd08u: goto label_2abd08;
        default: break;
    }

    ctx->pc = 0x2abb40u;

    // 0x2abb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2abb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2abb44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2abb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2abb48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2abb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2abb4c: 0x83838978  lb          $v1, -0x7688($gp)
    ctx->pc = 0x2abb4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936952)));
    // 0x2abb50: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2ABB50u;
    {
        const bool branch_taken_0x2abb50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABB50u;
        // 0x2abb54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abb50) {
            ctx->pc = 0x2ABB80u;
            goto label_2abb80;
        }
    }
    ctx->pc = 0x2ABB58u;
    // 0x2abb58: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x2abb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abb5c: 0x3c03c29c  lui         $v1, 0xC29C
    ctx->pc = 0x2abb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49820 << 16));
    // 0x2abb60: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x2abb60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2abb64: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2abb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2abb68: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2abb68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abb6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2abb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2abb70: 0xa3838978  sb          $v1, -0x7688($gp)
    ctx->pc = 0x2abb70u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936952), (uint8_t)GPR_U32(ctx, 3));
    // 0x2abb74: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2abb74u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2abb78: 0xe4206fe8  swc1        $f0, 0x6FE8($at)
    ctx->pc = 0x2abb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x676FE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x676FE8u, _value); } while (0); }
    // 0x2abb7c: 0x0  nop
    ctx->pc = 0x2abb7cu;
    // NOP
label_2abb80:
    // 0x2abb80: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2abb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2abb84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2abb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2abb88: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x2abb88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x2abb8c: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2abb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2abb90: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2abb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2abb94: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x2abb94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x2abb98: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2abb98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2abb9c: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2abb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2abba0: 0x34840400  ori         $a0, $a0, 0x400
    ctx->pc = 0x2abba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
    // 0x2abba4: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2abba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2abba8: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2abba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2abbac: 0x34840800  ori         $a0, $a0, 0x800
    ctx->pc = 0x2abbacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x2abbb0: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2abbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2abbb4: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2abbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2abbb8: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x2abbb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x2abbbc: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2abbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2abbc0: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2abbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2abbc4: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2abbc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2abbc8: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2abbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2abbcc: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x2abbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2abbd0: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x2abbd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x2abbd4: 0xae040148  sw          $a0, 0x148($s0)
    ctx->pc = 0x2abbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 4));
    // 0x2abbd8: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x2abbd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x2abbdc: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2ABBDCu;
    {
        const bool branch_taken_0x2abbdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2ABBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABBDCu;
        // 0x2abbe0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abbdc) {
            ctx->pc = 0x2ABD60u;
            goto label_2abd60;
        }
    }
    ctx->pc = 0x2ABBE4u;
    // 0x2abbe4: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2ABBE4u;
    {
        const bool branch_taken_0x2abbe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2abbe4) {
            ctx->pc = 0x2ABCF8u;
            goto label_2abcf8;
        }
    }
    ctx->pc = 0x2ABBECu;
    // 0x2abbec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABBECu;
    {
        const bool branch_taken_0x2abbec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abbec) {
            ctx->pc = 0x2ABC00u;
            goto label_2abc00;
        }
    }
    ctx->pc = 0x2ABBF4u;
    // 0x2abbf4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2ABBF4u;
    {
        const bool branch_taken_0x2abbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abbf4) {
            ctx->pc = 0x2ABD78u;
            goto label_2abd78;
        }
    }
    ctx->pc = 0x2ABBFCu;
    // 0x2abbfc: 0x0  nop
    ctx->pc = 0x2abbfcu;
    // NOP
label_2abc00:
    // 0x2abc00: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2abc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2abc04: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2abc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2abc08: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2abc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2abc0c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2abc0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2abc10: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2abc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2abc14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2abc14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abc18: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2abc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2abc1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2abc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2abc20: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2abc20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2abc24: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2abc24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2abc28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2abc28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abc2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABC2Cu;
    {
        const bool branch_taken_0x2abc2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2abc2c) {
            ctx->pc = 0x2ABC44u;
            goto label_2abc44;
        }
    }
    ctx->pc = 0x2ABC34u;
    // 0x2abc34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abc34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abc38: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2abc38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2abc3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABC3Cu;
    {
        const bool branch_taken_0x2abc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC3Cu;
        // 0x2abc40: 0xa20007f6  sb          $zero, 0x7F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc3c) {
            ctx->pc = 0x2ABC60u;
            goto label_2abc60;
        }
    }
    ctx->pc = 0x2ABC44u;
label_2abc44:
    // 0x2abc44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2abc44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2abc48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2abc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2abc4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abc4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2abc50: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2abc50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2abc54: 0x0  nop
    ctx->pc = 0x2abc54u;
    // NOP
    // 0x2abc58: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2abc58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2abc5c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2abc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_2abc60:
    // 0x2abc60: 0x24030088  addiu       $v1, $zero, 0x88
    ctx->pc = 0x2abc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x2abc64: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2abc64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2abc68: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x2abc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x2abc6c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2abc6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2abc70: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2abc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2abc74: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x2abc74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2abc78: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2abc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2abc7c: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x2abc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x2abc80: 0x26050870  addiu       $a1, $s0, 0x870
    ctx->pc = 0x2abc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2160));
    // 0x2abc84: 0xc42c6fe8  lwc1        $f12, 0x6FE8($at)
    ctx->pc = 0x2abc84u;
    { uint32_t bits = FAST_READ32(0x676FE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2abc88: 0x26060880  addiu       $a2, $s0, 0x880
    ctx->pc = 0x2abc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2176));
    // 0x2abc8c: 0xc096848  jal         func_25A120
    ctx->pc = 0x2ABC8Cu;
    SET_GPR_U32(ctx, 31, 0x2ABC94u);
    ctx->pc = 0x2ABC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC8Cu;
    // 0x2abc90: 0x26070890  addiu       $a3, $s0, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A120u, 0x2ABC8Cu, 0x2ABC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC94u;
label_2abc94:
    // 0x2abc94: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2abc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2abc98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2abc98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2abc9c: 0x0  nop
    ctx->pc = 0x2abc9cu;
    // NOP
    // 0x2abca0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2abca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2abca4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABCA4u;
    {
        const bool branch_taken_0x2abca4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2abca4) {
            ctx->pc = 0x2ABCBCu;
            goto label_2abcbc;
        }
    }
    ctx->pc = 0x2ABCACu;
    // 0x2abcac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abcacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2abcb0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2abcb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2abcb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABCB4u;
    {
        const bool branch_taken_0x2abcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCB4u;
        // 0x2abcb8: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abcb4) {
            ctx->pc = 0x2ABCD8u;
            goto label_2abcd8;
        }
    }
    ctx->pc = 0x2ABCBCu;
label_2abcbc:
    // 0x2abcbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2abcbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2abcc0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2abcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2abcc4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2abcc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2abcc8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2abcc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2abccc: 0x0  nop
    ctx->pc = 0x2abcccu;
    // NOP
    // 0x2abcd0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2abcd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2abcd4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2abcd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2abcd8:
    // 0x2abcd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2abcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2abcdc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2abcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2abce0: 0xa6040828  sh          $a0, 0x828($s0)
    ctx->pc = 0x2abce0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
    // 0x2abce4: 0xa604082c  sh          $a0, 0x82C($s0)
    ctx->pc = 0x2abce4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2092), (uint16_t)GPR_U32(ctx, 4));
    // 0x2abce8: 0x7a040870  lq          $a0, 0x870($s0)
    ctx->pc = 0x2abce8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 2160)));
    // 0x2abcec: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x2abcecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
    // 0x2abcf0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2ABCF0u;
    {
        const bool branch_taken_0x2abcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCF0u;
        // 0x2abcf4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abcf0) {
            ctx->pc = 0x2ABD78u;
            goto label_2abd78;
        }
    }
    ctx->pc = 0x2ABCF8u;
label_2abcf8:
    // 0x2abcf8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2abcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2abcfc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2abcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abd00: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x2ABD00u;
    SET_GPR_U32(ctx, 31, 0x2ABD08u);
    ctx->pc = 0x2ABD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABD00u;
    // 0x2abd04: 0x26060090  addiu       $a2, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x2ABD00u, 0x2ABD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABD08u;
label_2abd08:
    // 0x2abd08: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2abd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2abd0c: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2abd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2abd10: 0xc4206fe8  lwc1        $f0, 0x6FE8($at)
    ctx->pc = 0x2abd10u;
    { uint32_t bits = FAST_READ32(0x676FE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2abd14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2abd14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2abd18: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2abd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2abd1c: 0x96040828  lhu         $a0, 0x828($s0)
    ctx->pc = 0x2abd1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x2abd20: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2abd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2abd24: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2ABD24u;
    {
        const bool branch_taken_0x2abd24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD24u;
        // 0x2abd28: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd24) {
            ctx->pc = 0x2ABD78u;
            goto label_2abd78;
        }
    }
    ctx->pc = 0x2ABD2Cu;
    // 0x2abd2c: 0x7a060890  lq          $a2, 0x890($s0)
    ctx->pc = 0x2abd2cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 2192)));
    // 0x2abd30: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2abd30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2abd34: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x2abd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2abd38: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x2abd38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x2abd3c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2abd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2abd40: 0x7e060020  sq          $a2, 0x20($s0)
    ctx->pc = 0x2abd40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 6));
    // 0x2abd44: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2abd44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2abd48: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2abd48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2abd4c: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x2abd4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x2abd50: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2abd50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2abd54: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2abd54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x2abd58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2ABD58u;
    {
        const bool branch_taken_0x2abd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD58u;
        // 0x2abd5c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd58) {
            ctx->pc = 0x2ABD78u;
            goto label_2abd78;
        }
    }
    ctx->pc = 0x2ABD60u;
label_2abd60:
    // 0x2abd60: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2abd60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2abd64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABD64u;
    {
        const bool branch_taken_0x2abd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD64u;
        // 0x2abd68: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd64) {
            ctx->pc = 0x2ABD78u;
            goto label_2abd78;
        }
    }
    ctx->pc = 0x2ABD6Cu;
    // 0x2abd6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ABD6Cu;
    {
        const bool branch_taken_0x2abd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD6Cu;
        // 0x2abd70: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abd6c) {
            ctx->pc = 0x2ABD78u;
            goto label_2abd78;
        }
    }
    ctx->pc = 0x2ABD74u;
    // 0x2abd74: 0x0  nop
    ctx->pc = 0x2abd74u;
    // NOP
label_2abd78:
    // 0x2abd78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2abd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abd7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2abd7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abd80: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABD80u;
        // 0x2abd84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABD88u;
}
