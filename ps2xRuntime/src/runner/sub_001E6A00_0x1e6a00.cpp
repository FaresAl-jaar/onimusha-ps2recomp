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

// Function: sub_001E6A00
// Address: 0x1e6a00 - 0x1e6a54
void sub_001E6A00_0x1e6a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6A00_0x1e6a00");
#endif

    switch (ctx->pc) {
        case 0x1e6a00u: goto label_1e6a00;
        case 0x1e6a04u: goto label_1e6a04;
        case 0x1e6a08u: goto label_1e6a08;
        case 0x1e6a0cu: goto label_1e6a0c;
        case 0x1e6a10u: goto label_1e6a10;
        case 0x1e6a14u: goto label_1e6a14;
        case 0x1e6a18u: goto label_1e6a18;
        case 0x1e6a1cu: goto label_1e6a1c;
        case 0x1e6a20u: goto label_1e6a20;
        case 0x1e6a24u: goto label_1e6a24;
        case 0x1e6a28u: goto label_1e6a28;
        case 0x1e6a2cu: goto label_1e6a2c;
        case 0x1e6a30u: goto label_1e6a30;
        case 0x1e6a34u: goto label_1e6a34;
        case 0x1e6a38u: goto label_1e6a38;
        case 0x1e6a3cu: goto label_1e6a3c;
        case 0x1e6a40u: goto label_1e6a40;
        case 0x1e6a44u: goto label_1e6a44;
        case 0x1e6a48u: goto label_1e6a48;
        case 0x1e6a4cu: goto label_1e6a4c;
        case 0x1e6a50u: goto label_1e6a50;
        default: break;
    }

    ctx->pc = 0x1e6a00u;

label_1e6a00:
    // 0x1e6a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e6a04:
    // 0x1e6a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e6a08:
    // 0x1e6a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6a0c:
    // 0x1e6a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6a10:
    // 0x1e6a10: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e6a14:
    if (ctx->pc == 0x1E6A14u) {
        ctx->pc = 0x1E6A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A10u;
        // 0x1e6a14: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6A18u;
        goto label_1e6a18;
    }
    ctx->pc = 0x1E6A10u;
    {
        const bool branch_taken_0x1e6a10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A10u;
        // 0x1e6a14: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6a10) {
            ctx->pc = 0x1E6A40u;
            goto label_1e6a40;
        }
    }
    ctx->pc = 0x1E6A18u;
label_1e6a18:
    // 0x1e6a18: 0x24426bd0  addiu       $v0, $v0, 0x6BD0
    ctx->pc = 0x1e6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27600));
label_1e6a1c:
    // 0x1e6a1c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e6a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e6a20:
    // 0x1e6a20: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e6a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e6a24:
    // 0x1e6a24: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e6a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e6a28:
    // 0x1e6a28: 0x320f809  jalr        $t9
label_1e6a2c:
    if (ctx->pc == 0x1E6A2Cu) {
        ctx->pc = 0x1E6A30u;
        goto label_1e6a30;
    }
    ctx->pc = 0x1E6A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6A30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6A28u, 0x1E6A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6A30u;
label_1e6a30:
    // 0x1e6a30: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e6a34:
    if (ctx->pc == 0x1E6A34u) {
        ctx->pc = 0x1E6A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A30u;
        // 0x1e6a34: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6A38u;
        goto label_1e6a38;
    }
    ctx->pc = 0x1E6A30u;
    {
        const bool branch_taken_0x1e6a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A30u;
        // 0x1e6a34: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6a30) {
            ctx->pc = 0x1E6A40u;
            goto label_1e6a40;
        }
    }
    ctx->pc = 0x1E6A38u;
label_1e6a38:
    // 0x1e6a38: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e6a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e6a3c:
    // 0x1e6a3c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e6a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e6a40:
    // 0x1e6a40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e6a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e6a44:
    // 0x1e6a44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e6a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6a48:
    // 0x1e6a48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6a4c:
    // 0x1e6a4c: 0x3e00008  jr          $ra
label_1e6a50:
    if (ctx->pc == 0x1E6A50u) {
        ctx->pc = 0x1E6A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A4Cu;
        // 0x1e6a50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6A54u;
        goto label_fallthrough_0x1e6a4c;
    }
    ctx->pc = 0x1E6A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6A4Cu;
        // 0x1e6a50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e6a4c:
    ctx->pc = 0x1E6A54u;
}
