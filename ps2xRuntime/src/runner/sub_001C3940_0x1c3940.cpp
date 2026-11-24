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

// Function: sub_001C3940
// Address: 0x1c3940 - 0x1c3fe8
void sub_001C3940_0x1c3940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3940_0x1c3940");
#endif

    switch (ctx->pc) {
        case 0x1c39f0u: goto label_1c39f0;
        case 0x1c3a6cu: goto label_1c3a6c;
        case 0x1c3ae0u: goto label_1c3ae0;
        case 0x1c3b00u: goto label_1c3b00;
        case 0x1c3b7cu: goto label_1c3b7c;
        case 0x1c3b98u: goto label_1c3b98;
        case 0x1c3be0u: goto label_1c3be0;
        case 0x1c3c68u: goto label_1c3c68;
        case 0x1c3c90u: goto label_1c3c90;
        case 0x1c3ca8u: goto label_1c3ca8;
        case 0x1c3cb4u: goto label_1c3cb4;
        case 0x1c3d08u: goto label_1c3d08;
        case 0x1c3d1cu: goto label_1c3d1c;
        case 0x1c3e20u: goto label_1c3e20;
        case 0x1c3e94u: goto label_1c3e94;
        case 0x1c3ed4u: goto label_1c3ed4;
        case 0x1c3f50u: goto label_1c3f50;
        default: break;
    }

    ctx->pc = 0x1c3940u;

    // 0x1c3940: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1c3940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1c3944: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x1c3944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1c3948: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c3948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1c394c: 0x2409fff0  addiu       $t1, $zero, -0x10
    ctx->pc = 0x1c394cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1c3950: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1c3950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1c3954: 0x692824  and         $a1, $v1, $t1
    ctx->pc = 0x1c3954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x1c3958: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1c3958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1c395c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c395cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1c3960: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c3960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c3964: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c3964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c3968: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c3968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c396c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c396cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c3970: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c3970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3974: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c3974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c3978: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c3978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c397c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c397cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c3980: 0xafa60118  sw          $a2, 0x118($sp)
    ctx->pc = 0x1c3980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 6));
    // 0x1c3984: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1c3984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1c3988: 0xafa4011c  sw          $a0, 0x11C($sp)
    ctx->pc = 0x1c3988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 4));
    // 0x1c398c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1c398cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1c3990: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1c3990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x1c3994: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1c3994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1c3998: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1c3998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1c399c: 0x94c3006a  lhu         $v1, 0x6A($a2)
    ctx->pc = 0x1c399cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 106)));
    // 0x1c39a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c39a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c39a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c39a8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1c39ac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1c39acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c39b0: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x1c39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1c39b4: 0x491824  and         $v1, $v0, $t1
    ctx->pc = 0x1c39b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1c39b8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1c39b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1c39bc: 0x94c4006a  lhu         $a0, 0x6A($a2)
    ctx->pc = 0x1c39bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 106)));
    // 0x1c39c0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1c39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c39c4: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x1c39c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c39c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c39c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c39cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c39ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c39d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c39d4: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1c39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1c39d8: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1c39d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1c39dc: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x1C39DCu;
    {
        const bool branch_taken_0x1c39dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C39E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C39DCu;
        // 0x1c39e0: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c39dc) {
            ctx->pc = 0x1C3AC0u;
            goto label_1c3ac0;
        }
    }
    ctx->pc = 0x1C39E4u;
    // 0x1c39e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c39e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c39e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c39ec: 0x0  nop
    ctx->pc = 0x1c39ecu;
    // NOP
label_1c39f0:
    // 0x1c39f0: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1c39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1c39f4: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x1c39f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x1c39f8: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1c39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1c39fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c39fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3a00: 0x24e7f520  addiu       $a3, $a3, -0xAE0
    ctx->pc = 0x1c3a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964512));
    // 0x1c3a04: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1c3a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c3a08: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x1c3a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
    // 0x1c3a0c: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x1c3a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x1c3a10: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c3a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c3a14: 0x8c49000c  lw          $t1, 0xC($v0)
    ctx->pc = 0x1c3a14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c3a18: 0x1319021  addu        $s2, $t1, $s1
    ctx->pc = 0x1c3a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x1c3a1c: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x1c3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x1c3a20: 0xa2480004  sb          $t0, 0x4($s2)
    ctx->pc = 0x1c3a20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x1c3a24: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1c3a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x1c3a28: 0xae47000c  sw          $a3, 0xC($s2)
    ctx->pc = 0x1c3a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 7));
    // 0x1c3a2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3a30: 0xae460078  sw          $a2, 0x78($s2)
    ctx->pc = 0x1c3a30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 6));
    // 0x1c3a34: 0xae450030  sw          $a1, 0x30($s2)
    ctx->pc = 0x1c3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
    // 0x1c3a38: 0x460203c2  mul.s       $f15, $f0, $f2
    ctx->pc = 0x1c3a38u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c3a3c: 0xae440034  sw          $a0, 0x34($s2)
    ctx->pc = 0x1c3a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 4));
    // 0x1c3a40: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x1c3a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x1c3a44: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1c3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1c3a48: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x1c3a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3a4c: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x1c3a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c3a50: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1c3a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c3a54: 0x46010382  mul.s       $f14, $f0, $f1
    ctx->pc = 0x1c3a54u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c3a58: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c3a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c3a5c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1c3a5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1c3a60: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1c3a60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c3a64: 0xc06862c  jal         func_1A18B0
    ctx->pc = 0x1C3A64u;
    SET_GPR_U32(ctx, 31, 0x1C3A6Cu);
    ctx->pc = 0x1C3A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3A64u;
    // 0x1c3a68: 0x46030342  mul.s       $f13, $f0, $f3 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A18B0u, 0x1C3A64u, 0x1C3A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A6Cu;
label_1c3a6c:
    // 0x1c3a6c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1c3a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3a70: 0x24020301  addiu       $v0, $zero, 0x301
    ctx->pc = 0x1c3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x1c3a74: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x1c3a74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3a78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c3a78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c3a7c: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x1c3a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3a80: 0x263100a0  addiu       $s1, $s1, 0xA0
    ctx->pc = 0x1c3a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x1c3a84: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x1c3a84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x1c3a88: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x1c3a88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x1c3a8c: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x1c3a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x1c3a90: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x1c3a90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x1c3a94: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x1c3a94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x1c3a98: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x1c3a98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x1c3a9c: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x1c3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
    // 0x1c3aa0: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x1c3aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    // 0x1c3aa4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1c3aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1c3aa8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1c3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1c3aac: 0x9444006a  lhu         $a0, 0x6A($v0)
    ctx->pc = 0x1c3aacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 106)));
    // 0x1c3ab0: 0x264102b  sltu        $v0, $s3, $a0
    ctx->pc = 0x1c3ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c3ab4: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1C3AB4u;
    {
        const bool branch_taken_0x1c3ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3AB4u;
        // 0x1c3ab8: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ab4) {
            ctx->pc = 0x1C39F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c39f0;
        }
    }
    ctx->pc = 0x1C3ABCu;
    // 0x1c3abc: 0x0  nop
    ctx->pc = 0x1c3abcu;
    // NOP
label_1c3ac0:
    // 0x1c3ac0: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x1c3ac0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c3ac4: 0x1020011e  beqz        $at, . + 4 + (0x11E << 2)
    ctx->pc = 0x1C3AC4u;
    {
        const bool branch_taken_0x1c3ac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3AC4u;
        // 0x1c3ac8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ac4) {
            ctx->pc = 0x1C3F40u;
            goto label_1c3f40;
        }
    }
    ctx->pc = 0x1C3ACCu;
    // 0x1c3acc: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1c3accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x1c3ad0: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x1c3ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x1c3ad4: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1c3ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x1c3ad8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1c3ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1c3adc: 0x0  nop
    ctx->pc = 0x1c3adcu;
    // NOP
label_1c3ae0:
    // 0x1c3ae0: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1c3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1c3ae4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1c3ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c3ae8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1c3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c3aec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1c3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c3af0: 0x82a821  addu        $s5, $a0, $v0
    ctx->pc = 0x1c3af0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c3af4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1c3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c3af8: 0xc06865c  jal         func_1A1970
    ctx->pc = 0x1C3AF8u;
    SET_GPR_U32(ctx, 31, 0x1C3B00u);
    ctx->pc = 0x1C3AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3AF8u;
    // 0x1c3afc: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1970u, 0x1C3AF8u, 0x1C3B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B00u;
label_1c3b00:
    // 0x1c3b00: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1c3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1c3b04: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1c3b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1c3b08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3b0c: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x1c3b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1c3b10: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x1c3b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1c3b14: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1c3b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c3b18: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x1c3b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c3b1c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1c3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c3b20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1c3b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c3b24: 0x904400c5  lbu         $a0, 0xC5($v0)
    ctx->pc = 0x1c3b24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 197)));
    // 0x1c3b28: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3B28u;
    {
        const bool branch_taken_0x1c3b28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c3b28) {
            ctx->pc = 0x1C3B58u;
            goto label_1c3b58;
        }
    }
    ctx->pc = 0x1C3B30u;
    // 0x1c3b30: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1c3b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3b34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3b38: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1c3b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c3b3c: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x1c3b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x1c3b40: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1c3b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3b44: 0xe6a00014  swc1        $f0, 0x14($s5)
    ctx->pc = 0x1c3b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x1c3b48: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1c3b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3b4c: 0xe6a00018  swc1        $f0, 0x18($s5)
    ctx->pc = 0x1c3b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x1c3b50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C3B50u;
    {
        const bool branch_taken_0x1c3b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3B50u;
        // 0x1c3b54: 0xaea2001c  sw          $v0, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3b50) {
            ctx->pc = 0x1C3B88u;
            goto label_1c3b88;
        }
    }
    ctx->pc = 0x1C3B58u;
label_1c3b58:
    // 0x1c3b58: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1c3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c3b5c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1c3b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c3b60: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1c3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1c3b64: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1c3b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1c3b68: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x1c3b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1c3b6c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1c3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c3b70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3b74: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C3B74u;
    SET_GPR_U32(ctx, 31, 0x1C3B7Cu);
    ctx->pc = 0x1C3B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B74u;
    // 0x1c3b78: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C3B74u, 0x1C3B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B7Cu;
label_1c3b7c:
    // 0x1c3b7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3b80: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1c3b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c3b84: 0xaea2001c  sw          $v0, 0x1C($s5)
    ctx->pc = 0x1c3b84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 2));
label_1c3b88:
    // 0x1c3b88: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1c3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1c3b8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c3b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3b90: 0xc071280  jal         func_1C4A00
    ctx->pc = 0x1C3B90u;
    SET_GPR_U32(ctx, 31, 0x1C3B98u);
    ctx->pc = 0x1C3B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3B90u;
    // 0x1c3b94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4A00u, 0x1C3B90u, 0x1C3B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3B98u;
label_1c3b98:
    // 0x1c3b98: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1C3B98u;
    {
        const bool branch_taken_0x1c3b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3b98) {
            ctx->pc = 0x1C3EF8u;
            goto label_1c3ef8;
        }
    }
    ctx->pc = 0x1C3BA0u;
    // 0x1c3ba0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1c3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c3ba4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ba8: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x1c3ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
    // 0x1c3bac: 0xaea20078  sw          $v0, 0x78($s5)
    ctx->pc = 0x1c3bacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 2));
    // 0x1c3bb0: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1c3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1c3bb4: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x1c3bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x1c3bb8: 0x94440068  lhu         $a0, 0x68($v0)
    ctx->pc = 0x1c3bb8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1c3bbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c3bc0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c3bc4: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x1c3bc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c3bc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3bcc: 0x102000ca  beqz        $at, . + 4 + (0xCA << 2)
    ctx->pc = 0x1C3BCCu;
    {
        const bool branch_taken_0x1c3bcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BCCu;
        // 0x1c3bd0: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bcc) {
            ctx->pc = 0x1C3EF8u;
            goto label_1c3ef8;
        }
    }
    ctx->pc = 0x1C3BD4u;
    // 0x1c3bd4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1c3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1c3bd8: 0x8c45007c  lw          $a1, 0x7C($v0)
    ctx->pc = 0x1c3bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1c3bdc: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x1c3bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_1c3be0:
    // 0x1c3be0: 0x90620028  lbu         $v0, 0x28($v1)
    ctx->pc = 0x1c3be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1c3be4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c3be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c3be8: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x1C3BE8u;
    {
        const bool branch_taken_0x1c3be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3be8) {
            ctx->pc = 0x1C3EE0u;
            goto label_1c3ee0;
        }
    }
    ctx->pc = 0x1C3BF0u;
    // 0x1c3bf0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1c3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1c3bf4: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1c3bf4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3bf8: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1c3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1c3bfc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1c3bfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3c00: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c3c00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c3c04: 0x145000b6  bne         $v0, $s0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1C3C04u;
    {
        const bool branch_taken_0x1c3c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C3C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C04u;
        // 0x1c3c08: 0x8ede0004  lw          $fp, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c04) {
            ctx->pc = 0x1C3EE0u;
            goto label_1c3ee0;
        }
    }
    ctx->pc = 0x1C3C0Cu;
    // 0x1c3c0c: 0x3c034780  lui         $v1, 0x4780
    ctx->pc = 0x1c3c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18304 << 16));
    // 0x1c3c10: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1c3c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1c3c14: 0xac238100  sw          $v1, -0x7F00($at)
    ctx->pc = 0x1c3c14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x858100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x858100u, _value); } while (0);
    // 0x1c3c18: 0x3c02c780  lui         $v0, 0xC780
    ctx->pc = 0x1c3c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51072 << 16));
    // 0x1c3c1c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1c3c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1c3c20: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c3c20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c24: 0xac238104  sw          $v1, -0x7EFC($at)
    ctx->pc = 0x1c3c24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x858104u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x858104u, _value); } while (0);
    // 0x1c3c28: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1c3c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1c3c2c: 0xac238108  sw          $v1, -0x7EF8($at)
    ctx->pc = 0x1c3c2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x858108u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x858108u, _value); } while (0);
    // 0x1c3c30: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1c3c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1c3c34: 0xac228110  sw          $v0, -0x7EF0($at)
    ctx->pc = 0x1c3c34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x858110u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x858110u, _value); } while (0);
    // 0x1c3c38: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1c3c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1c3c3c: 0xac228114  sw          $v0, -0x7EEC($at)
    ctx->pc = 0x1c3c3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x858114u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x858114u, _value); } while (0);
    // 0x1c3c40: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1c3c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1c3c44: 0xac228118  sw          $v0, -0x7EE8($at)
    ctx->pc = 0x1c3c44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x858118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x858118u, _value); } while (0);
    // 0x1c3c48: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1c3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1c3c4c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1c3c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1c3c50: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x1c3c50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1c3c54: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1c3c54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c3c58: 0x1020006b  beqz        $at, . + 4 + (0x6B << 2)
    ctx->pc = 0x1C3C58u;
    {
        const bool branch_taken_0x1c3c58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C58u;
        // 0x1c3c5c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c58) {
            ctx->pc = 0x1C3E08u;
            goto label_1c3e08;
        }
    }
    ctx->pc = 0x1C3C60u;
    // 0x1c3c60: 0x8fb20100  lw          $s2, 0x100($sp)
    ctx->pc = 0x1c3c60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c3c64: 0x0  nop
    ctx->pc = 0x1c3c64u;
    // NOP
label_1c3c68:
    // 0x1c3c68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c6c: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x1c3c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3c70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c3c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c74: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x1c3c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1c3c78: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1c3c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1c3c7c: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x1c3c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3c80: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1c3c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1c3c84: 0xc7c00008  lwc1        $f0, 0x8($fp)
    ctx->pc = 0x1c3c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3c88: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C3C88u;
    SET_GPR_U32(ctx, 31, 0x1C3C90u);
    ctx->pc = 0x1C3C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C88u;
    // 0x1c3c8c: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C3C88u, 0x1C3C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C90u;
label_1c3c90:
    // 0x1c3c90: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x1c3c90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1c3c94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c3c94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c98: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C3C98u;
    {
        const bool branch_taken_0x1c3c98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C98u;
        // 0x1c3c9c: 0xe654000c  swc1        $f20, 0xC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3c98) {
            ctx->pc = 0x1C3CE0u;
            goto label_1c3ce0;
        }
    }
    ctx->pc = 0x1C3CA0u;
    // 0x1c3ca0: 0x8fb10100  lw          $s1, 0x100($sp)
    ctx->pc = 0x1c3ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c3ca4: 0x0  nop
    ctx->pc = 0x1c3ca4u;
    // NOP
label_1c3ca8:
    // 0x1c3ca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3cac: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x1C3CACu;
    SET_GPR_U32(ctx, 31, 0x1C3CB4u);
    ctx->pc = 0x1C3CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3CACu;
    // 0x1c3cb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x1C3CACu, 0x1C3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3CB4u;
label_1c3cb4:
    // 0x1c3cb4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1c3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1c3cb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c3cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3cbc: 0x0  nop
    ctx->pc = 0x1c3cbcu;
    // NOP
    // 0x1c3cc0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c3cc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3cc4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3CC4u;
    {
        const bool branch_taken_0x1c3cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3cc4) {
            ctx->pc = 0x1C3CE0u;
            goto label_1c3ce0;
        }
    }
    ctx->pc = 0x1C3CCCu;
    // 0x1c3ccc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c3cccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c3cd0: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x1c3cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1c3cd4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C3CD4u;
    {
        const bool branch_taken_0x1c3cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CD4u;
        // 0x1c3cd8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3cd4) {
            ctx->pc = 0x1C3CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3ca8;
        }
    }
    ctx->pc = 0x1C3CDCu;
    // 0x1c3cdc: 0x0  nop
    ctx->pc = 0x1c3cdcu;
    // NOP
label_1c3ce0:
    // 0x1c3ce0: 0x274082b  sltu        $at, $s3, $s4
    ctx->pc = 0x1c3ce0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1c3ce4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C3CE4u;
    {
        const bool branch_taken_0x1c3ce4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ce4) {
            ctx->pc = 0x1C3D28u;
            goto label_1c3d28;
        }
    }
    ctx->pc = 0x1C3CECu;
    // 0x1c3cec: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1c3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c3cf0: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1c3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1c3cf4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c3cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3cf8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x1c3cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d00: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C3D00u;
    SET_GPR_U32(ctx, 31, 0x1C3D08u);
    ctx->pc = 0x1C3D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D00u;
    // 0x1c3d04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C3D00u, 0x1C3D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D08u;
label_1c3d08:
    // 0x1c3d08: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c3d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c3d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3d14: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C3D14u;
    SET_GPR_U32(ctx, 31, 0x1C3D1Cu);
    ctx->pc = 0x1C3D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D14u;
    // 0x1c3d18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C3D14u, 0x1C3D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D1Cu;
label_1c3d1c:
    // 0x1c3d1c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1C3D1Cu;
    {
        const bool branch_taken_0x1c3d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d1c) {
            ctx->pc = 0x1C3DF0u;
            goto label_1c3df0;
        }
    }
    ctx->pc = 0x1C3D24u;
    // 0x1c3d24: 0x0  nop
    ctx->pc = 0x1c3d24u;
    // NOP
label_1c3d28:
    // 0x1c3d28: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1c3d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1c3d2c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1c3d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3d30: 0xc4208100  lwc1        $f0, -0x7F00($at)
    ctx->pc = 0x1c3d30u;
    { uint32_t bits = FAST_READ32(0x858100u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3d34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c3d34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3d38: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3D38u;
    {
        const bool branch_taken_0x1c3d38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D38u;
        // 0x1c3d3c: 0x3c010086  lui         $at, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d38) {
            ctx->pc = 0x1C3D48u;
            goto label_1c3d48;
        }
    }
    ctx->pc = 0x1C3D40u;
    // 0x1c3d40: 0xe4218100  swc1        $f1, -0x7F00($at)
    ctx->pc = 0x1c3d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294934784), bits); }
    // 0x1c3d44: 0x0  nop
    ctx->pc = 0x1c3d44u;
    // NOP
label_1c3d48:
    // 0x1c3d48: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1c3d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1c3d4c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1c3d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3d50: 0xc4208104  lwc1        $f0, -0x7EFC($at)
    ctx->pc = 0x1c3d50u;
    { uint32_t bits = FAST_READ32(0x858104u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3d54: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c3d54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3d58: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3D58u;
    {
        const bool branch_taken_0x1c3d58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D58u;
        // 0x1c3d5c: 0x3c010086  lui         $at, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d58) {
            ctx->pc = 0x1C3D68u;
            goto label_1c3d68;
        }
    }
    ctx->pc = 0x1C3D60u;
    // 0x1c3d60: 0xe4218104  swc1        $f1, -0x7EFC($at)
    ctx->pc = 0x1c3d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294934788), bits); }
    // 0x1c3d64: 0x0  nop
    ctx->pc = 0x1c3d64u;
    // NOP
label_1c3d68:
    // 0x1c3d68: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1c3d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1c3d6c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1c3d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3d70: 0xc4208108  lwc1        $f0, -0x7EF8($at)
    ctx->pc = 0x1c3d70u;
    { uint32_t bits = FAST_READ32(0x858108u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3d74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c3d74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3d78: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3D78u;
    {
        const bool branch_taken_0x1c3d78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D78u;
        // 0x1c3d7c: 0x3c010086  lui         $at, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d78) {
            ctx->pc = 0x1C3D88u;
            goto label_1c3d88;
        }
    }
    ctx->pc = 0x1C3D80u;
    // 0x1c3d80: 0xe4218108  swc1        $f1, -0x7EF8($at)
    ctx->pc = 0x1c3d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294934792), bits); }
    // 0x1c3d84: 0x0  nop
    ctx->pc = 0x1c3d84u;
    // NOP
label_1c3d88:
    // 0x1c3d88: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1c3d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1c3d8c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1c3d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3d90: 0xc4208110  lwc1        $f0, -0x7EF0($at)
    ctx->pc = 0x1c3d90u;
    { uint32_t bits = FAST_READ32(0x858110u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3d94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c3d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3d98: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3D98u;
    {
        const bool branch_taken_0x1c3d98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D98u;
        // 0x1c3d9c: 0x3c010086  lui         $at, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d98) {
            ctx->pc = 0x1C3DA8u;
            goto label_1c3da8;
        }
    }
    ctx->pc = 0x1C3DA0u;
    // 0x1c3da0: 0xe4218110  swc1        $f1, -0x7EF0($at)
    ctx->pc = 0x1c3da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294934800), bits); }
    // 0x1c3da4: 0x0  nop
    ctx->pc = 0x1c3da4u;
    // NOP
label_1c3da8:
    // 0x1c3da8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1c3da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1c3dac: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1c3dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3db0: 0xc4208114  lwc1        $f0, -0x7EEC($at)
    ctx->pc = 0x1c3db0u;
    { uint32_t bits = FAST_READ32(0x858114u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3db4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c3db4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3db8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3DB8u;
    {
        const bool branch_taken_0x1c3db8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DB8u;
        // 0x1c3dbc: 0x3c010086  lui         $at, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3db8) {
            ctx->pc = 0x1C3DC8u;
            goto label_1c3dc8;
        }
    }
    ctx->pc = 0x1C3DC0u;
    // 0x1c3dc0: 0xe4218114  swc1        $f1, -0x7EEC($at)
    ctx->pc = 0x1c3dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294934804), bits); }
    // 0x1c3dc4: 0x0  nop
    ctx->pc = 0x1c3dc4u;
    // NOP
label_1c3dc8:
    // 0x1c3dc8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1c3dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1c3dcc: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1c3dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3dd0: 0xc4208118  lwc1        $f0, -0x7EE8($at)
    ctx->pc = 0x1c3dd0u;
    { uint32_t bits = FAST_READ32(0x858118u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3dd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c3dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3dd8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3DD8u;
    {
        const bool branch_taken_0x1c3dd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DD8u;
        // 0x1c3ddc: 0x3c010086  lui         $at, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3dd8) {
            ctx->pc = 0x1C3DE8u;
            goto label_1c3de8;
        }
    }
    ctx->pc = 0x1C3DE0u;
    // 0x1c3de0: 0xe4218118  swc1        $f1, -0x7EE8($at)
    ctx->pc = 0x1c3de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294934808), bits); }
    // 0x1c3de4: 0x0  nop
    ctx->pc = 0x1c3de4u;
    // NOP
label_1c3de8:
    // 0x1c3de8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x1c3de8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1c3dec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c3decu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1c3df0:
    // 0x1c3df0: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x1c3df0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1c3df4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1c3df4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1c3df8: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x1c3df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c3dfc: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x1C3DFCu;
    {
        const bool branch_taken_0x1c3dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DFCu;
        // 0x1c3e00: 0x27de000c  addiu       $fp, $fp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3dfc) {
            ctx->pc = 0x1C3C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3c68;
        }
    }
    ctx->pc = 0x1C3E04u;
    // 0x1c3e04: 0x0  nop
    ctx->pc = 0x1c3e04u;
    // NOP
label_1c3e08:
    // 0x1c3e08: 0x3c050086  lui         $a1, 0x86
    ctx->pc = 0x1c3e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)134 << 16));
    // 0x1c3e0c: 0x3c060086  lui         $a2, 0x86
    ctx->pc = 0x1c3e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)134 << 16));
    // 0x1c3e10: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x1c3e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x1c3e14: 0x24a58110  addiu       $a1, $a1, -0x7EF0
    ctx->pc = 0x1c3e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934800));
    // 0x1c3e18: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C3E18u;
    SET_GPR_U32(ctx, 31, 0x1C3E20u);
    ctx->pc = 0x1C3E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E18u;
    // 0x1c3e1c: 0x24c68100  addiu       $a2, $a2, -0x7F00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C3E18u, 0x1C3E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E20u;
label_1c3e20:
    // 0x1c3e20: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x1c3e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3e24: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c3e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3e2c: 0x0  nop
    ctx->pc = 0x1c3e2cu;
    // NOP
    // 0x1c3e30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c3e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3e34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3E34u;
    {
        const bool branch_taken_0x1c3e34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3e34) {
            ctx->pc = 0x1C3E40u;
            goto label_1c3e40;
        }
    }
    ctx->pc = 0x1C3E3Cu;
    // 0x1c3e3c: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x1c3e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
label_1c3e40:
    // 0x1c3e40: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3e44: 0xc6a10034  lwc1        $f1, 0x34($s5)
    ctx->pc = 0x1c3e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3e4c: 0x0  nop
    ctx->pc = 0x1c3e4cu;
    // NOP
    // 0x1c3e50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c3e50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3e54: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3E54u;
    {
        const bool branch_taken_0x1c3e54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3e54) {
            ctx->pc = 0x1C3E60u;
            goto label_1c3e60;
        }
    }
    ctx->pc = 0x1C3E5Cu;
    // 0x1c3e5c: 0xe6a00034  swc1        $f0, 0x34($s5)
    ctx->pc = 0x1c3e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
label_1c3e60:
    // 0x1c3e60: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3e64: 0xc6a10038  lwc1        $f1, 0x38($s5)
    ctx->pc = 0x1c3e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3e6c: 0x0  nop
    ctx->pc = 0x1c3e6cu;
    // NOP
    // 0x1c3e70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c3e70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3e74: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3E74u;
    {
        const bool branch_taken_0x1c3e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3e74) {
            ctx->pc = 0x1C3E80u;
            goto label_1c3e80;
        }
    }
    ctx->pc = 0x1C3E7Cu;
    // 0x1c3e7c: 0xe6a00038  swc1        $f0, 0x38($s5)
    ctx->pc = 0x1c3e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
label_1c3e80:
    // 0x1c3e80: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c3e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c3e84: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x1c3e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x1c3e88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c3e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3e8c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C3E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E94u);
    ctx->pc = 0x1C3E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E8Cu;
    // 0x1c3e90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C3E8Cu, 0x1C3E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E94u;
label_1c3e94:
    // 0x1c3e94: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x1c3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x1c3e98: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1c3e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x1c3e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3ea0: 0xc6a40034  lwc1        $f4, 0x34($s5)
    ctx->pc = 0x1c3ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c3ea4: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1c3ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1c3ea8: 0xc6a30030  lwc1        $f3, 0x30($s5)
    ctx->pc = 0x1c3ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c3eac: 0xc6a20038  lwc1        $f2, 0x38($s5)
    ctx->pc = 0x1c3eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c3eb0: 0x46040382  mul.s       $f14, $f0, $f4
    ctx->pc = 0x1c3eb0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1c3eb4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1c3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c3eb8: 0x46041842  mul.s       $f1, $f3, $f4
    ctx->pc = 0x1c3eb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1c3ebc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1c3ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c3ec0: 0x460203c2  mul.s       $f15, $f0, $f2
    ctx->pc = 0x1c3ec0u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c3ec4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1c3ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3ec8: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1c3ec8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c3ecc: 0xc06862c  jal         func_1A18B0
    ctx->pc = 0x1C3ECCu;
    SET_GPR_U32(ctx, 31, 0x1C3ED4u);
    ctx->pc = 0x1C3ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3ECCu;
    // 0x1c3ed0: 0x46030342  mul.s       $f13, $f0, $f3 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A18B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A18B0u, 0x1C3ECCu, 0x1C3ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3ED4u;
label_1c3ed4:
    // 0x1c3ed4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3ED4u;
    {
        const bool branch_taken_0x1c3ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ed4) {
            ctx->pc = 0x1C3EF8u;
            goto label_1c3ef8;
        }
    }
    ctx->pc = 0x1C3EDCu;
    // 0x1c3edc: 0x0  nop
    ctx->pc = 0x1c3edcu;
    // NOP
label_1c3ee0:
    // 0x1c3ee0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c3ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c3ee4: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x1c3ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c3ee8: 0x24a501f0  addiu       $a1, $a1, 0x1F0
    ctx->pc = 0x1c3ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 496));
    // 0x1c3eec: 0x1440ff3c  bnez        $v0, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x1C3EECu;
    {
        const bool branch_taken_0x1c3eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EECu;
        // 0x1c3ef0: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3eec) {
            ctx->pc = 0x1C3BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3be0;
        }
    }
    ctx->pc = 0x1C3EF4u;
    // 0x1c3ef4: 0x0  nop
    ctx->pc = 0x1c3ef4u;
    // NOP
label_1c3ef8:
    // 0x1c3ef8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1c3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c3efc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c3efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c3f00: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1c3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1c3f04: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1c3f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1c3f08: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1c3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c3f0c: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x1c3f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1c3f10: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1c3f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1c3f14: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1c3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c3f18: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x1c3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x1c3f1c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1c3f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1c3f20: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1c3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c3f24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1c3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1c3f28: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1c3f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1c3f2c: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1c3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1c3f30: 0x9444006a  lhu         $a0, 0x6A($v0)
    ctx->pc = 0x1c3f30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 106)));
    // 0x1c3f34: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x1c3f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c3f38: 0x1440fee9  bnez        $v0, . + 4 + (-0x117 << 2)
    ctx->pc = 0x1C3F38u;
    {
        const bool branch_taken_0x1c3f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f38) {
            ctx->pc = 0x1C3AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3ae0;
        }
    }
    ctx->pc = 0x1C3F40u;
label_1c3f40:
    // 0x1c3f40: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x1c3f40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1c3f44: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C3F44u;
    {
        const bool branch_taken_0x1c3f44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F44u;
        // 0x1c3f48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f44) {
            ctx->pc = 0x1C3FB0u;
            goto label_1c3fb0;
        }
    }
    ctx->pc = 0x1C3F4Cu;
    // 0x1c3f4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c3f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3f50:
    // 0x1c3f50: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1c3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1c3f54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c3f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c3f58: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1c3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c3f5c: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1c3f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1c3f60: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x1c3f60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3f64: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c3f68: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x1c3f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x1c3f6c: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x1c3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x1c3f70: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c3f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c3f74: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c3f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3f7c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1c3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1c3f80: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c3f84: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x1c3f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x1c3f88: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1c3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1c3f8c: 0x8c840078  lw          $a0, 0x78($a0)
    ctx->pc = 0x1c3f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x1c3f90: 0x9443006a  lhu         $v1, 0x6A($v0)
    ctx->pc = 0x1c3f90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 106)));
    // 0x1c3f94: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1c3f94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c3f98: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c3f9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c3fa0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1c3fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1c3fa4: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1c3fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c3fa8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C3FA8u;
    {
        const bool branch_taken_0x1c3fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FA8u;
        // 0x1c3fac: 0x24c600a0  addiu       $a2, $a2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fa8) {
            ctx->pc = 0x1C3F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3f50;
        }
    }
    ctx->pc = 0x1C3FB0u;
label_1c3fb0:
    // 0x1c3fb0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1c3fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c3fb4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c3fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c3fb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c3fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c3fbc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1c3fbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c3fc0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1c3fc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c3fc4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c3fc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3fc8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c3fc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3fcc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c3fccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3fd0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c3fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3fd4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c3fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3fd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c3fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3fdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c3fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3FE0u;
        // 0x1c3fe4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3FE8u;
}
