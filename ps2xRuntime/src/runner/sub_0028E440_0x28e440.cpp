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

// Function: sub_0028E440
// Address: 0x28e440 - 0x28e758
void sub_0028E440_0x28e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E440_0x28e440");
#endif

    switch (ctx->pc) {
        case 0x28e49cu: goto label_28e49c;
        case 0x28e508u: goto label_28e508;
        case 0x28e534u: goto label_28e534;
        case 0x28e558u: goto label_28e558;
        case 0x28e570u: goto label_28e570;
        case 0x28e5a0u: goto label_28e5a0;
        case 0x28e5e8u: goto label_28e5e8;
        case 0x28e624u: goto label_28e624;
        case 0x28e6c0u: goto label_28e6c0;
        case 0x28e6e4u: goto label_28e6e4;
        case 0x28e728u: goto label_28e728;
        default: break;
    }

    ctx->pc = 0x28e440u;

    // 0x28e440: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28e444: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28e444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28e448: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28e44c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28e44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28e450: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28e450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28e454: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28e454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28e458: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x28e458u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e45c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28e45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28e460: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28e460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28e464: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28e464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28e468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28e46c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28e470: 0x8c870070  lw          $a3, 0x70($a0)
    ctx->pc = 0x28e470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x28e474: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x28e474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x28e478: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x28E478u;
    {
        const bool branch_taken_0x28e478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E478u;
        // 0x28e47c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e478) {
            ctx->pc = 0x28E4A8u;
            goto label_28e4a8;
        }
    }
    ctx->pc = 0x28E480u;
    // 0x28e480: 0x86c30054  lh          $v1, 0x54($s6)
    ctx->pc = 0x28e480u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x28e484: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x28E484u;
    {
        const bool branch_taken_0x28e484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e484) {
            ctx->pc = 0x28E538u;
            goto label_28e538;
        }
    }
    ctx->pc = 0x28E48Cu;
    // 0x28e48c: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x28e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x28e490: 0x8046000d  lb          $a2, 0xD($v0)
    ctx->pc = 0x28e490u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x28e494: 0xc0a39d8  jal         func_28E760
    ctx->pc = 0x28E494u;
    SET_GPR_U32(ctx, 31, 0x28E49Cu);
    ctx->pc = 0x28E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E494u;
    // 0x28e498: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E760u, 0x28E494u, 0x28E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E49Cu;
label_28e49c:
    // 0x28e49c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x28E49Cu;
    {
        const bool branch_taken_0x28e49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e49c) {
            ctx->pc = 0x28E538u;
            goto label_28e538;
        }
    }
    ctx->pc = 0x28E4A4u;
    // 0x28e4a4: 0x0  nop
    ctx->pc = 0x28e4a4u;
    // NOP
label_28e4a8:
    // 0x28e4a8: 0x86c60054  lh          $a2, 0x54($s6)
    ctx->pc = 0x28e4a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x28e4ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28e4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28e4b0: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x28e4b0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x28e4b4: 0x0  nop
    ctx->pc = 0x28e4b4u;
    // NOP
    // 0x28e4b8: 0x0  nop
    ctx->pc = 0x28e4b8u;
    // NOP
    // 0x28e4bc: 0x1810  mfhi        $v1
    ctx->pc = 0x28e4bcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28e4c0: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x28E4C0u;
    {
        const bool branch_taken_0x28e4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e4c0) {
            ctx->pc = 0x28E538u;
            goto label_28e538;
        }
    }
    ctx->pc = 0x28E4C8u;
    // 0x28e4c8: 0x90e30012  lbu         $v1, 0x12($a3)
    ctx->pc = 0x28e4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x28e4cc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x28e4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28e4d0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x28E4D0u;
    {
        const bool branch_taken_0x28e4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e4d0) {
            ctx->pc = 0x28E510u;
            goto label_28e510;
        }
    }
    ctx->pc = 0x28E4D8u;
    // 0x28e4d8: 0x8ec30074  lw          $v1, 0x74($s6)
    ctx->pc = 0x28e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x28e4dc: 0x86c60080  lh          $a2, 0x80($s6)
    ctx->pc = 0x28e4dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x28e4e0: 0x9063000d  lbu         $v1, 0xD($v1)
    ctx->pc = 0x28e4e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x28e4e4: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x28e4e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28e4e8: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x28E4E8u;
    {
        const bool branch_taken_0x28e4e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e4e8) {
            ctx->pc = 0x28E538u;
            goto label_28e538;
        }
    }
    ctx->pc = 0x28E4F0u;
    // 0x28e4f0: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x28e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28e4f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e4f8: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x28e4f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x28e4fc: 0xa6c20080  sh          $v0, 0x80($s6)
    ctx->pc = 0x28e4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x28e500: 0xc0a39d8  jal         func_28E760
    ctx->pc = 0x28E500u;
    SET_GPR_U32(ctx, 31, 0x28E508u);
    ctx->pc = 0x28E504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E500u;
    // 0x28e504: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E760u, 0x28E500u, 0x28E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E508u;
label_28e508:
    // 0x28e508: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28E508u;
    {
        const bool branch_taken_0x28e508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e508) {
            ctx->pc = 0x28E538u;
            goto label_28e538;
        }
    }
    ctx->pc = 0x28E510u;
label_28e510:
    // 0x28e510: 0x86c30080  lh          $v1, 0x80($s6)
    ctx->pc = 0x28e510u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x28e514: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E514u;
    {
        const bool branch_taken_0x28e514 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x28e514) {
            ctx->pc = 0x28E538u;
            goto label_28e538;
        }
    }
    ctx->pc = 0x28E51Cu;
    // 0x28e51c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x28e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28e520: 0x3363c  dsll32      $a2, $v1, 24
    ctx->pc = 0x28e520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28e524: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x28e524u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x28e528: 0xa6c20080  sh          $v0, 0x80($s6)
    ctx->pc = 0x28e528u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x28e52c: 0xc0a39d8  jal         func_28E760
    ctx->pc = 0x28E52Cu;
    SET_GPR_U32(ctx, 31, 0x28E534u);
    ctx->pc = 0x28E530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E52Cu;
    // 0x28e530: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E760u, 0x28E52Cu, 0x28E534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E534u;
label_28e534:
    // 0x28e534: 0x0  nop
    ctx->pc = 0x28e534u;
    // NOP
label_28e538:
    // 0x28e538: 0x8ec40074  lw          $a0, 0x74($s6)
    ctx->pc = 0x28e538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x28e53c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x28e53cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e540: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28e540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e544: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x28e544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28e548: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28e548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28e54c: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x28E54Cu;
    {
        const bool branch_taken_0x28e54c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E54Cu;
        // 0x28e550: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e54c) {
            ctx->pc = 0x28E688u;
            goto label_28e688;
        }
    }
    ctx->pc = 0x28E554u;
    // 0x28e554: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28e554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e558:
    // 0x28e558: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x28e558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x28e55c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28e55cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e560: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x28e560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x28e564: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x28e564u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28e568: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x28E568u;
    {
        const bool branch_taken_0x28e568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E568u;
        // 0x28e56c: 0x283f018  mult        $fp, $s4, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e568) {
            ctx->pc = 0x28E670u;
            goto label_28e670;
        }
    }
    ctx->pc = 0x28E570u;
label_28e570:
    // 0x28e570: 0x8ec4007c  lw          $a0, 0x7C($s6)
    ctx->pc = 0x28e570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
    // 0x28e574: 0x3d32821  addu        $a1, $fp, $s3
    ctx->pc = 0x28e574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x28e578: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x28e578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x28e57c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x28e57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28e580: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x28e580u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x28e584: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x28e584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x28e588: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x28e588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28e58c: 0x86240020  lh          $a0, 0x20($s1)
    ctx->pc = 0x28e58cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28e590: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x28E590u;
    {
        const bool branch_taken_0x28e590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E590u;
        // 0x28e594: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e590) {
            ctx->pc = 0x28E658u;
            goto label_28e658;
        }
    }
    ctx->pc = 0x28E598u;
    // 0x28e598: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x28E598u;
    SET_GPR_U32(ctx, 31, 0x28E5A0u);
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x28E598u, 0x28E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E5A0u;
label_28e5a0:
    // 0x28e5a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E5A0u;
    {
        const bool branch_taken_0x28e5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5A0u;
        // 0x28e5a4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5a0) {
            ctx->pc = 0x28E5B0u;
            goto label_28e5b0;
        }
    }
    ctx->pc = 0x28E5A8u;
    // 0x28e5a8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x28E5A8u;
    {
        const bool branch_taken_0x28e5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5A8u;
        // 0x28e5ac: 0xa6230020  sh          $v1, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5a8) {
            ctx->pc = 0x28E658u;
            goto label_28e658;
        }
    }
    ctx->pc = 0x28E5B0u;
label_28e5b0:
    // 0x28e5b0: 0x8ec20070  lw          $v0, 0x70($s6)
    ctx->pc = 0x28e5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x28e5b4: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x28e5b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x28e5b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28e5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28e5bc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28E5BCu;
    {
        const bool branch_taken_0x28e5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e5bc) {
            ctx->pc = 0x28E610u;
            goto label_28e610;
        }
    }
    ctx->pc = 0x28E5C4u;
    // 0x28e5c4: 0x86260026  lh          $a2, 0x26($s1)
    ctx->pc = 0x28e5c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x28e5c8: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E5C8u;
    {
        const bool branch_taken_0x28e5c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5C8u;
        // 0x28e5cc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5c8) {
            ctx->pc = 0x28E5DCu;
            goto label_28e5dc;
        }
    }
    ctx->pc = 0x28E5D0u;
    // 0x28e5d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28e5d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28E5D4u;
    {
        const bool branch_taken_0x28e5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5D4u;
        // 0x28e5d8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5d4) {
            ctx->pc = 0x28E5ECu;
            goto label_28e5ec;
        }
    }
    ctx->pc = 0x28E5DCu;
label_28e5dc:
    // 0x28e5dc: 0x86240020  lh          $a0, 0x20($s1)
    ctx->pc = 0x28e5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28e5e0: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x28E5E0u;
    SET_GPR_U32(ctx, 31, 0x28E5E8u);
    ctx->pc = 0x28E5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E5E0u;
    // 0x28e5e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x28E5E0u, 0x28E5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E5E8u;
label_28e5e8:
    // 0x28e5e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28e5ec:
    // 0x28e5ec: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x28e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x28e5f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28e5f4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28e5f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28e5f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28e5f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28e5fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x28e5fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28e600: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28e600u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28e604: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x28e604u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x28e608: 0x0  nop
    ctx->pc = 0x28e608u;
    // NOP
    // 0x28e60c: 0xa6220022  sh          $v0, 0x22($s1)
    ctx->pc = 0x28e60cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
label_28e610:
    // 0x28e610: 0x8ec20078  lw          $v0, 0x78($s6)
    ctx->pc = 0x28e610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x28e614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28e614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e618: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28e618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e61c: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x28E61Cu;
    SET_GPR_U32(ctx, 31, 0x28E624u);
    ctx->pc = 0x28E620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E61Cu;
    // 0x28e620: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x28E61Cu, 0x28E624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E624u;
label_28e624:
    // 0x28e624: 0x86230020  lh          $v1, 0x20($s1)
    ctx->pc = 0x28e624u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28e628: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28e628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28e62c: 0xa6230020  sh          $v1, 0x20($s1)
    ctx->pc = 0x28e62cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x28e630: 0x86240020  lh          $a0, 0x20($s1)
    ctx->pc = 0x28e630u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28e634: 0x86230026  lh          $v1, 0x26($s1)
    ctx->pc = 0x28e634u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x28e638: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x28e638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28e63c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E63Cu;
    {
        const bool branch_taken_0x28e63c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E63Cu;
        // 0x28e640: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e63c) {
            ctx->pc = 0x28E650u;
            goto label_28e650;
        }
    }
    ctx->pc = 0x28E644u;
    // 0x28e644: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28E644u;
    {
        const bool branch_taken_0x28e644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E644u;
        // 0x28e648: 0xa6230020  sh          $v1, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e644) {
            ctx->pc = 0x28E658u;
            goto label_28e658;
        }
    }
    ctx->pc = 0x28E64Cu;
    // 0x28e64c: 0x0  nop
    ctx->pc = 0x28e64cu;
    // NOP
label_28e650:
    // 0x28e650: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28e650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x28e654: 0x0  nop
    ctx->pc = 0x28e654u;
    // NOP
label_28e658:
    // 0x28e658: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x28e658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x28e65c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28e65cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28e660: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x28e660u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x28e664: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x28e664u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28e668: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x28E668u;
    {
        const bool branch_taken_0x28e668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e668) {
            ctx->pc = 0x28E570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e570;
        }
    }
    ctx->pc = 0x28E670u;
label_28e670:
    // 0x28e670: 0x8ec40074  lw          $a0, 0x74($s6)
    ctx->pc = 0x28e670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x28e674: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28e674u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x28e678: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x28e678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28e67c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x28e67cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28e680: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x28E680u;
    {
        const bool branch_taken_0x28e680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E680u;
        // 0x28e684: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e680) {
            ctx->pc = 0x28E558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e558;
        }
    }
    ctx->pc = 0x28E688u;
label_28e688:
    // 0x28e688: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x28e688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x28e68c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x28e68cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x28e690: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x28e690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28e694: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28E694u;
    {
        const bool branch_taken_0x28e694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E694u;
        // 0x28e698: 0x2f2b821  addu        $s7, $s7, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e694) {
            ctx->pc = 0x28E6C8u;
            goto label_28e6c8;
        }
    }
    ctx->pc = 0x28E69Cu;
    // 0x28e69c: 0x9083000d  lbu         $v1, 0xD($a0)
    ctx->pc = 0x28e69cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x28e6a0: 0x86c40080  lh          $a0, 0x80($s6)
    ctx->pc = 0x28e6a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x28e6a4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x28e6a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28e6a8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x28E6A8u;
    {
        const bool branch_taken_0x28e6a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e6a8) {
            ctx->pc = 0x28E6E8u;
            goto label_28e6e8;
        }
    }
    ctx->pc = 0x28E6B0u;
    // 0x28e6b0: 0x16e0000d  bnez        $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x28E6B0u;
    {
        const bool branch_taken_0x28e6b0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6B0u;
        // 0x28e6b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6b0) {
            ctx->pc = 0x28E6E8u;
            goto label_28e6e8;
        }
    }
    ctx->pc = 0x28E6B8u;
    // 0x28e6b8: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x28E6B8u;
    SET_GPR_U32(ctx, 31, 0x28E6C0u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x28E6B8u, 0x28E6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E6C0u;
label_28e6c0:
    // 0x28e6c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28E6C0u;
    {
        const bool branch_taken_0x28e6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e6c0) {
            ctx->pc = 0x28E6E8u;
            goto label_28e6e8;
        }
    }
    ctx->pc = 0x28E6C8u;
label_28e6c8:
    // 0x28e6c8: 0x86c30080  lh          $v1, 0x80($s6)
    ctx->pc = 0x28e6c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x28e6cc: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E6CCu;
    {
        const bool branch_taken_0x28e6cc = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x28e6cc) {
            ctx->pc = 0x28E6E8u;
            goto label_28e6e8;
        }
    }
    ctx->pc = 0x28E6D4u;
    // 0x28e6d4: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E6D4u;
    {
        const bool branch_taken_0x28e6d4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E6D4u;
        // 0x28e6d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6d4) {
            ctx->pc = 0x28E6E8u;
            goto label_28e6e8;
        }
    }
    ctx->pc = 0x28E6DCu;
    // 0x28e6dc: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x28E6DCu;
    SET_GPR_U32(ctx, 31, 0x28E6E4u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x28E6DCu, 0x28E6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E6E4u;
label_28e6e4:
    // 0x28e6e4: 0x0  nop
    ctx->pc = 0x28e6e4u;
    // NOP
label_28e6e8:
    // 0x28e6e8: 0x7aa30020  lq          $v1, 0x20($s5)
    ctx->pc = 0x28e6e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x28e6ec: 0x7ec30040  sq          $v1, 0x40($s6)
    ctx->pc = 0x28e6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 64), GPR_VEC(ctx, 3));
    // 0x28e6f0: 0x86c30054  lh          $v1, 0x54($s6)
    ctx->pc = 0x28e6f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x28e6f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28e6f8: 0xa6c30054  sh          $v1, 0x54($s6)
    ctx->pc = 0x28e6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x28e6fc: 0x86c30054  lh          $v1, 0x54($s6)
    ctx->pc = 0x28e6fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x28e700: 0x28637ff0  slti        $v1, $v1, 0x7FF0
    ctx->pc = 0x28e700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x28e704: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28E704u;
    {
        const bool branch_taken_0x28e704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E704u;
        // 0x28e708: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e704) {
            ctx->pc = 0x28E710u;
            goto label_28e710;
        }
    }
    ctx->pc = 0x28E70Cu;
    // 0x28e70c: 0xa6c30054  sh          $v1, 0x54($s6)
    ctx->pc = 0x28e70cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 84), (uint16_t)GPR_U32(ctx, 3));
label_28e710:
    // 0x28e710: 0x92c30050  lbu         $v1, 0x50($s6)
    ctx->pc = 0x28e710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 80)));
    // 0x28e714: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x28e714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x28e718: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E718u;
    {
        const bool branch_taken_0x28e718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E718u;
        // 0x28e71c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e718) {
            ctx->pc = 0x28E728u;
            goto label_28e728;
        }
    }
    ctx->pc = 0x28E720u;
    // 0x28e720: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x28E720u;
    SET_GPR_U32(ctx, 31, 0x28E728u);
    ctx->pc = 0x28E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E720u;
    // 0x28e724: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x28E720u, 0x28E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E728u;
label_28e728:
    // 0x28e728: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28e728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28e72c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28e72cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e730: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28e730u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28e734: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28e734u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28e738: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28e738u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28e73c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28e73cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28e740: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28e740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e744: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28e744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28e748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e74c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28e74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e750: 0x3e00008  jr          $ra
    ctx->pc = 0x28E750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E750u;
        // 0x28e754: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E758u;
}
