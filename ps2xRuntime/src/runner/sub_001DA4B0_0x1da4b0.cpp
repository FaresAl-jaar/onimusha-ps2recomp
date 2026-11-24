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

// Function: sub_001DA4B0
// Address: 0x1da4b0 - 0x1da8d0
void sub_001DA4B0_0x1da4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA4B0_0x1da4b0");
#endif

    switch (ctx->pc) {
        case 0x1da628u: goto label_1da628;
        case 0x1da6b8u: goto label_1da6b8;
        case 0x1da6d8u: goto label_1da6d8;
        case 0x1da6ecu: goto label_1da6ec;
        case 0x1da700u: goto label_1da700;
        case 0x1da720u: goto label_1da720;
        case 0x1da750u: goto label_1da750;
        case 0x1da770u: goto label_1da770;
        case 0x1da7b0u: goto label_1da7b0;
        case 0x1da7c8u: goto label_1da7c8;
        case 0x1da7e0u: goto label_1da7e0;
        case 0x1da850u: goto label_1da850;
        case 0x1da880u: goto label_1da880;
        default: break;
    }

    ctx->pc = 0x1da4b0u;

    // 0x1da4b0: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x1da4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x1da4b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1da4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1da4b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1da4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1da4bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1da4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1da4c0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1da4c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4c4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1da4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1da4c8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1da4c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1da4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1da4d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1da4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1da4d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1da4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1da4d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1da4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da4dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1da4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1da4e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1da4e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1da4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1da4e8: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x1da4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
    // 0x1da4ec: 0x79240000  lq          $a0, 0x0($t1)
    ctx->pc = 0x1da4ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1da4f0: 0xafa800d8  sw          $t0, 0xD8($sp)
    ctx->pc = 0x1da4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 8));
    // 0x1da4f4: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x1da4f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1da4f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1da4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1da4fc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1da4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1da500: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1da500u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1da504: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x1da504u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1da508: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1da508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1da50c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x1da50cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da510: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x1da510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1da514: 0x85030006  lh          $v1, 0x6($t0)
    ctx->pc = 0x1da514u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x1da518: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1da518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1da51c: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x1da51cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da520: 0x85040002  lh          $a0, 0x2($t0)
    ctx->pc = 0x1da520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1da524: 0x85030004  lh          $v1, 0x4($t0)
    ctx->pc = 0x1da524u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1da528: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1da528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1da52c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA52Cu;
    {
        const bool branch_taken_0x1da52c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA52Cu;
        // 0x1da530: 0x140882d  daddu       $s1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da52c) {
            ctx->pc = 0x1DA540u;
            goto label_1da540;
        }
    }
    ctx->pc = 0x1DA534u;
    // 0x1da534: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1da534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da538: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1da538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1da53c: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x1da53cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
label_1da540:
    // 0x1da540: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1da540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da544: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1da544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da548: 0x84640002  lh          $a0, 0x2($v1)
    ctx->pc = 0x1da548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1da54c: 0x14900028  bne         $a0, $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1DA54Cu;
    {
        const bool branch_taken_0x1da54c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x1da54c) {
            ctx->pc = 0x1DA5F0u;
            goto label_1da5f0;
        }
    }
    ctx->pc = 0x1DA554u;
    // 0x1da554: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1da554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da558: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1da558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1da55c: 0x78255c10  lq          $a1, 0x5C10($at)
    ctx->pc = 0x1da55cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x665C10u));
    // 0x1da560: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x1da560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1da564: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1da564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1da568: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1da568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1da56c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1da56cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1da570: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x1da570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1da574: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1da574u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1da578: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1da578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da57c: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x1da57cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da580: 0x84640006  lh          $a0, 0x6($v1)
    ctx->pc = 0x1da580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1da584: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1da584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1da588: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x1da588u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1da58c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1da58cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1da590: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1da590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1da594: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x1da594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x1da598: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1da598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1da59c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1da59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1da5a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1da5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1da5a4: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x1da5a4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da5a8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1da5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1da5ac: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x1da5acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1da5b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1da5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1da5b4: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1da5b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da5b8: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x1da5b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1da5bc: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x1da5bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1da5c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1da5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1da5c4: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1da5c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da5c8: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x1da5c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1da5cc: 0x86430004  lh          $v1, 0x4($s2)
    ctx->pc = 0x1da5ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1da5d0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1da5d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1da5d4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA5D4u;
    {
        const bool branch_taken_0x1da5d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da5d4) {
            ctx->pc = 0x1DA5E8u;
            goto label_1da5e8;
        }
    }
    ctx->pc = 0x1DA5DCu;
    // 0x1da5dc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1da5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1da5e0: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x1da5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da5e4: 0x0  nop
    ctx->pc = 0x1da5e4u;
    // NOP
label_1da5e8:
    // 0x1da5e8: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x1DA5E8u;
    {
        const bool branch_taken_0x1da5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da5e8) {
            ctx->pc = 0x1DA8A0u;
            goto label_1da8a0;
        }
    }
    ctx->pc = 0x1DA5F0u;
label_1da5f0:
    // 0x1da5f0: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x1da5f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da5f4: 0x14960004  bne         $a0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA5F4u;
    {
        const bool branch_taken_0x1da5f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        if (branch_taken_0x1da5f4) {
            ctx->pc = 0x1DA608u;
            goto label_1da608;
        }
    }
    ctx->pc = 0x1DA5FCu;
    // 0x1da5fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA5FCu;
    {
        const bool branch_taken_0x1da5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA5FCu;
        // 0x1da600: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5fc) {
            ctx->pc = 0x1DA620u;
            goto label_1da620;
        }
    }
    ctx->pc = 0x1DA604u;
    // 0x1da604: 0x0  nop
    ctx->pc = 0x1da604u;
    // NOP
label_1da608:
    // 0x1da608: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1da608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1da60c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA60Cu;
    {
        const bool branch_taken_0x1da60c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1da60c) {
            ctx->pc = 0x1DA620u;
            goto label_1da620;
        }
    }
    ctx->pc = 0x1DA614u;
    // 0x1da614: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DA614u;
    {
        const bool branch_taken_0x1da614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA614u;
        // 0x1da618: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da614) {
            ctx->pc = 0x1DA620u;
            goto label_1da620;
        }
    }
    ctx->pc = 0x1DA61Cu;
    // 0x1da61c: 0x0  nop
    ctx->pc = 0x1da61cu;
    // NOP
label_1da620:
    // 0x1da620: 0x600003b  bltz        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1DA620u;
    {
        const bool branch_taken_0x1da620 = (GPR_S64(ctx, 16) < 0);
        if (branch_taken_0x1da620) {
            ctx->pc = 0x1DA710u;
            goto label_1da710;
        }
    }
    ctx->pc = 0x1DA628u;
label_1da628:
    // 0x1da628: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da62c: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x1da62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1da630: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x1da630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1da634: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1da634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1da638: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x1da638u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da63c: 0x84460006  lh          $a2, 0x6($v0)
    ctx->pc = 0x1da63cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1da640: 0x84480002  lh          $t0, 0x2($v0)
    ctx->pc = 0x1da640u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1da644: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1da644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1da648: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1da648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1da64c: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1da64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1da650: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1da650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1da654: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x1da654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1da658: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x1da658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1da65c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1da65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1da660: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x1da660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1da664: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1da664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1da668: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1da668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1da66c: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x1da66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1da670: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x1da670u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1da674: 0x61280a  movz        $a1, $v1, $at
    ctx->pc = 0x1da674u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1da678: 0x2502fffe  addiu       $v0, $t0, -0x2
    ctx->pc = 0x1da678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x1da67c: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x1da67cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1da680: 0xa1200a  movz        $a0, $a1, $at
    ctx->pc = 0x1da680u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x1da684: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA684u;
    {
        const bool branch_taken_0x1da684 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da684) {
            ctx->pc = 0x1DA694u;
            goto label_1da694;
        }
    }
    ctx->pc = 0x1DA68Cu;
    // 0x1da68c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA68Cu;
    {
        const bool branch_taken_0x1da68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA68Cu;
        // 0x1da690: 0x59900  sll         $s3, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da68c) {
            ctx->pc = 0x1DA69Cu;
            goto label_1da69c;
        }
    }
    ctx->pc = 0x1DA694u;
label_1da694:
    // 0x1da694: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1da694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x1da698: 0x59900  sll         $s3, $a1, 4
    ctx->pc = 0x1da698u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1da69c:
    // 0x1da69c: 0x3a100  sll         $s4, $v1, 4
    ctx->pc = 0x1da69cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1da6a0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1da6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1da6a4: 0x3d3a821  addu        $s5, $fp, $s3
    ctx->pc = 0x1da6a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x1da6a8: 0x2e23021  addu        $a2, $s7, $v0
    ctx->pc = 0x1da6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1da6ac: 0x2f42821  addu        $a1, $s7, $s4
    ctx->pc = 0x1da6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x1da6b0: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1DA6B0u;
    SET_GPR_U32(ctx, 31, 0x1DA6B8u);
    ctx->pc = 0x1DA6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA6B0u;
    // 0x1da6b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1DA6B0u, 0x1DA6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA6B8u;
label_1da6b8:
    // 0x1da6b8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1da6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1da6bc: 0x2f33021  addu        $a2, $s7, $s3
    ctx->pc = 0x1da6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x1da6c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1da6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1da6c4: 0x3d41021  addu        $v0, $fp, $s4
    ctx->pc = 0x1da6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x1da6c8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1da6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1da6cc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1da6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1da6d0: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1DA6D0u;
    SET_GPR_U32(ctx, 31, 0x1DA6D8u);
    ctx->pc = 0x1DA6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA6D0u;
    // 0x1da6d4: 0x2e32821  addu        $a1, $s7, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1DA6D0u, 0x1DA6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA6D8u;
label_1da6d8:
    // 0x1da6d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1da6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1da6dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1da6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da6e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da6e4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1DA6E4u;
    SET_GPR_U32(ctx, 31, 0x1DA6ECu);
    ctx->pc = 0x1DA6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA6E4u;
    // 0x1da6e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1DA6E4u, 0x1DA6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA6ECu;
label_1da6ec:
    // 0x1da6ec: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1da6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1da6f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1da6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1da6f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da6f8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1DA6F8u;
    SET_GPR_U32(ctx, 31, 0x1DA700u);
    ctx->pc = 0x1DA6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA6F8u;
    // 0x1da6fc: 0x3d42821  addu        $a1, $fp, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1DA6F8u, 0x1DA700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA700u;
label_1da700:
    // 0x1da700: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1da700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1da704: 0x601ffc8  bgez        $s0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1DA704u;
    {
        const bool branch_taken_0x1da704 = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x1da704) {
            ctx->pc = 0x1DA628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da628;
        }
    }
    ctx->pc = 0x1DA70Cu;
    // 0x1da70c: 0x0  nop
    ctx->pc = 0x1da70cu;
    // NOP
label_1da710:
    // 0x1da710: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1da710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1da714: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DA714u;
    {
        const bool branch_taken_0x1da714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA714u;
        // 0x1da718: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da714) {
            ctx->pc = 0x1DA760u;
            goto label_1da760;
        }
    }
    ctx->pc = 0x1DA71Cu;
    // 0x1da71c: 0x27b300e0  addiu       $s3, $sp, 0xE0
    ctx->pc = 0x1da71cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1da720:
    // 0x1da720: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1da720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1da724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1da724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da728: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1da728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da72c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1da72cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da730: 0x0  nop
    ctx->pc = 0x1da730u;
    // NOP
    // 0x1da734: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1da734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1da738: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1da738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1da73c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1da73cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1da740: 0x0  nop
    ctx->pc = 0x1da740u;
    // NOP
    // 0x1da744: 0x0  nop
    ctx->pc = 0x1da744u;
    // NOP
    // 0x1da748: 0xc076854  jal         func_1DA150
    ctx->pc = 0x1DA748u;
    SET_GPR_U32(ctx, 31, 0x1DA750u);
    ctx->pc = 0x1DA150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA150u, 0x1DA748u, 0x1DA750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA750u;
label_1da750:
    // 0x1da750: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1da750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1da754: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x1da754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1da758: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1DA758u;
    {
        const bool branch_taken_0x1da758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA758u;
        // 0x1da75c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da758) {
            ctx->pc = 0x1DA720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da720;
        }
    }
    ctx->pc = 0x1DA760u;
label_1da760:
    // 0x1da760: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x1da760u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1da764: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x1DA764u;
    {
        const bool branch_taken_0x1da764 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA764u;
        // 0x1da768: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da764) {
            ctx->pc = 0x1DA8A0u;
            goto label_1da8a0;
        }
    }
    ctx->pc = 0x1DA76Cu;
    // 0x1da76c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1da76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da770:
    // 0x1da770: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1da770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1da774: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1da774u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da778: 0x84440006  lh          $a0, 0x6($v0)
    ctx->pc = 0x1da778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1da77c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1da77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1da780: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1da780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1da784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da788: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1da788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1da78c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1da78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1da790: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1da790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1da794: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1da794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1da798: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1da798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1da79c: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x1da79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1da7a0: 0x3c22821  addu        $a1, $fp, $v0
    ctx->pc = 0x1da7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1da7a4: 0x2e33021  addu        $a2, $s7, $v1
    ctx->pc = 0x1da7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1da7a8: 0xc07686c  jal         func_1DA1B0
    ctx->pc = 0x1DA7A8u;
    SET_GPR_U32(ctx, 31, 0x1DA7B0u);
    ctx->pc = 0x1DA7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7A8u;
    // 0x1da7ac: 0x3c33821  addu        $a3, $fp, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA1B0u, 0x1DA7A8u, 0x1DA7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7B0u;
label_1da7b0:
    // 0x1da7b0: 0x1680001f  bnez        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x1DA7B0u;
    {
        const bool branch_taken_0x1da7b0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da7b0) {
            ctx->pc = 0x1DA830u;
            goto label_1da830;
        }
    }
    ctx->pc = 0x1DA7B8u;
    // 0x1da7b8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1da7b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1da7bc: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x1DA7BCu;
    {
        const bool branch_taken_0x1da7bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7BCu;
        // 0x1da7c0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7bc) {
            ctx->pc = 0x1DA890u;
            goto label_1da890;
        }
    }
    ctx->pc = 0x1DA7C4u;
    // 0x1da7c4: 0x27b300e0  addiu       $s3, $sp, 0xE0
    ctx->pc = 0x1da7c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1da7c8:
    // 0x1da7c8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x1da7c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1da7cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1da7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1da7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1da7d4: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1da7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1da7d8: 0xc076874  jal         func_1DA1D0
    ctx->pc = 0x1DA7D8u;
    SET_GPR_U32(ctx, 31, 0x1DA7E0u);
    ctx->pc = 0x1DA7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7D8u;
    // 0x1da7dc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA1D0u, 0x1DA7D8u, 0x1DA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7E0u;
label_1da7e0:
    // 0x1da7e0: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x1da7e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1da7e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1da7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1da7e8: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1da7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da7ec: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x1da7ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1da7f0: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x1da7f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1da7f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1da7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1da7f8: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1da7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1da7fc: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x1da7fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1da800: 0x86430004  lh          $v1, 0x4($s2)
    ctx->pc = 0x1da800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1da804: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1da804u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1da808: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA808u;
    {
        const bool branch_taken_0x1da808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da808) {
            ctx->pc = 0x1DA818u;
            goto label_1da818;
        }
    }
    ctx->pc = 0x1DA810u;
    // 0x1da810: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1da810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1da814: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x1da814u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_1da818:
    // 0x1da818: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1da818u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1da81c: 0x2b1182a  slt         $v1, $s5, $s1
    ctx->pc = 0x1da81cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1da820: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1DA820u;
    {
        const bool branch_taken_0x1da820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA820u;
        // 0x1da824: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da820) {
            ctx->pc = 0x1DA7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da7c8;
        }
    }
    ctx->pc = 0x1DA828u;
    // 0x1da828: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1DA828u;
    {
        const bool branch_taken_0x1da828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da828) {
            ctx->pc = 0x1DA890u;
            goto label_1da890;
        }
    }
    ctx->pc = 0x1DA830u;
label_1da830:
    // 0x1da830: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x1da830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1da834: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1da834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1da838: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1da838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1da83c: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1da83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x1da840: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DA840u;
    {
        const bool branch_taken_0x1da840 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA840u;
        // 0x1da844: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da840) {
            ctx->pc = 0x1DA890u;
            goto label_1da890;
        }
    }
    ctx->pc = 0x1DA848u;
    // 0x1da848: 0x27b500e0  addiu       $s5, $sp, 0xE0
    ctx->pc = 0x1da848u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1da84c: 0x0  nop
    ctx->pc = 0x1da84cu;
    // NOP
label_1da850:
    // 0x1da850: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1da850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1da854: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x1da854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1da858: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1da858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da85c: 0x531823  subu        $v1, $v0, $s3
    ctx->pc = 0x1da85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1da860: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x1da860u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1da864: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1da864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1da868: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1da868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1da86c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1da86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1da870: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1da870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1da874: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1da874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1da878: 0xc076874  jal         func_1DA1D0
    ctx->pc = 0x1DA878u;
    SET_GPR_U32(ctx, 31, 0x1DA880u);
    ctx->pc = 0x1DA87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA878u;
    // 0x1da87c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA1D0u, 0x1DA878u, 0x1DA880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA880u;
label_1da880:
    // 0x1da880: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1da880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1da884: 0x271182a  slt         $v1, $s3, $s1
    ctx->pc = 0x1da884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1da888: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1DA888u;
    {
        const bool branch_taken_0x1da888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA888u;
        // 0x1da88c: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da888) {
            ctx->pc = 0x1DA850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da850;
        }
    }
    ctx->pc = 0x1DA890u;
label_1da890:
    // 0x1da890: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1da890u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1da894: 0x296182a  slt         $v1, $s4, $s6
    ctx->pc = 0x1da894u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1da898: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1DA898u;
    {
        const bool branch_taken_0x1da898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA898u;
        // 0x1da89c: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da898) {
            ctx->pc = 0x1DA770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da770;
        }
    }
    ctx->pc = 0x1DA8A0u;
label_1da8a0:
    // 0x1da8a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1da8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1da8a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1da8a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1da8a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1da8a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da8ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1da8acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1da8b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1da8b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1da8b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1da8b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1da8b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1da8b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da8bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1da8bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da8c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1da8c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da8c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1da8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8C8u;
        // 0x1da8cc: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA8D0u;
}
