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

// Function: sub_0021C798
// Address: 0x21c798 - 0x21c85c
void sub_0021C798_0x21c798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C798_0x21c798");
#endif

    switch (ctx->pc) {
        case 0x21c808u: goto label_21c808;
        case 0x21c81cu: goto label_21c81c;
        case 0x21c830u: goto label_21c830;
        default: break;
    }

    ctx->pc = 0x21c798u;

    // 0x21c798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c79c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21c79cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c7a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c7a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c7a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c7ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c7b0: 0x26250a0c  addiu       $a1, $s1, 0xA0C
    ctx->pc = 0x21c7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2572));
    // 0x21c7b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21c7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c7b8: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x21c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x21c7bc: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x21c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x21c7c0: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x21c7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x21c7c4: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x21c7c4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x21c7c8: 0x671826  xor         $v1, $v1, $a3
    ctx->pc = 0x21c7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 7));
    // 0x21c7cc: 0x34a20002  ori         $v0, $a1, 0x2
    ctx->pc = 0x21c7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x21c7d0: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x21c7d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x21c7d4: 0x10a60019  beq         $a1, $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x21C7D4u;
    {
        const bool branch_taken_0x21c7d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x21C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7D4u;
        // 0x21c7d8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7d4) {
            ctx->pc = 0x21C83Cu;
            goto label_21c83c;
        }
    }
    ctx->pc = 0x21C7DCu;
    // 0x21c7dc: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x21c7dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x21c7e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C7E0u;
    {
        const bool branch_taken_0x21c7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c7e0) {
            ctx->pc = 0x21C7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C7E0u;
            // 0x21c7e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C7F8u;
            goto label_21c7f8;
        }
    }
    ctx->pc = 0x21C7E8u;
    // 0x21c7e8: 0x10a70014  beq         $a1, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x21C7E8u;
    {
        const bool branch_taken_0x21c7e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x21C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7E8u;
        // 0x21c7ec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7e8) {
            ctx->pc = 0x21C83Cu;
            goto label_21c83c;
        }
    }
    ctx->pc = 0x21C7F0u;
    // 0x21c7f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x21C7F0u;
    {
        const bool branch_taken_0x21c7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7F0u;
        // 0x21c7f4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7f0) {
            ctx->pc = 0x21C83Cu;
            goto label_21c83c;
        }
    }
    ctx->pc = 0x21C7F8u;
label_21c7f8:
    // 0x21c7f8: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x21C7F8u;
    {
        const bool branch_taken_0x21c7f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x21C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7F8u;
        // 0x21c7fc: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7f8) {
            ctx->pc = 0x21C83Cu;
            goto label_21c83c;
        }
    }
    ctx->pc = 0x21C800u;
    // 0x21c800: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21C800u;
    SET_GPR_U32(ctx, 31, 0x21C808u);
    ctx->pc = 0x21C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C800u;
    // 0x21c804: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21C800u, 0x21C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C808u;
label_21c808:
    // 0x21c808: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21c808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c80c: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x21C80Cu;
    {
        const bool branch_taken_0x21c80c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C80Cu;
        // 0x21c810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c80c) {
            ctx->pc = 0x21C840u;
            goto label_21c840;
        }
    }
    ctx->pc = 0x21C814u;
    // 0x21c814: 0xc08a044  jal         func_228110
    ctx->pc = 0x21C814u;
    SET_GPR_U32(ctx, 31, 0x21C81Cu);
    ctx->pc = 0x228110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228110u, 0x21C814u, 0x21C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C81Cu;
label_21c81c:
    // 0x21c81c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C81Cu;
    {
        const bool branch_taken_0x21c81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c81c) {
            ctx->pc = 0x21C820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C81Cu;
            // 0x21c820: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C83Cu;
            goto label_21c83c;
        }
    }
    ctx->pc = 0x21C824u;
    // 0x21c824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c828: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21C828u;
    SET_GPR_U32(ctx, 31, 0x21C830u);
    ctx->pc = 0x21C82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C828u;
    // 0x21c82c: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21C828u, 0x21C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C830u;
label_21c830:
    // 0x21c830: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C830u;
    {
        const bool branch_taken_0x21c830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C830u;
        // 0x21c834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c830) {
            ctx->pc = 0x21C840u;
            goto label_21c840;
        }
    }
    ctx->pc = 0x21C838u;
    // 0x21c838: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x21c838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21c83c:
    // 0x21c83c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c840:
    // 0x21c840: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c844: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21c844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c84c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c850: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x21c850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x21c854: 0x8087e5e  j           func_21F978
    ctx->pc = 0x21C854u;
    ctx->pc = 0x21C858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C854u;
    // 0x21c858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    sub_0021F978_0x21f978(rdram, ctx, runtime); return;
    ctx->pc = 0x21C85Cu;
}
