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

// Function: sub_00224B98
// Address: 0x224b98 - 0x224c04
void sub_00224B98_0x224b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224B98_0x224b98");
#endif

    switch (ctx->pc) {
        case 0x224bc0u: goto label_224bc0;
        case 0x224bd8u: goto label_224bd8;
        default: break;
    }

    ctx->pc = 0x224b98u;

    // 0x224b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224b9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x224b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224ba0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x224ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224ba8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x224ba8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x224bac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x224bacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x224bb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224bb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x224bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x224bb8: 0xc089168  jal         func_2245A0
    ctx->pc = 0x224BB8u;
    SET_GPR_U32(ctx, 31, 0x224BC0u);
    ctx->pc = 0x224BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224BB8u;
    // 0x224bbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x224BB8u, 0x224BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224BC0u;
label_224bc0:
    // 0x224bc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224bc8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x224BC8u;
    {
        const bool branch_taken_0x224bc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BC8u;
        // 0x224bcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224bc8) {
            ctx->pc = 0x224BECu;
            goto label_224bec;
        }
    }
    ctx->pc = 0x224BD0u;
    // 0x224bd0: 0xc089396  jal         func_224E58
    ctx->pc = 0x224BD0u;
    SET_GPR_U32(ctx, 31, 0x224BD8u);
    ctx->pc = 0x224E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E58u, 0x224BD0u, 0x224BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224BD8u;
label_224bd8:
    // 0x224bd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224BD8u;
    {
        const bool branch_taken_0x224bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BD8u;
        // 0x224bdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224bd8) {
            ctx->pc = 0x224BF0u;
            goto label_224bf0;
        }
    }
    ctx->pc = 0x224BE0u;
    // 0x224be0: 0x92230024  lbu         $v1, 0x24($s1)
    ctx->pc = 0x224be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x224be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224be8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x224be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_224bec:
    // 0x224bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224bf0:
    // 0x224bf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224bf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224bf8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x224bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x224BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BFCu;
        // 0x224c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224C04u;
}
