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

// Function: sub_00324BF0
// Address: 0x324bf0 - 0x324fa4
void sub_00324BF0_0x324bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324BF0_0x324bf0");
#endif

    switch (ctx->pc) {
        case 0x324c70u: goto label_324c70;
        case 0x324d7cu: goto label_324d7c;
        case 0x324ea8u: goto label_324ea8;
        default: break;
    }

    ctx->pc = 0x324bf0u;

    // 0x324bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x324bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x324bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x324bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x324bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x324bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x324bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x324bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x324c00: 0x90a70031  lbu         $a3, 0x31($a1)
    ctx->pc = 0x324c00u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 49)));
    // 0x324c04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c08: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x324c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x324c0c: 0x90a30033  lbu         $v1, 0x33($a1)
    ctx->pc = 0x324c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 51)));
    // 0x324c10: 0x30e40040  andi        $a0, $a3, 0x40
    ctx->pc = 0x324c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x324c14: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x324C14u;
    {
        const bool branch_taken_0x324c14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x324C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C14u;
        // 0x324c18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c14) {
            ctx->pc = 0x324C58u;
            goto label_324c58;
        }
    }
    ctx->pc = 0x324C1Cu;
    // 0x324c1c: 0x9225002c  lbu         $a1, 0x2C($s1)
    ctx->pc = 0x324c1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x324c20: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x324c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x324c24: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324c28: 0x34848081  ori         $a0, $a0, 0x8081
    ctx->pc = 0x324c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32897);
    // 0x324c2c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x324c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x324c30: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x324c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x324c34: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x324c34u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x324c38: 0x9025ae72  lbu         $a1, -0x518E($at)
    ctx->pc = 0x324c38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946418)));
    // 0x324c3c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x324c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x324c40: 0x830019  multu       $a0, $v1
    ctx->pc = 0x324c40u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x324c44: 0x0  nop
    ctx->pc = 0x324c44u;
    // NOP
    // 0x324c48: 0x0  nop
    ctx->pc = 0x324c48u;
    // NOP
    // 0x324c4c: 0x1810  mfhi        $v1
    ctx->pc = 0x324c4cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x324c50: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x324c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x324c54: 0x0  nop
    ctx->pc = 0x324c54u;
    // NOP
label_324c58:
    // 0x324c58: 0x30e40004  andi        $a0, $a3, 0x4
    ctx->pc = 0x324c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x324c5c: 0x1080004c  beqz        $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x324C5Cu;
    {
        const bool branch_taken_0x324c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x324c5c) {
            ctx->pc = 0x324D90u;
            goto label_324d90;
        }
    }
    ctx->pc = 0x324C64u;
    // 0x324c64: 0xde270020  ld          $a3, 0x20($s1)
    ctx->pc = 0x324c64u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x324c68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x324c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c6c: 0x0  nop
    ctx->pc = 0x324c6cu;
    // NOP
label_324c70:
    // 0x324c70: 0x30e40001  andi        $a0, $a3, 0x1
    ctx->pc = 0x324c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x324c74: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x324c74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x324c78: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x324c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x324c7c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x324C7Cu;
    {
        const bool branch_taken_0x324c7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x324C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C7Cu;
        // 0x324c80: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c7c) {
            ctx->pc = 0x324C98u;
            goto label_324c98;
        }
    }
    ctx->pc = 0x324C84u;
    // 0x324c84: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x324c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x324c88: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x324c88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x324c8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x324C8Cu;
    {
        const bool branch_taken_0x324c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C8Cu;
        // 0x324c90: 0x2043821  addu        $a3, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c8c) {
            ctx->pc = 0x324CA8u;
            goto label_324ca8;
        }
    }
    ctx->pc = 0x324C94u;
    // 0x324c94: 0x0  nop
    ctx->pc = 0x324c94u;
    // NOP
label_324c98:
    // 0x324c98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x324c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x324c9c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x324C9Cu;
    {
        const bool branch_taken_0x324c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C9Cu;
        // 0x324ca0: 0x7387a  dsrl        $a3, $a3, 1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c9c) {
            ctx->pc = 0x324C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324c70;
        }
    }
    ctx->pc = 0x324CA4u;
    // 0x324ca4: 0x0  nop
    ctx->pc = 0x324ca4u;
    // NOP
label_324ca8:
    // 0x324ca8: 0xc4e6000c  lwc1        $f6, 0xC($a3)
    ctx->pc = 0x324ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x324cac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x324cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324cb0: 0x0  nop
    ctx->pc = 0x324cb0u;
    // NOP
    // 0x324cb4: 0x46060032  c.eq.s      $f0, $f6
    ctx->pc = 0x324cb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x324cb8: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x324CB8u;
    {
        const bool branch_taken_0x324cb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x324CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CB8u;
        // 0x324cbc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324cb8) {
            ctx->pc = 0x324D20u;
            goto label_324d20;
        }
    }
    ctx->pc = 0x324CC0u;
    // 0x324cc0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x324cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x324cc4: 0xc424ae34  lwc1        $f4, -0x51CC($at)
    ctx->pc = 0x324cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x324cc8: 0xc4e50004  lwc1        $f5, 0x4($a3)
    ctx->pc = 0x324cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x324ccc: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x324cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x324cd0: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x324cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324cd4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324cd8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x324cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x324cdc: 0xc422ae30  lwc1        $f2, -0x51D0($at)
    ctx->pc = 0x324cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x324ce0: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x324ce0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x324ce4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324ce8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x324ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x324cec: 0xc420ae38  lwc1        $f0, -0x51C8($at)
    ctx->pc = 0x324cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324cf0: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x324cf0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x324cf4: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x324cf4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x324cf8: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x324cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x324cfc: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x324cfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x324d00: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x324d00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x324d04: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x324d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x324d08: 0x46000004  c1          0x4
    ctx->pc = 0x324d08u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x324d0c: 0x0  nop
    ctx->pc = 0x324d0cu;
    // NOP
    // 0x324d10: 0x0  nop
    ctx->pc = 0x324d10u;
    // NOP
    // 0x324d14: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x324d14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x324d18: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x324D18u;
    {
        const bool branch_taken_0x324d18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x324d18) {
            ctx->pc = 0x324D88u;
            goto label_324d88;
        }
    }
    ctx->pc = 0x324D20u;
label_324d20:
    // 0x324d20: 0x90c20007  lbu         $v0, 0x7($a2)
    ctx->pc = 0x324d20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x324d24: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x324d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x324d28: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x324d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x324d2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x324D2Cu;
    {
        const bool branch_taken_0x324d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324d2c) {
            ctx->pc = 0x324D48u;
            goto label_324d48;
        }
    }
    ctx->pc = 0x324D34u;
    // 0x324d34: 0x9222002c  lbu         $v0, 0x2C($s1)
    ctx->pc = 0x324d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x324d38: 0x3401ae60  ori         $at, $zero, 0xAE60
    ctx->pc = 0x324d38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44640);
    // 0x324d3c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x324d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x324d40: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x324d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x324d44: 0x413821  addu        $a3, $v0, $at
    ctx->pc = 0x324d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_324d48:
    // 0x324d48: 0x306800ff  andi        $t0, $v1, 0xFF
    ctx->pc = 0x324d48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x324d4c: 0x90c3000a  lbu         $v1, 0xA($a2)
    ctx->pc = 0x324d4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x324d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d54: 0x90c20008  lbu         $v0, 0x8($a2)
    ctx->pc = 0x324d54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x324d58: 0x26250036  addiu       $a1, $s1, 0x36
    ctx->pc = 0x324d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 54));
    // 0x324d5c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x324d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x324d60: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x324d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
    // 0x324d64: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x324d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x324d68: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x324d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x324d6c: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x324d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x324d70: 0x26260028  addiu       $a2, $s1, 0x28
    ctx->pc = 0x324d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x324d74: 0xc0c915c  jal         func_324570
    ctx->pc = 0x324D74u;
    SET_GPR_U32(ctx, 31, 0x324D7Cu);
    ctx->pc = 0x324D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324D74u;
    // 0x324d78: 0x624825  or          $t1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324570u, 0x324D74u, 0x324D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D7Cu;
label_324d7c:
    // 0x324d7c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x324D7Cu;
    {
        const bool branch_taken_0x324d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D7Cu;
        // 0x324d80: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d7c) {
            ctx->pc = 0x324DC8u;
            goto label_324dc8;
        }
    }
    ctx->pc = 0x324D84u;
    // 0x324d84: 0x0  nop
    ctx->pc = 0x324d84u;
    // NOP
label_324d88:
    // 0x324d88: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x324D88u;
    {
        const bool branch_taken_0x324d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324D88u;
        // 0x324d8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324d88) {
            ctx->pc = 0x324DC8u;
            goto label_324dc8;
        }
    }
    ctx->pc = 0x324D90u;
label_324d90:
    // 0x324d90: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324d94: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x324d94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x324d98: 0x3c048101  lui         $a0, 0x8101
    ctx->pc = 0x324d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33025 << 16));
    // 0x324d9c: 0x8425ada4  lh          $a1, -0x525C($at)
    ctx->pc = 0x324d9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946212)));
    // 0x324da0: 0x34848203  ori         $a0, $a0, 0x8203
    ctx->pc = 0x324da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33283);
    // 0x324da4: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x324da4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x324da8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x324da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x324dac: 0x830019  multu       $a0, $v1
    ctx->pc = 0x324dacu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x324db0: 0x0  nop
    ctx->pc = 0x324db0u;
    // NOP
    // 0x324db4: 0x0  nop
    ctx->pc = 0x324db4u;
    // NOP
    // 0x324db8: 0x1810  mfhi        $v1
    ctx->pc = 0x324db8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x324dbc: 0x31bc2  srl         $v1, $v1, 15
    ctx->pc = 0x324dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x324dc0: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x324dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x324dc4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x324dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_324dc8:
    // 0x324dc8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x324dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x324dcc: 0x90840008  lbu         $a0, 0x8($a0)
    ctx->pc = 0x324dccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x324dd0: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x324dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x324dd4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324DD4u;
    {
        const bool branch_taken_0x324dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x324DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DD4u;
        // 0x324dd8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324dd4) {
            ctx->pc = 0x324DE4u;
            goto label_324de4;
        }
    }
    ctx->pc = 0x324DDCu;
    // 0x324ddc: 0x92240031  lbu         $a0, 0x31($s1)
    ctx->pc = 0x324ddcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x324de0: 0x308c0080  andi        $t4, $a0, 0x80
    ctx->pc = 0x324de0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_324de4:
    // 0x324de4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324de8: 0x92260030  lbu         $a2, 0x30($s1)
    ctx->pc = 0x324de8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x324dec: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x324decu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x324df0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x324df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324df4: 0xdc24adf0  ld          $a0, -0x5210($at)
    ctx->pc = 0x324df4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 4294946288)));
    // 0x324df8: 0xc53814  dsllv       $a3, $a1, $a2
    ctx->pc = 0x324df8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x324dfc: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x324dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x324e00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324E00u;
    {
        const bool branch_taken_0x324e00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x324e00) {
            ctx->pc = 0x324E10u;
            goto label_324e10;
        }
    }
    ctx->pc = 0x324E08u;
    // 0x324e08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x324e08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e0c: 0x0  nop
    ctx->pc = 0x324e0cu;
    // NOP
label_324e10:
    // 0x324e10: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324e14: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x324e14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x324e18: 0x86260034  lh          $a2, 0x34($s1)
    ctx->pc = 0x324e18u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x324e1c: 0xdc24ae00  ld          $a0, -0x5200($at)
    ctx->pc = 0x324e1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 4294946304)));
    // 0x324e20: 0x86250036  lh          $a1, 0x36($s1)
    ctx->pc = 0x324e20u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x324e24: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x324e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x324e28: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324E28u;
    {
        const bool branch_taken_0x324e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x324E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E28u;
        // 0x324e2c: 0xc56821  addu        $t5, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e28) {
            ctx->pc = 0x324E40u;
            goto label_324e40;
        }
    }
    ctx->pc = 0x324E30u;
    // 0x324e30: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324e34: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x324e34u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x324e38: 0x8c24ada0  lw          $a0, -0x5260($at)
    ctx->pc = 0x324e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946208)));
    // 0x324e3c: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x324e3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_324e40:
    // 0x324e40: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x324e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
    // 0x324e44: 0x34846667  ori         $a0, $a0, 0x6667
    ctx->pc = 0x324e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
    // 0x324e48: 0x3c07007e  lui         $a3, 0x7E
    ctx->pc = 0x324e48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)126 << 16));
    // 0x324e4c: 0x8d0018  mult        $zero, $a0, $t5
    ctx->pc = 0x324e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x324e50: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x324e50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x324e54: 0xd57c2  srl         $t2, $t5, 31
    ctx->pc = 0x324e54u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
    // 0x324e58: 0xde290020  ld          $t1, 0x20($s1)
    ctx->pc = 0x324e58u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x324e5c: 0x24e76c40  addiu       $a3, $a3, 0x6C40
    ctx->pc = 0x324e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27712));
    // 0x324e60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x324e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e64: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x324e64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x324e68: 0x4010  mfhi        $t0
    ctx->pc = 0x324e68u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x324e6c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x324e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x324e70: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x324e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x324e74: 0x1ab001a  div         $zero, $t5, $t3
    ctx->pc = 0x324e74u;
    { int32_t divisor = GPR_S32(ctx, 11);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x324e78: 0x84083  sra         $t0, $t0, 2
    ctx->pc = 0x324e78u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 2));
    // 0x324e7c: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x324e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x324e80: 0x5010  mfhi        $t2
    ctx->pc = 0x324e80u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x324e84: 0x85c3c  dsll32      $t3, $t0, 16
    ctx->pc = 0x324e84u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 16));
    // 0x324e88: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x324e88u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x324e8c: 0xa4080  sll         $t0, $t2, 2
    ctx->pc = 0x324e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x324e90: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x324e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x324e94: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x324e94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x324e98: 0x8543c  dsll32      $t2, $t0, 16
    ctx->pc = 0x324e98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) << (32 + 16));
    // 0x324e9c: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x324e9cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x324ea0: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x324ea0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324ea4: 0x0  nop
    ctx->pc = 0x324ea4u;
    // NOP
label_324ea8:
    // 0x324ea8: 0x31280001  andi        $t0, $t1, 0x1
    ctx->pc = 0x324ea8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x324eac: 0x1100002a  beqz        $t0, . + 4 + (0x2A << 2)
    ctx->pc = 0x324EACu;
    {
        const bool branch_taken_0x324eac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x324eac) {
            ctx->pc = 0x324F58u;
            goto label_324f58;
        }
    }
    ctx->pc = 0x324EB4u;
    // 0x324eb4: 0x8cce0014  lw          $t6, 0x14($a2)
    ctx->pc = 0x324eb4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x324eb8: 0x24e80020  addiu       $t0, $a3, 0x20
    ctx->pc = 0x324eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x324ebc: 0xacee0020  sw          $t6, 0x20($a3)
    ctx->pc = 0x324ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 14));
    // 0x324ec0: 0x80ce0018  lb          $t6, 0x18($a2)
    ctx->pc = 0x324ec0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x324ec4: 0xa0ee0024  sb          $t6, 0x24($a3)
    ctx->pc = 0x324ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 36), (uint8_t)GPR_U32(ctx, 14));
    // 0x324ec8: 0x80ce0019  lb          $t6, 0x19($a2)
    ctx->pc = 0x324ec8u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 25)));
    // 0x324ecc: 0xa0ee0025  sb          $t6, 0x25($a3)
    ctx->pc = 0x324eccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 37), (uint8_t)GPR_U32(ctx, 14));
    // 0x324ed0: 0x80ce001a  lb          $t6, 0x1A($a2)
    ctx->pc = 0x324ed0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x324ed4: 0xa0ee0026  sb          $t6, 0x26($a3)
    ctx->pc = 0x324ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 38), (uint8_t)GPR_U32(ctx, 14));
    // 0x324ed8: 0x90ce001b  lbu         $t6, 0x1B($a2)
    ctx->pc = 0x324ed8u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 27)));
    // 0x324edc: 0xa0ee0027  sb          $t6, 0x27($a3)
    ctx->pc = 0x324edcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 39), (uint8_t)GPR_U32(ctx, 14));
    // 0x324ee0: 0x90ce001c  lbu         $t6, 0x1C($a2)
    ctx->pc = 0x324ee0u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x324ee4: 0xa0ee0028  sb          $t6, 0x28($a3)
    ctx->pc = 0x324ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 40), (uint8_t)GPR_U32(ctx, 14));
    // 0x324ee8: 0x90ce001d  lbu         $t6, 0x1D($a2)
    ctx->pc = 0x324ee8u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 29)));
    // 0x324eec: 0xa0ee0029  sb          $t6, 0x29($a3)
    ctx->pc = 0x324eecu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 41), (uint8_t)GPR_U32(ctx, 14));
    // 0x324ef0: 0x90ce001e  lbu         $t6, 0x1E($a2)
    ctx->pc = 0x324ef0u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 30)));
    // 0x324ef4: 0xa0ee002a  sb          $t6, 0x2A($a3)
    ctx->pc = 0x324ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 42), (uint8_t)GPR_U32(ctx, 14));
    // 0x324ef8: 0x90ce001f  lbu         $t6, 0x1F($a2)
    ctx->pc = 0x324ef8u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 31)));
    // 0x324efc: 0xa0ee002b  sb          $t6, 0x2B($a3)
    ctx->pc = 0x324efcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 43), (uint8_t)GPR_U32(ctx, 14));
    // 0x324f00: 0x80ce0020  lb          $t6, 0x20($a2)
    ctx->pc = 0x324f00u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x324f04: 0xa0ee002c  sb          $t6, 0x2C($a3)
    ctx->pc = 0x324f04u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 44), (uint8_t)GPR_U32(ctx, 14));
    // 0x324f08: 0x80ce0021  lb          $t6, 0x21($a2)
    ctx->pc = 0x324f08u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 33)));
    // 0x324f0c: 0xa0ee002d  sb          $t6, 0x2D($a3)
    ctx->pc = 0x324f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 45), (uint8_t)GPR_U32(ctx, 14));
    // 0x324f10: 0x80ce0022  lb          $t6, 0x22($a2)
    ctx->pc = 0x324f10u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 34)));
    // 0x324f14: 0xa0ee002e  sb          $t6, 0x2E($a3)
    ctx->pc = 0x324f14u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 46), (uint8_t)GPR_U32(ctx, 14));
    // 0x324f18: 0x90ce0023  lbu         $t6, 0x23($a2)
    ctx->pc = 0x324f18u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 35)));
    // 0x324f1c: 0x11800008  beqz        $t4, . + 4 + (0x8 << 2)
    ctx->pc = 0x324F1Cu;
    {
        const bool branch_taken_0x324f1c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F1Cu;
        // 0x324f20: 0xa0ee002f  sb          $t6, 0x2F($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 47), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f1c) {
            ctx->pc = 0x324F40u;
            goto label_324f40;
        }
    }
    ctx->pc = 0x324F24u;
    // 0x324f24: 0x910e000b  lbu         $t6, 0xB($t0)
    ctx->pc = 0x324f24u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 11)));
    // 0x324f28: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x324F28u;
    {
        const bool branch_taken_0x324f28 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x324f28) {
            ctx->pc = 0x324F38u;
            goto label_324f38;
        }
    }
    ctx->pc = 0x324F30u;
    // 0x324f30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x324F30u;
    {
        const bool branch_taken_0x324f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F30u;
        // 0x324f34: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f30) {
            ctx->pc = 0x324F48u;
            goto label_324f48;
        }
    }
    ctx->pc = 0x324F38u;
label_324f38:
    // 0x324f38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x324F38u;
    {
        const bool branch_taken_0x324f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F38u;
        // 0x324f3c: 0xad040000  sw          $a0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f38) {
            ctx->pc = 0x324F48u;
            goto label_324f48;
        }
    }
    ctx->pc = 0x324F40u;
label_324f40:
    // 0x324f40: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x324f40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x324f44: 0x0  nop
    ctx->pc = 0x324f44u;
    // NOP
label_324f48:
    // 0x324f48: 0xa100000c  sb          $zero, 0xC($t0)
    ctx->pc = 0x324f48u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x324f4c: 0xa10b0005  sb          $t3, 0x5($t0)
    ctx->pc = 0x324f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 11));
    // 0x324f50: 0xa10a0004  sb          $t2, 0x4($t0)
    ctx->pc = 0x324f50u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 10));
    // 0x324f54: 0xa10d000e  sb          $t5, 0xE($t0)
    ctx->pc = 0x324f54u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 14), (uint8_t)GPR_U32(ctx, 13));
label_324f58:
    // 0x324f58: 0x9487a  dsrl        $t1, $t1, 1
    ctx->pc = 0x324f58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
    // 0x324f5c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x324f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x324f60: 0x1520ffd1  bnez        $t1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x324F60u;
    {
        const bool branch_taken_0x324f60 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x324F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F60u;
        // 0x324f64: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f60) {
            ctx->pc = 0x324EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324ea8;
        }
    }
    ctx->pc = 0x324F68u;
    // 0x324f68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324f6c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x324f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x324f70: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x324f70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x324f74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x324f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x324f78: 0xdc24ae10  ld          $a0, -0x51F0($at)
    ctx->pc = 0x324f78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 4294946320)));
    // 0x324f7c: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x324f7cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x324f80: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x324f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x324f84: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x324f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x324f88: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x324f88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x324f8c: 0xfc23ae10  sd          $v1, -0x51F0($at)
    ctx->pc = 0x324f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294946320), GPR_U64(ctx, 3));
    // 0x324f90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x324f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324f94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x324f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324f98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x324f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x324F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F9Cu;
        // 0x324fa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324FA4u;
}
