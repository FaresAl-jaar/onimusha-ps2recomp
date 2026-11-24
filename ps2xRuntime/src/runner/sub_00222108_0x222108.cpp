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

// Function: sub_00222108
// Address: 0x222108 - 0x2221a4
void sub_00222108_0x222108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222108_0x222108");
#endif

    switch (ctx->pc) {
        case 0x22212cu: goto label_22212c;
        case 0x22213cu: goto label_22213c;
        case 0x222158u: goto label_222158;
        case 0x222168u: goto label_222168;
        default: break;
    }

    ctx->pc = 0x222108u;

    // 0x222108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22210c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x22210cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x222110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222114: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x222114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222118: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x222118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22211c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22211cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222120: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x222120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x222124: 0xc0888a2  jal         func_222288
    ctx->pc = 0x222124u;
    SET_GPR_U32(ctx, 31, 0x22212Cu);
    ctx->pc = 0x222128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222124u;
    // 0x222128: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x222124u, 0x22212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22212Cu;
label_22212c:
    // 0x22212c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22212cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222130: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x222130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x222134: 0xc088872  jal         func_2221C8
    ctx->pc = 0x222134u;
    SET_GPR_U32(ctx, 31, 0x22213Cu);
    ctx->pc = 0x222138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222134u;
    // 0x222138: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221C8u, 0x222134u, 0x22213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22213Cu;
label_22213c:
    // 0x22213c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222140: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x222140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x222144: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x222144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x222148: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x222148u;
    {
        const bool branch_taken_0x222148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222148u;
        // 0x22214c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222148) {
            ctx->pc = 0x222188u;
            goto label_222188;
        }
    }
    ctx->pc = 0x222150u;
    // 0x222150: 0xc0888a2  jal         func_222288
    ctx->pc = 0x222150u;
    SET_GPR_U32(ctx, 31, 0x222158u);
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x222150u, 0x222158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222158u;
label_222158:
    // 0x222158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22215c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22215cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222160: 0xc088872  jal         func_2221C8
    ctx->pc = 0x222160u;
    SET_GPR_U32(ctx, 31, 0x222168u);
    ctx->pc = 0x222164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222160u;
    // 0x222164: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221C8u, 0x222160u, 0x222168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222168u;
label_222168:
    // 0x222168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22216c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22216cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222170: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x222170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x222174: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222178: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x222178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22217c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22217cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222180: 0x80888a2  j           func_222288
    ctx->pc = 0x222180u;
    ctx->pc = 0x222184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222180u;
    // 0x222184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    sub_00222288_0x222288(rdram, ctx, runtime); return;
    ctx->pc = 0x222188u;
label_222188:
    // 0x222188: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22218c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22218cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222190: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x222190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x222194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x222194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222198: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x222198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22219c: 0x80888a2  j           func_222288
    ctx->pc = 0x22219Cu;
    ctx->pc = 0x2221A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22219Cu;
    // 0x2221a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    sub_00222288_0x222288(rdram, ctx, runtime); return;
    ctx->pc = 0x2221A4u;
}
