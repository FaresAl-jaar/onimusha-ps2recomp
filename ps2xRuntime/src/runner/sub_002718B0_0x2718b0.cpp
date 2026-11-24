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

// Function: sub_002718B0
// Address: 0x2718b0 - 0x271a90
void sub_002718B0_0x2718b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002718B0_0x2718b0");
#endif

    switch (ctx->pc) {
        case 0x271900u: goto label_271900;
        case 0x271a3cu: goto label_271a3c;
        case 0x271a5cu: goto label_271a5c;
        default: break;
    }

    ctx->pc = 0x2718b0u;

    // 0x2718b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2718b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2718b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2718b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2718b8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2718b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2718bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2718bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2718c0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2718c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2718c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2718c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2718c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2718ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2718d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2718d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2718d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2718d8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2718d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2718dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2718dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2718e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2718e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2718e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2718e8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2718e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718ec: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2718ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718f0: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x2718f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718f4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x2718f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x2718f8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x2718F8u;
    SET_GPR_U32(ctx, 31, 0x271900u);
    ctx->pc = 0x2718FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2718F8u;
    // 0x2718fc: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x2718F8u, 0x271900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271900u;
label_271900:
    // 0x271900: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271900u;
    {
        const bool branch_taken_0x271900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271900) {
            ctx->pc = 0x271910u;
            goto label_271910;
        }
    }
    ctx->pc = 0x271908u;
    // 0x271908: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x271908u;
    {
        const bool branch_taken_0x271908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271908u;
        // 0x27190c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271908) {
            ctx->pc = 0x271A68u;
            goto label_271a68;
        }
    }
    ctx->pc = 0x271910u;
label_271910:
    // 0x271910: 0x86a90004  lh          $t1, 0x4($s5)
    ctx->pc = 0x271910u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x271914: 0x86a80008  lh          $t0, 0x8($s5)
    ctx->pc = 0x271914u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x271918: 0x3c032028  lui         $v1, 0x2028
    ctx->pc = 0x271918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8232 << 16));
    // 0x27191c: 0x86a60006  lh          $a2, 0x6($s5)
    ctx->pc = 0x27191cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x271920: 0x34640156  ori         $a0, $v1, 0x156
    ctx->pc = 0x271920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)342);
    // 0x271924: 0x86a7000a  lh          $a3, 0xA($s5)
    ctx->pc = 0x271924u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x271928: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x271928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x27192c: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x27192cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x271930: 0x84900  sll         $t1, $t0, 4
    ctx->pc = 0x271930u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x271934: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x271934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x271938: 0x64100  sll         $t0, $a2, 4
    ctx->pc = 0x271938u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x27193c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x27193cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x271940: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x271940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x271944: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x271944u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x271948: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x271948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x27194c: 0x692821  addu        $a1, $v1, $t1
    ctx->pc = 0x27194cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x271950: 0x25040008  addiu       $a0, $t0, 0x8
    ctx->pc = 0x271950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x271954: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x271954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x271958: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x271958u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x27195c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x27195cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x271960: 0x86a80008  lh          $t0, 0x8($s5)
    ctx->pc = 0x271960u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x271964: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x271964u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x271968: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x271968u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x27196c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x27196cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x271970: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x271970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x271974: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x271974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x271978: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x271978u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x27197c: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27197Cu;
    {
        const bool branch_taken_0x27197c = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x271980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27197Cu;
        // 0x271980: 0x83843  sra         $a3, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27197c) {
            ctx->pc = 0x27198Cu;
            goto label_27198c;
        }
    }
    ctx->pc = 0x271984u;
    // 0x271984: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x271984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x271988: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x271988u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
label_27198c:
    // 0x27198c: 0x2674023  subu        $t0, $s3, $a3
    ctx->pc = 0x27198cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x271990: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x271990u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x271994: 0x25080700  addiu       $t0, $t0, 0x700
    ctx->pc = 0x271994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1792));
    // 0x271998: 0x26470f20  addiu       $a3, $s2, 0xF20
    ctx->pc = 0x271998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 3872));
    // 0x27199c: 0x84900  sll         $t1, $t0, 4
    ctx->pc = 0x27199cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2719a0: 0x73cc0  sll         $a3, $a3, 19
    ctx->pc = 0x2719a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 19));
    // 0x2719a4: 0x3129ffff  andi        $t1, $t1, 0xFFFF
    ctx->pc = 0x2719a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2719a8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2719a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2719ac: 0xe94825  or          $t1, $a3, $t1
    ctx->pc = 0x2719acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x2719b0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2719b0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2719b4: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x2719b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2719b8: 0xac490020  sw          $t1, 0x20($v0)
    ctx->pc = 0x2719b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 9));
    // 0x2719bc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2719bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2719c0: 0xac510024  sw          $s1, 0x24($v0)
    ctx->pc = 0x2719c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    // 0x2719c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2719c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2719c8: 0x164500  sll         $t0, $s6, 20
    ctx->pc = 0x2719c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 22), 20));
    // 0x2719cc: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x2719ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2719d0: 0xc42825  or          $a1, $a2, $a0
    ctx->pc = 0x2719d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2719d4: 0x101e02  srl         $v1, $s0, 24
    ctx->pc = 0x2719d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x2719d8: 0x86a60008  lh          $a2, 0x8($s5)
    ctx->pc = 0x2719d8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2719dc: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2719dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2719e0: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x2719e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x2719e4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2719e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2719e8: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x2719e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x2719ec: 0xac460028  sw          $a2, 0x28($v0)
    ctx->pc = 0x2719ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 6));
    // 0x2719f0: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x2719f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x2719f4: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x2719f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x2719f8: 0x8f85811c  lw          $a1, -0x7EE4($gp)
    ctx->pc = 0x2719f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
    // 0x2719fc: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x2719fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x271a00: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x271a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x271a04: 0xa4450014  sh          $a1, 0x14($v0)
    ctx->pc = 0x271a04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x271a08: 0xa4540016  sh          $s4, 0x16($v0)
    ctx->pc = 0x271a08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 20));
    // 0x271a0c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x271a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x271a10: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x271a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x271a14: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x271a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x271a18: 0xa043000f  sb          $v1, 0xF($v0)
    ctx->pc = 0x271a18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x271a1c: 0x8f838898  lw          $v1, -0x7768($gp)
    ctx->pc = 0x271a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936728)));
    // 0x271a20: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x271A20u;
    {
        const bool branch_taken_0x271a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271a20) {
            ctx->pc = 0x271A48u;
            goto label_271a48;
        }
    }
    ctx->pc = 0x271A28u;
    // 0x271a28: 0x8f868118  lw          $a2, -0x7EE8($gp)
    ctx->pc = 0x271a28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x271a2c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x271a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x271a30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x271a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a34: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x271A34u;
    SET_GPR_U32(ctx, 31, 0x271A3Cu);
    ctx->pc = 0x271A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271A34u;
    // 0x271a38: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x271A34u, 0x271A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A3Cu;
label_271a3c:
    // 0x271a3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x271A3Cu;
    {
        const bool branch_taken_0x271a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271a3c) {
            ctx->pc = 0x271A60u;
            goto label_271a60;
        }
    }
    ctx->pc = 0x271A44u;
    // 0x271a44: 0x0  nop
    ctx->pc = 0x271a44u;
    // NOP
label_271a48:
    // 0x271a48: 0x8f868118  lw          $a2, -0x7EE8($gp)
    ctx->pc = 0x271a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x271a4c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x271a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x271a50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x271a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a54: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x271A54u;
    SET_GPR_U32(ctx, 31, 0x271A5Cu);
    ctx->pc = 0x271A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271A54u;
    // 0x271a58: 0x2484cc40  addiu       $a0, $a0, -0x33C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x271A54u, 0x271A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A5Cu;
label_271a5c:
    // 0x271a5c: 0x0  nop
    ctx->pc = 0x271a5cu;
    // NOP
label_271a60:
    // 0x271a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271a64: 0x0  nop
    ctx->pc = 0x271a64u;
    // NOP
label_271a68:
    // 0x271a68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x271a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x271a6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x271a6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x271a70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x271a70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x271a74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x271a74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x271a78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x271a78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271a7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x271a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271a80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271a88: 0x3e00008  jr          $ra
    ctx->pc = 0x271A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271A88u;
        // 0x271a8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271A90u;
}
