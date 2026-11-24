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

// Function: sub_002535A8
// Address: 0x2535a8 - 0x2536a8
void sub_002535A8_0x2535a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002535A8_0x2535a8");
#endif

    switch (ctx->pc) {
        case 0x25366cu: goto label_25366c;
        default: break;
    }

    ctx->pc = 0x2535a8u;

    // 0x2535a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2535a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2535ac: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x2535acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2535b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2535b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2535b4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2535b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2535b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2535b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2535bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2535bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2535c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2535c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2535c4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2535c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2535c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2535c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2535cc: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x2535ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2535d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2535D0u;
    {
        const bool branch_taken_0x2535d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2535D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2535D0u;
        // 0x2535d4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2535d0) {
            ctx->pc = 0x253600u;
            goto label_253600;
        }
    }
    ctx->pc = 0x2535D8u;
    // 0x2535d8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2535d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2535dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2535dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2535e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2535e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2535e4: 0x2484f018  addiu       $a0, $a0, -0xFE8
    ctx->pc = 0x2535e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963224));
    // 0x2535e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2535e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2535ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2535ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2535f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2535f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2535f4: 0x8094c1e  j           func_253078
    ctx->pc = 0x2535F4u;
    ctx->pc = 0x2535F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2535F4u;
    // 0x2535f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253078u;
    sub_00253078_0x253078(rdram, ctx, runtime); return;
    ctx->pc = 0x2535FCu;
    // 0x2535fc: 0x0  nop
    ctx->pc = 0x2535fcu;
    // NOP
label_253600:
    // 0x253600: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x253600u;
    {
        const bool branch_taken_0x253600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x253604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253600u;
        // 0x253604: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253600) {
            ctx->pc = 0x253630u;
            goto label_253630;
        }
    }
    ctx->pc = 0x253608u;
    // 0x253608: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x253608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x25360c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25360cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x253610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253614: 0x2484f040  addiu       $a0, $a0, -0xFC0
    ctx->pc = 0x253614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963264));
    // 0x253618: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x253618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25361c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25361cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253620: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x253620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253624: 0x8094c1e  j           func_253078
    ctx->pc = 0x253624u;
    ctx->pc = 0x253628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253624u;
    // 0x253628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253078u;
    sub_00253078_0x253078(rdram, ctx, runtime); return;
    ctx->pc = 0x25362Cu;
    // 0x25362c: 0x0  nop
    ctx->pc = 0x25362cu;
    // NOP
label_253630:
    // 0x253630: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x253630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x253634: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x253634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x253638: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x253638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x25363c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25363cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x253640: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x253640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x253644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x253644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x253648: 0x3c100089  lui         $s0, 0x89
    ctx->pc = 0x253648u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)137 << 16));
    // 0x25364c: 0x261086e0  addiu       $s0, $s0, -0x7920
    ctx->pc = 0x25364cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936288));
    // 0x253650: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x253650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x253654: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x253654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x253658: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x253658u;
    {
        const bool branch_taken_0x253658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x253658) {
            ctx->pc = 0x25365Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253658u;
            // 0x25365c: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253670u;
            goto label_253670;
        }
    }
    ctx->pc = 0x253660u;
    // 0x253660: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x253660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x253664: 0xc094c1e  jal         func_253078
    ctx->pc = 0x253664u;
    SET_GPR_U32(ctx, 31, 0x25366Cu);
    ctx->pc = 0x253668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253664u;
    // 0x253668: 0x2484f068  addiu       $a0, $a0, -0xF98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253078u, 0x253664u, 0x25366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25366Cu;
label_25366c:
    // 0x25366c: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x25366cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_253670:
    // 0x253670: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x253670u;
    {
        const bool branch_taken_0x253670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x253674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253670u;
        // 0x253674: 0xae130004  sw          $s3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253670) {
            ctx->pc = 0x253680u;
            goto label_253680;
        }
    }
    ctx->pc = 0x253678u;
    // 0x253678: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x253678u;
    {
        const bool branch_taken_0x253678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25367Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253678u;
        // 0x25367c: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253678) {
            ctx->pc = 0x25368Cu;
            goto label_25368c;
        }
    }
    ctx->pc = 0x253680u;
label_253680:
    // 0x253680: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x253680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x253684: 0x2442ef98  addiu       $v0, $v0, -0x1068
    ctx->pc = 0x253684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963096));
    // 0x253688: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x253688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_25368c:
    // 0x25368c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25368cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x253690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253694: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x253694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253698: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x253698u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25369c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25369cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2536a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2536A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2536A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536A0u;
        // 0x2536a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2536A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2536A8u;
}
