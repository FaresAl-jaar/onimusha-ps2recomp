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

// Function: sub_003068F0
// Address: 0x3068f0 - 0x306980
void sub_003068F0_0x3068f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003068F0_0x3068f0");
#endif

    switch (ctx->pc) {
        case 0x30692cu: goto label_30692c;
        case 0x30694cu: goto label_30694c;
        case 0x306968u: goto label_306968;
        default: break;
    }

    ctx->pc = 0x3068f0u;

    // 0x3068f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3068f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3068f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3068f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3068f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3068f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3068fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3068fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x306900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x306900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306904: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x306904u;
    {
        const bool branch_taken_0x306904 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x306908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306904u;
        // 0x306908: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306904) {
            ctx->pc = 0x306968u;
            goto label_306968;
        }
    }
    ctx->pc = 0x30690Cu;
    // 0x30690c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x30690cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x306910: 0x24428290  addiu       $v0, $v0, -0x7D70
    ctx->pc = 0x306910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x306914: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x306914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x306918: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x306918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x30691c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30691Cu;
    {
        const bool branch_taken_0x30691c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30691c) {
            ctx->pc = 0x306930u;
            goto label_306930;
        }
    }
    ctx->pc = 0x306924u;
    // 0x306924: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x306924u;
    SET_GPR_U32(ctx, 31, 0x30692Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x306924u, 0x30692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30692Cu;
label_30692c:
    // 0x30692c: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x30692cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_306930:
    // 0x306930: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x306930u;
    {
        const bool branch_taken_0x306930 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x306934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306930u;
        // 0x306934: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306930) {
            ctx->pc = 0x306950u;
            goto label_306950;
        }
    }
    ctx->pc = 0x306938u;
    // 0x306938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30693c: 0x24427570  addiu       $v0, $v0, 0x7570
    ctx->pc = 0x30693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30064));
    // 0x306940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306944: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x306944u;
    SET_GPR_U32(ctx, 31, 0x30694Cu);
    ctx->pc = 0x306948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306944u;
    // 0x306948: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x306944u, 0x30694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30694Cu;
label_30694c:
    // 0x30694c: 0x0  nop
    ctx->pc = 0x30694cu;
    // NOP
label_306950:
    // 0x306950: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x306950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x306954: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x306954u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x306958: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306958u;
    {
        const bool branch_taken_0x306958 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x30695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306958u;
        // 0x30695c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306958) {
            ctx->pc = 0x306968u;
            goto label_306968;
        }
    }
    ctx->pc = 0x306960u;
    // 0x306960: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x306960u;
    SET_GPR_U32(ctx, 31, 0x306968u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x306960u, 0x306968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306968u;
label_306968:
    // 0x306968: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x306968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30696c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30696cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x306970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x306974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306978: 0x3e00008  jr          $ra
    ctx->pc = 0x306978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306978u;
        // 0x30697c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306980u;
}
