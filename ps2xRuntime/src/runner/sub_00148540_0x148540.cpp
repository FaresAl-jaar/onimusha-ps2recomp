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

// Function: sub_00148540
// Address: 0x148540 - 0x148848
void sub_00148540_0x148540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148540_0x148540");
#endif

    ctx->pc = 0x148540u;

    // 0x148540: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x148540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x148544: 0x24057900  addiu       $a1, $zero, 0x7900
    ctx->pc = 0x148544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x148548: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x148548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14854c: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x14854cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x148550: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x148550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x148554: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x148554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x148558: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x148558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14855c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x14855cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x148560: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x148560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x148564: 0x3c160005  lui         $s6, 0x5
    ctx->pc = 0x148564u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)5 << 16));
    // 0x148568: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x148568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14856c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x14856cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148570: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x148570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x148574: 0x347400c0  ori         $s4, $v1, 0xC0
    ctx->pc = 0x148574u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x148578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x148578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14857c: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x14857cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x148580: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x148584: 0x2833025  or          $a2, $s4, $v1
    ctx->pc = 0x148584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
    // 0x148588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14858c: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x14858cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x148590: 0x8f878554  lw          $a3, -0x7AAC($gp)
    ctx->pc = 0x148590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148594: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x148594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x148598: 0x2413004f  addiu       $s3, $zero, 0x4F
    ctx->pc = 0x148598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x14859c: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x14859cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1485a0: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x1485a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x1485a4: 0x24120019  addiu       $s2, $zero, 0x19
    ctx->pc = 0x1485a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1485a8: 0x24100356  addiu       $s0, $zero, 0x356
    ctx->pc = 0x1485a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x1485ac: 0x3c190003  lui         $t9, 0x3
    ctx->pc = 0x1485acu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)3 << 16));
    // 0x1485b0: 0x24180048  addiu       $t8, $zero, 0x48
    ctx->pc = 0x1485b0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1485b4: 0x240e0009  addiu       $t6, $zero, 0x9
    ctx->pc = 0x1485b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1485b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1485b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1485bc: 0x240d0007  addiu       $t5, $zero, 0x7
    ctx->pc = 0x1485bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1485c0: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x1485c0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x1485c4: 0x240c0015  addiu       $t4, $zero, 0x15
    ctx->pc = 0x1485c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1485c8: 0xfcf30008  sd          $s3, 0x8($a3)
    ctx->pc = 0x1485c8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 19));
    // 0x1485cc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1485ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1485d0: 0x8f878554  lw          $a3, -0x7AAC($gp)
    ctx->pc = 0x1485d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1485d4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1485d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x1485d8: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x1485d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x1485dc: 0x2417003f  addiu       $s7, $zero, 0x3F
    ctx->pc = 0x1485dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1485e0: 0x667825  or          $t7, $v1, $a2
    ctx->pc = 0x1485e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1485e4: 0x241e0043  addiu       $fp, $zero, 0x43
    ctx->pc = 0x1485e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1485e8: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1485e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1485ec: 0x36d6020b  ori         $s6, $s6, 0x20B
    ctx->pc = 0x1485ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)523);
    // 0x1485f0: 0x24e30010  addiu       $v1, $a3, 0x10
    ctx->pc = 0x1485f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1485f4: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1485f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x1485f8: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x1485f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
    // 0x1485fc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1485fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x148600: 0x34ea0008  ori         $t2, $a3, 0x8
    ctx->pc = 0x148600u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x148604: 0x8f868554  lw          $a2, -0x7AAC($gp)
    ctx->pc = 0x148604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148608: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x148608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x14860c: 0x35078080  ori         $a3, $t0, 0x8080
    ctx->pc = 0x14860cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x148610: 0xe35825  or          $t3, $a3, $v1
    ctx->pc = 0x148610u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x148614: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x148614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x148618: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x148618u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14861c: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x14861cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x148620: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x148620u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x148624: 0x34637000  ori         $v1, $v1, 0x7000
    ctx->pc = 0x148624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x148628: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x148628u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x14862c: 0xfcd20008  sd          $s2, 0x8($a2)
    ctx->pc = 0x14862cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 18));
    // 0x148630: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x148630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x148634: 0x70033b89  pcpyld      $a3, $zero, $v1
    ctx->pc = 0x148634u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x148638: 0x8f918554  lw          $s1, -0x7AAC($gp)
    ctx->pc = 0x148638u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14863c: 0x3c030e08  lui         $v1, 0xE08
    ctx->pc = 0x14863cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3592 << 16));
    // 0x148640: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x148640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x148644: 0x34652008  ori         $a1, $v1, 0x2008
    ctx->pc = 0x148644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8200);
    // 0x148648: 0x34038700  ori         $v1, $zero, 0x8700
    ctx->pc = 0x148648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34560);
    // 0x14864c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x14864cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x148650: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x148650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x148654: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x148654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x148658: 0x26280010  addiu       $t0, $s1, 0x10
    ctx->pc = 0x148658u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14865c: 0xaf888554  sw          $t0, -0x7AAC($gp)
    ctx->pc = 0x14865cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 8));
    // 0x148660: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x148660u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x148664: 0x8f888554  lw          $t0, -0x7AAC($gp)
    ctx->pc = 0x148664u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148668: 0x24110061  addiu       $s1, $zero, 0x61
    ctx->pc = 0x148668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x14866c: 0xfd100000  sd          $s0, 0x0($t0)
    ctx->pc = 0x14866cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 16));
    // 0x148670: 0xfd000008  sd          $zero, 0x8($t0)
    ctx->pc = 0x148670u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 0));
    // 0x148674: 0x8f888554  lw          $t0, -0x7AAC($gp)
    ctx->pc = 0x148674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148678: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x148678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x14867c: 0xaf888554  sw          $t0, -0x7AAC($gp)
    ctx->pc = 0x14867cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 8));
    // 0x148680: 0x8f888554  lw          $t0, -0x7AAC($gp)
    ctx->pc = 0x148680u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148684: 0xfd190000  sd          $t9, 0x0($t0)
    ctx->pc = 0x148684u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 25));
    // 0x148688: 0xfd180008  sd          $t8, 0x8($t0)
    ctx->pc = 0x148688u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 24));
    // 0x14868c: 0x8f888554  lw          $t0, -0x7AAC($gp)
    ctx->pc = 0x14868cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148690: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x148690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x148694: 0xaf888554  sw          $t0, -0x7AAC($gp)
    ctx->pc = 0x148694u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 8));
    // 0x148698: 0x8f888554  lw          $t0, -0x7AAC($gp)
    ctx->pc = 0x148698u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14869c: 0xfd0f0000  sd          $t7, 0x0($t0)
    ctx->pc = 0x14869cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 15));
    // 0x1486a0: 0xfd0e0008  sd          $t6, 0x8($t0)
    ctx->pc = 0x1486a0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 14));
    // 0x1486a4: 0x8f8f8554  lw          $t7, -0x7AAC($gp)
    ctx->pc = 0x1486a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1486a8: 0xdc28f230  ld          $t0, -0xDD0($at)
    ctx->pc = 0x1486a8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 1), 4294963760)));
    // 0x1486ac: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x1486acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x1486b0: 0xaf8f8554  sw          $t7, -0x7AAC($gp)
    ctx->pc = 0x1486b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 15));
    // 0x1486b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1486b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1486b8: 0x8f8f8554  lw          $t7, -0x7AAC($gp)
    ctx->pc = 0x1486b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1486bc: 0xfde80000  sd          $t0, 0x0($t7)
    ctx->pc = 0x1486bcu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 8));
    // 0x1486c0: 0xfded0008  sd          $t5, 0x8($t7)
    ctx->pc = 0x1486c0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 13));
    // 0x1486c4: 0x8f888554  lw          $t0, -0x7AAC($gp)
    ctx->pc = 0x1486c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1486c8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x1486c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1486cc: 0xaf888554  sw          $t0, -0x7AAC($gp)
    ctx->pc = 0x1486ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 8));
    // 0x1486d0: 0x8f888554  lw          $t0, -0x7AAC($gp)
    ctx->pc = 0x1486d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1486d4: 0xfd000000  sd          $zero, 0x0($t0)
    ctx->pc = 0x1486d4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 0));
    // 0x1486d8: 0xfd0c0008  sd          $t4, 0x8($t0)
    ctx->pc = 0x1486d8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 12));
    // 0x1486dc: 0x8f888554  lw          $t0, -0x7AAC($gp)
    ctx->pc = 0x1486dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1486e0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x1486e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1486e4: 0xaf888554  sw          $t0, -0x7AAC($gp)
    ctx->pc = 0x1486e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 8));
    // 0x1486e8: 0x8f888554  lw          $t0, -0x7AAC($gp)
    ctx->pc = 0x1486e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1486ec: 0xfd000000  sd          $zero, 0x0($t0)
    ctx->pc = 0x1486ecu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 0));
    // 0x1486f0: 0xfd170008  sd          $s7, 0x8($t0)
    ctx->pc = 0x1486f0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 23));
    // 0x1486f4: 0x8f888554  lw          $t0, -0x7AAC($gp)
    ctx->pc = 0x1486f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1486f8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x1486f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1486fc: 0xaf888554  sw          $t0, -0x7AAC($gp)
    ctx->pc = 0x1486fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 8));
    // 0x148700: 0x90840031  lbu         $a0, 0x31($a0)
    ctx->pc = 0x148700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x148704: 0x8f888554  lw          $t0, -0x7AAC($gp)
    ctx->pc = 0x148704u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148708: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x148708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x14870c: 0x34840064  ori         $a0, $a0, 0x64
    ctx->pc = 0x14870cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)100);
    // 0x148710: 0xfd040000  sd          $a0, 0x0($t0)
    ctx->pc = 0x148710u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 4));
    // 0x148714: 0xfd1e0008  sd          $fp, 0x8($t0)
    ctx->pc = 0x148714u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 30));
    // 0x148718: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x148718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14871c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x14871cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x148720: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x148720u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x148724: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x148724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148728: 0xfc8b0000  sd          $t3, 0x0($a0)
    ctx->pc = 0x148728u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 11));
    // 0x14872c: 0xfc950008  sd          $s5, 0x8($a0)
    ctx->pc = 0x14872cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 21));
    // 0x148730: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x148730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148734: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x148734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x148738: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x148738u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x14873c: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x14873cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148740: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x148740u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x148744: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x148744u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x148748: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x148748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14874c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x14874cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x148750: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x148750u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x148754: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x148754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148758: 0xfc870000  sd          $a3, 0x0($a0)
    ctx->pc = 0x148758u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x14875c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x14875cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x148760: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x148760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148764: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x148764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x148768: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x148768u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x14876c: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x14876cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148770: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x148770u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x148774: 0xfc890008  sd          $t1, 0x8($a0)
    ctx->pc = 0x148774u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 9));
    // 0x148778: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x148778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x14877c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x14877cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x148780: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x148780u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x148784: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x148784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148788: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x148788u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x14878c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x14878cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x148790: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148794: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x148794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x148798: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148798u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x14879c: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x14879cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1487a0: 0xfc740000  sd          $s4, 0x0($v1)
    ctx->pc = 0x1487a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 20));
    // 0x1487a4: 0xfc730008  sd          $s3, 0x8($v1)
    ctx->pc = 0x1487a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 19));
    // 0x1487a8: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x1487a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1487ac: 0x8c23f014  lw          $v1, -0xFEC($at)
    ctx->pc = 0x1487acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x1487b0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1487b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1487b4: 0xaf848554  sw          $a0, -0x7AAC($gp)
    ctx->pc = 0x1487b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 4));
    // 0x1487b8: 0xdc630040  ld          $v1, 0x40($v1)
    ctx->pc = 0x1487b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1487bc: 0x8f848554  lw          $a0, -0x7AAC($gp)
    ctx->pc = 0x1487bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1487c0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1487c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1487c4: 0xfc920008  sd          $s2, 0x8($a0)
    ctx->pc = 0x1487c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 18));
    // 0x1487c8: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1487c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1487cc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1487ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1487d0: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1487d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x1487d4: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1487d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1487d8: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x1487d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x1487dc: 0xfc6e0008  sd          $t6, 0x8($v1)
    ctx->pc = 0x1487dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 14));
    // 0x1487e0: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1487e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1487e4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1487e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1487e8: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1487e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x1487ec: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1487ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1487f0: 0xfc760000  sd          $s6, 0x0($v1)
    ctx->pc = 0x1487f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 22));
    // 0x1487f4: 0xfc780008  sd          $t8, 0x8($v1)
    ctx->pc = 0x1487f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 24));
    // 0x1487f8: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x1487f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x1487fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1487fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x148800: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x148804: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148808: 0xfc710000  sd          $s1, 0x0($v1)
    ctx->pc = 0x148808u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 17));
    // 0x14880c: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x14880cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x148810: 0x8f838554  lw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935892)));
    // 0x148814: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x148814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x148818: 0xaf838554  sw          $v1, -0x7AAC($gp)
    ctx->pc = 0x148818u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
    // 0x14881c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14881cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x148820: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x148820u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x148824: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x148824u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x148828: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x148828u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14882c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14882cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148830: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x148830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14883c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14883cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148840: 0x3e00008  jr          $ra
    ctx->pc = 0x148840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148840u;
        // 0x148844: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148848u;
}
