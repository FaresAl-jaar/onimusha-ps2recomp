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

// Function: sub_00370710
// Address: 0x370710 - 0x370770
void sub_00370710_0x370710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370710_0x370710");
#endif

    switch (ctx->pc) {
        case 0x370734u: goto label_370734;
        case 0x37073cu: goto label_37073c;
        case 0x370754u: goto label_370754;
        case 0x37075cu: goto label_37075c;
        default: break;
    }

    ctx->pc = 0x370710u;

    // 0x370710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x370710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x370714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x370714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x370718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x370718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37071c: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x37071cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x370720: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x370720u;
    {
        const bool branch_taken_0x370720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370720u;
        // 0x370724: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370720) {
            ctx->pc = 0x370748u;
            goto label_370748;
        }
    }
    ctx->pc = 0x370728u;
    // 0x370728: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x370728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x37072c: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x37072Cu;
    SET_GPR_U32(ctx, 31, 0x370734u);
    ctx->pc = 0x370730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37072Cu;
    // 0x370730: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x37072Cu, 0x370734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370734u;
label_370734:
    // 0x370734: 0xc0dc1e0  jal         func_370780
    ctx->pc = 0x370734u;
    SET_GPR_U32(ctx, 31, 0x37073Cu);
    ctx->pc = 0x370738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370734u;
    // 0x370738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370780u, 0x370734u, 0x37073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37073Cu;
label_37073c:
    // 0x37073c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37073Cu;
    {
        const bool branch_taken_0x37073c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37073c) {
            ctx->pc = 0x370760u;
            goto label_370760;
        }
    }
    ctx->pc = 0x370744u;
    // 0x370744: 0x0  nop
    ctx->pc = 0x370744u;
    // NOP
label_370748:
    // 0x370748: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x370748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x37074c: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x37074Cu;
    SET_GPR_U32(ctx, 31, 0x370754u);
    ctx->pc = 0x370750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37074Cu;
    // 0x370750: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x37074Cu, 0x370754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370754u;
label_370754:
    // 0x370754: 0xc0dc294  jal         func_370A50
    ctx->pc = 0x370754u;
    SET_GPR_U32(ctx, 31, 0x37075Cu);
    ctx->pc = 0x370758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370754u;
    // 0x370758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370A50u, 0x370754u, 0x37075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37075Cu;
label_37075c:
    // 0x37075c: 0x0  nop
    ctx->pc = 0x37075cu;
    // NOP
label_370760:
    // 0x370760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x370760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x370764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370768: 0x3e00008  jr          $ra
    ctx->pc = 0x370768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370768u;
        // 0x37076c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370770u;
}
