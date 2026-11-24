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

// Function: sub_001E0C10
// Address: 0x1e0c10 - 0x1e0c64
void sub_001E0C10_0x1e0c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0C10_0x1e0c10");
#endif

    switch (ctx->pc) {
        case 0x1e0c10u: goto label_1e0c10;
        case 0x1e0c14u: goto label_1e0c14;
        case 0x1e0c18u: goto label_1e0c18;
        case 0x1e0c1cu: goto label_1e0c1c;
        case 0x1e0c20u: goto label_1e0c20;
        case 0x1e0c24u: goto label_1e0c24;
        case 0x1e0c28u: goto label_1e0c28;
        case 0x1e0c2cu: goto label_1e0c2c;
        case 0x1e0c30u: goto label_1e0c30;
        case 0x1e0c34u: goto label_1e0c34;
        case 0x1e0c38u: goto label_1e0c38;
        case 0x1e0c3cu: goto label_1e0c3c;
        case 0x1e0c40u: goto label_1e0c40;
        case 0x1e0c44u: goto label_1e0c44;
        case 0x1e0c48u: goto label_1e0c48;
        case 0x1e0c4cu: goto label_1e0c4c;
        case 0x1e0c50u: goto label_1e0c50;
        case 0x1e0c54u: goto label_1e0c54;
        case 0x1e0c58u: goto label_1e0c58;
        case 0x1e0c5cu: goto label_1e0c5c;
        case 0x1e0c60u: goto label_1e0c60;
        default: break;
    }

    ctx->pc = 0x1e0c10u;

label_1e0c10:
    // 0x1e0c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0c14:
    // 0x1e0c14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e0c18:
    // 0x1e0c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e0c1c:
    // 0x1e0c1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c20:
    // 0x1e0c20: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e0c24:
    if (ctx->pc == 0x1E0C24u) {
        ctx->pc = 0x1E0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C20u;
        // 0x1e0c24: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C28u;
        goto label_1e0c28;
    }
    ctx->pc = 0x1E0C20u;
    {
        const bool branch_taken_0x1e0c20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C20u;
        // 0x1e0c24: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c20) {
            ctx->pc = 0x1E0C50u;
            goto label_1e0c50;
        }
    }
    ctx->pc = 0x1E0C28u;
label_1e0c28:
    // 0x1e0c28: 0x24426670  addiu       $v0, $v0, 0x6670
    ctx->pc = 0x1e0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26224));
label_1e0c2c:
    // 0x1e0c2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e0c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e0c30:
    // 0x1e0c30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e0c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e0c34:
    // 0x1e0c34: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e0c34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e0c38:
    // 0x1e0c38: 0x320f809  jalr        $t9
label_1e0c3c:
    if (ctx->pc == 0x1E0C3Cu) {
        ctx->pc = 0x1E0C40u;
        goto label_1e0c40;
    }
    ctx->pc = 0x1E0C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0C40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0C38u, 0x1E0C40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0C40u;
label_1e0c40:
    // 0x1e0c40: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e0c44:
    if (ctx->pc == 0x1E0C44u) {
        ctx->pc = 0x1E0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C40u;
        // 0x1e0c44: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C48u;
        goto label_1e0c48;
    }
    ctx->pc = 0x1E0C40u;
    {
        const bool branch_taken_0x1e0c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C40u;
        // 0x1e0c44: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c40) {
            ctx->pc = 0x1E0C50u;
            goto label_1e0c50;
        }
    }
    ctx->pc = 0x1E0C48u;
label_1e0c48:
    // 0x1e0c48: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1e0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1e0c4c:
    // 0x1e0c4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e0c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e0c50:
    // 0x1e0c50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e0c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e0c54:
    // 0x1e0c54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0c58:
    // 0x1e0c58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0c5c:
    // 0x1e0c5c: 0x3e00008  jr          $ra
label_1e0c60:
    if (ctx->pc == 0x1E0C60u) {
        ctx->pc = 0x1E0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C5Cu;
        // 0x1e0c60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0C64u;
        goto label_fallthrough_0x1e0c5c;
    }
    ctx->pc = 0x1E0C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C5Cu;
        // 0x1e0c60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0c5c:
    ctx->pc = 0x1E0C64u;
}
