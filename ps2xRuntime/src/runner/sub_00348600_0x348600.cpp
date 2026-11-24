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

// Function: sub_00348600
// Address: 0x348600 - 0x348690
void sub_00348600_0x348600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348600_0x348600");
#endif

    switch (ctx->pc) {
        case 0x34863cu: goto label_34863c;
        case 0x34865cu: goto label_34865c;
        case 0x348678u: goto label_348678;
        default: break;
    }

    ctx->pc = 0x348600u;

    // 0x348600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x348600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x348604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x348604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x348608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x348608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34860c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x348610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x348610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348614: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x348614u;
    {
        const bool branch_taken_0x348614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x348618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348614u;
        // 0x348618: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348614) {
            ctx->pc = 0x348678u;
            goto label_348678;
        }
    }
    ctx->pc = 0x34861Cu;
    // 0x34861c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x34861cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x348620: 0x24428cc0  addiu       $v0, $v0, -0x7340
    ctx->pc = 0x348620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937792));
    // 0x348624: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x348624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x348628: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x348628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x34862c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34862Cu;
    {
        const bool branch_taken_0x34862c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34862c) {
            ctx->pc = 0x348640u;
            goto label_348640;
        }
    }
    ctx->pc = 0x348634u;
    // 0x348634: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x348634u;
    SET_GPR_U32(ctx, 31, 0x34863Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x348634u, 0x34863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34863Cu;
label_34863c:
    // 0x34863c: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x34863cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_348640:
    // 0x348640: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x348640u;
    {
        const bool branch_taken_0x348640 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x348644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348640u;
        // 0x348644: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348640) {
            ctx->pc = 0x348660u;
            goto label_348660;
        }
    }
    ctx->pc = 0x348648u;
    // 0x348648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x348648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34864c: 0x24427570  addiu       $v0, $v0, 0x7570
    ctx->pc = 0x34864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30064));
    // 0x348650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x348650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348654: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x348654u;
    SET_GPR_U32(ctx, 31, 0x34865Cu);
    ctx->pc = 0x348658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348654u;
    // 0x348658: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x348654u, 0x34865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34865Cu;
label_34865c:
    // 0x34865c: 0x0  nop
    ctx->pc = 0x34865cu;
    // NOP
label_348660:
    // 0x348660: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x348660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x348664: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x348664u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x348668: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x348668u;
    {
        const bool branch_taken_0x348668 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x34866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348668u;
        // 0x34866c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348668) {
            ctx->pc = 0x348678u;
            goto label_348678;
        }
    }
    ctx->pc = 0x348670u;
    // 0x348670: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x348670u;
    SET_GPR_U32(ctx, 31, 0x348678u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x348670u, 0x348678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348678u;
label_348678:
    // 0x348678: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x348678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34867c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34867cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x348680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348688: 0x3e00008  jr          $ra
    ctx->pc = 0x348688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348688u;
        // 0x34868c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348690u;
}
