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

// Function: sub_001490F0
// Address: 0x1490f0 - 0x149388
void sub_001490F0_0x1490f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001490F0_0x1490f0");
#endif

    ctx->pc = 0x1490f0u;

    // 0x1490f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1490f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1490f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1490f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1490f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1490f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1490fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1490fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149104: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149108: 0x942af238  lhu         $t2, -0xDC8($at)
    ctx->pc = 0x149108u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)FAST_READ16(0x81F238u));
    // 0x14910c: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x14910cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149110: 0x314a3fff  andi        $t2, $t2, 0x3FFF
    ctx->pc = 0x149110u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16383);
    // 0x149114: 0xa5980  sll         $t3, $t2, 6
    ctx->pc = 0x149114u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x149118: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x149118u;
    {
        const bool branch_taken_0x149118 = (GPR_S64(ctx, 11) >= 0);
        ctx->pc = 0x14911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149118u;
        // 0x14911c: 0xb52c3  sra         $t2, $t3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 11), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149118) {
            ctx->pc = 0x149128u;
            goto label_149128;
        }
    }
    ctx->pc = 0x149120u;
    // 0x149120: 0x256a07ff  addiu       $t2, $t3, 0x7FF
    ctx->pc = 0x149120u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 2047));
    // 0x149124: 0xa52c3  sra         $t2, $t2, 11
    ctx->pc = 0x149124u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 11));
label_149128:
    // 0x149128: 0x314b00ff  andi        $t3, $t2, 0xFF
    ctx->pc = 0x149128u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x14912c: 0x30acffff  andi        $t4, $a1, 0xFFFF
    ctx->pc = 0x14912cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x149130: 0x30caffff  andi        $t2, $a2, 0xFFFF
    ctx->pc = 0x149130u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x149134: 0x312500ff  andi        $a1, $t1, 0xFF
    ctx->pc = 0x149134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x149138: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x149138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x14913c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x14913cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x149140: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x149140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x149144: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x149144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x149148: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x149148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x14914c: 0x34118700  ori         $s1, $zero, 0x8700
    ctx->pc = 0x14914cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x149150: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x149150u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
    // 0x149154: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x149154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x149158: 0x1673025  or          $a2, $t3, $a3
    ctx->pc = 0x149158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x14915c: 0x34e80008  ori         $t0, $a3, 0x8
    ctx->pc = 0x14915cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x149160: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x149160u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x149164: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x149164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x149168: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x149168u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x14916c: 0x24060356  addiu       $a2, $zero, 0x356
    ctx->pc = 0x14916cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x149170: 0x2583ffff  addiu       $v1, $t4, -0x1
    ctx->pc = 0x149170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x149174: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x149174u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x149178: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x149178u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14917c: 0x240d0007  addiu       $t5, $zero, 0x7
    ctx->pc = 0x14917cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x149180: 0xc1900  sll         $v1, $t4, 4
    ctx->pc = 0x149180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x149184: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x149184u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x149188: 0x73bb8  dsll        $a3, $a3, 14
    ctx->pc = 0x149188u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 14);
    // 0x14918c: 0x8f8c8554  lw          $t4, -0x7AAC($gp)
    ctx->pc = 0x14918cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149190: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x149190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x149194: 0x34eb000a  ori         $t3, $a3, 0xA
    ctx->pc = 0x149194u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x149198: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x149198u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14919c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x14919cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1491a0: 0x2543ffff  addiu       $v1, $t2, -0x1
    ctx->pc = 0x1491a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x1491a4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1491a4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1491a8: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x1491a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1491ac: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x1491acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1491b0: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x1491b0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x1491b4: 0x258a0010  addiu       $t2, $t4, 0x10
    ctx->pc = 0x1491b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x1491b8: 0x948bc  dsll32      $t1, $t1, 2
    ctx->pc = 0x1491b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 2));
    // 0x1491bc: 0xaf8a8554  sw          $t2, -0x7AAC($gp)
    ctx->pc = 0x1491bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 10));
    // 0x1491c0: 0x169c025  or          $t8, $t3, $t1
    ctx->pc = 0x1491c0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x1491c4: 0x8f908554  lw          $s0, -0x7AAC($gp)
    ctx->pc = 0x1491c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1491c8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1491c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1491cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1491ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1491d0: 0x240c003f  addiu       $t4, $zero, 0x3F
    ctx->pc = 0x1491d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1491d4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1491d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1491d8: 0x240b0043  addiu       $t3, $zero, 0x43
    ctx->pc = 0x1491d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1491dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1491dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1491e0: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x1491e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1491e4: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1491e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1491e8: 0xfe060000  sd          $a2, 0x0($s0)
    ctx->pc = 0x1491e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 6));
    // 0x1491ec: 0x7483c  dsll32      $t1, $a3, 0
    ctx->pc = 0x1491ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1491f0: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1491f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1491f4: 0x3c072402  lui         $a3, 0x2402
    ctx->pc = 0x1491f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9218 << 16));
    // 0x1491f8: 0x8f998554  lw          $t9, -0x7AAC($gp)
    ctx->pc = 0x1491f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1491fc: 0x34e71000  ori         $a3, $a3, 0x1000
    ctx->pc = 0x1491fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4096);
    // 0x149200: 0xe97025  or          $t6, $a3, $t1
    ctx->pc = 0x149200u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x149204: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x149204u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x149208: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x149208u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14920c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x14920cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x149210: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x149210u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x149214: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x149214u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x149218: 0xa75025  or          $t2, $a1, $a3
    ctx->pc = 0x149218u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x14921c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x14921cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149220: 0x27330010  addiu       $s3, $t9, 0x10
    ctx->pc = 0x149220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 25), 16));
    // 0x149224: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x149224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x149228: 0x11cc38  dsll        $t9, $s1, 16
    ctx->pc = 0x149228u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 17) << 16);
    // 0x14922c: 0xaf938554  sw          $s3, -0x7AAC($gp)
    ctx->pc = 0x14922cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 19));
    // 0x149230: 0x8f918554  lw          $s1, -0x7AAC($gp)
    ctx->pc = 0x149230u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149234: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x149234u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x149238: 0x3c057900  lui         $a1, 0x7900
    ctx->pc = 0x149238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30976 << 16));
    // 0x14923c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x14923cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x149240: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x149240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x149244: 0x34a57000  ori         $a1, $a1, 0x7000
    ctx->pc = 0x149244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28672);
    // 0x149248: 0xa68025  or          $s0, $a1, $a2
    ctx->pc = 0x149248u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x14924c: 0x37399000  ori         $t9, $t9, 0x9000
    ctx->pc = 0x14924cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)36864);
    // 0x149250: 0x70109389  pcpyld      $s2, $zero, $s0
    ctx->pc = 0x149250u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x149254: 0x3263025  or          $a2, $t9, $a2
    ctx->pc = 0x149254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 25) | GPR_U64(ctx, 6));
    // 0x149258: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x149258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14925c: 0xfe380000  sd          $t8, 0x0($s1)
    ctx->pc = 0x14925cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 24));
    // 0x149260: 0x70063389  pcpyld      $a2, $zero, $a2
    ctx->pc = 0x149260u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x149264: 0xfe2f0008  sd          $t7, 0x8($s1)
    ctx->pc = 0x149264u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 15));
    // 0x149268: 0x24100019  addiu       $s0, $zero, 0x19
    ctx->pc = 0x149268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x14926c: 0x8f918554  lw          $s1, -0x7AAC($gp)
    ctx->pc = 0x14926cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149270: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x149270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x149274: 0xaf918554  sw          $s1, -0x7AAC($gp)
    ctx->pc = 0x149274u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 17));
    // 0x149278: 0x8f918554  lw          $s1, -0x7AAC($gp)
    ctx->pc = 0x149278u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14927c: 0xfe2e0000  sd          $t6, 0x0($s1)
    ctx->pc = 0x14927cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 14));
    // 0x149280: 0xfe2d0008  sd          $t5, 0x8($s1)
    ctx->pc = 0x149280u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 13));
    // 0x149284: 0x8f8d8554  lw          $t5, -0x7AAC($gp)
    ctx->pc = 0x149284u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149288: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x149288u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x14928c: 0xaf8d8554  sw          $t5, -0x7AAC($gp)
    ctx->pc = 0x14928cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 13));
    // 0x149290: 0x8f8d8554  lw          $t5, -0x7AAC($gp)
    ctx->pc = 0x149290u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149294: 0xfda00000  sd          $zero, 0x0($t5)
    ctx->pc = 0x149294u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 0));
    // 0x149298: 0xfdac0008  sd          $t4, 0x8($t5)
    ctx->pc = 0x149298u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 12));
    // 0x14929c: 0x8f8c8554  lw          $t4, -0x7AAC($gp)
    ctx->pc = 0x14929cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1492a0: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x1492a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x1492a4: 0xaf8c8554  sw          $t4, -0x7AAC($gp)
    ctx->pc = 0x1492a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 12));
    // 0x1492a8: 0x8f8c8554  lw          $t4, -0x7AAC($gp)
    ctx->pc = 0x1492a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1492ac: 0xfd840000  sd          $a0, 0x0($t4)
    ctx->pc = 0x1492acu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 4));
    // 0x1492b0: 0xfd8b0008  sd          $t3, 0x8($t4)
    ctx->pc = 0x1492b0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 11));
    // 0x1492b4: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x1492b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1492b8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1492b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1492bc: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x1492bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x1492c0: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x1492c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1492c4: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x1492c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x1492c8: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x1492c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x1492cc: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x1492ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1492d0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1492d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1492d4: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x1492d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x1492d8: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x1492d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1492dc: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x1492dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x1492e0: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x1492e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x1492e4: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x1492e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1492e8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1492e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1492ec: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x1492ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x1492f0: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x1492f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1492f4: 0xfc920000  sd          $s2, 0x0($a0)
    ctx->pc = 0x1492f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 18));
    // 0x1492f8: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x1492f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x1492fc: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x1492fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149300: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x149300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x149304: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x149304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x149308: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x149308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14930c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x14930cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x149310: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x149310u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x149314: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x149314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149318: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x149318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x14931c: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x14931cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x149320: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x149320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149324: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x149324u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x149328: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x149328u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x14932c: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x14932cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149330: 0x8c23f014  lw          $v1, -0xFEC($at)
    ctx->pc = 0x149330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x149334: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x149334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x149338: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x149338u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x14933c: 0xdc630040  ld          $v1, 0x40($v1)
    ctx->pc = 0x14933cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x149340: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x149340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149344: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x149344u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x149348: 0xfc900008  sd          $s0, 0x8($a0)
    ctx->pc = 0x149348u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 16));
    // 0x14934c: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x14934cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149350: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x149350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x149354: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x149354u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x149358: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x149358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14935c: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x14935cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x149360: 0xfc6f0008  sd          $t7, 0x8($v1)
    ctx->pc = 0x149360u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 15));
    // 0x149364: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x149364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x149368: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x149368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x14936c: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x14936cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x149370: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x149370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149374: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x149374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14937c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14937cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149380: 0x3e00008  jr          $ra
    ctx->pc = 0x149380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149380u;
        // 0x149384: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149388u;
}
