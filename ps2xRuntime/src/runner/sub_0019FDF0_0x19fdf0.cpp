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

// Function: sub_0019FDF0
// Address: 0x19fdf0 - 0x1a0230
void sub_0019FDF0_0x19fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FDF0_0x19fdf0");
#endif

    switch (ctx->pc) {
        case 0x19fea8u: goto label_19fea8;
        case 0x19feb0u: goto label_19feb0;
        case 0x19ff6cu: goto label_19ff6c;
        case 0x19ff7cu: goto label_19ff7c;
        case 0x19ffacu: goto label_19ffac;
        case 0x19ffbcu: goto label_19ffbc;
        case 0x1a000cu: goto label_1a000c;
        case 0x1a0050u: goto label_1a0050;
        case 0x1a0080u: goto label_1a0080;
        case 0x1a0088u: goto label_1a0088;
        case 0x1a017cu: goto label_1a017c;
        case 0x1a01a0u: goto label_1a01a0;
        default: break;
    }

    ctx->pc = 0x19fdf0u;

    // 0x19fdf0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x19fdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x19fdf4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19fdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19fdf8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19fdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x19fdfc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x19fdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x19fe00: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x19fe00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x19fe04: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x19fe04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x19fe08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x19fe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x19fe0c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x19fe0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x19fe10: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x19fe10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe14: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19fe14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x19fe18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19fe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19fe1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19fe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19fe20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19fe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19fe24: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x19fe24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19fe28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19fe28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fe2c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x19fe2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19fe30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19fe30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19fe34: 0x9025cea4  lbu         $a1, -0x315C($at)
    ctx->pc = 0x19fe34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x19fe38: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x19fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x19fe3c: 0x8c940040  lw          $s4, 0x40($a0)
    ctx->pc = 0x19fe3cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x19fe40: 0x8c870028  lw          $a3, 0x28($a0)
    ctx->pc = 0x19fe40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x19fe44: 0x8c93002c  lw          $s3, 0x2C($a0)
    ctx->pc = 0x19fe44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x19fe48: 0x8c960030  lw          $s6, 0x30($a0)
    ctx->pc = 0x19fe48u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19fe4c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x19fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19fe50: 0x8c970010  lw          $s7, 0x10($a0)
    ctx->pc = 0x19fe50u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x19fe54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x19fe58: 0x8c920014  lw          $s2, 0x14($a0)
    ctx->pc = 0x19fe58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19fe5c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x19fe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19fe60: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x19fe60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x19fe64: 0x8e880078  lw          $t0, 0x78($s4)
    ctx->pc = 0x19fe64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x19fe68: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x19fe68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x19fe6c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x19fe6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x19fe70: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x19fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x19fe74: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x19fe74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x19fe78: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x19fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x19fe7c: 0x8cc60030  lw          $a2, 0x30($a2)
    ctx->pc = 0x19fe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x19fe80: 0x8c9e0024  lw          $fp, 0x24($a0)
    ctx->pc = 0x19fe80u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x19fe84: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x19fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x19fe88: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x19fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x19fe8c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x19fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19fe90: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x19fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x19fe94: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x19fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x19fe98: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x19fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x19fe9c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x19fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x19fea0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x19FEA0u;
    {
        const bool branch_taken_0x19fea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEA0u;
        // 0x19fea4: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fea0) {
            ctx->pc = 0x1A0068u;
            goto label_1a0068;
        }
    }
    ctx->pc = 0x19FEA8u;
label_19fea8:
    // 0x19fea8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x19FEA8u;
    {
        const bool branch_taken_0x19fea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FEA8u;
        // 0x19feac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fea8) {
            ctx->pc = 0x1A0058u;
            goto label_1a0058;
        }
    }
    ctx->pc = 0x19FEB0u;
label_19feb0:
    // 0x19feb0: 0x3c023d04  lui         $v0, 0x3D04
    ctx->pc = 0x19feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15620 << 16));
    // 0x19feb4: 0x34422108  ori         $v0, $v0, 0x2108
    ctx->pc = 0x19feb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8456);
    // 0x19feb8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x19feb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x19febc: 0x2131818  mult        $v1, $s0, $s3
    ctx->pc = 0x19febcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19fec0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x19fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x19fec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19fec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19fec8: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x19fec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x19fecc: 0x4487b000  mtc1        $a3, $f22
    ctx->pc = 0x19feccu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x19fed0: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x19fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x19fed4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19fed8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19fedc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19fee0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19fee4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x19fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x19fee8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19feec: 0x24840  sll         $t1, $v0, 1
    ctx->pc = 0x19feecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19fef0: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x19fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x19fef4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x19fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x19fef8: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x19fef8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19fefc: 0x492821  addu        $a1, $v0, $t1
    ctx->pc = 0x19fefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x19ff00: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x19ff04: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x19ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x19ff08: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x19ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x19ff0c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x19ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x19ff10: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x19ff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ff14: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x19ff14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x19ff18: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x19ff18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ff1c: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x19ff1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x19ff20: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x19ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ff24: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x19ff24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x19ff28: 0xafa7017c  sw          $a3, 0x17C($sp)
    ctx->pc = 0x19ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 7));
    // 0x19ff2c: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x19ff2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19ff30: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x19ff30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19ff34: 0x8e820128  lw          $v0, 0x128($s4)
    ctx->pc = 0x19ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
    // 0x19ff38: 0x30a7001f  andi        $a3, $a1, 0x1F
    ctx->pc = 0x19ff38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x19ff3c: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x19ff3cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x19ff40: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x19ff40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19ff44: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x19ff44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x19ff48: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x19ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x19ff4c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x19ff4cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ff50: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x19ff50u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19ff54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ff54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19ff58: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19ff58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ff5c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19ff5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19ff60: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x19ff60u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x19ff64: 0xc041442  jal         func_105108
    ctx->pc = 0x19FF64u;
    SET_GPR_U32(ctx, 31, 0x19FF6Cu);
    ctx->pc = 0x19FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF64u;
    // 0x19ff68: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x19FF64u, 0x19FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF6Cu;
label_19ff6c:
    // 0x19ff6c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x19ff6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x19ff70: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x19ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x19ff74: 0xc0414dc  jal         func_105370
    ctx->pc = 0x19FF74u;
    SET_GPR_U32(ctx, 31, 0x19FF7Cu);
    ctx->pc = 0x19FF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF74u;
    // 0x19ff78: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19FF74u, 0x19FF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF7Cu;
label_19ff7c:
    // 0x19ff7c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19ff80: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x19ff80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x19ff84: 0x8e830128  lw          $v1, 0x128($s4)
    ctx->pc = 0x19ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
    // 0x19ff88: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x19ff88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19ff8c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x19ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x19ff90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19ff94: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x19ff94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x19ff98: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x19ff98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x19ff9c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x19ff9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x19ffa0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x19ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x19ffa4: 0xc041442  jal         func_105108
    ctx->pc = 0x19FFA4u;
    SET_GPR_U32(ctx, 31, 0x19FFACu);
    ctx->pc = 0x19FFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFA4u;
    // 0x19ffa8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x19FFA4u, 0x19FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFACu;
label_19ffac:
    // 0x19ffac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19ffacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x19ffb0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x19ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x19ffb4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x19FFB4u;
    SET_GPR_U32(ctx, 31, 0x19FFBCu);
    ctx->pc = 0x19FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FFB4u;
    // 0x19ffb8: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x19FFB4u, 0x19FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FFBCu;
label_19ffbc:
    // 0x19ffbc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x19ffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x19ffc0: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x19ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x19ffc4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x19ffc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ffc8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x19ffc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ffcc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x19ffccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19ffd0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19ffd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19ffd4: 0x72131018  mult1       $v0, $s0, $s3
    ctx->pc = 0x19ffd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19ffd8: 0x4be11068  vadd.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x19ffd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19ffdc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19ffe0: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x19ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x19ffe4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19ffe8: 0x2e23021  addu        $a2, $s7, $v0
    ctx->pc = 0x19ffe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x19ffec: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x19ffecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19fff0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x19fff0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19fff4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x19fff4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x19fff8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19fffc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x19fffcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1a0000: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a0000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a0004: 0xc0414c0  jal         func_105300
    ctx->pc = 0x1A0004u;
    SET_GPR_U32(ctx, 31, 0x1A000Cu);
    ctx->pc = 0x1A0008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0004u;
    // 0x1a0008: 0x2e22021  addu        $a0, $s7, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x1A0004u, 0x1A000Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A000Cu;
label_1a000c:
    // 0x1a000c: 0x72131018  mult1       $v0, $s0, $s3
    ctx->pc = 0x1a000cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a0010: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1a0010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1a0014: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a0014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a0018: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1a0018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a001c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1a001cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a0020: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1a0020u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0024: 0x0  nop
    ctx->pc = 0x1a0024u;
    // NOP
    // 0x1a0028: 0x46160301  sub.s       $f12, $f0, $f22
    ctx->pc = 0x1a0028u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1a002c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a002cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0030: 0x2131018  mult        $v0, $s0, $s3
    ctx->pc = 0x1a0030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a0034: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a0034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a0038: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1a0038u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a003c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1a003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1a0040: 0xb71821  addu        $v1, $a1, $s7
    ctx->pc = 0x1a0040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x1a0044: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1a0044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a0048: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1A0048u;
    SET_GPR_U32(ctx, 31, 0x1A0050u);
    ctx->pc = 0x1A004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0048u;
    // 0x1a004c: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1A0048u, 0x1A0050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0050u;
label_1a0050:
    // 0x1a0050: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a0050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a0054: 0x0  nop
    ctx->pc = 0x1a0054u;
    // NOP
label_1a0058:
    // 0x1a0058: 0x233182b  sltu        $v1, $s1, $s3
    ctx->pc = 0x1a0058u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1a005c: 0x1460ff94  bnez        $v1, . + 4 + (-0x6C << 2)
    ctx->pc = 0x1A005Cu;
    {
        const bool branch_taken_0x1a005c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a005c) {
            ctx->pc = 0x19FEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19feb0;
        }
    }
    ctx->pc = 0x1A0064u;
    // 0x1a0064: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a0064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a0068:
    // 0x1a0068: 0x216182b  sltu        $v1, $s0, $s6
    ctx->pc = 0x1a0068u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1a006c: 0x1460ff8e  bnez        $v1, . + 4 + (-0x72 << 2)
    ctx->pc = 0x1A006Cu;
    {
        const bool branch_taken_0x1a006c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a006c) {
            ctx->pc = 0x19FEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fea8;
        }
    }
    ctx->pc = 0x1A0074u;
    // 0x1a0074: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1A0074u;
    {
        const bool branch_taken_0x1a0074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0074u;
        // 0x1a0078: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0074) {
            ctx->pc = 0x1A01B8u;
            goto label_1a01b8;
        }
    }
    ctx->pc = 0x1A007Cu;
    // 0x1a007c: 0x0  nop
    ctx->pc = 0x1a007cu;
    // NOP
label_1a0080:
    // 0x1a0080: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1A0080u;
    {
        const bool branch_taken_0x1a0080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0080u;
        // 0x1a0084: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0080) {
            ctx->pc = 0x1A01A8u;
            goto label_1a01a8;
        }
    }
    ctx->pc = 0x1A0088u;
label_1a0088:
    // 0x1a0088: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1a0088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a008c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1a008cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0090: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1a0090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0094: 0x1a200002  blez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0094u;
    {
        const bool branch_taken_0x1a0094 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x1A0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0094u;
        // 0x1a0098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0094) {
            ctx->pc = 0x1A00A0u;
            goto label_1a00a0;
        }
    }
    ctx->pc = 0x1A009Cu;
    // 0x1a009c: 0x2627ffff  addiu       $a3, $s1, -0x1
    ctx->pc = 0x1a009cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1a00a0:
    // 0x1a00a0: 0x1a000003  blez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A00A0u;
    {
        const bool branch_taken_0x1a00a0 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x1a00a0) {
            ctx->pc = 0x1A00B0u;
            goto label_1a00b0;
        }
    }
    ctx->pc = 0x1A00A8u;
    // 0x1a00a8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1a00a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1a00ac: 0x0  nop
    ctx->pc = 0x1a00acu;
    // NOP
label_1a00b0:
    // 0x1a00b0: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x1a00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1a00b4: 0x222082b  sltu        $at, $s1, $v0
    ctx->pc = 0x1a00b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a00b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A00B8u;
    {
        const bool branch_taken_0x1a00b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a00b8) {
            ctx->pc = 0x1A00C8u;
            goto label_1a00c8;
        }
    }
    ctx->pc = 0x1A00C0u;
    // 0x1a00c0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1a00c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1a00c4: 0x0  nop
    ctx->pc = 0x1a00c4u;
    // NOP
label_1a00c8:
    // 0x1a00c8: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x1a00c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1a00cc: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1a00ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a00d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A00D0u;
    {
        const bool branch_taken_0x1a00d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a00d0) {
            ctx->pc = 0x1A00E0u;
            goto label_1a00e0;
        }
    }
    ctx->pc = 0x1A00D8u;
    // 0x1a00d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a00d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a00dc: 0x0  nop
    ctx->pc = 0x1a00dcu;
    // NOP
label_1a00e0:
    // 0x1a00e0: 0x71131018  mult1       $v0, $t0, $s3
    ctx->pc = 0x1a00e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a00e4: 0x1133018  mult        $a2, $t0, $s3
    ctx->pc = 0x1a00e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1a00e8: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x1a00e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a00ec: 0x71131018  mult1       $v0, $t0, $s3
    ctx->pc = 0x1a00ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a00f0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1a00f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a00f4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1a00f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a00f8: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x1a00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1a00fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a0100: 0x2454021  addu        $t0, $s2, $a1
    ctx->pc = 0x1a0100u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1a0104: 0x1262821  addu        $a1, $t1, $a2
    ctx->pc = 0x1a0104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1a0108: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1a0108u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1a010c: 0x79090000  lq          $t1, 0x0($t0)
    ctx->pc = 0x1a010cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a0110: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x1a0110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1a0114: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1a0114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a0118: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1a0118u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a011c: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x1a011cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a0120: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1a0120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1a0124: 0x2424021  addu        $t0, $s2, $v0
    ctx->pc = 0x1a0124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1a0128: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x1a0128u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1a012c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1a012cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a0130: 0x2443821  addu        $a3, $s2, $a0
    ctx->pc = 0x1a0130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a0134: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1a0134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a0138: 0x2132018  mult        $a0, $s0, $s3
    ctx->pc = 0x1a0138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a013c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1a013cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1a0140: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x1a0140u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x1a0144: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1a0144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1a0148: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1a0148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a014c: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1a014cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0150: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x1a0150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x1a0154: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x1a0154u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a0158: 0x7c690000  sq          $t1, 0x0($v1)
    ctx->pc = 0x1a0158u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 9));
    // 0x1a015c: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x1a015cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1a0160: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x1a0160u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a0164: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1a0164u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1a0168: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1a0168u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a016c: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1a016cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0170: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1a0170u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a0174: 0xc041460  jal         func_105180
    ctx->pc = 0x1A0174u;
    SET_GPR_U32(ctx, 31, 0x1A017Cu);
    ctx->pc = 0x1A0178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0174u;
    // 0x1a0178: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x1A0174u, 0x1A017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A017Cu;
label_1a017c:
    // 0x1a017c: 0x72131018  mult1       $v0, $s0, $s3
    ctx->pc = 0x1a017cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a0180: 0x2131818  mult        $v1, $s0, $s3
    ctx->pc = 0x1a0180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a0184: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a0184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a0188: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a0188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a018c: 0x3c22821  addu        $a1, $fp, $v0
    ctx->pc = 0x1a018cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1a0190: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1a0190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a0194: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a0194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a0198: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1A0198u;
    SET_GPR_U32(ctx, 31, 0x1A01A0u);
    ctx->pc = 0x1A019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0198u;
    // 0x1a019c: 0x3c22021  addu        $a0, $fp, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1A0198u, 0x1A01A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A01A0u;
label_1a01a0:
    // 0x1a01a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a01a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a01a4: 0x0  nop
    ctx->pc = 0x1a01a4u;
    // NOP
label_1a01a8:
    // 0x1a01a8: 0x233182b  sltu        $v1, $s1, $s3
    ctx->pc = 0x1a01a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1a01ac: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1A01ACu;
    {
        const bool branch_taken_0x1a01ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a01ac) {
            ctx->pc = 0x1A0088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0088;
        }
    }
    ctx->pc = 0x1A01B4u;
    // 0x1a01b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a01b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a01b8:
    // 0x1a01b8: 0x216182b  sltu        $v1, $s0, $s6
    ctx->pc = 0x1a01b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1a01bc: 0x1460ffb0  bnez        $v1, . + 4 + (-0x50 << 2)
    ctx->pc = 0x1A01BCu;
    {
        const bool branch_taken_0x1a01bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a01bc) {
            ctx->pc = 0x1A0080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0080;
        }
    }
    ctx->pc = 0x1A01C4u;
    // 0x1a01c4: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x1a01c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1a01c8: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x1a01c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1a01cc: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x1a01ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x1a01d0: 0xaea40014  sw          $a0, 0x14($s5)
    ctx->pc = 0x1a01d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 4));
    // 0x1a01d4: 0x8ea40018  lw          $a0, 0x18($s5)
    ctx->pc = 0x1a01d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1a01d8: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x1a01d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1a01dc: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x1a01dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
    // 0x1a01e0: 0xaea4001c  sw          $a0, 0x1C($s5)
    ctx->pc = 0x1a01e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 4));
    // 0x1a01e4: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1a01e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1a01e8: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x1a01e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x1a01ec: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x1a01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
    // 0x1a01f0: 0xaea40024  sw          $a0, 0x24($s5)
    ctx->pc = 0x1a01f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 4));
    // 0x1a01f4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1a01f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a01f8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1a01f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a01fc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1a01fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a0200: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1a0200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a0204: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1a0204u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a0208: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a0208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a020c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1a020cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a0210: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a0210u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a0214: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a0214u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a0218: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a0218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a021c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a021cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0220: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a0220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0224: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a0224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0228: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0228u;
        // 0x1a022c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0230u;
}
