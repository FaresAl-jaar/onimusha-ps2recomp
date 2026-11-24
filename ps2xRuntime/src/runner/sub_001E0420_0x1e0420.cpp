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

// Function: sub_001E0420
// Address: 0x1e0420 - 0x1e0474
void sub_001E0420_0x1e0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0420_0x1e0420");
#endif

    switch (ctx->pc) {
        case 0x1e0420u: goto label_1e0420;
        case 0x1e0424u: goto label_1e0424;
        case 0x1e0428u: goto label_1e0428;
        case 0x1e042cu: goto label_1e042c;
        case 0x1e0430u: goto label_1e0430;
        case 0x1e0434u: goto label_1e0434;
        case 0x1e0438u: goto label_1e0438;
        case 0x1e043cu: goto label_1e043c;
        case 0x1e0440u: goto label_1e0440;
        case 0x1e0444u: goto label_1e0444;
        case 0x1e0448u: goto label_1e0448;
        case 0x1e044cu: goto label_1e044c;
        case 0x1e0450u: goto label_1e0450;
        case 0x1e0454u: goto label_1e0454;
        case 0x1e0458u: goto label_1e0458;
        case 0x1e045cu: goto label_1e045c;
        case 0x1e0460u: goto label_1e0460;
        case 0x1e0464u: goto label_1e0464;
        case 0x1e0468u: goto label_1e0468;
        case 0x1e046cu: goto label_1e046c;
        case 0x1e0470u: goto label_1e0470;
        default: break;
    }

    ctx->pc = 0x1e0420u;

label_1e0420:
    // 0x1e0420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0424:
    // 0x1e0424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e0428:
    // 0x1e0428: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e042c:
    // 0x1e042c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e042cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0430:
    // 0x1e0430: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e0434:
    if (ctx->pc == 0x1E0434u) {
        ctx->pc = 0x1E0434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0430u;
        // 0x1e0434: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0438u;
        goto label_1e0438;
    }
    ctx->pc = 0x1E0430u;
    {
        const bool branch_taken_0x1e0430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0430u;
        // 0x1e0434: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0430) {
            ctx->pc = 0x1E0460u;
            goto label_1e0460;
        }
    }
    ctx->pc = 0x1E0438u;
label_1e0438:
    // 0x1e0438: 0x244265b0  addiu       $v0, $v0, 0x65B0
    ctx->pc = 0x1e0438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26032));
label_1e043c:
    // 0x1e043c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e043cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e0440:
    // 0x1e0440: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e0440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e0444:
    // 0x1e0444: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e0444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e0448:
    // 0x1e0448: 0x320f809  jalr        $t9
label_1e044c:
    if (ctx->pc == 0x1E044Cu) {
        ctx->pc = 0x1E0450u;
        goto label_1e0450;
    }
    ctx->pc = 0x1E0448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0450u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0448u, 0x1E0450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0450u;
label_1e0450:
    // 0x1e0450: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e0454:
    if (ctx->pc == 0x1E0454u) {
        ctx->pc = 0x1E0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0450u;
        // 0x1e0454: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0458u;
        goto label_1e0458;
    }
    ctx->pc = 0x1E0450u;
    {
        const bool branch_taken_0x1e0450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0450u;
        // 0x1e0454: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0450) {
            ctx->pc = 0x1E0460u;
            goto label_1e0460;
        }
    }
    ctx->pc = 0x1E0458u;
label_1e0458:
    // 0x1e0458: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1e0458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1e045c:
    // 0x1e045c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e045cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e0460:
    // 0x1e0460: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e0460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e0464:
    // 0x1e0464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0468:
    // 0x1e0468: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e046c:
    // 0x1e046c: 0x3e00008  jr          $ra
label_1e0470:
    if (ctx->pc == 0x1E0470u) {
        ctx->pc = 0x1E0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E046Cu;
        // 0x1e0470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0474u;
        goto label_fallthrough_0x1e046c;
    }
    ctx->pc = 0x1E046Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E046Cu;
        // 0x1e0470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E046Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e046c:
    ctx->pc = 0x1E0474u;
}
