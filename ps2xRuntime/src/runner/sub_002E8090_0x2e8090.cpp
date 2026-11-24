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

// Function: sub_002E8090
// Address: 0x2e8090 - 0x2e8778
void sub_002E8090_0x2e8090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8090_0x2e8090");
#endif

    switch (ctx->pc) {
        case 0x2e8470u: goto label_2e8470;
        case 0x2e84c8u: goto label_2e84c8;
        case 0x2e8528u: goto label_2e8528;
        case 0x2e8588u: goto label_2e8588;
        case 0x2e85ecu: goto label_2e85ec;
        case 0x2e8674u: goto label_2e8674;
        case 0x2e86f4u: goto label_2e86f4;
        case 0x2e875cu: goto label_2e875c;
        default: break;
    }

    ctx->pc = 0x2e8090u;

    // 0x2e8090: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x2e8090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2e8094: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e8094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e8098: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2e8098u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2e809c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e80a0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2e80a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e80a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e80a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e80a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e80a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e80ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e80acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e80b0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e80b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e80b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e80b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e80b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e80bc: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x2e80bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e80c0: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x2e80c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e80c4: 0x106001a6  beqz        $v1, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x2E80C4u;
    {
        const bool branch_taken_0x2e80c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80C4u;
        // 0x2e80c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80c4) {
            ctx->pc = 0x2E8760u;
            goto label_2e8760;
        }
    }
    ctx->pc = 0x2E80CCu;
    // 0x2e80cc: 0x82040002  lb          $a0, 0x2($s0)
    ctx->pc = 0x2e80ccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2e80d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e80d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e80d4: 0x108300a2  beq         $a0, $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2E80D4u;
    {
        const bool branch_taken_0x2e80d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80D4u;
        // 0x2e80d8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80d4) {
            ctx->pc = 0x2E8360u;
            goto label_2e8360;
        }
    }
    ctx->pc = 0x2E80DCu;
    // 0x2e80dc: 0x10830092  beq         $a0, $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x2E80DCu;
    {
        const bool branch_taken_0x2e80dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e80dc) {
            ctx->pc = 0x2E8328u;
            goto label_2e8328;
        }
    }
    ctx->pc = 0x2E80E4u;
    // 0x2e80e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e80e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e80e8: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x2E80E8u;
    {
        const bool branch_taken_0x2e80e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E80ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80E8u;
        // 0x2e80ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80e8) {
            ctx->pc = 0x2E8220u;
            goto label_2e8220;
        }
    }
    ctx->pc = 0x2E80F0u;
    // 0x2e80f0: 0x10850025  beq         $a0, $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E80F0u;
    {
        const bool branch_taken_0x2e80f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x2e80f0) {
            ctx->pc = 0x2E8188u;
            goto label_2e8188;
        }
    }
    ctx->pc = 0x2E80F8u;
    // 0x2e80f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E80F8u;
    {
        const bool branch_taken_0x2e80f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e80f8) {
            ctx->pc = 0x2E8108u;
            goto label_2e8108;
        }
    }
    ctx->pc = 0x2E8100u;
    // 0x2e8100: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x2E8100u;
    {
        const bool branch_taken_0x2e8100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8100) {
            ctx->pc = 0x2E83D8u;
            goto label_2e83d8;
        }
    }
    ctx->pc = 0x2E8108u;
label_2e8108:
    // 0x2e8108: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e8108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e810c: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2e810cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2e8110: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2e8110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x2e8114: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e8114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e8118: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e8118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e811c: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x2e811cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x2e8120: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x2e8120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e8124: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x2e8124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8128: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e812c: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e812cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e8130: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x2e8130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e8134: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e8134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e8138: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x2e8138u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e813c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e813cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e8140: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e8140u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e8144: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E8144u;
    {
        const bool branch_taken_0x2e8144 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2E8148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8144u;
        // 0x2e8148: 0x51e3c  dsll32      $v1, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8144) {
            ctx->pc = 0x2E8170u;
            goto label_2e8170;
        }
    }
    ctx->pc = 0x2E814Cu;
    // 0x2e814c: 0xa2050002  sb          $a1, 0x2($s0)
    ctx->pc = 0x2e814cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e8150: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2e8150u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2e8154: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2e8154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x2e8158: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2e8158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e815c: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x2e815cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e8160: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2e8160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2e8164: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x2E8164u;
    {
        const bool branch_taken_0x2e8164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8164u;
        // 0x2e8168: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8164) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E816Cu;
    // 0x2e816c: 0x0  nop
    ctx->pc = 0x2e816cu;
    // NOP
label_2e8170:
    // 0x2e8170: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x2e8170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8174: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e8174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e8178: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e8178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e817c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2E817Cu;
    {
        const bool branch_taken_0x2e817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E817Cu;
        // 0x2e8180: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e817c) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E8184u;
    // 0x2e8184: 0x0  nop
    ctx->pc = 0x2e8184u;
    // NOP
label_2e8188:
    // 0x2e8188: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x2e8188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e818c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e818cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e8190: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x2e8190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e8194: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e8194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e8198: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e8198u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e819c: 0x461009c  bgez        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x2E819Cu;
    {
        const bool branch_taken_0x2e819c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2e819c) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E81A4u;
    // 0x2e81a4: 0x82050002  lb          $a1, 0x2($s0)
    ctx->pc = 0x2e81a4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2e81a8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2e81a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2e81ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e81acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e81b0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2e81b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e81b4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2e81b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e81b8: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x2e81b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e81bc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2e81bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e81c0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2e81c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2e81c4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e81c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e81c8: 0xa604000e  sh          $a0, 0xE($s0)
    ctx->pc = 0x2e81c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x2e81cc: 0xa604000c  sh          $a0, 0xC($s0)
    ctx->pc = 0x2e81ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x2e81d0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2e81d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2e81d4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2e81d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2e81d8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2e81d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e81dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e81dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e81e0: 0x0  nop
    ctx->pc = 0x2e81e0u;
    // NOP
    // 0x2e81e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e81e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e81e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2e81e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2e81ec: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x2e81ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x2e81f0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2e81f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2e81f4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2e81f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2e81f8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x2e81f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e81fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e81fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8200: 0x0  nop
    ctx->pc = 0x2e8200u;
    // NOP
    // 0x2e8204: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e8204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e8208: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2e8208u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2e820c: 0x0  nop
    ctx->pc = 0x2e820cu;
    // NOP
    // 0x2e8210: 0x0  nop
    ctx->pc = 0x2e8210u;
    // NOP
    // 0x2e8214: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2E8214u;
    {
        const bool branch_taken_0x2e8214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8214u;
        // 0x2e8218: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8214) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E821Cu;
    // 0x2e821c: 0x0  nop
    ctx->pc = 0x2e821cu;
    // NOP
label_2e8220:
    // 0x2e8220: 0x82030006  lb          $v1, 0x6($s0)
    ctx->pc = 0x2e8220u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2e8224: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x2e8224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x2e8228: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x2e8228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e822c: 0x82030006  lb          $v1, 0x6($s0)
    ctx->pc = 0x2e822cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2e8230: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8230u;
    {
        const bool branch_taken_0x2e8230 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2e8230) {
            ctx->pc = 0x2E8248u;
            goto label_2e8248;
        }
    }
    ctx->pc = 0x2E8238u;
    // 0x2e8238: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x2e8238u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e823c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2e823cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8240: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x2e8240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x2e8244: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2e8244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2e8248:
    // 0x2e8248: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x2e8248u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e824c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x2e824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2e8250: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x2e8250u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e8254: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x2e8254u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e8258: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8258u;
    {
        const bool branch_taken_0x2e8258 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2E825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8258u;
        // 0x2e825c: 0x2403ff80  addiu       $v1, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8258) {
            ctx->pc = 0x2E8268u;
            goto label_2e8268;
        }
    }
    ctx->pc = 0x2E8260u;
    // 0x2e8260: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x2e8260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e8264: 0x0  nop
    ctx->pc = 0x2e8264u;
    // NOP
label_2e8268:
    // 0x2e8268: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2e8268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e826c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2e826cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8270: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e8270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e8274: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e8274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e8278: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2e8278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e827c: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2e827cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8280: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e8280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e8284: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E8284u;
    {
        const bool branch_taken_0x2e8284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e8284) {
            ctx->pc = 0x2E8290u;
            goto label_2e8290;
        }
    }
    ctx->pc = 0x2E828Cu;
    // 0x2e828c: 0xe6010090  swc1        $f1, 0x90($s0)
    ctx->pc = 0x2e828cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_2e8290:
    // 0x2e8290: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x2e8290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e8294: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x2e8294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8298: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8298u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e829c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e829cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e82a0: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x2e82a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e82a4: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x2e82a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e82a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e82a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e82ac: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2e82acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2e82b0: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x2e82b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e82b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e82b8: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x2e82b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e82bc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e82bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e82c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e82c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e82c4: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E82C4u;
    {
        const bool branch_taken_0x2e82c4 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2e82c4) {
            ctx->pc = 0x2E8300u;
            goto label_2e8300;
        }
    }
    ctx->pc = 0x2E82CCu;
    // 0x2e82cc: 0x82040002  lb          $a0, 0x2($s0)
    ctx->pc = 0x2e82ccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2e82d0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2e82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2e82d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e82d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e82d8: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x2e82d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e82dc: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x2e82dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e82e0: 0x308400fe  andi        $a0, $a0, 0xFE
    ctx->pc = 0x2e82e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)254);
    // 0x2e82e4: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x2e82e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e82e8: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x2e82e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e82ec: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2e82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2e82f0: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x2e82f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x2e82f4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2e82f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2e82f8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2E82F8u;
    {
        const bool branch_taken_0x2e82f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E82FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E82F8u;
        // 0x2e82fc: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82f8) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E8300u;
label_2e8300:
    // 0x2e8300: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x2e8300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8304: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e8304u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e8308: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e8308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e830c: 0x0  nop
    ctx->pc = 0x2e830cu;
    // NOP
    // 0x2e8310: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x2e8310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x2e8314: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x2e8314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8318: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e8318u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e831c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e831cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e8320: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2E8320u;
    {
        const bool branch_taken_0x2e8320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8320u;
        // 0x2e8324: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8320) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E8328u;
label_2e8328:
    // 0x2e8328: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x2e8328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e832c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e8330: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x2e8330u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e8334: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e8334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e8338: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e8338u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e833c: 0x4610034  bgez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2E833Cu;
    {
        const bool branch_taken_0x2e833c = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2e833c) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E8344u;
    // 0x2e8344: 0x82040002  lb          $a0, 0x2($s0)
    ctx->pc = 0x2e8344u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2e8348: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2e8348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e834c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e834cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e8350: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x2e8350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e8354: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2E8354u;
    {
        const bool branch_taken_0x2e8354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8354u;
        // 0x2e8358: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8354) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E835Cu;
    // 0x2e835c: 0x0  nop
    ctx->pc = 0x2e835cu;
    // NOP
label_2e8360:
    // 0x2e8360: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x2e8360u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e8364: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2e8364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2e8368: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x2e8368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e836c: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x2e836cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e8370: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8370u;
    {
        const bool branch_taken_0x2e8370 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2e8370) {
            ctx->pc = 0x2E8380u;
            goto label_2e8380;
        }
    }
    ctx->pc = 0x2E8378u;
    // 0x2e8378: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x2e8378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e837c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2e837cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2e8380:
    // 0x2e8380: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x2e8380u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e8384: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e8384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e8388: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x2e8388u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e838c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e838cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e8390: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e8390u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e8394: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8394u;
    {
        const bool branch_taken_0x2e8394 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2e8394) {
            ctx->pc = 0x2E83B0u;
            goto label_2e83b0;
        }
    }
    ctx->pc = 0x2E839Cu;
    // 0x2e839c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2e839cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e83a0: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x2e83a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2e83a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e83a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e83a8: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x2e83a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e83ac: 0x0  nop
    ctx->pc = 0x2e83acu;
    // NOP
label_2e83b0:
    // 0x2e83b0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2e83b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e83b4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E83B4u;
    {
        const bool branch_taken_0x2e83b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83B4u;
        // 0x2e83b8: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83b4) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E83BCu;
    // 0x2e83bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e83bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e83c0: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x2e83c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2e83c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e83c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e83c8: 0x802027  not         $a0, $a0
    ctx->pc = 0x2e83c8u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x2e83cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2e83ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2e83d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2e83d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2e83d4: 0x0  nop
    ctx->pc = 0x2e83d4u;
    // NOP
label_2e83d8:
    // 0x2e83d8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2e83d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e83dc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x2e83dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e83e0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x2e83e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e83e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e83e8: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x2e83e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x2e83ec: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E83ECu;
    {
        const bool branch_taken_0x2e83ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83ECu;
        // 0x2e83f0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83ec) {
            ctx->pc = 0x2E8410u;
            goto label_2e8410;
        }
    }
    ctx->pc = 0x2E83F4u;
    // 0x2e83f4: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x2e83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x2e83f8: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2e83f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x2e83fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e83fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e8400: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e8400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e8404: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e8404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e8408: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x2e8408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x2e840c: 0x0  nop
    ctx->pc = 0x2e840cu;
    // NOP
label_2e8410:
    // 0x2e8410: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2e8410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2e8414: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2e8414u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2e8418: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2e8418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x2e841c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e841cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e8420: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8420u;
    {
        const bool branch_taken_0x2e8420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8420) {
            ctx->pc = 0x2E8438u;
            goto label_2e8438;
        }
    }
    ctx->pc = 0x2E8428u;
    // 0x2e8428: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2e8428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e842c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E842Cu;
    {
        const bool branch_taken_0x2e842c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e842c) {
            ctx->pc = 0x2E8440u;
            goto label_2e8440;
        }
    }
    ctx->pc = 0x2E8434u;
    // 0x2e8434: 0x0  nop
    ctx->pc = 0x2e8434u;
    // NOP
label_2e8438:
    // 0x2e8438: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x2E8438u;
    {
        const bool branch_taken_0x2e8438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8438) {
            ctx->pc = 0x2E8760u;
            goto label_2e8760;
        }
    }
    ctx->pc = 0x2E8440u;
label_2e8440:
    // 0x2e8440: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e8440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e8444: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e8444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2e8448: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E8448u;
    {
        const bool branch_taken_0x2e8448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8448) {
            ctx->pc = 0x2E8470u;
            goto label_2e8470;
        }
    }
    ctx->pc = 0x2E8450u;
    // 0x2e8450: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2e8450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e8454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e8454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8458: 0x86060040  lh          $a2, 0x40($s0)
    ctx->pc = 0x2e8458u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2e845c: 0x86070044  lh          $a3, 0x44($s0)
    ctx->pc = 0x2e845cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2e8460: 0x82090006  lb          $t1, 0x6($s0)
    ctx->pc = 0x2e8460u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2e8464: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2e8464u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e8468: 0xc0ba1fc  jal         func_2E87F0
    ctx->pc = 0x2E8468u;
    SET_GPR_U32(ctx, 31, 0x2E8470u);
    ctx->pc = 0x2E846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8468u;
    // 0x2e846c: 0x24450078  addiu       $a1, $v0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87F0u, 0x2E8468u, 0x2E8470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8470u;
label_2e8470:
    // 0x2e8470: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2e8470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e8474: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2e8474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2e8478: 0x106000b9  beqz        $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x2E8478u;
    {
        const bool branch_taken_0x2e8478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8478u;
        // 0x2e847c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8478) {
            ctx->pc = 0x2E8760u;
            goto label_2e8760;
        }
    }
    ctx->pc = 0x2E8480u;
    // 0x2e8480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8484: 0x9024fc8d  lbu         $a0, -0x373($at)
    ctx->pc = 0x2e8484u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966413)));
    // 0x2e8488: 0x1482005b  bne         $a0, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2E8488u;
    {
        const bool branch_taken_0x2e8488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e8488) {
            ctx->pc = 0x2E85F8u;
            goto label_2e85f8;
        }
    }
    ctx->pc = 0x2E8490u;
    // 0x2e8490: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x2e8490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e8494: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2e8494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2e8498: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E8498u;
    {
        const bool branch_taken_0x2e8498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e8498) {
            ctx->pc = 0x2E84D0u;
            goto label_2e84d0;
        }
    }
    ctx->pc = 0x2E84A0u;
    // 0x2e84a0: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x2e84a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e84a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2e84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e84a8: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2e84a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e84ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e84acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e84b0: 0x86060050  lh          $a2, 0x50($s0)
    ctx->pc = 0x2e84b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2e84b4: 0x86070054  lh          $a3, 0x54($s0)
    ctx->pc = 0x2e84b4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2e84b8: 0x82090007  lb          $t1, 0x7($s0)
    ctx->pc = 0x2e84b8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e84bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e84bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2e84c0: 0xc0ba254  jal         func_2E8950
    ctx->pc = 0x2E84C0u;
    SET_GPR_U32(ctx, 31, 0x2E84C8u);
    ctx->pc = 0x2E84C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E84C0u;
    // 0x2e84c4: 0x24450064  addiu       $a1, $v0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8950u, 0x2E84C0u, 0x2E84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E84C8u;
label_2e84c8:
    // 0x2e84c8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x2E84C8u;
    {
        const bool branch_taken_0x2e84c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e84c8) {
            ctx->pc = 0x2E8760u;
            goto label_2e8760;
        }
    }
    ctx->pc = 0x2E84D0u;
label_2e84d0:
    // 0x2e84d0: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x2e84d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e84d4: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E84D4u;
    {
        const bool branch_taken_0x2e84d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E84D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E84D4u;
        // 0x2e84d8: 0x3c026666  lui         $v0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84d4) {
            ctx->pc = 0x2E8528u;
            goto label_2e8528;
        }
    }
    ctx->pc = 0x2E84DCu;
    // 0x2e84dc: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x2e84dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e84e0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2e84e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2e84e4: 0x86060050  lh          $a2, 0x50($s0)
    ctx->pc = 0x2e84e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2e84e8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2e84e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e84ec: 0x86070054  lh          $a3, 0x54($s0)
    ctx->pc = 0x2e84ecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2e84f0: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x2e84f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e84f4: 0x82090007  lb          $t1, 0x7($s0)
    ctx->pc = 0x2e84f4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e84f8: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2e84f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e84fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e84fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8500: 0x1810  mfhi        $v1
    ctx->pc = 0x2e8500u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e8504: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2e8504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e8508: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2e8508u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2e850c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2e850cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e8510: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2e8510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e8514: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e8514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e8518: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2e8518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e851c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e851cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2e8520: 0xc0ba254  jal         func_2E8950
    ctx->pc = 0x2E8520u;
    SET_GPR_U32(ctx, 31, 0x2E8528u);
    ctx->pc = 0x2E8524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8520u;
    // 0x2e8524: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8950u, 0x2E8520u, 0x2E8528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8528u;
label_2e8528:
    // 0x2e8528: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x2e8528u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e852c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e852cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e8530: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2e8530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2e8534: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x2e8534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8538: 0x86070054  lh          $a3, 0x54($s0)
    ctx->pc = 0x2e8538u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2e853c: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x2e853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8540: 0x82090007  lb          $t1, 0x7($s0)
    ctx->pc = 0x2e8540u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e8544: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e8544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8548: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2e8548u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e854c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e854cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8550: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x2e8550u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e8554: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2e8554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e8558: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e8558u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e855c: 0x460c0d02  mul.s       $f20, $f1, $f12
    ctx->pc = 0x2e855cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2e8560: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2e8560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2e8564: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e8564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e8568: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2e8568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2e856c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e856cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2e8570: 0x2810  mfhi        $a1
    ctx->pc = 0x2e8570u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2e8574: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2e8574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e8578: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e8578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e857c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2e857cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e8580: 0xc0ba254  jal         func_2E8950
    ctx->pc = 0x2E8580u;
    SET_GPR_U32(ctx, 31, 0x2E8588u);
    ctx->pc = 0x2E8584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8580u;
    // 0x2e8584: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8950u, 0x2E8580u, 0x2E8588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8588u;
label_2e8588:
    // 0x2e8588: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x2e8588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e858c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e858cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8590: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e8590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e8594: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2e8594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2e8598: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x2e8598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e859c: 0x82090007  lb          $t1, 0x7($s0)
    ctx->pc = 0x2e859cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e85a0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2e85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e85a4: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x2e85a4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2e85a8: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2e85a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e85ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e85acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e85b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e85b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e85b4: 0x2445006e  addiu       $a1, $v0, 0x6E
    ctx->pc = 0x2e85b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
    // 0x2e85b8: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2e85b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2e85bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e85bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e85c0: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x2e85c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e85c4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2e85c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2e85c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2e85c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e85cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e85ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e85d0: 0x0  nop
    ctx->pc = 0x2e85d0u;
    // NOP
    // 0x2e85d4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2e85d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2e85d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e85d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e85dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e85dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e85e0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2e85e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2e85e4: 0xc0ba254  jal         func_2E8950
    ctx->pc = 0x2E85E4u;
    SET_GPR_U32(ctx, 31, 0x2E85ECu);
    ctx->pc = 0x2E85E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E85E4u;
    // 0x2e85e8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8950u, 0x2E85E4u, 0x2E85ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E85ECu;
label_2e85ec:
    // 0x2e85ec: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2E85ECu;
    {
        const bool branch_taken_0x2e85ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e85ec) {
            ctx->pc = 0x2E8760u;
            goto label_2e8760;
        }
    }
    ctx->pc = 0x2E85F4u;
    // 0x2e85f4: 0x0  nop
    ctx->pc = 0x2e85f4u;
    // NOP
label_2e85f8:
    // 0x2e85f8: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x2e85f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e85fc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2e85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2e8600: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E8600u;
    {
        const bool branch_taken_0x2e8600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8600u;
        // 0x2e8604: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8600) {
            ctx->pc = 0x2E8680u;
            goto label_2e8680;
        }
    }
    ctx->pc = 0x2E8608u;
    // 0x2e8608: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e8608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e860c: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x2e860cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966412)));
    // 0x2e8610: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E8610u;
    {
        const bool branch_taken_0x2e8610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8610u;
        // 0x2e8614: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8610) {
            ctx->pc = 0x2E8640u;
            goto label_2e8640;
        }
    }
    ctx->pc = 0x2E8618u;
    // 0x2e8618: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e8618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e861c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E861Cu;
    {
        const bool branch_taken_0x2e861c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e861c) {
            ctx->pc = 0x2E8630u;
            goto label_2e8630;
        }
    }
    ctx->pc = 0x2E8624u;
    // 0x2e8624: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8624u;
    {
        const bool branch_taken_0x2e8624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8624u;
        // 0x2e8628: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8624) {
            ctx->pc = 0x2E8640u;
            goto label_2e8640;
        }
    }
    ctx->pc = 0x2E862Cu;
    // 0x2e862c: 0x0  nop
    ctx->pc = 0x2e862cu;
    // NOP
label_2e8630:
    // 0x2e8630: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e8630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e8634: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E8634u;
    {
        const bool branch_taken_0x2e8634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e8634) {
            ctx->pc = 0x2E8640u;
            goto label_2e8640;
        }
    }
    ctx->pc = 0x2E863Cu;
    // 0x2e863c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2e863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2e8640:
    // 0x2e8640: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2e8640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e8644: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x2e8644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8648: 0x86060050  lh          $a2, 0x50($s0)
    ctx->pc = 0x2e8648u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2e864c: 0x86070054  lh          $a3, 0x54($s0)
    ctx->pc = 0x2e864cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2e8650: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2e8650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e8654: 0x82090007  lb          $t1, 0x7($s0)
    ctx->pc = 0x2e8654u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e8658: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e8658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e865c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2e865cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e8660: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2e8660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e8664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e8664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8668: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2e8668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e866c: 0xc0ba254  jal         func_2E8950
    ctx->pc = 0x2E866Cu;
    SET_GPR_U32(ctx, 31, 0x2E8674u);
    ctx->pc = 0x2E8670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E866Cu;
    // 0x2e8670: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8950u, 0x2E866Cu, 0x2E8674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8674u;
label_2e8674:
    // 0x2e8674: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2E8674u;
    {
        const bool branch_taken_0x2e8674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8674) {
            ctx->pc = 0x2E8760u;
            goto label_2e8760;
        }
    }
    ctx->pc = 0x2E867Cu;
    // 0x2e867c: 0x0  nop
    ctx->pc = 0x2e867cu;
    // NOP
label_2e8680:
    // 0x2e8680: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e8680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2e8684: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x2e8684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8688: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x2e8688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e868c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e868cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8690: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E8690u;
    {
        const bool branch_taken_0x2e8690 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8690u;
        // 0x2e8694: 0x460c0502  mul.s       $f20, $f0, $f12 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8690) {
            ctx->pc = 0x2E86F8u;
            goto label_2e86f8;
        }
    }
    ctx->pc = 0x2E8698u;
    // 0x2e8698: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x2e8698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e869c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2e869cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2e86a0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2e86a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2e86a4: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x2e86a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e86a8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2e86a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e86ac: 0x86070054  lh          $a3, 0x54($s0)
    ctx->pc = 0x2e86acu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2e86b0: 0x82090007  lb          $t1, 0x7($s0)
    ctx->pc = 0x2e86b0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e86b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e86b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e86b8: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2e86b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e86bc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e86bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2e86c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e86c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e86c4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2e86c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e86c8: 0x1810  mfhi        $v1
    ctx->pc = 0x2e86c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e86cc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2e86ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2e86d0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2e86d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e86d4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2e86d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2e86d8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2e86d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e86dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e86dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e86e0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2e86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e86e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e86e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e86e8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2e86e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2e86ec: 0xc0ba254  jal         func_2E8950
    ctx->pc = 0x2E86ECu;
    SET_GPR_U32(ctx, 31, 0x2E86F4u);
    ctx->pc = 0x2E86F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E86ECu;
    // 0x2e86f0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8950u, 0x2E86ECu, 0x2E86F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E86F4u;
label_2e86f4:
    // 0x2e86f4: 0x0  nop
    ctx->pc = 0x2e86f4u;
    // NOP
label_2e86f8:
    // 0x2e86f8: 0x92050004  lbu         $a1, 0x4($s0)
    ctx->pc = 0x2e86f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e86fc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2e86fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e8700: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2e8700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2e8704: 0xc60c0090  lwc1        $f12, 0x90($s0)
    ctx->pc = 0x2e8704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e8708: 0x86070054  lh          $a3, 0x54($s0)
    ctx->pc = 0x2e8708u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2e870c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e870cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e8710: 0x82090007  lb          $t1, 0x7($s0)
    ctx->pc = 0x2e8710u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x2e8714: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x2e8714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e8718: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x2e8718u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e871c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2e871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2e8720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e8720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8724: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x2e8724u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e8728: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x2e8728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2e872c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e872cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e8730: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2e8730u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2e8734: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2e8734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2e8738: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e8738u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e873c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2e873cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2e8740: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e8740u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2e8744: 0x2810  mfhi        $a1
    ctx->pc = 0x2e8744u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2e8748: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2e8748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e874c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e8750: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2e8750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e8754: 0xc0ba254  jal         func_2E8950
    ctx->pc = 0x2E8754u;
    SET_GPR_U32(ctx, 31, 0x2E875Cu);
    ctx->pc = 0x2E8758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8754u;
    // 0x2e8758: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8950u, 0x2E8754u, 0x2E875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E875Cu;
label_2e875c:
    // 0x2e875c: 0x0  nop
    ctx->pc = 0x2e875cu;
    // NOP
label_2e8760:
    // 0x2e8760: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e8760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8764: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e8764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8768: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e8768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e876c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e876cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8770: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8770u;
        // 0x2e8774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8778u;
}
