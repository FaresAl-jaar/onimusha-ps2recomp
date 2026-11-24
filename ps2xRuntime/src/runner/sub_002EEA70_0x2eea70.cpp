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

// Function: sub_002EEA70
// Address: 0x2eea70 - 0x2eee60
void sub_002EEA70_0x2eea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEA70_0x2eea70");
#endif

    switch (ctx->pc) {
        case 0x2eeb50u: goto label_2eeb50;
        case 0x2eebd0u: goto label_2eebd0;
        case 0x2eebe4u: goto label_2eebe4;
        case 0x2eebf0u: goto label_2eebf0;
        case 0x2eec10u: goto label_2eec10;
        case 0x2eec94u: goto label_2eec94;
        case 0x2eed94u: goto label_2eed94;
        default: break;
    }

    ctx->pc = 0x2eea70u;

    // 0x2eea70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2eea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2eea74: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2eea74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2eea78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2eea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2eea7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2eea7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2eea80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2eea80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2eea84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eea84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea88: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2eea88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2eea8c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2eea8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2eea90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2eea90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2eea94: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x2eea94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2eea98: 0x108600e5  beq         $a0, $a2, . + 4 + (0xE5 << 2)
    ctx->pc = 0x2EEA98u;
    {
        const bool branch_taken_0x2eea98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x2EEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEA98u;
        // 0x2eea9c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea98) {
            ctx->pc = 0x2EEE30u;
            goto label_2eee30;
        }
    }
    ctx->pc = 0x2EEAA0u;
    // 0x2eeaa0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2eeaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2eeaa4: 0x108500a2  beq         $a0, $a1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2EEAA4u;
    {
        const bool branch_taken_0x2eeaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2EEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAA4u;
        // 0x2eeaa8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeaa4) {
            ctx->pc = 0x2EED30u;
            goto label_2eed30;
        }
    }
    ctx->pc = 0x2EEAACu;
    // 0x2eeaac: 0x10830092  beq         $a0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x2EEAACu;
    {
        const bool branch_taken_0x2eeaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2eeaac) {
            ctx->pc = 0x2EECF8u;
            goto label_2eecf8;
        }
    }
    ctx->pc = 0x2EEAB4u;
    // 0x2eeab4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEAB4u;
    {
        const bool branch_taken_0x2eeab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eeab4) {
            ctx->pc = 0x2EEAC8u;
            goto label_2eeac8;
        }
    }
    ctx->pc = 0x2EEABCu;
    // 0x2eeabc: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x2EEABCu;
    {
        const bool branch_taken_0x2eeabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eeabc) {
            ctx->pc = 0x2EEE40u;
            goto label_2eee40;
        }
    }
    ctx->pc = 0x2EEAC4u;
    // 0x2eeac4: 0x0  nop
    ctx->pc = 0x2eeac4u;
    // NOP
label_2eeac8:
    // 0x2eeac8: 0xa2202b20  sb          $zero, 0x2B20($s1)
    ctx->pc = 0x2eeac8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11040), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eeacc: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x2eeaccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2eead0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEAD0u;
    {
        const bool branch_taken_0x2eead0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAD0u;
        // 0x2eead4: 0x7e220870  sq          $v0, 0x870($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 2160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eead0) {
            ctx->pc = 0x2EEAE0u;
            goto label_2eeae0;
        }
    }
    ctx->pc = 0x2EEAD8u;
    // 0x2eead8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEAD8u;
    {
        const bool branch_taken_0x2eead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eead8) {
            ctx->pc = 0x2EEAF0u;
            goto label_2eeaf0;
        }
    }
    ctx->pc = 0x2EEAE0u;
label_2eeae0:
    // 0x2eeae0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x2eeae0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2eeae4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EEAE4u;
    {
        const bool branch_taken_0x2eeae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEAE4u;
        // 0x2eeae8: 0x7e220890  sq          $v0, 0x890($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 2192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeae4) {
            ctx->pc = 0x2EEB08u;
            goto label_2eeb08;
        }
    }
    ctx->pc = 0x2EEAECu;
    // 0x2eeaec: 0x0  nop
    ctx->pc = 0x2eeaecu;
    // NOP
label_2eeaf0:
    // 0x2eeaf0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2eeaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2eeaf4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2eeaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2eeaf8: 0x2442c5b0  addiu       $v0, $v0, -0x3A50
    ctx->pc = 0x2eeaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952368));
    // 0x2eeafc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eeafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eeb00: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2eeb00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eeb04: 0x7e220890  sq          $v0, 0x890($s1)
    ctx->pc = 0x2eeb04u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2192), GPR_VEC(ctx, 2));
label_2eeb08:
    // 0x2eeb08: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEB08u;
    {
        const bool branch_taken_0x2eeb08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eeb08) {
            ctx->pc = 0x2EEB20u;
            goto label_2eeb20;
        }
    }
    ctx->pc = 0x2EEB10u;
    // 0x2eeb10: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x2eeb10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2eeb14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EEB14u;
    {
        const bool branch_taken_0x2eeb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEB14u;
        // 0x2eeb18: 0xa6222b22  sh          $v0, 0x2B22($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 11042), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeb14) {
            ctx->pc = 0x2EEB38u;
            goto label_2eeb38;
        }
    }
    ctx->pc = 0x2EEB1Cu;
    // 0x2eeb1c: 0x0  nop
    ctx->pc = 0x2eeb1cu;
    // NOP
label_2eeb20:
    // 0x2eeb20: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2eeb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2eeb24: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2eeb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2eeb28: 0x2442c580  addiu       $v0, $v0, -0x3A80
    ctx->pc = 0x2eeb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952320));
    // 0x2eeb2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eeb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eeb30: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2eeb30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eeb34: 0xa6222b22  sh          $v0, 0x2B22($s1)
    ctx->pc = 0x2eeb34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 11042), (uint16_t)GPR_U32(ctx, 2));
label_2eeb38:
    // 0x2eeb38: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2eeb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2eeb3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2eeb3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eeb40: 0x26240880  addiu       $a0, $s1, 0x880
    ctx->pc = 0x2eeb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2176));
    // 0x2eeb44: 0x26250890  addiu       $a1, $s1, 0x890
    ctx->pc = 0x2eeb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x2eeb48: 0xc0414c0  jal         func_105300
    ctx->pc = 0x2EEB48u;
    SET_GPR_U32(ctx, 31, 0x2EEB50u);
    ctx->pc = 0x2EEB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEB48u;
    // 0x2eeb4c: 0x26260870  addiu       $a2, $s1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x2EEB48u, 0x2EEB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEB50u;
label_2eeb50:
    // 0x2eeb50: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2eeb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2eeb54: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2eeb54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2eeb58: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2eeb58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2eeb5c: 0x2442c590  addiu       $v0, $v0, -0x3A70
    ctx->pc = 0x2eeb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952336));
    // 0x2eeb60: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2eeb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2eeb64: 0x26250890  addiu       $a1, $s1, 0x890
    ctx->pc = 0x2eeb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x2eeb68: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2eeb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eeb6c: 0x3c02bf7a  lui         $v0, 0xBF7A
    ctx->pc = 0x2eeb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49018 << 16));
    // 0x2eeb70: 0xc6210894  lwc1        $f1, 0x894($s1)
    ctx->pc = 0x2eeb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eeb74: 0x3442e147  ori         $v0, $v0, 0xE147
    ctx->pc = 0x2eeb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57671);
    // 0x2eeb78: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2eeb78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2eeb7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2eeb7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2eeb80: 0x26240870  addiu       $a0, $s1, 0x870
    ctx->pc = 0x2eeb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    // 0x2eeb84: 0x46000900  add.s       $f4, $f1, $f0
    ctx->pc = 0x2eeb84u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eeb88: 0xe6240884  swc1        $f4, 0x884($s1)
    ctx->pc = 0x2eeb88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2180), bits); }
    // 0x2eeb8c: 0xc6210874  lwc1        $f1, 0x874($s1)
    ctx->pc = 0x2eeb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eeb90: 0xc6200894  lwc1        $f0, 0x894($s1)
    ctx->pc = 0x2eeb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eeb94: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2eeb94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2eeb98: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x2eeb98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2eeb9c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2eeb9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2eeba0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2eeba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2eeba4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2eeba4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2eeba8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2eeba8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2eebac: 0x0  nop
    ctx->pc = 0x2eebacu;
    // NOP
    // 0x2eebb0: 0x46010544  c1          0x10544
    ctx->pc = 0x2eebb0u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[1]);
    // 0x2eebb4: 0x0  nop
    ctx->pc = 0x2eebb4u;
    // NOP
    // 0x2eebb8: 0x0  nop
    ctx->pc = 0x2eebb8u;
    // NOP
    // 0x2eebbc: 0x46000504  c1          0x504
    ctx->pc = 0x2eebbcu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x2eebc0: 0x0  nop
    ctx->pc = 0x2eebc0u;
    // NOP
    // 0x2eebc4: 0x0  nop
    ctx->pc = 0x2eebc4u;
    // NOP
    // 0x2eebc8: 0xc096908  jal         func_25A420
    ctx->pc = 0x2EEBC8u;
    SET_GPR_U32(ctx, 31, 0x2EEBD0u);
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x2EEBC8u, 0x2EEBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBD0u;
label_2eebd0:
    // 0x2eebd0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2eebd0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2eebd4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2eebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2eebd8: 0x26250890  addiu       $a1, $s1, 0x890
    ctx->pc = 0x2eebd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
    // 0x2eebdc: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2EEBDCu;
    SET_GPR_U32(ctx, 31, 0x2EEBE4u);
    ctx->pc = 0x2EEBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEBDCu;
    // 0x2eebe0: 0x26260870  addiu       $a2, $s1, 0x870 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2EEBDCu, 0x2EEBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBE4u;
label_2eebe4:
    // 0x2eebe4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2eebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2eebe8: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2EEBE8u;
    SET_GPR_U32(ctx, 31, 0x2EEBF0u);
    ctx->pc = 0x2EEBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEBE8u;
    // 0x2eebec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2EEBE8u, 0x2EEBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEBF0u;
label_2eebf0:
    // 0x2eebf0: 0x4614ad00  add.s       $f20, $f21, $f20
    ctx->pc = 0x2eebf0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x2eebf4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2eebf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2eebf8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2eebf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eebfc: 0x4614b303  div.s       $f12, $f22, $f20
    ctx->pc = 0x2eebfcu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[22], ctx->f[20]); }
    // 0x2eec00: 0x0  nop
    ctx->pc = 0x2eec00u;
    // NOP
    // 0x2eec04: 0x0  nop
    ctx->pc = 0x2eec04u;
    // NOP
    // 0x2eec08: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2EEC08u;
    SET_GPR_U32(ctx, 31, 0x2EEC10u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2EEC08u, 0x2EEC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC10u;
label_2eec10:
    // 0x2eec10: 0x3c02bf7a  lui         $v0, 0xBF7A
    ctx->pc = 0x2eec10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49018 << 16));
    // 0x2eec14: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2eec14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2eec18: 0x3444e147  ori         $a0, $v0, 0xE147
    ctx->pc = 0x2eec18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57671);
    // 0x2eec1c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2eec1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eec20: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2eec20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2eec24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eec24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eec28: 0x0  nop
    ctx->pc = 0x2eec28u;
    // NOP
    // 0x2eec2c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2eec2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2eec30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2eec30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2eec34: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2eec34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2eec38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eec38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eec3c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2eec3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eec40: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2eec40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eec44: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EEC44u;
    {
        const bool branch_taken_0x2eec44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EEC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC44u;
        // 0x2eec48: 0x7e220090  sq          $v0, 0x90($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec44) {
            ctx->pc = 0x2EEC5Cu;
            goto label_2eec5c;
        }
    }
    ctx->pc = 0x2EEC4Cu;
    // 0x2eec4c: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eec4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2eec50: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2eec50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2eec54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EEC54u;
    {
        const bool branch_taken_0x2eec54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC54u;
        // 0x2eec58: 0xa6230828  sh          $v1, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec54) {
            ctx->pc = 0x2EEC78u;
            goto label_2eec78;
        }
    }
    ctx->pc = 0x2EEC5Cu;
label_2eec5c:
    // 0x2eec5c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2eec5cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2eec60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2eec60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2eec64: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eec64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2eec68: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2eec68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2eec6c: 0x0  nop
    ctx->pc = 0x2eec6cu;
    // NOP
    // 0x2eec70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2eec70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2eec74: 0xa6230828  sh          $v1, 0x828($s1)
    ctx->pc = 0x2eec74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
label_2eec78:
    // 0x2eec78: 0xa6200826  sh          $zero, 0x826($s1)
    ctx->pc = 0x2eec78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x2eec7c: 0x86232b22  lh          $v1, 0x2B22($s1)
    ctx->pc = 0x2eec7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11042)));
    // 0x2eec80: 0x862200c2  lh          $v0, 0xC2($s1)
    ctx->pc = 0x2eec80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2eec84: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2eec84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eec88: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2eec88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2eec8c: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x2EEC8Cu;
    SET_GPR_U32(ctx, 31, 0x2EEC94u);
    ctx->pc = 0x2EEC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC8Cu;
    // 0x2eec90: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x2EEC8Cu, 0x2EEC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEC94u;
label_2eec94:
    // 0x2eec94: 0x96270828  lhu         $a3, 0x828($s1)
    ctx->pc = 0x2eec94u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
    // 0x2eec98: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2eec98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2eec9c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2eec9cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2eeca0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2eeca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2eeca4: 0x2463c568  addiu       $v1, $v1, -0x3A98
    ctx->pc = 0x2eeca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952296));
    // 0x2eeca8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2eeca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2eecac: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x2eecacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2eecb0: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x2eecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x2eecb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2eecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eecb8: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x2eecb8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2eecbc: 0x0  nop
    ctx->pc = 0x2eecbcu;
    // NOP
    // 0x2eecc0: 0x0  nop
    ctx->pc = 0x2eecc0u;
    // NOP
    // 0x2eecc4: 0x3812  mflo        $a3
    ctx->pc = 0x2eecc4u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2eecc8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2eecc8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeccc: 0x0  nop
    ctx->pc = 0x2eecccu;
    // NOP
    // 0x2eecd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eecd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eecd4: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x2eecd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x2eecd8: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x2eecd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2eecdc: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2eecdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eece0: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2eece0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eece4: 0xa62607f2  sh          $a2, 0x7F2($s1)
    ctx->pc = 0x2eece4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x2eece8: 0xa22507f5  sb          $a1, 0x7F5($s1)
    ctx->pc = 0x2eece8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2eecec: 0xae2407ec  sw          $a0, 0x7EC($s1)
    ctx->pc = 0x2eececu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 4));
    // 0x2eecf0: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2EECF0u;
    {
        const bool branch_taken_0x2eecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECF0u;
        // 0x2eecf4: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecf0) {
            ctx->pc = 0x2EEE40u;
            goto label_2eee40;
        }
    }
    ctx->pc = 0x2EECF8u;
label_2eecf8:
    // 0x2eecf8: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2eecf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x2eecfc: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x2EECFCu;
    {
        const bool branch_taken_0x2eecfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EECFCu;
        // 0x2eed00: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecfc) {
            ctx->pc = 0x2EEE40u;
            goto label_2eee40;
        }
    }
    ctx->pc = 0x2EED04u;
    // 0x2eed04: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2eed04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2eed08: 0x2484c570  addiu       $a0, $a0, -0x3A90
    ctx->pc = 0x2eed08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952304));
    // 0x2eed0c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2eed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2eed10: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2eed10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eed14: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2eed14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eed18: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2eed18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eed1c: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x2eed1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2eed20: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2eed20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eed24: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x2eed24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x2eed28: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2EED28u;
    {
        const bool branch_taken_0x2eed28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EED28u;
        // 0x2eed2c: 0xa2250821  sb          $a1, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed28) {
            ctx->pc = 0x2EEE40u;
            goto label_2eee40;
        }
    }
    ctx->pc = 0x2EED30u;
label_2eed30:
    // 0x2eed30: 0x96230828  lhu         $v1, 0x828($s1)
    ctx->pc = 0x2eed30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
    // 0x2eed34: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2EED34u;
    {
        const bool branch_taken_0x2eed34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eed34) {
            ctx->pc = 0x2EEDE8u;
            goto label_2eede8;
        }
    }
    ctx->pc = 0x2EED3Cu;
    // 0x2eed3c: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2eed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2eed40: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2eed40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2eed44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2eed44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eed48: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x2eed48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2eed4c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2eed4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2eed50: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x2eed50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x2eed54: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2eed54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2eed58: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2eed58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2eed5c: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x2eed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x2eed60: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2eed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2eed64: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2eed64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2eed68: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x2eed68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x2eed6c: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2eed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2eed70: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2eed70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2eed74: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x2eed74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x2eed78: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2eed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2eed7c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2eed7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2eed80: 0xae220148  sw          $v0, 0x148($s1)
    ctx->pc = 0x2eed80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    // 0x2eed84: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x2eed84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x2eed88: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2eed88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2eed8c: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x2EED8Cu;
    SET_GPR_U32(ctx, 31, 0x2EED94u);
    ctx->pc = 0x2EED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EED8Cu;
    // 0x2eed90: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x2EED8Cu, 0x2EED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EED94u;
label_2eed94:
    // 0x2eed94: 0xc6210094  lwc1        $f1, 0x94($s1)
    ctx->pc = 0x2eed94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eed98: 0x3c03bf7a  lui         $v1, 0xBF7A
    ctx->pc = 0x2eed98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49018 << 16));
    // 0x2eed9c: 0x3463e147  ori         $v1, $v1, 0xE147
    ctx->pc = 0x2eed9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57671);
    // 0x2eeda0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eeda0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeda4: 0x0  nop
    ctx->pc = 0x2eeda4u;
    // NOP
    // 0x2eeda8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eeda8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eedac: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x2eedacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x2eedb0: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x2eedb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x2eedb4: 0xc620009c  lwc1        $f0, 0x9C($s1)
    ctx->pc = 0x2eedb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eedb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eedb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eedbc: 0x0  nop
    ctx->pc = 0x2eedbcu;
    // NOP
    // 0x2eedc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eedc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eedc4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eedc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eedc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eedc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2eedcc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2eedccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2eedd0: 0x0  nop
    ctx->pc = 0x2eedd0u;
    // NOP
    // 0x2eedd4: 0xa62300c2  sh          $v1, 0xC2($s1)
    ctx->pc = 0x2eedd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x2eedd8: 0x96230828  lhu         $v1, 0x828($s1)
    ctx->pc = 0x2eedd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2088)));
    // 0x2eeddc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2eeddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2eede0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2EEDE0u;
    {
        const bool branch_taken_0x2eede0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEDE0u;
        // 0x2eede4: 0xa6230828  sh          $v1, 0x828($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eede0) {
            ctx->pc = 0x2EEE40u;
            goto label_2eee40;
        }
    }
    ctx->pc = 0x2EEDE8u;
label_2eede8:
    // 0x2eede8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2eede8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2eedec: 0x2463c578  addiu       $v1, $v1, -0x3A88
    ctx->pc = 0x2eedecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952312));
    // 0x2eedf0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2eedf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2eedf4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2eedf4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eedf8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2eedf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2eedfc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2eedfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2eee00: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x2eee00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eee04: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x2eee04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eee08: 0xa62407f2  sh          $a0, 0x7F2($s1)
    ctx->pc = 0x2eee08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2eee0c: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x2eee0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2eee10: 0xae2307ec  sw          $v1, 0x7EC($s1)
    ctx->pc = 0x2eee10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 3));
    // 0x2eee14: 0x7a230890  lq          $v1, 0x890($s1)
    ctx->pc = 0x2eee14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 2192)));
    // 0x2eee18: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x2eee18u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x2eee1c: 0x86232b22  lh          $v1, 0x2B22($s1)
    ctx->pc = 0x2eee1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 11042)));
    // 0x2eee20: 0xa62300c2  sh          $v1, 0xC2($s1)
    ctx->pc = 0x2eee20u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x2eee24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EEE24u;
    {
        const bool branch_taken_0x2eee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE24u;
        // 0x2eee28: 0xa2260821  sb          $a2, 0x821($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee24) {
            ctx->pc = 0x2EEE40u;
            goto label_2eee40;
        }
    }
    ctx->pc = 0x2EEE2Cu;
    // 0x2eee2c: 0x0  nop
    ctx->pc = 0x2eee2cu;
    // NOP
label_2eee30:
    // 0x2eee30: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x2eee30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x2eee34: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EEE34u;
    {
        const bool branch_taken_0x2eee34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE34u;
        // 0x2eee38: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eee34) {
            ctx->pc = 0x2EEE40u;
            goto label_2eee40;
        }
    }
    ctx->pc = 0x2EEE3Cu;
    // 0x2eee3c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x2eee3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2eee40:
    // 0x2eee40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2eee40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eee44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2eee44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eee48: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2eee48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2eee4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2eee4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eee50: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2eee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2eee54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2eee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2eee58: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEE58u;
        // 0x2eee5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEE60u;
}
