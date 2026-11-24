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

// Function: sub_0020AEA0
// Address: 0x20aea0 - 0x20aef4
void sub_0020AEA0_0x20aea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AEA0_0x20aea0");
#endif

    switch (ctx->pc) {
        case 0x20aea0u: goto label_20aea0;
        case 0x20aea4u: goto label_20aea4;
        case 0x20aea8u: goto label_20aea8;
        case 0x20aeacu: goto label_20aeac;
        case 0x20aeb0u: goto label_20aeb0;
        case 0x20aeb4u: goto label_20aeb4;
        case 0x20aeb8u: goto label_20aeb8;
        case 0x20aebcu: goto label_20aebc;
        case 0x20aec0u: goto label_20aec0;
        case 0x20aec4u: goto label_20aec4;
        case 0x20aec8u: goto label_20aec8;
        case 0x20aeccu: goto label_20aecc;
        case 0x20aed0u: goto label_20aed0;
        case 0x20aed4u: goto label_20aed4;
        case 0x20aed8u: goto label_20aed8;
        case 0x20aedcu: goto label_20aedc;
        case 0x20aee0u: goto label_20aee0;
        case 0x20aee4u: goto label_20aee4;
        case 0x20aee8u: goto label_20aee8;
        case 0x20aeecu: goto label_20aeec;
        case 0x20aef0u: goto label_20aef0;
        default: break;
    }

    ctx->pc = 0x20aea0u;

label_20aea0:
    // 0x20aea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20aea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20aea4:
    // 0x20aea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20aea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20aea8:
    // 0x20aea8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20aea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20aeac:
    // 0x20aeac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20aeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20aeb0:
    // 0x20aeb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20aeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20aeb4:
    // 0x20aeb4: 0xc082d40  jal         func_20B500
label_20aeb8:
    if (ctx->pc == 0x20AEB8u) {
        ctx->pc = 0x20AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEB4u;
        // 0x20aeb8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AEBCu;
        goto label_20aebc;
    }
    ctx->pc = 0x20AEB4u;
    SET_GPR_U32(ctx, 31, 0x20AEBCu);
    ctx->pc = 0x20AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AEB4u;
    // 0x20aeb8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B500u, 0x20AEB4u, 0x20AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AEBCu;
label_20aebc:
    // 0x20aebc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20aec0:
    if (ctx->pc == 0x20AEC0u) {
        ctx->pc = 0x20AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEBCu;
        // 0x20aec0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AEC4u;
        goto label_20aec4;
    }
    ctx->pc = 0x20AEBCu;
    {
        const bool branch_taken_0x20aebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEBCu;
        // 0x20aec0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aebc) {
            ctx->pc = 0x20AEDCu;
            goto label_20aedc;
        }
    }
    ctx->pc = 0x20AEC4u;
label_20aec4:
    // 0x20aec4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x20aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_20aec8:
    // 0x20aec8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_20aecc:
    if (ctx->pc == 0x20AECCu) {
        ctx->pc = 0x20AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEC8u;
        // 0x20aecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AED0u;
        goto label_20aed0;
    }
    ctx->pc = 0x20AEC8u;
    {
        const bool branch_taken_0x20aec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEC8u;
        // 0x20aecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aec8) {
            ctx->pc = 0x20AEDCu;
            goto label_20aedc;
        }
    }
    ctx->pc = 0x20AED0u;
label_20aed0:
    // 0x20aed0: 0x40f809  jalr        $v0
label_20aed4:
    if (ctx->pc == 0x20AED4u) {
        ctx->pc = 0x20AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AED0u;
        // 0x20aed4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AED8u;
        goto label_20aed8;
    }
    ctx->pc = 0x20AED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AED8u);
        ctx->pc = 0x20AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AED0u;
        // 0x20aed4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AED0u, 0x20AED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AED8u;
label_20aed8:
    // 0x20aed8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20aed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20aedc:
    // 0x20aedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20aedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20aee0:
    // 0x20aee0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x20aee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20aee4:
    // 0x20aee4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20aee4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20aee8:
    // 0x20aee8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20aee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20aeec:
    // 0x20aeec: 0x3e00008  jr          $ra
label_20aef0:
    if (ctx->pc == 0x20AEF0u) {
        ctx->pc = 0x20AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEECu;
        // 0x20aef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AEF4u;
        goto label_fallthrough_0x20aeec;
    }
    ctx->pc = 0x20AEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEECu;
        // 0x20aef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20aeec:
    ctx->pc = 0x20AEF4u;
}
