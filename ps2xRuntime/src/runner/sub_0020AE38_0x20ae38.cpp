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

// Function: sub_0020AE38
// Address: 0x20ae38 - 0x20ae9c
void sub_0020AE38_0x20ae38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AE38_0x20ae38");
#endif

    switch (ctx->pc) {
        case 0x20ae38u: goto label_20ae38;
        case 0x20ae3cu: goto label_20ae3c;
        case 0x20ae40u: goto label_20ae40;
        case 0x20ae44u: goto label_20ae44;
        case 0x20ae48u: goto label_20ae48;
        case 0x20ae4cu: goto label_20ae4c;
        case 0x20ae50u: goto label_20ae50;
        case 0x20ae54u: goto label_20ae54;
        case 0x20ae58u: goto label_20ae58;
        case 0x20ae5cu: goto label_20ae5c;
        case 0x20ae60u: goto label_20ae60;
        case 0x20ae64u: goto label_20ae64;
        case 0x20ae68u: goto label_20ae68;
        case 0x20ae6cu: goto label_20ae6c;
        case 0x20ae70u: goto label_20ae70;
        case 0x20ae74u: goto label_20ae74;
        case 0x20ae78u: goto label_20ae78;
        case 0x20ae7cu: goto label_20ae7c;
        case 0x20ae80u: goto label_20ae80;
        case 0x20ae84u: goto label_20ae84;
        case 0x20ae88u: goto label_20ae88;
        case 0x20ae8cu: goto label_20ae8c;
        case 0x20ae90u: goto label_20ae90;
        case 0x20ae94u: goto label_20ae94;
        case 0x20ae98u: goto label_20ae98;
        default: break;
    }

    ctx->pc = 0x20ae38u;

label_20ae38:
    // 0x20ae38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ae38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20ae3c:
    // 0x20ae3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ae3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20ae40:
    // 0x20ae40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20ae40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20ae44:
    // 0x20ae44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20ae48:
    // 0x20ae48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20ae48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20ae4c:
    // 0x20ae4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20ae4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_20ae50:
    // 0x20ae50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20ae50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_20ae54:
    // 0x20ae54: 0xc082d40  jal         func_20B500
label_20ae58:
    if (ctx->pc == 0x20AE58u) {
        ctx->pc = 0x20AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE54u;
        // 0x20ae58: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE5Cu;
        goto label_20ae5c;
    }
    ctx->pc = 0x20AE54u;
    SET_GPR_U32(ctx, 31, 0x20AE5Cu);
    ctx->pc = 0x20AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE54u;
    // 0x20ae58: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B500u, 0x20AE54u, 0x20AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE5Cu;
label_20ae5c:
    // 0x20ae5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_20ae60:
    if (ctx->pc == 0x20AE60u) {
        ctx->pc = 0x20AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE5Cu;
        // 0x20ae60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE64u;
        goto label_20ae64;
    }
    ctx->pc = 0x20AE5Cu;
    {
        const bool branch_taken_0x20ae5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE5Cu;
        // 0x20ae60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae5c) {
            ctx->pc = 0x20AE80u;
            goto label_20ae80;
        }
    }
    ctx->pc = 0x20AE64u;
label_20ae64:
    // 0x20ae64: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x20ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_20ae68:
    // 0x20ae68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20ae6c:
    if (ctx->pc == 0x20AE6Cu) {
        ctx->pc = 0x20AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE68u;
        // 0x20ae6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE70u;
        goto label_20ae70;
    }
    ctx->pc = 0x20AE68u;
    {
        const bool branch_taken_0x20ae68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE68u;
        // 0x20ae6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae68) {
            ctx->pc = 0x20AE80u;
            goto label_20ae80;
        }
    }
    ctx->pc = 0x20AE70u;
label_20ae70:
    // 0x20ae70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20ae70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20ae74:
    // 0x20ae74: 0x40f809  jalr        $v0
label_20ae78:
    if (ctx->pc == 0x20AE78u) {
        ctx->pc = 0x20AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE74u;
        // 0x20ae78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE7Cu;
        goto label_20ae7c;
    }
    ctx->pc = 0x20AE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AE7Cu);
        ctx->pc = 0x20AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE74u;
        // 0x20ae78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AE74u, 0x20AE7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AE7Cu;
label_20ae7c:
    // 0x20ae7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20ae7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ae80:
    // 0x20ae80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ae80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20ae84:
    // 0x20ae84: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x20ae84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20ae88:
    // 0x20ae88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20ae88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20ae8c:
    // 0x20ae8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20ae8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20ae90:
    // 0x20ae90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20ae90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20ae94:
    // 0x20ae94: 0x3e00008  jr          $ra
label_20ae98:
    if (ctx->pc == 0x20AE98u) {
        ctx->pc = 0x20AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE94u;
        // 0x20ae98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE9Cu;
        goto label_fallthrough_0x20ae94;
    }
    ctx->pc = 0x20AE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE94u;
        // 0x20ae98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20ae94:
    ctx->pc = 0x20AE9Cu;
}
