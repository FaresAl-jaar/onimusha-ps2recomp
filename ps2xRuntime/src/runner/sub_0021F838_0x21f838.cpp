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

// Function: sub_0021F838
// Address: 0x21f838 - 0x21f8ec
void sub_0021F838_0x21f838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F838_0x21f838");
#endif

    switch (ctx->pc) {
        case 0x21f868u: goto label_21f868;
        case 0x21f888u: goto label_21f888;
        case 0x21f8c0u: goto label_21f8c0;
        case 0x21f8d0u: goto label_21f8d0;
        default: break;
    }

    ctx->pc = 0x21f838u;

    // 0x21f838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f83c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21f840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f844: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f848: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21f848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f84c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21f84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21f850: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21f850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f854: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x21F854u;
    {
        const bool branch_taken_0x21f854 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F854u;
        // 0x21f858: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f854) {
            ctx->pc = 0x21F880u;
            goto label_21f880;
        }
    }
    ctx->pc = 0x21F85Cu;
    // 0x21f85c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f860: 0xc087e3c  jal         func_21F8F0
    ctx->pc = 0x21F860u;
    SET_GPR_U32(ctx, 31, 0x21F868u);
    ctx->pc = 0x21F864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F860u;
    // 0x21f864: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F8F0u, 0x21F860u, 0x21F868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F868u;
label_21f868:
    // 0x21f868: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x21f868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21f86c: 0x3c01004c  lui         $at, 0x4C
    ctx->pc = 0x21f86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)76 << 16));
    // 0x21f870: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x21f870u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x21f874: 0xac329fc8  sw          $s2, -0x6038($at)
    ctx->pc = 0x21f874u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942664), GPR_U32(ctx, 18));
    // 0x21f878: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x21F878u;
    {
        const bool branch_taken_0x21f878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F878u;
        // 0x21f87c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f878) {
            ctx->pc = 0x21F8D4u;
            goto label_21f8d4;
        }
    }
    ctx->pc = 0x21F880u;
label_21f880:
    // 0x21f880: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21F880u;
    SET_GPR_U32(ctx, 31, 0x21F888u);
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21F880u, 0x21F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F888u;
label_21f888:
    // 0x21f888: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21f888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21f88c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21F88Cu;
    {
        const bool branch_taken_0x21f88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F88Cu;
        // 0x21f890: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f88c) {
            ctx->pc = 0x21F8B0u;
            goto label_21f8b0;
        }
    }
    ctx->pc = 0x21F894u;
    // 0x21f894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f898: 0x34a50112  ori         $a1, $a1, 0x112
    ctx->pc = 0x21f898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)274);
    // 0x21f89c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f89cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f8a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21f8a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f8a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21f8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f8a8: 0x80848e0  j           func_212380
    ctx->pc = 0x21F8A8u;
    ctx->pc = 0x21F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F8A8u;
    // 0x21f8ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21F8B0u;
label_21f8b0:
    // 0x21f8b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21f8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8b8: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x21F8B8u;
    SET_GPR_U32(ctx, 31, 0x21F8C0u);
    ctx->pc = 0x21F8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F8B8u;
    // 0x21f8bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x21F8B8u, 0x21F8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F8C0u;
label_21f8c0:
    // 0x21f8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21f8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8c8: 0xc087e72  jal         func_21F9C8
    ctx->pc = 0x21F8C8u;
    SET_GPR_U32(ctx, 31, 0x21F8D0u);
    ctx->pc = 0x21F8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F8C8u;
    // 0x21f8cc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F9C8u, 0x21F8C8u, 0x21F8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F8D0u;
label_21f8d0:
    // 0x21f8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f8d4:
    // 0x21f8d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21f8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f8d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f8dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21f8dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f8e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21f8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x21F8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8E4u;
        // 0x21f8e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F8ECu;
}
