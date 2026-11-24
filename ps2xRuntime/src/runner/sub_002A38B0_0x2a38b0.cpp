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

// Function: sub_002A38B0
// Address: 0x2a38b0 - 0x2a3ae4
void sub_002A38B0_0x2a38b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A38B0_0x2a38b0");
#endif

    ctx->pc = 0x2a38b0u;

    // 0x2a38b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a38b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a38b4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x2a38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x2a38b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a38b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a38bc: 0x344b0003  ori         $t3, $v0, 0x3
    ctx->pc = 0x2a38bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2a38c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a38c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a38c4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2a38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2a38c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a38c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a38cc: 0x344a0003  ori         $t2, $v0, 0x3
    ctx->pc = 0x2a38ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2a38d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a38d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a38d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2a38d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2a38d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a38d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a38dc: 0x34490004  ori         $t1, $v0, 0x4
    ctx->pc = 0x2a38dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2a38e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a38e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a38e4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2a38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2a38e8: 0x8c8c0140  lw          $t4, 0x140($a0)
    ctx->pc = 0x2a38e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x2a38ec: 0x34480404  ori         $t0, $v0, 0x404
    ctx->pc = 0x2a38ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x2a38f0: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x2a38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x2a38f4: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x2a38f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x2a38f8: 0x34430284  ori         $v1, $v0, 0x284
    ctx->pc = 0x2a38f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)644);
    // 0x2a38fc: 0x24b500a0  addiu       $s5, $a1, 0xA0
    ctx->pc = 0x2a38fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x2a3900: 0x15a93c  dsll32      $s5, $s5, 4
    ctx->pc = 0x2a3900u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
    // 0x2a3904: 0x8c8d013c  lw          $t5, 0x13C($a0)
    ctx->pc = 0x2a3904u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x2a3908: 0x248200a0  addiu       $v0, $a0, 0xA0
    ctx->pc = 0x2a3908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2a390c: 0x24b20020  addiu       $s2, $a1, 0x20
    ctx->pc = 0x2a390cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2a3910: 0x3c193000  lui         $t9, 0x3000
    ctx->pc = 0x2a3910u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)12288 << 16));
    // 0x2a3914: 0x261069a0  addiu       $s0, $s0, 0x69A0
    ctx->pc = 0x2a3914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27040));
    // 0x2a3918: 0xc613c  dsll32      $t4, $t4, 4
    ctx->pc = 0x2a3918u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 4));
    // 0x2a391c: 0x24b100b0  addiu       $s1, $a1, 0xB0
    ctx->pc = 0x2a391cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x2a3920: 0xc613e  dsrl32      $t4, $t4, 4
    ctx->pc = 0x2a3920u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 4));
    // 0x2a3924: 0x15a93e  dsrl32      $s5, $s5, 4
    ctx->pc = 0x2a3924u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 4));
    // 0x2a3928: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x2a3928u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x2a392c: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x2a392cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x2a3930: 0xfcab0000  sd          $t3, 0x0($a1)
    ctx->pc = 0x2a3930u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 11));
    // 0x2a3934: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2a3934u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2a3938: 0xacaa000c  sw          $t2, 0xC($a1)
    ctx->pc = 0x2a3938u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 10));
    // 0x2a393c: 0xfca90010  sd          $t1, 0x10($a1)
    ctx->pc = 0x2a393cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 9));
    // 0x2a3940: 0xaca80018  sw          $t0, 0x18($a1)
    ctx->pc = 0x2a3940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 8));
    // 0x2a3944: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x2a3944u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x2a3948: 0x78530000  lq          $s3, 0x0($v0)
    ctx->pc = 0x2a3948u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a394c: 0x25a30020  addiu       $v1, $t5, 0x20
    ctx->pc = 0x2a394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x2a3950: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x2a3950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x2a3954: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x2a3954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x2a3958: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x2a3958u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a395c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2a395cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2a3960: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x2a3960u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x2a3964: 0x346f0404  ori         $t7, $v1, 0x404
    ctx->pc = 0x2a3964u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x2a3968: 0x8c03c  dsll32      $t8, $t0, 0
    ctx->pc = 0x2a3968u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2a396c: 0x7e530000  sq          $s3, 0x0($s2)
    ctx->pc = 0x2a396cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 19));
    // 0x2a3970: 0x24c300f0  addiu       $v1, $a2, 0xF0
    ctx->pc = 0x2a3970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
    // 0x2a3974: 0x78530010  lq          $s3, 0x10($v0)
    ctx->pc = 0x2a3974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a3978: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x2a3978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x2a397c: 0x3c086c08  lui         $t0, 0x6C08
    ctx->pc = 0x2a397cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)27656 << 16));
    // 0x2a3980: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x2a3980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x2a3984: 0x350e03f8  ori         $t6, $t0, 0x3F8
    ctx->pc = 0x2a3984u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1016);
    // 0x2a3988: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a3988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a398c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a398cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a3990: 0x3c083000  lui         $t0, 0x3000
    ctx->pc = 0x2a3990u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)12288 << 16));
    // 0x2a3994: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x2a3994u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a3998: 0x35080008  ori         $t0, $t0, 0x8
    ctx->pc = 0x2a3998u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8);
    // 0x2a399c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x2a399cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x2a39a0: 0x1286825  or          $t5, $t1, $t0
    ctx->pc = 0x2a39a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x2a39a4: 0x7e530010  sq          $s3, 0x10($s2)
    ctx->pc = 0x2a39a4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 19));
    // 0x2a39a8: 0x346c0005  ori         $t4, $v1, 0x5
    ctx->pc = 0x2a39a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x2a39ac: 0x78530020  lq          $s3, 0x20($v0)
    ctx->pc = 0x2a39acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2a39b0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2a39b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a39b4: 0x665821  addu        $t3, $v1, $a2
    ctx->pc = 0x2a39b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a39b8: 0x3c092000  lui         $t1, 0x2000
    ctx->pc = 0x2a39b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8192 << 16));
    // 0x2a39bc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2a39bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a39c0: 0x665021  addu        $t2, $v1, $a2
    ctx->pc = 0x2a39c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a39c4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2a39c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a39c8: 0x66a021  addu        $s4, $v1, $a2
    ctx->pc = 0x2a39c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2a39cc: 0x7e530020  sq          $s3, 0x20($s2)
    ctx->pc = 0x2a39ccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 19));
    // 0x2a39d0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2a39d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2a39d4: 0x78530030  lq          $s3, 0x30($v0)
    ctx->pc = 0x2a39d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2a39d8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2a39d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2a39dc: 0x34670404  ori         $a3, $v1, 0x404
    ctx->pc = 0x2a39dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x2a39e0: 0x34c80004  ori         $t0, $a2, 0x4
    ctx->pc = 0x2a39e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x2a39e4: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x2a39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x2a39e8: 0x34660284  ori         $a2, $v1, 0x284
    ctx->pc = 0x2a39e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)644);
    // 0x2a39ec: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2a39ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x2a39f0: 0x7e530030  sq          $s3, 0x30($s2)
    ctx->pc = 0x2a39f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 19));
    // 0x2a39f4: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x2a39f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2a39f8: 0x8c840078  lw          $a0, 0x78($a0)
    ctx->pc = 0x2a39f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2a39fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a39fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a3a00: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x2a3a00u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3a04: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2a3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2a3a08: 0x2a2a825  or          $s5, $s5, $v0
    ctx->pc = 0x2a3a08u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x2a3a0c: 0x24a20100  addiu       $v0, $a1, 0x100
    ctx->pc = 0x2a3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x2a3a10: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x2a3a10u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2a3a14: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2a3a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2a3a18: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2a3a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a3a1c: 0x24840009  addiu       $a0, $a0, 0x9
    ctx->pc = 0x2a3a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9));
    // 0x2a3a20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2a3a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a3a24: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2a3a24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2a3a28: 0x992025  or          $a0, $a0, $t9
    ctx->pc = 0x2a3a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 25));
    // 0x2a3a2c: 0x3042025  or          $a0, $t8, $a0
    ctx->pc = 0x2a3a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) | GPR_U64(ctx, 4));
    // 0x2a3a30: 0xfca40060  sd          $a0, 0x60($a1)
    ctx->pc = 0x2a3a30u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 96), GPR_U64(ctx, 4));
    // 0x2a3a34: 0xacaf0068  sw          $t7, 0x68($a1)
    ctx->pc = 0x2a3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 15));
    // 0x2a3a38: 0xacae006c  sw          $t6, 0x6C($a1)
    ctx->pc = 0x2a3a38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 14));
    // 0x2a3a3c: 0xfcad0070  sd          $t5, 0x70($a1)
    ctx->pc = 0x2a3a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 112), GPR_U64(ctx, 13));
    // 0x2a3a40: 0xaca00078  sw          $zero, 0x78($a1)
    ctx->pc = 0x2a3a40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 0));
    // 0x2a3a44: 0xacac007c  sw          $t4, 0x7C($a1)
    ctx->pc = 0x2a3a44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 12));
    // 0x2a3a48: 0x8d640070  lw          $a0, 0x70($t3)
    ctx->pc = 0x2a3a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 112)));
    // 0x2a3a4c: 0xdc840000  ld          $a0, 0x0($a0)
    ctx->pc = 0x2a3a4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a3a50: 0xfca40080  sd          $a0, 0x80($a1)
    ctx->pc = 0x2a3a50u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 128), GPR_U64(ctx, 4));
    // 0x2a3a54: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x2a3a54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x2a3a58: 0xaca0008c  sw          $zero, 0x8C($a1)
    ctx->pc = 0x2a3a58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
    // 0x2a3a5c: 0x8d440078  lw          $a0, 0x78($t2)
    ctx->pc = 0x2a3a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 120)));
    // 0x2a3a60: 0x4213c  dsll32      $a0, $a0, 4
    ctx->pc = 0x2a3a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 4));
    // 0x2a3a64: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x2a3a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x2a3a68: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2a3a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a3a6c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a3a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a3a70: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2a3a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a3a74: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x2a3a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x2a3a78: 0xfca40090  sd          $a0, 0x90($a1)
    ctx->pc = 0x2a3a78u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 144), GPR_U64(ctx, 4));
    // 0x2a3a7c: 0xaca00098  sw          $zero, 0x98($a1)
    ctx->pc = 0x2a3a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 0));
    // 0x2a3a80: 0xaca0009c  sw          $zero, 0x9C($a1)
    ctx->pc = 0x2a3a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 0));
    // 0x2a3a84: 0xfca800a0  sd          $t0, 0xA0($a1)
    ctx->pc = 0x2a3a84u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 160), GPR_U64(ctx, 8));
    // 0x2a3a88: 0xaca700a8  sw          $a3, 0xA8($a1)
    ctx->pc = 0x2a3a88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 7));
    // 0x2a3a8c: 0xaca600ac  sw          $a2, 0xAC($a1)
    ctx->pc = 0x2a3a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 6));
    // 0x2a3a90: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x2a3a90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a3a94: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x2a3a94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x2a3a98: 0x7a040010  lq          $a0, 0x10($s0)
    ctx->pc = 0x2a3a98u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a3a9c: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x2a3a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
    // 0x2a3aa0: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x2a3aa0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a3aa4: 0x7e240020  sq          $a0, 0x20($s1)
    ctx->pc = 0x2a3aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 4));
    // 0x2a3aa8: 0x7a040030  lq          $a0, 0x30($s0)
    ctx->pc = 0x2a3aa8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2a3aac: 0x7e240030  sq          $a0, 0x30($s1)
    ctx->pc = 0x2a3aacu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 4));
    // 0x2a3ab0: 0xfca300f0  sd          $v1, 0xF0($a1)
    ctx->pc = 0x2a3ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 240), GPR_U64(ctx, 3));
    // 0x2a3ab4: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x2a3ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
    // 0x2a3ab8: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x2a3ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
    // 0x2a3abc: 0x8e830058  lw          $v1, 0x58($s4)
    ctx->pc = 0x2a3abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x2a3ac0: 0xfc750010  sd          $s5, 0x10($v1)
    ctx->pc = 0x2a3ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 21));
    // 0x2a3ac4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a3ac4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a3ac8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a3ac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a3acc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a3accu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a3ad0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a3ad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3ad4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a3ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3adc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3ADCu;
        // 0x2a3ae0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3AE4u;
}
