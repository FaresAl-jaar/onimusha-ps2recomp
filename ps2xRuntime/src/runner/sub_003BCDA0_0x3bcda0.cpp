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

// Function: sub_003BCDA0
// Address: 0x3bcda0 - 0x3bd10c
void sub_003BCDA0_0x3bcda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCDA0_0x3bcda0");
#endif

    switch (ctx->pc) {
        case 0x3bcda0u: goto label_3bcda0;
        case 0x3bcda4u: goto label_3bcda4;
        case 0x3bcda8u: goto label_3bcda8;
        case 0x3bcdacu: goto label_3bcdac;
        case 0x3bcdb0u: goto label_3bcdb0;
        case 0x3bcdb4u: goto label_3bcdb4;
        case 0x3bcdb8u: goto label_3bcdb8;
        case 0x3bcdbcu: goto label_3bcdbc;
        case 0x3bcdc0u: goto label_3bcdc0;
        case 0x3bcdc4u: goto label_3bcdc4;
        case 0x3bcdc8u: goto label_3bcdc8;
        case 0x3bcdccu: goto label_3bcdcc;
        case 0x3bcdd0u: goto label_3bcdd0;
        case 0x3bcdd4u: goto label_3bcdd4;
        case 0x3bcdd8u: goto label_3bcdd8;
        case 0x3bcddcu: goto label_3bcddc;
        case 0x3bcde0u: goto label_3bcde0;
        case 0x3bcde4u: goto label_3bcde4;
        case 0x3bcde8u: goto label_3bcde8;
        case 0x3bcdecu: goto label_3bcdec;
        case 0x3bcdf0u: goto label_3bcdf0;
        case 0x3bcdf4u: goto label_3bcdf4;
        case 0x3bcdf8u: goto label_3bcdf8;
        case 0x3bcdfcu: goto label_3bcdfc;
        case 0x3bce00u: goto label_3bce00;
        case 0x3bce04u: goto label_3bce04;
        case 0x3bce08u: goto label_3bce08;
        case 0x3bce0cu: goto label_3bce0c;
        case 0x3bce10u: goto label_3bce10;
        case 0x3bce14u: goto label_3bce14;
        case 0x3bce18u: goto label_3bce18;
        case 0x3bce1cu: goto label_3bce1c;
        case 0x3bce20u: goto label_3bce20;
        case 0x3bce24u: goto label_3bce24;
        case 0x3bce28u: goto label_3bce28;
        case 0x3bce2cu: goto label_3bce2c;
        case 0x3bce30u: goto label_3bce30;
        case 0x3bce34u: goto label_3bce34;
        case 0x3bce38u: goto label_3bce38;
        case 0x3bce3cu: goto label_3bce3c;
        case 0x3bce40u: goto label_3bce40;
        case 0x3bce44u: goto label_3bce44;
        case 0x3bce48u: goto label_3bce48;
        case 0x3bce4cu: goto label_3bce4c;
        case 0x3bce50u: goto label_3bce50;
        case 0x3bce54u: goto label_3bce54;
        case 0x3bce58u: goto label_3bce58;
        case 0x3bce5cu: goto label_3bce5c;
        case 0x3bce60u: goto label_3bce60;
        case 0x3bce64u: goto label_3bce64;
        case 0x3bce68u: goto label_3bce68;
        case 0x3bce6cu: goto label_3bce6c;
        case 0x3bce70u: goto label_3bce70;
        case 0x3bce74u: goto label_3bce74;
        case 0x3bce78u: goto label_3bce78;
        case 0x3bce7cu: goto label_3bce7c;
        case 0x3bce80u: goto label_3bce80;
        case 0x3bce84u: goto label_3bce84;
        case 0x3bce88u: goto label_3bce88;
        case 0x3bce8cu: goto label_3bce8c;
        case 0x3bce90u: goto label_3bce90;
        case 0x3bce94u: goto label_3bce94;
        case 0x3bce98u: goto label_3bce98;
        case 0x3bce9cu: goto label_3bce9c;
        case 0x3bcea0u: goto label_3bcea0;
        case 0x3bcea4u: goto label_3bcea4;
        case 0x3bcea8u: goto label_3bcea8;
        case 0x3bceacu: goto label_3bceac;
        case 0x3bceb0u: goto label_3bceb0;
        case 0x3bceb4u: goto label_3bceb4;
        case 0x3bceb8u: goto label_3bceb8;
        case 0x3bcebcu: goto label_3bcebc;
        case 0x3bcec0u: goto label_3bcec0;
        case 0x3bcec4u: goto label_3bcec4;
        case 0x3bcec8u: goto label_3bcec8;
        case 0x3bceccu: goto label_3bcecc;
        case 0x3bced0u: goto label_3bced0;
        case 0x3bced4u: goto label_3bced4;
        case 0x3bced8u: goto label_3bced8;
        case 0x3bcedcu: goto label_3bcedc;
        case 0x3bcee0u: goto label_3bcee0;
        case 0x3bcee4u: goto label_3bcee4;
        case 0x3bcee8u: goto label_3bcee8;
        case 0x3bceecu: goto label_3bceec;
        case 0x3bcef0u: goto label_3bcef0;
        case 0x3bcef4u: goto label_3bcef4;
        case 0x3bcef8u: goto label_3bcef8;
        case 0x3bcefcu: goto label_3bcefc;
        case 0x3bcf00u: goto label_3bcf00;
        case 0x3bcf04u: goto label_3bcf04;
        case 0x3bcf08u: goto label_3bcf08;
        case 0x3bcf0cu: goto label_3bcf0c;
        case 0x3bcf10u: goto label_3bcf10;
        case 0x3bcf14u: goto label_3bcf14;
        case 0x3bcf18u: goto label_3bcf18;
        case 0x3bcf1cu: goto label_3bcf1c;
        case 0x3bcf20u: goto label_3bcf20;
        case 0x3bcf24u: goto label_3bcf24;
        case 0x3bcf28u: goto label_3bcf28;
        case 0x3bcf2cu: goto label_3bcf2c;
        case 0x3bcf30u: goto label_3bcf30;
        case 0x3bcf34u: goto label_3bcf34;
        case 0x3bcf38u: goto label_3bcf38;
        case 0x3bcf3cu: goto label_3bcf3c;
        case 0x3bcf40u: goto label_3bcf40;
        case 0x3bcf44u: goto label_3bcf44;
        case 0x3bcf48u: goto label_3bcf48;
        case 0x3bcf4cu: goto label_3bcf4c;
        case 0x3bcf50u: goto label_3bcf50;
        case 0x3bcf54u: goto label_3bcf54;
        case 0x3bcf58u: goto label_3bcf58;
        case 0x3bcf5cu: goto label_3bcf5c;
        case 0x3bcf60u: goto label_3bcf60;
        case 0x3bcf64u: goto label_3bcf64;
        case 0x3bcf68u: goto label_3bcf68;
        case 0x3bcf6cu: goto label_3bcf6c;
        case 0x3bcf70u: goto label_3bcf70;
        case 0x3bcf74u: goto label_3bcf74;
        case 0x3bcf78u: goto label_3bcf78;
        case 0x3bcf7cu: goto label_3bcf7c;
        case 0x3bcf80u: goto label_3bcf80;
        case 0x3bcf84u: goto label_3bcf84;
        case 0x3bcf88u: goto label_3bcf88;
        case 0x3bcf8cu: goto label_3bcf8c;
        case 0x3bcf90u: goto label_3bcf90;
        case 0x3bcf94u: goto label_3bcf94;
        case 0x3bcf98u: goto label_3bcf98;
        case 0x3bcf9cu: goto label_3bcf9c;
        case 0x3bcfa0u: goto label_3bcfa0;
        case 0x3bcfa4u: goto label_3bcfa4;
        case 0x3bcfa8u: goto label_3bcfa8;
        case 0x3bcfacu: goto label_3bcfac;
        case 0x3bcfb0u: goto label_3bcfb0;
        case 0x3bcfb4u: goto label_3bcfb4;
        case 0x3bcfb8u: goto label_3bcfb8;
        case 0x3bcfbcu: goto label_3bcfbc;
        case 0x3bcfc0u: goto label_3bcfc0;
        case 0x3bcfc4u: goto label_3bcfc4;
        case 0x3bcfc8u: goto label_3bcfc8;
        case 0x3bcfccu: goto label_3bcfcc;
        case 0x3bcfd0u: goto label_3bcfd0;
        case 0x3bcfd4u: goto label_3bcfd4;
        case 0x3bcfd8u: goto label_3bcfd8;
        case 0x3bcfdcu: goto label_3bcfdc;
        case 0x3bcfe0u: goto label_3bcfe0;
        case 0x3bcfe4u: goto label_3bcfe4;
        case 0x3bcfe8u: goto label_3bcfe8;
        case 0x3bcfecu: goto label_3bcfec;
        case 0x3bcff0u: goto label_3bcff0;
        case 0x3bcff4u: goto label_3bcff4;
        case 0x3bcff8u: goto label_3bcff8;
        case 0x3bcffcu: goto label_3bcffc;
        case 0x3bd000u: goto label_3bd000;
        case 0x3bd004u: goto label_3bd004;
        case 0x3bd008u: goto label_3bd008;
        case 0x3bd00cu: goto label_3bd00c;
        case 0x3bd010u: goto label_3bd010;
        case 0x3bd014u: goto label_3bd014;
        case 0x3bd018u: goto label_3bd018;
        case 0x3bd01cu: goto label_3bd01c;
        case 0x3bd020u: goto label_3bd020;
        case 0x3bd024u: goto label_3bd024;
        case 0x3bd028u: goto label_3bd028;
        case 0x3bd02cu: goto label_3bd02c;
        case 0x3bd030u: goto label_3bd030;
        case 0x3bd034u: goto label_3bd034;
        case 0x3bd038u: goto label_3bd038;
        case 0x3bd03cu: goto label_3bd03c;
        case 0x3bd040u: goto label_3bd040;
        case 0x3bd044u: goto label_3bd044;
        case 0x3bd048u: goto label_3bd048;
        case 0x3bd04cu: goto label_3bd04c;
        case 0x3bd050u: goto label_3bd050;
        case 0x3bd054u: goto label_3bd054;
        case 0x3bd058u: goto label_3bd058;
        case 0x3bd05cu: goto label_3bd05c;
        case 0x3bd060u: goto label_3bd060;
        case 0x3bd064u: goto label_3bd064;
        case 0x3bd068u: goto label_3bd068;
        case 0x3bd06cu: goto label_3bd06c;
        case 0x3bd070u: goto label_3bd070;
        case 0x3bd074u: goto label_3bd074;
        case 0x3bd078u: goto label_3bd078;
        case 0x3bd07cu: goto label_3bd07c;
        case 0x3bd080u: goto label_3bd080;
        case 0x3bd084u: goto label_3bd084;
        case 0x3bd088u: goto label_3bd088;
        case 0x3bd08cu: goto label_3bd08c;
        case 0x3bd090u: goto label_3bd090;
        case 0x3bd094u: goto label_3bd094;
        case 0x3bd098u: goto label_3bd098;
        case 0x3bd09cu: goto label_3bd09c;
        case 0x3bd0a0u: goto label_3bd0a0;
        case 0x3bd0a4u: goto label_3bd0a4;
        case 0x3bd0a8u: goto label_3bd0a8;
        case 0x3bd0acu: goto label_3bd0ac;
        case 0x3bd0b0u: goto label_3bd0b0;
        case 0x3bd0b4u: goto label_3bd0b4;
        case 0x3bd0b8u: goto label_3bd0b8;
        case 0x3bd0bcu: goto label_3bd0bc;
        case 0x3bd0c0u: goto label_3bd0c0;
        case 0x3bd0c4u: goto label_3bd0c4;
        case 0x3bd0c8u: goto label_3bd0c8;
        case 0x3bd0ccu: goto label_3bd0cc;
        case 0x3bd0d0u: goto label_3bd0d0;
        case 0x3bd0d4u: goto label_3bd0d4;
        case 0x3bd0d8u: goto label_3bd0d8;
        case 0x3bd0dcu: goto label_3bd0dc;
        case 0x3bd0e0u: goto label_3bd0e0;
        case 0x3bd0e4u: goto label_3bd0e4;
        case 0x3bd0e8u: goto label_3bd0e8;
        case 0x3bd0ecu: goto label_3bd0ec;
        case 0x3bd0f0u: goto label_3bd0f0;
        case 0x3bd0f4u: goto label_3bd0f4;
        case 0x3bd0f8u: goto label_3bd0f8;
        case 0x3bd0fcu: goto label_3bd0fc;
        case 0x3bd100u: goto label_3bd100;
        case 0x3bd104u: goto label_3bd104;
        case 0x3bd108u: goto label_3bd108;
        default: break;
    }

    ctx->pc = 0x3bcda0u;

label_3bcda0:
    // 0x3bcda0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bcda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3bcda4:
    // 0x3bcda4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3bcda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3bcda8:
    // 0x3bcda8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bcda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3bcdac:
    // 0x3bcdac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bcdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3bcdb0:
    // 0x3bcdb0: 0x8c90085c  lw          $s0, 0x85C($a0)
    ctx->pc = 0x3bcdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2140)));
label_3bcdb4:
    // 0x3bcdb4: 0x120000d0  beqz        $s0, . + 4 + (0xD0 << 2)
label_3bcdb8:
    if (ctx->pc == 0x3BCDB8u) {
        ctx->pc = 0x3BCDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCDB4u;
        // 0x3bcdb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCDBCu;
        goto label_3bcdbc;
    }
    ctx->pc = 0x3BCDB4u;
    {
        const bool branch_taken_0x3bcdb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCDB4u;
        // 0x3bcdb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcdb4) {
            ctx->pc = 0x3BD0F8u;
            goto label_3bd0f8;
        }
    }
    ctx->pc = 0x3BCDBCu;
label_3bcdbc:
    // 0x3bcdbc: 0x92252b84  lbu         $a1, 0x2B84($s1)
    ctx->pc = 0x3bcdbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11140)));
label_3bcdc0:
    // 0x3bcdc0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3bcdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bcdc4:
    // 0x3bcdc4: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
label_3bcdc8:
    if (ctx->pc == 0x3BCDC8u) {
        ctx->pc = 0x3BCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCDC4u;
        // 0x3bcdc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCDCCu;
        goto label_3bcdcc;
    }
    ctx->pc = 0x3BCDC4u;
    {
        const bool branch_taken_0x3bcdc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3BCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCDC4u;
        // 0x3bcdc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcdc4) {
            ctx->pc = 0x3BCE08u;
            goto label_3bce08;
        }
    }
    ctx->pc = 0x3BCDCCu;
label_3bcdcc:
    // 0x3bcdcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bcdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bcdd0:
    // 0x3bcdd0: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_3bcdd4:
    if (ctx->pc == 0x3BCDD4u) {
        ctx->pc = 0x3BCDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCDD0u;
        // 0x3bcdd4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCDD8u;
        goto label_3bcdd8;
    }
    ctx->pc = 0x3BCDD0u;
    {
        const bool branch_taken_0x3bcdd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BCDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCDD0u;
        // 0x3bcdd4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcdd0) {
            ctx->pc = 0x3BCDF0u;
            goto label_3bcdf0;
        }
    }
    ctx->pc = 0x3BCDD8u;
label_3bcdd8:
    // 0x3bcdd8: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
label_3bcddc:
    if (ctx->pc == 0x3BCDDCu) {
        ctx->pc = 0x3BCDE0u;
        goto label_3bcde0;
    }
    ctx->pc = 0x3BCDD8u;
    {
        const bool branch_taken_0x3bcdd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bcdd8) {
            ctx->pc = 0x3BCE20u;
            goto label_3bce20;
        }
    }
    ctx->pc = 0x3BCDE0u;
label_3bcde0:
    // 0x3bcde0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_3bcde4:
    if (ctx->pc == 0x3BCDE4u) {
        ctx->pc = 0x3BCDE8u;
        goto label_3bcde8;
    }
    ctx->pc = 0x3BCDE0u;
    {
        const bool branch_taken_0x3bcde0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bcde0) {
            ctx->pc = 0x3BCE20u;
            goto label_3bce20;
        }
    }
    ctx->pc = 0x3BCDE8u;
label_3bcde8:
    // 0x3bcde8: 0x1000000d  b           . + 4 + (0xD << 2)
label_3bcdec:
    if (ctx->pc == 0x3BCDECu) {
        ctx->pc = 0x3BCDF0u;
        goto label_3bcdf0;
    }
    ctx->pc = 0x3BCDE8u;
    {
        const bool branch_taken_0x3bcde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bcde8) {
            ctx->pc = 0x3BCE20u;
            goto label_3bce20;
        }
    }
    ctx->pc = 0x3BCDF0u;
label_3bcdf0:
    // 0x3bcdf0: 0x92030508  lbu         $v1, 0x508($s0)
    ctx->pc = 0x3bcdf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1288)));
label_3bcdf4:
    // 0x3bcdf4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_3bcdf8:
    if (ctx->pc == 0x3BCDF8u) {
        ctx->pc = 0x3BCDFCu;
        goto label_3bcdfc;
    }
    ctx->pc = 0x3BCDF4u;
    {
        const bool branch_taken_0x3bcdf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bcdf4) {
            ctx->pc = 0x3BCE20u;
            goto label_3bce20;
        }
    }
    ctx->pc = 0x3BCDFCu;
label_3bcdfc:
    // 0x3bcdfc: 0xa2202b84  sb          $zero, 0x2B84($s1)
    ctx->pc = 0x3bcdfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11140), (uint8_t)GPR_U32(ctx, 0));
label_3bce00:
    // 0x3bce00: 0x10000007  b           . + 4 + (0x7 << 2)
label_3bce04:
    if (ctx->pc == 0x3BCE04u) {
        ctx->pc = 0x3BCE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCE00u;
        // 0x3bce04: 0x64060003  daddiu      $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCE08u;
        goto label_3bce08;
    }
    ctx->pc = 0x3BCE00u;
    {
        const bool branch_taken_0x3bce00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCE00u;
        // 0x3bce04: 0x64060003  daddiu      $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bce00) {
            ctx->pc = 0x3BCE20u;
            goto label_3bce20;
        }
    }
    ctx->pc = 0x3BCE08u;
label_3bce08:
    // 0x3bce08: 0x92030508  lbu         $v1, 0x508($s0)
    ctx->pc = 0x3bce08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1288)));
label_3bce0c:
    // 0x3bce0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3bce10:
    if (ctx->pc == 0x3BCE10u) {
        ctx->pc = 0x3BCE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCE0Cu;
        // 0x3bce10: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCE14u;
        goto label_3bce14;
    }
    ctx->pc = 0x3BCE0Cu;
    {
        const bool branch_taken_0x3bce0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCE0Cu;
        // 0x3bce10: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bce0c) {
            ctx->pc = 0x3BCE20u;
            goto label_3bce20;
        }
    }
    ctx->pc = 0x3BCE14u;
label_3bce14:
    // 0x3bce14: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x3bce14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3bce18:
    // 0x3bce18: 0xa2232b84  sb          $v1, 0x2B84($s1)
    ctx->pc = 0x3bce18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11140), (uint8_t)GPR_U32(ctx, 3));
label_3bce1c:
    // 0x3bce1c: 0x0  nop
    ctx->pc = 0x3bce1cu;
    // NOP
label_3bce20:
    // 0x3bce20: 0x92242b83  lbu         $a0, 0x2B83($s1)
    ctx->pc = 0x3bce20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11139)));
label_3bce24:
    // 0x3bce24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3bce24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3bce28:
    // 0x3bce28: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
label_3bce2c:
    if (ctx->pc == 0x3BCE2Cu) {
        ctx->pc = 0x3BCE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCE28u;
        // 0x3bce2c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCE30u;
        goto label_3bce30;
    }
    ctx->pc = 0x3BCE28u;
    {
        const bool branch_taken_0x3bce28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BCE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCE28u;
        // 0x3bce2c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bce28) {
            ctx->pc = 0x3BCF40u;
            goto label_3bcf40;
        }
    }
    ctx->pc = 0x3BCE30u;
label_3bce30:
    // 0x3bce30: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
label_3bce34:
    if (ctx->pc == 0x3BCE34u) {
        ctx->pc = 0x3BCE38u;
        goto label_3bce38;
    }
    ctx->pc = 0x3BCE30u;
    {
        const bool branch_taken_0x3bce30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bce30) {
            ctx->pc = 0x3BCF30u;
            goto label_3bcf30;
        }
    }
    ctx->pc = 0x3BCE38u;
label_3bce38:
    // 0x3bce38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3bce38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bce3c:
    // 0x3bce3c: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_3bce40:
    if (ctx->pc == 0x3BCE40u) {
        ctx->pc = 0x3BCE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCE3Cu;
        // 0x3bce40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCE44u;
        goto label_3bce44;
    }
    ctx->pc = 0x3BCE3Cu;
    {
        const bool branch_taken_0x3bce3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BCE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCE3Cu;
        // 0x3bce40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bce3c) {
            ctx->pc = 0x3BCEC8u;
            goto label_3bcec8;
        }
    }
    ctx->pc = 0x3BCE44u;
label_3bce44:
    // 0x3bce44: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_3bce48:
    if (ctx->pc == 0x3BCE48u) {
        ctx->pc = 0x3BCE4Cu;
        goto label_3bce4c;
    }
    ctx->pc = 0x3BCE44u;
    {
        const bool branch_taken_0x3bce44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bce44) {
            ctx->pc = 0x3BCE60u;
            goto label_3bce60;
        }
    }
    ctx->pc = 0x3BCE4Cu;
label_3bce4c:
    // 0x3bce4c: 0x10800040  beqz        $a0, . + 4 + (0x40 << 2)
label_3bce50:
    if (ctx->pc == 0x3BCE50u) {
        ctx->pc = 0x3BCE54u;
        goto label_3bce54;
    }
    ctx->pc = 0x3BCE4Cu;
    {
        const bool branch_taken_0x3bce4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bce4c) {
            ctx->pc = 0x3BCF50u;
            goto label_3bcf50;
        }
    }
    ctx->pc = 0x3BCE54u;
label_3bce54:
    // 0x3bce54: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3bce58:
    if (ctx->pc == 0x3BCE58u) {
        ctx->pc = 0x3BCE5Cu;
        goto label_3bce5c;
    }
    ctx->pc = 0x3BCE54u;
    {
        const bool branch_taken_0x3bce54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bce54) {
            ctx->pc = 0x3BCF50u;
            goto label_3bcf50;
        }
    }
    ctx->pc = 0x3BCE5Cu;
label_3bce5c:
    // 0x3bce5c: 0x0  nop
    ctx->pc = 0x3bce5cu;
    // NOP
label_3bce60:
    // 0x3bce60: 0x922308e8  lbu         $v1, 0x8E8($s1)
    ctx->pc = 0x3bce60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_3bce64:
    // 0x3bce64: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3bce64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_3bce68:
    // 0x3bce68: 0x3c021e00  lui         $v0, 0x1E00
    ctx->pc = 0x3bce68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7680 << 16));
label_3bce6c:
    // 0x3bce6c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3bce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_3bce70:
    // 0x3bce70: 0x34455102  ori         $a1, $v0, 0x5102
    ctx->pc = 0x3bce70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20738);
label_3bce74:
    // 0x3bce74: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3bce74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3bce78:
    // 0x3bce78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bce78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bce7c:
    // 0x3bce7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3bce7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bce80:
    // 0x3bce80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3bce80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bce84:
    // 0x3bce84: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3bce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_3bce88:
    // 0x3bce88: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3bce88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3bce8c:
    // 0x3bce8c: 0xc05e9e8  jal         func_17A7A0
label_3bce90:
    if (ctx->pc == 0x3BCE90u) {
        ctx->pc = 0x3BCE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCE8Cu;
        // 0x3bce90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCE94u;
        goto label_3bce94;
    }
    ctx->pc = 0x3BCE8Cu;
    SET_GPR_U32(ctx, 31, 0x3BCE94u);
    ctx->pc = 0x3BCE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCE8Cu;
    // 0x3bce90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3BCE8Cu, 0x3BCE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCE94u;
label_3bce94:
    // 0x3bce94: 0xa2000508  sb          $zero, 0x508($s0)
    ctx->pc = 0x3bce94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1288), (uint8_t)GPR_U32(ctx, 0));
label_3bce98:
    // 0x3bce98: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3bce98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3bce9c:
    // 0x3bce9c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3bce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3bcea0:
    // 0x3bcea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bcea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcea4:
    // 0x3bcea4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3bcea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3bcea8:
    // 0x3bcea8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3bcea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bceac:
    // 0x3bceac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3bceacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3bceb0:
    // 0x3bceb0: 0x320f809  jalr        $t9
label_3bceb4:
    if (ctx->pc == 0x3BCEB4u) {
        ctx->pc = 0x3BCEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEB0u;
        // 0x3bceb4: 0x34470040  ori         $a3, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCEB8u;
        goto label_3bceb8;
    }
    ctx->pc = 0x3BCEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BCEB8u);
        ctx->pc = 0x3BCEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEB0u;
        // 0x3bceb4: 0x34470040  ori         $a3, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCEB0u, 0x3BCEB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BCEB8u;
label_3bceb8:
    // 0x3bceb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bcebc:
    // 0x3bcebc: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x3bcebcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3bcec0:
    // 0x3bcec0: 0x10000023  b           . + 4 + (0x23 << 2)
label_3bcec4:
    if (ctx->pc == 0x3BCEC4u) {
        ctx->pc = 0x3BCEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEC0u;
        // 0x3bcec4: 0xa2232b84  sb          $v1, 0x2B84($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11140), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCEC8u;
        goto label_3bcec8;
    }
    ctx->pc = 0x3BCEC0u;
    {
        const bool branch_taken_0x3bcec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEC0u;
        // 0x3bcec4: 0xa2232b84  sb          $v1, 0x2B84($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11140), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcec0) {
            ctx->pc = 0x3BCF50u;
            goto label_3bcf50;
        }
    }
    ctx->pc = 0x3BCEC8u;
label_3bcec8:
    // 0x3bcec8: 0x922308e8  lbu         $v1, 0x8E8($s1)
    ctx->pc = 0x3bcec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_3bcecc:
    // 0x3bcecc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3bceccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_3bced0:
    // 0x3bced0: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x3bced0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
label_3bced4:
    // 0x3bced4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3bced4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_3bced8:
    // 0x3bced8: 0x34455102  ori         $a1, $v0, 0x5102
    ctx->pc = 0x3bced8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20738);
label_3bcedc:
    // 0x3bcedc: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3bcedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3bcee0:
    // 0x3bcee0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bcee0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcee4:
    // 0x3bcee4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3bcee4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcee8:
    // 0x3bcee8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3bcee8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bceec:
    // 0x3bceec: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3bceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_3bcef0:
    // 0x3bcef0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3bcef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3bcef4:
    // 0x3bcef4: 0xc05e9e8  jal         func_17A7A0
label_3bcef8:
    if (ctx->pc == 0x3BCEF8u) {
        ctx->pc = 0x3BCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCEF4u;
        // 0x3bcef8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCEFCu;
        goto label_3bcefc;
    }
    ctx->pc = 0x3BCEF4u;
    SET_GPR_U32(ctx, 31, 0x3BCEFCu);
    ctx->pc = 0x3BCEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCEF4u;
    // 0x3bcef8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3BCEF4u, 0x3BCEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCEFCu;
label_3bcefc:
    // 0x3bcefc: 0xa2000508  sb          $zero, 0x508($s0)
    ctx->pc = 0x3bcefcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1288), (uint8_t)GPR_U32(ctx, 0));
label_3bcf00:
    // 0x3bcf00: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3bcf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3bcf04:
    // 0x3bcf04: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3bcf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3bcf08:
    // 0x3bcf08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bcf08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcf0c:
    // 0x3bcf0c: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x3bcf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3bcf10:
    // 0x3bcf10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3bcf10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3bcf14:
    // 0x3bcf14: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3bcf14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3bcf18:
    // 0x3bcf18: 0x320f809  jalr        $t9
label_3bcf1c:
    if (ctx->pc == 0x3BCF1Cu) {
        ctx->pc = 0x3BCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF18u;
        // 0x3bcf1c: 0x34470040  ori         $a3, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCF20u;
        goto label_3bcf20;
    }
    ctx->pc = 0x3BCF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3BCF20u);
        ctx->pc = 0x3BCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF18u;
        // 0x3bcf1c: 0x34470040  ori         $a3, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCF18u, 0x3BCF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BCF20u;
label_3bcf20:
    // 0x3bcf20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3bcf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bcf24:
    // 0x3bcf24: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x3bcf24u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3bcf28:
    // 0x3bcf28: 0x10000009  b           . + 4 + (0x9 << 2)
label_3bcf2c:
    if (ctx->pc == 0x3BCF2Cu) {
        ctx->pc = 0x3BCF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF28u;
        // 0x3bcf2c: 0xa2232b84  sb          $v1, 0x2B84($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11140), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCF30u;
        goto label_3bcf30;
    }
    ctx->pc = 0x3BCF28u;
    {
        const bool branch_taken_0x3bcf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF28u;
        // 0x3bcf2c: 0xa2232b84  sb          $v1, 0x2B84($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11140), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcf28) {
            ctx->pc = 0x3BCF50u;
            goto label_3bcf50;
        }
    }
    ctx->pc = 0x3BCF30u;
label_3bcf30:
    // 0x3bcf30: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x3bcf30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3bcf34:
    // 0x3bcf34: 0x10000006  b           . + 4 + (0x6 << 2)
label_3bcf38:
    if (ctx->pc == 0x3BCF38u) {
        ctx->pc = 0x3BCF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF34u;
        // 0x3bcf38: 0xa2202b84  sb          $zero, 0x2B84($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCF3Cu;
        goto label_3bcf3c;
    }
    ctx->pc = 0x3BCF34u;
    {
        const bool branch_taken_0x3bcf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF34u;
        // 0x3bcf38: 0xa2202b84  sb          $zero, 0x2B84($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11140), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcf34) {
            ctx->pc = 0x3BCF50u;
            goto label_3bcf50;
        }
    }
    ctx->pc = 0x3BCF3Cu;
label_3bcf3c:
    // 0x3bcf3c: 0x0  nop
    ctx->pc = 0x3bcf3cu;
    // NOP
label_3bcf40:
    // 0x3bcf40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3bcf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3bcf44:
    // 0x3bcf44: 0x64060002  daddiu      $a2, $zero, 0x2
    ctx->pc = 0x3bcf44u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_3bcf48:
    // 0x3bcf48: 0xa2232b84  sb          $v1, 0x2B84($s1)
    ctx->pc = 0x3bcf48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11140), (uint8_t)GPR_U32(ctx, 3));
label_3bcf4c:
    // 0x3bcf4c: 0x0  nop
    ctx->pc = 0x3bcf4cu;
    // NOP
label_3bcf50:
    // 0x3bcf50: 0x10c00069  beqz        $a2, . + 4 + (0x69 << 2)
label_3bcf54:
    if (ctx->pc == 0x3BCF54u) {
        ctx->pc = 0x3BCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF50u;
        // 0x3bcf54: 0xa2202b83  sb          $zero, 0x2B83($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11139), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCF58u;
        goto label_3bcf58;
    }
    ctx->pc = 0x3BCF50u;
    {
        const bool branch_taken_0x3bcf50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF50u;
        // 0x3bcf54: 0xa2202b83  sb          $zero, 0x2B83($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11139), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcf50) {
            ctx->pc = 0x3BD0F8u;
            goto label_3bd0f8;
        }
    }
    ctx->pc = 0x3BCF58u;
label_3bcf58:
    // 0x3bcf58: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3bcf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3bcf5c:
    // 0x3bcf5c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x3bcf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3bcf60:
    // 0x3bcf60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3bcf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bcf64:
    // 0x3bcf64: 0x14650026  bne         $v1, $a1, . + 4 + (0x26 << 2)
label_3bcf68:
    if (ctx->pc == 0x3BCF68u) {
        ctx->pc = 0x3BCF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF64u;
        // 0x3bcf68: 0x8c84007c  lw          $a0, 0x7C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCF6Cu;
        goto label_3bcf6c;
    }
    ctx->pc = 0x3BCF64u;
    {
        const bool branch_taken_0x3bcf64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3BCF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCF64u;
        // 0x3bcf68: 0x8c84007c  lw          $a0, 0x7C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcf64) {
            ctx->pc = 0x3BD000u;
            goto label_3bd000;
        }
    }
    ctx->pc = 0x3BCF6Cu;
label_3bcf6c:
    // 0x3bcf6c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3bcf6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcf70:
    // 0x3bcf70: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3bcf70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bcf74:
    // 0x3bcf74: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x3bcf74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
label_3bcf78:
    // 0x3bcf78: 0x34a7ffff  ori         $a3, $a1, 0xFFFF
    ctx->pc = 0x3bcf78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_3bcf7c:
    // 0x3bcf7c: 0x0  nop
    ctx->pc = 0x3bcf7cu;
    // NOP
label_3bcf80:
    // 0x3bcf80: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x3bcf80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3bcf84:
    // 0x3bcf84: 0x25250006  addiu       $a1, $t1, 0x6
    ctx->pc = 0x3bcf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
label_3bcf88:
    // 0x3bcf88: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x3bcf88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3bcf8c:
    // 0x3bcf8c: 0x29210007  slti        $at, $t1, 0x7
    ctx->pc = 0x3bcf8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)7) ? 1 : 0);
label_3bcf90:
    // 0x3bcf90: 0xc72824  and         $a1, $a2, $a3
    ctx->pc = 0x3bcf90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
label_3bcf94:
    // 0x3bcf94: 0xad050004  sw          $a1, 0x4($t0)
    ctx->pc = 0x3bcf94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
label_3bcf98:
    // 0x3bcf98: 0x8d0501f4  lw          $a1, 0x1F4($t0)
    ctx->pc = 0x3bcf98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 500)));
label_3bcf9c:
    // 0x3bcf9c: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x3bcf9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
label_3bcfa0:
    // 0x3bcfa0: 0xad0501f4  sw          $a1, 0x1F4($t0)
    ctx->pc = 0x3bcfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 500), GPR_U32(ctx, 5));
label_3bcfa4:
    // 0x3bcfa4: 0x8d0503e4  lw          $a1, 0x3E4($t0)
    ctx->pc = 0x3bcfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 996)));
label_3bcfa8:
    // 0x3bcfa8: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x3bcfa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
label_3bcfac:
    // 0x3bcfac: 0xad0503e4  sw          $a1, 0x3E4($t0)
    ctx->pc = 0x3bcfacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 996), GPR_U32(ctx, 5));
label_3bcfb0:
    // 0x3bcfb0: 0x8d0505d4  lw          $a1, 0x5D4($t0)
    ctx->pc = 0x3bcfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1492)));
label_3bcfb4:
    // 0x3bcfb4: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x3bcfb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
label_3bcfb8:
    // 0x3bcfb8: 0xad0505d4  sw          $a1, 0x5D4($t0)
    ctx->pc = 0x3bcfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1492), GPR_U32(ctx, 5));
label_3bcfbc:
    // 0x3bcfbc: 0x8d0507c4  lw          $a1, 0x7C4($t0)
    ctx->pc = 0x3bcfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1988)));
label_3bcfc0:
    // 0x3bcfc0: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x3bcfc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
label_3bcfc4:
    // 0x3bcfc4: 0xad0507c4  sw          $a1, 0x7C4($t0)
    ctx->pc = 0x3bcfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1988), GPR_U32(ctx, 5));
label_3bcfc8:
    // 0x3bcfc8: 0x8d0509b4  lw          $a1, 0x9B4($t0)
    ctx->pc = 0x3bcfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2484)));
label_3bcfcc:
    // 0x3bcfcc: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x3bcfccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
label_3bcfd0:
    // 0x3bcfd0: 0xad0509b4  sw          $a1, 0x9B4($t0)
    ctx->pc = 0x3bcfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 2484), GPR_U32(ctx, 5));
label_3bcfd4:
    // 0x3bcfd4: 0x1420ffea  bnez        $at, . + 4 + (-0x16 << 2)
label_3bcfd8:
    if (ctx->pc == 0x3BCFD8u) {
        ctx->pc = 0x3BCFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFD4u;
        // 0x3bcfd8: 0x25080ba0  addiu       $t0, $t0, 0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCFDCu;
        goto label_3bcfdc;
    }
    ctx->pc = 0x3BCFD4u;
    {
        const bool branch_taken_0x3bcfd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BCFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFD4u;
        // 0x3bcfd8: 0x25080ba0  addiu       $t0, $t0, 0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcfd4) {
            ctx->pc = 0x3BCF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bcf80;
        }
    }
    ctx->pc = 0x3BCFDCu;
label_3bcfdc:
    // 0x3bcfdc: 0x92940  sll         $a1, $t1, 5
    ctx->pc = 0x3bcfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_3bcfe0:
    // 0x3bcfe0: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x3bcfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_3bcfe4:
    // 0x3bcfe4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3bcfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3bcfe8:
    // 0x3bcfe8: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x3bcfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3bcfec:
    // 0x3bcfec: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x3bcfecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3bcff0:
    // 0x3bcff0: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x3bcff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
label_3bcff4:
    // 0x3bcff4: 0x10000024  b           . + 4 + (0x24 << 2)
label_3bcff8:
    if (ctx->pc == 0x3BCFF8u) {
        ctx->pc = 0x3BCFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFF4u;
        // 0x3bcff8: 0xacc50004  sw          $a1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BCFFCu;
        goto label_3bcffc;
    }
    ctx->pc = 0x3BCFF4u;
    {
        const bool branch_taken_0x3bcff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCFF4u;
        // 0x3bcff8: 0xacc50004  sw          $a1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcff4) {
            ctx->pc = 0x3BD088u;
            goto label_3bd088;
        }
    }
    ctx->pc = 0x3BCFFCu;
label_3bcffc:
    // 0x3bcffc: 0x0  nop
    ctx->pc = 0x3bcffcu;
    // NOP
label_3bd000:
    // 0x3bd000: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3bd000u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bd004:
    // 0x3bd004: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3bd004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bd008:
    // 0x3bd008: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x3bd008u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
label_3bd00c:
    // 0x3bd00c: 0x0  nop
    ctx->pc = 0x3bd00cu;
    // NOP
label_3bd010:
    // 0x3bd010: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x3bd010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3bd014:
    // 0x3bd014: 0x25250006  addiu       $a1, $t1, 0x6
    ctx->pc = 0x3bd014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 6));
label_3bd018:
    // 0x3bd018: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x3bd018u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3bd01c:
    // 0x3bd01c: 0x29210007  slti        $at, $t1, 0x7
    ctx->pc = 0x3bd01cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)7) ? 1 : 0);
label_3bd020:
    // 0x3bd020: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x3bd020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_3bd024:
    // 0x3bd024: 0xad050004  sw          $a1, 0x4($t0)
    ctx->pc = 0x3bd024u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
label_3bd028:
    // 0x3bd028: 0x8d0501f4  lw          $a1, 0x1F4($t0)
    ctx->pc = 0x3bd028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 500)));
label_3bd02c:
    // 0x3bd02c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x3bd02cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_3bd030:
    // 0x3bd030: 0xad0501f4  sw          $a1, 0x1F4($t0)
    ctx->pc = 0x3bd030u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 500), GPR_U32(ctx, 5));
label_3bd034:
    // 0x3bd034: 0x8d0503e4  lw          $a1, 0x3E4($t0)
    ctx->pc = 0x3bd034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 996)));
label_3bd038:
    // 0x3bd038: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x3bd038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_3bd03c:
    // 0x3bd03c: 0xad0503e4  sw          $a1, 0x3E4($t0)
    ctx->pc = 0x3bd03cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 996), GPR_U32(ctx, 5));
label_3bd040:
    // 0x3bd040: 0x8d0505d4  lw          $a1, 0x5D4($t0)
    ctx->pc = 0x3bd040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1492)));
label_3bd044:
    // 0x3bd044: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x3bd044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_3bd048:
    // 0x3bd048: 0xad0505d4  sw          $a1, 0x5D4($t0)
    ctx->pc = 0x3bd048u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1492), GPR_U32(ctx, 5));
label_3bd04c:
    // 0x3bd04c: 0x8d0507c4  lw          $a1, 0x7C4($t0)
    ctx->pc = 0x3bd04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1988)));
label_3bd050:
    // 0x3bd050: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x3bd050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_3bd054:
    // 0x3bd054: 0xad0507c4  sw          $a1, 0x7C4($t0)
    ctx->pc = 0x3bd054u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1988), GPR_U32(ctx, 5));
label_3bd058:
    // 0x3bd058: 0x8d0509b4  lw          $a1, 0x9B4($t0)
    ctx->pc = 0x3bd058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 2484)));
label_3bd05c:
    // 0x3bd05c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x3bd05cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_3bd060:
    // 0x3bd060: 0xad0509b4  sw          $a1, 0x9B4($t0)
    ctx->pc = 0x3bd060u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 2484), GPR_U32(ctx, 5));
label_3bd064:
    // 0x3bd064: 0x1420ffea  bnez        $at, . + 4 + (-0x16 << 2)
label_3bd068:
    if (ctx->pc == 0x3BD068u) {
        ctx->pc = 0x3BD068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD064u;
        // 0x3bd068: 0x25080ba0  addiu       $t0, $t0, 0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD06Cu;
        goto label_3bd06c;
    }
    ctx->pc = 0x3BD064u;
    {
        const bool branch_taken_0x3bd064 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BD068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD064u;
        // 0x3bd068: 0x25080ba0  addiu       $t0, $t0, 0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd064) {
            ctx->pc = 0x3BD010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bd010;
        }
    }
    ctx->pc = 0x3BD06Cu;
label_3bd06c:
    // 0x3bd06c: 0x92940  sll         $a1, $t1, 5
    ctx->pc = 0x3bd06cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_3bd070:
    // 0x3bd070: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x3bd070u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_3bd074:
    // 0x3bd074: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3bd074u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3bd078:
    // 0x3bd078: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x3bd078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3bd07c:
    // 0x3bd07c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x3bd07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3bd080:
    // 0x3bd080: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x3bd080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_3bd084:
    // 0x3bd084: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x3bd084u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_3bd088:
    // 0x3bd088: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3bd088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bd08c:
    // 0x3bd08c: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
label_3bd090:
    if (ctx->pc == 0x3BD090u) {
        ctx->pc = 0x3BD094u;
        goto label_3bd094;
    }
    ctx->pc = 0x3BD08Cu;
    {
        const bool branch_taken_0x3bd08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3bd08c) {
            ctx->pc = 0x3BD0B0u;
            goto label_3bd0b0;
        }
    }
    ctx->pc = 0x3BD094u;
label_3bd094:
    // 0x3bd094: 0x8c861934  lw          $a2, 0x1934($a0)
    ctx->pc = 0x3bd094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6452)));
label_3bd098:
    // 0x3bd098: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x3bd098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
label_3bd09c:
    // 0x3bd09c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3bd09cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_3bd0a0:
    // 0x3bd0a0: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x3bd0a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_3bd0a4:
    // 0x3bd0a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_3bd0a8:
    if (ctx->pc == 0x3BD0A8u) {
        ctx->pc = 0x3BD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD0A4u;
        // 0x3bd0a8: 0xac851934  sw          $a1, 0x1934($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6452), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD0ACu;
        goto label_3bd0ac;
    }
    ctx->pc = 0x3BD0A4u;
    {
        const bool branch_taken_0x3bd0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD0A4u;
        // 0x3bd0a8: 0xac851934  sw          $a1, 0x1934($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6452), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd0a4) {
            ctx->pc = 0x3BD0C0u;
            goto label_3bd0c0;
        }
    }
    ctx->pc = 0x3BD0ACu;
label_3bd0ac:
    // 0x3bd0ac: 0x0  nop
    ctx->pc = 0x3bd0acu;
    // NOP
label_3bd0b0:
    // 0x3bd0b0: 0x8c861934  lw          $a2, 0x1934($a0)
    ctx->pc = 0x3bd0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6452)));
label_3bd0b4:
    // 0x3bd0b4: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x3bd0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_3bd0b8:
    // 0x3bd0b8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x3bd0b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_3bd0bc:
    // 0x3bd0bc: 0xac851934  sw          $a1, 0x1934($a0)
    ctx->pc = 0x3bd0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6452), GPR_U32(ctx, 5));
label_3bd0c0:
    // 0x3bd0c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3bd0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3bd0c4:
    // 0x3bd0c4: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
label_3bd0c8:
    if (ctx->pc == 0x3BD0C8u) {
        ctx->pc = 0x3BD0CCu;
        goto label_3bd0cc;
    }
    ctx->pc = 0x3BD0C4u;
    {
        const bool branch_taken_0x3bd0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3bd0c4) {
            ctx->pc = 0x3BD0E8u;
            goto label_3bd0e8;
        }
    }
    ctx->pc = 0x3BD0CCu;
label_3bd0cc:
    // 0x3bd0cc: 0x8c851b24  lw          $a1, 0x1B24($a0)
    ctx->pc = 0x3bd0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6948)));
label_3bd0d0:
    // 0x3bd0d0: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x3bd0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_3bd0d4:
    // 0x3bd0d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3bd0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3bd0d8:
    // 0x3bd0d8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3bd0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3bd0dc:
    // 0x3bd0dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_3bd0e0:
    if (ctx->pc == 0x3BD0E0u) {
        ctx->pc = 0x3BD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD0DCu;
        // 0x3bd0e0: 0xac831b24  sw          $v1, 0x1B24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD0E4u;
        goto label_3bd0e4;
    }
    ctx->pc = 0x3BD0DCu;
    {
        const bool branch_taken_0x3bd0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD0DCu;
        // 0x3bd0e0: 0xac831b24  sw          $v1, 0x1B24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd0dc) {
            ctx->pc = 0x3BD0F8u;
            goto label_3bd0f8;
        }
    }
    ctx->pc = 0x3BD0E4u;
label_3bd0e4:
    // 0x3bd0e4: 0x0  nop
    ctx->pc = 0x3bd0e4u;
    // NOP
label_3bd0e8:
    // 0x3bd0e8: 0x8c851b24  lw          $a1, 0x1B24($a0)
    ctx->pc = 0x3bd0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6948)));
label_3bd0ec:
    // 0x3bd0ec: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x3bd0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_3bd0f0:
    // 0x3bd0f0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x3bd0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3bd0f4:
    // 0x3bd0f4: 0xac831b24  sw          $v1, 0x1B24($a0)
    ctx->pc = 0x3bd0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6948), GPR_U32(ctx, 3));
label_3bd0f8:
    // 0x3bd0f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3bd0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3bd0fc:
    // 0x3bd0fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bd0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bd100:
    // 0x3bd100: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bd100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bd104:
    // 0x3bd104: 0x3e00008  jr          $ra
label_3bd108:
    if (ctx->pc == 0x3BD108u) {
        ctx->pc = 0x3BD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD104u;
        // 0x3bd108: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BD10Cu;
        goto label_fallthrough_0x3bd104;
    }
    ctx->pc = 0x3BD104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD104u;
        // 0x3bd108: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bd104:
    ctx->pc = 0x3BD10Cu;
}
