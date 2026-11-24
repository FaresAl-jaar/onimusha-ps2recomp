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

// Function: sub_001DC440
// Address: 0x1dc440 - 0x1dc494
void sub_001DC440_0x1dc440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC440_0x1dc440");
#endif

    switch (ctx->pc) {
        case 0x1dc440u: goto label_1dc440;
        case 0x1dc444u: goto label_1dc444;
        case 0x1dc448u: goto label_1dc448;
        case 0x1dc44cu: goto label_1dc44c;
        case 0x1dc450u: goto label_1dc450;
        case 0x1dc454u: goto label_1dc454;
        case 0x1dc458u: goto label_1dc458;
        case 0x1dc45cu: goto label_1dc45c;
        case 0x1dc460u: goto label_1dc460;
        case 0x1dc464u: goto label_1dc464;
        case 0x1dc468u: goto label_1dc468;
        case 0x1dc46cu: goto label_1dc46c;
        case 0x1dc470u: goto label_1dc470;
        case 0x1dc474u: goto label_1dc474;
        case 0x1dc478u: goto label_1dc478;
        case 0x1dc47cu: goto label_1dc47c;
        case 0x1dc480u: goto label_1dc480;
        case 0x1dc484u: goto label_1dc484;
        case 0x1dc488u: goto label_1dc488;
        case 0x1dc48cu: goto label_1dc48c;
        case 0x1dc490u: goto label_1dc490;
        default: break;
    }

    ctx->pc = 0x1dc440u;

label_1dc440:
    // 0x1dc440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dc440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dc444:
    // 0x1dc444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dc444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dc448:
    // 0x1dc448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dc448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dc44c:
    // 0x1dc44c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dc450:
    // 0x1dc450: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1dc454:
    if (ctx->pc == 0x1DC454u) {
        ctx->pc = 0x1DC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC450u;
        // 0x1dc454: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC458u;
        goto label_1dc458;
    }
    ctx->pc = 0x1DC450u;
    {
        const bool branch_taken_0x1dc450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC450u;
        // 0x1dc454: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc450) {
            ctx->pc = 0x1DC480u;
            goto label_1dc480;
        }
    }
    ctx->pc = 0x1DC458u;
label_1dc458:
    // 0x1dc458: 0x24426130  addiu       $v0, $v0, 0x6130
    ctx->pc = 0x1dc458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24880));
label_1dc45c:
    // 0x1dc45c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dc45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dc460:
    // 0x1dc460: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dc460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dc464:
    // 0x1dc464: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dc464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dc468:
    // 0x1dc468: 0x320f809  jalr        $t9
label_1dc46c:
    if (ctx->pc == 0x1DC46Cu) {
        ctx->pc = 0x1DC470u;
        goto label_1dc470;
    }
    ctx->pc = 0x1DC468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC470u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC468u, 0x1DC470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC470u;
label_1dc470:
    // 0x1dc470: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1dc474:
    if (ctx->pc == 0x1DC474u) {
        ctx->pc = 0x1DC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC470u;
        // 0x1dc474: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC478u;
        goto label_1dc478;
    }
    ctx->pc = 0x1DC470u;
    {
        const bool branch_taken_0x1dc470 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC470u;
        // 0x1dc474: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc470) {
            ctx->pc = 0x1DC480u;
            goto label_1dc480;
        }
    }
    ctx->pc = 0x1DC478u;
label_1dc478:
    // 0x1dc478: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1dc478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1dc47c:
    // 0x1dc47c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dc47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dc480:
    // 0x1dc480: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dc480u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc484:
    // 0x1dc484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc488:
    // 0x1dc488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc48c:
    // 0x1dc48c: 0x3e00008  jr          $ra
label_1dc490:
    if (ctx->pc == 0x1DC490u) {
        ctx->pc = 0x1DC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC48Cu;
        // 0x1dc490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC494u;
        goto label_fallthrough_0x1dc48c;
    }
    ctx->pc = 0x1DC48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC48Cu;
        // 0x1dc490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dc48c:
    ctx->pc = 0x1DC494u;
}
