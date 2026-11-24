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

// Function: sub_0010B558
// Address: 0x10b558 - 0x10b6c8
void sub_0010B558_0x10b558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B558_0x10b558");
#endif

    switch (ctx->pc) {
        case 0x10b558u: goto label_10b558;
        case 0x10b55cu: goto label_10b55c;
        case 0x10b560u: goto label_10b560;
        case 0x10b564u: goto label_10b564;
        case 0x10b568u: goto label_10b568;
        case 0x10b56cu: goto label_10b56c;
        case 0x10b570u: goto label_10b570;
        case 0x10b574u: goto label_10b574;
        case 0x10b578u: goto label_10b578;
        case 0x10b57cu: goto label_10b57c;
        case 0x10b580u: goto label_10b580;
        case 0x10b584u: goto label_10b584;
        case 0x10b588u: goto label_10b588;
        case 0x10b58cu: goto label_10b58c;
        case 0x10b590u: goto label_10b590;
        case 0x10b594u: goto label_10b594;
        case 0x10b598u: goto label_10b598;
        case 0x10b59cu: goto label_10b59c;
        case 0x10b5a0u: goto label_10b5a0;
        case 0x10b5a4u: goto label_10b5a4;
        case 0x10b5a8u: goto label_10b5a8;
        case 0x10b5acu: goto label_10b5ac;
        case 0x10b5b0u: goto label_10b5b0;
        case 0x10b5b4u: goto label_10b5b4;
        case 0x10b5b8u: goto label_10b5b8;
        case 0x10b5bcu: goto label_10b5bc;
        case 0x10b5c0u: goto label_10b5c0;
        case 0x10b5c4u: goto label_10b5c4;
        case 0x10b5c8u: goto label_10b5c8;
        case 0x10b5ccu: goto label_10b5cc;
        case 0x10b5d0u: goto label_10b5d0;
        case 0x10b5d4u: goto label_10b5d4;
        case 0x10b5d8u: goto label_10b5d8;
        case 0x10b5dcu: goto label_10b5dc;
        case 0x10b5e0u: goto label_10b5e0;
        case 0x10b5e4u: goto label_10b5e4;
        case 0x10b5e8u: goto label_10b5e8;
        case 0x10b5ecu: goto label_10b5ec;
        case 0x10b5f0u: goto label_10b5f0;
        case 0x10b5f4u: goto label_10b5f4;
        case 0x10b5f8u: goto label_10b5f8;
        case 0x10b5fcu: goto label_10b5fc;
        case 0x10b600u: goto label_10b600;
        case 0x10b604u: goto label_10b604;
        case 0x10b608u: goto label_10b608;
        case 0x10b60cu: goto label_10b60c;
        case 0x10b610u: goto label_10b610;
        case 0x10b614u: goto label_10b614;
        case 0x10b618u: goto label_10b618;
        case 0x10b61cu: goto label_10b61c;
        case 0x10b620u: goto label_10b620;
        case 0x10b624u: goto label_10b624;
        case 0x10b628u: goto label_10b628;
        case 0x10b62cu: goto label_10b62c;
        case 0x10b630u: goto label_10b630;
        case 0x10b634u: goto label_10b634;
        case 0x10b638u: goto label_10b638;
        case 0x10b63cu: goto label_10b63c;
        case 0x10b640u: goto label_10b640;
        case 0x10b644u: goto label_10b644;
        case 0x10b648u: goto label_10b648;
        case 0x10b64cu: goto label_10b64c;
        case 0x10b650u: goto label_10b650;
        case 0x10b654u: goto label_10b654;
        case 0x10b658u: goto label_10b658;
        case 0x10b65cu: goto label_10b65c;
        case 0x10b660u: goto label_10b660;
        case 0x10b664u: goto label_10b664;
        case 0x10b668u: goto label_10b668;
        case 0x10b66cu: goto label_10b66c;
        case 0x10b670u: goto label_10b670;
        case 0x10b674u: goto label_10b674;
        case 0x10b678u: goto label_10b678;
        case 0x10b67cu: goto label_10b67c;
        case 0x10b680u: goto label_10b680;
        case 0x10b684u: goto label_10b684;
        case 0x10b688u: goto label_10b688;
        case 0x10b68cu: goto label_10b68c;
        case 0x10b690u: goto label_10b690;
        case 0x10b694u: goto label_10b694;
        case 0x10b698u: goto label_10b698;
        case 0x10b69cu: goto label_10b69c;
        case 0x10b6a0u: goto label_10b6a0;
        case 0x10b6a4u: goto label_10b6a4;
        case 0x10b6a8u: goto label_10b6a8;
        case 0x10b6acu: goto label_10b6ac;
        case 0x10b6b0u: goto label_10b6b0;
        case 0x10b6b4u: goto label_10b6b4;
        case 0x10b6b8u: goto label_10b6b8;
        case 0x10b6bcu: goto label_10b6bc;
        case 0x10b6c0u: goto label_10b6c0;
        case 0x10b6c4u: goto label_10b6c4;
        default: break;
    }

    ctx->pc = 0x10b558u;

label_10b558:
    // 0x10b558: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10b558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_10b55c:
    // 0x10b55c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b560:
    // 0x10b560: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10b560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_10b564:
    // 0x10b564: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10b564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_10b568:
    // 0x10b568: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10b568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10b56c:
    // 0x10b56c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10b56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_10b570:
    // 0x10b570: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10b570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b574:
    // 0x10b574: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x10b574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_10b578:
    // 0x10b578: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10b578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_10b57c:
    // 0x10b57c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_10b580:
    if (ctx->pc == 0x10B580u) {
        ctx->pc = 0x10B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B57Cu;
        // 0x10b580: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B584u;
        goto label_10b584;
    }
    ctx->pc = 0x10B57Cu;
    {
        const bool branch_taken_0x10b57c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B57Cu;
        // 0x10b580: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b57c) {
            ctx->pc = 0x10B590u;
            goto label_10b590;
        }
    }
    ctx->pc = 0x10B584u;
label_10b584:
    // 0x10b584: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x10b584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_10b588:
    // 0x10b588: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_10b58c:
    if (ctx->pc == 0x10B58Cu) {
        ctx->pc = 0x10B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B588u;
        // 0x10b58c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B590u;
        goto label_10b590;
    }
    ctx->pc = 0x10B588u;
    {
        const bool branch_taken_0x10b588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B588u;
        // 0x10b58c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b588) {
            ctx->pc = 0x10B5CCu;
            goto label_10b5cc;
        }
    }
    ctx->pc = 0x10B590u;
label_10b590:
    // 0x10b590: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10b594:
    // 0x10b594: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_10b598:
    if (ctx->pc == 0x10B598u) {
        ctx->pc = 0x10B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B594u;
        // 0x10b598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B59Cu;
        goto label_10b59c;
    }
    ctx->pc = 0x10B594u;
    {
        const bool branch_taken_0x10b594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B594u;
        // 0x10b598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b594) {
            ctx->pc = 0x10B5A8u;
            goto label_10b5a8;
        }
    }
    ctx->pc = 0x10B59Cu;
label_10b59c:
    // 0x10b59c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x10b59cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_10b5a0:
    // 0x10b5a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b5a4:
    // 0x10b5a4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_10b5a8:
    // 0x10b5a8: 0xc042ca8  jal         func_10B2A0
label_10b5ac:
    if (ctx->pc == 0x10B5ACu) {
        ctx->pc = 0x10B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5A8u;
        // 0x10b5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B5B0u;
        goto label_10b5b0;
    }
    ctx->pc = 0x10B5A8u;
    SET_GPR_U32(ctx, 31, 0x10B5B0u);
    ctx->pc = 0x10B5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5A8u;
    // 0x10b5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2A0u, 0x10B5A8u, 0x10B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5B0u;
label_10b5b0:
    // 0x10b5b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_10b5b4:
    if (ctx->pc == 0x10B5B4u) {
        ctx->pc = 0x10B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5B0u;
        // 0x10b5b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B5B8u;
        goto label_10b5b8;
    }
    ctx->pc = 0x10B5B0u;
    {
        const bool branch_taken_0x10b5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5B0u;
        // 0x10b5b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5b0) {
            ctx->pc = 0x10B5C4u;
            goto label_10b5c4;
        }
    }
    ctx->pc = 0x10B5B8u;
label_10b5b8:
    // 0x10b5b8: 0xc042f82  jal         func_10BE08
label_10b5bc:
    if (ctx->pc == 0x10B5BCu) {
        ctx->pc = 0x10B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5B8u;
        // 0x10b5bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B5C0u;
        goto label_10b5c0;
    }
    ctx->pc = 0x10B5B8u;
    SET_GPR_U32(ctx, 31, 0x10B5C0u);
    ctx->pc = 0x10B5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5B8u;
    // 0x10b5bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BE08u, 0x10B5B8u, 0x10B5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5C0u;
label_10b5c0:
    // 0x10b5c0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x10b5c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10b5c4:
    // 0x10b5c4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_10b5c8:
    if (ctx->pc == 0x10B5C8u) {
        ctx->pc = 0x10B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5C4u;
        // 0x10b5c8: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B5CCu;
        goto label_10b5cc;
    }
    ctx->pc = 0x10B5C4u;
    {
        const bool branch_taken_0x10b5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5C4u;
        // 0x10b5c8: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5c4) {
            ctx->pc = 0x10B634u;
            goto label_10b634;
        }
    }
    ctx->pc = 0x10B5CCu;
label_10b5cc:
    // 0x10b5cc: 0xc042ca8  jal         func_10B2A0
label_10b5d0:
    if (ctx->pc == 0x10B5D0u) {
        ctx->pc = 0x10B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5CCu;
        // 0x10b5d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B5D4u;
        goto label_10b5d4;
    }
    ctx->pc = 0x10B5CCu;
    SET_GPR_U32(ctx, 31, 0x10B5D4u);
    ctx->pc = 0x10B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5CCu;
    // 0x10b5d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2A0u, 0x10B5CCu, 0x10B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5D4u;
label_10b5d4:
    // 0x10b5d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b5d8:
    // 0x10b5d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10b5d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b5dc:
    // 0x10b5dc: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_10b5e0:
    if (ctx->pc == 0x10B5E0u) {
        ctx->pc = 0x10B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5DCu;
        // 0x10b5e0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B5E4u;
        goto label_10b5e4;
    }
    ctx->pc = 0x10B5DCu;
    {
        const bool branch_taken_0x10b5dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5DCu;
        // 0x10b5e0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5dc) {
            ctx->pc = 0x10B630u;
            goto label_10b630;
        }
    }
    ctx->pc = 0x10B5E4u;
label_10b5e4:
    // 0x10b5e4: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x10b5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_10b5e8:
    // 0x10b5e8: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_10b5ec:
    if (ctx->pc == 0x10B5ECu) {
        ctx->pc = 0x10B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5E8u;
        // 0x10b5ec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B5F0u;
        goto label_10b5f0;
    }
    ctx->pc = 0x10B5E8u;
    {
        const bool branch_taken_0x10b5e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5E8u;
        // 0x10b5ec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5e8) {
            ctx->pc = 0x10B634u;
            goto label_10b634;
        }
    }
    ctx->pc = 0x10B5F0u;
label_10b5f0:
    // 0x10b5f0: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x10b5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_10b5f4:
    // 0x10b5f4: 0x50e00010  beql        $a3, $zero, . + 4 + (0x10 << 2)
label_10b5f8:
    if (ctx->pc == 0x10B5F8u) {
        ctx->pc = 0x10B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5F4u;
        // 0x10b5f8: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B5FCu;
        goto label_10b5fc;
    }
    ctx->pc = 0x10B5F4u;
    {
        const bool branch_taken_0x10b5f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b5f4) {
            ctx->pc = 0x10B5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B5F4u;
            // 0x10b5f8: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B638u;
            goto label_10b638;
        }
    }
    ctx->pc = 0x10B5FCu;
label_10b5fc:
    // 0x10b5fc: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x10b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_10b600:
    // 0x10b600: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x10b600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10b604:
    // 0x10b604: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x10b604u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b608:
    // 0x10b608: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10b608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10b60c:
    // 0x10b60c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_10b610:
    // 0x10b610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10b610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10b614:
    // 0x10b614: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10b614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10b618:
    // 0x10b618: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x10b618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_10b61c:
    // 0x10b61c: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x10b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_10b620:
    // 0x10b620: 0xe0f809  jalr        $a3
label_10b624:
    if (ctx->pc == 0x10B624u) {
        ctx->pc = 0x10B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B620u;
        // 0x10b624: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B628u;
        goto label_10b628;
    }
    ctx->pc = 0x10B620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x10B628u);
        ctx->pc = 0x10B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B620u;
        // 0x10b624: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B620u, 0x10B628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B628u;
label_10b628:
    // 0x10b628: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x10b628u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10b62c:
    // 0x10b62c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x10b62cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b630:
    // 0x10b630: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10b630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b634:
    // 0x10b634: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x10b634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_10b638:
    // 0x10b638: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_10b63c:
    if (ctx->pc == 0x10B63Cu) {
        ctx->pc = 0x10B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B638u;
        // 0x10b63c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B640u;
        goto label_10b640;
    }
    ctx->pc = 0x10B638u;
    {
        const bool branch_taken_0x10b638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B638u;
        // 0x10b63c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b638) {
            ctx->pc = 0x10B6ACu;
            goto label_10b6ac;
        }
    }
    ctx->pc = 0x10B640u;
label_10b640:
    // 0x10b640: 0x8e250128  lw          $a1, 0x128($s1)
    ctx->pc = 0x10b640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_10b644:
    // 0x10b644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10b648:
    // 0x10b648: 0xc043286  jal         func_10CA18
label_10b64c:
    if (ctx->pc == 0x10B64Cu) {
        ctx->pc = 0x10B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B648u;
        // 0x10b64c: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B650u;
        goto label_10b650;
    }
    ctx->pc = 0x10B648u;
    SET_GPR_U32(ctx, 31, 0x10B650u);
    ctx->pc = 0x10B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B648u;
    // 0x10b64c: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA18u, 0x10B648u, 0x10B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B650u;
label_10b650:
    // 0x10b650: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x10b650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_10b654:
    // 0x10b654: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10b654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10b658:
    // 0x10b658: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_10b65c:
    if (ctx->pc == 0x10B65Cu) {
        ctx->pc = 0x10B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B658u;
        // 0x10b65c: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B660u;
        goto label_10b660;
    }
    ctx->pc = 0x10B658u;
    {
        const bool branch_taken_0x10b658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10b658) {
            ctx->pc = 0x10B65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B658u;
            // 0x10b65c: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B678u;
            goto label_10b678;
        }
    }
    ctx->pc = 0x10B660u;
label_10b660:
    // 0x10b660: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_10b664:
    if (ctx->pc == 0x10B664u) {
        ctx->pc = 0x10B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B660u;
        // 0x10b664: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B668u;
        goto label_10b668;
    }
    ctx->pc = 0x10B660u;
    {
        const bool branch_taken_0x10b660 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b660) {
            ctx->pc = 0x10B664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B660u;
            // 0x10b664: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B678u;
            goto label_10b678;
        }
    }
    ctx->pc = 0x10B668u;
label_10b668:
    // 0x10b668: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x10b668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_10b66c:
    // 0x10b66c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10b66cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_10b670:
    // 0x10b670: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x10b670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
label_10b674:
    // 0x10b674: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x10b674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_10b678:
    // 0x10b678: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x10b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_10b67c:
    // 0x10b67c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10b680:
    // 0x10b680: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x10b680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_10b684:
    // 0x10b684: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x10b684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_10b688:
    // 0x10b688: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_10b68c:
    if (ctx->pc == 0x10B68Cu) {
        ctx->pc = 0x10B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B688u;
        // 0x10b68c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B690u;
        goto label_10b690;
    }
    ctx->pc = 0x10B688u;
    {
        const bool branch_taken_0x10b688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B688u;
        // 0x10b68c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b688) {
            ctx->pc = 0x10B6ACu;
            goto label_10b6ac;
        }
    }
    ctx->pc = 0x10B690u;
label_10b690:
    // 0x10b690: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x10b690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_10b694:
    // 0x10b694: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x10b694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10b698:
    // 0x10b698: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10b69c:
    // 0x10b69c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10b6a0:
    // 0x10b6a0: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x10b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
label_10b6a4:
    // 0x10b6a4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x10b6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_10b6a8:
    // 0x10b6a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x10b6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10b6ac:
    // 0x10b6ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10b6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10b6b0:
    // 0x10b6b0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x10b6b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10b6b4:
    // 0x10b6b4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10b6b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10b6b8:
    // 0x10b6b8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10b6b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10b6bc:
    // 0x10b6bc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10b6bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10b6c0:
    // 0x10b6c0: 0x3e00008  jr          $ra
label_10b6c4:
    if (ctx->pc == 0x10B6C4u) {
        ctx->pc = 0x10B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6C0u;
        // 0x10b6c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B6C8u;
        goto label_fallthrough_0x10b6c0;
    }
    ctx->pc = 0x10B6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6C0u;
        // 0x10b6c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10b6c0:
    ctx->pc = 0x10B6C8u;
}
