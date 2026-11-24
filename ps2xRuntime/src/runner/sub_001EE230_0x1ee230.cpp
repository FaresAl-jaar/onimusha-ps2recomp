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

// Function: sub_001EE230
// Address: 0x1ee230 - 0x1ee2a8
void sub_001EE230_0x1ee230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE230_0x1ee230");
#endif

    switch (ctx->pc) {
        case 0x1ee24cu: goto label_1ee24c;
        case 0x1ee25cu: goto label_1ee25c;
        case 0x1ee280u: goto label_1ee280;
        case 0x1ee290u: goto label_1ee290;
        default: break;
    }

    ctx->pc = 0x1ee230u;

    // 0x1ee230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ee234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ee238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee244: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1EE244u;
    SET_GPR_U32(ctx, 31, 0x1EE24Cu);
    ctx->pc = 0x1EE248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE244u;
    // 0x1ee248: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1EE244u, 0x1EE24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE24Cu;
label_1ee24c:
    // 0x1ee24c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1ee24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1ee250: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ee250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee254: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1EE254u;
    SET_GPR_U32(ctx, 31, 0x1EE25Cu);
    ctx->pc = 0x1EE258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE254u;
    // 0x1ee258: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1EE254u, 0x1EE25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE25Cu;
label_1ee25c:
    // 0x1ee25c: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x1ee25cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1ee260: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1ee260u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1ee264: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ee264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ee268: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1ee268u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ee26c: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1ee26cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ee270: 0x92250034  lbu         $a1, 0x34($s1)
    ctx->pc = 0x1ee270u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1ee274: 0x92260035  lbu         $a2, 0x35($s1)
    ctx->pc = 0x1ee274u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 53)));
    // 0x1ee278: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x1EE278u;
    SET_GPR_U32(ctx, 31, 0x1EE280u);
    ctx->pc = 0x1EE27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE278u;
    // 0x1ee27c: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x1EE278u, 0x1EE280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE280u;
label_1ee280:
    // 0x1ee280: 0x92250036  lbu         $a1, 0x36($s1)
    ctx->pc = 0x1ee280u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x1ee284: 0x92260037  lbu         $a2, 0x37($s1)
    ctx->pc = 0x1ee284u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x1ee288: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x1EE288u;
    SET_GPR_U32(ctx, 31, 0x1EE290u);
    ctx->pc = 0x1EE28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE288u;
    // 0x1ee28c: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x1EE288u, 0x1EE290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE290u;
label_1ee290:
    // 0x1ee290: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee29c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2A0u;
        // 0x1ee2a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE2A8u;
}
