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

// Function: sub_001F3100
// Address: 0x1f3100 - 0x1f32dc
void sub_001F3100_0x1f3100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3100_0x1f3100");
#endif

    switch (ctx->pc) {
        case 0x1f3108u: goto label_1f3108;
        case 0x1f3238u: goto label_1f3238;
        default: break;
    }

    ctx->pc = 0x1f3100u;

    // 0x1f3100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3104: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f3104u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f3108:
    // 0x1f3108: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1f3108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f310c: 0x24ad0001  addiu       $t5, $a1, 0x1
    ctx->pc = 0x1f310cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f3110: 0x24ac0002  addiu       $t4, $a1, 0x2
    ctx->pc = 0x1f3110u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1f3114: 0x24ab0003  addiu       $t3, $a1, 0x3
    ctx->pc = 0x1f3114u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x1f3118: 0x24aa0004  addiu       $t2, $a1, 0x4
    ctx->pc = 0x1f3118u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f311c: 0x24a90005  addiu       $t1, $a1, 0x5
    ctx->pc = 0x1f311cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x1f3120: 0x24a80006  addiu       $t0, $a1, 0x6
    ctx->pc = 0x1f3120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x1f3124: 0x24a70007  addiu       $a3, $a1, 0x7
    ctx->pc = 0x1f3124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x1f3128: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x1f3128u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1f312c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f312cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f3130: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x1f3130u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1f3134: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1f3134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f3138: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f3138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f313c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1f313cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1f3140: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1f3140u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1f3144: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f3144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1f3148: 0x28a60100  slti        $a2, $a1, 0x100
    ctx->pc = 0x1f3148u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1f314c: 0x8c6e000c  lw          $t6, 0xC($v1)
    ctx->pc = 0x1f314cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1f3150: 0xe7202  srl         $t6, $t6, 8
    ctx->pc = 0x1f3150u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x1f3154: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1f3154u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1f3158: 0xe7200  sll         $t6, $t6, 8
    ctx->pc = 0x1f3158u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
    // 0x1f315c: 0x1cd6821  addu        $t5, $t6, $t5
    ctx->pc = 0x1f315cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1f3160: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1f3160u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1f3164: 0xac6d000c  sw          $t5, 0xC($v1)
    ctx->pc = 0x1f3164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 13));
    // 0x1f3168: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1f3168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1f316c: 0x8c6d0014  lw          $t5, 0x14($v1)
    ctx->pc = 0x1f316cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1f3170: 0xd6a02  srl         $t5, $t5, 8
    ctx->pc = 0x1f3170u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x1f3174: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1f3174u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1f3178: 0xd6a00  sll         $t5, $t5, 8
    ctx->pc = 0x1f3178u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x1f317c: 0x1ac6021  addu        $t4, $t5, $t4
    ctx->pc = 0x1f317cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1f3180: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1f3180u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1f3184: 0xac6c0014  sw          $t4, 0x14($v1)
    ctx->pc = 0x1f3184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 12));
    // 0x1f3188: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1f3188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1f318c: 0x8c6c001c  lw          $t4, 0x1C($v1)
    ctx->pc = 0x1f318cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1f3190: 0xc6202  srl         $t4, $t4, 8
    ctx->pc = 0x1f3190u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 8));
    // 0x1f3194: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1f3194u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1f3198: 0xc6200  sll         $t4, $t4, 8
    ctx->pc = 0x1f3198u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x1f319c: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x1f319cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x1f31a0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1f31a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1f31a4: 0xac6b001c  sw          $t3, 0x1C($v1)
    ctx->pc = 0x1f31a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 11));
    // 0x1f31a8: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1f31a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1f31ac: 0x8c6b0024  lw          $t3, 0x24($v1)
    ctx->pc = 0x1f31acu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1f31b0: 0xb5a02  srl         $t3, $t3, 8
    ctx->pc = 0x1f31b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x1f31b4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1f31b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1f31b8: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x1f31b8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x1f31bc: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1f31bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1f31c0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f31c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f31c4: 0xac6a0024  sw          $t2, 0x24($v1)
    ctx->pc = 0x1f31c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 10));
    // 0x1f31c8: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x1f31c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x1f31cc: 0x8c6a002c  lw          $t2, 0x2C($v1)
    ctx->pc = 0x1f31ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1f31d0: 0xa5202  srl         $t2, $t2, 8
    ctx->pc = 0x1f31d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x1f31d4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1f31d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1f31d8: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1f31d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1f31dc: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1f31dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1f31e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f31e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1f31e4: 0xac69002c  sw          $t1, 0x2C($v1)
    ctx->pc = 0x1f31e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 9));
    // 0x1f31e8: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x1f31e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x1f31ec: 0x8c690034  lw          $t1, 0x34($v1)
    ctx->pc = 0x1f31ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1f31f0: 0x94a02  srl         $t1, $t1, 8
    ctx->pc = 0x1f31f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x1f31f4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f31f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1f31f8: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1f31f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1f31fc: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x1f31fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1f3200: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f3200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f3204: 0xac680034  sw          $t0, 0x34($v1)
    ctx->pc = 0x1f3204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 8));
    // 0x1f3208: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x1f3208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x1f320c: 0x8c68003c  lw          $t0, 0x3C($v1)
    ctx->pc = 0x1f320cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1f3210: 0x84202  srl         $t0, $t0, 8
    ctx->pc = 0x1f3210u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1f3214: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f3214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f3218: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1f3218u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1f321c: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x1f321cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1f3220: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f3220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f3224: 0xac67003c  sw          $a3, 0x3C($v1)
    ctx->pc = 0x1f3224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 7));
    // 0x1f3228: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1f3228u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1f322c: 0x14c0ffb6  bnez        $a2, . + 4 + (-0x4A << 2)
    ctx->pc = 0x1F322Cu;
    {
        const bool branch_taken_0x1f322c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F322Cu;
        // 0x1f3230: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f322c) {
            ctx->pc = 0x1F3108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3108;
        }
    }
    ctx->pc = 0x1F3234u;
    // 0x1f3234: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f3234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3238:
    // 0x1f3238: 0x882821  addu        $a1, $a0, $t0
    ctx->pc = 0x1f3238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1f323c: 0xa0a80800  sb          $t0, 0x800($a1)
    ctx->pc = 0x1f323cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2048), (uint8_t)GPR_U32(ctx, 8));
    // 0x1f3240: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x1f3240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f3244: 0xa0a30801  sb          $v1, 0x801($a1)
    ctx->pc = 0x1f3244u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2049), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3248: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x1f3248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1f324c: 0xa0a30802  sb          $v1, 0x802($a1)
    ctx->pc = 0x1f324cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2050), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3250: 0x25030003  addiu       $v1, $t0, 0x3
    ctx->pc = 0x1f3250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x1f3254: 0xa0a30803  sb          $v1, 0x803($a1)
    ctx->pc = 0x1f3254u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2051), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3258: 0x25030004  addiu       $v1, $t0, 0x4
    ctx->pc = 0x1f3258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1f325c: 0xa0a30804  sb          $v1, 0x804($a1)
    ctx->pc = 0x1f325cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2052), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3260: 0x25030005  addiu       $v1, $t0, 0x5
    ctx->pc = 0x1f3260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1f3264: 0xa0a30805  sb          $v1, 0x805($a1)
    ctx->pc = 0x1f3264u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2053), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3268: 0x25030006  addiu       $v1, $t0, 0x6
    ctx->pc = 0x1f3268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x1f326c: 0xa0a30806  sb          $v1, 0x806($a1)
    ctx->pc = 0x1f326cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2054), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3270: 0x25030007  addiu       $v1, $t0, 0x7
    ctx->pc = 0x1f3270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x1f3274: 0xa0a30807  sb          $v1, 0x807($a1)
    ctx->pc = 0x1f3274u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2055), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3278: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1f3278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1f327c: 0x290300f7  slti        $v1, $t0, 0xF7
    ctx->pc = 0x1f327cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)247) ? 1 : 0);
    // 0x1f3280: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1F3280u;
    {
        const bool branch_taken_0x1f3280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3280u;
        // 0x1f3284: 0x1041821  addu        $v1, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3280) {
            ctx->pc = 0x1F3238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f3238;
        }
    }
    ctx->pc = 0x1F3288u;
    // 0x1f3288: 0x25050001  addiu       $a1, $t0, 0x1
    ctx->pc = 0x1f3288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1f328c: 0xa0680800  sb          $t0, 0x800($v1)
    ctx->pc = 0x1f328cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2048), (uint8_t)GPR_U32(ctx, 8));
    // 0x1f3290: 0x25060002  addiu       $a2, $t0, 0x2
    ctx->pc = 0x1f3290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1f3294: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1f3294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f3298: 0x25070005  addiu       $a3, $t0, 0x5
    ctx->pc = 0x1f3298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1f329c: 0xa0650800  sb          $a1, 0x800($v1)
    ctx->pc = 0x1f329cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2048), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f32a0: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x1f32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1f32a4: 0x25050003  addiu       $a1, $t0, 0x3
    ctx->pc = 0x1f32a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x1f32a8: 0xa0660800  sb          $a2, 0x800($v1)
    ctx->pc = 0x1f32a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2048), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f32ac: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1f32acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f32b0: 0xe43021  addu        $a2, $a3, $a0
    ctx->pc = 0x1f32b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1f32b4: 0xa0650800  sb          $a1, 0x800($v1)
    ctx->pc = 0x1f32b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2048), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f32b8: 0x25050004  addiu       $a1, $t0, 0x4
    ctx->pc = 0x1f32b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1f32bc: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1f32bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f32c0: 0xa0650800  sb          $a1, 0x800($v1)
    ctx->pc = 0x1f32c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2048), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f32c4: 0x25050006  addiu       $a1, $t0, 0x6
    ctx->pc = 0x1f32c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x1f32c8: 0xa0c70800  sb          $a3, 0x800($a2)
    ctx->pc = 0x1f32c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2048), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f32cc: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1f32ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f32d0: 0xa0650800  sb          $a1, 0x800($v1)
    ctx->pc = 0x1f32d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2048), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f32d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F32D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F32D4u;
        // 0x1f32d8: 0xa08008ff  sb          $zero, 0x8FF($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2303), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F32D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F32DCu;
}
