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

// Function: sub_00134A60
// Address: 0x134a60 - 0x135110
void sub_00134A60_0x134a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134A60_0x134a60");
#endif

    switch (ctx->pc) {
        case 0x134a88u: goto label_134a88;
        default: break;
    }

    ctx->pc = 0x134a60u;

    // 0x134a60: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x134a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x134a64: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x134a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x134a68: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x134a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x134a6c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x134a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x134a70: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x134a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x134a74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x134a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134a78: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x134a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x134a7c: 0x24c6f9f8  addiu       $a2, $a2, -0x608
    ctx->pc = 0x134a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965752));
    // 0x134a80: 0xfc23f9f0  sd          $v1, -0x610($at)
    ctx->pc = 0x134a80u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294965744), GPR_U64(ctx, 3));
    // 0x134a84: 0x0  nop
    ctx->pc = 0x134a84u;
    // NOP
label_134a88:
    // 0x134a88: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x134a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x134a8c: 0x3703c  dsll32      $t6, $v1, 0
    ctx->pc = 0x134a8cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) << (32 + 0));
    // 0x134a90: 0x7783c  dsll32      $t7, $a3, 0
    ctx->pc = 0x134a90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) << (32 + 0));
    // 0x134a94: 0x24e30002  addiu       $v1, $a3, 0x2
    ctx->pc = 0x134a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x134a98: 0xdcc4fff8  ld          $a0, -0x8($a2)
    ctx->pc = 0x134a98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 4294967288)));
    // 0x134a9c: 0x3683c  dsll32      $t5, $v1, 0
    ctx->pc = 0x134a9cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (32 + 0));
    // 0x134aa0: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x134aa0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x134aa4: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x134aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x134aa8: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x134aa8u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x134aac: 0x3603c  dsll32      $t4, $v1, 0
    ctx->pc = 0x134aacu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) << (32 + 0));
    // 0x134ab0: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x134ab0u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x134ab4: 0x24e30004  addiu       $v1, $a3, 0x4
    ctx->pc = 0x134ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x134ab8: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x134ab8u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x134abc: 0x3583c  dsll32      $t3, $v1, 0
    ctx->pc = 0x134abcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 0));
    // 0x134ac0: 0x24e30005  addiu       $v1, $a3, 0x5
    ctx->pc = 0x134ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x134ac4: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x134ac4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x134ac8: 0x3503c  dsll32      $t2, $v1, 0
    ctx->pc = 0x134ac8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 0));
    // 0x134acc: 0x41fba  dsrl        $v1, $a0, 30
    ctx->pc = 0x134accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> 30);
    // 0x134ad0: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x134ad0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x134ad4: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x134ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x134ad8: 0x24e40006  addiu       $a0, $a3, 0x6
    ctx->pc = 0x134ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x134adc: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x134adcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
    // 0x134ae0: 0x32338  dsll        $a0, $v1, 12
    ctx->pc = 0x134ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 12);
    // 0x134ae4: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x134ae4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x134ae8: 0x83402d  daddu       $t0, $a0, $v1
    ctx->pc = 0x134ae8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134aec: 0x24e40007  addiu       $a0, $a3, 0x7
    ctx->pc = 0x134aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x134af0: 0x8c0f8  dsll        $t8, $t0, 3
    ctx->pc = 0x134af0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 8) << 3);
    // 0x134af4: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x134af4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x134af8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x134af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x134afc: 0x303202d  daddu       $a0, $t8, $v1
    ctx->pc = 0x134afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134b00: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x134b00u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x134b04: 0x4c138  dsll        $t8, $a0, 4
    ctx->pc = 0x134b04u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) << 4);
    // 0x134b08: 0x303c82f  dsubu       $t9, $t8, $v1
    ctx->pc = 0x134b08u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 24) - GPR_U64(ctx, 3));
    // 0x134b0c: 0x28e40268  slti        $a0, $a3, 0x268
    ctx->pc = 0x134b0cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)616) ? 1 : 0);
    // 0x134b10: 0x19c0b8  dsll        $t8, $t9, 2
    ctx->pc = 0x134b10u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 25) << 2);
    // 0x134b14: 0x319c02f  dsubu       $t8, $t8, $t9
    ctx->pc = 0x134b14u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) - GPR_U64(ctx, 25));
    // 0x134b18: 0x18c0b8  dsll        $t8, $t8, 2
    ctx->pc = 0x134b18u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 2);
    // 0x134b1c: 0x303c82f  dsubu       $t9, $t8, $v1
    ctx->pc = 0x134b1cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 24) - GPR_U64(ctx, 3));
    // 0x134b20: 0x19c0f8  dsll        $t8, $t9, 3
    ctx->pc = 0x134b20u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 25) << 3);
    // 0x134b24: 0x338c02d  daddu       $t8, $t9, $t8
    ctx->pc = 0x134b24u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 24));
    // 0x134b28: 0x18c0f8  dsll        $t8, $t8, 3
    ctx->pc = 0x134b28u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 3);
    // 0x134b2c: 0x303c02d  daddu       $t8, $t8, $v1
    ctx->pc = 0x134b2cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134b30: 0x18c0b8  dsll        $t8, $t8, 2
    ctx->pc = 0x134b30u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 2);
    // 0x134b34: 0x303182d  daddu       $v1, $t8, $v1
    ctx->pc = 0x134b34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134b38: 0x1e3182d  daddu       $v1, $t7, $v1
    ctx->pc = 0x134b38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134b3c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x134b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x134b40: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x134b40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x134b44: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x134b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x134b48: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x134b48u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x134b4c: 0xdccf0000  ld          $t7, 0x0($a2)
    ctx->pc = 0x134b4cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x134b50: 0xf1fba  dsrl        $v1, $t7, 30
    ctx->pc = 0x134b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) >> 30);
    // 0x134b54: 0x1e31826  xor         $v1, $t7, $v1
    ctx->pc = 0x134b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 3));
    // 0x134b58: 0x37b38  dsll        $t7, $v1, 12
    ctx->pc = 0x134b58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) << 12);
    // 0x134b5c: 0x1e3782d  daddu       $t7, $t7, $v1
    ctx->pc = 0x134b5cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134b60: 0xf78f8  dsll        $t7, $t7, 3
    ctx->pc = 0x134b60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 3);
    // 0x134b64: 0x1e3782d  daddu       $t7, $t7, $v1
    ctx->pc = 0x134b64u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134b68: 0xf7938  dsll        $t7, $t7, 4
    ctx->pc = 0x134b68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 4);
    // 0x134b6c: 0x1e3c02f  dsubu       $t8, $t7, $v1
    ctx->pc = 0x134b6cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 15) - GPR_U64(ctx, 3));
    // 0x134b70: 0x1878b8  dsll        $t7, $t8, 2
    ctx->pc = 0x134b70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) << 2);
    // 0x134b74: 0x1f8782f  dsubu       $t7, $t7, $t8
    ctx->pc = 0x134b74u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) - GPR_U64(ctx, 24));
    // 0x134b78: 0xf78b8  dsll        $t7, $t7, 2
    ctx->pc = 0x134b78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 2);
    // 0x134b7c: 0x1e3c02f  dsubu       $t8, $t7, $v1
    ctx->pc = 0x134b7cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 15) - GPR_U64(ctx, 3));
    // 0x134b80: 0x1878f8  dsll        $t7, $t8, 3
    ctx->pc = 0x134b80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) << 3);
    // 0x134b84: 0x30f782d  daddu       $t7, $t8, $t7
    ctx->pc = 0x134b84u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 15));
    // 0x134b88: 0xf78f8  dsll        $t7, $t7, 3
    ctx->pc = 0x134b88u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 3);
    // 0x134b8c: 0x1e3782d  daddu       $t7, $t7, $v1
    ctx->pc = 0x134b8cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134b90: 0xf78b8  dsll        $t7, $t7, 2
    ctx->pc = 0x134b90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 2);
    // 0x134b94: 0x1e3182d  daddu       $v1, $t7, $v1
    ctx->pc = 0x134b94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134b98: 0x1c3182d  daddu       $v1, $t6, $v1
    ctx->pc = 0x134b98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134b9c: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x134b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x134ba0: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x134ba0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x134ba4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x134ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x134ba8: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x134ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x134bac: 0xdcce0008  ld          $t6, 0x8($a2)
    ctx->pc = 0x134bacu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x134bb0: 0xe1fba  dsrl        $v1, $t6, 30
    ctx->pc = 0x134bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) >> 30);
    // 0x134bb4: 0x1c31826  xor         $v1, $t6, $v1
    ctx->pc = 0x134bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
    // 0x134bb8: 0x37338  dsll        $t6, $v1, 12
    ctx->pc = 0x134bb8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) << 12);
    // 0x134bbc: 0x1c3702d  daddu       $t6, $t6, $v1
    ctx->pc = 0x134bbcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134bc0: 0xe70f8  dsll        $t6, $t6, 3
    ctx->pc = 0x134bc0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 3);
    // 0x134bc4: 0x1c3702d  daddu       $t6, $t6, $v1
    ctx->pc = 0x134bc4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134bc8: 0xe7138  dsll        $t6, $t6, 4
    ctx->pc = 0x134bc8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 4);
    // 0x134bcc: 0x1c3782f  dsubu       $t7, $t6, $v1
    ctx->pc = 0x134bccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) - GPR_U64(ctx, 3));
    // 0x134bd0: 0xf70b8  dsll        $t6, $t7, 2
    ctx->pc = 0x134bd0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) << 2);
    // 0x134bd4: 0x1cf702f  dsubu       $t6, $t6, $t7
    ctx->pc = 0x134bd4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) - GPR_U64(ctx, 15));
    // 0x134bd8: 0xe70b8  dsll        $t6, $t6, 2
    ctx->pc = 0x134bd8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 2);
    // 0x134bdc: 0x1c3782f  dsubu       $t7, $t6, $v1
    ctx->pc = 0x134bdcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) - GPR_U64(ctx, 3));
    // 0x134be0: 0xf70f8  dsll        $t6, $t7, 3
    ctx->pc = 0x134be0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) << 3);
    // 0x134be4: 0x1ee702d  daddu       $t6, $t7, $t6
    ctx->pc = 0x134be4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 14));
    // 0x134be8: 0xe70f8  dsll        $t6, $t6, 3
    ctx->pc = 0x134be8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 3);
    // 0x134bec: 0x1c3702d  daddu       $t6, $t6, $v1
    ctx->pc = 0x134becu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134bf0: 0xe70b8  dsll        $t6, $t6, 2
    ctx->pc = 0x134bf0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 2);
    // 0x134bf4: 0x1c3182d  daddu       $v1, $t6, $v1
    ctx->pc = 0x134bf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134bf8: 0x1a3182d  daddu       $v1, $t5, $v1
    ctx->pc = 0x134bf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134bfc: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x134bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x134c00: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x134c00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x134c04: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x134c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x134c08: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x134c08u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x134c0c: 0xdccd0010  ld          $t5, 0x10($a2)
    ctx->pc = 0x134c0cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x134c10: 0xd1fba  dsrl        $v1, $t5, 30
    ctx->pc = 0x134c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) >> 30);
    // 0x134c14: 0x1a31826  xor         $v1, $t5, $v1
    ctx->pc = 0x134c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 3));
    // 0x134c18: 0x36b38  dsll        $t5, $v1, 12
    ctx->pc = 0x134c18u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << 12);
    // 0x134c1c: 0x1a3682d  daddu       $t5, $t5, $v1
    ctx->pc = 0x134c1cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134c20: 0xd68f8  dsll        $t5, $t5, 3
    ctx->pc = 0x134c20u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 3);
    // 0x134c24: 0x1a3682d  daddu       $t5, $t5, $v1
    ctx->pc = 0x134c24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134c28: 0xd6938  dsll        $t5, $t5, 4
    ctx->pc = 0x134c28u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 4);
    // 0x134c2c: 0x1a3702f  dsubu       $t6, $t5, $v1
    ctx->pc = 0x134c2cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) - GPR_U64(ctx, 3));
    // 0x134c30: 0xe68b8  dsll        $t5, $t6, 2
    ctx->pc = 0x134c30u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) << 2);
    // 0x134c34: 0x1ae682f  dsubu       $t5, $t5, $t6
    ctx->pc = 0x134c34u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) - GPR_U64(ctx, 14));
    // 0x134c38: 0xd68b8  dsll        $t5, $t5, 2
    ctx->pc = 0x134c38u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 2);
    // 0x134c3c: 0x1a3702f  dsubu       $t6, $t5, $v1
    ctx->pc = 0x134c3cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) - GPR_U64(ctx, 3));
    // 0x134c40: 0xe68f8  dsll        $t5, $t6, 3
    ctx->pc = 0x134c40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) << 3);
    // 0x134c44: 0x1cd682d  daddu       $t5, $t6, $t5
    ctx->pc = 0x134c44u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 13));
    // 0x134c48: 0xd68f8  dsll        $t5, $t5, 3
    ctx->pc = 0x134c48u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 3);
    // 0x134c4c: 0x1a3682d  daddu       $t5, $t5, $v1
    ctx->pc = 0x134c4cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134c50: 0xd68b8  dsll        $t5, $t5, 2
    ctx->pc = 0x134c50u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 2);
    // 0x134c54: 0x1a3182d  daddu       $v1, $t5, $v1
    ctx->pc = 0x134c54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134c58: 0x183182d  daddu       $v1, $t4, $v1
    ctx->pc = 0x134c58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134c5c: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x134c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x134c60: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x134c60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x134c64: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x134c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x134c68: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x134c68u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x134c6c: 0xdccc0018  ld          $t4, 0x18($a2)
    ctx->pc = 0x134c6cu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x134c70: 0xc1fba  dsrl        $v1, $t4, 30
    ctx->pc = 0x134c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) >> 30);
    // 0x134c74: 0x1831826  xor         $v1, $t4, $v1
    ctx->pc = 0x134c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 3));
    // 0x134c78: 0x36338  dsll        $t4, $v1, 12
    ctx->pc = 0x134c78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) << 12);
    // 0x134c7c: 0x183602d  daddu       $t4, $t4, $v1
    ctx->pc = 0x134c7cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134c80: 0xc60f8  dsll        $t4, $t4, 3
    ctx->pc = 0x134c80u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 3);
    // 0x134c84: 0x183602d  daddu       $t4, $t4, $v1
    ctx->pc = 0x134c84u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134c88: 0xc6138  dsll        $t4, $t4, 4
    ctx->pc = 0x134c88u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 4);
    // 0x134c8c: 0x183682f  dsubu       $t5, $t4, $v1
    ctx->pc = 0x134c8cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) - GPR_U64(ctx, 3));
    // 0x134c90: 0xd60b8  dsll        $t4, $t5, 2
    ctx->pc = 0x134c90u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) << 2);
    // 0x134c94: 0x18d602f  dsubu       $t4, $t4, $t5
    ctx->pc = 0x134c94u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) - GPR_U64(ctx, 13));
    // 0x134c98: 0xc60b8  dsll        $t4, $t4, 2
    ctx->pc = 0x134c98u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 2);
    // 0x134c9c: 0x183682f  dsubu       $t5, $t4, $v1
    ctx->pc = 0x134c9cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) - GPR_U64(ctx, 3));
    // 0x134ca0: 0xd60f8  dsll        $t4, $t5, 3
    ctx->pc = 0x134ca0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) << 3);
    // 0x134ca4: 0x1ac602d  daddu       $t4, $t5, $t4
    ctx->pc = 0x134ca4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 12));
    // 0x134ca8: 0xc60f8  dsll        $t4, $t4, 3
    ctx->pc = 0x134ca8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 3);
    // 0x134cac: 0x183602d  daddu       $t4, $t4, $v1
    ctx->pc = 0x134cacu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134cb0: 0xc60b8  dsll        $t4, $t4, 2
    ctx->pc = 0x134cb0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 2);
    // 0x134cb4: 0x183182d  daddu       $v1, $t4, $v1
    ctx->pc = 0x134cb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134cb8: 0x163182d  daddu       $v1, $t3, $v1
    ctx->pc = 0x134cb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134cbc: 0xfcc30020  sd          $v1, 0x20($a2)
    ctx->pc = 0x134cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 3));
    // 0x134cc0: 0xdcc30020  ld          $v1, 0x20($a2)
    ctx->pc = 0x134cc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x134cc4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x134cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x134cc8: 0xfcc30020  sd          $v1, 0x20($a2)
    ctx->pc = 0x134cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 3));
    // 0x134ccc: 0xdccb0020  ld          $t3, 0x20($a2)
    ctx->pc = 0x134cccu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x134cd0: 0xb1fba  dsrl        $v1, $t3, 30
    ctx->pc = 0x134cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 30);
    // 0x134cd4: 0x1631826  xor         $v1, $t3, $v1
    ctx->pc = 0x134cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 3));
    // 0x134cd8: 0x35b38  dsll        $t3, $v1, 12
    ctx->pc = 0x134cd8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << 12);
    // 0x134cdc: 0x163582d  daddu       $t3, $t3, $v1
    ctx->pc = 0x134cdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134ce0: 0xb58f8  dsll        $t3, $t3, 3
    ctx->pc = 0x134ce0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 3);
    // 0x134ce4: 0x163582d  daddu       $t3, $t3, $v1
    ctx->pc = 0x134ce4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134ce8: 0xb5938  dsll        $t3, $t3, 4
    ctx->pc = 0x134ce8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 4);
    // 0x134cec: 0x163602f  dsubu       $t4, $t3, $v1
    ctx->pc = 0x134cecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) - GPR_U64(ctx, 3));
    // 0x134cf0: 0xc58b8  dsll        $t3, $t4, 2
    ctx->pc = 0x134cf0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 2);
    // 0x134cf4: 0x16c582f  dsubu       $t3, $t3, $t4
    ctx->pc = 0x134cf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) - GPR_U64(ctx, 12));
    // 0x134cf8: 0xb58b8  dsll        $t3, $t3, 2
    ctx->pc = 0x134cf8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 2);
    // 0x134cfc: 0x163602f  dsubu       $t4, $t3, $v1
    ctx->pc = 0x134cfcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) - GPR_U64(ctx, 3));
    // 0x134d00: 0xc58f8  dsll        $t3, $t4, 3
    ctx->pc = 0x134d00u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) << 3);
    // 0x134d04: 0x18b582d  daddu       $t3, $t4, $t3
    ctx->pc = 0x134d04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 11));
    // 0x134d08: 0xb58f8  dsll        $t3, $t3, 3
    ctx->pc = 0x134d08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 3);
    // 0x134d0c: 0x163582d  daddu       $t3, $t3, $v1
    ctx->pc = 0x134d0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134d10: 0xb58b8  dsll        $t3, $t3, 2
    ctx->pc = 0x134d10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 2);
    // 0x134d14: 0x163182d  daddu       $v1, $t3, $v1
    ctx->pc = 0x134d14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134d18: 0x143182d  daddu       $v1, $t2, $v1
    ctx->pc = 0x134d18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134d1c: 0xfcc30028  sd          $v1, 0x28($a2)
    ctx->pc = 0x134d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 3));
    // 0x134d20: 0xdcc30028  ld          $v1, 0x28($a2)
    ctx->pc = 0x134d20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x134d24: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x134d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x134d28: 0xfcc30028  sd          $v1, 0x28($a2)
    ctx->pc = 0x134d28u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 3));
    // 0x134d2c: 0xdcca0028  ld          $t2, 0x28($a2)
    ctx->pc = 0x134d2cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x134d30: 0xa1fba  dsrl        $v1, $t2, 30
    ctx->pc = 0x134d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) >> 30);
    // 0x134d34: 0x1435826  xor         $t3, $t2, $v1
    ctx->pc = 0x134d34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x134d38: 0xb1b38  dsll        $v1, $t3, 12
    ctx->pc = 0x134d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << 12);
    // 0x134d3c: 0x6b182d  daddu       $v1, $v1, $t3
    ctx->pc = 0x134d3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 11));
    // 0x134d40: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x134d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x134d44: 0x6b182d  daddu       $v1, $v1, $t3
    ctx->pc = 0x134d44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 11));
    // 0x134d48: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x134d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x134d4c: 0x6b502f  dsubu       $t2, $v1, $t3
    ctx->pc = 0x134d4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) - GPR_U64(ctx, 11));
    // 0x134d50: 0xa18b8  dsll        $v1, $t2, 2
    ctx->pc = 0x134d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << 2);
    // 0x134d54: 0x6a182f  dsubu       $v1, $v1, $t2
    ctx->pc = 0x134d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 10));
    // 0x134d58: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x134d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x134d5c: 0x6b502f  dsubu       $t2, $v1, $t3
    ctx->pc = 0x134d5cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) - GPR_U64(ctx, 11));
    // 0x134d60: 0xa18f8  dsll        $v1, $t2, 3
    ctx->pc = 0x134d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << 3);
    // 0x134d64: 0x143182d  daddu       $v1, $t2, $v1
    ctx->pc = 0x134d64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134d68: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x134d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x134d6c: 0x6b182d  daddu       $v1, $v1, $t3
    ctx->pc = 0x134d6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 11));
    // 0x134d70: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x134d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x134d74: 0x6b182d  daddu       $v1, $v1, $t3
    ctx->pc = 0x134d74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 11));
    // 0x134d78: 0x123182d  daddu       $v1, $t1, $v1
    ctx->pc = 0x134d78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134d7c: 0xfcc30030  sd          $v1, 0x30($a2)
    ctx->pc = 0x134d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 3));
    // 0x134d80: 0xdcc30030  ld          $v1, 0x30($a2)
    ctx->pc = 0x134d80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x134d84: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x134d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x134d88: 0xfcc30030  sd          $v1, 0x30($a2)
    ctx->pc = 0x134d88u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 3));
    // 0x134d8c: 0xdcc90030  ld          $t1, 0x30($a2)
    ctx->pc = 0x134d8cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x134d90: 0x91fba  dsrl        $v1, $t1, 30
    ctx->pc = 0x134d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> 30);
    // 0x134d94: 0x1235026  xor         $t2, $t1, $v1
    ctx->pc = 0x134d94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
    // 0x134d98: 0xa1b38  dsll        $v1, $t2, 12
    ctx->pc = 0x134d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << 12);
    // 0x134d9c: 0x6a182d  daddu       $v1, $v1, $t2
    ctx->pc = 0x134d9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 10));
    // 0x134da0: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x134da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x134da4: 0x6a182d  daddu       $v1, $v1, $t2
    ctx->pc = 0x134da4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 10));
    // 0x134da8: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x134da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x134dac: 0x6a482f  dsubu       $t1, $v1, $t2
    ctx->pc = 0x134dacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) - GPR_U64(ctx, 10));
    // 0x134db0: 0x918b8  dsll        $v1, $t1, 2
    ctx->pc = 0x134db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << 2);
    // 0x134db4: 0x69182f  dsubu       $v1, $v1, $t1
    ctx->pc = 0x134db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x134db8: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x134db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x134dbc: 0x6a482f  dsubu       $t1, $v1, $t2
    ctx->pc = 0x134dbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) - GPR_U64(ctx, 10));
    // 0x134dc0: 0x918f8  dsll        $v1, $t1, 3
    ctx->pc = 0x134dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << 3);
    // 0x134dc4: 0x123182d  daddu       $v1, $t1, $v1
    ctx->pc = 0x134dc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134dc8: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x134dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x134dcc: 0x6a182d  daddu       $v1, $v1, $t2
    ctx->pc = 0x134dccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 10));
    // 0x134dd0: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x134dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x134dd4: 0x6a182d  daddu       $v1, $v1, $t2
    ctx->pc = 0x134dd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 10));
    // 0x134dd8: 0x103182d  daddu       $v1, $t0, $v1
    ctx->pc = 0x134dd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134ddc: 0xfcc30038  sd          $v1, 0x38($a2)
    ctx->pc = 0x134ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 3));
    // 0x134de0: 0xdcc30038  ld          $v1, 0x38($a2)
    ctx->pc = 0x134de0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x134de4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x134de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x134de8: 0xfcc30038  sd          $v1, 0x38($a2)
    ctx->pc = 0x134de8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 3));
    // 0x134dec: 0x1480ff26  bnez        $a0, . + 4 + (-0xDA << 2)
    ctx->pc = 0x134DECu;
    {
        const bool branch_taken_0x134dec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x134DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DECu;
        // 0x134df0: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134dec) {
            ctx->pc = 0x134A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134a88;
        }
    }
    ctx->pc = 0x134DF4u;
    // 0x134df4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x134df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x134df8: 0x7703c  dsll32      $t6, $a3, 0
    ctx->pc = 0x134df8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 7) << (32 + 0));
    // 0x134dfc: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x134dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x134e00: 0x2463f9e8  addiu       $v1, $v1, -0x618
    ctx->pc = 0x134e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965736));
    // 0x134e04: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x134e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x134e08: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x134e08u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x134e0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x134e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x134e10: 0xdccf0000  ld          $t7, 0x0($a2)
    ctx->pc = 0x134e10u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x134e14: 0x2463f9f0  addiu       $v1, $v1, -0x610
    ctx->pc = 0x134e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965744));
    // 0x134e18: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x134e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x134e1c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x134e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x134e20: 0x3683c  dsll32      $t5, $v1, 0
    ctx->pc = 0x134e20u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << (32 + 0));
    // 0x134e24: 0x24e30002  addiu       $v1, $a3, 0x2
    ctx->pc = 0x134e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x134e28: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x134e28u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x134e2c: 0x3603c  dsll32      $t4, $v1, 0
    ctx->pc = 0x134e2cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) << (32 + 0));
    // 0x134e30: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x134e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x134e34: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x134e34u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x134e38: 0x3583c  dsll32      $t3, $v1, 0
    ctx->pc = 0x134e38u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 0));
    // 0x134e3c: 0x24e30004  addiu       $v1, $a3, 0x4
    ctx->pc = 0x134e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x134e40: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x134e40u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x134e44: 0x3503c  dsll32      $t2, $v1, 0
    ctx->pc = 0x134e44u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 0));
    // 0x134e48: 0x24e30005  addiu       $v1, $a3, 0x5
    ctx->pc = 0x134e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x134e4c: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x134e4cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x134e50: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x134e50u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x134e54: 0x24e30006  addiu       $v1, $a3, 0x6
    ctx->pc = 0x134e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x134e58: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x134e58u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x134e5c: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x134e5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x134e60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x134e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134e64: 0xf1fba  dsrl        $v1, $t7, 30
    ctx->pc = 0x134e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) >> 30);
    // 0x134e68: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x134e68u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x134e6c: 0x1e31826  xor         $v1, $t7, $v1
    ctx->pc = 0x134e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 3));
    // 0x134e70: 0x37b38  dsll        $t7, $v1, 12
    ctx->pc = 0x134e70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) << 12);
    // 0x134e74: 0x1e3782d  daddu       $t7, $t7, $v1
    ctx->pc = 0x134e74u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134e78: 0xf78f8  dsll        $t7, $t7, 3
    ctx->pc = 0x134e78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 3);
    // 0x134e7c: 0x1e3782d  daddu       $t7, $t7, $v1
    ctx->pc = 0x134e7cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134e80: 0xf7938  dsll        $t7, $t7, 4
    ctx->pc = 0x134e80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 4);
    // 0x134e84: 0x1e3c02f  dsubu       $t8, $t7, $v1
    ctx->pc = 0x134e84u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 15) - GPR_U64(ctx, 3));
    // 0x134e88: 0x1878b8  dsll        $t7, $t8, 2
    ctx->pc = 0x134e88u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) << 2);
    // 0x134e8c: 0x1f8782f  dsubu       $t7, $t7, $t8
    ctx->pc = 0x134e8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) - GPR_U64(ctx, 24));
    // 0x134e90: 0xf78b8  dsll        $t7, $t7, 2
    ctx->pc = 0x134e90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 2);
    // 0x134e94: 0x1e3c02f  dsubu       $t8, $t7, $v1
    ctx->pc = 0x134e94u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 15) - GPR_U64(ctx, 3));
    // 0x134e98: 0x1878f8  dsll        $t7, $t8, 3
    ctx->pc = 0x134e98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 24) << 3);
    // 0x134e9c: 0x30f782d  daddu       $t7, $t8, $t7
    ctx->pc = 0x134e9cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 15));
    // 0x134ea0: 0xf78f8  dsll        $t7, $t7, 3
    ctx->pc = 0x134ea0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 3);
    // 0x134ea4: 0x1e3782d  daddu       $t7, $t7, $v1
    ctx->pc = 0x134ea4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134ea8: 0xf78b8  dsll        $t7, $t7, 2
    ctx->pc = 0x134ea8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 2);
    // 0x134eac: 0x1e3182d  daddu       $v1, $t7, $v1
    ctx->pc = 0x134eacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134eb0: 0x1c3182d  daddu       $v1, $t6, $v1
    ctx->pc = 0x134eb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134eb4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x134eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x134eb8: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x134eb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134ebc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x134ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x134ec0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x134ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x134ec4: 0xdcce0008  ld          $t6, 0x8($a2)
    ctx->pc = 0x134ec4u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x134ec8: 0xe1fba  dsrl        $v1, $t6, 30
    ctx->pc = 0x134ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) >> 30);
    // 0x134ecc: 0x1c31826  xor         $v1, $t6, $v1
    ctx->pc = 0x134eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 3));
    // 0x134ed0: 0x37338  dsll        $t6, $v1, 12
    ctx->pc = 0x134ed0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) << 12);
    // 0x134ed4: 0x1c3702d  daddu       $t6, $t6, $v1
    ctx->pc = 0x134ed4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134ed8: 0xe70f8  dsll        $t6, $t6, 3
    ctx->pc = 0x134ed8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 3);
    // 0x134edc: 0x1c3702d  daddu       $t6, $t6, $v1
    ctx->pc = 0x134edcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134ee0: 0xe7138  dsll        $t6, $t6, 4
    ctx->pc = 0x134ee0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 4);
    // 0x134ee4: 0x1c3782f  dsubu       $t7, $t6, $v1
    ctx->pc = 0x134ee4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) - GPR_U64(ctx, 3));
    // 0x134ee8: 0xf70b8  dsll        $t6, $t7, 2
    ctx->pc = 0x134ee8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) << 2);
    // 0x134eec: 0x1cf702f  dsubu       $t6, $t6, $t7
    ctx->pc = 0x134eecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) - GPR_U64(ctx, 15));
    // 0x134ef0: 0xe70b8  dsll        $t6, $t6, 2
    ctx->pc = 0x134ef0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 2);
    // 0x134ef4: 0x1c3782f  dsubu       $t7, $t6, $v1
    ctx->pc = 0x134ef4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) - GPR_U64(ctx, 3));
    // 0x134ef8: 0xf70f8  dsll        $t6, $t7, 3
    ctx->pc = 0x134ef8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) << 3);
    // 0x134efc: 0x1ee702d  daddu       $t6, $t7, $t6
    ctx->pc = 0x134efcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 14));
    // 0x134f00: 0xe70f8  dsll        $t6, $t6, 3
    ctx->pc = 0x134f00u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 3);
    // 0x134f04: 0x1c3702d  daddu       $t6, $t6, $v1
    ctx->pc = 0x134f04u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134f08: 0xe70b8  dsll        $t6, $t6, 2
    ctx->pc = 0x134f08u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 2);
    // 0x134f0c: 0x1c3182d  daddu       $v1, $t6, $v1
    ctx->pc = 0x134f0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134f10: 0x1a3182d  daddu       $v1, $t5, $v1
    ctx->pc = 0x134f10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134f14: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x134f14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x134f18: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x134f18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x134f1c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x134f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x134f20: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x134f20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x134f24: 0xdccd0010  ld          $t5, 0x10($a2)
    ctx->pc = 0x134f24u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x134f28: 0xd1fba  dsrl        $v1, $t5, 30
    ctx->pc = 0x134f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) >> 30);
    // 0x134f2c: 0x1a31826  xor         $v1, $t5, $v1
    ctx->pc = 0x134f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 3));
    // 0x134f30: 0x36b38  dsll        $t5, $v1, 12
    ctx->pc = 0x134f30u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) << 12);
    // 0x134f34: 0x1a3682d  daddu       $t5, $t5, $v1
    ctx->pc = 0x134f34u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134f38: 0xd68f8  dsll        $t5, $t5, 3
    ctx->pc = 0x134f38u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 3);
    // 0x134f3c: 0x1a3682d  daddu       $t5, $t5, $v1
    ctx->pc = 0x134f3cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134f40: 0xd6938  dsll        $t5, $t5, 4
    ctx->pc = 0x134f40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 4);
    // 0x134f44: 0x1a3702f  dsubu       $t6, $t5, $v1
    ctx->pc = 0x134f44u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) - GPR_U64(ctx, 3));
    // 0x134f48: 0xe68b8  dsll        $t5, $t6, 2
    ctx->pc = 0x134f48u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) << 2);
    // 0x134f4c: 0x1ae682f  dsubu       $t5, $t5, $t6
    ctx->pc = 0x134f4cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) - GPR_U64(ctx, 14));
    // 0x134f50: 0xd68b8  dsll        $t5, $t5, 2
    ctx->pc = 0x134f50u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 2);
    // 0x134f54: 0x1a3702f  dsubu       $t6, $t5, $v1
    ctx->pc = 0x134f54u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) - GPR_U64(ctx, 3));
    // 0x134f58: 0xe68f8  dsll        $t5, $t6, 3
    ctx->pc = 0x134f58u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) << 3);
    // 0x134f5c: 0x1cd682d  daddu       $t5, $t6, $t5
    ctx->pc = 0x134f5cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 13));
    // 0x134f60: 0xd68f8  dsll        $t5, $t5, 3
    ctx->pc = 0x134f60u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 3);
    // 0x134f64: 0x1a3682d  daddu       $t5, $t5, $v1
    ctx->pc = 0x134f64u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134f68: 0xd68b8  dsll        $t5, $t5, 2
    ctx->pc = 0x134f68u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 2);
    // 0x134f6c: 0x1a3182d  daddu       $v1, $t5, $v1
    ctx->pc = 0x134f6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134f70: 0x183182d  daddu       $v1, $t4, $v1
    ctx->pc = 0x134f70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134f74: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x134f74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x134f78: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x134f78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x134f7c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x134f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x134f80: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x134f80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x134f84: 0xdccc0018  ld          $t4, 0x18($a2)
    ctx->pc = 0x134f84u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x134f88: 0xc1fba  dsrl        $v1, $t4, 30
    ctx->pc = 0x134f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) >> 30);
    // 0x134f8c: 0x1831826  xor         $v1, $t4, $v1
    ctx->pc = 0x134f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 3));
    // 0x134f90: 0x36338  dsll        $t4, $v1, 12
    ctx->pc = 0x134f90u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) << 12);
    // 0x134f94: 0x183602d  daddu       $t4, $t4, $v1
    ctx->pc = 0x134f94u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134f98: 0xc60f8  dsll        $t4, $t4, 3
    ctx->pc = 0x134f98u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 3);
    // 0x134f9c: 0x183602d  daddu       $t4, $t4, $v1
    ctx->pc = 0x134f9cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134fa0: 0xc6138  dsll        $t4, $t4, 4
    ctx->pc = 0x134fa0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 4);
    // 0x134fa4: 0x183682f  dsubu       $t5, $t4, $v1
    ctx->pc = 0x134fa4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) - GPR_U64(ctx, 3));
    // 0x134fa8: 0xd60b8  dsll        $t4, $t5, 2
    ctx->pc = 0x134fa8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) << 2);
    // 0x134fac: 0x18d602f  dsubu       $t4, $t4, $t5
    ctx->pc = 0x134facu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) - GPR_U64(ctx, 13));
    // 0x134fb0: 0xc60b8  dsll        $t4, $t4, 2
    ctx->pc = 0x134fb0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 2);
    // 0x134fb4: 0x183682f  dsubu       $t5, $t4, $v1
    ctx->pc = 0x134fb4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) - GPR_U64(ctx, 3));
    // 0x134fb8: 0xd60f8  dsll        $t4, $t5, 3
    ctx->pc = 0x134fb8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) << 3);
    // 0x134fbc: 0x1ac602d  daddu       $t4, $t5, $t4
    ctx->pc = 0x134fbcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 12));
    // 0x134fc0: 0xc60f8  dsll        $t4, $t4, 3
    ctx->pc = 0x134fc0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 3);
    // 0x134fc4: 0x183602d  daddu       $t4, $t4, $v1
    ctx->pc = 0x134fc4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134fc8: 0xc60b8  dsll        $t4, $t4, 2
    ctx->pc = 0x134fc8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 2);
    // 0x134fcc: 0x183182d  daddu       $v1, $t4, $v1
    ctx->pc = 0x134fccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134fd0: 0x163182d  daddu       $v1, $t3, $v1
    ctx->pc = 0x134fd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 3));
    // 0x134fd4: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x134fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x134fd8: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x134fd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x134fdc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x134fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x134fe0: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x134fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x134fe4: 0xdccb0020  ld          $t3, 0x20($a2)
    ctx->pc = 0x134fe4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x134fe8: 0xb1fba  dsrl        $v1, $t3, 30
    ctx->pc = 0x134fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 30);
    // 0x134fec: 0x1636026  xor         $t4, $t3, $v1
    ctx->pc = 0x134fecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 3));
    // 0x134ff0: 0xc1b38  dsll        $v1, $t4, 12
    ctx->pc = 0x134ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) << 12);
    // 0x134ff4: 0x6c182d  daddu       $v1, $v1, $t4
    ctx->pc = 0x134ff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 12));
    // 0x134ff8: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x134ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x134ffc: 0x6c182d  daddu       $v1, $v1, $t4
    ctx->pc = 0x134ffcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 12));
    // 0x135000: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x135000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x135004: 0x6c582f  dsubu       $t3, $v1, $t4
    ctx->pc = 0x135004u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) - GPR_U64(ctx, 12));
    // 0x135008: 0xb18b8  dsll        $v1, $t3, 2
    ctx->pc = 0x135008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << 2);
    // 0x13500c: 0x6b182f  dsubu       $v1, $v1, $t3
    ctx->pc = 0x13500cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 11));
    // 0x135010: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x135010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x135014: 0x6c582f  dsubu       $t3, $v1, $t4
    ctx->pc = 0x135014u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) - GPR_U64(ctx, 12));
    // 0x135018: 0xb18f8  dsll        $v1, $t3, 3
    ctx->pc = 0x135018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << 3);
    // 0x13501c: 0x163182d  daddu       $v1, $t3, $v1
    ctx->pc = 0x13501cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 3));
    // 0x135020: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x135020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x135024: 0x6c182d  daddu       $v1, $v1, $t4
    ctx->pc = 0x135024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 12));
    // 0x135028: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x135028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x13502c: 0x6c182d  daddu       $v1, $v1, $t4
    ctx->pc = 0x13502cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 12));
    // 0x135030: 0x143182d  daddu       $v1, $t2, $v1
    ctx->pc = 0x135030u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 3));
    // 0x135034: 0xfc830020  sd          $v1, 0x20($a0)
    ctx->pc = 0x135034u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
    // 0x135038: 0xdc830020  ld          $v1, 0x20($a0)
    ctx->pc = 0x135038u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x13503c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x13503cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x135040: 0xfc830020  sd          $v1, 0x20($a0)
    ctx->pc = 0x135040u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 3));
    // 0x135044: 0xdcca0028  ld          $t2, 0x28($a2)
    ctx->pc = 0x135044u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x135048: 0xa1fba  dsrl        $v1, $t2, 30
    ctx->pc = 0x135048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) >> 30);
    // 0x13504c: 0x1435826  xor         $t3, $t2, $v1
    ctx->pc = 0x13504cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x135050: 0xb1b38  dsll        $v1, $t3, 12
    ctx->pc = 0x135050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << 12);
    // 0x135054: 0x6b182d  daddu       $v1, $v1, $t3
    ctx->pc = 0x135054u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 11));
    // 0x135058: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x135058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x13505c: 0x6b182d  daddu       $v1, $v1, $t3
    ctx->pc = 0x13505cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 11));
    // 0x135060: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x135060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x135064: 0x6b502f  dsubu       $t2, $v1, $t3
    ctx->pc = 0x135064u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) - GPR_U64(ctx, 11));
    // 0x135068: 0xa18b8  dsll        $v1, $t2, 2
    ctx->pc = 0x135068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << 2);
    // 0x13506c: 0x6a182f  dsubu       $v1, $v1, $t2
    ctx->pc = 0x13506cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 10));
    // 0x135070: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x135070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x135074: 0x6b502f  dsubu       $t2, $v1, $t3
    ctx->pc = 0x135074u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) - GPR_U64(ctx, 11));
    // 0x135078: 0xa18f8  dsll        $v1, $t2, 3
    ctx->pc = 0x135078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << 3);
    // 0x13507c: 0x143182d  daddu       $v1, $t2, $v1
    ctx->pc = 0x13507cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 3));
    // 0x135080: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x135080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x135084: 0x6b182d  daddu       $v1, $v1, $t3
    ctx->pc = 0x135084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 11));
    // 0x135088: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x135088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x13508c: 0x6b182d  daddu       $v1, $v1, $t3
    ctx->pc = 0x13508cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 11));
    // 0x135090: 0x123182d  daddu       $v1, $t1, $v1
    ctx->pc = 0x135090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 3));
    // 0x135094: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x135094u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
    // 0x135098: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x135098u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x13509c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x13509cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1350a0: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x1350a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
    // 0x1350a4: 0xdcc60030  ld          $a2, 0x30($a2)
    ctx->pc = 0x1350a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1350a8: 0x61fba  dsrl        $v1, $a2, 30
    ctx->pc = 0x1350a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) >> 30);
    // 0x1350ac: 0xc34826  xor         $t1, $a2, $v1
    ctx->pc = 0x1350acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x1350b0: 0x91b38  dsll        $v1, $t1, 12
    ctx->pc = 0x1350b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << 12);
    // 0x1350b4: 0x69182d  daddu       $v1, $v1, $t1
    ctx->pc = 0x1350b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 9));
    // 0x1350b8: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x1350b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x1350bc: 0x69182d  daddu       $v1, $v1, $t1
    ctx->pc = 0x1350bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 9));
    // 0x1350c0: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x1350c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x1350c4: 0x69302f  dsubu       $a2, $v1, $t1
    ctx->pc = 0x1350c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x1350c8: 0x618b8  dsll        $v1, $a2, 2
    ctx->pc = 0x1350c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 2);
    // 0x1350cc: 0x66182f  dsubu       $v1, $v1, $a2
    ctx->pc = 0x1350ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 6));
    // 0x1350d0: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x1350d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x1350d4: 0x69302f  dsubu       $a2, $v1, $t1
    ctx->pc = 0x1350d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x1350d8: 0x618f8  dsll        $v1, $a2, 3
    ctx->pc = 0x1350d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 3);
    // 0x1350dc: 0xc3182d  daddu       $v1, $a2, $v1
    ctx->pc = 0x1350dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1350e0: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x1350e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x1350e4: 0x69182d  daddu       $v1, $v1, $t1
    ctx->pc = 0x1350e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 9));
    // 0x1350e8: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x1350e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x1350ec: 0x69182d  daddu       $v1, $v1, $t1
    ctx->pc = 0x1350ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 9));
    // 0x1350f0: 0x103182d  daddu       $v1, $t0, $v1
    ctx->pc = 0x1350f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1350f4: 0xfc830030  sd          $v1, 0x30($a0)
    ctx->pc = 0x1350f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
    // 0x1350f8: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x1350f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1350fc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1350fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x135100: 0xfc830030  sd          $v1, 0x30($a0)
    ctx->pc = 0x135100u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
    // 0x135104: 0xaf878020  sw          $a3, -0x7FE0($gp)
    ctx->pc = 0x135104u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934560), GPR_U32(ctx, 7));
    // 0x135108: 0x3e00008  jr          $ra
    ctx->pc = 0x135108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135108u;
        // 0x13510c: 0xaf87852c  sw          $a3, -0x7AD4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935852), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135110u;
}
