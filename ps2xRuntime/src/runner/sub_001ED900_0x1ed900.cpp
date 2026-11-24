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

// Function: sub_001ED900
// Address: 0x1ed900 - 0x1ed978
void sub_001ED900_0x1ed900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED900_0x1ed900");
#endif

    switch (ctx->pc) {
        case 0x1ed91cu: goto label_1ed91c;
        case 0x1ed92cu: goto label_1ed92c;
        case 0x1ed950u: goto label_1ed950;
        case 0x1ed960u: goto label_1ed960;
        default: break;
    }

    ctx->pc = 0x1ed900u;

    // 0x1ed900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ed900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ed904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ed904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ed908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed90c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ed910: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ed910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed914: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1ED914u;
    SET_GPR_U32(ctx, 31, 0x1ED91Cu);
    ctx->pc = 0x1ED918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED914u;
    // 0x1ed918: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1ED914u, 0x1ED91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED91Cu;
label_1ed91c:
    // 0x1ed91c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1ed91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1ed920: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ed920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed924: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1ED924u;
    SET_GPR_U32(ctx, 31, 0x1ED92Cu);
    ctx->pc = 0x1ED928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED924u;
    // 0x1ed928: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1ED924u, 0x1ED92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED92Cu;
label_1ed92c:
    // 0x1ed92c: 0x7a220060  lq          $v0, 0x60($s1)
    ctx->pc = 0x1ed92cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1ed930: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1ed930u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1ed934: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ed934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed938: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1ed938u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ed93c: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1ed93cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed940: 0x92250044  lbu         $a1, 0x44($s1)
    ctx->pc = 0x1ed940u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1ed944: 0x92260045  lbu         $a2, 0x45($s1)
    ctx->pc = 0x1ed944u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
    // 0x1ed948: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x1ED948u;
    SET_GPR_U32(ctx, 31, 0x1ED950u);
    ctx->pc = 0x1ED94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED948u;
    // 0x1ed94c: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1ED948u, 0x1ED950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED950u;
label_1ed950:
    // 0x1ed950: 0x92250046  lbu         $a1, 0x46($s1)
    ctx->pc = 0x1ed950u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x1ed954: 0x92260047  lbu         $a2, 0x47($s1)
    ctx->pc = 0x1ed954u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 71)));
    // 0x1ed958: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x1ED958u;
    SET_GPR_U32(ctx, 31, 0x1ED960u);
    ctx->pc = 0x1ED95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED958u;
    // 0x1ed95c: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1ED958u, 0x1ED960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED960u;
label_1ed960:
    // 0x1ed960: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ed960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ed968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed96c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ed96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed970: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED970u;
        // 0x1ed974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED978u;
}
