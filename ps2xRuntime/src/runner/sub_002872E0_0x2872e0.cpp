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

// Function: sub_002872E0
// Address: 0x2872e0 - 0x2877d4
void sub_002872E0_0x2872e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002872E0_0x2872e0");
#endif

    switch (ctx->pc) {
        case 0x287358u: goto label_287358;
        case 0x28747cu: goto label_28747c;
        case 0x287744u: goto label_287744;
        case 0x287750u: goto label_287750;
        case 0x287768u: goto label_287768;
        default: break;
    }

    ctx->pc = 0x2872e0u;

    // 0x2872e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2872e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2872e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2872e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2872e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2872e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2872ec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2872ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2872f0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2872f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872f4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2872f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2872f8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2872f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2872fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x287300: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x287300u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287304: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x287304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x287308: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x287308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28730c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28730cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x287310: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x287310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x287314: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x287314u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x287318: 0x9103003a  lbu         $v1, 0x3A($t0)
    ctx->pc = 0x287318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 58)));
    // 0x28731c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28731Cu;
    {
        const bool branch_taken_0x28731c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28731Cu;
        // 0x287320: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28731c) {
            ctx->pc = 0x287348u;
            goto label_287348;
        }
    }
    ctx->pc = 0x287324u;
    // 0x287324: 0x9243c  dsll32      $a0, $t1, 16
    ctx->pc = 0x287324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 16));
    // 0x287328: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x287328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28732c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x28732cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x287330: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x287330u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x287334: 0x0  nop
    ctx->pc = 0x287334u;
    // NOP
    // 0x287338: 0x0  nop
    ctx->pc = 0x287338u;
    // NOP
    // 0x28733c: 0x1810  mfhi        $v1
    ctx->pc = 0x28733cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x287340: 0x14600119  bnez        $v1, . + 4 + (0x119 << 2)
    ctx->pc = 0x287340u;
    {
        const bool branch_taken_0x287340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x287340) {
            ctx->pc = 0x2877A8u;
            goto label_2877a8;
        }
    }
    ctx->pc = 0x287348u;
label_287348:
    // 0x287348: 0x92630039  lbu         $v1, 0x39($s3)
    ctx->pc = 0x287348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 57)));
    // 0x28734c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28734cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x287350: 0x10200115  beqz        $at, . + 4 + (0x115 << 2)
    ctx->pc = 0x287350u;
    {
        const bool branch_taken_0x287350 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x287354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287350u;
        // 0x287354: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287350) {
            ctx->pc = 0x2877A8u;
            goto label_2877a8;
        }
    }
    ctx->pc = 0x287358u;
label_287358:
    // 0x287358: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x287358u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28735c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x28735cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x287360: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x287360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x287364: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x287364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x287368: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x287368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28736c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28736cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x287370: 0x2c38021  addu        $s0, $s6, $v1
    ctx->pc = 0x287370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x287374: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x287374u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x287378: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x287378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x28737c: 0x86630006  lh          $v1, 0x6($s3)
    ctx->pc = 0x28737cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x287380: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x287380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x287384: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x287384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x287388: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28738c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x28738cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x287390: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x287390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x287394: 0x86620004  lh          $v0, 0x4($s3)
    ctx->pc = 0x287394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x287398: 0x42302  srl         $a0, $a0, 12
    ctx->pc = 0x287398u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x28739c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x28739cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2873a0: 0x0  nop
    ctx->pc = 0x2873a0u;
    // NOP
    // 0x2873a4: 0x0  nop
    ctx->pc = 0x2873a4u;
    // NOP
    // 0x2873a8: 0x1810  mfhi        $v1
    ctx->pc = 0x2873a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2873ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2873acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2873b0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2873b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2873b4: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x2873b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2873b8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2873B8u;
    {
        const bool branch_taken_0x2873b8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x2873BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873B8u;
        // 0x2873bc: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873b8) {
            ctx->pc = 0x2873C8u;
            goto label_2873c8;
        }
    }
    ctx->pc = 0x2873C0u;
    // 0x2873c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2873C0u;
    {
        const bool branch_taken_0x2873c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873C0u;
        // 0x2873c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873c0) {
            ctx->pc = 0x2873D8u;
            goto label_2873d8;
        }
    }
    ctx->pc = 0x2873C8u;
label_2873c8:
    // 0x2873c8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2873C8u;
    {
        const bool branch_taken_0x2873c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2873c8) {
            ctx->pc = 0x2873D8u;
            goto label_2873d8;
        }
    }
    ctx->pc = 0x2873D0u;
    // 0x2873d0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2873D0u;
    {
        const bool branch_taken_0x2873d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2873D0u;
        // 0x2873d4: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873d0) {
            ctx->pc = 0x2873D8u;
            goto label_2873d8;
        }
    }
    ctx->pc = 0x2873D8u;
label_2873d8:
    // 0x2873d8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2873d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2873dc: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x2873dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2873e0: 0x926b0038  lbu         $t3, 0x38($s3)
    ctx->pc = 0x2873e0u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2873e4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2873e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2873e8: 0x34436667  ori         $v1, $v0, 0x6667
    ctx->pc = 0x2873e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2873ec: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x2873ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2873f0: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x2873f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2873f4: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x2873f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2873f8: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x2873f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2873fc: 0x26670012  addiu       $a3, $s3, 0x12
    ctx->pc = 0x2873fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 18));
    // 0x287400: 0x26680014  addiu       $t0, $s3, 0x14
    ctx->pc = 0x287400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x287404: 0x26690018  addiu       $t1, $s3, 0x18
    ctx->pc = 0x287404u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x287408: 0x316b000f  andi        $t3, $t3, 0xF
    ctx->pc = 0x287408u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x28740c: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x28740cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
    // 0x287410: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x287410u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x287414: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x287414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x287418: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x287418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28741c: 0x25fc2  srl         $t3, $v0, 31
    ctx->pc = 0x28741cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x287420: 0x0  nop
    ctx->pc = 0x287420u;
    // NOP
    // 0x287424: 0x1010  mfhi        $v0
    ctx->pc = 0x287424u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x287428: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x287428u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x28742c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x28742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x287430: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x287430u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x287434: 0x926b0038  lbu         $t3, 0x38($s3)
    ctx->pc = 0x287434u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x287438: 0x8602000c  lh          $v0, 0xC($s0)
    ctx->pc = 0x287438u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28743c: 0xb5903  sra         $t3, $t3, 4
    ctx->pc = 0x28743cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 4));
    // 0x287440: 0x316b000f  andi        $t3, $t3, 0xF
    ctx->pc = 0x287440u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
    // 0x287444: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x287444u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
    // 0x287448: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x287448u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x28744c: 0x704b5818  mult1       $t3, $v0, $t3
    ctx->pc = 0x28744cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x287450: 0x6b0018  mult        $zero, $v1, $t3
    ctx->pc = 0x287450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287454: 0x0  nop
    ctx->pc = 0x287454u;
    // NOP
    // 0x287458: 0x0  nop
    ctx->pc = 0x287458u;
    // NOP
    // 0x28745c: 0x1810  mfhi        $v1
    ctx->pc = 0x28745cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x287460: 0xb5fc2  srl         $t3, $t3, 31
    ctx->pc = 0x287460u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x287464: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x287464u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x287468: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x287468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x28746c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28746cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x287470: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x287470u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x287474: 0xc096da0  jal         func_25B680
    ctx->pc = 0x287474u;
    SET_GPR_U32(ctx, 31, 0x28747Cu);
    ctx->pc = 0x287478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287474u;
    // 0x287478: 0xa60a000e  sh          $t2, 0xE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x287474u, 0x28747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28747Cu;
label_28747c:
    // 0x28747c: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x28747cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x287480: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x287480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x287484: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x287484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x287488: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x287488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28748c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x287490: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x287490u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x287494: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x287494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x287498: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x287498u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x28749c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28749cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2874a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2874a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2874a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2874a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2874a8: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x2874a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x2874ac: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2874acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2874b0: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x2874b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2874b4: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x2874b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2874b8: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x2874b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2874bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2874bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2874c0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2874c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2874c4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2874c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2874c8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2874c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2874cc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2874CCu;
    {
        const bool branch_taken_0x2874cc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2874D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874CCu;
        // 0x2874d0: 0x460400c1  sub.s       $f3, $f0, $f4 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874cc) {
            ctx->pc = 0x2874E0u;
            goto label_2874e0;
        }
    }
    ctx->pc = 0x2874D4u;
    // 0x2874d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2874d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2874d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2874D8u;
    {
        const bool branch_taken_0x2874d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2874DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2874D8u;
        // 0x2874dc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2874d8) {
            ctx->pc = 0x2874FCu;
            goto label_2874fc;
        }
    }
    ctx->pc = 0x2874E0u;
label_2874e0:
    // 0x2874e0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2874e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2874e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2874e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2874e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2874e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2874ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2874ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2874f0: 0x0  nop
    ctx->pc = 0x2874f0u;
    // NOP
    // 0x2874f4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2874f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2874f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2874f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2874fc:
    // 0x2874fc: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x2874fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x287500: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x287500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x287504: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x287504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287508: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x287508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28750c: 0x0  nop
    ctx->pc = 0x28750cu;
    // NOP
    // 0x287510: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x287510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x287514: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x287514u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x287518: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x287518u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x28751c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28751cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287520: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x287520u;
    {
        const bool branch_taken_0x287520 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287520u;
        // 0x287524: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287520) {
            ctx->pc = 0x287530u;
            goto label_287530;
        }
    }
    ctx->pc = 0x287528u;
    // 0x287528: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x287528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x28752c: 0x0  nop
    ctx->pc = 0x28752cu;
    // NOP
label_287530:
    // 0x287530: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x287530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x287534: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x287534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x287538: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x287538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x28753c: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x28753cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287540: 0xc6640028  lwc1        $f4, 0x28($s3)
    ctx->pc = 0x287540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x287544: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x287544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x287548: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28754c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x28754cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x287550: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x287550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x287554: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x287554u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x287558: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287558u;
    {
        const bool branch_taken_0x287558 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x28755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287558u;
        // 0x28755c: 0x460400c1  sub.s       $f3, $f0, $f4 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287558) {
            ctx->pc = 0x28756Cu;
            goto label_28756c;
        }
    }
    ctx->pc = 0x287560u;
    // 0x287560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x287560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287564: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x287564u;
    {
        const bool branch_taken_0x287564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287564u;
        // 0x287568: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287564) {
            ctx->pc = 0x287588u;
            goto label_287588;
        }
    }
    ctx->pc = 0x28756Cu;
label_28756c:
    // 0x28756c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28756cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x287570: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x287570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x287574: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x287574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x287578: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x287578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28757c: 0x0  nop
    ctx->pc = 0x28757cu;
    // NOP
    // 0x287580: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x287580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x287584: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x287584u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_287588:
    // 0x287588: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x287588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x28758c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x28758cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x287590: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x287590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287594: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x287594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287598: 0x0  nop
    ctx->pc = 0x287598u;
    // NOP
    // 0x28759c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28759cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2875a0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2875a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2875a4: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x2875a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2875a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2875a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2875ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2875ACu;
    {
        const bool branch_taken_0x2875ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2875B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875ACu;
        // 0x2875b0: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875ac) {
            ctx->pc = 0x2875B8u;
            goto label_2875b8;
        }
    }
    ctx->pc = 0x2875B4u;
    // 0x2875b4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2875b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2875b8:
    // 0x2875b8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2875b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2875bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2875bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2875c0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2875c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2875c4: 0xc6640034  lwc1        $f4, 0x34($s3)
    ctx->pc = 0x2875c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2875c8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2875c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2875cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2875ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2875d0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2875d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2875d4: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x2875d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2875d8: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x2875d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x2875dc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2875DCu;
    {
        const bool branch_taken_0x2875dc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2875E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875DCu;
        // 0x2875e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875dc) {
            ctx->pc = 0x2875F0u;
            goto label_2875f0;
        }
    }
    ctx->pc = 0x2875E4u;
    // 0x2875e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2875e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2875e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2875E8u;
    {
        const bool branch_taken_0x2875e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2875ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875E8u;
        // 0x2875ec: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875e8) {
            ctx->pc = 0x287608u;
            goto label_287608;
        }
    }
    ctx->pc = 0x2875F0u;
label_2875f0:
    // 0x2875f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2875f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2875f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2875f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2875f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2875f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2875fc: 0x0  nop
    ctx->pc = 0x2875fcu;
    // NOP
    // 0x287600: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x287600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x287604: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x287604u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_287608:
    // 0x287608: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x287608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x28760c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28760cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x287610: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x287610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x287614: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x287614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287618: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x287618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28761c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x28761cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x287620: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x287620u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x287624: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x287624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287628: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x287628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x28762c: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x28762cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x287630: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x287630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287634: 0x0  nop
    ctx->pc = 0x287634u;
    // NOP
    // 0x287638: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x287638u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28763c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28763Cu;
    {
        const bool branch_taken_0x28763c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28763c) {
            ctx->pc = 0x287648u;
            goto label_287648;
        }
    }
    ctx->pc = 0x287644u;
    // 0x287644: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x287644u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_287648:
    // 0x287648: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x287648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x28764c: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x28764cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x287650: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x287650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x287654: 0xc6630040  lwc1        $f3, 0x40($s3)
    ctx->pc = 0x287654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287658: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28765c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x28765cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x287660: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x287660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x287664: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x287664u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x287668: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287668u;
    {
        const bool branch_taken_0x287668 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x28766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287668u;
        // 0x28766c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287668) {
            ctx->pc = 0x28767Cu;
            goto label_28767c;
        }
    }
    ctx->pc = 0x287670u;
    // 0x287670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x287670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287674: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x287674u;
    {
        const bool branch_taken_0x287674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287674u;
        // 0x287678: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287674) {
            ctx->pc = 0x287694u;
            goto label_287694;
        }
    }
    ctx->pc = 0x28767Cu;
label_28767c:
    // 0x28767c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28767cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x287680: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x287680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x287684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x287684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287688: 0x0  nop
    ctx->pc = 0x287688u;
    // NOP
    // 0x28768c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28768cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x287690: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x287690u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_287694:
    // 0x287694: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x287694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x287698: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x287698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28769c: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x28769cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2876a0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2876a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2876a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2876a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2876a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2876a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2876ac: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2876acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2876b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2876b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2876b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2876b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2876b8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2876b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2876bc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2876bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2876c0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2876c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2876c4: 0xc6630044  lwc1        $f3, 0x44($s3)
    ctx->pc = 0x2876c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2876c8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2876c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2876cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2876ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2876d0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2876d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2876d4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2876d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2876d8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2876d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2876dc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2876DCu;
    {
        const bool branch_taken_0x2876dc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2876E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876DCu;
        // 0x2876e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876dc) {
            ctx->pc = 0x2876F0u;
            goto label_2876f0;
        }
    }
    ctx->pc = 0x2876E4u;
    // 0x2876e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2876e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2876e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2876E8u;
    {
        const bool branch_taken_0x2876e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876E8u;
        // 0x2876ec: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876e8) {
            ctx->pc = 0x287708u;
            goto label_287708;
        }
    }
    ctx->pc = 0x2876F0u;
label_2876f0:
    // 0x2876f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2876f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2876f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2876f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2876f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2876f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2876fc: 0x0  nop
    ctx->pc = 0x2876fcu;
    // NOP
    // 0x287700: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x287700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x287704: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x287704u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_287708:
    // 0x287708: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x287708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x28770c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x287710: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x287710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x287714: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x287714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x287718: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x287718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28771c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28771cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x287720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287724: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x287724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287728: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x287728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28772c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28772cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x287730: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x287730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x287734: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x287734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x287738: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x287738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x28773c: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x28773Cu;
    SET_GPR_U32(ctx, 31, 0x287744u);
    ctx->pc = 0x287740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28773Cu;
    // 0x287740: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x28773Cu, 0x287744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287744u;
label_287744:
    // 0x287744: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x287744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x287748: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x287748u;
    SET_GPR_U32(ctx, 31, 0x287750u);
    ctx->pc = 0x28774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287748u;
    // 0x28774c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x287748u, 0x287750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287750u;
label_287750:
    // 0x287750: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x287750u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x287754: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x287754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x287758: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x287758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28775c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28775cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287760: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x287760u;
    SET_GPR_U32(ctx, 31, 0x287768u);
    ctx->pc = 0x287764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287760u;
    // 0x287764: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x287760u, 0x287768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287768u;
label_287768:
    // 0x287768: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x287768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28776c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28776cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x287770: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x287770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x287774: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x287774u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x287778: 0x9264001c  lbu         $a0, 0x1C($s3)
    ctx->pc = 0x287778u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x28777c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x28777cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x287780: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x287780u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x287784: 0x0  nop
    ctx->pc = 0x287784u;
    // NOP
    // 0x287788: 0x0  nop
    ctx->pc = 0x287788u;
    // NOP
    // 0x28778c: 0x1810  mfhi        $v1
    ctx->pc = 0x28778cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x287790: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x287790u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x287794: 0x92630039  lbu         $v1, 0x39($s3)
    ctx->pc = 0x287794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 57)));
    // 0x287798: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x287798u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28779c: 0x1460feee  bnez        $v1, . + 4 + (-0x112 << 2)
    ctx->pc = 0x28779Cu;
    {
        const bool branch_taken_0x28779c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28779c) {
            ctx->pc = 0x287358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287358;
        }
    }
    ctx->pc = 0x2877A4u;
    // 0x2877a4: 0x0  nop
    ctx->pc = 0x2877a4u;
    // NOP
label_2877a8:
    // 0x2877a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2877a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2877ac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2877acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2877b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2877b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2877b4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2877b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2877b8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2877b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2877bc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2877bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2877c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2877c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2877c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2877c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2877c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2877c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2877cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2877CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2877D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877CCu;
        // 0x2877d0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2877CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2877D4u;
}
