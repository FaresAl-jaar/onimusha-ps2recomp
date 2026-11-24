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

// Function: sub_001CD4E0
// Address: 0x1cd4e0 - 0x1cde08
void sub_001CD4E0_0x1cd4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD4E0_0x1cd4e0");
#endif

    switch (ctx->pc) {
        case 0x1cd700u: goto label_1cd700;
        case 0x1cd9a0u: goto label_1cd9a0;
        case 0x1cd9b8u: goto label_1cd9b8;
        case 0x1cd9d0u: goto label_1cd9d0;
        case 0x1cda14u: goto label_1cda14;
        case 0x1cdac0u: goto label_1cdac0;
        case 0x1cdb58u: goto label_1cdb58;
        default: break;
    }

    ctx->pc = 0x1cd4e0u;

    // 0x1cd4e0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1cd4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x1cd4e4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1cd4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1cd4e8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1cd4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1cd4ec: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1cd4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1cd4f0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1cd4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1cd4f4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1cd4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1cd4f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1cd4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1cd4fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1cd4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1cd500: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1cd500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1cd504: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1cd504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1cd508: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cd508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cd50c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cd50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd510: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cd510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cd514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cd514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd518: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CD518u;
    {
        const bool branch_taken_0x1cd518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD518u;
        // 0x1cd51c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd518) {
            ctx->pc = 0x1CD558u;
            goto label_1cd558;
        }
    }
    ctx->pc = 0x1CD520u;
    // 0x1cd520: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x1cd520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x1cd524: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cd524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cd528: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1cd528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cd52c: 0x34c30080  ori         $v1, $a2, 0x80
    ctx->pc = 0x1cd52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1cd530: 0x34cb0040  ori         $t3, $a2, 0x40
    ctx->pc = 0x1cd530u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x1cd534: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1cd534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1cd538: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x1cd538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x1cd53c: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1cd53cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1cd540: 0x34c60006  ori         $a2, $a2, 0x6
    ctx->pc = 0x1cd540u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
    // 0x1cd544: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1cd544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1cd548: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1cd548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1cd54c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CD54Cu;
    {
        const bool branch_taken_0x1cd54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD54Cu;
        // 0x1cd550: 0x465025  or          $t2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd54c) {
            ctx->pc = 0x1CD588u;
            goto label_1cd588;
        }
    }
    ctx->pc = 0x1CD554u;
    // 0x1cd554: 0x0  nop
    ctx->pc = 0x1cd554u;
    // NOP
label_1cd558:
    // 0x1cd558: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1cd558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1cd55c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1cd55cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cd560: 0x3c0b0008  lui         $t3, 0x8
    ctx->pc = 0x1cd560u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)8 << 16));
    // 0x1cd564: 0x3c022402  lui         $v0, 0x2402
    ctx->pc = 0x1cd564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9218 << 16));
    // 0x1cd568: 0x35630080  ori         $v1, $t3, 0x80
    ctx->pc = 0x1cd568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)128);
    // 0x1cd56c: 0x34450800  ori         $a1, $v0, 0x800
    ctx->pc = 0x1cd56cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x1cd570: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1cd570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1cd574: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1cd574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1cd578: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x1cd578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
    // 0x1cd57c: 0x34c60006  ori         $a2, $a2, 0x6
    ctx->pc = 0x1cd57cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
    // 0x1cd580: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1cd580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1cd584: 0x465025  or          $t2, $v0, $a2
    ctx->pc = 0x1cd584u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_1cd588:
    // 0x1cd588: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1cd588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1cd58c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1cd58cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1cd590: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x1cd590u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cd594: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1cd594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1cd598: 0x24067900  addiu       $a2, $zero, 0x7900
    ctx->pc = 0x1cd598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x1cd59c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1cd59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1cd5a0: 0x248d0010  addiu       $t5, $a0, 0x10
    ctx->pc = 0x1cd5a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cd5a4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1cd5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1cd5a8: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1cd5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cd5ac: 0xaf848b28  sw          $a0, -0x74D8($gp)
    ctx->pc = 0x1cd5acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 4));
    // 0x1cd5b0: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x1cd5b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1cd5b4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1cd5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1cd5b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd5bc: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1cd5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1cd5c0: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x1cd5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1cd5c4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1cd5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1cd5c8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1cd5c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1cd5cc: 0xaf8d8b2c  sw          $t5, -0x74D4($gp)
    ctx->pc = 0x1cd5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 13));
    // 0x1cd5d0: 0x24047000  addiu       $a0, $zero, 0x7000
    ctx->pc = 0x1cd5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x1cd5d4: 0xfe2c0000  sd          $t4, 0x0($s1)
    ctx->pc = 0x1cd5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 12));
    // 0x1cd5d8: 0x863025  or          $a2, $a0, $a2
    ctx->pc = 0x1cd5d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1cd5dc: 0xfe290008  sd          $t1, 0x8($s1)
    ctx->pc = 0x1cd5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 9));
    // 0x1cd5e0: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1cd5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1cd5e4: 0xaf918b30  sw          $s1, -0x74D0($gp)
    ctx->pc = 0x1cd5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 17));
    // 0x1cd5e8: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x1cd5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x1cd5ec: 0xfe270018  sd          $a3, 0x18($s1)
    ctx->pc = 0x1cd5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 7));
    // 0x1cd5f0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1cd5f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cd5f4: 0xfe260000  sd          $a2, 0x0($s1)
    ctx->pc = 0x1cd5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 6));
    // 0x1cd5f8: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x1cd5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x1cd5fc: 0x1100005e  beqz        $t0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1CD5FCu;
    {
        const bool branch_taken_0x1cd5fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD5FCu;
        // 0x1cd600: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5fc) {
            ctx->pc = 0x1CD778u;
            goto label_1cd778;
        }
    }
    ctx->pc = 0x1CD604u;
    // 0x1cd604: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x1cd604u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x1cd608: 0x3c043a00  lui         $a0, 0x3A00
    ctx->pc = 0x1cd608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14848 << 16));
    // 0x1cd60c: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1cd60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1cd610: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1cd610u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cd614: 0x348400c0  ori         $a0, $a0, 0xC0
    ctx->pc = 0x1cd614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)192);
    // 0x1cd618: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x1cd618u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x1cd61c: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x1cd61cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x1cd620: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x1cd620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1cd624: 0xfe240010  sd          $a0, 0x10($s1)
    ctx->pc = 0x1cd624u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 4));
    // 0x1cd628: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1cd628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cd62c: 0xfe230018  sd          $v1, 0x18($s1)
    ctx->pc = 0x1cd62cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 3));
    // 0x1cd630: 0x240c0015  addiu       $t4, $zero, 0x15
    ctx->pc = 0x1cd630u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1cd634: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1cd634u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cd638: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x1cd638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1cd63c: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x1cd63cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
    // 0x1cd640: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1cd640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cd644: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x1cd644u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x1cd648: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1cd648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x1cd64c: 0xfe200010  sd          $zero, 0x10($s1)
    ctx->pc = 0x1cd64cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 0));
    // 0x1cd650: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x1cd650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x1cd654: 0xfe2c0018  sd          $t4, 0x18($s1)
    ctx->pc = 0x1cd654u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 12));
    // 0x1cd658: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x1cd658u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x1cd65c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1cd65cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cd660: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x1cd660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cd664: 0xfe290000  sd          $t1, 0x0($s1)
    ctx->pc = 0x1cd664u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 9));
    // 0x1cd668: 0x643025  or          $a2, $v1, $a0
    ctx->pc = 0x1cd668u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1cd66c: 0xfe270008  sd          $a3, 0x8($s1)
    ctx->pc = 0x1cd66cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 7));
    // 0x1cd670: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1cd670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cd674: 0xfe260010  sd          $a2, 0x10($s1)
    ctx->pc = 0x1cd674u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 6));
    // 0x1cd678: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x1cd678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1cd67c: 0xfe250018  sd          $a1, 0x18($s1)
    ctx->pc = 0x1cd67cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 5));
    // 0x1cd680: 0x24040316  addiu       $a0, $zero, 0x316
    ctx->pc = 0x1cd680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x1cd684: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1cd684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cd688: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1cd688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1cd68c: 0xfe240000  sd          $a0, 0x0($s1)
    ctx->pc = 0x1cd68cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 4));
    // 0x1cd690: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1cd690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1cd694: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x1cd694u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x1cd698: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cd698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd69c: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x1cd69cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
    // 0x1cd6a0: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x1cd6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1cd6a4: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x1cd6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x1cd6a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd6ac: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1cd6acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cd6b0: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x1cd6b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd6b4: 0x3c0c7900  lui         $t4, 0x7900
    ctx->pc = 0x1cd6b4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)30976 << 16));
    // 0x1cd6b8: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x1cd6b8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1cd6bc: 0x358c7000  ori         $t4, $t4, 0x7000
    ctx->pc = 0x1cd6bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)28672);
    // 0x1cd6c0: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x1cd6c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x1cd6c4: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x1cd6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x1cd6c8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1cd6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cd6cc: 0x3c0d0e09  lui         $t5, 0xE09
    ctx->pc = 0x1cd6ccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)3593 << 16));
    // 0x1cd6d0: 0x700c9b89  pcpyld      $s3, $zero, $t4
    ctx->pc = 0x1cd6d0u;
    SET_GPR_VEC(ctx, 19, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 12)));
    // 0x1cd6d4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1cd6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1cd6d8: 0x3c0c8700  lui         $t4, 0x8700
    ctx->pc = 0x1cd6d8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)34560 << 16));
    // 0x1cd6dc: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x1cd6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1cd6e0: 0x35af2009  ori         $t7, $t5, 0x2009
    ctx->pc = 0x1cd6e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)8201);
    // 0x1cd6e4: 0x358c9000  ori         $t4, $t4, 0x9000
    ctx->pc = 0x1cd6e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)36864);
    // 0x1cd6e8: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x1cd6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1cd6ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cd6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd6f0: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x1cd6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1cd6f4: 0x700c7389  pcpyld      $t6, $zero, $t4
    ctx->pc = 0x1cd6f4u;
    SET_GPR_VEC(ctx, 14, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 12)));
    // 0x1cd6f8: 0x240d0005  addiu       $t5, $zero, 0x5
    ctx->pc = 0x1cd6f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd6fc: 0x0  nop
    ctx->pc = 0x1cd6fcu;
    // NOP
label_1cd700:
    // 0x1cd700: 0x7603c  dsll32      $t4, $a3, 0
    ctx->pc = 0x1cd700u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1cd704: 0x6a03c  dsll32      $s4, $a2, 0
    ctx->pc = 0x1cd704u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1cd708: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x1cd708u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x1cd70c: 0x14a03e  dsrl32      $s4, $s4, 0
    ctx->pc = 0x1cd70cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x1cd710: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x1cd710u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x1cd714: 0x28c6025  or          $t4, $s4, $t4
    ctx->pc = 0x1cd714u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 20) | GPR_U64(ctx, 12));
    // 0x1cd718: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1cd718u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cd71c: 0x185a025  or          $s4, $t4, $a1
    ctx->pc = 0x1cd71cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 12) | GPR_U64(ctx, 5));
    // 0x1cd720: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1cd720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1cd724: 0xfe340000  sd          $s4, 0x0($s1)
    ctx->pc = 0x1cd724u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 20));
    // 0x1cd728: 0x2d2c0010  sltiu       $t4, $t1, 0x10
    ctx->pc = 0x1cd728u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1cd72c: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x1cd72cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x1cd730: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1cd730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1cd734: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x1cd734u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
    // 0x1cd738: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x1cd738u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x1cd73c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1cd73cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cd740: 0xfe330000  sd          $s3, 0x0($s1)
    ctx->pc = 0x1cd740u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 19));
    // 0x1cd744: 0xfe300008  sd          $s0, 0x8($s1)
    ctx->pc = 0x1cd744u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 16));
    // 0x1cd748: 0xfe2f0010  sd          $t7, 0x10($s1)
    ctx->pc = 0x1cd748u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 15));
    // 0x1cd74c: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x1cd74cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x1cd750: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1cd750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cd754: 0xfe2e0000  sd          $t6, 0x0($s1)
    ctx->pc = 0x1cd754u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 14));
    // 0x1cd758: 0xfe2d0008  sd          $t5, 0x8($s1)
    ctx->pc = 0x1cd758u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 13));
    // 0x1cd75c: 0x1580ffe8  bnez        $t4, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1CD75Cu;
    {
        const bool branch_taken_0x1cd75c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD75Cu;
        // 0x1cd760: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd75c) {
            ctx->pc = 0x1CD700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cd700;
        }
    }
    ctx->pc = 0x1CD764u;
    // 0x1cd764: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x1cd764u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x1cd768: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1cd768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1cd76c: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x1cd76cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x1cd770: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1cd770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1cd774: 0x0  nop
    ctx->pc = 0x1cd774u;
    // NOP
label_1cd778:
    // 0x1cd778: 0xfe2b0000  sd          $t3, 0x0($s1)
    ctx->pc = 0x1cd778u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 11));
    // 0x1cd77c: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1cd77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1cd780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd784: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x1cd784u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x1cd788: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1cd788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cd78c: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x1cd78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x1cd790: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1cd790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1cd794: 0x346400c0  ori         $a0, $v1, 0xC0
    ctx->pc = 0x1cd794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x1cd798: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1cd798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cd79c: 0x863025  or          $a2, $a0, $a2
    ctx->pc = 0x1cd79cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1cd7a0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1cd7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1cd7a4: 0xfe260010  sd          $a2, 0x10($s1)
    ctx->pc = 0x1cd7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 6));
    // 0x1cd7a8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1cd7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1cd7ac: 0xfe250018  sd          $a1, 0x18($s1)
    ctx->pc = 0x1cd7acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 5));
    // 0x1cd7b0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1cd7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cd7b4: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1cd7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cd7b8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1cd7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1cd7bc: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x1cd7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x1cd7c0: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x1cd7c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1cd7c4: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x1cd7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x1cd7c8: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x1cd7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x1cd7cc: 0xfe2a0010  sd          $t2, 0x10($s1)
    ctx->pc = 0x1cd7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 10));
    // 0x1cd7d0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1cd7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cd7d4: 0xfe270018  sd          $a3, 0x18($s1)
    ctx->pc = 0x1cd7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 7));
    // 0x1cd7d8: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x1cd7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x1cd7dc: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1cd7dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cd7e0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1cd7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1cd7e4: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x1cd7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
    // 0x1cd7e8: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1cd7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1cd7ec: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x1cd7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x1cd7f0: 0x2405025c  addiu       $a1, $zero, 0x25C
    ctx->pc = 0x1cd7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x1cd7f4: 0xfe240010  sd          $a0, 0x10($s1)
    ctx->pc = 0x1cd7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 4));
    // 0x1cd7f8: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x1cd7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1cd7fc: 0xfe230018  sd          $v1, 0x18($s1)
    ctx->pc = 0x1cd7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 3));
    // 0x1cd800: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1cd800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cd804: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1cd804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cd808: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1cd808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1cd80c: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x1cd80cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
    // 0x1cd810: 0x833825  or          $a3, $a0, $v1
    ctx->pc = 0x1cd810u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cd814: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x1cd814u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x1cd818: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cd818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd81c: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x1cd81cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1cd820: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1cd820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cd824: 0x2404037c  addiu       $a0, $zero, 0x37C
    ctx->pc = 0x1cd824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1cd828: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1cd828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x1cd82c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1cd82cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1cd830: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x1cd830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x1cd834: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1cd834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1cd838: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1cd838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cd83c: 0xa5602  srl         $t2, $t2, 24
    ctx->pc = 0x1cd83cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x1cd840: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1cd840u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1cd844: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x1cd844u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x1cd848: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1cd848u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1cd84c: 0x354a0064  ori         $t2, $t2, 0x64
    ctx->pc = 0x1cd84cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)100);
    // 0x1cd850: 0xfe2a0010  sd          $t2, 0x10($s1)
    ctx->pc = 0x1cd850u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 10));
    // 0x1cd854: 0xfe290018  sd          $t1, 0x18($s1)
    ctx->pc = 0x1cd854u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 9));
    // 0x1cd858: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1cd858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cd85c: 0xfe270000  sd          $a3, 0x0($s1)
    ctx->pc = 0x1cd85cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 7));
    // 0x1cd860: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x1cd860u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x1cd864: 0x8e4a0008  lw          $t2, 0x8($s2)
    ctx->pc = 0x1cd864u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1cd868: 0xa3202  srl         $a2, $t2, 8
    ctx->pc = 0x1cd868u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x1cd86c: 0x314700ff  andi        $a3, $t2, 0xFF
    ctx->pc = 0x1cd86cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x1cd870: 0x30c900ff  andi        $t1, $a2, 0xFF
    ctx->pc = 0x1cd870u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1cd874: 0xa3402  srl         $a2, $t2, 16
    ctx->pc = 0x1cd874u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1cd878: 0x94a38  dsll        $t1, $t1, 8
    ctx->pc = 0x1cd878u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 8);
    // 0x1cd87c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1cd87cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1cd880: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x1cd880u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x1cd884: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1cd884u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1cd888: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x1cd888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1cd88c: 0xa3602  srl         $a2, $t2, 24
    ctx->pc = 0x1cd88cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x1cd890: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1cd890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1cd894: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1cd894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1cd898: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x1cd898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x1cd89c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1cd89cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1cd8a0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1cd8a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1cd8a4: 0xfe250010  sd          $a1, 0x10($s1)
    ctx->pc = 0x1cd8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 5));
    // 0x1cd8a8: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x1cd8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x1cd8ac: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1cd8acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cd8b0: 0xfe240000  sd          $a0, 0x0($s1)
    ctx->pc = 0x1cd8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 4));
    // 0x1cd8b4: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x1cd8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x1cd8b8: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x1cd8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1cd8bc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1cd8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1cd8c0: 0x32702  srl         $a0, $v1, 28
    ctx->pc = 0x1cd8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x1cd8c4: 0x31e82  srl         $v1, $v1, 26
    ctx->pc = 0x1cd8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x1cd8c8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1cd8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1cd8cc: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CD8CCu;
    {
        const bool branch_taken_0x1cd8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8CCu;
        // 0x1cd8d0: 0x3084000f  andi        $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8cc) {
            ctx->pc = 0x1CD918u;
            goto label_1cd918;
        }
    }
    ctx->pc = 0x1CD8D4u;
    // 0x1cd8d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cd8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cd8d8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CD8D8u;
    {
        const bool branch_taken_0x1cd8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cd8d8) {
            ctx->pc = 0x1CD8F0u;
            goto label_1cd8f0;
        }
    }
    ctx->pc = 0x1CD8E0u;
    // 0x1cd8e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD8E0u;
    {
        const bool branch_taken_0x1cd8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd8e0) {
            ctx->pc = 0x1CD8F0u;
            goto label_1cd8f0;
        }
    }
    ctx->pc = 0x1CD8E8u;
    // 0x1cd8e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1CD8E8u;
    {
        const bool branch_taken_0x1cd8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd8e8) {
            ctx->pc = 0x1CD950u;
            goto label_1cd950;
        }
    }
    ctx->pc = 0x1CD8F0u;
label_1cd8f0:
    // 0x1cd8f0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1cd8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1cd8f4: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1cd8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cd8f8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD8F8u;
    {
        const bool branch_taken_0x1cd8f8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8F8u;
        // 0x1cd8fc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8f8) {
            ctx->pc = 0x1CD908u;
            goto label_1cd908;
        }
    }
    ctx->pc = 0x1CD900u;
    // 0x1cd900: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cd900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1cd904: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cd904u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cd908:
    // 0x1cd908: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cd908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cd90c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1CD90Cu;
    {
        const bool branch_taken_0x1cd90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD90Cu;
        // 0x1cd910: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd90c) {
            ctx->pc = 0x1CD950u;
            goto label_1cd950;
        }
    }
    ctx->pc = 0x1CD914u;
    // 0x1cd914: 0x0  nop
    ctx->pc = 0x1cd914u;
    // NOP
label_1cd918:
    // 0x1cd918: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1cd918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1cd91c: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1cd91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cd920: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD920u;
    {
        const bool branch_taken_0x1cd920 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD920u;
        // 0x1cd924: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd920) {
            ctx->pc = 0x1CD930u;
            goto label_1cd930;
        }
    }
    ctx->pc = 0x1CD928u;
    // 0x1cd928: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cd928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1cd92c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cd92cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cd930:
    // 0x1cd930: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cd930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cd934: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1cd934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cd938: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cd938u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1cd93c: 0x0  nop
    ctx->pc = 0x1cd93cu;
    // NOP
    // 0x1cd940: 0x0  nop
    ctx->pc = 0x1cd940u;
    // NOP
    // 0x1cd944: 0x1012  mflo        $v0
    ctx->pc = 0x1cd944u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1cd948: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x1cd948u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1cd94c: 0x0  nop
    ctx->pc = 0x1cd94cu;
    // NOP
label_1cd950:
    // 0x1cd950: 0xa4a80000  sh          $t0, 0x0($a1)
    ctx->pc = 0x1cd950u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x1cd954: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1cd954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cd958: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd95c: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1cd95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1cd960: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1cd960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1cd964: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x1cd964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1cd968: 0x461004  sllv        $v0, $a2, $v0
    ctx->pc = 0x1cd968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x1cd96c: 0xa68004  sllv        $s0, $a2, $a1
    ctx->pc = 0x1cd96cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x1cd970: 0x32903  sra         $a1, $v1, 4
    ctx->pc = 0x1cd970u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1cd974: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x1cd974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x1cd978: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1cd978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1cd97c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1cd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1cd980: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cd980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cd984: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1cd984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1cd988: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x1cd988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x1cd98c: 0x41103  sra         $v0, $a0, 4
    ctx->pc = 0x1cd98cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1cd990: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x1cd990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1cd994: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1cd994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1cd998: 0xc0734e8  jal         func_1CD3A0
    ctx->pc = 0x1CD998u;
    SET_GPR_U32(ctx, 31, 0x1CD9A0u);
    ctx->pc = 0x1CD99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD998u;
    // 0x1cd99c: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD3A0u, 0x1CD998u, 0x1CD9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9A0u;
label_1cd9a0:
    // 0x1cd9a0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1cd9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cd9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9a8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1cd9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1cd9ac: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x1cd9acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1cd9b0: 0xc0734e8  jal         func_1CD3A0
    ctx->pc = 0x1CD9B0u;
    SET_GPR_U32(ctx, 31, 0x1CD9B8u);
    ctx->pc = 0x1CD9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9B0u;
    // 0x1cd9b4: 0xafa20130  sw          $v0, 0x130($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD3A0u, 0x1CD9B0u, 0x1CD9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9B8u;
label_1cd9b8:
    // 0x1cd9b8: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1cd9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cd9bc: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1cd9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1cd9c0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1cd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1cd9c4: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x1cd9c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1cd9c8: 0xc0734e8  jal         func_1CD3A0
    ctx->pc = 0x1CD9C8u;
    SET_GPR_U32(ctx, 31, 0x1CD9D0u);
    ctx->pc = 0x1CD9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD9C8u;
    // 0x1cd9cc: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD3A0u, 0x1CD9C8u, 0x1CD9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD9D0u;
label_1cd9d0:
    // 0x1cd9d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cd9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cd9d4: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1cd9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1cd9d8: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x1cd9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1cd9dc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1cd9dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd9e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1cd9e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd9e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd9e8: 0x0  nop
    ctx->pc = 0x1cd9e8u;
    // NOP
    // 0x1cd9ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cd9f0: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x1cd9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1cd9f4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1cd9f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd9f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd9f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd9fc: 0x0  nop
    ctx->pc = 0x1cd9fcu;
    // NOP
    // 0x1cda00: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1cda00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1cda04: 0x0  nop
    ctx->pc = 0x1cda04u;
    // NOP
    // 0x1cda08: 0x0  nop
    ctx->pc = 0x1cda08u;
    // NOP
    // 0x1cda0c: 0xc0734e8  jal         func_1CD3A0
    ctx->pc = 0x1CDA0Cu;
    SET_GPR_U32(ctx, 31, 0x1CDA14u);
    ctx->pc = 0x1CD3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD3A0u, 0x1CDA0Cu, 0x1CDA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA14u;
label_1cda14:
    // 0x1cda14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cda14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cda18: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1cda18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1cda1c: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x1cda1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x1cda20: 0x10a823  negu        $s5, $s0
    ctx->pc = 0x1cda20u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x1cda24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cda24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cda28: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1cda28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1cda2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cda2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cda30: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1cda30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cda34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cda34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cda38: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x1cda38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x1cda3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cda3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cda40: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x1cda40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1cda44: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x1cda44u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x1cda48: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1cda48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1cda4c: 0xfe230018  sd          $v1, 0x18($s1)
    ctx->pc = 0x1cda4cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 3));
    // 0x1cda50: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x1cda50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
    // 0x1cda54: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1cda54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cda58: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1cda58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cda5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cda5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cda60: 0x0  nop
    ctx->pc = 0x1cda60u;
    // NOP
    // 0x1cda64: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1cda64u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1cda68: 0x0  nop
    ctx->pc = 0x1cda68u;
    // NOP
    // 0x1cda6c: 0x0  nop
    ctx->pc = 0x1cda6cu;
    // NOP
    // 0x1cda70: 0x2aa100e1  slti        $at, $s5, 0xE1
    ctx->pc = 0x1cda70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x1cda74: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x1CDA74u;
    {
        const bool branch_taken_0x1cda74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cda74) {
            ctx->pc = 0x1CDCD0u;
            goto label_1cdcd0;
        }
    }
    ctx->pc = 0x1CDA7Cu;
    // 0x1cda7c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1cda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1cda80: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x1cda80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1cda84: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1cda84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1cda88: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1cda88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1cda8c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1cda8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1cda90: 0x24420900  addiu       $v0, $v0, 0x900
    ctx->pc = 0x1cda90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2304));
    // 0x1cda94: 0x26900  sll         $t5, $v0, 4
    ctx->pc = 0x1cda94u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cda98: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1cda98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1cda9c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1cda9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cdaa0: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x1cdaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x1cdaa4: 0x26100  sll         $t4, $v0, 4
    ctx->pc = 0x1cdaa4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cdaa8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1cdaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1cdaac: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1cdaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1cdab0: 0x2442f010  addiu       $v0, $v0, -0xFF0
    ctx->pc = 0x1cdab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963216));
    // 0x1cdab4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1cdab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1cdab8: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x1cdab8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1cdabc: 0x0  nop
    ctx->pc = 0x1cdabcu;
    // NOP
label_1cdac0:
    // 0x1cdac0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1cdac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1cdac4: 0x8faf00f0  lw          $t7, 0xF0($sp)
    ctx->pc = 0x1cdac4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1cdac8: 0x2a29821  addu        $s3, $s5, $v0
    ctx->pc = 0x1cdac8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1cdacc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1cdaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1cdad0: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x1cdad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1cdad4: 0x3046001f  andi        $a2, $v0, 0x1F
    ctx->pc = 0x1cdad4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1cdad8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1cdad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cdadc: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x1cdadcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1cdae0: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1cdae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cdae4: 0x45c821  addu        $t9, $v0, $a1
    ctx->pc = 0x1cdae4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cdae8: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x1cdae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1cdaec: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x1cdaecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1cdaf0: 0x24c40002  addiu       $a0, $a2, 0x2
    ctx->pc = 0x1cdaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1cdaf4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1cdaf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cdaf8: 0x45c021  addu        $t8, $v0, $a1
    ctx->pc = 0x1cdaf8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cdafc: 0x3082001f  andi        $v0, $a0, 0x1F
    ctx->pc = 0x1cdafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1cdb00: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x1cdb00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1cdb04: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1cdb04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cdb08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cdb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cdb0c: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x1cdb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x1cdb10: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1cdb10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb14: 0x28410201  slti        $at, $v0, 0x201
    ctx->pc = 0x1cdb14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1cdb18: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x1CDB18u;
    {
        const bool branch_taken_0x1cdb18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB18u;
        // 0x1cdb1c: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb18) {
            ctx->pc = 0x1CDC90u;
            goto label_1cdc90;
        }
    }
    ctx->pc = 0x1CDB20u;
    // 0x1cdb20: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x1cdb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1cdb24: 0x26640790  addiu       $a0, $s3, 0x790
    ctx->pc = 0x1cdb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1936));
    // 0x1cdb28: 0x244b0008  addiu       $t3, $v0, 0x8
    ctx->pc = 0x1cdb28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1cdb2c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1cdb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1cdb30: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1cdb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1cdb34: 0xffa200b0  sd          $v0, 0xB0($sp)
    ctx->pc = 0x1cdb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 2));
    // 0x1cdb38: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1cdb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1cdb3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1cdb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cdb40: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x1cdb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1cdb44: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1cdb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1cdb48: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1cdb48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1cdb4c: 0xffa200d0  sd          $v0, 0xD0($sp)
    ctx->pc = 0x1cdb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 2));
    // 0x1cdb50: 0x24820009  addiu       $v0, $a0, 0x9
    ctx->pc = 0x1cdb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 9));
    // 0x1cdb54: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1cdb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1cdb58:
    // 0x1cdb58: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1cdb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1cdb5c: 0x1e23021  addu        $a2, $t7, $v0
    ctx->pc = 0x1cdb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1cdb60: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1cdb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1cdb64: 0x1c22023  subu        $a0, $t6, $v0
    ctx->pc = 0x1cdb64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1cdb68: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1cdb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cdb6c: 0x3085001f  andi        $a1, $a0, 0x1F
    ctx->pc = 0x1cdb6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1cdb70: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x1cdb70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1cdb74: 0x3252021  addu        $a0, $t9, $a1
    ctx->pc = 0x1cdb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 5)));
    // 0x1cdb78: 0x24c20700  addiu       $v0, $a2, 0x700
    ctx->pc = 0x1cdb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1792));
    // 0x1cdb7c: 0x90890000  lbu         $t1, 0x0($a0)
    ctx->pc = 0x1cdb7cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cdb80: 0x3053021  addu        $a2, $t8, $a1
    ctx->pc = 0x1cdb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x1cdb84: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1cdb84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1cdb88: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x1cdb88u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cdb8c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1cdb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cdb90: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1cdb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cdb94: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x1cdb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1cdb98: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1cdb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1cdb9c: 0x109b023  subu        $s6, $t0, $t1
    ctx->pc = 0x1cdb9cu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1cdba0: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1cdba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1cdba4: 0x3022821  addu        $a1, $t8, $v0
    ctx->pc = 0x1cdba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x1cdba8: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1cdba8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cdbac: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x1cdbacu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cdbb0: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x1cdbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1cdbb4: 0x3222821  addu        $a1, $t9, $v0
    ctx->pc = 0x1cdbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
    // 0x1cdbb8: 0xdfa200b0  ld          $v0, 0xB0($sp)
    ctx->pc = 0x1cdbb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdbbc: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1cdbbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cdbc0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1cdbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1cdbc4: 0x43f025  or          $fp, $v0, $v1
    ctx->pc = 0x1cdbc4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cdbc8: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x1cdbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1cdbcc: 0xdfa200d0  ld          $v0, 0xD0($sp)
    ctx->pc = 0x1cdbccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cdbd0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1cdbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1cdbd4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1cdbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cdbd8: 0x43b825  or          $s7, $v0, $v1
    ctx->pc = 0x1cdbd8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cdbdc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1cdbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1cdbe0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1cdbe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1cdbe4: 0x1e27821  addu        $t7, $t7, $v0
    ctx->pc = 0x1cdbe4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1cdbe8: 0xe81023  subu        $v0, $a3, $t0
    ctx->pc = 0x1cdbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1cdbec: 0x29e10201  slti        $at, $t7, 0x201
    ctx->pc = 0x1cdbecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1cdbf0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1cdbf0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1cdbf4: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1cdbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1cdbf8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cdbf8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdbfc: 0x0  nop
    ctx->pc = 0x1cdbfcu;
    // NOP
    // 0x1cdc00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cdc00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cdc04: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cdc04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cdc08: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1cdc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1cdc0c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1cdc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1cdc10: 0x70962018  mult1       $a0, $a0, $s6
    ctx->pc = 0x1cdc10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1cdc14: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1cdc14u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1cdc18: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1cdc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1cdc1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cdc1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdc20: 0x0  nop
    ctx->pc = 0x1cdc20u;
    // NOP
    // 0x1cdc24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cdc24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cdc28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cdc28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cdc2c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1cdc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1cdc30: 0xfe3e0008  sd          $fp, 0x8($s1)
    ctx->pc = 0x1cdc30u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 30));
    // 0x1cdc34: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1cdc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cdc38: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1cdc38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1cdc3c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cdc3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1cdc40: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1cdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1cdc44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdc44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdc48: 0x0  nop
    ctx->pc = 0x1cdc48u;
    // NOP
    // 0x1cdc4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cdc4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cdc50: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1cdc50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1cdc54: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1cdc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x1cdc58: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1cdc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1cdc5c: 0x70461018  mult1       $v0, $v0, $a2
    ctx->pc = 0x1cdc5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1cdc60: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x1cdc60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1cdc64: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1cdc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cdc68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cdc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cdc6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cdc6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdc70: 0x0  nop
    ctx->pc = 0x1cdc70u;
    // NOP
    // 0x1cdc74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cdc74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cdc78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cdc78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1cdc7c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1cdc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1cdc80: 0xfe370018  sd          $s7, 0x18($s1)
    ctx->pc = 0x1cdc80u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 23));
    // 0x1cdc84: 0x1420ffb4  bnez        $at, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1CDC84u;
    {
        const bool branch_taken_0x1cdc84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC84u;
        // 0x1cdc88: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc84) {
            ctx->pc = 0x1CDB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdb58;
        }
    }
    ctx->pc = 0x1CDC8Cu;
    // 0x1cdc8c: 0x0  nop
    ctx->pc = 0x1cdc8cu;
    // NOP
label_1cdc90:
    // 0x1cdc90: 0x26620790  addiu       $v0, $s3, 0x790
    ctx->pc = 0x1cdc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1936));
    // 0x1cdc94: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cdc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cdc98: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x1cdc98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1cdc9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1cdc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cdca0: 0x2aa100e1  slti        $at, $s5, 0xE1
    ctx->pc = 0x1cdca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x1cdca4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1cdca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1cdca8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1cdca8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1cdcac: 0x1a22025  or          $a0, $t5, $v0
    ctx->pc = 0x1cdcacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) | GPR_U64(ctx, 2));
    // 0x1cdcb0: 0x1821025  or          $v0, $t4, $v0
    ctx->pc = 0x1cdcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x1cdcb4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1cdcb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1cdcb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cdcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cdcbc: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x1cdcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x1cdcc0: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x1cdcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x1cdcc4: 0x1420ff7e  bnez        $at, . + 4 + (-0x82 << 2)
    ctx->pc = 0x1CDCC4u;
    {
        const bool branch_taken_0x1cdcc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCC4u;
        // 0x1cdcc8: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcc4) {
            ctx->pc = 0x1CDAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdac0;
        }
    }
    ctx->pc = 0x1CDCCCu;
    // 0x1cdccc: 0x0  nop
    ctx->pc = 0x1cdcccu;
    // NOP
label_1cdcd0:
    // 0x1cdcd0: 0x8f858b30  lw          $a1, -0x74D0($gp)
    ctx->pc = 0x1cdcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1cdcd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdcd8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1cdcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1cdcdc: 0x32702  srl         $a0, $v1, 28
    ctx->pc = 0x1cdcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x1cdce0: 0x31e82  srl         $v1, $v1, 26
    ctx->pc = 0x1cdce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 26));
    // 0x1cdce4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1cdce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1cdce8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CDCE8u;
    {
        const bool branch_taken_0x1cdce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CDCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCE8u;
        // 0x1cdcec: 0x3084000f  andi        $a0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdce8) {
            ctx->pc = 0x1CDD30u;
            goto label_1cdd30;
        }
    }
    ctx->pc = 0x1CDCF0u;
    // 0x1cdcf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cdcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdcf4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDCF4u;
    {
        const bool branch_taken_0x1cdcf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cdcf4) {
            ctx->pc = 0x1CDD10u;
            goto label_1cdd10;
        }
    }
    ctx->pc = 0x1CDCFCu;
    // 0x1cdcfc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDCFCu;
    {
        const bool branch_taken_0x1cdcfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdcfc) {
            ctx->pc = 0x1CDD10u;
            goto label_1cdd10;
        }
    }
    ctx->pc = 0x1CDD04u;
    // 0x1cdd04: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1CDD04u;
    {
        const bool branch_taken_0x1cdd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd04) {
            ctx->pc = 0x1CDD60u;
            goto label_1cdd60;
        }
    }
    ctx->pc = 0x1CDD0Cu;
    // 0x1cdd0c: 0x0  nop
    ctx->pc = 0x1cdd0cu;
    // NOP
label_1cdd10:
    // 0x1cdd10: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x1cdd10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1cdd14: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDD14u;
    {
        const bool branch_taken_0x1cdd14 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD14u;
        // 0x1cdd18: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd14) {
            ctx->pc = 0x1CDD24u;
            goto label_1cdd24;
        }
    }
    ctx->pc = 0x1CDD1Cu;
    // 0x1cdd1c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cdd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1cdd20: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cdd20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cdd24:
    // 0x1cdd24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cdd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cdd28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CDD28u;
    {
        const bool branch_taken_0x1cdd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD28u;
        // 0x1cdd2c: 0xa7a20100  sh          $v0, 0x100($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd28) {
            ctx->pc = 0x1CDD60u;
            goto label_1cdd60;
        }
    }
    ctx->pc = 0x1CDD30u;
label_1cdd30:
    // 0x1cdd30: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x1cdd30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1cdd34: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDD34u;
    {
        const bool branch_taken_0x1cdd34 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CDD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD34u;
        // 0x1cdd38: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd34) {
            ctx->pc = 0x1CDD44u;
            goto label_1cdd44;
        }
    }
    ctx->pc = 0x1CDD3Cu;
    // 0x1cdd3c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cdd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1cdd40: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cdd40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cdd44:
    // 0x1cdd44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cdd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cdd48: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1cdd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cdd4c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cdd4cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1cdd50: 0x0  nop
    ctx->pc = 0x1cdd50u;
    // NOP
    // 0x1cdd54: 0x0  nop
    ctx->pc = 0x1cdd54u;
    // NOP
    // 0x1cdd58: 0x1012  mflo        $v0
    ctx->pc = 0x1cdd58u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1cdd5c: 0xa7a20100  sh          $v0, 0x100($sp)
    ctx->pc = 0x1cdd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 2));
label_1cdd60:
    // 0x1cdd60: 0x97a20100  lhu         $v0, 0x100($sp)
    ctx->pc = 0x1cdd60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1cdd64: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x1cdd64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd68: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1cdd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1cdd6c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1cdd6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cdd70: 0x8f848b2c  lw          $a0, -0x74D4($gp)
    ctx->pc = 0x1cdd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1cdd74: 0x2241823  subu        $v1, $s1, $a0
    ctx->pc = 0x1cdd74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1cdd78: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDD78u;
    {
        const bool branch_taken_0x1cdd78 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CDD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD78u;
        // 0x1cdd7c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd78) {
            ctx->pc = 0x1CDD88u;
            goto label_1cdd88;
        }
    }
    ctx->pc = 0x1CDD80u;
    // 0x1cdd80: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cdd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1cdd84: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cdd84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cdd88:
    // 0x1cdd88: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1cdd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cdd8c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1cdd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1cdd90: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1cdd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1cdd94: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1cdd94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1cdd98: 0x8f848b28  lw          $a0, -0x74D8($gp)
    ctx->pc = 0x1cdd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x1cdd9c: 0x2241823  subu        $v1, $s1, $a0
    ctx->pc = 0x1cdd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1cdda0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDDA0u;
    {
        const bool branch_taken_0x1cdda0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1CDDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDA0u;
        // 0x1cdda4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdda0) {
            ctx->pc = 0x1CDDB0u;
            goto label_1cddb0;
        }
    }
    ctx->pc = 0x1CDDA8u;
    // 0x1cdda8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cdda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1cddac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cddacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cddb0:
    // 0x1cddb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cddb4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1cddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1cddb8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1cddb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1cddbc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1cddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1cddc0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1cddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1cddc4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1cddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1cddc8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1cddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1cddcc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1cddccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1cddd0: 0xaf918b28  sw          $s1, -0x74D8($gp)
    ctx->pc = 0x1cddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 17));
    // 0x1cddd4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1cddd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cddd8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1cddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cdddc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1cdddcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cdde0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1cdde0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cdde4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1cdde4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cdde8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1cdde8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cddec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1cddecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cddf0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1cddf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cddf4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1cddf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cddf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cddf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cddfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cddfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cde00: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE00u;
        // 0x1cde04: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDE08u;
}
