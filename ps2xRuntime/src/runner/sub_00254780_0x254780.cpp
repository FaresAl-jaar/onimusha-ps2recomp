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

// Function: sub_00254780
// Address: 0x254780 - 0x2549b0
void sub_00254780_0x254780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254780_0x254780");
#endif

    switch (ctx->pc) {
        case 0x2547dcu: goto label_2547dc;
        case 0x2548a4u: goto label_2548a4;
        default: break;
    }

    ctx->pc = 0x254780u;

    // 0x254780: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x254780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x254784: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x254784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x254788: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x254788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25478c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x254790: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x254790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x254794: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x254794u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254798: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x254798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25479c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x25479cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2547a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2547a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2547a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2547a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2547ac: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2547acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2547b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2547b4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2547b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2547b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2547bc: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2547bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2547c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2547c4: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2547c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547c8: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x2547c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2547ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2547d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547d4: 0xc049590  jal         func_125640
    ctx->pc = 0x2547D4u;
    SET_GPR_U32(ctx, 31, 0x2547DCu);
    ctx->pc = 0x2547D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547D4u;
    // 0x2547d8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2547D4u, 0x2547DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2547DCu;
label_2547dc:
    // 0x2547dc: 0x3286ffff  andi        $a2, $s4, 0xFFFF
    ctx->pc = 0x2547dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x2547e0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2547e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2547e4: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x2547e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
    // 0x2547e8: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x2547e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x2547ec: 0x2442ff20  addiu       $v0, $v0, -0xE0
    ctx->pc = 0x2547ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967072));
    // 0x2547f0: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2547f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2547f4: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2547f4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2547f8: 0x30de000f  andi        $fp, $a2, 0xF
    ctx->pc = 0x2547f8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x2547fc: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x2547fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x254800: 0x24a50830  addiu       $a1, $a1, 0x830
    ctx->pc = 0x254800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2096));
    // 0x254804: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x254804u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x254808: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x254808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x25480c: 0x24840831  addiu       $a0, $a0, 0x831
    ctx->pc = 0x25480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2097));
    // 0x254810: 0x24630832  addiu       $v1, $v1, 0x832
    ctx->pc = 0x254810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2098));
    // 0x254814: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x254814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x254818: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x254818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x25481c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x25481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x254820: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x254820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x254824: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x254824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254828: 0xa2a20001  sb          $v0, 0x1($s5)
    ctx->pc = 0x254828u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x25482c: 0x92a50000  lbu         $a1, 0x0($s5)
    ctx->pc = 0x25482cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x254830: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x254830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x254834: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x254834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x254838: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x254838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25483c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25483cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254840: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x254840u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x254844: 0x92a40000  lbu         $a0, 0x0($s5)
    ctx->pc = 0x254844u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x254848: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x254848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25484c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25484cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x254850: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x254850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254854: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x254854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254858: 0xa2a20003  sb          $v0, 0x3($s5)
    ctx->pc = 0x254858u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x25485c: 0xa6b30006  sh          $s3, 0x6($s5)
    ctx->pc = 0x25485cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 19));
    // 0x254860: 0xa6b60004  sh          $s6, 0x4($s5)
    ctx->pc = 0x254860u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 22));
    // 0x254864: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x254864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x254868: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x254868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25486c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x25486Cu;
    {
        const bool branch_taken_0x25486c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25486c) {
            ctx->pc = 0x254880u;
            goto label_254880;
        }
    }
    ctx->pc = 0x254874u;
    // 0x254874: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x254874u;
    {
        const bool branch_taken_0x254874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254874u;
        // 0x254878: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254874) {
            ctx->pc = 0x254888u;
            goto label_254888;
        }
    }
    ctx->pc = 0x25487Cu;
    // 0x25487c: 0x0  nop
    ctx->pc = 0x25487cu;
    // NOP
label_254880:
    // 0x254880: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x254880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x254884: 0x0  nop
    ctx->pc = 0x254884u;
    // NOP
label_254888:
    // 0x254888: 0x83a500d0  lb          $a1, 0xD0($sp)
    ctx->pc = 0x254888u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x25488c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x25488cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254890: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x254890u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254894: 0x3209ffff  andi        $t1, $s0, 0xFFFF
    ctx->pc = 0x254894u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x254898: 0x27a600be  addiu       $a2, $sp, 0xBE
    ctx->pc = 0x254898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 190));
    // 0x25489c: 0xc0955c4  jal         func_255710
    ctx->pc = 0x25489Cu;
    SET_GPR_U32(ctx, 31, 0x2548A4u);
    ctx->pc = 0x2548A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25489Cu;
    // 0x2548a0: 0x27a700bc  addiu       $a3, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255710u, 0x25489Cu, 0x2548A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548A4u;
label_2548a4:
    // 0x2548a4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2548a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2548a8: 0x3d32818  mult        $a1, $fp, $s3
    ctx->pc = 0x2548a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2548ac: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x2548acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2548b0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2548b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2548b4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2548b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2548b8: 0x70531018  mult1       $v0, $v0, $s3
    ctx->pc = 0x2548b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2548bc: 0xa6a50018  sh          $a1, 0x18($s5)
    ctx->pc = 0x2548bcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x2548c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2548c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2548c4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2548c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2548c8: 0xa6a4001a  sh          $a0, 0x1A($s5)
    ctx->pc = 0x2548c8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 26), (uint16_t)GPR_U32(ctx, 4));
    // 0x2548cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2548ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548d0: 0x96a40018  lhu         $a0, 0x18($s5)
    ctx->pc = 0x2548d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x2548d4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2548d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2548d8: 0xa6a3001c  sh          $v1, 0x1C($s5)
    ctx->pc = 0x2548d8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x2548dc: 0x96a3001a  lhu         $v1, 0x1A($s5)
    ctx->pc = 0x2548dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 26)));
    // 0x2548e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2548e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2548e4: 0xa6a2001e  sh          $v0, 0x1E($s5)
    ctx->pc = 0x2548e4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x2548e8: 0x97a200be  lhu         $v0, 0xBE($sp)
    ctx->pc = 0x2548e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 190)));
    // 0x2548ec: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x2548ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2548f0: 0xa6b20008  sh          $s2, 0x8($s5)
    ctx->pc = 0x2548f0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 8), (uint16_t)GPR_U32(ctx, 18));
    // 0x2548f4: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x2548f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2548f8: 0xa6b1000a  sh          $s1, 0xA($s5)
    ctx->pc = 0x2548f8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 10), (uint16_t)GPR_U32(ctx, 17));
    // 0x2548fc: 0xa6a3000c  sh          $v1, 0xC($s5)
    ctx->pc = 0x2548fcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x254900: 0xa6b1000e  sh          $s1, 0xE($s5)
    ctx->pc = 0x254900u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 14), (uint16_t)GPR_U32(ctx, 17));
    // 0x254904: 0xa6b20010  sh          $s2, 0x10($s5)
    ctx->pc = 0x254904u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 16), (uint16_t)GPR_U32(ctx, 18));
    // 0x254908: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x254908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25490c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x25490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x254910: 0xa6a20012  sh          $v0, 0x12($s5)
    ctx->pc = 0x254910u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x254914: 0xa6a30014  sh          $v1, 0x14($s5)
    ctx->pc = 0x254914u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x254918: 0xa6a20016  sh          $v0, 0x16($s5)
    ctx->pc = 0x254918u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x25491c: 0x93a200c8  lbu         $v0, 0xC8($sp)
    ctx->pc = 0x25491cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x254920: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x254920u;
    {
        const bool branch_taken_0x254920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254920) {
            ctx->pc = 0x254968u;
            goto label_254968;
        }
    }
    ctx->pc = 0x254928u;
    // 0x254928: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x254928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x25492c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x25492cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x254930: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x254930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x254934: 0x96a20010  lhu         $v0, 0x10($s5)
    ctx->pc = 0x254934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x254938: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x254938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x25493c: 0x0  nop
    ctx->pc = 0x25493cu;
    // NOP
    // 0x254940: 0x0  nop
    ctx->pc = 0x254940u;
    // NOP
    // 0x254944: 0x1810  mfhi        $v1
    ctx->pc = 0x254944u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x254948: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x254948u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x25494c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25494cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254950: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x254950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x254954: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x254954u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254958: 0xa6a20010  sh          $v0, 0x10($s5)
    ctx->pc = 0x254958u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x25495c: 0x96a20014  lhu         $v0, 0x14($s5)
    ctx->pc = 0x25495cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x254960: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x254960u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254964: 0xa6a20014  sh          $v0, 0x14($s5)
    ctx->pc = 0x254964u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 20), (uint16_t)GPR_U32(ctx, 2));
label_254968:
    // 0x254968: 0x97a300be  lhu         $v1, 0xBE($sp)
    ctx->pc = 0x254968u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 190)));
    // 0x25496c: 0x97a200bc  lhu         $v0, 0xBC($sp)
    ctx->pc = 0x25496cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x254970: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x254970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x254974: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x254974u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x254978: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x254978u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25497c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25497cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x254980: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x254980u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254984: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x254984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254988: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x254988u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25498c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x25498cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x254990: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x254990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254994: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x254994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254998: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x254998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25499c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25499cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2549a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2549a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2549a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2549a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2549a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2549A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2549ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549A8u;
        // 0x2549ac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2549A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2549B0u;
}
