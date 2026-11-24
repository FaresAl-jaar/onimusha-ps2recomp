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

// Function: sub_001FE1B0
// Address: 0x1fe1b0 - 0x1fe6ec
void sub_001FE1B0_0x1fe1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE1B0_0x1fe1b0");
#endif

    switch (ctx->pc) {
        case 0x1fe468u: goto label_1fe468;
        case 0x1fe600u: goto label_1fe600;
        case 0x1fe638u: goto label_1fe638;
        case 0x1fe63cu: goto label_1fe63c;
        case 0x1fe644u: goto label_1fe644;
        case 0x1fe658u: goto label_1fe658;
        default: break;
    }

    ctx->pc = 0x1fe1b0u;

    // 0x1fe1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe1b4: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1fe1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1fe1b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fe1bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fe1bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fe1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fe1c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fe1c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe1cc: 0x2224024  and         $t0, $s1, $v0
    ctx->pc = 0x1fe1ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1fe1d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fe1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fe1d4: 0x2281023  subu        $v0, $s1, $t0
    ctx->pc = 0x1fe1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x1fe1d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fe1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fe1dc: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x1fe1dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fe1e0: 0x810a0000  lb          $t2, 0x0($t0)
    ctx->pc = 0x1fe1e0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe1e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe1e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe1e8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fe1e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe1ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe1f0: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1fe1f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe1f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe1f8: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x1fe1f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe1fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe1fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe200: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fe200u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe204: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe208: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe20c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe20cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe210: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1fe210u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1fe214: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe214u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe218: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x1fe218u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x1fe21c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fe21cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe220: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fe224: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1fe224u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1fe228: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe22c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe22cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe230: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x1fe230u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x1fe234: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe238: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fe238u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fe23c: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1fe23cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1fe240: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe240u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe244: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x1fe244u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x1fe248: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe24c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe24cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fe250: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE250u;
    {
        const bool branch_taken_0x1fe250 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE250u;
        // 0x1fe254: 0x12a5004  sllv        $t2, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe250) {
            ctx->pc = 0x1FE270u;
            goto label_1fe270;
        }
    }
    ctx->pc = 0x1FE258u;
    // 0x1fe258: 0x91023  negu        $v0, $t1
    ctx->pc = 0x1fe258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x1fe25c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fe25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fe260: 0x1422825  or          $a1, $t2, $v0
    ctx->pc = 0x1fe260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fe264: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE264u;
    {
        const bool branch_taken_0x1fe264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE264u;
        // 0x1fe268: 0x1275004  sllv        $t2, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe264) {
            ctx->pc = 0x1FE278u;
            goto label_1fe278;
        }
    }
    ctx->pc = 0x1FE26Cu;
    // 0x1fe26c: 0x0  nop
    ctx->pc = 0x1fe26cu;
    // NOP
label_1fe270:
    // 0x1fe270: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1fe270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe274: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1fe274u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fe278:
    // 0x1fe278: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fe278u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe27c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe27cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe280: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe284: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe288: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe288u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe28c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fe28cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe290: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe290u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fe294: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe298: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe298u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe29c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe29cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe2a0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fe2a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fe2a4: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1fe2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1fe2a8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe2ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe2acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe2b0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe2b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fe2b4: 0x14a40106  bne         $a1, $a0, . + 4 + (0x106 << 2)
    ctx->pc = 0x1FE2B4u;
    {
        const bool branch_taken_0x1fe2b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FE2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2B4u;
        // 0x1fe2b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe2b4) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE2BCu;
    // 0x1fe2bc: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x1fe2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1fe2c0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FE2C0u;
    {
        const bool branch_taken_0x1fe2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe2c0) {
            ctx->pc = 0x1FE2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE2C0u;
            // 0x1fe2c4: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE318u;
            goto label_1fe318;
        }
    }
    ctx->pc = 0x1FE2C8u;
    // 0x1fe2c8: 0x2529ffe5  addiu       $t1, $t1, -0x1B
    ctx->pc = 0x1fe2c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967269));
    // 0x1fe2cc: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1fe2ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe2d0: 0x1271804  sllv        $v1, $a3, $t1
    ctx->pc = 0x1fe2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x1fe2d4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fe2d4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe2d8: 0x39220000  xori        $v0, $t1, 0x0
    ctx->pc = 0x1fe2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)0);
    // 0x1fe2dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe2e0: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x1fe2e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
    // 0x1fe2e4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe2e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe2e8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe2ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe2f0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fe2f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe2f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe2f8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe2f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fe2fc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe2fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe300: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe300u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe304: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe308: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fe308u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fe30c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe30cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe310: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE310u;
    {
        const bool branch_taken_0x1fe310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE310u;
        // 0x1fe314: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe310) {
            ctx->pc = 0x1FE31Cu;
            goto label_1fe31c;
        }
    }
    ctx->pc = 0x1FE318u;
label_1fe318:
    // 0x1fe318: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x1fe318u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1fe31c:
    // 0x1fe31c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1fe31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1fe320: 0x15220013  bne         $t1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FE320u;
    {
        const bool branch_taken_0x1fe320 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE320u;
        // 0x1fe324: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe320) {
            ctx->pc = 0x1FE370u;
            goto label_1fe370;
        }
    }
    ctx->pc = 0x1FE328u;
    // 0x1fe328: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1fe328u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe32c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fe32cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe330: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe334: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe338: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe33c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe33cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe340: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe340u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe344: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fe344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe348: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe348u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fe34c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe34cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe350: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe350u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe354: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe358: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fe358u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fe35c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe35cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe360: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe360u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe364: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE364u;
    {
        const bool branch_taken_0x1fe364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE364u;
        // 0x1fe368: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe364) {
            ctx->pc = 0x1FE378u;
            goto label_1fe378;
        }
    }
    ctx->pc = 0x1FE36Cu;
    // 0x1fe36c: 0x0  nop
    ctx->pc = 0x1fe36cu;
    // NOP
label_1fe370:
    // 0x1fe370: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fe370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fe374: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1fe374u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1fe378:
    // 0x1fe378: 0x14a000d5  bnez        $a1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1FE378u;
    {
        const bool branch_taken_0x1fe378 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE378u;
        // 0x1fe37c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe378) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE380u;
    // 0x1fe380: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1fe380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1fe384: 0x15220012  bne         $t1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FE384u;
    {
        const bool branch_taken_0x1fe384 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE384u;
        // 0x1fe388: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe384) {
            ctx->pc = 0x1FE3D0u;
            goto label_1fe3d0;
        }
    }
    ctx->pc = 0x1FE38Cu;
    // 0x1fe38c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1fe38cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe390: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fe390u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe394: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe398: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe398u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe39c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe39cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe3a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe3a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe3a4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe3a8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fe3a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe3ac: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe3acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fe3b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe3b4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe3b8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe3b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe3bc: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fe3bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fe3c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe3c4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe3c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE3C8u;
    {
        const bool branch_taken_0x1fe3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3C8u;
        // 0x1fe3cc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3c8) {
            ctx->pc = 0x1FE3D8u;
            goto label_1fe3d8;
        }
    }
    ctx->pc = 0x1FE3D0u;
label_1fe3d0:
    // 0x1fe3d0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1fe3d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1fe3d4: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1fe3d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1fe3d8:
    // 0x1fe3d8: 0x10a000bd  beqz        $a1, . + 4 + (0xBD << 2)
    ctx->pc = 0x1FE3D8u;
    {
        const bool branch_taken_0x1fe3d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3D8u;
        // 0x1fe3dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3d8) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE3E0u;
    // 0x1fe3e0: 0x2922001c  slti        $v0, $t1, 0x1C
    ctx->pc = 0x1fe3e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1fe3e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE3E4u;
    {
        const bool branch_taken_0x1fe3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3E4u;
        // 0x1fe3e8: 0xa2ec2  srl         $a1, $t2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3e4) {
            ctx->pc = 0x1FE3FCu;
            goto label_1fe3fc;
        }
    }
    ctx->pc = 0x1FE3ECu;
    // 0x1fe3ec: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1fe3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1fe3f0: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1fe3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1fe3f4: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fe3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fe3f8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1fe3f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1fe3fc:
    // 0x1fe3fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1fe3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fe400: 0x14a300b3  bne         $a1, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1FE400u;
    {
        const bool branch_taken_0x1fe400 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE400u;
        // 0x1fe404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe400) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE408u;
    // 0x1fe408: 0x25290005  addiu       $t1, $t1, 0x5
    ctx->pc = 0x1fe408u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x1fe40c: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1fe40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fe410: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FE410u;
    {
        const bool branch_taken_0x1fe410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe410) {
            ctx->pc = 0x1FE414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE410u;
            // 0x1fe414: 0xa5140  sll         $t2, $t2, 5 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE458u;
            goto label_1fe458;
        }
    }
    ctx->pc = 0x1FE418u;
    // 0x1fe418: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1fe418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x1fe41c: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1fe41cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x1fe420: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fe420u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe424: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe428: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe42c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe42cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe430: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe430u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe434: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fe434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe438: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe438u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fe43c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe43cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe440: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe440u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe444: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe448: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fe448u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fe44c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe44cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe450: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe450u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe454: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe454u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fe458:
    // 0x1fe458: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fe458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fe45c: 0x240b0035  addiu       $t3, $zero, 0x35
    ctx->pc = 0x1fe45cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1fe460: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1fe460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fe464: 0x29220016  slti        $v0, $t1, 0x16
    ctx->pc = 0x1fe464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
label_1fe468:
    // 0x1fe468: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE468u;
    {
        const bool branch_taken_0x1fe468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE468u;
        // 0x1fe46c: 0xa2d42  srl         $a1, $t2, 21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe468) {
            ctx->pc = 0x1FE47Cu;
            goto label_1fe47c;
        }
    }
    ctx->pc = 0x1FE470u;
    // 0x1fe470: 0x1691023  subu        $v0, $t3, $t1
    ctx->pc = 0x1fe470u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1fe474: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fe474u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fe478: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1fe478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1fe47c:
    // 0x1fe47c: 0x14a4001a  bne         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FE47Cu;
    {
        const bool branch_taken_0x1fe47c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE47Cu;
        // 0x1fe480: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe47c) {
            ctx->pc = 0x1FE4E8u;
            goto label_1fe4e8;
        }
    }
    ctx->pc = 0x1FE484u;
    // 0x1fe484: 0x2529000b  addiu       $t1, $t1, 0xB
    ctx->pc = 0x1fe484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11));
    // 0x1fe488: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1fe488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fe48c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FE48Cu;
    {
        const bool branch_taken_0x1fe48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe48c) {
            ctx->pc = 0x1FE490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE48Cu;
            // 0x1fe490: 0xa52c0  sll         $t2, $t2, 11 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE4D4u;
            goto label_1fe4d4;
        }
    }
    ctx->pc = 0x1FE494u;
    // 0x1fe494: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1fe494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x1fe498: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1fe498u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x1fe49c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fe49cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe4a0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe4a4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe4a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe4a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe4a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe4ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe4acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe4b0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fe4b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe4b4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe4b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fe4b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe4bc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe4c0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe4c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe4c4: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fe4c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fe4c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe4cc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe4d0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe4d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1fe4d4:
    // 0x1fe4d4: 0x24c6ffdf  addiu       $a2, $a2, -0x21
    ctx->pc = 0x1fe4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967263));
    // 0x1fe4d8: 0x28c20022  slti        $v0, $a2, 0x22
    ctx->pc = 0x1fe4d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x1fe4dc: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1FE4DCu;
    {
        const bool branch_taken_0x1fe4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4DCu;
        // 0x1fe4e0: 0x29220016  slti        $v0, $t1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4dc) {
            ctx->pc = 0x1FE468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe468;
        }
    }
    ctx->pc = 0x1FE4E4u;
    // 0x1fe4e4: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1fe4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1fe4e8:
    // 0x1fe4e8: 0x2c630021  sltiu       $v1, $v1, 0x21
    ctx->pc = 0x1fe4e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x1fe4ec: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x1FE4ECu;
    {
        const bool branch_taken_0x1fe4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4ECu;
        // 0x1fe4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4ec) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE4F4u;
    // 0x1fe4f4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1fe4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1fe4f8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1fe4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1fe4fc: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x1fe4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x1fe500: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1fe500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1fe504: 0x84c662f0  lh          $a2, 0x62F0($a2)
    ctx->pc = 0x1fe504u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 25328)));
    // 0x1fe508: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1fe508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1fe50c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1fe50cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe510: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x1fe510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fe514: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FE514u;
    {
        const bool branch_taken_0x1fe514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE514u;
        // 0x1fe518: 0x6a2806  srlv        $a1, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe514) {
            ctx->pc = 0x1FE580u;
            goto label_1fe580;
        }
    }
    ctx->pc = 0x1FE51Cu;
    // 0x1fe51c: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x1fe51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1fe520: 0x2449ffe0  addiu       $t1, $v0, -0x20
    ctx->pc = 0x1fe520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1fe524: 0x51200006  beql        $t1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FE524u;
    {
        const bool branch_taken_0x1fe524 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe524) {
            ctx->pc = 0x1FE528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE524u;
            // 0x1fe528: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE540u;
            goto label_1fe540;
        }
    }
    ctx->pc = 0x1FE52Cu;
    // 0x1fe52c: 0x891023  subu        $v0, $a0, $t1
    ctx->pc = 0x1fe52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1fe530: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fe530u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fe534: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1fe534u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1fe538: 0x6a2806  srlv        $a1, $t2, $v1
    ctx->pc = 0x1fe538u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x1fe53c: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1fe53cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
label_1fe540:
    // 0x1fe540: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1fe540u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe544: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe548: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe54c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe54cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe550: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe550u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe554: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1fe554u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe558: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1fe558u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1fe55c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe55cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe560: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe560u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe564: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1fe564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1fe568: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1fe568u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1fe56c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1fe56cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1fe570: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1fe570u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1fe574: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE574u;
    {
        const bool branch_taken_0x1fe574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE574u;
        // 0x1fe578: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe574) {
            ctx->pc = 0x1FE588u;
            goto label_1fe588;
        }
    }
    ctx->pc = 0x1FE57Cu;
    // 0x1fe57c: 0x0  nop
    ctx->pc = 0x1fe57cu;
    // NOP
label_1fe580:
    // 0x1fe580: 0x8a5004  sllv        $t2, $t2, $a0
    ctx->pc = 0x1fe580u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
    // 0x1fe584: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1fe584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1fe588:
    // 0x1fe588: 0x61a03  sra         $v1, $a2, 8
    ctx->pc = 0x1fe588u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 8));
    // 0x1fe58c: 0x14a30050  bne         $a1, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1FE58Cu;
    {
        const bool branch_taken_0x1fe58c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE58Cu;
        // 0x1fe590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe58c) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE594u;
    // 0x1fe594: 0x2922001c  slti        $v0, $t1, 0x1C
    ctx->pc = 0x1fe594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1fe598: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE598u;
    {
        const bool branch_taken_0x1fe598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE598u;
        // 0x1fe59c: 0xa2ec2  srl         $a1, $t2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe598) {
            ctx->pc = 0x1FE5B0u;
            goto label_1fe5b0;
        }
    }
    ctx->pc = 0x1FE5A0u;
    // 0x1fe5a0: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1fe5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1fe5a4: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1fe5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1fe5a8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1fe5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1fe5ac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1fe5acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1fe5b0:
    // 0x1fe5b0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1fe5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1fe5b4: 0x14a30046  bne         $a1, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1FE5B4u;
    {
        const bool branch_taken_0x1fe5b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5B4u;
        // 0x1fe5b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5b4) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE5BCu;
    // 0x1fe5bc: 0x25290005  addiu       $t1, $t1, 0x5
    ctx->pc = 0x1fe5bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x1fe5c0: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1fe5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1fe5c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE5C4u;
    {
        const bool branch_taken_0x1fe5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5C4u;
        // 0x1fe5c8: 0x25220007  addiu       $v0, $t1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5c4) {
            ctx->pc = 0x1FE5D8u;
            goto label_1fe5d8;
        }
    }
    ctx->pc = 0x1FE5CCu;
    // 0x1fe5cc: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1fe5ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x1fe5d0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1fe5d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1fe5d4: 0x25220007  addiu       $v0, $t1, 0x7
    ctx->pc = 0x1fe5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_1fe5d8:
    // 0x1fe5d8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1fe5d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1fe5dc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1fe5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1fe5e0: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x1fe5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1fe5e4: 0x912823  subu        $a1, $a0, $s1
    ctx->pc = 0x1fe5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1fe5e8: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x1fe5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fe5ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FE5ECu;
    {
        const bool branch_taken_0x1fe5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5ECu;
        // 0x1fe5f0: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5ec) {
            ctx->pc = 0x1FE638u;
            goto label_1fe638;
        }
    }
    ctx->pc = 0x1FE5F4u;
    // 0x1fe5f4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1FE5F4u;
    {
        const bool branch_taken_0x1fe5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5F4u;
        // 0x1fe5f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5f4) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE5FCu;
    // 0x1fe5fc: 0x0  nop
    ctx->pc = 0x1fe5fcu;
    // NOP
label_1fe600:
    // 0x1fe600: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x1fe600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x1fe604: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1FE604u;
    {
        const bool branch_taken_0x1fe604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE604u;
        // 0x1fe608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe604) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE60Cu;
    // 0x1fe60c: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x1fe60cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x1fe610: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1fe610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1fe614: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1FE614u;
    {
        const bool branch_taken_0x1fe614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE614u;
        // 0x1fe618: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe614) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE61Cu;
    // 0x1fe61c: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x1fe61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1fe620: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x1fe620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x1fe624: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x1fe624u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fe628: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1FE628u;
    {
        const bool branch_taken_0x1fe628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe628) {
            ctx->pc = 0x1FE62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE628u;
            // 0x1fe62c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE630u;
    // 0x1fe630: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1FE630u;
    {
        const bool branch_taken_0x1fe630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE630u;
        // 0x1fe634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe630) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE638u;
label_1fe638:
    // 0x1fe638: 0x2452823  subu        $a1, $s2, $a1
    ctx->pc = 0x1fe638u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_1fe63c:
    // 0x1fe63c: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x1FE63Cu;
    SET_GPR_U32(ctx, 31, 0x1FE644u);
    ctx->pc = 0x1FE640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE63Cu;
    // 0x1fe640: 0x240600cc  addiu       $a2, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x1FE63Cu, 0x1FE644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE644u;
label_1fe644:
    // 0x1fe644: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe648: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FE648u;
    {
        const bool branch_taken_0x1fe648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE648u;
        // 0x1fe64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe648) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE650u;
    // 0x1fe650: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x1FE650u;
    SET_GPR_U32(ctx, 31, 0x1FE658u);
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x1FE650u, 0x1FE658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE658u;
label_1fe658:
    // 0x1fe658: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1fe658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe65c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fe65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe660: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x1fe660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1fe664: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x1fe664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x1fe668: 0x30c80040  andi        $t0, $a2, 0x40
    ctx->pc = 0x1fe668u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x1fe66c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1fe66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe670: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1FE670u;
    {
        const bool branch_taken_0x1fe670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE670u;
        // 0x1fe674: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe670) {
            ctx->pc = 0x1FE6A0u;
            goto label_1fe6a0;
        }
    }
    ctx->pc = 0x1FE678u;
    // 0x1fe678: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x1fe678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1fe67c: 0x82030006  lb          $v1, 0x6($s0)
    ctx->pc = 0x1fe67cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1fe680: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1fe680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1fe684: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1fe684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fe688: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1fe688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1fe68c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fe68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fe690: 0x1453000f  bne         $v0, $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1FE690u;
    {
        const bool branch_taken_0x1fe690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1FE694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE690u;
        // 0x1fe694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe690) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE698u;
    // 0x1fe698: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1FE698u;
    {
        const bool branch_taken_0x1fe698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE698u;
        // 0x1fe69c: 0x2452823  subu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe698) {
            ctx->pc = 0x1FE63Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe63c;
        }
    }
    ctx->pc = 0x1FE6A0u;
label_1fe6a0:
    // 0x1fe6a0: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE6A0u;
    {
        const bool branch_taken_0x1fe6a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6A0u;
        // 0x1fe6a4: 0x24e50001  addiu       $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6a0) {
            ctx->pc = 0x1FE6B0u;
            goto label_1fe6b0;
        }
    }
    ctx->pc = 0x1FE6A8u;
    // 0x1fe6a8: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x1FE6A8u;
    {
        const bool branch_taken_0x1fe6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6A8u;
        // 0x1fe6ac: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6a8) {
            ctx->pc = 0x1FE638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe638;
        }
    }
    ctx->pc = 0x1FE6B0u;
label_1fe6b0:
    // 0x1fe6b0: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x1fe6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x1fe6b4: 0x1040ffd2  beqz        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1FE6B4u;
    {
        const bool branch_taken_0x1fe6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6B4u;
        // 0x1fe6b8: 0x2112023  subu        $a0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6b4) {
            ctx->pc = 0x1FE600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe600;
        }
    }
    ctx->pc = 0x1FE6BCu;
    // 0x1fe6bc: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x1fe6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1fe6c0: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x1fe6c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fe6c4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE6C4u;
    {
        const bool branch_taken_0x1fe6c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6C4u;
        // 0x1fe6c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6c4) {
            ctx->pc = 0x1FE6D0u;
            goto label_1fe6d0;
        }
    }
    ctx->pc = 0x1FE6CCu;
    // 0x1fe6cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe6d0:
    // 0x1fe6d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe6d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe6d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe6d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe6d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe6d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe6dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe6dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe6e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fe6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6E4u;
        // 0x1fe6e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE6ECu;
}
