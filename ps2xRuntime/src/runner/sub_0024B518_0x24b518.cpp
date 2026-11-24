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

// Function: sub_0024B518
// Address: 0x24b518 - 0x24b6b0
void sub_0024B518_0x24b518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B518_0x24b518");
#endif

    switch (ctx->pc) {
        case 0x24b560u: goto label_24b560;
        case 0x24b58cu: goto label_24b58c;
        case 0x24b5f8u: goto label_24b5f8;
        case 0x24b608u: goto label_24b608;
        default: break;
    }

    ctx->pc = 0x24b518u;

    // 0x24b518: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24b518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24b51c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24b51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24b520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24b520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b524: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24b524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24b528: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24b528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b52c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24b530: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x24b530u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b534: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24b534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24b538: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x24b538u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b53c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x24b53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x24b540: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x24b540u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b548: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24b548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24b54c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B54Cu;
    {
        const bool branch_taken_0x24b54c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B54Cu;
        // 0x24b550: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b54c) {
            ctx->pc = 0x24B568u;
            goto label_24b568;
        }
    }
    ctx->pc = 0x24B554u;
    // 0x24b554: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24b554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24b558: 0xc093008  jal         func_24C020
    ctx->pc = 0x24B558u;
    SET_GPR_U32(ctx, 31, 0x24B560u);
    ctx->pc = 0x24B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B558u;
    // 0x24b55c: 0x2484d798  addiu       $a0, $a0, -0x2868 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C020u, 0x24B558u, 0x24B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B560u;
label_24b560:
    // 0x24b560: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x24B560u;
    {
        const bool branch_taken_0x24b560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B560u;
        // 0x24b564: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b560) {
            ctx->pc = 0x24B688u;
            goto label_24b688;
        }
    }
    ctx->pc = 0x24B568u;
label_24b568:
    // 0x24b568: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x24b568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x24b56c: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x24b56cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x24b570: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x24B570u;
    {
        const bool branch_taken_0x24b570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B570u;
        // 0x24b574: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b570) {
            ctx->pc = 0x24B688u;
            goto label_24b688;
        }
    }
    ctx->pc = 0x24B578u;
    // 0x24b578: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24B578u;
    {
        const bool branch_taken_0x24b578 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b578) {
            ctx->pc = 0x24B57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B578u;
            // 0x24b57c: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B598u;
            goto label_24b598;
        }
    }
    ctx->pc = 0x24B580u;
    // 0x24b580: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24b580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24b584: 0xc093008  jal         func_24C020
    ctx->pc = 0x24B584u;
    SET_GPR_U32(ctx, 31, 0x24B58Cu);
    ctx->pc = 0x24B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B584u;
    // 0x24b588: 0x2484d7c8  addiu       $a0, $a0, -0x2838 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C020u, 0x24B584u, 0x24B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B58Cu;
label_24b58c:
    // 0x24b58c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x24B58Cu;
    {
        const bool branch_taken_0x24b58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B58Cu;
        // 0x24b590: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b58c) {
            ctx->pc = 0x24B688u;
            goto label_24b688;
        }
    }
    ctx->pc = 0x24B594u;
    // 0x24b594: 0x0  nop
    ctx->pc = 0x24b594u;
    // NOP
label_24b598:
    // 0x24b598: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x24b598u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x24b59c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x24b59cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x24b5a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24b5a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b5a4: 0x2466000f  addiu       $a2, $v1, 0xF
    ctx->pc = 0x24b5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x24b5a8: 0x2467001e  addiu       $a3, $v1, 0x1E
    ctx->pc = 0x24b5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x24b5ac: 0x28c50000  slti        $a1, $a2, 0x0
    ctx->pc = 0x24b5acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x24b5b0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x24b5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b5b4: 0xe5100b  movn        $v0, $a3, $a1
    ctx->pc = 0x24b5b4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x24b5b8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x24b5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x24b5bc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x24b5bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x24b5c0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x24b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x24b5c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x24b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24b5c8: 0x24700038  addiu       $s0, $v1, 0x38
    ctx->pc = 0x24b5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x24b5cc: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x24b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x24b5d0: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x24b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x24b5d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x24b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x24b5d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24b5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b5dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24b5e0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x24b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x24b5e4: 0x684026  xor         $t0, $v1, $t0
    ctx->pc = 0x24b5e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x24b5e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24b5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24b5ec: 0x68980b  movn        $s3, $v1, $t0
    ctx->pc = 0x24b5ecu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x24b5f0: 0xc049f18  jal         func_127C60
    ctx->pc = 0x24B5F0u;
    SET_GPR_U32(ctx, 31, 0x24B5F8u);
    ctx->pc = 0x24B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B5F0u;
    // 0x24b5f4: 0xae130000  sw          $s3, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x24B5F0u, 0x24B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B5F8u;
label_24b5f8:
    // 0x24b5f8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x24b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x24b5fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24b5fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b600: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x24B600u;
    {
        const bool branch_taken_0x24b600 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B600u;
        // 0x24b604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b600) {
            ctx->pc = 0x24B628u;
            goto label_24b628;
        }
    }
    ctx->pc = 0x24B608u;
label_24b608:
    // 0x24b608: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x24b608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x24b60c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24b610: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24b610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b614: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x24b614u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x24b618: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x24b618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x24b61c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24b620: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24B620u;
    {
        const bool branch_taken_0x24b620 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B620u;
        // 0x24b624: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b620) {
            ctx->pc = 0x24B608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b608;
        }
    }
    ctx->pc = 0x24B628u;
label_24b628:
    // 0x24b628: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x24b628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x24b62c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x24b62cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b630: 0xae150014  sw          $s5, 0x14($s0)
    ctx->pc = 0x24b630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 21));
    // 0x24b634: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x24b634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x24b638: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x24b638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x24b63c: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x24b63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
    // 0x24b640: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x24b640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x24b644: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x24b644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x24b648: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x24b648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24b64c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x24b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x24b650: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x24b650u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x24b654: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24b654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b658: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x24b658u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x24b65c: 0x82270001  lb          $a3, 0x1($s1)
    ctx->pc = 0x24b65cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x24b660: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x24b660u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x24b664: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24b664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24b668: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x24b668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24b66c: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x24b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
    // 0x24b670: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x24b670u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24b674: 0x14e80003  bne         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B674u;
    {
        const bool branch_taken_0x24b674 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x24B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B674u;
        // 0x24b678: 0xae24001c  sw          $a0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b674) {
            ctx->pc = 0x24B684u;
            goto label_24b684;
        }
    }
    ctx->pc = 0x24B67Cu;
    // 0x24b67c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24b680: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x24b680u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_24b684:
    // 0x24b684: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x24b684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24b688:
    // 0x24b688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b68c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24b68cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b690: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24b690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b694: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24b694u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b698: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24b698u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b69c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24b69cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24b6a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x24b6a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b6a4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x24b6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24b6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x24B6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6A8u;
        // 0x24b6ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B6B0u;
}
