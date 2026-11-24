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

// Function: sub_00195EF0
// Address: 0x195ef0 - 0x195f2c
void sub_00195EF0_0x195ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195EF0_0x195ef0");
#endif

    switch (ctx->pc) {
        case 0x195ef0u: goto label_195ef0;
        case 0x195ef4u: goto label_195ef4;
        case 0x195ef8u: goto label_195ef8;
        case 0x195efcu: goto label_195efc;
        case 0x195f00u: goto label_195f00;
        case 0x195f04u: goto label_195f04;
        case 0x195f08u: goto label_195f08;
        case 0x195f0cu: goto label_195f0c;
        case 0x195f10u: goto label_195f10;
        case 0x195f14u: goto label_195f14;
        case 0x195f18u: goto label_195f18;
        case 0x195f1cu: goto label_195f1c;
        case 0x195f20u: goto label_195f20;
        case 0x195f24u: goto label_195f24;
        case 0x195f28u: goto label_195f28;
        default: break;
    }

    ctx->pc = 0x195ef0u;

label_195ef0:
    // 0x195ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_195ef4:
    // 0x195ef4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x195ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_195ef8:
    // 0x195ef8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_195efc:
    if (ctx->pc == 0x195EFCu) {
        ctx->pc = 0x195EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EF8u;
        // 0x195efc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F00u;
        goto label_195f00;
    }
    ctx->pc = 0x195EF8u;
    {
        const bool branch_taken_0x195ef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x195EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195EF8u;
        // 0x195efc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195ef8) {
            ctx->pc = 0x195F08u;
            goto label_195f08;
        }
    }
    ctx->pc = 0x195F00u;
label_195f00:
    // 0x195f00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195f04:
    // 0x195f04: 0x0  nop
    ctx->pc = 0x195f04u;
    // NOP
label_195f08:
    // 0x195f08: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x195f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_195f0c:
    // 0x195f0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_195f10:
    if (ctx->pc == 0x195F10u) {
        ctx->pc = 0x195F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F0Cu;
        // 0x195f10: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F14u;
        goto label_195f14;
    }
    ctx->pc = 0x195F0Cu;
    {
        const bool branch_taken_0x195f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F0Cu;
        // 0x195f10: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195f0c) {
            ctx->pc = 0x195F20u;
            goto label_195f20;
        }
    }
    ctx->pc = 0x195F14u;
label_195f14:
    // 0x195f14: 0x60f809  jalr        $v1
label_195f18:
    if (ctx->pc == 0x195F18u) {
        ctx->pc = 0x195F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F14u;
        // 0x195f18: 0x8cc50020  lw          $a1, 0x20($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F1Cu;
        goto label_195f1c;
    }
    ctx->pc = 0x195F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x195F1Cu);
        ctx->pc = 0x195F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F14u;
        // 0x195f18: 0x8cc50020  lw          $a1, 0x20($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195F14u, 0x195F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195F1Cu;
label_195f1c:
    // 0x195f1c: 0x0  nop
    ctx->pc = 0x195f1cu;
    // NOP
label_195f20:
    // 0x195f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195f24:
    // 0x195f24: 0x3e00008  jr          $ra
label_195f28:
    if (ctx->pc == 0x195F28u) {
        ctx->pc = 0x195F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F24u;
        // 0x195f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195F2Cu;
        goto label_fallthrough_0x195f24;
    }
    ctx->pc = 0x195F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195F24u;
        // 0x195f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x195f24:
    ctx->pc = 0x195F2Cu;
}
