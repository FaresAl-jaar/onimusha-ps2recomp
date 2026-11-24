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

// Function: sub_00131FE0
// Address: 0x131fe0 - 0x132204
void sub_00131FE0_0x131fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131FE0_0x131fe0");
#endif

    switch (ctx->pc) {
        case 0x1321f0u: goto label_1321f0;
        default: break;
    }

    ctx->pc = 0x131fe0u;

    // 0x131fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131fe4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x131fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x131fe8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x131fec: 0x248202a0  addiu       $v0, $a0, 0x2A0
    ctx->pc = 0x131fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 672));
    // 0x131ff0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131ff4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131ff8: 0x9030cea4  lbu         $s0, -0x315C($at)
    ctx->pc = 0x131ff8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x131ffc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x131ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x132000: 0x702823  subu        $a1, $v1, $s0
    ctx->pc = 0x132000u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x132004: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x132004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x132008: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x132008u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13200c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13200cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x132010: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x132010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x132014: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x132014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x132018: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x132018u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13201c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x13201cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x132020: 0x704023  subu        $t0, $v1, $s0
    ctx->pc = 0x132020u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x132024: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x132024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x132028: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x132028u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x13202c: 0x3c0b006b  lui         $t3, 0x6B
    ctx->pc = 0x13202cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)107 << 16));
    // 0x132030: 0xe84023  subu        $t0, $a3, $t0
    ctx->pc = 0x132030u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x132034: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x132034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x132038: 0x703823  subu        $a3, $v1, $s0
    ctx->pc = 0x132038u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13203c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x13203cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x132040: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x132040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x132044: 0x24980320  addiu       $t8, $a0, 0x320
    ctx->pc = 0x132044u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
    // 0x132048: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x132048u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13204c: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x13204cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x132050: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x132050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x132054: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x132054u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x132058: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x132058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13205c: 0x883821  addu        $a3, $a0, $t0
    ctx->pc = 0x13205cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x132060: 0x246f00a0  addiu       $t7, $v1, 0xA0
    ctx->pc = 0x132060u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x132064: 0x24f90060  addiu       $t9, $a3, 0x60
    ctx->pc = 0x132064u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x132068: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x132068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x13206c: 0x248e03e0  addiu       $t6, $a0, 0x3E0
    ctx->pc = 0x13206cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 992));
    // 0x132070: 0x704023  subu        $t0, $v1, $s0
    ctx->pc = 0x132070u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x132074: 0x248c0420  addiu       $t4, $a0, 0x420
    ctx->pc = 0x132074u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 1056));
    // 0x132078: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x132078u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x13207c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x13207cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x132080: 0xe84023  subu        $t0, $a3, $t0
    ctx->pc = 0x132080u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x132084: 0x7ca60010  sq          $a2, 0x10($a1)
    ctx->pc = 0x132084u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 6));
    // 0x132088: 0x703823  subu        $a3, $v1, $s0
    ctx->pc = 0x132088u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13208c: 0x78460020  lq          $a2, 0x20($v0)
    ctx->pc = 0x13208cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x132090: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x132090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x132094: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x132094u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x132098: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x132098u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13209c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x13209cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1320a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1320a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1320a4: 0x883821  addu        $a3, $a0, $t0
    ctx->pc = 0x1320a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1320a8: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1320a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1320ac: 0x24ed00e0  addiu       $t5, $a3, 0xE0
    ctx->pc = 0x1320acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 224));
    // 0x1320b0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1320b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1320b4: 0x248a02e0  addiu       $t2, $a0, 0x2E0
    ctx->pc = 0x1320b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
    // 0x1320b8: 0x704023  subu        $t0, $v1, $s0
    ctx->pc = 0x1320b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1320bc: 0x7ca60020  sq          $a2, 0x20($a1)
    ctx->pc = 0x1320bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 6));
    // 0x1320c0: 0x78460030  lq          $a2, 0x30($v0)
    ctx->pc = 0x1320c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1320c4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1320c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1320c8: 0x703823  subu        $a3, $v1, $s0
    ctx->pc = 0x1320c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1320cc: 0x256bf9b0  addiu       $t3, $t3, -0x650
    ctx->pc = 0x1320ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965680));
    // 0x1320d0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1320d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1320d4: 0x684023  subu        $t0, $v1, $t0
    ctx->pc = 0x1320d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1320d8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1320d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1320dc: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1320dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1320e0: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1320e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1320e4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1320e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1320e8: 0x508823  subu        $s1, $v0, $s0
    ctx->pc = 0x1320e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1320ec: 0xe44021  addu        $t0, $a3, $a0
    ctx->pc = 0x1320ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1320f0: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x1320f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1320f4: 0x7ca60030  sq          $a2, 0x30($a1)
    ctx->pc = 0x1320f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 6));
    // 0x1320f8: 0xf18823  subu        $s1, $a3, $s1
    ctx->pc = 0x1320f8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x1320fc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1320fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x132100: 0x503823  subu        $a3, $v0, $s0
    ctx->pc = 0x132100u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x132104: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x132104u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x132108: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x132108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x13210c: 0xd08023  subu        $s0, $a2, $s0
    ctx->pc = 0x13210cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x132110: 0x472823  subu        $a1, $v0, $a3
    ctx->pc = 0x132110u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x132114: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x132114u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x132118: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x132118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x13211c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x13211cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x132120: 0x7b110000  lq          $s1, 0x0($t8)
    ctx->pc = 0x132120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x132124: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x132124u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x132128: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x132128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13212c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13212cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x132130: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x132130u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x132134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x132134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x132138: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x132138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13213c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x13213cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x132140: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x132140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x132144: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x132144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132148: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x132148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13214c: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x13214cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x132150: 0x7f310000  sq          $s1, 0x0($t9)
    ctx->pc = 0x132150u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 17));
    // 0x132154: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x132154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x132158: 0x7b110010  lq          $s1, 0x10($t8)
    ctx->pc = 0x132158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x13215c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13215cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132160: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x132160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x132164: 0x7f310010  sq          $s1, 0x10($t9)
    ctx->pc = 0x132164u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 16), GPR_VEC(ctx, 17));
    // 0x132168: 0x7b110020  lq          $s1, 0x20($t8)
    ctx->pc = 0x132168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x13216c: 0x7f310020  sq          $s1, 0x20($t9)
    ctx->pc = 0x13216cu;
    WRITE128(ADD32(GPR_U32(ctx, 25), 32), GPR_VEC(ctx, 17));
    // 0x132170: 0x7b110030  lq          $s1, 0x30($t8)
    ctx->pc = 0x132170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 24), 48)));
    // 0x132174: 0x7f310030  sq          $s1, 0x30($t9)
    ctx->pc = 0x132174u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 48), GPR_VEC(ctx, 17));
    // 0x132178: 0x79d00000  lq          $s0, 0x0($t6)
    ctx->pc = 0x132178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x13217c: 0x7df00000  sq          $s0, 0x0($t7)
    ctx->pc = 0x13217cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 16));
    // 0x132180: 0x79d00010  lq          $s0, 0x10($t6)
    ctx->pc = 0x132180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x132184: 0x7df00010  sq          $s0, 0x10($t7)
    ctx->pc = 0x132184u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 16), GPR_VEC(ctx, 16));
    // 0x132188: 0x79d00020  lq          $s0, 0x20($t6)
    ctx->pc = 0x132188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 14), 32)));
    // 0x13218c: 0x7df00020  sq          $s0, 0x20($t7)
    ctx->pc = 0x13218cu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 32), GPR_VEC(ctx, 16));
    // 0x132190: 0x79d00030  lq          $s0, 0x30($t6)
    ctx->pc = 0x132190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 14), 48)));
    // 0x132194: 0x7df00030  sq          $s0, 0x30($t7)
    ctx->pc = 0x132194u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 48), GPR_VEC(ctx, 16));
    // 0x132198: 0x798e0000  lq          $t6, 0x0($t4)
    ctx->pc = 0x132198u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x13219c: 0x7dae0000  sq          $t6, 0x0($t5)
    ctx->pc = 0x13219cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 14));
    // 0x1321a0: 0x798e0010  lq          $t6, 0x10($t4)
    ctx->pc = 0x1321a0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x1321a4: 0x7dae0010  sq          $t6, 0x10($t5)
    ctx->pc = 0x1321a4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 16), GPR_VEC(ctx, 14));
    // 0x1321a8: 0x798e0020  lq          $t6, 0x20($t4)
    ctx->pc = 0x1321a8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x1321ac: 0x7dae0020  sq          $t6, 0x20($t5)
    ctx->pc = 0x1321acu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 32), GPR_VEC(ctx, 14));
    // 0x1321b0: 0x798e0030  lq          $t6, 0x30($t4)
    ctx->pc = 0x1321b0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1321b4: 0x7dae0030  sq          $t6, 0x30($t5)
    ctx->pc = 0x1321b4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 48), GPR_VEC(ctx, 14));
    // 0x1321b8: 0xe5220130  swc1        $f2, 0x130($t1)
    ctx->pc = 0x1321b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 304), bits); }
    // 0x1321bc: 0xe5010134  swc1        $f1, 0x134($t0)
    ctx->pc = 0x1321bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 308), bits); }
    // 0x1321c0: 0xe4600138  swc1        $f0, 0x138($v1)
    ctx->pc = 0x1321c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 312), bits); }
    // 0x1321c4: 0xc42092a8  lwc1        $f0, -0x6D58($at)
    ctx->pc = 0x1321c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294939304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1321c8: 0xe440013c  swc1        $f0, 0x13C($v0)
    ctx->pc = 0x1321c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 316), bits); }
    // 0x1321cc: 0x79420000  lq          $v0, 0x0($t2)
    ctx->pc = 0x1321ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1321d0: 0x7d620000  sq          $v0, 0x0($t3)
    ctx->pc = 0x1321d0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 2));
    // 0x1321d4: 0x79420010  lq          $v0, 0x10($t2)
    ctx->pc = 0x1321d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x1321d8: 0x7d620010  sq          $v0, 0x10($t3)
    ctx->pc = 0x1321d8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), GPR_VEC(ctx, 2));
    // 0x1321dc: 0x79420020  lq          $v0, 0x20($t2)
    ctx->pc = 0x1321dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x1321e0: 0x7d620020  sq          $v0, 0x20($t3)
    ctx->pc = 0x1321e0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 32), GPR_VEC(ctx, 2));
    // 0x1321e4: 0x79420030  lq          $v0, 0x30($t2)
    ctx->pc = 0x1321e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x1321e8: 0xc061c60  jal         func_187180
    ctx->pc = 0x1321E8u;
    SET_GPR_U32(ctx, 31, 0x1321F0u);
    ctx->pc = 0x1321ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1321E8u;
    // 0x1321ec: 0x7d620030  sq          $v0, 0x30($t3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 11), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x1321E8u, 0x1321F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1321F0u;
label_1321f0:
    // 0x1321f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1321f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1321f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1321f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1321f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1321f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1321fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1321FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1321FCu;
        // 0x132200: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1321FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132204u;
}
