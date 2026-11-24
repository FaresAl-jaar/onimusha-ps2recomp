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

// Function: sub_00248870
// Address: 0x248870 - 0x248934
void sub_00248870_0x248870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248870_0x248870");
#endif

    switch (ctx->pc) {
        case 0x2488e8u: goto label_2488e8;
        case 0x2488f8u: goto label_2488f8;
        case 0x248908u: goto label_248908;
        case 0x248918u: goto label_248918;
        default: break;
    }

    ctx->pc = 0x248870u;

    // 0x248870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248874: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x248874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24887c: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x24887Cu;
    {
        const bool branch_taken_0x24887c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x248880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24887Cu;
        // 0x248880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24887c) {
            ctx->pc = 0x248928u;
            goto label_248928;
        }
    }
    ctx->pc = 0x248884u;
    // 0x248884: 0x240200cb  addiu       $v0, $zero, 0xCB
    ctx->pc = 0x248884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    // 0x248888: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x248888u;
    {
        const bool branch_taken_0x248888 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248888u;
        // 0x24888c: 0x28a200cc  slti        $v0, $a1, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248888) {
            ctx->pc = 0x248910u;
            goto label_248910;
        }
    }
    ctx->pc = 0x248890u;
    // 0x248890: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x248890u;
    {
        const bool branch_taken_0x248890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248890u;
        // 0x248894: 0x240200cd  addiu       $v0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248890) {
            ctx->pc = 0x2488C0u;
            goto label_2488c0;
        }
    }
    ctx->pc = 0x248898u;
    // 0x248898: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x248898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x24889c: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24889Cu;
    {
        const bool branch_taken_0x24889c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2488A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24889Cu;
        // 0x2488a0: 0x28a200ca  slti        $v0, $a1, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)202) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24889c) {
            ctx->pc = 0x2488F0u;
            goto label_2488f0;
        }
    }
    ctx->pc = 0x2488A4u;
    // 0x2488a4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2488A4u;
    {
        const bool branch_taken_0x2488a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488A4u;
        // 0x2488a8: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488a4) {
            ctx->pc = 0x248900u;
            goto label_248900;
        }
    }
    ctx->pc = 0x2488ACu;
    // 0x2488ac: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2488ACu;
    {
        const bool branch_taken_0x2488ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2488B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488ACu;
        // 0x2488b0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488ac) {
            ctx->pc = 0x2488E0u;
            goto label_2488e0;
        }
    }
    ctx->pc = 0x2488B4u;
    // 0x2488b4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2488B4u;
    {
        const bool branch_taken_0x2488b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488B4u;
        // 0x2488b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488b4) {
            ctx->pc = 0x24892Cu;
            goto label_24892c;
        }
    }
    ctx->pc = 0x2488BCu;
    // 0x2488bc: 0x0  nop
    ctx->pc = 0x2488bcu;
    // NOP
label_2488c0:
    // 0x2488c0: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2488C0u;
    {
        const bool branch_taken_0x2488c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2488C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488C0u;
        // 0x2488c4: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488c0) {
            ctx->pc = 0x248910u;
            goto label_248910;
        }
    }
    ctx->pc = 0x2488C8u;
    // 0x2488c8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2488C8u;
    {
        const bool branch_taken_0x2488c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2488CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488C8u;
        // 0x2488cc: 0x2402012b  addiu       $v0, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488c8) {
            ctx->pc = 0x248900u;
            goto label_248900;
        }
    }
    ctx->pc = 0x2488D0u;
    // 0x2488d0: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2488D0u;
    {
        const bool branch_taken_0x2488d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2488D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488D0u;
        // 0x2488d4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488d0) {
            ctx->pc = 0x248920u;
            goto label_248920;
        }
    }
    ctx->pc = 0x2488D8u;
    // 0x2488d8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2488D8u;
    {
        const bool branch_taken_0x2488d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488D8u;
        // 0x2488dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488d8) {
            ctx->pc = 0x24892Cu;
            goto label_24892c;
        }
    }
    ctx->pc = 0x2488E0u;
label_2488e0:
    // 0x2488e0: 0xc092208  jal         func_248820
    ctx->pc = 0x2488E0u;
    SET_GPR_U32(ctx, 31, 0x2488E8u);
    ctx->pc = 0x248820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248820u, 0x2488E0u, 0x2488E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488E8u;
label_2488e8:
    // 0x2488e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2488E8u;
    {
        const bool branch_taken_0x2488e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488E8u;
        // 0x2488ec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488e8) {
            ctx->pc = 0x248924u;
            goto label_248924;
        }
    }
    ctx->pc = 0x2488F0u;
label_2488f0:
    // 0x2488f0: 0xc09220c  jal         func_248830
    ctx->pc = 0x2488F0u;
    SET_GPR_U32(ctx, 31, 0x2488F8u);
    ctx->pc = 0x248830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248830u, 0x2488F0u, 0x2488F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488F8u;
label_2488f8:
    // 0x2488f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2488F8u;
    {
        const bool branch_taken_0x2488f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488F8u;
        // 0x2488fc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488f8) {
            ctx->pc = 0x248924u;
            goto label_248924;
        }
    }
    ctx->pc = 0x248900u;
label_248900:
    // 0x248900: 0xc092214  jal         func_248850
    ctx->pc = 0x248900u;
    SET_GPR_U32(ctx, 31, 0x248908u);
    ctx->pc = 0x248850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248850u, 0x248900u, 0x248908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248908u;
label_248908:
    // 0x248908: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x248908u;
    {
        const bool branch_taken_0x248908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248908u;
        // 0x24890c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248908) {
            ctx->pc = 0x248924u;
            goto label_248924;
        }
    }
    ctx->pc = 0x248910u;
label_248910:
    // 0x248910: 0xc092216  jal         func_248858
    ctx->pc = 0x248910u;
    SET_GPR_U32(ctx, 31, 0x248918u);
    ctx->pc = 0x248858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248858u, 0x248910u, 0x248918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248918u;
label_248918:
    // 0x248918: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x248918u;
    {
        const bool branch_taken_0x248918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248918u;
        // 0x24891c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248918) {
            ctx->pc = 0x248924u;
            goto label_248924;
        }
    }
    ctx->pc = 0x248920u;
label_248920:
    // 0x248920: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248924:
    // 0x248924: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x248924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_248928:
    // 0x248928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24892c:
    // 0x24892c: 0x3e00008  jr          $ra
    ctx->pc = 0x24892Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24892Cu;
        // 0x248930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24892Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248934u;
}
