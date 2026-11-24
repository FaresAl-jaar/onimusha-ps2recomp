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

// Function: sub_003874B0
// Address: 0x3874b0 - 0x387648
void sub_003874B0_0x3874b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003874B0_0x3874b0");
#endif

    switch (ctx->pc) {
        case 0x3874b0u: goto label_3874b0;
        case 0x3874b4u: goto label_3874b4;
        case 0x3874b8u: goto label_3874b8;
        case 0x3874bcu: goto label_3874bc;
        case 0x3874c0u: goto label_3874c0;
        case 0x3874c4u: goto label_3874c4;
        case 0x3874c8u: goto label_3874c8;
        case 0x3874ccu: goto label_3874cc;
        case 0x3874d0u: goto label_3874d0;
        case 0x3874d4u: goto label_3874d4;
        case 0x3874d8u: goto label_3874d8;
        case 0x3874dcu: goto label_3874dc;
        case 0x3874e0u: goto label_3874e0;
        case 0x3874e4u: goto label_3874e4;
        case 0x3874e8u: goto label_3874e8;
        case 0x3874ecu: goto label_3874ec;
        case 0x3874f0u: goto label_3874f0;
        case 0x3874f4u: goto label_3874f4;
        case 0x3874f8u: goto label_3874f8;
        case 0x3874fcu: goto label_3874fc;
        case 0x387500u: goto label_387500;
        case 0x387504u: goto label_387504;
        case 0x387508u: goto label_387508;
        case 0x38750cu: goto label_38750c;
        case 0x387510u: goto label_387510;
        case 0x387514u: goto label_387514;
        case 0x387518u: goto label_387518;
        case 0x38751cu: goto label_38751c;
        case 0x387520u: goto label_387520;
        case 0x387524u: goto label_387524;
        case 0x387528u: goto label_387528;
        case 0x38752cu: goto label_38752c;
        case 0x387530u: goto label_387530;
        case 0x387534u: goto label_387534;
        case 0x387538u: goto label_387538;
        case 0x38753cu: goto label_38753c;
        case 0x387540u: goto label_387540;
        case 0x387544u: goto label_387544;
        case 0x387548u: goto label_387548;
        case 0x38754cu: goto label_38754c;
        case 0x387550u: goto label_387550;
        case 0x387554u: goto label_387554;
        case 0x387558u: goto label_387558;
        case 0x38755cu: goto label_38755c;
        case 0x387560u: goto label_387560;
        case 0x387564u: goto label_387564;
        case 0x387568u: goto label_387568;
        case 0x38756cu: goto label_38756c;
        case 0x387570u: goto label_387570;
        case 0x387574u: goto label_387574;
        case 0x387578u: goto label_387578;
        case 0x38757cu: goto label_38757c;
        case 0x387580u: goto label_387580;
        case 0x387584u: goto label_387584;
        case 0x387588u: goto label_387588;
        case 0x38758cu: goto label_38758c;
        case 0x387590u: goto label_387590;
        case 0x387594u: goto label_387594;
        case 0x387598u: goto label_387598;
        case 0x38759cu: goto label_38759c;
        case 0x3875a0u: goto label_3875a0;
        case 0x3875a4u: goto label_3875a4;
        case 0x3875a8u: goto label_3875a8;
        case 0x3875acu: goto label_3875ac;
        case 0x3875b0u: goto label_3875b0;
        case 0x3875b4u: goto label_3875b4;
        case 0x3875b8u: goto label_3875b8;
        case 0x3875bcu: goto label_3875bc;
        case 0x3875c0u: goto label_3875c0;
        case 0x3875c4u: goto label_3875c4;
        case 0x3875c8u: goto label_3875c8;
        case 0x3875ccu: goto label_3875cc;
        case 0x3875d0u: goto label_3875d0;
        case 0x3875d4u: goto label_3875d4;
        case 0x3875d8u: goto label_3875d8;
        case 0x3875dcu: goto label_3875dc;
        case 0x3875e0u: goto label_3875e0;
        case 0x3875e4u: goto label_3875e4;
        case 0x3875e8u: goto label_3875e8;
        case 0x3875ecu: goto label_3875ec;
        case 0x3875f0u: goto label_3875f0;
        case 0x3875f4u: goto label_3875f4;
        case 0x3875f8u: goto label_3875f8;
        case 0x3875fcu: goto label_3875fc;
        case 0x387600u: goto label_387600;
        case 0x387604u: goto label_387604;
        case 0x387608u: goto label_387608;
        case 0x38760cu: goto label_38760c;
        case 0x387610u: goto label_387610;
        case 0x387614u: goto label_387614;
        case 0x387618u: goto label_387618;
        case 0x38761cu: goto label_38761c;
        case 0x387620u: goto label_387620;
        case 0x387624u: goto label_387624;
        case 0x387628u: goto label_387628;
        case 0x38762cu: goto label_38762c;
        case 0x387630u: goto label_387630;
        case 0x387634u: goto label_387634;
        case 0x387638u: goto label_387638;
        case 0x38763cu: goto label_38763c;
        case 0x387640u: goto label_387640;
        case 0x387644u: goto label_387644;
        default: break;
    }

    ctx->pc = 0x3874b0u;

label_3874b0:
    // 0x3874b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3874b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3874b4:
    // 0x3874b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3874b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3874b8:
    // 0x3874b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3874b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3874bc:
    // 0x3874bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3874bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3874c0:
    // 0x3874c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3874c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3874c4:
    // 0x3874c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3874c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3874c8:
    // 0x3874c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3874c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3874cc:
    // 0x3874cc: 0x90832b6e  lbu         $v1, 0x2B6E($a0)
    ctx->pc = 0x3874ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11118)));
label_3874d0:
    // 0x3874d0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_3874d4:
    if (ctx->pc == 0x3874D4u) {
        ctx->pc = 0x3874D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3874D0u;
        // 0x3874d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3874D8u;
        goto label_3874d8;
    }
    ctx->pc = 0x3874D0u;
    {
        const bool branch_taken_0x3874d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3874D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3874D0u;
        // 0x3874d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3874d0) {
            ctx->pc = 0x387530u;
            goto label_387530;
        }
    }
    ctx->pc = 0x3874D8u;
label_3874d8:
    // 0x3874d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3874d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3874dc:
    // 0x3874dc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_3874e0:
    if (ctx->pc == 0x3874E0u) {
        ctx->pc = 0x3874E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3874DCu;
        // 0x3874e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3874E4u;
        goto label_3874e4;
    }
    ctx->pc = 0x3874DCu;
    {
        const bool branch_taken_0x3874dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3874E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3874DCu;
        // 0x3874e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3874dc) {
            ctx->pc = 0x387508u;
            goto label_387508;
        }
    }
    ctx->pc = 0x3874E4u;
label_3874e4:
    // 0x3874e4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3874e8:
    if (ctx->pc == 0x3874E8u) {
        ctx->pc = 0x3874ECu;
        goto label_3874ec;
    }
    ctx->pc = 0x3874E4u;
    {
        const bool branch_taken_0x3874e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3874e4) {
            ctx->pc = 0x387508u;
            goto label_387508;
        }
    }
    ctx->pc = 0x3874ECu;
label_3874ec:
    // 0x3874ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3874ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3874f0:
    // 0x3874f0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_3874f4:
    if (ctx->pc == 0x3874F4u) {
        ctx->pc = 0x3874F8u;
        goto label_3874f8;
    }
    ctx->pc = 0x3874F0u;
    {
        const bool branch_taken_0x3874f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3874f0) {
            ctx->pc = 0x387508u;
            goto label_387508;
        }
    }
    ctx->pc = 0x3874F8u;
label_3874f8:
    // 0x3874f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3874fc:
    if (ctx->pc == 0x3874FCu) {
        ctx->pc = 0x387500u;
        goto label_387500;
    }
    ctx->pc = 0x3874F8u;
    {
        const bool branch_taken_0x3874f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3874f8) {
            ctx->pc = 0x387508u;
            goto label_387508;
        }
    }
    ctx->pc = 0x387500u;
label_387500:
    // 0x387500: 0x10000015  b           . + 4 + (0x15 << 2)
label_387504:
    if (ctx->pc == 0x387504u) {
        ctx->pc = 0x387508u;
        goto label_387508;
    }
    ctx->pc = 0x387500u;
    {
        const bool branch_taken_0x387500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x387500) {
            ctx->pc = 0x387558u;
            goto label_387558;
        }
    }
    ctx->pc = 0x387508u;
label_387508:
    // 0x387508: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x387508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_38750c:
    // 0x38750c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38750cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_387510:
    // 0x387510: 0xc0b2ebc  jal         func_2CBAF0
label_387514:
    if (ctx->pc == 0x387514u) {
        ctx->pc = 0x387514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387510u;
        // 0x387514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387518u;
        goto label_387518;
    }
    ctx->pc = 0x387510u;
    SET_GPR_U32(ctx, 31, 0x387518u);
    ctx->pc = 0x387514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387510u;
    // 0x387514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x387510u, 0x387518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387518u;
label_387518:
    // 0x387518: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x387518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38751c:
    // 0x38751c: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_387520:
    if (ctx->pc == 0x387520u) {
        ctx->pc = 0x387524u;
        goto label_387524;
    }
    ctx->pc = 0x38751Cu;
    {
        const bool branch_taken_0x38751c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x38751c) {
            ctx->pc = 0x387558u;
            goto label_387558;
        }
    }
    ctx->pc = 0x387524u;
label_387524:
    // 0x387524: 0x10000042  b           . + 4 + (0x42 << 2)
label_387528:
    if (ctx->pc == 0x387528u) {
        ctx->pc = 0x387528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387524u;
        // 0x387528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38752Cu;
        goto label_38752c;
    }
    ctx->pc = 0x387524u;
    {
        const bool branch_taken_0x387524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387524u;
        // 0x387528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387524) {
            ctx->pc = 0x387630u;
            goto label_387630;
        }
    }
    ctx->pc = 0x38752Cu;
label_38752c:
    // 0x38752c: 0x0  nop
    ctx->pc = 0x38752cu;
    // NOP
label_387530:
    // 0x387530: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x387530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_387534:
    // 0x387534: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x387534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_387538:
    // 0x387538: 0xc0b2ebc  jal         func_2CBAF0
label_38753c:
    if (ctx->pc == 0x38753Cu) {
        ctx->pc = 0x38753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387538u;
        // 0x38753c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387540u;
        goto label_387540;
    }
    ctx->pc = 0x387538u;
    SET_GPR_U32(ctx, 31, 0x387540u);
    ctx->pc = 0x38753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387538u;
    // 0x38753c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x387538u, 0x387540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387540u;
label_387540:
    // 0x387540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x387540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387544:
    // 0x387544: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_387548:
    if (ctx->pc == 0x387548u) {
        ctx->pc = 0x38754Cu;
        goto label_38754c;
    }
    ctx->pc = 0x387544u;
    {
        const bool branch_taken_0x387544 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x387544) {
            ctx->pc = 0x387558u;
            goto label_387558;
        }
    }
    ctx->pc = 0x38754Cu;
label_38754c:
    // 0x38754c: 0x10000038  b           . + 4 + (0x38 << 2)
label_387550:
    if (ctx->pc == 0x387550u) {
        ctx->pc = 0x387550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38754Cu;
        // 0x387550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387554u;
        goto label_387554;
    }
    ctx->pc = 0x38754Cu;
    {
        const bool branch_taken_0x38754c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38754Cu;
        // 0x387550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38754c) {
            ctx->pc = 0x387630u;
            goto label_387630;
        }
    }
    ctx->pc = 0x387554u;
label_387554:
    // 0x387554: 0x0  nop
    ctx->pc = 0x387554u;
    // NOP
label_387558:
    // 0x387558: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x387558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_38755c:
    // 0x38755c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x38755cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_387560:
    // 0x387560: 0x320f809  jalr        $t9
label_387564:
    if (ctx->pc == 0x387564u) {
        ctx->pc = 0x387564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387560u;
        // 0x387564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387568u;
        goto label_387568;
    }
    ctx->pc = 0x387560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x387568u);
        ctx->pc = 0x387564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387560u;
        // 0x387564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387560u, 0x387568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387568u;
label_387568:
    // 0x387568: 0x7a260000  lq          $a2, 0x0($s1)
    ctx->pc = 0x387568u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_38756c:
    // 0x38756c: 0x3c024561  lui         $v0, 0x4561
    ctx->pc = 0x38756cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
label_387570:
    // 0x387570: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x387570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_387574:
    // 0x387574: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x387574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_387578:
    // 0x387578: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x387578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38757c:
    // 0x38757c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x38757cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_387580:
    // 0x387580: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x387580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_387584:
    // 0x387584: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x387584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_387588:
    // 0x387588: 0x7e060020  sq          $a2, 0x20($s0)
    ctx->pc = 0x387588u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 6));
label_38758c:
    // 0x38758c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38758cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_387590:
    // 0x387590: 0xae05002c  sw          $a1, 0x2C($s0)
    ctx->pc = 0x387590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 5));
label_387594:
    // 0x387594: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x387594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_387598:
    // 0x387598: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x387598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_38759c:
    // 0x38759c: 0xae022b38  sw          $v0, 0x2B38($s0)
    ctx->pc = 0x38759cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11064), GPR_U32(ctx, 2));
label_3875a0:
    // 0x3875a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3875a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3875a4:
    // 0x3875a4: 0xae422b38  sw          $v0, 0x2B38($s2)
    ctx->pc = 0x3875a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11064), GPR_U32(ctx, 2));
label_3875a8:
    // 0x3875a8: 0xa2042b62  sb          $a0, 0x2B62($s0)
    ctx->pc = 0x3875a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11106), (uint8_t)GPR_U32(ctx, 4));
label_3875ac:
    // 0x3875ac: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3875acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3875b0:
    // 0x3875b0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3875b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3875b4:
    // 0x3875b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3875b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3875b8:
    // 0x3875b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3875b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3875bc:
    // 0x3875bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3875c0:
    if (ctx->pc == 0x3875C0u) {
        ctx->pc = 0x3875C4u;
        goto label_3875c4;
    }
    ctx->pc = 0x3875BCu;
    {
        const bool branch_taken_0x3875bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3875bc) {
            ctx->pc = 0x3875D4u;
            goto label_3875d4;
        }
    }
    ctx->pc = 0x3875C4u;
label_3875c4:
    // 0x3875c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3875c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3875c8:
    // 0x3875c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3875c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3875cc:
    // 0x3875cc: 0x10000008  b           . + 4 + (0x8 << 2)
label_3875d0:
    if (ctx->pc == 0x3875D0u) {
        ctx->pc = 0x3875D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3875CCu;
        // 0x3875d0: 0xa6032b64  sh          $v1, 0x2B64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11108), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3875D4u;
        goto label_3875d4;
    }
    ctx->pc = 0x3875CCu;
    {
        const bool branch_taken_0x3875cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3875D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3875CCu;
        // 0x3875d0: 0xa6032b64  sh          $v1, 0x2B64($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11108), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3875cc) {
            ctx->pc = 0x3875F0u;
            goto label_3875f0;
        }
    }
    ctx->pc = 0x3875D4u;
label_3875d4:
    // 0x3875d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3875d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3875d8:
    // 0x3875d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3875d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3875dc:
    // 0x3875dc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3875dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3875e0:
    // 0x3875e0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3875e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3875e4:
    // 0x3875e4: 0x0  nop
    ctx->pc = 0x3875e4u;
    // NOP
label_3875e8:
    // 0x3875e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3875e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3875ec:
    // 0x3875ec: 0xa6032b64  sh          $v1, 0x2B64($s0)
    ctx->pc = 0x3875ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11108), (uint16_t)GPR_U32(ctx, 3));
label_3875f0:
    // 0x3875f0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3875f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3875f4:
    // 0x3875f4: 0x8e4329c0  lw          $v1, 0x29C0($s2)
    ctx->pc = 0x3875f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
label_3875f8:
    // 0x3875f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3875f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3875fc:
    // 0x3875fc: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x3875fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
label_387600:
    // 0x387600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x387600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_387604:
    // 0x387604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x387604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387608:
    // 0x387608: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x387608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38760c:
    // 0x38760c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x38760cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_387610:
    // 0x387610: 0xa6032b66  sh          $v1, 0x2B66($s0)
    ctx->pc = 0x387610u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11110), (uint16_t)GPR_U32(ctx, 3));
label_387614:
    // 0x387614: 0xa2002b6e  sb          $zero, 0x2B6E($s0)
    ctx->pc = 0x387614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11118), (uint8_t)GPR_U32(ctx, 0));
label_387618:
    // 0x387618: 0xa60029d8  sh          $zero, 0x29D8($s0)
    ctx->pc = 0x387618u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10712), (uint16_t)GPR_U32(ctx, 0));
label_38761c:
    // 0x38761c: 0xa60029da  sh          $zero, 0x29DA($s0)
    ctx->pc = 0x38761cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10714), (uint16_t)GPR_U32(ctx, 0));
label_387620:
    // 0x387620: 0xa2002b06  sb          $zero, 0x2B06($s0)
    ctx->pc = 0x387620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11014), (uint8_t)GPR_U32(ctx, 0));
label_387624:
    // 0x387624: 0xc0b273c  jal         func_2C9CF0
label_387628:
    if (ctx->pc == 0x387628u) {
        ctx->pc = 0x387628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387624u;
        // 0x387628: 0xa2020640  sb          $v0, 0x640($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38762Cu;
        goto label_38762c;
    }
    ctx->pc = 0x387624u;
    SET_GPR_U32(ctx, 31, 0x38762Cu);
    ctx->pc = 0x387628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387624u;
    // 0x387628: 0xa2020640  sb          $v0, 0x640($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CF0u, 0x387624u, 0x38762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38762Cu;
label_38762c:
    // 0x38762c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38762cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_387630:
    // 0x387630: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x387630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_387634:
    // 0x387634: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x387634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_387638:
    // 0x387638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x387638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38763c:
    // 0x38763c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38763cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_387640:
    // 0x387640: 0x3e00008  jr          $ra
label_387644:
    if (ctx->pc == 0x387644u) {
        ctx->pc = 0x387644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387640u;
        // 0x387644: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387648u;
        goto label_fallthrough_0x387640;
    }
    ctx->pc = 0x387640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387640u;
        // 0x387644: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x387640:
    ctx->pc = 0x387648u;
}
