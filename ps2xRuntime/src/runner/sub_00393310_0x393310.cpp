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

// Function: sub_00393310
// Address: 0x393310 - 0x393680
void sub_00393310_0x393310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393310_0x393310");
#endif

    switch (ctx->pc) {
        case 0x393430u: goto label_393430;
        default: break;
    }

    ctx->pc = 0x393310u;

    // 0x393310: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x393310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x393314: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x393314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x393318: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x393318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x39331c: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x39331cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x393320: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x393320u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x393324: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x393324u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x393328: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x393328u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x39332c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x393330: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x393330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x393334: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x393334u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x393338: 0x346300c0  ori         $v1, $v1, 0xC0
    ctx->pc = 0x393338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)192);
    // 0x39333c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39333cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393340: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x393340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x393344: 0x240a001f  addiu       $t2, $zero, 0x1F
    ctx->pc = 0x393344u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x393348: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x393348u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x39334c: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x39334cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x393350: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x393350u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x393354: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x393354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x393358: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x393358u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x39335c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x39335cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x393360: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x393360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x393364: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x393364u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x393368: 0x3463c00a  ori         $v1, $v1, 0xC00A
    ctx->pc = 0x393368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49162);
    // 0x39336c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x39336cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x393370: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x393370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x393374: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x393374u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393378: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x393378u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x39337c: 0x24060206  addiu       $a2, $zero, 0x206
    ctx->pc = 0x39337cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x393380: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x393380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x393384: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x393384u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x393388: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x393388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x39338c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x39338cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x393390: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x393390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x393394: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x393394u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x393398: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x393398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x39339c: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x39339cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x3933a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3933a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3933a4: 0x33a38  dsll        $a3, $v1, 8
    ctx->pc = 0x3933a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 8);
    // 0x3933a8: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x3933a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x3933ac: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x3933acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3933b0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3933b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3933b4: 0x51c02  srl         $v1, $a1, 16
    ctx->pc = 0x3933b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x3933b8: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x3933b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3933bc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x3933bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3933c0: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x3933c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3933c4: 0x51e02  srl         $v1, $a1, 24
    ctx->pc = 0x3933c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x3933c8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3933c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3933cc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x3933ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x3933d0: 0x62c38  dsll        $a1, $a2, 16
    ctx->pc = 0x3933d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << 16);
    // 0x3933d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3933d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3933d8: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x3933d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x3933dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3933dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3933e0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x3933e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x3933e4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3933e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3933e8: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x3933e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x3933ec: 0xfc820018  sd          $v0, 0x18($a0)
    ctx->pc = 0x3933ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 2));
    // 0x3933f0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3933f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3933f4: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x3933f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x3933f8: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x3933f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3933fc: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x3933fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x393400: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x393400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x393404: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x393404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x393408: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x393408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x39340c: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x39340cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x393410: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x393410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x393414: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x393414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x393418: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x393418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x39341c: 0x70033389  pcpyld      $a2, $zero, $v1
    ctx->pc = 0x39341cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x393420: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x393420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x393424: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x393424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x393428: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x393428u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x39342c: 0x0  nop
    ctx->pc = 0x39342cu;
    // NOP
label_393430:
    // 0x393430: 0xa683c  dsll32      $t5, $t2, 0
    ctx->pc = 0x393430u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) << (32 + 0));
    // 0x393434: 0x9703c  dsll32      $t6, $t1, 0
    ctx->pc = 0x393434u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) << (32 + 0));
    // 0x393438: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x393438u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x39343c: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x39343cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x393440: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x393440u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x393444: 0x256c0001  addiu       $t4, $t3, 0x1
    ctx->pc = 0x393444u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x393448: 0x1cd6825  or          $t5, $t6, $t5
    ctx->pc = 0x393448u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x39344c: 0xc7940  sll         $t7, $t4, 5
    ctx->pc = 0x39344cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x393450: 0x1a86825  or          $t5, $t5, $t0
    ctx->pc = 0x393450u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 8));
    // 0x393454: 0x25ec001f  addiu       $t4, $t7, 0x1F
    ctx->pc = 0x393454u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 31));
    // 0x393458: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x393458u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x39345c: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x39345cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x393460: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x393460u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x393464: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x393464u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x393468: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x393468u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x39346c: 0xc6c38  dsll        $t5, $t4, 16
    ctx->pc = 0x39346cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 16);
    // 0x393470: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x393470u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x393474: 0xf603c  dsll32      $t4, $t7, 0
    ctx->pc = 0x393474u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) << (32 + 0));
    // 0x393478: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x393478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x39347c: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x39347cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x393480: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x393480u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x393484: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x393484u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x393488: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x393488u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x39348c: 0x1887025  or          $t6, $t4, $t0
    ctx->pc = 0x39348cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x393490: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x393490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x393494: 0x256c0002  addiu       $t4, $t3, 0x2
    ctx->pc = 0x393494u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x393498: 0xfc8e0000  sd          $t6, 0x0($a0)
    ctx->pc = 0x393498u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 14));
    // 0x39349c: 0xc7940  sll         $t7, $t4, 5
    ctx->pc = 0x39349cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x3934a0: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x3934a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x3934a4: 0x25ec001f  addiu       $t4, $t7, 0x1F
    ctx->pc = 0x3934a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 31));
    // 0x3934a8: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x3934a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x3934ac: 0xc683c  dsll32      $t5, $t4, 0
    ctx->pc = 0x3934acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 0));
    // 0x3934b0: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x3934b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x3934b4: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x3934b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x3934b8: 0xf603c  dsll32      $t4, $t7, 0
    ctx->pc = 0x3934b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) << (32 + 0));
    // 0x3934bc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3934bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3934c0: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x3934c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x3934c4: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x3934c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x3934c8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x3934c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x3934cc: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x3934ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x3934d0: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x3934d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x3934d4: 0x1887025  or          $t6, $t4, $t0
    ctx->pc = 0x3934d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x3934d8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3934d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3934dc: 0x256c0003  addiu       $t4, $t3, 0x3
    ctx->pc = 0x3934dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x3934e0: 0xfc8e0000  sd          $t6, 0x0($a0)
    ctx->pc = 0x3934e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 14));
    // 0x3934e4: 0xc7940  sll         $t7, $t4, 5
    ctx->pc = 0x3934e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x3934e8: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x3934e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x3934ec: 0x25ec001f  addiu       $t4, $t7, 0x1F
    ctx->pc = 0x3934ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 31));
    // 0x3934f0: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x3934f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x3934f4: 0xc683c  dsll32      $t5, $t4, 0
    ctx->pc = 0x3934f4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 0));
    // 0x3934f8: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x3934f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x3934fc: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x3934fcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x393500: 0xf603c  dsll32      $t4, $t7, 0
    ctx->pc = 0x393500u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) << (32 + 0));
    // 0x393504: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x393504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x393508: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x393508u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x39350c: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x39350cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x393510: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x393510u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x393514: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x393514u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x393518: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x393518u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x39351c: 0x1887825  or          $t7, $t4, $t0
    ctx->pc = 0x39351cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x393520: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x393520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x393524: 0x256c0004  addiu       $t4, $t3, 0x4
    ctx->pc = 0x393524u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x393528: 0xfc8f0000  sd          $t7, 0x0($a0)
    ctx->pc = 0x393528u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 15));
    // 0x39352c: 0xc7140  sll         $t6, $t4, 5
    ctx->pc = 0x39352cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x393530: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x393530u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x393534: 0x25cc001f  addiu       $t4, $t6, 0x1F
    ctx->pc = 0x393534u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 31));
    // 0x393538: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x393538u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x39353c: 0xc683c  dsll32      $t5, $t4, 0
    ctx->pc = 0x39353cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 0));
    // 0x393540: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x393540u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x393544: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x393544u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x393548: 0xe603c  dsll32      $t4, $t6, 0
    ctx->pc = 0x393548u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) << (32 + 0));
    // 0x39354c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x39354cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x393550: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x393550u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x393554: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x393554u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x393558: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x393558u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x39355c: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x39355cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x393560: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x393560u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x393564: 0x1887025  or          $t6, $t4, $t0
    ctx->pc = 0x393564u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x393568: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x393568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x39356c: 0x256c0005  addiu       $t4, $t3, 0x5
    ctx->pc = 0x39356cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 5));
    // 0x393570: 0xfc8e0000  sd          $t6, 0x0($a0)
    ctx->pc = 0x393570u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 14));
    // 0x393574: 0xcc140  sll         $t8, $t4, 5
    ctx->pc = 0x393574u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x393578: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x393578u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x39357c: 0x270c001f  addiu       $t4, $t8, 0x1F
    ctx->pc = 0x39357cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 24), 31));
    // 0x393580: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x393580u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x393584: 0xc683c  dsll32      $t5, $t4, 0
    ctx->pc = 0x393584u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 0));
    // 0x393588: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x393588u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x39358c: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x39358cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x393590: 0x18603c  dsll32      $t4, $t8, 0
    ctx->pc = 0x393590u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 0));
    // 0x393594: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x393594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x393598: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x393598u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x39359c: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x39359cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x3935a0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x3935a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x3935a4: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x3935a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x3935a8: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x3935a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x3935ac: 0x1887825  or          $t7, $t4, $t0
    ctx->pc = 0x3935acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x3935b0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3935b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3935b4: 0x256c0006  addiu       $t4, $t3, 0x6
    ctx->pc = 0x3935b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x3935b8: 0xfc8f0000  sd          $t7, 0x0($a0)
    ctx->pc = 0x3935b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 15));
    // 0x3935bc: 0xcc140  sll         $t8, $t4, 5
    ctx->pc = 0x3935bcu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x3935c0: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x3935c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x3935c4: 0x270c001f  addiu       $t4, $t8, 0x1F
    ctx->pc = 0x3935c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 24), 31));
    // 0x3935c8: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x3935c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x3935cc: 0xc683c  dsll32      $t5, $t4, 0
    ctx->pc = 0x3935ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 0));
    // 0x3935d0: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x3935d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x3935d4: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x3935d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x3935d8: 0x18603c  dsll32      $t4, $t8, 0
    ctx->pc = 0x3935d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 0));
    // 0x3935dc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3935dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3935e0: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x3935e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x3935e4: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x3935e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x3935e8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x3935e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x3935ec: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x3935ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x3935f0: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x3935f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x3935f4: 0x1887025  or          $t6, $t4, $t0
    ctx->pc = 0x3935f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x3935f8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3935f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3935fc: 0x256c0007  addiu       $t4, $t3, 0x7
    ctx->pc = 0x3935fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x393600: 0xfc8e0000  sd          $t6, 0x0($a0)
    ctx->pc = 0x393600u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 14));
    // 0x393604: 0xcc140  sll         $t8, $t4, 5
    ctx->pc = 0x393604u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x393608: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x393608u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x39360c: 0x270c001f  addiu       $t4, $t8, 0x1F
    ctx->pc = 0x39360cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 24), 31));
    // 0x393610: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x393610u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x393614: 0xc683c  dsll32      $t5, $t4, 0
    ctx->pc = 0x393614u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 0));
    // 0x393618: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x393618u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x39361c: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x39361cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x393620: 0x18603c  dsll32      $t4, $t8, 0
    ctx->pc = 0x393620u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 0));
    // 0x393624: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x393624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x393628: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x393628u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x39362c: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x39362cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x393630: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x393630u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x393634: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x393634u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x393638: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x393638u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x39363c: 0x1886825  or          $t5, $t4, $t0
    ctx->pc = 0x39363cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x393640: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x393640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x393644: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x393644u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
    // 0x393648: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x393648u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x39364c: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x39364cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x393650: 0x2d6c0010  sltiu       $t4, $t3, 0x10
    ctx->pc = 0x393650u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x393654: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x393654u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x393658: 0x254a0100  addiu       $t2, $t2, 0x100
    ctx->pc = 0x393658u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 256));
    // 0x39365c: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x39365cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x393660: 0x25290100  addiu       $t1, $t1, 0x100
    ctx->pc = 0x393660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 256));
    // 0x393664: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x393664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x393668: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x393668u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x39366c: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x39366cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x393670: 0x1580ff6f  bnez        $t4, . + 4 + (-0x91 << 2)
    ctx->pc = 0x393670u;
    {
        const bool branch_taken_0x393670 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x393674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393670u;
        // 0x393674: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393670) {
            ctx->pc = 0x393430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393430;
        }
    }
    ctx->pc = 0x393678u;
    // 0x393678: 0x3e00008  jr          $ra
    ctx->pc = 0x393678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393678u;
        // 0x39367c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393680u;
}
