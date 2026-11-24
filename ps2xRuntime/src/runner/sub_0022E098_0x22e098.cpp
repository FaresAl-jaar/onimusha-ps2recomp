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

// Function: sub_0022E098
// Address: 0x22e098 - 0x22e274
void sub_0022E098_0x22e098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E098_0x22e098");
#endif

    switch (ctx->pc) {
        case 0x22e108u: goto label_22e108;
        case 0x22e168u: goto label_22e168;
        default: break;
    }

    ctx->pc = 0x22e098u;

    // 0x22e098: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22e098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22e09c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x22e09cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x22e0a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22e0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22e0a4: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x22e0a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x22e0a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22e0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22e0ac: 0x88c03  sra         $s1, $t0, 16
    ctx->pc = 0x22e0acu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 8), 16));
    // 0x22e0b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22e0b4: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x22e0b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e0b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22e0bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22e0bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e0c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22e0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x22e0c4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x22e0c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e0c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x22e0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x22e0cc: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x22e0ccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x22e0d0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x22e0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x22e0d4: 0xbb403  sra         $s6, $t3, 16
    ctx->pc = 0x22e0d4u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 11), 16));
    // 0x22e0d8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x22e0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x22e0dc: 0x98403  sra         $s0, $t1, 16
    ctx->pc = 0x22e0dcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 9), 16));
    // 0x22e0e0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x22e0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x22e0e4: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x22e0e4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e0e8: 0x87b50050  lh          $s5, 0x50($sp)
    ctx->pc = 0x22e0e8u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22e0ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x22e0ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e0f0: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x22e0f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22e0f4: 0x1a600051  blez        $s3, . + 4 + (0x51 << 2)
    ctx->pc = 0x22E0F4u;
    {
        const bool branch_taken_0x22e0f4 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x22E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0F4u;
        // 0x22e0f8: 0x868e0002  lh          $t6, 0x2($s4) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0f4) {
            ctx->pc = 0x22E23Cu;
            goto label_22e23c;
        }
    }
    ctx->pc = 0x22E0FCu;
    // 0x22e0fc: 0x241eff00  addiu       $fp, $zero, -0x100
    ctx->pc = 0x22e0fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x22e100: 0x3c170067  lui         $s7, 0x67
    ctx->pc = 0x22e100u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)103 << 16));
    // 0x22e104: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x22e104u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_22e108:
    // 0x22e108: 0x91a40001  lbu         $a0, 0x1($t5)
    ctx->pc = 0x22e108u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x22e10c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22e110: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x22e110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x22e114: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22e114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22e118: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x22e118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x22e11c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x22e11cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x22e120: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x22e120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x22e124: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x22E124u;
    {
        const bool branch_taken_0x22e124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E124u;
        // 0x22e128: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e124) {
            ctx->pc = 0x22E248u;
            goto label_22e248;
        }
    }
    ctx->pc = 0x22E12Cu;
    // 0x22e12c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x22e12cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22e130: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x22e130u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x22e134: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x22e134u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22e138: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x22e138u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22e13c: 0x563818  mult        $a3, $v0, $s6
    ctx->pc = 0x22e13cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x22e140: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x22e140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x22e144: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x22e144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x22e148: 0x24197fff  addiu       $t9, $zero, 0x7FFF
    ctx->pc = 0x22e148u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x22e14c: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x22e14cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22e150: 0x26eba268  addiu       $t3, $s7, -0x5D98
    ctx->pc = 0x22e150u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943336));
    // 0x22e154: 0xf51821  addu        $v1, $a3, $s5
    ctx->pc = 0x22e154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x22e158: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x22e158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x22e15c: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x22e15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x22e160: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x22e160u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x22e164: 0x0  nop
    ctx->pc = 0x22e164u;
    // NOP
label_22e168:
    // 0x22e168: 0x91a30000  lbu         $v1, 0x0($t5)
    ctx->pc = 0x22e168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x22e16c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x22e16cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x22e170: 0x20e1018  mult        $v0, $s0, $t6
    ctx->pc = 0x22e170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22e174: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x22e174u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e178: 0x72252018  mult1       $a0, $s1, $a1
    ctx->pc = 0x22e178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22e17c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x22e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x22e180: 0x32f03  sra         $a1, $v1, 28
    ctx->pc = 0x22e180u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 28));
    // 0x22e184: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x22e184u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x22e188: 0xaf2818  mult        $a1, $a1, $t7
    ctx->pc = 0x22e188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x22e18c: 0x20ec018  mult        $t8, $s0, $t6
    ctx->pc = 0x22e18cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x22e190: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x22e190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22e194: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x22e194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x22e198: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x22e198u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x22e19c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22e1a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22e1a4: 0x4b6021  addu        $t4, $v0, $t3
    ctx->pc = 0x22e1a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x22e1a8: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x22e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x22e1ac: 0x28838000  slti        $v1, $a0, -0x8000
    ctx->pc = 0x22e1acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x22e1b0: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x22e1b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22e1b4: 0x324282a  slt         $a1, $t9, $a0
    ctx->pc = 0x22e1b4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x22e1b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E1B8u;
    {
        const bool branch_taken_0x22e1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E1B8u;
        // 0x22e1bc: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e1b8) {
            ctx->pc = 0x22E1CCu;
            goto label_22e1cc;
        }
    }
    ctx->pc = 0x22E1C0u;
    // 0x22e1c0: 0x325200b  movn        $a0, $t9, $a1
    ctx->pc = 0x22e1c0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 25));
    // 0x22e1c4: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x22e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x22e1c8: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x22e1c8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_22e1cc:
    // 0x22e1cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22e1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e1d0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x22e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x22e1d4: 0x2251018  mult        $v0, $s1, $a1
    ctx->pc = 0x22e1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22e1d8: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x22e1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x22e1dc: 0x6f2018  mult        $a0, $v1, $t7
    ctx->pc = 0x22e1dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22e1e0: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x22e1e0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e1e4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x22e1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x22e1e8: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x22e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x22e1ec: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x22e1ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x22e1f0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x22e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22e1f4: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x22e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x22e1f8: 0x28828000  slti        $v0, $a0, -0x8000
    ctx->pc = 0x22e1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x22e1fc: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x22e1fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x22e200: 0x324282a  slt         $a1, $t9, $a0
    ctx->pc = 0x22e200u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x22e204: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E204u;
    {
        const bool branch_taken_0x22e204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E204u;
        // 0x22e208: 0x384c0000  xori        $t4, $v0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e204) {
            ctx->pc = 0x22E218u;
            goto label_22e218;
        }
    }
    ctx->pc = 0x22E20Cu;
    // 0x22e20c: 0x325200b  movn        $a0, $t9, $a1
    ctx->pc = 0x22e20cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 25));
    // 0x22e210: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x22e210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x22e214: 0x4c200b  movn        $a0, $v0, $t4
    ctx->pc = 0x22e214u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_22e218:
    // 0x22e218: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22e218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e21c: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x22e21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x22e220: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x22e220u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x22e224: 0x4e1ffd0  bgez        $a3, . + 4 + (-0x30 << 2)
    ctx->pc = 0x22E224u;
    {
        const bool branch_taken_0x22e224 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x22E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E224u;
        // 0x22e228: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e224) {
            ctx->pc = 0x22E168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e168;
        }
    }
    ctx->pc = 0x22E22Cu;
    // 0x22e22c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x22e22cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x22e230: 0x153102a  slt         $v0, $t2, $s3
    ctx->pc = 0x22e230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x22e234: 0x5440ffb4  bnel        $v0, $zero, . + 4 + (-0x4C << 2)
    ctx->pc = 0x22E234u;
    {
        const bool branch_taken_0x22e234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e234) {
            ctx->pc = 0x22E238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E234u;
            // 0x22e238: 0x95a30000  lhu         $v1, 0x0($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e108;
        }
    }
    ctx->pc = 0x22E23Cu;
label_22e23c:
    // 0x22e23c: 0xa68e0002  sh          $t6, 0x2($s4)
    ctx->pc = 0x22e23cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 14));
    // 0x22e240: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x22e240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e244: 0xa6850000  sh          $a1, 0x0($s4)
    ctx->pc = 0x22e244u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 5));
label_22e248:
    // 0x22e248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22e248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e24c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22e24cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22e250: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22e250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e254: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22e254u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22e258: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22e258u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e25c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x22e25cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22e260: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x22e260u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e264: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x22e264u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22e268: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x22e268u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e26c: 0x3e00008  jr          $ra
    ctx->pc = 0x22E26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E26Cu;
        // 0x22e270: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E274u;
}
