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

// Function: sub_0036F600
// Address: 0x36f600 - 0x36f698
void sub_0036F600_0x36f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F600_0x36f600");
#endif

    switch (ctx->pc) {
        case 0x36f644u: goto label_36f644;
        case 0x36f64cu: goto label_36f64c;
        case 0x36f660u: goto label_36f660;
        case 0x36f668u: goto label_36f668;
        case 0x36f67cu: goto label_36f67c;
        case 0x36f684u: goto label_36f684;
        default: break;
    }

    ctx->pc = 0x36f600u;

    // 0x36f600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36f600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36f604: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36f604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36f608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36f60c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36f610: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f614: 0x90840020  lbu         $a0, 0x20($a0)
    ctx->pc = 0x36f614u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x36f618: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x36F618u;
    {
        const bool branch_taken_0x36f618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x36F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F618u;
        // 0x36f61c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f618) {
            ctx->pc = 0x36F670u;
            goto label_36f670;
        }
    }
    ctx->pc = 0x36F620u;
    // 0x36f620: 0x1085000d  beq         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x36F620u;
    {
        const bool branch_taken_0x36f620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x36f620) {
            ctx->pc = 0x36F658u;
            goto label_36f658;
        }
    }
    ctx->pc = 0x36F628u;
    // 0x36f628: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36F628u;
    {
        const bool branch_taken_0x36f628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f628) {
            ctx->pc = 0x36F638u;
            goto label_36f638;
        }
    }
    ctx->pc = 0x36F630u;
    // 0x36f630: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x36F630u;
    {
        const bool branch_taken_0x36f630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f630) {
            ctx->pc = 0x36F688u;
            goto label_36f688;
        }
    }
    ctx->pc = 0x36F638u;
label_36f638:
    // 0x36f638: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x36f638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x36f63c: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x36F63Cu;
    SET_GPR_U32(ctx, 31, 0x36F644u);
    ctx->pc = 0x36F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F63Cu;
    // 0x36f640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x36F63Cu, 0x36F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F644u;
label_36f644:
    // 0x36f644: 0xc0dbdac  jal         func_36F6B0
    ctx->pc = 0x36F644u;
    SET_GPR_U32(ctx, 31, 0x36F64Cu);
    ctx->pc = 0x36F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F644u;
    // 0x36f648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F6B0u, 0x36F644u, 0x36F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F64Cu;
label_36f64c:
    // 0x36f64c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x36F64Cu;
    {
        const bool branch_taken_0x36f64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f64c) {
            ctx->pc = 0x36F688u;
            goto label_36f688;
        }
    }
    ctx->pc = 0x36F654u;
    // 0x36f654: 0x0  nop
    ctx->pc = 0x36f654u;
    // NOP
label_36f658:
    // 0x36f658: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x36F658u;
    SET_GPR_U32(ctx, 31, 0x36F660u);
    ctx->pc = 0x36F65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F658u;
    // 0x36f65c: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x36F658u, 0x36F660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F660u;
label_36f660:
    // 0x36f660: 0xc0dbe60  jal         func_36F980
    ctx->pc = 0x36F660u;
    SET_GPR_U32(ctx, 31, 0x36F668u);
    ctx->pc = 0x36F664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F660u;
    // 0x36f664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F980u, 0x36F660u, 0x36F668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F668u;
label_36f668:
    // 0x36f668: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36F668u;
    {
        const bool branch_taken_0x36f668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f668) {
            ctx->pc = 0x36F688u;
            goto label_36f688;
        }
    }
    ctx->pc = 0x36F670u;
label_36f670:
    // 0x36f670: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x36f670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x36f674: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x36F674u;
    SET_GPR_U32(ctx, 31, 0x36F67Cu);
    ctx->pc = 0x36F678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F674u;
    // 0x36f678: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x36F674u, 0x36F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F67Cu;
label_36f67c:
    // 0x36f67c: 0xc0dbeac  jal         func_36FAB0
    ctx->pc = 0x36F67Cu;
    SET_GPR_U32(ctx, 31, 0x36F684u);
    ctx->pc = 0x36F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F67Cu;
    // 0x36f680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FAB0u, 0x36F67Cu, 0x36F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F684u;
label_36f684:
    // 0x36f684: 0x0  nop
    ctx->pc = 0x36f684u;
    // NOP
label_36f688:
    // 0x36f688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36f688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f68c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36f68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f690: 0x3e00008  jr          $ra
    ctx->pc = 0x36F690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F690u;
        // 0x36f694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F698u;
}
