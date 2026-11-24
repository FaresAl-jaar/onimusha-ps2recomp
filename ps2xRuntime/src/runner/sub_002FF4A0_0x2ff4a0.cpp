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

// Function: sub_002FF4A0
// Address: 0x2ff4a0 - 0x2ff718
void sub_002FF4A0_0x2ff4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF4A0_0x2ff4a0");
#endif

    switch (ctx->pc) {
        case 0x2ff4a0u: goto label_2ff4a0;
        case 0x2ff4a4u: goto label_2ff4a4;
        case 0x2ff4a8u: goto label_2ff4a8;
        case 0x2ff4acu: goto label_2ff4ac;
        case 0x2ff4b0u: goto label_2ff4b0;
        case 0x2ff4b4u: goto label_2ff4b4;
        case 0x2ff4b8u: goto label_2ff4b8;
        case 0x2ff4bcu: goto label_2ff4bc;
        case 0x2ff4c0u: goto label_2ff4c0;
        case 0x2ff4c4u: goto label_2ff4c4;
        case 0x2ff4c8u: goto label_2ff4c8;
        case 0x2ff4ccu: goto label_2ff4cc;
        case 0x2ff4d0u: goto label_2ff4d0;
        case 0x2ff4d4u: goto label_2ff4d4;
        case 0x2ff4d8u: goto label_2ff4d8;
        case 0x2ff4dcu: goto label_2ff4dc;
        case 0x2ff4e0u: goto label_2ff4e0;
        case 0x2ff4e4u: goto label_2ff4e4;
        case 0x2ff4e8u: goto label_2ff4e8;
        case 0x2ff4ecu: goto label_2ff4ec;
        case 0x2ff4f0u: goto label_2ff4f0;
        case 0x2ff4f4u: goto label_2ff4f4;
        case 0x2ff4f8u: goto label_2ff4f8;
        case 0x2ff4fcu: goto label_2ff4fc;
        case 0x2ff500u: goto label_2ff500;
        case 0x2ff504u: goto label_2ff504;
        case 0x2ff508u: goto label_2ff508;
        case 0x2ff50cu: goto label_2ff50c;
        case 0x2ff510u: goto label_2ff510;
        case 0x2ff514u: goto label_2ff514;
        case 0x2ff518u: goto label_2ff518;
        case 0x2ff51cu: goto label_2ff51c;
        case 0x2ff520u: goto label_2ff520;
        case 0x2ff524u: goto label_2ff524;
        case 0x2ff528u: goto label_2ff528;
        case 0x2ff52cu: goto label_2ff52c;
        case 0x2ff530u: goto label_2ff530;
        case 0x2ff534u: goto label_2ff534;
        case 0x2ff538u: goto label_2ff538;
        case 0x2ff53cu: goto label_2ff53c;
        case 0x2ff540u: goto label_2ff540;
        case 0x2ff544u: goto label_2ff544;
        case 0x2ff548u: goto label_2ff548;
        case 0x2ff54cu: goto label_2ff54c;
        case 0x2ff550u: goto label_2ff550;
        case 0x2ff554u: goto label_2ff554;
        case 0x2ff558u: goto label_2ff558;
        case 0x2ff55cu: goto label_2ff55c;
        case 0x2ff560u: goto label_2ff560;
        case 0x2ff564u: goto label_2ff564;
        case 0x2ff568u: goto label_2ff568;
        case 0x2ff56cu: goto label_2ff56c;
        case 0x2ff570u: goto label_2ff570;
        case 0x2ff574u: goto label_2ff574;
        case 0x2ff578u: goto label_2ff578;
        case 0x2ff57cu: goto label_2ff57c;
        case 0x2ff580u: goto label_2ff580;
        case 0x2ff584u: goto label_2ff584;
        case 0x2ff588u: goto label_2ff588;
        case 0x2ff58cu: goto label_2ff58c;
        case 0x2ff590u: goto label_2ff590;
        case 0x2ff594u: goto label_2ff594;
        case 0x2ff598u: goto label_2ff598;
        case 0x2ff59cu: goto label_2ff59c;
        case 0x2ff5a0u: goto label_2ff5a0;
        case 0x2ff5a4u: goto label_2ff5a4;
        case 0x2ff5a8u: goto label_2ff5a8;
        case 0x2ff5acu: goto label_2ff5ac;
        case 0x2ff5b0u: goto label_2ff5b0;
        case 0x2ff5b4u: goto label_2ff5b4;
        case 0x2ff5b8u: goto label_2ff5b8;
        case 0x2ff5bcu: goto label_2ff5bc;
        case 0x2ff5c0u: goto label_2ff5c0;
        case 0x2ff5c4u: goto label_2ff5c4;
        case 0x2ff5c8u: goto label_2ff5c8;
        case 0x2ff5ccu: goto label_2ff5cc;
        case 0x2ff5d0u: goto label_2ff5d0;
        case 0x2ff5d4u: goto label_2ff5d4;
        case 0x2ff5d8u: goto label_2ff5d8;
        case 0x2ff5dcu: goto label_2ff5dc;
        case 0x2ff5e0u: goto label_2ff5e0;
        case 0x2ff5e4u: goto label_2ff5e4;
        case 0x2ff5e8u: goto label_2ff5e8;
        case 0x2ff5ecu: goto label_2ff5ec;
        case 0x2ff5f0u: goto label_2ff5f0;
        case 0x2ff5f4u: goto label_2ff5f4;
        case 0x2ff5f8u: goto label_2ff5f8;
        case 0x2ff5fcu: goto label_2ff5fc;
        case 0x2ff600u: goto label_2ff600;
        case 0x2ff604u: goto label_2ff604;
        case 0x2ff608u: goto label_2ff608;
        case 0x2ff60cu: goto label_2ff60c;
        case 0x2ff610u: goto label_2ff610;
        case 0x2ff614u: goto label_2ff614;
        case 0x2ff618u: goto label_2ff618;
        case 0x2ff61cu: goto label_2ff61c;
        case 0x2ff620u: goto label_2ff620;
        case 0x2ff624u: goto label_2ff624;
        case 0x2ff628u: goto label_2ff628;
        case 0x2ff62cu: goto label_2ff62c;
        case 0x2ff630u: goto label_2ff630;
        case 0x2ff634u: goto label_2ff634;
        case 0x2ff638u: goto label_2ff638;
        case 0x2ff63cu: goto label_2ff63c;
        case 0x2ff640u: goto label_2ff640;
        case 0x2ff644u: goto label_2ff644;
        case 0x2ff648u: goto label_2ff648;
        case 0x2ff64cu: goto label_2ff64c;
        case 0x2ff650u: goto label_2ff650;
        case 0x2ff654u: goto label_2ff654;
        case 0x2ff658u: goto label_2ff658;
        case 0x2ff65cu: goto label_2ff65c;
        case 0x2ff660u: goto label_2ff660;
        case 0x2ff664u: goto label_2ff664;
        case 0x2ff668u: goto label_2ff668;
        case 0x2ff66cu: goto label_2ff66c;
        case 0x2ff670u: goto label_2ff670;
        case 0x2ff674u: goto label_2ff674;
        case 0x2ff678u: goto label_2ff678;
        case 0x2ff67cu: goto label_2ff67c;
        case 0x2ff680u: goto label_2ff680;
        case 0x2ff684u: goto label_2ff684;
        case 0x2ff688u: goto label_2ff688;
        case 0x2ff68cu: goto label_2ff68c;
        case 0x2ff690u: goto label_2ff690;
        case 0x2ff694u: goto label_2ff694;
        case 0x2ff698u: goto label_2ff698;
        case 0x2ff69cu: goto label_2ff69c;
        case 0x2ff6a0u: goto label_2ff6a0;
        case 0x2ff6a4u: goto label_2ff6a4;
        case 0x2ff6a8u: goto label_2ff6a8;
        case 0x2ff6acu: goto label_2ff6ac;
        case 0x2ff6b0u: goto label_2ff6b0;
        case 0x2ff6b4u: goto label_2ff6b4;
        case 0x2ff6b8u: goto label_2ff6b8;
        case 0x2ff6bcu: goto label_2ff6bc;
        case 0x2ff6c0u: goto label_2ff6c0;
        case 0x2ff6c4u: goto label_2ff6c4;
        case 0x2ff6c8u: goto label_2ff6c8;
        case 0x2ff6ccu: goto label_2ff6cc;
        case 0x2ff6d0u: goto label_2ff6d0;
        case 0x2ff6d4u: goto label_2ff6d4;
        case 0x2ff6d8u: goto label_2ff6d8;
        case 0x2ff6dcu: goto label_2ff6dc;
        case 0x2ff6e0u: goto label_2ff6e0;
        case 0x2ff6e4u: goto label_2ff6e4;
        case 0x2ff6e8u: goto label_2ff6e8;
        case 0x2ff6ecu: goto label_2ff6ec;
        case 0x2ff6f0u: goto label_2ff6f0;
        case 0x2ff6f4u: goto label_2ff6f4;
        case 0x2ff6f8u: goto label_2ff6f8;
        case 0x2ff6fcu: goto label_2ff6fc;
        case 0x2ff700u: goto label_2ff700;
        case 0x2ff704u: goto label_2ff704;
        case 0x2ff708u: goto label_2ff708;
        case 0x2ff70cu: goto label_2ff70c;
        case 0x2ff710u: goto label_2ff710;
        case 0x2ff714u: goto label_2ff714;
        default: break;
    }

    ctx->pc = 0x2ff4a0u;

label_2ff4a0:
    // 0x2ff4a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2ff4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2ff4a4:
    // 0x2ff4a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ff4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2ff4a8:
    // 0x2ff4a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2ff4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2ff4ac:
    // 0x2ff4ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ff4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2ff4b0:
    // 0x2ff4b0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2ff4b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ff4b4:
    // 0x2ff4b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ff4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2ff4b8:
    // 0x2ff4b8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2ff4b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ff4bc:
    // 0x2ff4bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ff4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2ff4c0:
    // 0x2ff4c0: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2ff4c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2ff4c4:
    // 0x2ff4c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ff4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ff4c8:
    // 0x2ff4c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ff4c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ff4cc:
    // 0x2ff4cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ff4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ff4d0:
    // 0x2ff4d0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2ff4d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ff4d4:
    // 0x2ff4d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ff4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ff4d8:
    // 0x2ff4d8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2ff4d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2ff4dc:
    // 0x2ff4dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ff4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ff4e0:
    // 0x2ff4e0: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x2ff4e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2ff4e4:
    // 0x2ff4e4: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x2ff4e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2ff4e8:
    // 0x2ff4e8: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2ff4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2ff4ec:
    // 0x2ff4ec: 0xc09d4d4  jal         func_275350
label_2ff4f0:
    if (ctx->pc == 0x2FF4F0u) {
        ctx->pc = 0x2FF4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4ECu;
        // 0x2ff4f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF4F4u;
        goto label_2ff4f4;
    }
    ctx->pc = 0x2FF4ECu;
    SET_GPR_U32(ctx, 31, 0x2FF4F4u);
    ctx->pc = 0x2FF4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF4ECu;
    // 0x2ff4f0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x2FF4ECu, 0x2FF4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF4F4u;
label_2ff4f4:
    // 0x2ff4f4: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
label_2ff4f8:
    if (ctx->pc == 0x2FF4F8u) {
        ctx->pc = 0x2FF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4F4u;
        // 0x2ff4f8: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF4FCu;
        goto label_2ff4fc;
    }
    ctx->pc = 0x2FF4F4u;
    {
        const bool branch_taken_0x2ff4f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4F4u;
        // 0x2ff4f8: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff4f4) {
            ctx->pc = 0x2FF510u;
            goto label_2ff510;
        }
    }
    ctx->pc = 0x2FF4FCu;
label_2ff4fc:
    // 0x2ff4fc: 0xc09d4d8  jal         func_275360
label_2ff500:
    if (ctx->pc == 0x2FF500u) {
        ctx->pc = 0x2FF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4FCu;
        // 0x2ff500: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF504u;
        goto label_2ff504;
    }
    ctx->pc = 0x2FF4FCu;
    SET_GPR_U32(ctx, 31, 0x2FF504u);
    ctx->pc = 0x2FF500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF4FCu;
    // 0x2ff500: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FF4FCu, 0x2FF504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF504u;
label_2ff504:
    // 0x2ff504: 0x10000078  b           . + 4 + (0x78 << 2)
label_2ff508:
    if (ctx->pc == 0x2FF508u) {
        ctx->pc = 0x2FF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF504u;
        // 0x2ff508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF50Cu;
        goto label_2ff50c;
    }
    ctx->pc = 0x2FF504u;
    {
        const bool branch_taken_0x2ff504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF504u;
        // 0x2ff508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff504) {
            ctx->pc = 0x2FF6E8u;
            goto label_2ff6e8;
        }
    }
    ctx->pc = 0x2FF50Cu;
label_2ff50c:
    // 0x2ff50c: 0x0  nop
    ctx->pc = 0x2ff50cu;
    // NOP
label_2ff510:
    // 0x2ff510: 0xc0741a4  jal         func_1D0690
label_2ff514:
    if (ctx->pc == 0x2FF514u) {
        ctx->pc = 0x2FF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF510u;
        // 0x2ff514: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF518u;
        goto label_2ff518;
    }
    ctx->pc = 0x2FF510u;
    SET_GPR_U32(ctx, 31, 0x2FF518u);
    ctx->pc = 0x2FF514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF510u;
    // 0x2ff514: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2FF510u, 0x2FF518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF518u;
label_2ff518:
    // 0x2ff518: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff51c:
    // 0x2ff51c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2ff520:
    if (ctx->pc == 0x2FF520u) {
        ctx->pc = 0x2FF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF51Cu;
        // 0x2ff520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF524u;
        goto label_2ff524;
    }
    ctx->pc = 0x2FF51Cu;
    {
        const bool branch_taken_0x2ff51c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF51Cu;
        // 0x2ff520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff51c) {
            ctx->pc = 0x2FF550u;
            goto label_2ff550;
        }
    }
    ctx->pc = 0x2FF524u;
label_2ff524:
    // 0x2ff524: 0xc096b00  jal         func_25AC00
label_2ff528:
    if (ctx->pc == 0x2FF528u) {
        ctx->pc = 0x2FF52Cu;
        goto label_2ff52c;
    }
    ctx->pc = 0x2FF524u;
    SET_GPR_U32(ctx, 31, 0x2FF52Cu);
    ctx->pc = 0x25AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC00u, 0x2FF524u, 0x2FF52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF52Cu;
label_2ff52c:
    // 0x2ff52c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ff52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_2ff530:
    // 0x2ff530: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2ff530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2ff534:
    // 0x2ff534: 0x24637fd0  addiu       $v1, $v1, 0x7FD0
    ctx->pc = 0x2ff534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32720));
label_2ff538:
    // 0x2ff538: 0x24427fa0  addiu       $v0, $v0, 0x7FA0
    ctx->pc = 0x2ff538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32672));
label_2ff53c:
    // 0x2ff53c: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x2ff53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_2ff540:
    // 0x2ff540: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2ff540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_2ff544:
    // 0x2ff544: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2ff544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_2ff548:
    // 0x2ff548: 0xa600009a  sh          $zero, 0x9A($s0)
    ctx->pc = 0x2ff548u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 0));
label_2ff54c:
    // 0x2ff54c: 0x0  nop
    ctx->pc = 0x2ff54cu;
    // NOP
label_2ff550:
    // 0x2ff550: 0x12000061  beqz        $s0, . + 4 + (0x61 << 2)
label_2ff554:
    if (ctx->pc == 0x2FF554u) {
        ctx->pc = 0x2FF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF550u;
        // 0x2ff554: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF558u;
        goto label_2ff558;
    }
    ctx->pc = 0x2FF550u;
    {
        const bool branch_taken_0x2ff550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF550u;
        // 0x2ff554: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff550) {
            ctx->pc = 0x2FF6D8u;
            goto label_2ff6d8;
        }
    }
    ctx->pc = 0x2FF558u;
label_2ff558:
    // 0x2ff558: 0xc09d4fc  jal         func_2753F0
label_2ff55c:
    if (ctx->pc == 0x2FF55Cu) {
        ctx->pc = 0x2FF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF558u;
        // 0x2ff55c: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF560u;
        goto label_2ff560;
    }
    ctx->pc = 0x2FF558u;
    SET_GPR_U32(ctx, 31, 0x2FF560u);
    ctx->pc = 0x2FF55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF558u;
    // 0x2ff55c: 0x27a400bc  addiu       $a0, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2FF558u, 0x2FF560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF560u;
label_2ff560:
    // 0x2ff560: 0x32c600ff  andi        $a2, $s6, 0xFF
    ctx->pc = 0x2ff560u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_2ff564:
    // 0x2ff564: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2ff564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2ff568:
    // 0x2ff568: 0xc09d524  jal         func_275490
label_2ff56c:
    if (ctx->pc == 0x2FF56Cu) {
        ctx->pc = 0x2FF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF568u;
        // 0x2ff56c: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF570u;
        goto label_2ff570;
    }
    ctx->pc = 0x2FF568u;
    SET_GPR_U32(ctx, 31, 0x2FF570u);
    ctx->pc = 0x2FF56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF568u;
    // 0x2ff56c: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2FF568u, 0x2FF570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF570u;
label_2ff570:
    // 0x2ff570: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ff570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff574:
    // 0x2ff574: 0x1660000e  bnez        $s3, . + 4 + (0xE << 2)
label_2ff578:
    if (ctx->pc == 0x2FF578u) {
        ctx->pc = 0x2FF57Cu;
        goto label_2ff57c;
    }
    ctx->pc = 0x2FF574u;
    {
        const bool branch_taken_0x2ff574 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff574) {
            ctx->pc = 0x2FF5B0u;
            goto label_2ff5b0;
        }
    }
    ctx->pc = 0x2FF57Cu;
label_2ff57c:
    // 0x2ff57c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2ff580:
    if (ctx->pc == 0x2FF580u) {
        ctx->pc = 0x2FF584u;
        goto label_2ff584;
    }
    ctx->pc = 0x2FF57Cu;
    {
        const bool branch_taken_0x2ff57c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff57c) {
            ctx->pc = 0x2FF598u;
            goto label_2ff598;
        }
    }
    ctx->pc = 0x2FF584u;
label_2ff584:
    // 0x2ff584: 0x8e190034  lw          $t9, 0x34($s0)
    ctx->pc = 0x2ff584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2ff588:
    // 0x2ff588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff58c:
    // 0x2ff58c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2ff58cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2ff590:
    // 0x2ff590: 0x320f809  jalr        $t9
label_2ff594:
    if (ctx->pc == 0x2FF594u) {
        ctx->pc = 0x2FF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF590u;
        // 0x2ff594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF598u;
        goto label_2ff598;
    }
    ctx->pc = 0x2FF590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF598u);
        ctx->pc = 0x2FF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF590u;
        // 0x2ff594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF590u, 0x2FF598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FF598u;
label_2ff598:
    // 0x2ff598: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2ff598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2ff59c:
    // 0x2ff59c: 0xc09d4d8  jal         func_275360
label_2ff5a0:
    if (ctx->pc == 0x2FF5A0u) {
        ctx->pc = 0x2FF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF59Cu;
        // 0x2ff5a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF5A4u;
        goto label_2ff5a4;
    }
    ctx->pc = 0x2FF59Cu;
    SET_GPR_U32(ctx, 31, 0x2FF5A4u);
    ctx->pc = 0x2FF5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF59Cu;
    // 0x2ff5a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FF59Cu, 0x2FF5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF5A4u;
label_2ff5a4:
    // 0x2ff5a4: 0x10000050  b           . + 4 + (0x50 << 2)
label_2ff5a8:
    if (ctx->pc == 0x2FF5A8u) {
        ctx->pc = 0x2FF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5A4u;
        // 0x2ff5a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF5ACu;
        goto label_2ff5ac;
    }
    ctx->pc = 0x2FF5A4u;
    {
        const bool branch_taken_0x2ff5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5A4u;
        // 0x2ff5a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff5a4) {
            ctx->pc = 0x2FF6E8u;
            goto label_2ff6e8;
        }
    }
    ctx->pc = 0x2FF5ACu;
label_2ff5ac:
    // 0x2ff5ac: 0x0  nop
    ctx->pc = 0x2ff5acu;
    // NOP
label_2ff5b0:
    // 0x2ff5b0: 0x8e85004c  lw          $a1, 0x4C($s4)
    ctx->pc = 0x2ff5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_2ff5b4:
    // 0x2ff5b4: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x2ff5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_2ff5b8:
    // 0x2ff5b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2ff5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2ff5bc:
    // 0x2ff5bc: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ff5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2ff5c0:
    // 0x2ff5c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ff5c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff5c4:
    // 0x2ff5c4: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x2ff5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_2ff5c8:
    // 0x2ff5c8: 0xc07679c  jal         func_1D9E70
label_2ff5cc:
    if (ctx->pc == 0x2FF5CCu) {
        ctx->pc = 0x2FF5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5C8u;
        // 0x2ff5cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF5D0u;
        goto label_2ff5d0;
    }
    ctx->pc = 0x2FF5C8u;
    SET_GPR_U32(ctx, 31, 0x2FF5D0u);
    ctx->pc = 0x2FF5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF5C8u;
    // 0x2ff5cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x2FF5C8u, 0x2FF5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF5D0u;
label_2ff5d0:
    // 0x2ff5d0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2ff5d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ff5d4:
    // 0x2ff5d4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x2ff5d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ff5d8:
    // 0x2ff5d8: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x2ff5d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2ff5dc:
    // 0x2ff5dc: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2ff5dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ff5e0:
    // 0x2ff5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff5e4:
    // 0x2ff5e4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ff5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ff5e8:
    // 0x2ff5e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ff5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff5ec:
    // 0x2ff5ec: 0xc096b38  jal         func_25ACE0
label_2ff5f0:
    if (ctx->pc == 0x2FF5F0u) {
        ctx->pc = 0x2FF5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5ECu;
        // 0x2ff5f0: 0x27ab00a0  addiu       $t3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF5F4u;
        goto label_2ff5f4;
    }
    ctx->pc = 0x2FF5ECu;
    SET_GPR_U32(ctx, 31, 0x2FF5F4u);
    ctx->pc = 0x2FF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF5ECu;
    // 0x2ff5f0: 0x27ab00a0  addiu       $t3, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x2FF5ECu, 0x2FF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF5F4u;
label_2ff5f4:
    // 0x2ff5f4: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2ff5f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2ff5f8:
    // 0x2ff5f8: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x2ff5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
label_2ff5fc:
    // 0x2ff5fc: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x2ff5fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
label_2ff600:
    // 0x2ff600: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2ff600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2ff604:
    // 0x2ff604: 0xa2020050  sb          $v0, 0x50($s0)
    ctx->pc = 0x2ff604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 2));
label_2ff608:
    // 0x2ff608: 0xa2000051  sb          $zero, 0x51($s0)
    ctx->pc = 0x2ff608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 0));
label_2ff60c:
    // 0x2ff60c: 0xa600005a  sh          $zero, 0x5A($s0)
    ctx->pc = 0x2ff60cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 0));
label_2ff610:
    // 0x2ff610: 0xa6000058  sh          $zero, 0x58($s0)
    ctx->pc = 0x2ff610u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 0));
label_2ff614:
    // 0x2ff614: 0xa6000056  sh          $zero, 0x56($s0)
    ctx->pc = 0x2ff614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 0));
label_2ff618:
    // 0x2ff618: 0xae130080  sw          $s3, 0x80($s0)
    ctx->pc = 0x2ff618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 19));
label_2ff61c:
    // 0x2ff61c: 0xa2120098  sb          $s2, 0x98($s0)
    ctx->pc = 0x2ff61cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 18));
label_2ff620:
    // 0x2ff620: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2ff620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2ff624:
    // 0x2ff624: 0x7e020120  sq          $v0, 0x120($s0)
    ctx->pc = 0x2ff624u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 288), GPR_VEC(ctx, 2));
label_2ff628:
    // 0x2ff628: 0x92650004  lbu         $a1, 0x4($s3)
    ctx->pc = 0x2ff628u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
label_2ff62c:
    // 0x2ff62c: 0x92660005  lbu         $a2, 0x5($s3)
    ctx->pc = 0x2ff62cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
label_2ff630:
    // 0x2ff630: 0xc074350  jal         func_1D0D40
label_2ff634:
    if (ctx->pc == 0x2FF634u) {
        ctx->pc = 0x2FF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF630u;
        // 0x2ff634: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF638u;
        goto label_2ff638;
    }
    ctx->pc = 0x2FF630u;
    SET_GPR_U32(ctx, 31, 0x2FF638u);
    ctx->pc = 0x2FF634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF630u;
    // 0x2ff634: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x2FF630u, 0x2FF638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF638u;
label_2ff638:
    // 0x2ff638: 0x92650006  lbu         $a1, 0x6($s3)
    ctx->pc = 0x2ff638u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
label_2ff63c:
    // 0x2ff63c: 0x92660007  lbu         $a2, 0x7($s3)
    ctx->pc = 0x2ff63cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
label_2ff640:
    // 0x2ff640: 0xc074378  jal         func_1D0DE0
label_2ff644:
    if (ctx->pc == 0x2FF644u) {
        ctx->pc = 0x2FF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF640u;
        // 0x2ff644: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF648u;
        goto label_2ff648;
    }
    ctx->pc = 0x2FF640u;
    SET_GPR_U32(ctx, 31, 0x2FF648u);
    ctx->pc = 0x2FF644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF640u;
    // 0x2ff644: 0x26040130  addiu       $a0, $s0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x2FF640u, 0x2FF648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF648u;
label_2ff648:
    // 0x2ff648: 0x92650008  lbu         $a1, 0x8($s3)
    ctx->pc = 0x2ff648u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
label_2ff64c:
    // 0x2ff64c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ff64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ff650:
    // 0x2ff650: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x2ff650u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_2ff654:
    // 0x2ff654: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ff654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ff658:
    // 0x2ff658: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x2ff658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2ff65c:
    // 0x2ff65c: 0xa605009a  sh          $a1, 0x9A($s0)
    ctx->pc = 0x2ff65cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 5));
label_2ff660:
    // 0x2ff660: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x2ff660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2ff664:
    // 0x2ff664: 0xa6040088  sh          $a0, 0x88($s0)
    ctx->pc = 0x2ff664u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 4));
label_2ff668:
    // 0x2ff668: 0xa600008a  sh          $zero, 0x8A($s0)
    ctx->pc = 0x2ff668u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 138), (uint16_t)GPR_U32(ctx, 0));
label_2ff66c:
    // 0x2ff66c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2ff66cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2ff670:
    // 0x2ff670: 0xa605008c  sh          $a1, 0x8C($s0)
    ctx->pc = 0x2ff670u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 5));
label_2ff674:
    // 0x2ff674: 0x86050088  lh          $a1, 0x88($s0)
    ctx->pc = 0x2ff674u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
label_2ff678:
    // 0x2ff678: 0xa605008e  sh          $a1, 0x8E($s0)
    ctx->pc = 0x2ff678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 142), (uint16_t)GPR_U32(ctx, 5));
label_2ff67c:
    // 0x2ff67c: 0xa6030090  sh          $v1, 0x90($s0)
    ctx->pc = 0x2ff67cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 3));
label_2ff680:
    // 0x2ff680: 0xa6000092  sh          $zero, 0x92($s0)
    ctx->pc = 0x2ff680u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 0));
label_2ff684:
    // 0x2ff684: 0xa6020094  sh          $v0, 0x94($s0)
    ctx->pc = 0x2ff684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 148), (uint16_t)GPR_U32(ctx, 2));
label_2ff688:
    // 0x2ff688: 0x86020090  lh          $v0, 0x90($s0)
    ctx->pc = 0x2ff688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
label_2ff68c:
    // 0x2ff68c: 0xc0741a4  jal         func_1D0690
label_2ff690:
    if (ctx->pc == 0x2FF690u) {
        ctx->pc = 0x2FF690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF68Cu;
        // 0x2ff690: 0xa6020096  sh          $v0, 0x96($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF694u;
        goto label_2ff694;
    }
    ctx->pc = 0x2FF68Cu;
    SET_GPR_U32(ctx, 31, 0x2FF694u);
    ctx->pc = 0x2FF690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF68Cu;
    // 0x2ff690: 0xa6020096  sh          $v0, 0x96($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 150), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2FF68Cu, 0x2FF694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF694u;
label_2ff694:
    // 0x2ff694: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x2ff694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_2ff698:
    // 0x2ff698: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2ff698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2ff69c:
    // 0x2ff69c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2ff6a0:
    if (ctx->pc == 0x2FF6A0u) {
        ctx->pc = 0x2FF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF69Cu;
        // 0x2ff6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF6A4u;
        goto label_2ff6a4;
    }
    ctx->pc = 0x2FF69Cu;
    {
        const bool branch_taken_0x2ff69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF69Cu;
        // 0x2ff6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff69c) {
            ctx->pc = 0x2FF6C0u;
            goto label_2ff6c0;
        }
    }
    ctx->pc = 0x2FF6A4u;
label_2ff6a4:
    // 0x2ff6a4: 0xc074268  jal         func_1D09A0
label_2ff6a8:
    if (ctx->pc == 0x2FF6A8u) {
        ctx->pc = 0x2FF6ACu;
        goto label_2ff6ac;
    }
    ctx->pc = 0x2FF6A4u;
    SET_GPR_U32(ctx, 31, 0x2FF6ACu);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x2FF6A4u, 0x2FF6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6ACu;
label_2ff6ac:
    // 0x2ff6ac: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2ff6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2ff6b0:
    // 0x2ff6b0: 0xc09d4d8  jal         func_275360
label_2ff6b4:
    if (ctx->pc == 0x2FF6B4u) {
        ctx->pc = 0x2FF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6B0u;
        // 0x2ff6b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF6B8u;
        goto label_2ff6b8;
    }
    ctx->pc = 0x2FF6B0u;
    SET_GPR_U32(ctx, 31, 0x2FF6B8u);
    ctx->pc = 0x2FF6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6B0u;
    // 0x2ff6b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FF6B0u, 0x2FF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6B8u;
label_2ff6b8:
    // 0x2ff6b8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2ff6bc:
    if (ctx->pc == 0x2FF6BCu) {
        ctx->pc = 0x2FF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6B8u;
        // 0x2ff6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF6C0u;
        goto label_2ff6c0;
    }
    ctx->pc = 0x2FF6B8u;
    {
        const bool branch_taken_0x2ff6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6B8u;
        // 0x2ff6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff6b8) {
            ctx->pc = 0x2FF6E8u;
            goto label_2ff6e8;
        }
    }
    ctx->pc = 0x2FF6C0u;
label_2ff6c0:
    // 0x2ff6c0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x2ff6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ff6c4:
    // 0x2ff6c4: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2ff6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2ff6c8:
    // 0x2ff6c8: 0xc09d4d8  jal         func_275360
label_2ff6cc:
    if (ctx->pc == 0x2FF6CCu) {
        ctx->pc = 0x2FF6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6C8u;
        // 0x2ff6cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF6D0u;
        goto label_2ff6d0;
    }
    ctx->pc = 0x2FF6C8u;
    SET_GPR_U32(ctx, 31, 0x2FF6D0u);
    ctx->pc = 0x2FF6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6C8u;
    // 0x2ff6cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FF6C8u, 0x2FF6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6D0u;
label_2ff6d0:
    // 0x2ff6d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ff6d4:
    if (ctx->pc == 0x2FF6D4u) {
        ctx->pc = 0x2FF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6D0u;
        // 0x2ff6d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF6D8u;
        goto label_2ff6d8;
    }
    ctx->pc = 0x2FF6D0u;
    {
        const bool branch_taken_0x2ff6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6D0u;
        // 0x2ff6d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff6d0) {
            ctx->pc = 0x2FF6E8u;
            goto label_2ff6e8;
        }
    }
    ctx->pc = 0x2FF6D8u;
label_2ff6d8:
    // 0x2ff6d8: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x2ff6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_2ff6dc:
    // 0x2ff6dc: 0xc09d4d8  jal         func_275360
label_2ff6e0:
    if (ctx->pc == 0x2FF6E0u) {
        ctx->pc = 0x2FF6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6DCu;
        // 0x2ff6e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF6E4u;
        goto label_2ff6e4;
    }
    ctx->pc = 0x2FF6DCu;
    SET_GPR_U32(ctx, 31, 0x2FF6E4u);
    ctx->pc = 0x2FF6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6DCu;
    // 0x2ff6e0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FF6DCu, 0x2FF6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6E4u;
label_2ff6e4:
    // 0x2ff6e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ff6e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff6e8:
    // 0x2ff6e8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ff6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2ff6ec:
    // 0x2ff6ec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2ff6ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ff6f0:
    // 0x2ff6f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ff6f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ff6f4:
    // 0x2ff6f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ff6f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ff6f8:
    // 0x2ff6f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ff6f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ff6fc:
    // 0x2ff6fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ff6fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ff700:
    // 0x2ff700: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ff700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ff704:
    // 0x2ff704: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ff704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ff708:
    // 0x2ff708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ff708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff70c:
    // 0x2ff70c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff70cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff710:
    // 0x2ff710: 0x3e00008  jr          $ra
label_2ff714:
    if (ctx->pc == 0x2FF714u) {
        ctx->pc = 0x2FF714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF710u;
        // 0x2ff714: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FF718u;
        goto label_fallthrough_0x2ff710;
    }
    ctx->pc = 0x2FF710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF710u;
        // 0x2ff714: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ff710:
    ctx->pc = 0x2FF718u;
}
