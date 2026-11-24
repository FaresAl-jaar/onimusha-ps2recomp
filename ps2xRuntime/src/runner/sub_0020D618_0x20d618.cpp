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

// Function: sub_0020D618
// Address: 0x20d618 - 0x20d72c
void sub_0020D618_0x20d618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D618_0x20d618");
#endif

    switch (ctx->pc) {
        case 0x20d654u: goto label_20d654;
        case 0x20d678u: goto label_20d678;
        case 0x20d69cu: goto label_20d69c;
        case 0x20d6d0u: goto label_20d6d0;
        default: break;
    }

    ctx->pc = 0x20d618u;

    // 0x20d618: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20d618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20d61c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x20d61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x20d620: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x20d620u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d624: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20d624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20d628: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20d628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d62c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20d62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20d630: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20d630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d634: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20d634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20d638: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20d638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d63c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20d63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20d640: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20d640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20d644: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20d644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20d648: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x20d648u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x20d64c: 0xc08483c  jal         func_2120F0
    ctx->pc = 0x20D64Cu;
    SET_GPR_U32(ctx, 31, 0x20D654u);
    ctx->pc = 0x20D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D64Cu;
    // 0x20d650: 0x8e542004  lw          $s4, 0x2004($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2120F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2120F0u, 0x20D64Cu, 0x20D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D654u;
label_20d654:
    // 0x20d654: 0x2842006c  slti        $v0, $v0, 0x6C
    ctx->pc = 0x20d654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x20d658: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20D658u;
    {
        const bool branch_taken_0x20d658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D658u;
        // 0x20d65c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d658) {
            ctx->pc = 0x20D670u;
            goto label_20d670;
        }
    }
    ctx->pc = 0x20D660u;
    // 0x20d660: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20d660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x20d664: 0x2442d438  addiu       $v0, $v0, -0x2BC8
    ctx->pc = 0x20d664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956088));
    // 0x20d668: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x20D668u;
    {
        const bool branch_taken_0x20d668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D668u;
        // 0x20d66c: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d668) {
            ctx->pc = 0x20D708u;
            goto label_20d708;
        }
    }
    ctx->pc = 0x20D670u;
label_20d670:
    // 0x20d670: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D670u;
    {
        const bool branch_taken_0x20d670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D670u;
        // 0x20d674: 0x2673ffee  addiu       $s3, $s3, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967278));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d670) {
            ctx->pc = 0x20D67Cu;
            goto label_20d67c;
        }
    }
    ctx->pc = 0x20D678u;
label_20d678:
    // 0x20d678: 0x26310012  addiu       $s1, $s1, 0x12
    ctx->pc = 0x20d678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_20d67c:
    // 0x20d67c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x20d67cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x20d680: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x20D680u;
    {
        const bool branch_taken_0x20d680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d680) {
            ctx->pc = 0x20D684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D680u;
            // 0x20d684: 0xde4209c8  ld          $v0, 0x9C8($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 2504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D6B4u;
            goto label_20d6b4;
        }
    }
    ctx->pc = 0x20D688u;
    // 0x20d688: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x20d688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x20d68c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d690: 0x24a58760  addiu       $a1, $a1, -0x78A0
    ctx->pc = 0x20d690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936416));
    // 0x20d694: 0xc0494fc  jal         func_1253F0
    ctx->pc = 0x20D694u;
    SET_GPR_U32(ctx, 31, 0x20D69Cu);
    ctx->pc = 0x20D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D694u;
    // 0x20d698: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253F0u, 0x20D694u, 0x20D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D69Cu;
label_20d69c:
    // 0x20d69c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x20D69Cu;
    {
        const bool branch_taken_0x20d69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D69Cu;
        // 0x20d6a0: 0x26100012  addiu       $s0, $s0, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d69c) {
            ctx->pc = 0x20D678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d678;
        }
    }
    ctx->pc = 0x20D6A4u;
    // 0x20d6a4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x20d6a8: 0x2442d438  addiu       $v0, $v0, -0x2BC8
    ctx->pc = 0x20d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956088));
    // 0x20d6ac: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x20d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x20d6b0: 0xde4209c8  ld          $v0, 0x9C8($s2)
    ctx->pc = 0x20d6b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 2504)));
label_20d6b4:
    // 0x20d6b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20d6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d6b8: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x20d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
    // 0x20d6bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20d6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d6c0: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x20d6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x20d6c4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x20d6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20d6c8: 0xc0835cc  jal         func_20D730
    ctx->pc = 0x20D6C8u;
    SET_GPR_U32(ctx, 31, 0x20D6D0u);
    ctx->pc = 0x20D6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D6C8u;
    // 0x20d6cc: 0xfe4209c8  sd          $v0, 0x9C8($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 2504), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D730u, 0x20D6C8u, 0x20D6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D6D0u;
label_20d6d0:
    // 0x20d6d0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20D6D0u;
    {
        const bool branch_taken_0x20d6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6D0u;
        // 0x20d6d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d6d0) {
            ctx->pc = 0x20D70Cu;
            goto label_20d70c;
        }
    }
    ctx->pc = 0x20D6D8u;
    // 0x20d6d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d6dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20d6e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d6e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20d6e8: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x20d6e8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20d6ec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20D6ECu;
    {
        const bool branch_taken_0x20d6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d6ec) {
            ctx->pc = 0x20D6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D6ECu;
            // 0x20d6f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D6F4u;
            goto label_20d6f4;
        }
    }
    ctx->pc = 0x20D6F4u;
label_20d6f4:
    // 0x20d6f4: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x20d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x20d6f8: 0x2012  mflo        $a0
    ctx->pc = 0x20d6f8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x20d6fc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x20d6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x20d700: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20d700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20d704: 0xae830038  sw          $v1, 0x38($s4)
    ctx->pc = 0x20d704u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 3));
label_20d708:
    // 0x20d708: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20d708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20d70c:
    // 0x20d70c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20d70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d710: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20d710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d714: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20d714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20d718: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20d718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d71c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20d71cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d720: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20d720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d724: 0x3e00008  jr          $ra
    ctx->pc = 0x20D724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D724u;
        // 0x20d728: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D72Cu;
}
