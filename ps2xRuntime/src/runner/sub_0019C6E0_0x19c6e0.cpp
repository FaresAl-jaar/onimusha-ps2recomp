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

// Function: sub_0019C6E0
// Address: 0x19c6e0 - 0x19cd28
void sub_0019C6E0_0x19c6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C6E0_0x19c6e0");
#endif

    switch (ctx->pc) {
        case 0x19cd00u: goto label_19cd00;
        default: break;
    }

    ctx->pc = 0x19c6e0u;

    // 0x19c6e0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x19c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x19c6e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c6e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c6e8: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x19c6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19c6ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c6f0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x19c6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x19c6f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19c6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19c6f8: 0xa65821  addu        $t3, $a1, $a2
    ctx->pc = 0x19c6f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x19c6fc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x19c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x19c700: 0x91650000  lbu         $a1, 0x0($t3)
    ctx->pc = 0x19c700u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x19c704: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C704u;
    {
        const bool branch_taken_0x19c704 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x19c704) {
            ctx->pc = 0x19C718u;
            goto label_19c718;
        }
    }
    ctx->pc = 0x19C70Cu;
    // 0x19c70c: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x19C70Cu;
    {
        const bool branch_taken_0x19c70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c70c) {
            ctx->pc = 0x19CD18u;
            goto label_19cd18;
        }
    }
    ctx->pc = 0x19C714u;
    // 0x19c714: 0x0  nop
    ctx->pc = 0x19c714u;
    // NOP
label_19c718:
    // 0x19c718: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19c718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19c71c: 0x8c25fc90  lw          $a1, -0x370($at)
    ctx->pc = 0x19c71cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81FC90u));
    // 0x19c720: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x19c720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x19c724: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x19c724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x19c728: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x19c728u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x19c72c: 0x1200017a  beqz        $s0, . + 4 + (0x17A << 2)
    ctx->pc = 0x19C72Cu;
    {
        const bool branch_taken_0x19c72c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c72c) {
            ctx->pc = 0x19CD18u;
            goto label_19cd18;
        }
    }
    ctx->pc = 0x19C734u;
    // 0x19c734: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19c734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19c738: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x19c738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19c73c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19c740: 0x91650004  lbu         $a1, 0x4($t3)
    ctx->pc = 0x19c740u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x19c744: 0x3c024438  lui         $v0, 0x4438
    ctx->pc = 0x19c744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17464 << 16));
    // 0x19c748: 0x5180a  movz        $v1, $zero, $a1
    ctx->pc = 0x19c748u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x19c74c: 0x34630114  ori         $v1, $v1, 0x114
    ctx->pc = 0x19c74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)276);
    // 0x19c750: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c754: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x19c754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x19c758: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x19c758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x19c75c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x19c75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x19c760: 0x95620002  lhu         $v0, 0x2($t3)
    ctx->pc = 0x19c760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x19c764: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x19c764u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c768: 0xa6070016  sh          $a3, 0x16($s0)
    ctx->pc = 0x19c768u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 7));
    // 0x19c76c: 0x91640015  lbu         $a0, 0x15($t3)
    ctx->pc = 0x19c76cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 21)));
    // 0x19c770: 0x91630016  lbu         $v1, 0x16($t3)
    ctx->pc = 0x19c770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 22)));
    // 0x19c774: 0x91620017  lbu         $v0, 0x17($t3)
    ctx->pc = 0x19c774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 23)));
    // 0x19c778: 0x91650014  lbu         $a1, 0x14($t3)
    ctx->pc = 0x19c778u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x19c77c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x19c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x19c780: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x19c780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x19c784: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x19c784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19c788: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x19c788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x19c78c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x19c78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x19c790: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19c790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19c794: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x19c794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x19c798: 0x91620004  lbu         $v0, 0x4($t3)
    ctx->pc = 0x19c798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x19c79c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C79Cu;
    {
        const bool branch_taken_0x19c79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c79c) {
            ctx->pc = 0x19C7B8u;
            goto label_19c7b8;
        }
    }
    ctx->pc = 0x19C7A4u;
    // 0x19c7a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x19c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c7a8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x19c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x19c7ac: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x19c7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x19c7b0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x19c7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c7b4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x19c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_19c7b8:
    // 0x19c7b8: 0xa1c3c  dsll32      $v1, $t2, 16
    ctx->pc = 0x19c7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 16));
    // 0x19c7bc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19c7bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19c7c0: 0x91670017  lbu         $a3, 0x17($t3)
    ctx->pc = 0x19c7c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 23)));
    // 0x19c7c4: 0x30620fff  andi        $v0, $v1, 0xFFF
    ctx->pc = 0x19c7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x19c7c8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x19c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c7cc: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x19c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x19c7d0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x19c7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x19c7d4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x19c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x19c7d8: 0x24636540  addiu       $v1, $v1, 0x6540
    ctx->pc = 0x19c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25920));
    // 0x19c7dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c7e0: 0xa207000f  sb          $a3, 0xF($s0)
    ctx->pc = 0x19c7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 7));
    // 0x19c7e4: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x19c7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19c7e8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x19c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x19c7ec: 0x856a0006  lh          $t2, 0x6($t3)
    ctx->pc = 0x19c7ecu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x19c7f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c7f4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x19c7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c7f8: 0x856c0008  lh          $t4, 0x8($t3)
    ctx->pc = 0x19c7f8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x19c7fc: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x19c7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19c800: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19c800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x19c804: 0x95670010  lhu         $a3, 0x10($t3)
    ctx->pc = 0x19c804u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x19c808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c80c: 0x95630012  lhu         $v1, 0x12($t3)
    ctx->pc = 0x19c80cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 18)));
    // 0x19c810: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x19c810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19c814: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x19c814u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x19c818: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x19c818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19c81c: 0xc1023  negu        $v0, $t4
    ctx->pc = 0x19c81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
    // 0x19c820: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x19c820u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x19c824: 0xea5023  subu        $t2, $a3, $t2
    ctx->pc = 0x19c824u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x19c828: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19c828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19c82c: 0x6c3823  subu        $a3, $v1, $t4
    ctx->pc = 0x19c82cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x19c830: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19c830u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19c834: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x19c834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x19c838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c83c: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x19c83cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19c840: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19c840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19c844: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x19c844u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x19c848: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x19c848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19c84c: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x19c84cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19c850: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19c850u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19c854: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x19c854u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x19c858: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19c858u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19c85c: 0x4543c  dsll32      $t2, $a0, 16
    ctx->pc = 0x19c85cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 16));
    // 0x19c860: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x19c860u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x19c864: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x19c864u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x19c868: 0x448a1800  mtc1        $t2, $f3
    ctx->pc = 0x19c868u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19c86c: 0x0  nop
    ctx->pc = 0x19c86cu;
    // NOP
    // 0x19c870: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19c870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19c874: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x19c874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x19c878: 0x4605181a  mula.s      $f3, $f5
    ctx->pc = 0x19c878u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x19c87c: 0x4604119d  msub.s      $f6, $f2, $f4
    ctx->pc = 0x19c87cu;
    ctx->f[6] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x19c880: 0x4604181a  mula.s      $f3, $f4
    ctx->pc = 0x19c880u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x19c884: 0x46013183  div.s       $f6, $f6, $f1
    ctx->pc = 0x19c884u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[6], ctx->f[1]); }
    // 0x19c888: 0x4605109c  madd.s      $f2, $f2, $f5
    ctx->pc = 0x19c888u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x19c88c: 0x0  nop
    ctx->pc = 0x19c88cu;
    // NOP
    // 0x19c890: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x19c890u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x19c894: 0x0  nop
    ctx->pc = 0x19c894u;
    // NOP
    // 0x19c898: 0x0  nop
    ctx->pc = 0x19c898u;
    // NOP
    // 0x19c89c: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x19c89cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19c8a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19C8A0u;
    {
        const bool branch_taken_0x19c8a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19c8a0) {
            ctx->pc = 0x19C8B8u;
            goto label_19c8b8;
        }
    }
    ctx->pc = 0x19C8A8u;
    // 0x19c8a8: 0x460031a4  .word       0x460031A4                   # cvt.w.s     $f6, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c8a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[6], &tmp, sizeof(tmp)); }
    // 0x19c8ac: 0x440c3000  mfc1        $t4, $f6
    ctx->pc = 0x19c8acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x19c8b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19C8B0u;
    {
        const bool branch_taken_0x19c8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8B0u;
        // 0x19c8b4: 0x3c0a4f00  lui         $t2, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8b0) {
            ctx->pc = 0x19C8D4u;
            goto label_19c8d4;
        }
    }
    ctx->pc = 0x19C8B8u;
label_19c8b8:
    // 0x19c8b8: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x19c8b8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x19c8bc: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x19c8bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x19c8c0: 0x460031a4  .word       0x460031A4                   # cvt.w.s     $f6, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c8c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[6], &tmp, sizeof(tmp)); }
    // 0x19c8c4: 0x440c3000  mfc1        $t4, $f6
    ctx->pc = 0x19c8c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x19c8c8: 0x0  nop
    ctx->pc = 0x19c8c8u;
    // NOP
    // 0x19c8cc: 0x18a6025  or          $t4, $t4, $t2
    ctx->pc = 0x19c8ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x19c8d0: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x19c8d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
label_19c8d4:
    // 0x19c8d4: 0x318cffff  andi        $t4, $t4, 0xFFFF
    ctx->pc = 0x19c8d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x19c8d8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x19c8d8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c8dc: 0x1886021  addu        $t4, $t4, $t0
    ctx->pc = 0x19c8dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x19c8e0: 0xc6c3c  dsll32      $t5, $t4, 16
    ctx->pc = 0x19c8e0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 16));
    // 0x19c8e4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x19c8e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19c8e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19C8E8u;
    {
        const bool branch_taken_0x19c8e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8E8u;
        // 0x19c8ec: 0xd6c3f  dsra32      $t5, $t5, 16 (Delay Slot)
        SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8e8) {
            ctx->pc = 0x19C900u;
            goto label_19c900;
        }
    }
    ctx->pc = 0x19C8F0u;
    // 0x19c8f0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c8f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x19c8f4: 0x440c1000  mfc1        $t4, $f2
    ctx->pc = 0x19c8f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x19c8f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19C8F8u;
    {
        const bool branch_taken_0x19c8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8F8u;
        // 0x19c8fc: 0xd543c  dsll32      $t2, $t5, 16 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8f8) {
            ctx->pc = 0x19C91Cu;
            goto label_19c91c;
        }
    }
    ctx->pc = 0x19C900u;
label_19c900:
    // 0x19c900: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x19c900u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x19c904: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x19c904u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x19c908: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c908u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x19c90c: 0x440c1000  mfc1        $t4, $f2
    ctx->pc = 0x19c90cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x19c910: 0x0  nop
    ctx->pc = 0x19c910u;
    // NOP
    // 0x19c914: 0x18a6025  or          $t4, $t4, $t2
    ctx->pc = 0x19c914u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x19c918: 0xd543c  dsll32      $t2, $t5, 16
    ctx->pc = 0x19c918u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) << (32 + 16));
label_19c91c:
    // 0x19c91c: 0x318cffff  andi        $t4, $t4, 0xFFFF
    ctx->pc = 0x19c91cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x19c920: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x19c920u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x19c924: 0x1896021  addu        $t4, $t4, $t1
    ctx->pc = 0x19c924u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x19c928: 0x254a0700  addiu       $t2, $t2, 0x700
    ctx->pc = 0x19c928u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1792));
    // 0x19c92c: 0xc6c3c  dsll32      $t5, $t4, 16
    ctx->pc = 0x19c92cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 16));
    // 0x19c930: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x19c930u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x19c934: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19c934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19c938: 0xd6c3f  dsra32      $t5, $t5, 16
    ctx->pc = 0x19c938u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 16));
    // 0x19c93c: 0x314cffff  andi        $t4, $t2, 0xFFFF
    ctx->pc = 0x19c93cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x19c940: 0x25aa0f20  addiu       $t2, $t5, 0xF20
    ctx->pc = 0x19c940u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 3872));
    // 0x19c944: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x19c944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19c948: 0xa54c0  sll         $t2, $t2, 19
    ctx->pc = 0x19c948u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 19));
    // 0x19c94c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19c94cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19c950: 0x18a5025  or          $t2, $t4, $t2
    ctx->pc = 0x19c950u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x19c954: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19c954u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19c958: 0xae0a0020  sw          $t2, 0x20($s0)
    ctx->pc = 0x19c958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 10));
    // 0x19c95c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c960: 0x956c000a  lhu         $t4, 0xA($t3)
    ctx->pc = 0x19c960u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x19c964: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c968: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x19c968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19c96c: 0x3c0a4080  lui         $t2, 0x4080
    ctx->pc = 0x19c96cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16512 << 16));
    // 0x19c970: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19c970u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19c974: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c978: 0x0  nop
    ctx->pc = 0x19c978u;
    // NOP
    // 0x19c97c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x19c97cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19c980: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19c980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x19c984: 0xae0c0024  sw          $t4, 0x24($s0)
    ctx->pc = 0x19c984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 12));
    // 0x19c988: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x19c988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x19c98c: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x19c98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x19c990: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x19c990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19c994: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x19c994u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c99c: 0x4606181a  mula.s      $f3, $f6
    ctx->pc = 0x19c99cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x19c9a0: 0x4605111d  msub.s      $f4, $f2, $f5
    ctx->pc = 0x19c9a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x19c9a4: 0x4605181a  mula.s      $f3, $f5
    ctx->pc = 0x19c9a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x19c9a8: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x19c9a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x19c9ac: 0x4606109c  madd.s      $f2, $f2, $f6
    ctx->pc = 0x19c9acu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[6]));
    // 0x19c9b0: 0x0  nop
    ctx->pc = 0x19c9b0u;
    // NOP
    // 0x19c9b4: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x19c9b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x19c9b8: 0x0  nop
    ctx->pc = 0x19c9b8u;
    // NOP
    // 0x19c9bc: 0x0  nop
    ctx->pc = 0x19c9bcu;
    // NOP
    // 0x19c9c0: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x19c9c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19c9c4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19C9C4u;
    {
        const bool branch_taken_0x19c9c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19c9c4) {
            ctx->pc = 0x19C9DCu;
            goto label_19c9dc;
        }
    }
    ctx->pc = 0x19C9CCu;
    // 0x19c9cc: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c9ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19c9d0: 0x440a2000  mfc1        $t2, $f4
    ctx->pc = 0x19c9d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x19c9d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19C9D4u;
    {
        const bool branch_taken_0x19c9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9D4u;
        // 0x19c9d8: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c9d4) {
            ctx->pc = 0x19C9F8u;
            goto label_19c9f8;
        }
    }
    ctx->pc = 0x19C9DCu;
label_19c9dc:
    // 0x19c9dc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x19c9dcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x19c9e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19c9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19c9e4: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c9e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19c9e8: 0x440a2000  mfc1        $t2, $f4
    ctx->pc = 0x19c9e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x19c9ec: 0x0  nop
    ctx->pc = 0x19c9ecu;
    // NOP
    // 0x19c9f0: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x19c9f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x19c9f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_19c9f8:
    // 0x19c9f8: 0x314affff  andi        $t2, $t2, 0xFFFF
    ctx->pc = 0x19c9f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x19c9fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ca00: 0x1485021  addu        $t2, $t2, $t0
    ctx->pc = 0x19ca00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x19ca04: 0xa643c  dsll32      $t4, $t2, 16
    ctx->pc = 0x19ca04u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << (32 + 16));
    // 0x19ca08: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x19ca08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ca0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19CA0Cu;
    {
        const bool branch_taken_0x19ca0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA0Cu;
        // 0x19ca10: 0xc643f  dsra32      $t4, $t4, 16 (Delay Slot)
        SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca0c) {
            ctx->pc = 0x19CA24u;
            goto label_19ca24;
        }
    }
    ctx->pc = 0x19CA14u;
    // 0x19ca14: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19ca14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x19ca18: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x19ca18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x19ca1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19CA1Cu;
    {
        const bool branch_taken_0x19ca1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA1Cu;
        // 0x19ca20: 0xc143c  dsll32      $v0, $t4, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca1c) {
            ctx->pc = 0x19CA40u;
            goto label_19ca40;
        }
    }
    ctx->pc = 0x19CA24u;
label_19ca24:
    // 0x19ca24: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x19ca24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x19ca28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19ca2c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19ca2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x19ca30: 0x440a1000  mfc1        $t2, $f2
    ctx->pc = 0x19ca30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x19ca34: 0x0  nop
    ctx->pc = 0x19ca34u;
    // NOP
    // 0x19ca38: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x19ca38u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x19ca3c: 0xc143c  dsll32      $v0, $t4, 16
    ctx->pc = 0x19ca3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 16));
label_19ca40:
    // 0x19ca40: 0x314affff  andi        $t2, $t2, 0xFFFF
    ctx->pc = 0x19ca40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x19ca44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19ca44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19ca48: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x19ca48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x19ca4c: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x19ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x19ca50: 0xa643c  dsll32      $t4, $t2, 16
    ctx->pc = 0x19ca50u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << (32 + 16));
    // 0x19ca54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x19ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19ca58: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x19ca58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x19ca5c: 0xc643f  dsra32      $t4, $t4, 16
    ctx->pc = 0x19ca5cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
    // 0x19ca60: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x19ca60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19ca64: 0x25820f20  addiu       $v0, $t4, 0xF20
    ctx->pc = 0x19ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 3872));
    // 0x19ca68: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x19ca68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x19ca6c: 0x7643c  dsll32      $t4, $a3, 16
    ctx->pc = 0x19ca6cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) << (32 + 16));
    // 0x19ca70: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x19ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x19ca74: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19ca74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ca78: 0x1423825  or          $a3, $t2, $v0
    ctx->pc = 0x19ca78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x19ca7c: 0xc643f  dsra32      $t4, $t4, 16
    ctx->pc = 0x19ca7cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
    // 0x19ca80: 0xae070028  sw          $a3, 0x28($s0)
    ctx->pc = 0x19ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 7));
    // 0x19ca84: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x19ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x19ca88: 0x3c074080  lui         $a3, 0x4080
    ctx->pc = 0x19ca88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16512 << 16));
    // 0x19ca8c: 0x956c000a  lhu         $t4, 0xA($t3)
    ctx->pc = 0x19ca8cu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x19ca90: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x19ca90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x19ca94: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x19ca94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19ca98: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x19ca98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x19ca9c: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x19ca9cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x19caa0: 0xae0c002c  sw          $t4, 0x2C($s0)
    ctx->pc = 0x19caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 12));
    // 0x19caa4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x19caa4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19caa8: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x19caa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x19caac: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x19caacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19cab0: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x19cab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19cab4: 0x4606181a  mula.s      $f3, $f6
    ctx->pc = 0x19cab4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x19cab8: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x19cab8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19cabc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19cabcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cac0: 0x4605111d  msub.s      $f4, $f2, $f5
    ctx->pc = 0x19cac0u;
    ctx->f[4] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x19cac4: 0x4605181a  mula.s      $f3, $f5
    ctx->pc = 0x19cac4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x19cac8: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x19cac8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x19cacc: 0x4606109c  madd.s      $f2, $f2, $f6
    ctx->pc = 0x19caccu;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[6]));
    // 0x19cad0: 0x0  nop
    ctx->pc = 0x19cad0u;
    // NOP
    // 0x19cad4: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x19cad4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x19cad8: 0x0  nop
    ctx->pc = 0x19cad8u;
    // NOP
    // 0x19cadc: 0x0  nop
    ctx->pc = 0x19cadcu;
    // NOP
    // 0x19cae0: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x19cae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cae4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19CAE4u;
    {
        const bool branch_taken_0x19cae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19cae4) {
            ctx->pc = 0x19CAFCu;
            goto label_19cafc;
        }
    }
    ctx->pc = 0x19CAECu;
    // 0x19caec: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19caecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19caf0: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x19caf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x19caf4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19CAF4u;
    {
        const bool branch_taken_0x19caf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAF4u;
        // 0x19caf8: 0x30e7ffff  andi        $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19caf4) {
            ctx->pc = 0x19CB18u;
            goto label_19cb18;
        }
    }
    ctx->pc = 0x19CAFCu;
label_19cafc:
    // 0x19cafc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x19cafcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x19cb00: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19cb00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19cb04: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19cb04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19cb08: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x19cb08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x19cb0c: 0x0  nop
    ctx->pc = 0x19cb0cu;
    // NOP
    // 0x19cb10: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x19cb10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x19cb14: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x19cb14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_19cb18:
    // 0x19cb18: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x19cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x19cb1c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x19cb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x19cb20: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x19cb20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x19cb24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19cb24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cb28: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x19cb28u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x19cb2c: 0x24e70700  addiu       $a3, $a3, 0x700
    ctx->pc = 0x19cb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1792));
    // 0x19cb30: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x19cb30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x19cb34: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x19cb34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cb38: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19CB38u;
    {
        const bool branch_taken_0x19cb38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB38u;
        // 0x19cb3c: 0x30ecffff  andi        $t4, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb38) {
            ctx->pc = 0x19CB50u;
            goto label_19cb50;
        }
    }
    ctx->pc = 0x19CB40u;
    // 0x19cb40: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19cb40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x19cb44: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x19cb44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x19cb48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19CB48u;
    {
        const bool branch_taken_0x19cb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB48u;
        // 0x19cb4c: 0x30e4ffff  andi        $a0, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb48) {
            ctx->pc = 0x19CB6Cu;
            goto label_19cb6c;
        }
    }
    ctx->pc = 0x19CB50u;
label_19cb50:
    // 0x19cb50: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x19cb50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x19cb54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x19cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x19cb58: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19cb58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x19cb5c: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x19cb5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x19cb60: 0x0  nop
    ctx->pc = 0x19cb60u;
    // NOP
    // 0x19cb64: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x19cb64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x19cb68: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x19cb68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_19cb6c:
    // 0x19cb6c: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x19cb6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19cb70: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x19cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x19cb74: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x19cb74u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x19cb78: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x19cb78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19cb7c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x19cb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19cb80: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x19cb80u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x19cb84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19cb84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19cb88: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x19cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x19cb8c: 0x244a0f20  addiu       $t2, $v0, 0xF20
    ctx->pc = 0x19cb8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x19cb90: 0xa54c0  sll         $t2, $t2, 19
    ctx->pc = 0x19cb90u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 19));
    // 0x19cb94: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x19cb98: 0x18a5025  or          $t2, $t4, $t2
    ctx->pc = 0x19cb98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x19cb9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x19cb9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cba0: 0xae0a0038  sw          $t2, 0x38($s0)
    ctx->pc = 0x19cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 10));
    // 0x19cba4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x19cba4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19cba8: 0x9564000a  lhu         $a0, 0xA($t3)
    ctx->pc = 0x19cba8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x19cbac: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x19cbacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19cbb0: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x19cbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x19cbb4: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x19cbb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x19cbb8: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x19cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x19cbbc: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x19cbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19cbc0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19cbc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19cbc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cbc8: 0x4606181a  mula.s      $f3, $f6
    ctx->pc = 0x19cbc8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x19cbcc: 0x4605111d  msub.s      $f4, $f2, $f5
    ctx->pc = 0x19cbccu;
    ctx->f[4] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[5]));
    // 0x19cbd0: 0x4605181a  mula.s      $f3, $f5
    ctx->pc = 0x19cbd0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x19cbd4: 0x46012103  div.s       $f4, $f4, $f1
    ctx->pc = 0x19cbd4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x19cbd8: 0x4606109c  madd.s      $f2, $f2, $f6
    ctx->pc = 0x19cbd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[6]));
    // 0x19cbdc: 0x0  nop
    ctx->pc = 0x19cbdcu;
    // NOP
    // 0x19cbe0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x19cbe0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x19cbe4: 0x0  nop
    ctx->pc = 0x19cbe4u;
    // NOP
    // 0x19cbe8: 0x0  nop
    ctx->pc = 0x19cbe8u;
    // NOP
    // 0x19cbec: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x19cbecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cbf0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19CBF0u;
    {
        const bool branch_taken_0x19cbf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19cbf0) {
            ctx->pc = 0x19CC08u;
            goto label_19cc08;
        }
    }
    ctx->pc = 0x19CBF8u;
    // 0x19cbf8: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19cbf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19cbfc: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x19cbfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19cc00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19CC00u;
    {
        const bool branch_taken_0x19cc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC00u;
        // 0x19cc04: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc00) {
            ctx->pc = 0x19CC24u;
            goto label_19cc24;
        }
    }
    ctx->pc = 0x19CC08u;
label_19cc08:
    // 0x19cc08: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x19cc08u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x19cc0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19cc10: 0x46002124  .word       0x46002124                   # cvt.w.s     $f4, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19cc10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x19cc14: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x19cc14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19cc18: 0x0  nop
    ctx->pc = 0x19cc18u;
    // NOP
    // 0x19cc1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19cc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19cc20: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19cc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_19cc24:
    // 0x19cc24: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x19cc28: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x19cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x19cc2c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x19cc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19cc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cc34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19cc34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19cc38: 0x24630700  addiu       $v1, $v1, 0x700
    ctx->pc = 0x19cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1792));
    // 0x19cc3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19cc40: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x19cc40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cc44: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19CC44u;
    {
        const bool branch_taken_0x19cc44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC44u;
        // 0x19cc48: 0x3067ffff  andi        $a3, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc44) {
            ctx->pc = 0x19CC5Cu;
            goto label_19cc5c;
        }
    }
    ctx->pc = 0x19CC4Cu;
    // 0x19cc4c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19cc4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x19cc50: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x19cc50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19cc54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19CC54u;
    {
        const bool branch_taken_0x19cc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CC54u;
        // 0x19cc58: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cc54) {
            ctx->pc = 0x19CC78u;
            goto label_19cc78;
        }
    }
    ctx->pc = 0x19CC5Cu;
label_19cc5c:
    // 0x19cc5c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x19cc5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x19cc60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19cc64: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19cc64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x19cc68: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x19cc68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x19cc6c: 0x0  nop
    ctx->pc = 0x19cc6cu;
    // NOP
    // 0x19cc70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19cc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19cc74: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x19cc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_19cc78:
    // 0x19cc78: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x19cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19cc7c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x19cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x19cc80: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x19cc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x19cc84: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19cc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19cc88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19cc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19cc8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19cc90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19cc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cc94: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x19cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x19cc98: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x19cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x19cc9c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x19cc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x19cca0: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x19cca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x19cca4: 0x9562000a  lhu         $v0, 0xA($t3)
    ctx->pc = 0x19cca4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x19cca8: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x19cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x19ccac: 0x9567000c  lhu         $a3, 0xC($t3)
    ctx->pc = 0x19ccacu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x19ccb0: 0x9568000e  lhu         $t0, 0xE($t3)
    ctx->pc = 0x19ccb0u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 14)));
    // 0x19ccb4: 0x95620010  lhu         $v0, 0x10($t3)
    ctx->pc = 0x19ccb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x19ccb8: 0x95630012  lhu         $v1, 0x12($t3)
    ctx->pc = 0x19ccb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 18)));
    // 0x19ccbc: 0x74900  sll         $t1, $a3, 4
    ctx->pc = 0x19ccbcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x19ccc0: 0x85500  sll         $t2, $t0, 20
    ctx->pc = 0x19ccc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 20));
    // 0x19ccc4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x19ccc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x19ccc8: 0x12a1025  or          $v0, $t1, $t2
    ctx->pc = 0x19ccc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x19cccc: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x19ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x19ccd0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19ccd4: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x19ccd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x19ccd8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x19ccd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19ccdc: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x19ccdcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x19cce0: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x19cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x19cce4: 0x10a3825  or          $a3, $t0, $t2
    ctx->pc = 0x19cce4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 10));
    // 0x19cce8: 0x1221825  or          $v1, $t1, $v0
    ctx->pc = 0x19cce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x19ccec: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x19ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
    // 0x19ccf0: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x19ccf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x19ccf4: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x19ccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x19ccf8: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x19CCF8u;
    SET_GPR_U32(ctx, 31, 0x19CD00u);
    ctx->pc = 0x19CCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CCF8u;
    // 0x19ccfc: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x19CCF8u, 0x19CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CD00u;
label_19cd00:
    // 0x19cd00: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x19cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x19cd04: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x19cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x19cd08: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x19cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x19cd0c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19cd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19cd10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19cd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19cd14: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x19cd14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
label_19cd18:
    // 0x19cd18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19cd18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cd1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cd1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cd20: 0x3e00008  jr          $ra
    ctx->pc = 0x19CD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD20u;
        // 0x19cd24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CD28u;
}
