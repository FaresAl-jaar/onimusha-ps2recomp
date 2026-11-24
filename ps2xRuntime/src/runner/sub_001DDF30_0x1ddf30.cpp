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

// Function: sub_001DDF30
// Address: 0x1ddf30 - 0x1ddf84
void sub_001DDF30_0x1ddf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDF30_0x1ddf30");
#endif

    switch (ctx->pc) {
        case 0x1ddf30u: goto label_1ddf30;
        case 0x1ddf34u: goto label_1ddf34;
        case 0x1ddf38u: goto label_1ddf38;
        case 0x1ddf3cu: goto label_1ddf3c;
        case 0x1ddf40u: goto label_1ddf40;
        case 0x1ddf44u: goto label_1ddf44;
        case 0x1ddf48u: goto label_1ddf48;
        case 0x1ddf4cu: goto label_1ddf4c;
        case 0x1ddf50u: goto label_1ddf50;
        case 0x1ddf54u: goto label_1ddf54;
        case 0x1ddf58u: goto label_1ddf58;
        case 0x1ddf5cu: goto label_1ddf5c;
        case 0x1ddf60u: goto label_1ddf60;
        case 0x1ddf64u: goto label_1ddf64;
        case 0x1ddf68u: goto label_1ddf68;
        case 0x1ddf6cu: goto label_1ddf6c;
        case 0x1ddf70u: goto label_1ddf70;
        case 0x1ddf74u: goto label_1ddf74;
        case 0x1ddf78u: goto label_1ddf78;
        case 0x1ddf7cu: goto label_1ddf7c;
        case 0x1ddf80u: goto label_1ddf80;
        default: break;
    }

    ctx->pc = 0x1ddf30u;

label_1ddf30:
    // 0x1ddf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ddf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ddf34:
    // 0x1ddf34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ddf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ddf38:
    // 0x1ddf38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ddf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ddf3c:
    // 0x1ddf3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ddf3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ddf40:
    // 0x1ddf40: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1ddf44:
    if (ctx->pc == 0x1DDF44u) {
        ctx->pc = 0x1DDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF40u;
        // 0x1ddf44: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDF48u;
        goto label_1ddf48;
    }
    ctx->pc = 0x1DDF40u;
    {
        const bool branch_taken_0x1ddf40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF40u;
        // 0x1ddf44: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf40) {
            ctx->pc = 0x1DDF70u;
            goto label_1ddf70;
        }
    }
    ctx->pc = 0x1DDF48u;
label_1ddf48:
    // 0x1ddf48: 0x244262f0  addiu       $v0, $v0, 0x62F0
    ctx->pc = 0x1ddf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
label_1ddf4c:
    // 0x1ddf4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ddf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ddf50:
    // 0x1ddf50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ddf50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ddf54:
    // 0x1ddf54: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1ddf54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1ddf58:
    // 0x1ddf58: 0x320f809  jalr        $t9
label_1ddf5c:
    if (ctx->pc == 0x1DDF5Cu) {
        ctx->pc = 0x1DDF60u;
        goto label_1ddf60;
    }
    ctx->pc = 0x1DDF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DDF60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDF58u, 0x1DDF60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DDF60u;
label_1ddf60:
    // 0x1ddf60: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1ddf64:
    if (ctx->pc == 0x1DDF64u) {
        ctx->pc = 0x1DDF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF60u;
        // 0x1ddf64: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDF68u;
        goto label_1ddf68;
    }
    ctx->pc = 0x1DDF60u;
    {
        const bool branch_taken_0x1ddf60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF60u;
        // 0x1ddf64: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf60) {
            ctx->pc = 0x1DDF70u;
            goto label_1ddf70;
        }
    }
    ctx->pc = 0x1DDF68u;
label_1ddf68:
    // 0x1ddf68: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1ddf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1ddf6c:
    // 0x1ddf6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ddf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ddf70:
    // 0x1ddf70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ddf70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ddf74:
    // 0x1ddf74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ddf74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ddf78:
    // 0x1ddf78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ddf78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ddf7c:
    // 0x1ddf7c: 0x3e00008  jr          $ra
label_1ddf80:
    if (ctx->pc == 0x1DDF80u) {
        ctx->pc = 0x1DDF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF7Cu;
        // 0x1ddf80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DDF84u;
        goto label_fallthrough_0x1ddf7c;
    }
    ctx->pc = 0x1DDF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF7Cu;
        // 0x1ddf80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ddf7c:
    ctx->pc = 0x1DDF84u;
}
