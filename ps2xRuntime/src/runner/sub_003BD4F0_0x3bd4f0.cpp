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

// Function: sub_003BD4F0
// Address: 0x3bd4f0 - 0x3be224
void sub_003BD4F0_0x3bd4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD4F0_0x3bd4f0");
#endif

    switch (ctx->pc) {
        case 0x3bd550u: goto label_3bd550;
        case 0x3bd574u: goto label_3bd574;
        case 0x3bd580u: goto label_3bd580;
        case 0x3bd5d0u: goto label_3bd5d0;
        case 0x3bd5f4u: goto label_3bd5f4;
        case 0x3bd600u: goto label_3bd600;
        case 0x3bd66cu: goto label_3bd66c;
        case 0x3bd6d0u: goto label_3bd6d0;
        case 0x3bd6fcu: goto label_3bd6fc;
        case 0x3bd71cu: goto label_3bd71c;
        case 0x3bd738u: goto label_3bd738;
        case 0x3bd758u: goto label_3bd758;
        case 0x3bd760u: goto label_3bd760;
        case 0x3bd7dcu: goto label_3bd7dc;
        case 0x3bd7f4u: goto label_3bd7f4;
        case 0x3bd820u: goto label_3bd820;
        case 0x3bd838u: goto label_3bd838;
        case 0x3bd870u: goto label_3bd870;
        case 0x3bd894u: goto label_3bd894;
        case 0x3bd8a0u: goto label_3bd8a0;
        case 0x3bd904u: goto label_3bd904;
        case 0x3bd960u: goto label_3bd960;
        case 0x3bd98cu: goto label_3bd98c;
        case 0x3bd9acu: goto label_3bd9ac;
        case 0x3bd9c8u: goto label_3bd9c8;
        case 0x3bd9e8u: goto label_3bd9e8;
        case 0x3bd9f0u: goto label_3bd9f0;
        case 0x3bda6cu: goto label_3bda6c;
        case 0x3bda84u: goto label_3bda84;
        case 0x3bdab0u: goto label_3bdab0;
        case 0x3bdac8u: goto label_3bdac8;
        case 0x3bdb00u: goto label_3bdb00;
        case 0x3bdb24u: goto label_3bdb24;
        case 0x3bdb30u: goto label_3bdb30;
        case 0x3bdb94u: goto label_3bdb94;
        case 0x3bdbf0u: goto label_3bdbf0;
        case 0x3bdc1cu: goto label_3bdc1c;
        case 0x3bdc3cu: goto label_3bdc3c;
        case 0x3bdc58u: goto label_3bdc58;
        case 0x3bdc78u: goto label_3bdc78;
        case 0x3bdc80u: goto label_3bdc80;
        case 0x3bdcfcu: goto label_3bdcfc;
        case 0x3bdd14u: goto label_3bdd14;
        case 0x3bdd40u: goto label_3bdd40;
        case 0x3bdd58u: goto label_3bdd58;
        case 0x3bdd90u: goto label_3bdd90;
        case 0x3bddb4u: goto label_3bddb4;
        case 0x3bddc0u: goto label_3bddc0;
        case 0x3bde2cu: goto label_3bde2c;
        case 0x3bde90u: goto label_3bde90;
        case 0x3bdebcu: goto label_3bdebc;
        case 0x3bdedcu: goto label_3bdedc;
        case 0x3bdef8u: goto label_3bdef8;
        case 0x3bdf18u: goto label_3bdf18;
        case 0x3bdf20u: goto label_3bdf20;
        case 0x3bdf9cu: goto label_3bdf9c;
        case 0x3bdfb4u: goto label_3bdfb4;
        case 0x3bdfe0u: goto label_3bdfe0;
        case 0x3bdff8u: goto label_3bdff8;
        case 0x3be030u: goto label_3be030;
        case 0x3be054u: goto label_3be054;
        case 0x3be068u: goto label_3be068;
        case 0x3be108u: goto label_3be108;
        case 0x3be12cu: goto label_3be12c;
        case 0x3be138u: goto label_3be138;
        case 0x3be15cu: goto label_3be15c;
        case 0x3be198u: goto label_3be198;
        case 0x3be1bcu: goto label_3be1bc;
        case 0x3be1c8u: goto label_3be1c8;
        case 0x3be1ecu: goto label_3be1ec;
        case 0x3be210u: goto label_3be210;
        default: break;
    }

    ctx->pc = 0x3bd4f0u;

    // 0x3bd4f0: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x3bd4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x3bd4f4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3bd4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3bd4f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bd4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bd4fc: 0x30aaffff  andi        $t2, $a1, 0xFFFF
    ctx->pc = 0x3bd4fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3bd500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bd500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bd504: 0x2463e100  addiu       $v1, $v1, -0x1F00
    ctx->pc = 0x3bd504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959360));
    // 0x3bd508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bd508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bd50c: 0x27a902b0  addiu       $t1, $sp, 0x2B0
    ctx->pc = 0x3bd50cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x3bd510: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x3bd510u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x65E100u));
    // 0x3bd514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bd514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd518: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x3bd518u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x65E110u));
    // 0x3bd51c: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x3bd51cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x3bd520: 0x24030065  addiu       $v1, $zero, 0x65
    ctx->pc = 0x3bd520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x3bd524: 0x1543001e  bne         $t2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3BD524u;
    {
        const bool branch_taken_0x3bd524 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x3BD528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD524u;
        // 0x3bd528: 0x7d250010  sq          $a1, 0x10($t1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 9), 16), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd524) {
            ctx->pc = 0x3BD5A0u;
            goto label_3bd5a0;
        }
    }
    ctx->pc = 0x3BD52Cu;
    // 0x3bd52c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3bd52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3bd530: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3bd530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3bd534: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BD534u;
    {
        const bool branch_taken_0x3bd534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD534u;
        // 0x3bd538: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd534) {
            ctx->pc = 0x3BD558u;
            goto label_3bd558;
        }
    }
    ctx->pc = 0x3BD53Cu;
    // 0x3bd53c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bd53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd540: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3bd540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bd544: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bd544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd548: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BD548u;
    SET_GPR_U32(ctx, 31, 0x3BD550u);
    ctx->pc = 0x3BD54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD548u;
    // 0x3bd54c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BD548u, 0x3BD550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD550u;
label_3bd550:
    // 0x3bd550: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BD550u;
    {
        const bool branch_taken_0x3bd550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd550) {
            ctx->pc = 0x3BD578u;
            goto label_3bd578;
        }
    }
    ctx->pc = 0x3BD558u;
label_3bd558:
    // 0x3bd558: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3bd558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3bd55c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bd55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bd560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd564: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3bd564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bd568: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bd568u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd56c: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BD56Cu;
    SET_GPR_U32(ctx, 31, 0x3BD574u);
    ctx->pc = 0x3BD570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD56Cu;
    // 0x3bd570: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BD56Cu, 0x3BD574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD574u;
label_3bd574:
    // 0x3bd574: 0x0  nop
    ctx->pc = 0x3bd574u;
    // NOP
label_3bd578:
    // 0x3bd578: 0xc0ef8bc  jal         func_3BE2F0
    ctx->pc = 0x3BD578u;
    SET_GPR_U32(ctx, 31, 0x3BD580u);
    ctx->pc = 0x3BD57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD578u;
    // 0x3bd57c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE2F0u, 0x3BD578u, 0x3BD580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD580u;
label_3bd580:
    // 0x3bd580: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd584: 0x8c231400  lw          $v1, 0x1400($at)
    ctx->pc = 0x3bd584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x811400u));
    // 0x3bd588: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x3bd588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x3bd58c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd590: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x3bd590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x3bd594: 0x1000031e  b           . + 4 + (0x31E << 2)
    ctx->pc = 0x3BD594u;
    {
        const bool branch_taken_0x3bd594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD594u;
        // 0x3bd598: 0xac231400  sw          $v1, 0x1400($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd594) {
            ctx->pc = 0x3BE210u;
            goto label_3be210;
        }
    }
    ctx->pc = 0x3BD59Cu;
    // 0x3bd59c: 0x0  nop
    ctx->pc = 0x3bd59cu;
    // NOP
label_3bd5a0:
    // 0x3bd5a0: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x3bd5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x3bd5a4: 0x154300a6  bne         $t2, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x3BD5A4u;
    {
        const bool branch_taken_0x3bd5a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bd5a4) {
            ctx->pc = 0x3BD840u;
            goto label_3bd840;
        }
    }
    ctx->pc = 0x3BD5ACu;
    // 0x3bd5ac: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3bd5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3bd5b0: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3bd5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3bd5b4: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BD5B4u;
    {
        const bool branch_taken_0x3bd5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BD5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD5B4u;
        // 0x3bd5b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd5b4) {
            ctx->pc = 0x3BD5D8u;
            goto label_3bd5d8;
        }
    }
    ctx->pc = 0x3BD5BCu;
    // 0x3bd5bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bd5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd5c0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3bd5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bd5c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bd5c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd5c8: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BD5C8u;
    SET_GPR_U32(ctx, 31, 0x3BD5D0u);
    ctx->pc = 0x3BD5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD5C8u;
    // 0x3bd5cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BD5C8u, 0x3BD5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD5D0u;
label_3bd5d0:
    // 0x3bd5d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BD5D0u;
    {
        const bool branch_taken_0x3bd5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd5d0) {
            ctx->pc = 0x3BD5F8u;
            goto label_3bd5f8;
        }
    }
    ctx->pc = 0x3BD5D8u;
label_3bd5d8:
    // 0x3bd5d8: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3bd5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3bd5dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bd5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd5e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bd5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd5e4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3bd5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bd5e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bd5e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd5ec: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BD5ECu;
    SET_GPR_U32(ctx, 31, 0x3BD5F4u);
    ctx->pc = 0x3BD5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD5ECu;
    // 0x3bd5f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BD5ECu, 0x3BD5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD5F4u;
label_3bd5f4:
    // 0x3bd5f4: 0x0  nop
    ctx->pc = 0x3bd5f4u;
    // NOP
label_3bd5f8:
    // 0x3bd5f8: 0xc0ef8bc  jal         func_3BE2F0
    ctx->pc = 0x3BD5F8u;
    SET_GPR_U32(ctx, 31, 0x3BD600u);
    ctx->pc = 0x3BD5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD5F8u;
    // 0x3bd5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE2F0u, 0x3BD5F8u, 0x3BD600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD600u;
label_3bd600:
    // 0x3bd600: 0x3c02c41d  lui         $v0, 0xC41D
    ctx->pc = 0x3bd600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50205 << 16));
    // 0x3bd604: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd608: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3bd608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3bd60c: 0x8c231400  lw          $v1, 0x1400($at)
    ctx->pc = 0x3bd60cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x811400u));
    // 0x3bd610: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x3bd610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x3bd614: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x3bd614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x3bd618: 0x3c024596  lui         $v0, 0x4596
    ctx->pc = 0x3bd618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17814 << 16));
    // 0x3bd61c: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x3bd61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
    // 0x3bd620: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x3bd620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x3bd624: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3bd624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3bd628: 0x3c02441d  lui         $v0, 0x441D
    ctx->pc = 0x3bd628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17437 << 16));
    // 0x3bd62c: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x3bd62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x3bd630: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3bd630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3bd634: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x3bd634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x3bd638: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd63c: 0x3107c  dsll32      $v0, $v1, 1
    ctx->pc = 0x3bd63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 1));
    // 0x3bd640: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x3bd640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x3bd644: 0xac221400  sw          $v0, 0x1400($at)
    ctx->pc = 0x3bd644u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5120), GPR_U32(ctx, 2));
    // 0x3bd648: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x3bd648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bd64c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x3bd64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bd650: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3bd650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd654: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3bd654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd658: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bd658u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bd65c: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bd65cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3bd660: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bd660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3bd664: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3BD664u;
    SET_GPR_U32(ctx, 31, 0x3BD66Cu);
    ctx->pc = 0x3BD668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD664u;
    // 0x3bd668: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BD664u, 0x3BD66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD66Cu;
label_3bd66c:
    // 0x3bd66c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x3bd66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3bd670: 0x27a902a0  addiu       $t1, $sp, 0x2A0
    ctx->pc = 0x3bd670u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x3bd674: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x3bd674u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bd678: 0x3c034596  lui         $v1, 0x4596
    ctx->pc = 0x3bd678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17814 << 16));
    // 0x3bd67c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x3bd67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x3bd680: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3bd680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3bd684: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x3bd684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x3bd688: 0x3c02c404  lui         $v0, 0xC404
    ctx->pc = 0x3bd688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50180 << 16));
    // 0x3bd68c: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x3bd68cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x3bd690: 0x34478000  ori         $a3, $v0, 0x8000
    ctx->pc = 0x3bd690u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3bd694: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x3bd694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
    // 0x3bd698: 0x3c024404  lui         $v0, 0x4404
    ctx->pc = 0x3bd698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17412 << 16));
    // 0x3bd69c: 0xafa70170  sw          $a3, 0x170($sp)
    ctx->pc = 0x3bd69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 7));
    // 0x3bd6a0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3bd6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3bd6a4: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x3bd6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
    // 0x3bd6a8: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x3bd6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x3bd6ac: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x3bd6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bd6b0: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x3bd6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bd6b4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3bd6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd6b8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3bd6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd6bc: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bd6bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bd6c0: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bd6c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3bd6c4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bd6c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3bd6c8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3BD6C8u;
    SET_GPR_U32(ctx, 31, 0x3BD6D0u);
    ctx->pc = 0x3BD6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD6C8u;
    // 0x3bd6cc: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BD6C8u, 0x3BD6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD6D0u;
label_3bd6d0:
    // 0x3bd6d0: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x3bd6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3bd6d4: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x3bd6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x3bd6d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3bd6d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bd6dc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bd6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd6e4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3bd6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3bd6e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bd6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bd6ec: 0x8c231400  lw          $v1, 0x1400($at)
    ctx->pc = 0x3bd6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x811400u));
    // 0x3bd6f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3bd6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bd6f4: 0xc0ef504  jal         func_3BD410
    ctx->pc = 0x3BD6F4u;
    SET_GPR_U32(ctx, 31, 0x3BD6FCu);
    ctx->pc = 0x3BD6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD6F4u;
    // 0x3bd6f8: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BD6F4u, 0x3BD6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD6FCu;
label_3bd6fc:
    // 0x3bd6fc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3bd6fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd700: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3bd700u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd704: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x3bd704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x3bd708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bd708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd70c: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x3bd70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x3bd710: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bd710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd714: 0xc0efa34  jal         func_3BE8D0
    ctx->pc = 0x3BD714u;
    SET_GPR_U32(ctx, 31, 0x3BD71Cu);
    ctx->pc = 0x3BD718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD714u;
    // 0x3bd718: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE8D0u, 0x3BD714u, 0x3BD71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD71Cu;
label_3bd71c:
    // 0x3bd71c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd720: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bd720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bd724: 0x8c231400  lw          $v1, 0x1400($at)
    ctx->pc = 0x3bd724u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x811400u));
    // 0x3bd728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bd728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd72c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3bd72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bd730: 0xc0ef504  jal         func_3BD410
    ctx->pc = 0x3BD730u;
    SET_GPR_U32(ctx, 31, 0x3BD738u);
    ctx->pc = 0x3BD734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD730u;
    // 0x3bd734: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BD730u, 0x3BD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD738u;
label_3bd738:
    // 0x3bd738: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3bd738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd73c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3bd73cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd740: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x3bd740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x3bd744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bd744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd748: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x3bd748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x3bd74c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bd74cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd750: 0xc0efa34  jal         func_3BE8D0
    ctx->pc = 0x3BD750u;
    SET_GPR_U32(ctx, 31, 0x3BD758u);
    ctx->pc = 0x3BD754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD750u;
    // 0x3bd754: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE8D0u, 0x3BD750u, 0x3BD758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD758u;
label_3bd758:
    // 0x3bd758: 0xc0ef504  jal         func_3BD410
    ctx->pc = 0x3BD758u;
    SET_GPR_U32(ctx, 31, 0x3BD760u);
    ctx->pc = 0x3BD75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD758u;
    // 0x3bd75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BD758u, 0x3BD760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD760u;
label_3bd760:
    // 0x3bd760: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3bd760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3bd764: 0x24430007  addiu       $v1, $v0, 0x7
    ctx->pc = 0x3bd764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x3bd768: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BD768u;
    {
        const bool branch_taken_0x3bd768 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3BD76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD768u;
        // 0x3bd76c: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd768) {
            ctx->pc = 0x3BD77Cu;
            goto label_3bd77c;
        }
    }
    ctx->pc = 0x3BD770u;
    // 0x3bd770: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BD770u;
    {
        const bool branch_taken_0x3bd770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd770) {
            ctx->pc = 0x3BD77Cu;
            goto label_3bd77c;
        }
    }
    ctx->pc = 0x3BD778u;
    // 0x3bd778: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3bd778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3bd77c:
    // 0x3bd77c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bd77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bd780: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3bd780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3bd784: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x3bd784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3bd788: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bd788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bd78c: 0xc48202b0  lwc1        $f2, 0x2B0($a0)
    ctx->pc = 0x3bd78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bd790: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3bd790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x3bd794: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bd794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bd798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bd798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bd79c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3bd79cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bd7a0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3bd7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bd7a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3bd7a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3bd7a8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x3bd7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x3bd7ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3bd7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3bd7b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bd7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bd7b4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3bd7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bd7b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3bd7b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bd7bc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3bd7bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3bd7c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bd7c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bd7c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bd7c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bd7c8: 0x0  nop
    ctx->pc = 0x3bd7c8u;
    // NOP
    // 0x3bd7cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3bd7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3bd7d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3bd7d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3bd7d4: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x3BD7D4u;
    SET_GPR_U32(ctx, 31, 0x3BD7DCu);
    ctx->pc = 0x3BD7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD7D4u;
    // 0x3bd7d8: 0x30500fff  andi        $s0, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x3BD7D4u, 0x3BD7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD7DCu;
label_3bd7dc:
    // 0x3bd7dc: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x3bd7dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3bd7e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bd7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd7e4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3bd7e4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3bd7e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bd7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd7ec: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x3BD7ECu;
    SET_GPR_U32(ctx, 31, 0x3BD7F4u);
    ctx->pc = 0x3BD7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD7ECu;
    // 0x3bd7f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x3BD7ECu, 0x3BD7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD7F4u;
label_3bd7f4:
    // 0x3bd7f4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bd7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bd7f8: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3bd7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bd7fc: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3bd7fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bd800: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x3bd800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x3bd804: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3bd804u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3bd808: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bd808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bd80c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3bd80cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bd810: 0x1220027f  beqz        $s1, . + 4 + (0x27F << 2)
    ctx->pc = 0x3BD810u;
    {
        const bool branch_taken_0x3bd810 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD810u;
        // 0x3bd814: 0x27a40270  addiu       $a0, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd810) {
            ctx->pc = 0x3BE210u;
            goto label_3be210;
        }
    }
    ctx->pc = 0x3BD818u;
    // 0x3bd818: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x3BD818u;
    SET_GPR_U32(ctx, 31, 0x3BD820u);
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x3BD818u, 0x3BD820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD820u;
label_3bd820:
    // 0x3bd820: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x3bd820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3bd824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bd824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd828: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3bd828u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3bd82c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bd82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd830: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x3BD830u;
    SET_GPR_U32(ctx, 31, 0x3BD838u);
    ctx->pc = 0x3BD834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD830u;
    // 0x3bd834: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x3BD830u, 0x3BD838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD838u;
label_3bd838:
    // 0x3bd838: 0x10000275  b           . + 4 + (0x275 << 2)
    ctx->pc = 0x3BD838u;
    {
        const bool branch_taken_0x3bd838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd838) {
            ctx->pc = 0x3BE210u;
            goto label_3be210;
        }
    }
    ctx->pc = 0x3BD840u;
label_3bd840:
    // 0x3bd840: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x3bd840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3bd844: 0x154300a2  bne         $t2, $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x3BD844u;
    {
        const bool branch_taken_0x3bd844 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bd844) {
            ctx->pc = 0x3BDAD0u;
            goto label_3bdad0;
        }
    }
    ctx->pc = 0x3BD84Cu;
    // 0x3bd84c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3bd84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3bd850: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3bd850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3bd854: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BD854u;
    {
        const bool branch_taken_0x3bd854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD854u;
        // 0x3bd858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd854) {
            ctx->pc = 0x3BD878u;
            goto label_3bd878;
        }
    }
    ctx->pc = 0x3BD85Cu;
    // 0x3bd85c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bd85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd860: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3bd860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bd864: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bd864u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd868: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BD868u;
    SET_GPR_U32(ctx, 31, 0x3BD870u);
    ctx->pc = 0x3BD86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD868u;
    // 0x3bd86c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BD868u, 0x3BD870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD870u;
label_3bd870:
    // 0x3bd870: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BD870u;
    {
        const bool branch_taken_0x3bd870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bd870) {
            ctx->pc = 0x3BD898u;
            goto label_3bd898;
        }
    }
    ctx->pc = 0x3BD878u;
label_3bd878:
    // 0x3bd878: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3bd878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3bd87c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bd87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd880: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bd880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd884: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3bd884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bd888: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bd888u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd88c: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BD88Cu;
    SET_GPR_U32(ctx, 31, 0x3BD894u);
    ctx->pc = 0x3BD890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD88Cu;
    // 0x3bd890: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BD88Cu, 0x3BD894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD894u;
label_3bd894:
    // 0x3bd894: 0x0  nop
    ctx->pc = 0x3bd894u;
    // NOP
label_3bd898:
    // 0x3bd898: 0xc0ef8bc  jal         func_3BE2F0
    ctx->pc = 0x3BD898u;
    SET_GPR_U32(ctx, 31, 0x3BD8A0u);
    ctx->pc = 0x3BD89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD898u;
    // 0x3bd89c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE2F0u, 0x3BD898u, 0x3BD8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD8A0u;
label_3bd8a0:
    // 0x3bd8a0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd8a4: 0x3c02c41d  lui         $v0, 0xC41D
    ctx->pc = 0x3bd8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50205 << 16));
    // 0x3bd8a8: 0x8c271400  lw          $a3, 0x1400($at)
    ctx->pc = 0x3bd8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x811400u));
    // 0x3bd8ac: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x3bd8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3bd8b0: 0x3c024596  lui         $v0, 0x4596
    ctx->pc = 0x3bd8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17814 << 16));
    // 0x3bd8b4: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x3bd8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x3bd8b8: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x3bd8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x3bd8bc: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x3bd8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x3bd8c0: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x3bd8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x3bd8c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3bd8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3bd8c8: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x3bd8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x3bd8cc: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x3bd8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3bd8d0: 0x7107c  dsll32      $v0, $a3, 1
    ctx->pc = 0x3bd8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 1));
    // 0x3bd8d4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd8d8: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x3bd8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x3bd8dc: 0xac221400  sw          $v0, 0x1400($at)
    ctx->pc = 0x3bd8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5120), GPR_U32(ctx, 2));
    // 0x3bd8e0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x3bd8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bd8e4: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x3bd8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bd8e8: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3bd8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd8ec: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3bd8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd8f0: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bd8f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bd8f4: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bd8f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3bd8f8: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bd8f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3bd8fc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3BD8FCu;
    SET_GPR_U32(ctx, 31, 0x3BD904u);
    ctx->pc = 0x3BD900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD8FCu;
    // 0x3bd900: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BD8FCu, 0x3BD904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD904u;
label_3bd904:
    // 0x3bd904: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x3bd904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3bd908: 0x27a80260  addiu       $t0, $sp, 0x260
    ctx->pc = 0x3bd908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x3bd90c: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x3bd90cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bd910: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x3bd910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3bd914: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3bd914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3bd918: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x3bd918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x3bd91c: 0x3c02c404  lui         $v0, 0xC404
    ctx->pc = 0x3bd91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50180 << 16));
    // 0x3bd920: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x3bd920u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x3bd924: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x3bd924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3bd928: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x3bd928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x3bd92c: 0x3c024596  lui         $v0, 0x4596
    ctx->pc = 0x3bd92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17814 << 16));
    // 0x3bd930: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x3bd930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x3bd934: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x3bd934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x3bd938: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x3bd938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
    // 0x3bd93c: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x3bd93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bd940: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x3bd940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bd944: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3bd944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bd948: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3bd948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bd94c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bd94cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bd950: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bd950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3bd954: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bd954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3bd958: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3BD958u;
    SET_GPR_U32(ctx, 31, 0x3BD960u);
    ctx->pc = 0x3BD95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD958u;
    // 0x3bd95c: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BD958u, 0x3BD960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD960u;
label_3bd960:
    // 0x3bd960: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x3bd960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3bd964: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x3bd964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x3bd968: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3bd968u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bd96c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bd970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd974: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3bd974u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3bd978: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bd978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bd97c: 0x8c231400  lw          $v1, 0x1400($at)
    ctx->pc = 0x3bd97cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x811400u));
    // 0x3bd980: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3bd980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bd984: 0xc0ef504  jal         func_3BD410
    ctx->pc = 0x3BD984u;
    SET_GPR_U32(ctx, 31, 0x3BD98Cu);
    ctx->pc = 0x3BD988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD984u;
    // 0x3bd988: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BD984u, 0x3BD98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD98Cu;
label_3bd98c:
    // 0x3bd98c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3bd98cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd990: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3bd990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd994: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x3bd994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x3bd998: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bd998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd99c: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x3bd99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x3bd9a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bd9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd9a4: 0xc0efa34  jal         func_3BE8D0
    ctx->pc = 0x3BD9A4u;
    SET_GPR_U32(ctx, 31, 0x3BD9ACu);
    ctx->pc = 0x3BD9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD9A4u;
    // 0x3bd9a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE8D0u, 0x3BD9A4u, 0x3BD9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD9ACu;
label_3bd9ac:
    // 0x3bd9ac: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bd9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bd9b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bd9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bd9b4: 0x8c231400  lw          $v1, 0x1400($at)
    ctx->pc = 0x3bd9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x811400u));
    // 0x3bd9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bd9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd9bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3bd9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bd9c0: 0xc0ef504  jal         func_3BD410
    ctx->pc = 0x3BD9C0u;
    SET_GPR_U32(ctx, 31, 0x3BD9C8u);
    ctx->pc = 0x3BD9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD9C0u;
    // 0x3bd9c4: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BD9C0u, 0x3BD9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD9C8u;
label_3bd9c8:
    // 0x3bd9c8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3bd9c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd9cc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3bd9ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd9d0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x3bd9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x3bd9d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bd9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd9d8: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x3bd9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x3bd9dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bd9dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd9e0: 0xc0efa34  jal         func_3BE8D0
    ctx->pc = 0x3BD9E0u;
    SET_GPR_U32(ctx, 31, 0x3BD9E8u);
    ctx->pc = 0x3BD9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD9E0u;
    // 0x3bd9e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE8D0u, 0x3BD9E0u, 0x3BD9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD9E8u;
label_3bd9e8:
    // 0x3bd9e8: 0xc0ef504  jal         func_3BD410
    ctx->pc = 0x3BD9E8u;
    SET_GPR_U32(ctx, 31, 0x3BD9F0u);
    ctx->pc = 0x3BD9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD9E8u;
    // 0x3bd9ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BD9E8u, 0x3BD9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD9F0u;
label_3bd9f0:
    // 0x3bd9f0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3bd9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3bd9f4: 0x24430005  addiu       $v1, $v0, 0x5
    ctx->pc = 0x3bd9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x3bd9f8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BD9F8u;
    {
        const bool branch_taken_0x3bd9f8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3BD9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD9F8u;
        // 0x3bd9fc: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd9f8) {
            ctx->pc = 0x3BDA0Cu;
            goto label_3bda0c;
        }
    }
    ctx->pc = 0x3BDA00u;
    // 0x3bda00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BDA00u;
    {
        const bool branch_taken_0x3bda00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bda00) {
            ctx->pc = 0x3BDA0Cu;
            goto label_3bda0c;
        }
    }
    ctx->pc = 0x3BDA08u;
    // 0x3bda08: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3bda08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3bda0c:
    // 0x3bda0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bda10: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3bda10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3bda14: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x3bda14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3bda18: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bda18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bda1c: 0xc48202b0  lwc1        $f2, 0x2B0($a0)
    ctx->pc = 0x3bda1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bda20: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3bda20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x3bda24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bda24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bda28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bda28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bda2c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3bda2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bda30: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3bda30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bda34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3bda34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3bda38: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x3bda38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x3bda3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3bda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3bda40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bda40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bda44: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3bda44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bda48: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3bda48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bda4c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3bda4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3bda50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bda50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bda54: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bda54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bda58: 0x0  nop
    ctx->pc = 0x3bda58u;
    // NOP
    // 0x3bda5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3bda5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3bda60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3bda60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3bda64: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x3BDA64u;
    SET_GPR_U32(ctx, 31, 0x3BDA6Cu);
    ctx->pc = 0x3BDA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDA64u;
    // 0x3bda68: 0x30500fff  andi        $s0, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x3BDA64u, 0x3BDA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDA6Cu;
label_3bda6c:
    // 0x3bda6c: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x3bda6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3bda70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bda70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bda74: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3bda74u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3bda78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bda78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bda7c: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x3BDA7Cu;
    SET_GPR_U32(ctx, 31, 0x3BDA84u);
    ctx->pc = 0x3BDA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDA7Cu;
    // 0x3bda80: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x3BDA7Cu, 0x3BDA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDA84u;
label_3bda84:
    // 0x3bda84: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bda84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bda88: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3bda88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bda8c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3bda8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bda90: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x3bda90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x3bda94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3bda94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3bda98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bda98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bda9c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3bda9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bdaa0: 0x122001db  beqz        $s1, . + 4 + (0x1DB << 2)
    ctx->pc = 0x3BDAA0u;
    {
        const bool branch_taken_0x3bdaa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDAA0u;
        // 0x3bdaa4: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdaa0) {
            ctx->pc = 0x3BE210u;
            goto label_3be210;
        }
    }
    ctx->pc = 0x3BDAA8u;
    // 0x3bdaa8: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x3BDAA8u;
    SET_GPR_U32(ctx, 31, 0x3BDAB0u);
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x3BDAA8u, 0x3BDAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDAB0u;
label_3bdab0:
    // 0x3bdab0: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x3bdab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3bdab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bdab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdab8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3bdab8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3bdabc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bdabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdac0: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x3BDAC0u;
    SET_GPR_U32(ctx, 31, 0x3BDAC8u);
    ctx->pc = 0x3BDAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDAC0u;
    // 0x3bdac4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x3BDAC0u, 0x3BDAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDAC8u;
label_3bdac8:
    // 0x3bdac8: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x3BDAC8u;
    {
        const bool branch_taken_0x3bdac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bdac8) {
            ctx->pc = 0x3BE210u;
            goto label_3be210;
        }
    }
    ctx->pc = 0x3BDAD0u;
label_3bdad0:
    // 0x3bdad0: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x3bdad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x3bdad4: 0x154300a2  bne         $t2, $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x3BDAD4u;
    {
        const bool branch_taken_0x3bdad4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bdad4) {
            ctx->pc = 0x3BDD60u;
            goto label_3bdd60;
        }
    }
    ctx->pc = 0x3BDADCu;
    // 0x3bdadc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3bdadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3bdae0: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3bdae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3bdae4: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BDAE4u;
    {
        const bool branch_taken_0x3bdae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BDAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDAE4u;
        // 0x3bdae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdae4) {
            ctx->pc = 0x3BDB08u;
            goto label_3bdb08;
        }
    }
    ctx->pc = 0x3BDAECu;
    // 0x3bdaec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bdaecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdaf0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3bdaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bdaf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bdaf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdaf8: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BDAF8u;
    SET_GPR_U32(ctx, 31, 0x3BDB00u);
    ctx->pc = 0x3BDAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDAF8u;
    // 0x3bdafc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BDAF8u, 0x3BDB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDB00u;
label_3bdb00:
    // 0x3bdb00: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BDB00u;
    {
        const bool branch_taken_0x3bdb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bdb00) {
            ctx->pc = 0x3BDB28u;
            goto label_3bdb28;
        }
    }
    ctx->pc = 0x3BDB08u;
label_3bdb08:
    // 0x3bdb08: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3bdb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3bdb0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bdb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdb10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bdb10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdb14: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3bdb14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bdb18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bdb18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdb1c: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BDB1Cu;
    SET_GPR_U32(ctx, 31, 0x3BDB24u);
    ctx->pc = 0x3BDB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDB1Cu;
    // 0x3bdb20: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BDB1Cu, 0x3BDB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDB24u;
label_3bdb24:
    // 0x3bdb24: 0x0  nop
    ctx->pc = 0x3bdb24u;
    // NOP
label_3bdb28:
    // 0x3bdb28: 0xc0ef8bc  jal         func_3BE2F0
    ctx->pc = 0x3BDB28u;
    SET_GPR_U32(ctx, 31, 0x3BDB30u);
    ctx->pc = 0x3BDB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDB28u;
    // 0x3bdb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE2F0u, 0x3BDB28u, 0x3BDB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDB30u;
label_3bdb30:
    // 0x3bdb30: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bdb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bdb34: 0x3c02441d  lui         $v0, 0x441D
    ctx->pc = 0x3bdb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17437 << 16));
    // 0x3bdb38: 0x8c271400  lw          $a3, 0x1400($at)
    ctx->pc = 0x3bdb38u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x811400u));
    // 0x3bdb3c: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x3bdb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3bdb40: 0x3c024596  lui         $v0, 0x4596
    ctx->pc = 0x3bdb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17814 << 16));
    // 0x3bdb44: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x3bdb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x3bdb48: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x3bdb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x3bdb4c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x3bdb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3bdb50: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x3bdb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
    // 0x3bdb54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3bdb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3bdb58: 0xafa30118  sw          $v1, 0x118($sp)
    ctx->pc = 0x3bdb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
    // 0x3bdb5c: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x3bdb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3bdb60: 0x7107c  dsll32      $v0, $a3, 1
    ctx->pc = 0x3bdb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 1));
    // 0x3bdb64: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bdb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bdb68: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x3bdb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x3bdb6c: 0xac221400  sw          $v0, 0x1400($at)
    ctx->pc = 0x3bdb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5120), GPR_U32(ctx, 2));
    // 0x3bdb70: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x3bdb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bdb74: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x3bdb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bdb78: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3bdb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bdb7c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3bdb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bdb80: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bdb80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bdb84: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bdb84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3bdb88: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bdb88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3bdb8c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3BDB8Cu;
    SET_GPR_U32(ctx, 31, 0x3BDB94u);
    ctx->pc = 0x3BDB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDB8Cu;
    // 0x3bdb90: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BDB8Cu, 0x3BDB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDB94u;
label_3bdb94:
    // 0x3bdb94: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3bdb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3bdb98: 0x27a80220  addiu       $t0, $sp, 0x220
    ctx->pc = 0x3bdb98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x3bdb9c: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x3bdb9cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bdba0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x3bdba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3bdba4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3bdba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bdba8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x3bdba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3bdbac: 0x3c024404  lui         $v0, 0x4404
    ctx->pc = 0x3bdbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17412 << 16));
    // 0x3bdbb0: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x3bdbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x3bdbb4: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x3bdbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3bdbb8: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x3bdbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x3bdbbc: 0x3c024596  lui         $v0, 0x4596
    ctx->pc = 0x3bdbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17814 << 16));
    // 0x3bdbc0: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x3bdbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x3bdbc4: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x3bdbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x3bdbc8: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x3bdbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x3bdbcc: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x3bdbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bdbd0: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x3bdbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bdbd4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3bdbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bdbd8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3bdbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bdbdc: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bdbdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bdbe0: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bdbe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3bdbe4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bdbe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3bdbe8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3BDBE8u;
    SET_GPR_U32(ctx, 31, 0x3BDBF0u);
    ctx->pc = 0x3BDBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDBE8u;
    // 0x3bdbec: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BDBE8u, 0x3BDBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDBF0u;
label_3bdbf0:
    // 0x3bdbf0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3bdbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bdbf4: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x3bdbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x3bdbf8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3bdbf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bdbfc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bdbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bdc00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bdc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdc04: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3bdc04u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3bdc08: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bdc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bdc0c: 0x8c231400  lw          $v1, 0x1400($at)
    ctx->pc = 0x3bdc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x811400u));
    // 0x3bdc10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3bdc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bdc14: 0xc0ef504  jal         func_3BD410
    ctx->pc = 0x3BDC14u;
    SET_GPR_U32(ctx, 31, 0x3BDC1Cu);
    ctx->pc = 0x3BDC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDC14u;
    // 0x3bdc18: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BDC14u, 0x3BDC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDC1Cu;
label_3bdc1c:
    // 0x3bdc1c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3bdc1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdc20: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3bdc20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdc24: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x3bdc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3bdc28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bdc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdc2c: 0x27a60220  addiu       $a2, $sp, 0x220
    ctx->pc = 0x3bdc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x3bdc30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bdc30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdc34: 0xc0efa34  jal         func_3BE8D0
    ctx->pc = 0x3BDC34u;
    SET_GPR_U32(ctx, 31, 0x3BDC3Cu);
    ctx->pc = 0x3BDC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDC34u;
    // 0x3bdc38: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE8D0u, 0x3BDC34u, 0x3BDC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDC3Cu;
label_3bdc3c:
    // 0x3bdc3c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bdc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bdc40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bdc44: 0x8c231400  lw          $v1, 0x1400($at)
    ctx->pc = 0x3bdc44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x811400u));
    // 0x3bdc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bdc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdc4c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3bdc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bdc50: 0xc0ef504  jal         func_3BD410
    ctx->pc = 0x3BDC50u;
    SET_GPR_U32(ctx, 31, 0x3BDC58u);
    ctx->pc = 0x3BDC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDC50u;
    // 0x3bdc54: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BDC50u, 0x3BDC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDC58u;
label_3bdc58:
    // 0x3bdc58: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3bdc58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdc5c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3bdc5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdc60: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x3bdc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x3bdc64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bdc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdc68: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x3bdc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x3bdc6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bdc6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdc70: 0xc0efa34  jal         func_3BE8D0
    ctx->pc = 0x3BDC70u;
    SET_GPR_U32(ctx, 31, 0x3BDC78u);
    ctx->pc = 0x3BDC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDC70u;
    // 0x3bdc74: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE8D0u, 0x3BDC70u, 0x3BDC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDC78u;
label_3bdc78:
    // 0x3bdc78: 0xc0ef504  jal         func_3BD410
    ctx->pc = 0x3BDC78u;
    SET_GPR_U32(ctx, 31, 0x3BDC80u);
    ctx->pc = 0x3BDC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDC78u;
    // 0x3bdc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BDC78u, 0x3BDC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDC80u;
label_3bdc80:
    // 0x3bdc80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3bdc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3bdc84: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x3bdc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bdc88: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BDC88u;
    {
        const bool branch_taken_0x3bdc88 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3BDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDC88u;
        // 0x3bdc8c: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdc88) {
            ctx->pc = 0x3BDC9Cu;
            goto label_3bdc9c;
        }
    }
    ctx->pc = 0x3BDC90u;
    // 0x3bdc90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BDC90u;
    {
        const bool branch_taken_0x3bdc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bdc90) {
            ctx->pc = 0x3BDC9Cu;
            goto label_3bdc9c;
        }
    }
    ctx->pc = 0x3BDC98u;
    // 0x3bdc98: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3bdc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3bdc9c:
    // 0x3bdc9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bdc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bdca0: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3bdca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3bdca4: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x3bdca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3bdca8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bdca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bdcac: 0xc48202b0  lwc1        $f2, 0x2B0($a0)
    ctx->pc = 0x3bdcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bdcb0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3bdcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x3bdcb4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bdcb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bdcb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bdcb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bdcbc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3bdcbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bdcc0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3bdcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bdcc4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3bdcc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3bdcc8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x3bdcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3bdccc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3bdcccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3bdcd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bdcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bdcd4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3bdcd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bdcd8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3bdcd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bdcdc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3bdcdcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3bdce0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bdce0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bdce4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bdce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bdce8: 0x0  nop
    ctx->pc = 0x3bdce8u;
    // NOP
    // 0x3bdcec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3bdcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3bdcf0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3bdcf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3bdcf4: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x3BDCF4u;
    SET_GPR_U32(ctx, 31, 0x3BDCFCu);
    ctx->pc = 0x3BDCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDCF4u;
    // 0x3bdcf8: 0x30500fff  andi        $s0, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x3BDCF4u, 0x3BDCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDCFCu;
label_3bdcfc:
    // 0x3bdcfc: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x3bdcfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3bdd00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bdd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdd04: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3bdd04u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3bdd08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bdd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdd0c: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x3BDD0Cu;
    SET_GPR_U32(ctx, 31, 0x3BDD14u);
    ctx->pc = 0x3BDD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDD0Cu;
    // 0x3bdd10: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x3BDD0Cu, 0x3BDD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDD14u;
label_3bdd14:
    // 0x3bdd14: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bdd14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bdd18: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3bdd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bdd1c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3bdd1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bdd20: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x3bdd20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x3bdd24: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3bdd24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3bdd28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bdd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bdd2c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3bdd2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bdd30: 0x12200137  beqz        $s1, . + 4 + (0x137 << 2)
    ctx->pc = 0x3BDD30u;
    {
        const bool branch_taken_0x3bdd30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDD30u;
        // 0x3bdd34: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdd30) {
            ctx->pc = 0x3BE210u;
            goto label_3be210;
        }
    }
    ctx->pc = 0x3BDD38u;
    // 0x3bdd38: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x3BDD38u;
    SET_GPR_U32(ctx, 31, 0x3BDD40u);
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x3BDD38u, 0x3BDD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDD40u;
label_3bdd40:
    // 0x3bdd40: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x3bdd40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3bdd44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bdd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdd48: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3bdd48u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3bdd4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bdd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdd50: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x3BDD50u;
    SET_GPR_U32(ctx, 31, 0x3BDD58u);
    ctx->pc = 0x3BDD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDD50u;
    // 0x3bdd54: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x3BDD50u, 0x3BDD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDD58u;
label_3bdd58:
    // 0x3bdd58: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x3BDD58u;
    {
        const bool branch_taken_0x3bdd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bdd58) {
            ctx->pc = 0x3BE210u;
            goto label_3be210;
        }
    }
    ctx->pc = 0x3BDD60u;
label_3bdd60:
    // 0x3bdd60: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x3bdd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x3bdd64: 0x154300a6  bne         $t2, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x3BDD64u;
    {
        const bool branch_taken_0x3bdd64 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x3bdd64) {
            ctx->pc = 0x3BE000u;
            goto label_3be000;
        }
    }
    ctx->pc = 0x3BDD6Cu;
    // 0x3bdd6c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3bdd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3bdd70: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3bdd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3bdd74: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BDD74u;
    {
        const bool branch_taken_0x3bdd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BDD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDD74u;
        // 0x3bdd78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdd74) {
            ctx->pc = 0x3BDD98u;
            goto label_3bdd98;
        }
    }
    ctx->pc = 0x3BDD7Cu;
    // 0x3bdd7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bdd7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdd80: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3bdd80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bdd84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bdd84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdd88: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BDD88u;
    SET_GPR_U32(ctx, 31, 0x3BDD90u);
    ctx->pc = 0x3BDD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDD88u;
    // 0x3bdd8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BDD88u, 0x3BDD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDD90u;
label_3bdd90:
    // 0x3bdd90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BDD90u;
    {
        const bool branch_taken_0x3bdd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bdd90) {
            ctx->pc = 0x3BDDB8u;
            goto label_3bddb8;
        }
    }
    ctx->pc = 0x3BDD98u;
label_3bdd98:
    // 0x3bdd98: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3bdd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3bdd9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bdd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdda0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bdda0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdda4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3bdda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bdda8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bdda8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bddac: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BDDACu;
    SET_GPR_U32(ctx, 31, 0x3BDDB4u);
    ctx->pc = 0x3BDDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDDACu;
    // 0x3bddb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BDDACu, 0x3BDDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDDB4u;
label_3bddb4:
    // 0x3bddb4: 0x0  nop
    ctx->pc = 0x3bddb4u;
    // NOP
label_3bddb8:
    // 0x3bddb8: 0xc0ef8bc  jal         func_3BE2F0
    ctx->pc = 0x3BDDB8u;
    SET_GPR_U32(ctx, 31, 0x3BDDC0u);
    ctx->pc = 0x3BDDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDDB8u;
    // 0x3bddbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE2F0u, 0x3BDDB8u, 0x3BDDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDDC0u;
label_3bddc0:
    // 0x3bddc0: 0x3c02441d  lui         $v0, 0x441D
    ctx->pc = 0x3bddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17437 << 16));
    // 0x3bddc4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bddc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bddc8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3bddc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3bddcc: 0x8c231400  lw          $v1, 0x1400($at)
    ctx->pc = 0x3bddccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x811400u));
    // 0x3bddd0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x3bddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x3bddd4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3bddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3bddd8: 0x3c024596  lui         $v0, 0x4596
    ctx->pc = 0x3bddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17814 << 16));
    // 0x3bdddc: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3bdddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x3bdde0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x3bdde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x3bdde4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3bdde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3bdde8: 0x3c02c41d  lui         $v0, 0xC41D
    ctx->pc = 0x3bdde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50205 << 16));
    // 0x3bddec: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3bddecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3bddf0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3bddf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3bddf4: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x3bddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x3bddf8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bddf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bddfc: 0x3107c  dsll32      $v0, $v1, 1
    ctx->pc = 0x3bddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 1));
    // 0x3bde00: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x3bde00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x3bde04: 0xac221400  sw          $v0, 0x1400($at)
    ctx->pc = 0x3bde04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5120), GPR_U32(ctx, 2));
    // 0x3bde08: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x3bde08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bde0c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x3bde0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bde10: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3bde10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bde14: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3bde14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bde18: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bde18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bde1c: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bde1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3bde20: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bde20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3bde24: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3BDE24u;
    SET_GPR_U32(ctx, 31, 0x3BDE2Cu);
    ctx->pc = 0x3BDE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDE24u;
    // 0x3bde28: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BDE24u, 0x3BDE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDE2Cu;
label_3bde2c:
    // 0x3bde2c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3bde2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3bde30: 0x27a901e0  addiu       $t1, $sp, 0x1E0
    ctx->pc = 0x3bde30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x3bde34: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x3bde34u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bde38: 0x3c034596  lui         $v1, 0x4596
    ctx->pc = 0x3bde38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17814 << 16));
    // 0x3bde3c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3bde3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3bde40: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3bde40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bde44: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x3bde44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3bde48: 0x3c024404  lui         $v0, 0x4404
    ctx->pc = 0x3bde48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17412 << 16));
    // 0x3bde4c: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x3bde4cu;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x3bde50: 0x34478000  ori         $a3, $v0, 0x8000
    ctx->pc = 0x3bde50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3bde54: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x3bde54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x3bde58: 0x3c02c404  lui         $v0, 0xC404
    ctx->pc = 0x3bde58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50180 << 16));
    // 0x3bde5c: 0xafa700b0  sw          $a3, 0xB0($sp)
    ctx->pc = 0x3bde5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 7));
    // 0x3bde60: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3bde60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3bde64: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x3bde64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x3bde68: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x3bde68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x3bde6c: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x3bde6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3bde70: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x3bde70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bde74: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3bde74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bde78: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x3bde78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bde7c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x3bde7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3bde80: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x3bde80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3bde84: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x3bde84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3bde88: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3BDE88u;
    SET_GPR_U32(ctx, 31, 0x3BDE90u);
    ctx->pc = 0x3BDE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDE88u;
    // 0x3bde8c: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3BDE88u, 0x3BDE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDE90u;
label_3bde90:
    // 0x3bde90: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3bde90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bde94: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x3bde94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x3bde98: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3bde98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bde9c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bde9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bdea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bdea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdea4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3bdea4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3bdea8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bdea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bdeac: 0x8c231400  lw          $v1, 0x1400($at)
    ctx->pc = 0x3bdeacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x811400u));
    // 0x3bdeb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3bdeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bdeb4: 0xc0ef504  jal         func_3BD410
    ctx->pc = 0x3BDEB4u;
    SET_GPR_U32(ctx, 31, 0x3BDEBCu);
    ctx->pc = 0x3BDEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDEB4u;
    // 0x3bdeb8: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BDEB4u, 0x3BDEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDEBCu;
label_3bdebc:
    // 0x3bdebc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3bdebcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdec0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3bdec0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdec4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x3bdec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x3bdec8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bdec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdecc: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x3bdeccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x3bded0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bded0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bded4: 0xc0efa34  jal         func_3BE8D0
    ctx->pc = 0x3BDED4u;
    SET_GPR_U32(ctx, 31, 0x3BDEDCu);
    ctx->pc = 0x3BDED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDED4u;
    // 0x3bded8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE8D0u, 0x3BDED4u, 0x3BDEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDEDCu;
label_3bdedc:
    // 0x3bdedc: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3bdedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3bdee0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bdee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bdee4: 0x8c231400  lw          $v1, 0x1400($at)
    ctx->pc = 0x3bdee4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x811400u));
    // 0x3bdee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bdee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdeec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3bdeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3bdef0: 0xc0ef504  jal         func_3BD410
    ctx->pc = 0x3BDEF0u;
    SET_GPR_U32(ctx, 31, 0x3BDEF8u);
    ctx->pc = 0x3BDEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDEF0u;
    // 0x3bdef4: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BDEF0u, 0x3BDEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDEF8u;
label_3bdef8:
    // 0x3bdef8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3bdef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdefc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3bdefcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdf00: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x3bdf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x3bdf04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bdf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdf08: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x3bdf08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x3bdf0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bdf0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdf10: 0xc0efa34  jal         func_3BE8D0
    ctx->pc = 0x3BDF10u;
    SET_GPR_U32(ctx, 31, 0x3BDF18u);
    ctx->pc = 0x3BDF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDF10u;
    // 0x3bdf14: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE8D0u, 0x3BDF10u, 0x3BDF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDF18u;
label_3bdf18:
    // 0x3bdf18: 0xc0ef504  jal         func_3BD410
    ctx->pc = 0x3BDF18u;
    SET_GPR_U32(ctx, 31, 0x3BDF20u);
    ctx->pc = 0x3BDF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDF18u;
    // 0x3bdf1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BDF18u, 0x3BDF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDF20u;
label_3bdf20:
    // 0x3bdf20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3bdf20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3bdf24: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x3bdf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x3bdf28: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BDF28u;
    {
        const bool branch_taken_0x3bdf28 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3BDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDF28u;
        // 0x3bdf2c: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdf28) {
            ctx->pc = 0x3BDF3Cu;
            goto label_3bdf3c;
        }
    }
    ctx->pc = 0x3BDF30u;
    // 0x3bdf30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BDF30u;
    {
        const bool branch_taken_0x3bdf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bdf30) {
            ctx->pc = 0x3BDF3Cu;
            goto label_3bdf3c;
        }
    }
    ctx->pc = 0x3BDF38u;
    // 0x3bdf38: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3bdf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3bdf3c:
    // 0x3bdf3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3bdf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bdf40: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3bdf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3bdf44: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x3bdf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3bdf48: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bdf48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bdf4c: 0xc48202b0  lwc1        $f2, 0x2B0($a0)
    ctx->pc = 0x3bdf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bdf50: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3bdf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x3bdf54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bdf54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bdf58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bdf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bdf5c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3bdf5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bdf60: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3bdf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bdf64: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3bdf64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3bdf68: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x3bdf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x3bdf6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3bdf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3bdf70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bdf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bdf74: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3bdf74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bdf78: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3bdf78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3bdf7c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3bdf7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3bdf80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bdf80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bdf84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bdf84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bdf88: 0x0  nop
    ctx->pc = 0x3bdf88u;
    // NOP
    // 0x3bdf8c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3bdf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3bdf90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3bdf90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3bdf94: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x3BDF94u;
    SET_GPR_U32(ctx, 31, 0x3BDF9Cu);
    ctx->pc = 0x3BDF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDF94u;
    // 0x3bdf98: 0x30500fff  andi        $s0, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x3BDF94u, 0x3BDF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDF9Cu;
label_3bdf9c:
    // 0x3bdf9c: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x3bdf9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3bdfa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bdfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdfa4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3bdfa4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3bdfa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bdfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdfac: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x3BDFACu;
    SET_GPR_U32(ctx, 31, 0x3BDFB4u);
    ctx->pc = 0x3BDFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDFACu;
    // 0x3bdfb0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x3BDFACu, 0x3BDFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDFB4u;
label_3bdfb4:
    // 0x3bdfb4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bdfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bdfb8: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3bdfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bdfbc: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3bdfbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bdfc0: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x3bdfc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x3bdfc4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3bdfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3bdfc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bdfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bdfcc: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3bdfccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bdfd0: 0x1220008f  beqz        $s1, . + 4 + (0x8F << 2)
    ctx->pc = 0x3BDFD0u;
    {
        const bool branch_taken_0x3bdfd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDFD0u;
        // 0x3bdfd4: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdfd0) {
            ctx->pc = 0x3BE210u;
            goto label_3be210;
        }
    }
    ctx->pc = 0x3BDFD8u;
    // 0x3bdfd8: 0xc07cd28  jal         func_1F34A0
    ctx->pc = 0x3BDFD8u;
    SET_GPR_U32(ctx, 31, 0x3BDFE0u);
    ctx->pc = 0x1F34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34A0u, 0x3BDFD8u, 0x3BDFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDFE0u;
label_3bdfe0:
    // 0x3bdfe0: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x3bdfe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3bdfe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bdfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdfe8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3bdfe8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3bdfec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3bdfecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdff0: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x3BDFF0u;
    SET_GPR_U32(ctx, 31, 0x3BDFF8u);
    ctx->pc = 0x3BDFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BDFF0u;
    // 0x3bdff4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x3BDFF0u, 0x3BDFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BDFF8u;
label_3bdff8:
    // 0x3bdff8: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x3BDFF8u;
    {
        const bool branch_taken_0x3bdff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bdff8) {
            ctx->pc = 0x3BE210u;
            goto label_3be210;
        }
    }
    ctx->pc = 0x3BE000u;
label_3be000:
    // 0x3be000: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x3be000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3be004: 0x15430034  bne         $t2, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3BE004u;
    {
        const bool branch_taken_0x3be004 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x3be004) {
            ctx->pc = 0x3BE0D8u;
            goto label_3be0d8;
        }
    }
    ctx->pc = 0x3BE00Cu;
    // 0x3be00c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3be00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3be010: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3be010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3be014: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BE014u;
    {
        const bool branch_taken_0x3be014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BE018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE014u;
        // 0x3be018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be014) {
            ctx->pc = 0x3BE038u;
            goto label_3be038;
        }
    }
    ctx->pc = 0x3BE01Cu;
    // 0x3be01c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be020: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3be020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3be024: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be028: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BE028u;
    SET_GPR_U32(ctx, 31, 0x3BE030u);
    ctx->pc = 0x3BE02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE028u;
    // 0x3be02c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BE028u, 0x3BE030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE030u;
label_3be030:
    // 0x3be030: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BE030u;
    {
        const bool branch_taken_0x3be030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be030) {
            ctx->pc = 0x3BE058u;
            goto label_3be058;
        }
    }
    ctx->pc = 0x3BE038u;
label_3be038:
    // 0x3be038: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3be038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3be03c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3be03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be044: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3be044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3be048: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be048u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be04c: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BE04Cu;
    SET_GPR_U32(ctx, 31, 0x3BE054u);
    ctx->pc = 0x3BE050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE04Cu;
    // 0x3be050: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BE04Cu, 0x3BE054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE054u;
label_3be054:
    // 0x3be054: 0x0  nop
    ctx->pc = 0x3be054u;
    // NOP
label_3be058:
    // 0x3be058: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x3be058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x3be05c: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x3be05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x3be060: 0xc056e04  jal         func_15B810
    ctx->pc = 0x3BE060u;
    SET_GPR_U32(ctx, 31, 0x3BE068u);
    ctx->pc = 0x3BE064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE060u;
    // 0x3be064: 0x24052100  addiu       $a1, $zero, 0x2100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x3BE060u, 0x3BE068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE068u;
label_3be068:
    // 0x3be068: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3be068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3be06c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x3be06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x3be070: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3be070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3be074: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3be074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3be078: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3be078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3be07c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3be07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3be080: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3be080u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3be084: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3be084u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3be088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3be088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3be08c: 0x0  nop
    ctx->pc = 0x3be08cu;
    // NOP
    // 0x3be090: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3be090u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3be094: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3be094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3be098: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3BE098u;
    {
        const bool branch_taken_0x3be098 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3be098) {
            ctx->pc = 0x3BE0B0u;
            goto label_3be0b0;
        }
    }
    ctx->pc = 0x3BE0A0u;
    // 0x3be0a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3be0a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3be0a4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3be0a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3be0a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BE0A8u;
    {
        const bool branch_taken_0x3be0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE0A8u;
        // 0x3be0ac: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be0a8) {
            ctx->pc = 0x3BE0CCu;
            goto label_3be0cc;
        }
    }
    ctx->pc = 0x3BE0B0u;
label_3be0b0:
    // 0x3be0b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3be0b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3be0b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3be0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3be0b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3be0b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3be0bc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3be0bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3be0c0: 0x0  nop
    ctx->pc = 0x3be0c0u;
    // NOP
    // 0x3be0c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3be0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3be0c8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3be0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3be0cc:
    // 0x3be0cc: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x3be0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x3be0d0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3BE0D0u;
    {
        const bool branch_taken_0x3be0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE0D0u;
        // 0x3be0d4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be0d0) {
            ctx->pc = 0x3BE210u;
            goto label_3be210;
        }
    }
    ctx->pc = 0x3BE0D8u;
label_3be0d8:
    // 0x3be0d8: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x3be0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x3be0dc: 0x15430022  bne         $t2, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3BE0DCu;
    {
        const bool branch_taken_0x3be0dc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x3be0dc) {
            ctx->pc = 0x3BE168u;
            goto label_3be168;
        }
    }
    ctx->pc = 0x3BE0E4u;
    // 0x3be0e4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3be0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3be0e8: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3be0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3be0ec: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BE0ECu;
    {
        const bool branch_taken_0x3be0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE0ECu;
        // 0x3be0f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be0ec) {
            ctx->pc = 0x3BE110u;
            goto label_3be110;
        }
    }
    ctx->pc = 0x3BE0F4u;
    // 0x3be0f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be0f8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3be0f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3be0fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be0fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be100: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BE100u;
    SET_GPR_U32(ctx, 31, 0x3BE108u);
    ctx->pc = 0x3BE104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE100u;
    // 0x3be104: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BE100u, 0x3BE108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE108u;
label_3be108:
    // 0x3be108: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BE108u;
    {
        const bool branch_taken_0x3be108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be108) {
            ctx->pc = 0x3BE130u;
            goto label_3be130;
        }
    }
    ctx->pc = 0x3BE110u;
label_3be110:
    // 0x3be110: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3be110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3be114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3be114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be118: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be11c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3be11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3be120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be124: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BE124u;
    SET_GPR_U32(ctx, 31, 0x3BE12Cu);
    ctx->pc = 0x3BE128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE124u;
    // 0x3be128: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BE124u, 0x3BE12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE12Cu;
label_3be12c:
    // 0x3be12c: 0x0  nop
    ctx->pc = 0x3be12cu;
    // NOP
label_3be130:
    // 0x3be130: 0xc0ef504  jal         func_3BD410
    ctx->pc = 0x3BE130u;
    SET_GPR_U32(ctx, 31, 0x3BE138u);
    ctx->pc = 0x3BE134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE130u;
    // 0x3be134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BE130u, 0x3BE138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE138u;
label_3be138:
    // 0x3be138: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3be138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3be13c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BE13Cu;
    {
        const bool branch_taken_0x3be13c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3BE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE13Cu;
        // 0x3be140: 0x30450003  andi        $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be13c) {
            ctx->pc = 0x3BE150u;
            goto label_3be150;
        }
    }
    ctx->pc = 0x3BE144u;
    // 0x3be144: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BE144u;
    {
        const bool branch_taken_0x3be144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE144u;
        // 0x3be148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be144) {
            ctx->pc = 0x3BE154u;
            goto label_3be154;
        }
    }
    ctx->pc = 0x3BE14Cu;
    // 0x3be14c: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3be14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_3be150:
    // 0x3be150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3be150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3be154:
    // 0x3be154: 0xc0ef51c  jal         func_3BD470
    ctx->pc = 0x3BE154u;
    SET_GPR_U32(ctx, 31, 0x3BE15Cu);
    ctx->pc = 0x3BD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD470u, 0x3BE154u, 0x3BE15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE15Cu;
label_3be15c:
    // 0x3be15c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3BE15Cu;
    {
        const bool branch_taken_0x3be15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be15c) {
            ctx->pc = 0x3BE210u;
            goto label_3be210;
        }
    }
    ctx->pc = 0x3BE164u;
    // 0x3be164: 0x0  nop
    ctx->pc = 0x3be164u;
    // NOP
label_3be168:
    // 0x3be168: 0x240300ca  addiu       $v1, $zero, 0xCA
    ctx->pc = 0x3be168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x3be16c: 0x15430022  bne         $t2, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3BE16Cu;
    {
        const bool branch_taken_0x3be16c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x3be16c) {
            ctx->pc = 0x3BE1F8u;
            goto label_3be1f8;
        }
    }
    ctx->pc = 0x3BE174u;
    // 0x3be174: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3be174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3be178: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3be178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3be17c: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BE17Cu;
    {
        const bool branch_taken_0x3be17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BE180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE17Cu;
        // 0x3be180: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be17c) {
            ctx->pc = 0x3BE1A0u;
            goto label_3be1a0;
        }
    }
    ctx->pc = 0x3BE184u;
    // 0x3be184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be188: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3be188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3be18c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be18cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be190: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BE190u;
    SET_GPR_U32(ctx, 31, 0x3BE198u);
    ctx->pc = 0x3BE194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE190u;
    // 0x3be194: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BE190u, 0x3BE198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE198u;
label_3be198:
    // 0x3be198: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BE198u;
    {
        const bool branch_taken_0x3be198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be198) {
            ctx->pc = 0x3BE1C0u;
            goto label_3be1c0;
        }
    }
    ctx->pc = 0x3BE1A0u;
label_3be1a0:
    // 0x3be1a0: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3be1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3be1a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3be1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be1a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be1ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3be1acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3be1b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be1b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be1b4: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BE1B4u;
    SET_GPR_U32(ctx, 31, 0x3BE1BCu);
    ctx->pc = 0x3BE1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE1B4u;
    // 0x3be1b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BE1B4u, 0x3BE1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE1BCu;
label_3be1bc:
    // 0x3be1bc: 0x0  nop
    ctx->pc = 0x3be1bcu;
    // NOP
label_3be1c0:
    // 0x3be1c0: 0xc0ef504  jal         func_3BD410
    ctx->pc = 0x3BE1C0u;
    SET_GPR_U32(ctx, 31, 0x3BE1C8u);
    ctx->pc = 0x3BE1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE1C0u;
    // 0x3be1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3BE1C0u, 0x3BE1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE1C8u;
label_3be1c8:
    // 0x3be1c8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x3be1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x3be1cc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BE1CCu;
    {
        const bool branch_taken_0x3be1cc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3BE1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE1CCu;
        // 0x3be1d0: 0x30450003  andi        $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be1cc) {
            ctx->pc = 0x3BE1E0u;
            goto label_3be1e0;
        }
    }
    ctx->pc = 0x3BE1D4u;
    // 0x3be1d4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BE1D4u;
    {
        const bool branch_taken_0x3be1d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE1D4u;
        // 0x3be1d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be1d4) {
            ctx->pc = 0x3BE1E4u;
            goto label_3be1e4;
        }
    }
    ctx->pc = 0x3BE1DCu;
    // 0x3be1dc: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3be1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_3be1e0:
    // 0x3be1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3be1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3be1e4:
    // 0x3be1e4: 0xc0ef51c  jal         func_3BD470
    ctx->pc = 0x3BE1E4u;
    SET_GPR_U32(ctx, 31, 0x3BE1ECu);
    ctx->pc = 0x3BD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD470u, 0x3BE1E4u, 0x3BE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE1ECu;
label_3be1ec:
    // 0x3be1ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3BE1ECu;
    {
        const bool branch_taken_0x3be1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be1ec) {
            ctx->pc = 0x3BE210u;
            goto label_3be210;
        }
    }
    ctx->pc = 0x3BE1F4u;
    // 0x3be1f4: 0x0  nop
    ctx->pc = 0x3be1f4u;
    // NOP
label_3be1f8:
    // 0x3be1f8: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x3be1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x3be1fc: 0x15430004  bne         $t2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BE1FCu;
    {
        const bool branch_taken_0x3be1fc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x3BE200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE1FCu;
        // 0x3be200: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be1fc) {
            ctx->pc = 0x3BE210u;
            goto label_3be210;
        }
    }
    ctx->pc = 0x3BE204u;
    // 0x3be204: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3be204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be208: 0xc0efc70  jal         func_3BF1C0
    ctx->pc = 0x3BE208u;
    SET_GPR_U32(ctx, 31, 0x3BE210u);
    ctx->pc = 0x3BE20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE208u;
    // 0x3be20c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF1C0u, 0x3BE208u, 0x3BE210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE210u;
label_3be210:
    // 0x3be210: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3be210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3be214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3be214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3be218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3be218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be21c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE21Cu;
        // 0x3be220: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE224u;
}
