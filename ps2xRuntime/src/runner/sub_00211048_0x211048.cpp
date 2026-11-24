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

// Function: sub_00211048
// Address: 0x211048 - 0x2110dc
void sub_00211048_0x211048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211048_0x211048");
#endif

    switch (ctx->pc) {
        case 0x21106cu: goto label_21106c;
        case 0x211084u: goto label_211084;
        case 0x21109cu: goto label_21109c;
        case 0x2110c0u: goto label_2110c0;
        default: break;
    }

    ctx->pc = 0x211048u;

    // 0x211048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21104c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211054: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x211058: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x211058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21105c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21105cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x211060: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x211060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x211064: 0xc084438  jal         func_2110E0
    ctx->pc = 0x211064u;
    SET_GPR_U32(ctx, 31, 0x21106Cu);
    ctx->pc = 0x211068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211064u;
    // 0x211068: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2110E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110E0u, 0x211064u, 0x21106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21106Cu;
label_21106c:
    // 0x21106c: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x21106cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x211070: 0x2625fffe  addiu       $a1, $s1, -0x2
    ctx->pc = 0x211070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x211074: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x211074u;
    {
        const bool branch_taken_0x211074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211074u;
        // 0x211078: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211074) {
            ctx->pc = 0x2110ACu;
            goto label_2110ac;
        }
    }
    ctx->pc = 0x21107Cu;
    // 0x21107c: 0xc084438  jal         func_2110E0
    ctx->pc = 0x21107Cu;
    SET_GPR_U32(ctx, 31, 0x211084u);
    ctx->pc = 0x2110E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110E0u, 0x21107Cu, 0x211084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211084u;
label_211084:
    // 0x211084: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x211084u;
    {
        const bool branch_taken_0x211084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x211084) {
            ctx->pc = 0x211088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x211084u;
            // 0x211088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2110C4u;
            goto label_2110c4;
        }
    }
    ctx->pc = 0x21108Cu;
    // 0x21108c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x21108cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x211090: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x211090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x211094: 0xc084438  jal         func_2110E0
    ctx->pc = 0x211094u;
    SET_GPR_U32(ctx, 31, 0x21109Cu);
    ctx->pc = 0x211098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211094u;
    // 0x211098: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2110E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110E0u, 0x211094u, 0x21109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21109Cu;
label_21109c:
    // 0x21109c: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x21109cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2110a0: 0x2625fffd  addiu       $a1, $s1, -0x3
    ctx->pc = 0x2110a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x2110a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2110A4u;
    {
        const bool branch_taken_0x2110a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2110A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110A4u;
        // 0x2110a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110a4) {
            ctx->pc = 0x2110B8u;
            goto label_2110b8;
        }
    }
    ctx->pc = 0x2110ACu;
label_2110ac:
    // 0x2110ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2110ACu;
    {
        const bool branch_taken_0x2110ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2110B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110ACu;
        // 0x2110b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110ac) {
            ctx->pc = 0x2110C4u;
            goto label_2110c4;
        }
    }
    ctx->pc = 0x2110B4u;
    // 0x2110b4: 0x0  nop
    ctx->pc = 0x2110b4u;
    // NOP
label_2110b8:
    // 0x2110b8: 0xc084438  jal         func_2110E0
    ctx->pc = 0x2110B8u;
    SET_GPR_U32(ctx, 31, 0x2110C0u);
    ctx->pc = 0x2110E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110E0u, 0x2110B8u, 0x2110C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2110C0u;
label_2110c0:
    // 0x2110c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2110c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2110c4:
    // 0x2110c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2110c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2110c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2110c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2110cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2110ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2110d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2110d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2110d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2110D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2110D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110D4u;
        // 0x2110d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2110D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2110DCu;
}
