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

// Function: sub_001E6640
// Address: 0x1e6640 - 0x1e6694
void sub_001E6640_0x1e6640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6640_0x1e6640");
#endif

    switch (ctx->pc) {
        case 0x1e6640u: goto label_1e6640;
        case 0x1e6644u: goto label_1e6644;
        case 0x1e6648u: goto label_1e6648;
        case 0x1e664cu: goto label_1e664c;
        case 0x1e6650u: goto label_1e6650;
        case 0x1e6654u: goto label_1e6654;
        case 0x1e6658u: goto label_1e6658;
        case 0x1e665cu: goto label_1e665c;
        case 0x1e6660u: goto label_1e6660;
        case 0x1e6664u: goto label_1e6664;
        case 0x1e6668u: goto label_1e6668;
        case 0x1e666cu: goto label_1e666c;
        case 0x1e6670u: goto label_1e6670;
        case 0x1e6674u: goto label_1e6674;
        case 0x1e6678u: goto label_1e6678;
        case 0x1e667cu: goto label_1e667c;
        case 0x1e6680u: goto label_1e6680;
        case 0x1e6684u: goto label_1e6684;
        case 0x1e6688u: goto label_1e6688;
        case 0x1e668cu: goto label_1e668c;
        case 0x1e6690u: goto label_1e6690;
        default: break;
    }

    ctx->pc = 0x1e6640u;

label_1e6640:
    // 0x1e6640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e6644:
    // 0x1e6644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e6648:
    // 0x1e6648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e664c:
    // 0x1e664c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e664cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6650:
    // 0x1e6650: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e6654:
    if (ctx->pc == 0x1E6654u) {
        ctx->pc = 0x1E6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6650u;
        // 0x1e6654: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6658u;
        goto label_1e6658;
    }
    ctx->pc = 0x1E6650u;
    {
        const bool branch_taken_0x1e6650 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6650u;
        // 0x1e6654: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6650) {
            ctx->pc = 0x1E6680u;
            goto label_1e6680;
        }
    }
    ctx->pc = 0x1E6658u;
label_1e6658:
    // 0x1e6658: 0x24426b70  addiu       $v0, $v0, 0x6B70
    ctx->pc = 0x1e6658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27504));
label_1e665c:
    // 0x1e665c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e665cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e6660:
    // 0x1e6660: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e6660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e6664:
    // 0x1e6664: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e6664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e6668:
    // 0x1e6668: 0x320f809  jalr        $t9
label_1e666c:
    if (ctx->pc == 0x1E666Cu) {
        ctx->pc = 0x1E6670u;
        goto label_1e6670;
    }
    ctx->pc = 0x1E6668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6670u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6668u, 0x1E6670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6670u;
label_1e6670:
    // 0x1e6670: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e6674:
    if (ctx->pc == 0x1E6674u) {
        ctx->pc = 0x1E6674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6670u;
        // 0x1e6674: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6678u;
        goto label_1e6678;
    }
    ctx->pc = 0x1E6670u;
    {
        const bool branch_taken_0x1e6670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6670u;
        // 0x1e6674: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6670) {
            ctx->pc = 0x1E6680u;
            goto label_1e6680;
        }
    }
    ctx->pc = 0x1E6678u;
label_1e6678:
    // 0x1e6678: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e6678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e667c:
    // 0x1e667c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e667cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e6680:
    // 0x1e6680: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e6680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6684:
    // 0x1e6684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6688:
    // 0x1e6688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e668c:
    // 0x1e668c: 0x3e00008  jr          $ra
label_1e6690:
    if (ctx->pc == 0x1E6690u) {
        ctx->pc = 0x1E6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E668Cu;
        // 0x1e6690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6694u;
        goto label_fallthrough_0x1e668c;
    }
    ctx->pc = 0x1E668Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E668Cu;
        // 0x1e6690: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E668Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e668c:
    ctx->pc = 0x1E6694u;
}
