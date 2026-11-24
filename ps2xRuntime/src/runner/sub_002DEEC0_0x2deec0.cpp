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

// Function: sub_002DEEC0
// Address: 0x2deec0 - 0x2df2e4
void sub_002DEEC0_0x2deec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEEC0_0x2deec0");
#endif

    switch (ctx->pc) {
        case 0x2df0b4u: goto label_2df0b4;
        case 0x2df100u: goto label_2df100;
        case 0x2df12cu: goto label_2df12c;
        case 0x2df158u: goto label_2df158;
        default: break;
    }

    ctx->pc = 0x2deec0u;

    // 0x2deec0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2deec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2deec4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2deec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2deec8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2deec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2deecc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2deeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2deed0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2deed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2deed4: 0x24637aa8  addiu       $v1, $v1, 0x7AA8
    ctx->pc = 0x2deed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31400));
    // 0x2deed8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2deed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2deedc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2deedcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2deee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2deee4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2deee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2deee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2deeec: 0xaca60044  sw          $a2, 0x44($a1)
    ctx->pc = 0x2deeecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 6));
    // 0x2deef0: 0xaca70048  sw          $a3, 0x48($a1)
    ctx->pc = 0x2deef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 7));
    // 0x2deef4: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x2deef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2deef8: 0x34450dcd  ori         $a1, $v0, 0xDCD
    ctx->pc = 0x2deef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2deefc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2deefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2def00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2def00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2def04: 0xc51018  mult        $v0, $a2, $a1
    ctx->pc = 0x2def04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2def08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2def08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2def0c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2def0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2def10: 0x908560b3  lbu         $a1, 0x60B3($a0)
    ctx->pc = 0x2def10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24755)));
    // 0x2def14: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2def14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2def18: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2def18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2def1c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2def1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2def20: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2def20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2def24: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2def24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2def28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2def28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2def2c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2def2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2def30: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DEF30u;
    {
        const bool branch_taken_0x2def30 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2DEF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF30u;
        // 0x2def34: 0x460008c2  mul.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def30) {
            ctx->pc = 0x2DEF44u;
            goto label_2def44;
        }
    }
    ctx->pc = 0x2DEF38u;
    // 0x2def38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2def38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2def3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DEF3Cu;
    {
        const bool branch_taken_0x2def3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF3Cu;
        // 0x2def40: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def3c) {
            ctx->pc = 0x2DEF60u;
            goto label_2def60;
        }
    }
    ctx->pc = 0x2DEF44u;
label_2def44:
    // 0x2def44: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2def44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2def48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2def48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2def4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2def4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2def50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2def50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2def54: 0x0  nop
    ctx->pc = 0x2def54u;
    // NOP
    // 0x2def58: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2def58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2def5c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2def5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2def60:
    // 0x2def60: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x2def60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x2def64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2def64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2def68: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2def68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2def6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2def6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2def70: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2def70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2def74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2def74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2def78: 0x0  nop
    ctx->pc = 0x2def78u;
    // NOP
    // 0x2def7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2def7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2def80: 0x34440dcd  ori         $a0, $v0, 0xDCD
    ctx->pc = 0x2def80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2def84: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2def84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2def88: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2def88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2def8c: 0x24637aa8  addiu       $v1, $v1, 0x7AA8
    ctx->pc = 0x2def8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31400));
    // 0x2def90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2def90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2def94: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2def94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2def98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2def98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2def9c: 0x0  nop
    ctx->pc = 0x2def9cu;
    // NOP
    // 0x2defa0: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x2defa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x2defa4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2defa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2defa8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2defa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2defac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2defacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2defb0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2defb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2defb4: 0x926560b3  lbu         $a1, 0x60B3($s3)
    ctx->pc = 0x2defb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24755)));
    // 0x2defb8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2defb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2defbc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2defbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2defc0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2defc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2defc4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2defc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2defc8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2defc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2defcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2defccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2defd0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2defd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2defd4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DEFD4u;
    {
        const bool branch_taken_0x2defd4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2DEFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFD4u;
        // 0x2defd8: 0x460008c2  mul.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2defd4) {
            ctx->pc = 0x2DEFE8u;
            goto label_2defe8;
        }
    }
    ctx->pc = 0x2DEFDCu;
    // 0x2defdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2defdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2defe0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DEFE0u;
    {
        const bool branch_taken_0x2defe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEFE0u;
        // 0x2defe4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2defe0) {
            ctx->pc = 0x2DF004u;
            goto label_2df004;
        }
    }
    ctx->pc = 0x2DEFE8u;
label_2defe8:
    // 0x2defe8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2defe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2defec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2defecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2deff0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2deff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2deff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2deff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2deff8: 0x0  nop
    ctx->pc = 0x2deff8u;
    // NOP
    // 0x2deffc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2deffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2df000: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2df000u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2df004:
    // 0x2df004: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x2df004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x2df008: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x2df008u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x2df00c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2df00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2df010: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x2df010u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x2df014: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2df014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df018: 0x24e77aa8  addiu       $a3, $a3, 0x7AA8
    ctx->pc = 0x2df018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31400));
    // 0x2df01c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2df01cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df020: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2df020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2df024: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2df024u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2df028: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2df028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2df02c: 0x2645004c  addiu       $a1, $s2, 0x4C
    ctx->pc = 0x2df02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x2df030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2df030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df034: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2df034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2df038: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2df038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2df03c: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x2df03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x2df040: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x2df040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df044: 0x926860b3  lbu         $t0, 0x60B3($s3)
    ctx->pc = 0x2df044u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24755)));
    // 0x2df048: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x2df048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df04c: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x2df04cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095B4u));
    // 0x2df050: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2df050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2df054: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x2df054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2df058: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2df058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2df05c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2df05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2df060: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2df060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2df064: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2df064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df068: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2df068u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2df06c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2df06cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2df070: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2df070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2df074: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2df074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df078: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2df078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2df07c: 0xc6410048  lwc1        $f1, 0x48($s2)
    ctx->pc = 0x2df07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df080: 0x926360b3  lbu         $v1, 0x60B3($s3)
    ctx->pc = 0x2df080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24755)));
    // 0x2df084: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x2df084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df088: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x2df088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2df08c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2df08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2df090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2df090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df094: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2df094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2df098: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2df098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2df09c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2df09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df0a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2df0a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2df0a4: 0xafa9005c  sw          $t1, 0x5C($sp)
    ctx->pc = 0x2df0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 9));
    // 0x2df0a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2df0a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2df0ac: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x2DF0ACu;
    SET_GPR_U32(ctx, 31, 0x2DF0B4u);
    ctx->pc = 0x2DF0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF0ACu;
    // 0x2df0b0: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x2DF0ACu, 0x2DF0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF0B4u;
label_2df0b4:
    // 0x2df0b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF0B4u;
    {
        const bool branch_taken_0x2df0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0B4u;
        // 0x2df0b8: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0b4) {
            ctx->pc = 0x2DF0C8u;
            goto label_2df0c8;
        }
    }
    ctx->pc = 0x2DF0BCu;
    // 0x2df0bc: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x2df0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940084)));
    // 0x2df0c0: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2df0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df0c4: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x2df0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
label_2df0c8:
    // 0x2df0c8: 0x926460b3  lbu         $a0, 0x60B3($s3)
    ctx->pc = 0x2df0c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24755)));
    // 0x2df0cc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2df0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2df0d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2df0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df0d4: 0x24427a98  addiu       $v0, $v0, 0x7A98
    ctx->pc = 0x2df0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31384));
    // 0x2df0d8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2df0d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df0dc: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x2df0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df0e0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2df0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2df0e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2df0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2df0e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2df0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2df0ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2df0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df0f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2df0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df0f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2df0f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2df0f8: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x2df0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x2df0fc: 0x0  nop
    ctx->pc = 0x2df0fcu;
    // NOP
label_2df100:
    // 0x2df100: 0x926560b3  lbu         $a1, 0x60B3($s3)
    ctx->pc = 0x2df100u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24755)));
    // 0x2df104: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2df104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2df108: 0x24427a90  addiu       $v0, $v0, 0x7A90
    ctx->pc = 0x2df108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31376));
    // 0x2df10c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2df10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2df110: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2df110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2df114: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2df114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2df118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2df118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df11c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2df11cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2df120: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x2df120u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2df124: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x2DF124u;
    SET_GPR_U32(ctx, 31, 0x2DF12Cu);
    ctx->pc = 0x2DF128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF124u;
    // 0x2df128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x2DF124u, 0x2DF12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF12Cu;
label_2df12c:
    // 0x2df12c: 0x926560b3  lbu         $a1, 0x60B3($s3)
    ctx->pc = 0x2df12cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24755)));
    // 0x2df130: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2df130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2df134: 0x24427a90  addiu       $v0, $v0, 0x7A90
    ctx->pc = 0x2df134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31376));
    // 0x2df138: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2df138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2df13c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2df13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2df140: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2df140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2df144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2df144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df148: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x2df148u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2df14c: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x2df14cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2df150: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x2DF150u;
    SET_GPR_U32(ctx, 31, 0x2DF158u);
    ctx->pc = 0x2DF154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF150u;
    // 0x2df154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x2DF150u, 0x2DF158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF158u;
label_2df158:
    // 0x2df158: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x2df158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2df15c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2df15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2df160: 0x34650dcd  ori         $a1, $v1, 0xDCD
    ctx->pc = 0x2df160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x2df164: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2df164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2df168: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2df168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2df16c: 0x24847a90  addiu       $a0, $a0, 0x7A90
    ctx->pc = 0x2df16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31376));
    // 0x2df170: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2df170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df174: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2df174u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df178: 0xc51818  mult        $v1, $a2, $a1
    ctx->pc = 0x2df178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2df17c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2df17cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2df180: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2df180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2df184: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x2df184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x2df188: 0x926660b3  lbu         $a2, 0x60B3($s3)
    ctx->pc = 0x2df188u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24755)));
    // 0x2df18c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2df18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2df190: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x2df190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df194: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2df194u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2df198: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2df198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2df19c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x2df19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x2df1a0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2df1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2df1a4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2df1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2df1a8: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2df1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2df1ac: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2df1acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2df1b0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2df1b0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2df1b4: 0x0  nop
    ctx->pc = 0x2df1b4u;
    // NOP
    // 0x2df1b8: 0x0  nop
    ctx->pc = 0x2df1b8u;
    // NOP
    // 0x2df1bc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF1BCu;
    {
        const bool branch_taken_0x2df1bc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2DF1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1BCu;
        // 0x2df1c0: 0x460100c1  sub.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df1bc) {
            ctx->pc = 0x2DF1D0u;
            goto label_2df1d0;
        }
    }
    ctx->pc = 0x2DF1C4u;
    // 0x2df1c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2df1c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df1c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DF1C8u;
    {
        const bool branch_taken_0x2df1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1C8u;
        // 0x2df1cc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df1c8) {
            ctx->pc = 0x2DF1ECu;
            goto label_2df1ec;
        }
    }
    ctx->pc = 0x2DF1D0u;
label_2df1d0:
    // 0x2df1d0: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2df1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2df1d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2df1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2df1d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2df1d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2df1dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2df1dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df1e0: 0x0  nop
    ctx->pc = 0x2df1e0u;
    // NOP
    // 0x2df1e4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2df1e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2df1e8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2df1e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2df1ec:
    // 0x2df1ec: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x2df1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x2df1f0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2df1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2df1f4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2df1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2df1f8: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x2df1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x2df1fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2df1fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df200: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2df200u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df204: 0x0  nop
    ctx->pc = 0x2df204u;
    // NOP
    // 0x2df208: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2df208u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2df20c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2df20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2df210: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2df210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2df214: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x2df214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x2df218: 0x24847a90  addiu       $a0, $a0, 0x7A90
    ctx->pc = 0x2df218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31376));
    // 0x2df21c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2df21cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2df220: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2df220u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df224: 0x0  nop
    ctx->pc = 0x2df224u;
    // NOP
    // 0x2df228: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2df228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2df22c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x2df22cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2df230: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2df230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2df234: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x2df234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2df238: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2df238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2df23c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2df23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2df240: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x2df240u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x2df244: 0x926660b3  lbu         $a2, 0x60B3($s3)
    ctx->pc = 0x2df244u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24755)));
    // 0x2df248: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2df248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2df24c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2df24cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2df250: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2df250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2df254: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x2df254u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x2df258: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2df258u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2df25c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2df25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2df260: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF260u;
    {
        const bool branch_taken_0x2df260 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2DF264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF260u;
        // 0x2df264: 0xc483000c  lwc1        $f3, 0xC($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df260) {
            ctx->pc = 0x2DF274u;
            goto label_2df274;
        }
    }
    ctx->pc = 0x2DF268u;
    // 0x2df268: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2df268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df26c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DF26Cu;
    {
        const bool branch_taken_0x2df26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF26Cu;
        // 0x2df270: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df26c) {
            ctx->pc = 0x2DF290u;
            goto label_2df290;
        }
    }
    ctx->pc = 0x2DF274u;
label_2df274:
    // 0x2df274: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2df274u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2df278: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2df278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2df27c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2df27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2df280: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2df280u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df284: 0x0  nop
    ctx->pc = 0x2df284u;
    // NOP
    // 0x2df288: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2df288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2df28c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2df28cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2df290:
    // 0x2df290: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x2df290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x2df294: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x2df294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x2df298: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2df298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2df29c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2df29cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2df2a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2df2a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df2a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2df2a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df2a8: 0x0  nop
    ctx->pc = 0x2df2a8u;
    // NOP
    // 0x2df2ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2df2acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2df2b0: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x2df2b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2df2b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2df2b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2df2b8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2df2b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2df2bc: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2df2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2df2c0: 0x1460ff8f  bnez        $v1, . + 4 + (-0x71 << 2)
    ctx->pc = 0x2DF2C0u;
    {
        const bool branch_taken_0x2df2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2C0u;
        // 0x2df2c4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df2c0) {
            ctx->pc = 0x2DF100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2df100;
        }
    }
    ctx->pc = 0x2DF2C8u;
    // 0x2df2c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2df2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2df2cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2df2ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df2d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2df2d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df2d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2df2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df2d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2DCu;
        // 0x2df2e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF2E4u;
}
