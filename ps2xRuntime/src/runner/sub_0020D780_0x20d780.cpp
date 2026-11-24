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

// Function: sub_0020D780
// Address: 0x20d780 - 0x20d824
void sub_0020D780_0x20d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D780_0x20d780");
#endif

    switch (ctx->pc) {
        case 0x20d7b4u: goto label_20d7b4;
        case 0x20d7c8u: goto label_20d7c8;
        case 0x20d7d8u: goto label_20d7d8;
        default: break;
    }

    ctx->pc = 0x20d780u;

    // 0x20d780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20d780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20d784: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20d784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20d788: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d78c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20d78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20d790: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x20d790u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20d794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20d798: 0x26221ffc  addiu       $v0, $s1, 0x1FFC
    ctx->pc = 0x20d798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8188));
    // 0x20d79c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20d79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20d7a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20d7a4: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x20d7a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x20d7a8: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x20d7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20d7ac: 0xc084074  jal         func_2101D0
    ctx->pc = 0x20D7ACu;
    SET_GPR_U32(ctx, 31, 0x20D7B4u);
    ctx->pc = 0x20D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D7ACu;
    // 0x20d7b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2101D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101D0u, 0x20D7ACu, 0x20D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D7B4u;
label_20d7b4:
    // 0x20d7b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d7b8: 0x10530013  beq         $v0, $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x20D7B8u;
    {
        const bool branch_taken_0x20d7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x20D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7B8u;
        // 0x20d7bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d7b8) {
            ctx->pc = 0x20D808u;
            goto label_20d808;
        }
    }
    ctx->pc = 0x20D7C0u;
    // 0x20d7c0: 0xc084074  jal         func_2101D0
    ctx->pc = 0x20D7C0u;
    SET_GPR_U32(ctx, 31, 0x20D7C8u);
    ctx->pc = 0x2101D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101D0u, 0x20D7C0u, 0x20D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D7C8u;
label_20d7c8:
    // 0x20d7c8: 0x54530010  bnel        $v0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x20D7C8u;
    {
        const bool branch_taken_0x20d7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x20d7c8) {
            ctx->pc = 0x20D7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D7C8u;
            // 0x20d7cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D80Cu;
            goto label_20d80c;
        }
    }
    ctx->pc = 0x20D7D0u;
    // 0x20d7d0: 0xc08360a  jal         func_20D828
    ctx->pc = 0x20D7D0u;
    SET_GPR_U32(ctx, 31, 0x20D7D8u);
    ctx->pc = 0x20D7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D7D0u;
    // 0x20d7d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D828u, 0x20D7D0u, 0x20D7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D7D8u;
label_20d7d8:
    // 0x20d7d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20D7D8u;
    {
        const bool branch_taken_0x20d7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7D8u;
        // 0x20d7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d7d8) {
            ctx->pc = 0x20D808u;
            goto label_20d808;
        }
    }
    ctx->pc = 0x20D7E0u;
    // 0x20d7e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20d7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d7e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20d7e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d7e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20d7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d7ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20d7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d7f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20d7f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20d7f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20d7f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d7f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20d7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d7fc: 0x8084068  j           func_2101A0
    ctx->pc = 0x20D7FCu;
    ctx->pc = 0x20D800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D7FCu;
    // 0x20d800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2101A0u;
    sub_002101A0_0x2101a0(rdram, ctx, runtime); return;
    ctx->pc = 0x20D804u;
    // 0x20d804: 0x0  nop
    ctx->pc = 0x20d804u;
    // NOP
label_20d808:
    // 0x20d808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20d808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20d80c:
    // 0x20d80c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20d80cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20d810: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20d810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d814: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20d814u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20d818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d81c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D81Cu;
        // 0x20d820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D824u;
}
