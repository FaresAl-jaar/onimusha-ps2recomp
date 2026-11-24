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

// Function: sub_0021D810
// Address: 0x21d810 - 0x21d874
void sub_0021D810_0x21d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D810_0x21d810");
#endif

    switch (ctx->pc) {
        case 0x21d810u: goto label_21d810;
        case 0x21d814u: goto label_21d814;
        case 0x21d818u: goto label_21d818;
        case 0x21d81cu: goto label_21d81c;
        case 0x21d820u: goto label_21d820;
        case 0x21d824u: goto label_21d824;
        case 0x21d828u: goto label_21d828;
        case 0x21d82cu: goto label_21d82c;
        case 0x21d830u: goto label_21d830;
        case 0x21d834u: goto label_21d834;
        case 0x21d838u: goto label_21d838;
        case 0x21d83cu: goto label_21d83c;
        case 0x21d840u: goto label_21d840;
        case 0x21d844u: goto label_21d844;
        case 0x21d848u: goto label_21d848;
        case 0x21d84cu: goto label_21d84c;
        case 0x21d850u: goto label_21d850;
        case 0x21d854u: goto label_21d854;
        case 0x21d858u: goto label_21d858;
        case 0x21d85cu: goto label_21d85c;
        case 0x21d860u: goto label_21d860;
        case 0x21d864u: goto label_21d864;
        case 0x21d868u: goto label_21d868;
        case 0x21d86cu: goto label_21d86c;
        case 0x21d870u: goto label_21d870;
        default: break;
    }

    ctx->pc = 0x21d810u;

label_21d810:
    // 0x21d810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21d814:
    // 0x21d814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_21d818:
    // 0x21d818: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_21d81c:
    // 0x21d81c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21d820:
    // 0x21d820: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21d820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_21d824:
    // 0x21d824: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21d824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21d828:
    // 0x21d828: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21d828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_21d82c:
    // 0x21d82c: 0x26300950  addiu       $s0, $s1, 0x950
    ctx->pc = 0x21d82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
label_21d830:
    // 0x21d830: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x21d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21d834:
    // 0x21d834: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21d834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_21d838:
    // 0x21d838: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x21d838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_21d83c:
    // 0x21d83c: 0xc087ed0  jal         func_21FB40
label_21d840:
    if (ctx->pc == 0x21D840u) {
        ctx->pc = 0x21D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D83Cu;
        // 0x21d840: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D844u;
        goto label_21d844;
    }
    ctx->pc = 0x21D83Cu;
    SET_GPR_U32(ctx, 31, 0x21D844u);
    ctx->pc = 0x21D840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D83Cu;
    // 0x21d840: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21D83Cu, 0x21D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D844u;
label_21d844:
    // 0x21d844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d848:
    // 0x21d848: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21d84c:
    // 0x21d84c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21d850:
    if (ctx->pc == 0x21D850u) {
        ctx->pc = 0x21D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D84Cu;
        // 0x21d850: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D854u;
        goto label_21d854;
    }
    ctx->pc = 0x21D84Cu;
    {
        const bool branch_taken_0x21d84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D84Cu;
        // 0x21d850: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d84c) {
            ctx->pc = 0x21D85Cu;
            goto label_21d85c;
        }
    }
    ctx->pc = 0x21D854u;
label_21d854:
    // 0x21d854: 0x40f809  jalr        $v0
label_21d858:
    if (ctx->pc == 0x21D858u) {
        ctx->pc = 0x21D85Cu;
        goto label_21d85c;
    }
    ctx->pc = 0x21D854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D85Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D854u, 0x21D85Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D85Cu;
label_21d85c:
    // 0x21d85c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d85cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d860:
    // 0x21d860: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_21d864:
    // 0x21d864: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21d868:
    // 0x21d868: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21d868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_21d86c:
    // 0x21d86c: 0x3e00008  jr          $ra
label_21d870:
    if (ctx->pc == 0x21D870u) {
        ctx->pc = 0x21D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D86Cu;
        // 0x21d870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D874u;
        goto label_fallthrough_0x21d86c;
    }
    ctx->pc = 0x21D86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D86Cu;
        // 0x21d870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21d86c:
    ctx->pc = 0x21D874u;
}
