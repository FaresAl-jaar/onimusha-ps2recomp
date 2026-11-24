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

// Function: sub_001E7A30
// Address: 0x1e7a30 - 0x1e7a84
void sub_001E7A30_0x1e7a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7A30_0x1e7a30");
#endif

    switch (ctx->pc) {
        case 0x1e7a30u: goto label_1e7a30;
        case 0x1e7a34u: goto label_1e7a34;
        case 0x1e7a38u: goto label_1e7a38;
        case 0x1e7a3cu: goto label_1e7a3c;
        case 0x1e7a40u: goto label_1e7a40;
        case 0x1e7a44u: goto label_1e7a44;
        case 0x1e7a48u: goto label_1e7a48;
        case 0x1e7a4cu: goto label_1e7a4c;
        case 0x1e7a50u: goto label_1e7a50;
        case 0x1e7a54u: goto label_1e7a54;
        case 0x1e7a58u: goto label_1e7a58;
        case 0x1e7a5cu: goto label_1e7a5c;
        case 0x1e7a60u: goto label_1e7a60;
        case 0x1e7a64u: goto label_1e7a64;
        case 0x1e7a68u: goto label_1e7a68;
        case 0x1e7a6cu: goto label_1e7a6c;
        case 0x1e7a70u: goto label_1e7a70;
        case 0x1e7a74u: goto label_1e7a74;
        case 0x1e7a78u: goto label_1e7a78;
        case 0x1e7a7cu: goto label_1e7a7c;
        case 0x1e7a80u: goto label_1e7a80;
        default: break;
    }

    ctx->pc = 0x1e7a30u;

label_1e7a30:
    // 0x1e7a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e7a34:
    // 0x1e7a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e7a38:
    // 0x1e7a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e7a3c:
    // 0x1e7a3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e7a40:
    // 0x1e7a40: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e7a44:
    if (ctx->pc == 0x1E7A44u) {
        ctx->pc = 0x1E7A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A40u;
        // 0x1e7a44: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7A48u;
        goto label_1e7a48;
    }
    ctx->pc = 0x1E7A40u;
    {
        const bool branch_taken_0x1e7a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A40u;
        // 0x1e7a44: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a40) {
            ctx->pc = 0x1E7A70u;
            goto label_1e7a70;
        }
    }
    ctx->pc = 0x1E7A48u;
label_1e7a48:
    // 0x1e7a48: 0x24426d50  addiu       $v0, $v0, 0x6D50
    ctx->pc = 0x1e7a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27984));
label_1e7a4c:
    // 0x1e7a4c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e7a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e7a50:
    // 0x1e7a50: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e7a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e7a54:
    // 0x1e7a54: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e7a54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e7a58:
    // 0x1e7a58: 0x320f809  jalr        $t9
label_1e7a5c:
    if (ctx->pc == 0x1E7A5Cu) {
        ctx->pc = 0x1E7A60u;
        goto label_1e7a60;
    }
    ctx->pc = 0x1E7A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7A60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7A58u, 0x1E7A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E7A60u;
label_1e7a60:
    // 0x1e7a60: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e7a64:
    if (ctx->pc == 0x1E7A64u) {
        ctx->pc = 0x1E7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A60u;
        // 0x1e7a64: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7A68u;
        goto label_1e7a68;
    }
    ctx->pc = 0x1E7A60u;
    {
        const bool branch_taken_0x1e7a60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A60u;
        // 0x1e7a64: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7a60) {
            ctx->pc = 0x1E7A70u;
            goto label_1e7a70;
        }
    }
    ctx->pc = 0x1E7A68u;
label_1e7a68:
    // 0x1e7a68: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e7a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e7a6c:
    // 0x1e7a6c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e7a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e7a70:
    // 0x1e7a70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e7a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7a74:
    // 0x1e7a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e7a78:
    // 0x1e7a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7a7c:
    // 0x1e7a7c: 0x3e00008  jr          $ra
label_1e7a80:
    if (ctx->pc == 0x1E7A80u) {
        ctx->pc = 0x1E7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A7Cu;
        // 0x1e7a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7A84u;
        goto label_fallthrough_0x1e7a7c;
    }
    ctx->pc = 0x1E7A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7A7Cu;
        // 0x1e7a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e7a7c:
    ctx->pc = 0x1E7A84u;
}
