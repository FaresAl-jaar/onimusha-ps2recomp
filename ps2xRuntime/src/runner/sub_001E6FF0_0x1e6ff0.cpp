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

// Function: sub_001E6FF0
// Address: 0x1e6ff0 - 0x1e7044
void sub_001E6FF0_0x1e6ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6FF0_0x1e6ff0");
#endif

    switch (ctx->pc) {
        case 0x1e6ff0u: goto label_1e6ff0;
        case 0x1e6ff4u: goto label_1e6ff4;
        case 0x1e6ff8u: goto label_1e6ff8;
        case 0x1e6ffcu: goto label_1e6ffc;
        case 0x1e7000u: goto label_1e7000;
        case 0x1e7004u: goto label_1e7004;
        case 0x1e7008u: goto label_1e7008;
        case 0x1e700cu: goto label_1e700c;
        case 0x1e7010u: goto label_1e7010;
        case 0x1e7014u: goto label_1e7014;
        case 0x1e7018u: goto label_1e7018;
        case 0x1e701cu: goto label_1e701c;
        case 0x1e7020u: goto label_1e7020;
        case 0x1e7024u: goto label_1e7024;
        case 0x1e7028u: goto label_1e7028;
        case 0x1e702cu: goto label_1e702c;
        case 0x1e7030u: goto label_1e7030;
        case 0x1e7034u: goto label_1e7034;
        case 0x1e7038u: goto label_1e7038;
        case 0x1e703cu: goto label_1e703c;
        case 0x1e7040u: goto label_1e7040;
        default: break;
    }

    ctx->pc = 0x1e6ff0u;

label_1e6ff0:
    // 0x1e6ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e6ff4:
    // 0x1e6ff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e6ff8:
    // 0x1e6ff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6ffc:
    // 0x1e6ffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e7000:
    // 0x1e7000: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e7004:
    if (ctx->pc == 0x1E7004u) {
        ctx->pc = 0x1E7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7000u;
        // 0x1e7004: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7008u;
        goto label_1e7008;
    }
    ctx->pc = 0x1E7000u;
    {
        const bool branch_taken_0x1e7000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7000u;
        // 0x1e7004: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7000) {
            ctx->pc = 0x1E7030u;
            goto label_1e7030;
        }
    }
    ctx->pc = 0x1E7008u;
label_1e7008:
    // 0x1e7008: 0x24426c90  addiu       $v0, $v0, 0x6C90
    ctx->pc = 0x1e7008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27792));
label_1e700c:
    // 0x1e700c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e700cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e7010:
    // 0x1e7010: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e7010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e7014:
    // 0x1e7014: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e7014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e7018:
    // 0x1e7018: 0x320f809  jalr        $t9
label_1e701c:
    if (ctx->pc == 0x1E701Cu) {
        ctx->pc = 0x1E7020u;
        goto label_1e7020;
    }
    ctx->pc = 0x1E7018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E7020u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7018u, 0x1E7020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E7020u;
label_1e7020:
    // 0x1e7020: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e7024:
    if (ctx->pc == 0x1E7024u) {
        ctx->pc = 0x1E7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7020u;
        // 0x1e7024: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7028u;
        goto label_1e7028;
    }
    ctx->pc = 0x1E7020u;
    {
        const bool branch_taken_0x1e7020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7020u;
        // 0x1e7024: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7020) {
            ctx->pc = 0x1E7030u;
            goto label_1e7030;
        }
    }
    ctx->pc = 0x1E7028u;
label_1e7028:
    // 0x1e7028: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e7028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e702c:
    // 0x1e702c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e702cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e7030:
    // 0x1e7030: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e7030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7034:
    // 0x1e7034: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e7038:
    // 0x1e7038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e703c:
    // 0x1e703c: 0x3e00008  jr          $ra
label_1e7040:
    if (ctx->pc == 0x1E7040u) {
        ctx->pc = 0x1E7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E703Cu;
        // 0x1e7040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E7044u;
        goto label_fallthrough_0x1e703c;
    }
    ctx->pc = 0x1E703Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E703Cu;
        // 0x1e7040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E703Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e703c:
    ctx->pc = 0x1E7044u;
}
