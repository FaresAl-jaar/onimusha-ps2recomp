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

// Function: sub_001FD5F8
// Address: 0x1fd5f8 - 0x1fd68c
void sub_001FD5F8_0x1fd5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD5F8_0x1fd5f8");
#endif

    switch (ctx->pc) {
        case 0x1fd628u: goto label_1fd628;
        case 0x1fd638u: goto label_1fd638;
        case 0x1fd670u: goto label_1fd670;
        default: break;
    }

    ctx->pc = 0x1fd5f8u;

    // 0x1fd5f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd5fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd604: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd608: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fd608u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd60c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fd60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fd610: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fd610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd614: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD614u;
    {
        const bool branch_taken_0x1fd614 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD614u;
        // 0x1fd618: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd614) {
            ctx->pc = 0x1FD630u;
            goto label_1fd630;
        }
    }
    ctx->pc = 0x1FD61Cu;
    // 0x1fd61c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1fd61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1fd620: 0xc07f5a4  jal         func_1FD690
    ctx->pc = 0x1FD620u;
    SET_GPR_U32(ctx, 31, 0x1FD628u);
    ctx->pc = 0x1FD624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD620u;
    // 0x1fd624: 0x8c448138  lw          $a0, -0x7EC8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934840)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD690u, 0x1FD620u, 0x1FD628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD628u;
label_1fd628:
    // 0x1fd628: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD628u;
    {
        const bool branch_taken_0x1fd628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD628u;
        // 0x1fd62c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd628) {
            ctx->pc = 0x1FD674u;
            goto label_1fd674;
        }
    }
    ctx->pc = 0x1FD630u;
label_1fd630:
    // 0x1fd630: 0xc07f5d0  jal         func_1FD740
    ctx->pc = 0x1FD630u;
    SET_GPR_U32(ctx, 31, 0x1FD638u);
    ctx->pc = 0x1FD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD740u, 0x1FD630u, 0x1FD638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD638u;
label_1fd638:
    // 0x1fd638: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1fd638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x1fd63c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD63Cu;
    {
        const bool branch_taken_0x1fd63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD63Cu;
        // 0x1fd640: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd63c) {
            ctx->pc = 0x1FD660u;
            goto label_1fd660;
        }
    }
    ctx->pc = 0x1FD644u;
    // 0x1fd644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd648: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x1fd648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x1fd64c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd64cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd650: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fd650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd654: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fd654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fd658: 0x807f55c  j           func_1FD570
    ctx->pc = 0x1FD658u;
    ctx->pc = 0x1FD65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD658u;
    // 0x1fd65c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD570u;
    sub_001FD570_0x1fd570(rdram, ctx, runtime); return;
    ctx->pc = 0x1FD660u;
label_1fd660:
    // 0x1fd660: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1fd660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1fd664: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fd664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd668: 0xc07f5a4  jal         func_1FD690
    ctx->pc = 0x1FD668u;
    SET_GPR_U32(ctx, 31, 0x1FD670u);
    ctx->pc = 0x1FD66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD668u;
    // 0x1fd66c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD690u, 0x1FD668u, 0x1FD670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD670u;
label_1fd670:
    // 0x1fd670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd674:
    // 0x1fd674: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd678: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd67c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fd67cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd680: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fd680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fd684: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD684u;
        // 0x1fd688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD68Cu;
}
