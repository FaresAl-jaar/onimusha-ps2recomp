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

// Function: sub_0017E320
// Address: 0x17e320 - 0x17e4e4
void sub_0017E320_0x17e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E320_0x17e320");
#endif

    switch (ctx->pc) {
        case 0x17e378u: goto label_17e378;
        case 0x17e4b8u: goto label_17e4b8;
        default: break;
    }

    ctx->pc = 0x17e320u;

    // 0x17e320: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17e324: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17e324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17e328: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x17e32c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17e32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x17e330: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x17e330u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e334: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17e334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17e338: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x17e338u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e33c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17e33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17e340: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17e340u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e344: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17e344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17e348: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x17e348u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e34c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17e34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17e350: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x17e350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x17e354: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17e358: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17e358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e35c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e360: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17e360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e364: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x17e364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e368: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x17e368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e36c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x17e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x17e370: 0xc05e360  jal         func_178D80
    ctx->pc = 0x17E370u;
    SET_GPR_U32(ctx, 31, 0x17E378u);
    ctx->pc = 0x17E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E370u;
    // 0x17e374: 0x24050090  addiu       $a1, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x17E370u, 0x17E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E378u;
label_17e378:
    // 0x17e378: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17e378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e37c: 0x10a0004e  beqz        $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x17E37Cu;
    {
        const bool branch_taken_0x17e37c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E37Cu;
        // 0x17e380: 0x3284ffff  andi        $a0, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e37c) {
            ctx->pc = 0x17E4B8u;
            goto label_17e4b8;
        }
    }
    ctx->pc = 0x17E384u;
    // 0x17e384: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x17e384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17e388: 0x4503c  dsll32      $t2, $a0, 0
    ctx->pc = 0x17e388u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17e38c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x17e38cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x17e390: 0x16243c  dsll32      $a0, $s6, 16
    ctx->pc = 0x17e390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 16));
    // 0x17e394: 0x11443c  dsll32      $t0, $s1, 16
    ctx->pc = 0x17e394u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 16));
    // 0x17e398: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17e398u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17e39c: 0x63c38  dsll        $a3, $a2, 16
    ctx->pc = 0x17e39cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 16);
    // 0x17e3a0: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x17e3a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x17e3a4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x17e3a4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x17e3a8: 0x17243c  dsll32      $a0, $s7, 16
    ctx->pc = 0x17e3a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 16));
    // 0x17e3ac: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x17e3acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x17e3b0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17e3b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17e3b4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x17e3b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x17e3b8: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x17e3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x17e3bc: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x17e3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x17e3c0: 0x864825  or          $t1, $a0, $a2
    ctx->pc = 0x17e3c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x17e3c4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x17e3c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x17e3c8: 0x34048004  ori         $a0, $zero, 0x8004
    ctx->pc = 0x17e3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x17e3cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17e3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e3d0: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x17e3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x17e3d4: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x17e3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x17e3d8: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x17e3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x17e3dc: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x17e3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x17e3e0: 0x32abffff  andi        $t3, $s5, 0xFFFF
    ctx->pc = 0x17e3e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x17e3e4: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x17e3e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x17e3e8: 0x1643825  or          $a3, $t3, $a0
    ctx->pc = 0x17e3e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
    // 0x17e3ec: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x17e3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x17e3f0: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x17e3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x17e3f4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x17e3f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17e3f8: 0x21e38  dsll        $v1, $v0, 24
    ctx->pc = 0x17e3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 24);
    // 0x17e3fc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x17e3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x17e400: 0x673825  or          $a3, $v1, $a3
    ctx->pc = 0x17e400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x17e404: 0x24080051  addiu       $t0, $zero, 0x51
    ctx->pc = 0x17e404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x17e408: 0x1473825  or          $a3, $t2, $a3
    ctx->pc = 0x17e408u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x17e40c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x17e40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17e410: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x17e410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x17e414: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x17e414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x17e418: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17e418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x17e41c: 0x24070052  addiu       $a3, $zero, 0x52
    ctx->pc = 0x17e41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x17e420: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x17e420u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x17e424: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x17e424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e428: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x17e428u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x17e42c: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x17e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x17e430: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x17e430u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
    // 0x17e434: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x17e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x17e438: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x17e438u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x17e43c: 0x87a80098  lh          $t0, 0x98($sp)
    ctx->pc = 0x17e43cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x17e440: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x17e440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x17e444: 0x87a90090  lh          $t1, 0x90($sp)
    ctx->pc = 0x17e444u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17e448: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x17e448u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x17e44c: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x17e44cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x17e450: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x17e450u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x17e454: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x17e454u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x17e458: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x17e458u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x17e45c: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x17e45cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x17e460: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x17e460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x17e464: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x17e464u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17e468: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E468u;
    {
        const bool branch_taken_0x17e468 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x17E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E468u;
        // 0x17e46c: 0x23903  sra         $a3, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e468) {
            ctx->pc = 0x17E478u;
            goto label_17e478;
        }
    }
    ctx->pc = 0x17E470u;
    // 0x17e470: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x17e470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x17e474: 0x23903  sra         $a3, $v0, 4
    ctx->pc = 0x17e474u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 4));
label_17e478:
    // 0x17e478: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x17e478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x17e47c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x17e480: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x17e480u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x17e484: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x17e484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17e488: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x17e488u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x17e48c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x17e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x17e490: 0xe21825  or          $v1, $a3, $v0
    ctx->pc = 0x17e490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x17e494: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x17e494u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x17e498: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x17e498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x17e49c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x17e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x17e4a0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x17e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x17e4a4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x17e4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x17e4a8: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x17e4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x17e4ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17e4acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e4b0: 0xc061c60  jal         func_187180
    ctx->pc = 0x17E4B0u;
    SET_GPR_U32(ctx, 31, 0x17E4B8u);
    ctx->pc = 0x17E4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E4B0u;
    // 0x17e4b4: 0xfcc00008  sd          $zero, 0x8($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x17E4B0u, 0x17E4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4B8u;
label_17e4b8:
    // 0x17e4b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17e4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17e4bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17e4bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17e4c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x17e4c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17e4c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17e4c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17e4c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17e4c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e4cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17e4ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e4d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17e4d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e4d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e4d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x17E4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4DCu;
        // 0x17e4e0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E4E4u;
}
