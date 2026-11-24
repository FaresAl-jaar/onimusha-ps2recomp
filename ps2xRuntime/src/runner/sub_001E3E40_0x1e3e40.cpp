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

// Function: sub_001E3E40
// Address: 0x1e3e40 - 0x1e3e94
void sub_001E3E40_0x1e3e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3E40_0x1e3e40");
#endif

    switch (ctx->pc) {
        case 0x1e3e40u: goto label_1e3e40;
        case 0x1e3e44u: goto label_1e3e44;
        case 0x1e3e48u: goto label_1e3e48;
        case 0x1e3e4cu: goto label_1e3e4c;
        case 0x1e3e50u: goto label_1e3e50;
        case 0x1e3e54u: goto label_1e3e54;
        case 0x1e3e58u: goto label_1e3e58;
        case 0x1e3e5cu: goto label_1e3e5c;
        case 0x1e3e60u: goto label_1e3e60;
        case 0x1e3e64u: goto label_1e3e64;
        case 0x1e3e68u: goto label_1e3e68;
        case 0x1e3e6cu: goto label_1e3e6c;
        case 0x1e3e70u: goto label_1e3e70;
        case 0x1e3e74u: goto label_1e3e74;
        case 0x1e3e78u: goto label_1e3e78;
        case 0x1e3e7cu: goto label_1e3e7c;
        case 0x1e3e80u: goto label_1e3e80;
        case 0x1e3e84u: goto label_1e3e84;
        case 0x1e3e88u: goto label_1e3e88;
        case 0x1e3e8cu: goto label_1e3e8c;
        case 0x1e3e90u: goto label_1e3e90;
        default: break;
    }

    ctx->pc = 0x1e3e40u;

label_1e3e40:
    // 0x1e3e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e3e44:
    // 0x1e3e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e3e48:
    // 0x1e3e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e3e4c:
    // 0x1e3e4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3e50:
    // 0x1e3e50: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e3e54:
    if (ctx->pc == 0x1E3E54u) {
        ctx->pc = 0x1E3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E50u;
        // 0x1e3e54: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3E58u;
        goto label_1e3e58;
    }
    ctx->pc = 0x1E3E50u;
    {
        const bool branch_taken_0x1e3e50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E50u;
        // 0x1e3e54: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e50) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3E58u;
label_1e3e58:
    // 0x1e3e58: 0x24426930  addiu       $v0, $v0, 0x6930
    ctx->pc = 0x1e3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26928));
label_1e3e5c:
    // 0x1e3e5c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e3e60:
    // 0x1e3e60: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e3e60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e3e64:
    // 0x1e3e64: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e3e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e3e68:
    // 0x1e3e68: 0x320f809  jalr        $t9
label_1e3e6c:
    if (ctx->pc == 0x1E3E6Cu) {
        ctx->pc = 0x1E3E70u;
        goto label_1e3e70;
    }
    ctx->pc = 0x1E3E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3E70u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3E68u, 0x1E3E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3E70u;
label_1e3e70:
    // 0x1e3e70: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e3e74:
    if (ctx->pc == 0x1E3E74u) {
        ctx->pc = 0x1E3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E70u;
        // 0x1e3e74: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3E78u;
        goto label_1e3e78;
    }
    ctx->pc = 0x1E3E70u;
    {
        const bool branch_taken_0x1e3e70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E70u;
        // 0x1e3e74: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e70) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3E78u;
label_1e3e78:
    // 0x1e3e78: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e3e7c:
    // 0x1e3e7c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e3e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e3e80:
    // 0x1e3e80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e3e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3e84:
    // 0x1e3e84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3e88:
    // 0x1e3e88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3e8c:
    // 0x1e3e8c: 0x3e00008  jr          $ra
label_1e3e90:
    if (ctx->pc == 0x1E3E90u) {
        ctx->pc = 0x1E3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E8Cu;
        // 0x1e3e90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3E94u;
        goto label_fallthrough_0x1e3e8c;
    }
    ctx->pc = 0x1E3E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3E8Cu;
        // 0x1e3e90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e3e8c:
    ctx->pc = 0x1E3E94u;
}
