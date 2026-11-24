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

// Function: sub_002146B8
// Address: 0x2146b8 - 0x21475c
void sub_002146B8_0x2146b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002146B8_0x2146b8");
#endif

    switch (ctx->pc) {
        case 0x2146d8u: goto label_2146d8;
        case 0x2146fcu: goto label_2146fc;
        case 0x214704u: goto label_214704;
        case 0x214718u: goto label_214718;
        default: break;
    }

    ctx->pc = 0x2146b8u;

    // 0x2146b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2146b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2146bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2146bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2146c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2146c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2146c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2146c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2146c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2146c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2146cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2146ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2146d0: 0xc085202  jal         func_214808
    ctx->pc = 0x2146D0u;
    SET_GPR_U32(ctx, 31, 0x2146D8u);
    ctx->pc = 0x2146D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2146D0u;
    // 0x2146d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214808u, 0x2146D0u, 0x2146D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2146D8u;
label_2146d8:
    // 0x2146d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2146d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146dc: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2146DCu;
    {
        const bool branch_taken_0x2146dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2146dc) {
            ctx->pc = 0x2146E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2146DCu;
            // 0x2146e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214744u;
            goto label_214744;
        }
    }
    ctx->pc = 0x2146E4u;
    // 0x2146e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2146e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2146e8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2146E8u;
    {
        const bool branch_taken_0x2146e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2146ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146E8u;
        // 0x2146ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146e8) {
            ctx->pc = 0x214740u;
            goto label_214740;
        }
    }
    ctx->pc = 0x2146F0u;
    // 0x2146f0: 0x8e321f7c  lw          $s2, 0x1F7C($s1)
    ctx->pc = 0x2146f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8060)));
    // 0x2146f4: 0xc08467a  jal         func_2119E8
    ctx->pc = 0x2146F4u;
    SET_GPR_U32(ctx, 31, 0x2146FCu);
    ctx->pc = 0x2146F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2146F4u;
    // 0x2146f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2119E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2119E8u, 0x2146F4u, 0x2146FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2146FCu;
label_2146fc:
    // 0x2146fc: 0xc0851d8  jal         func_214760
    ctx->pc = 0x2146FCu;
    SET_GPR_U32(ctx, 31, 0x214704u);
    ctx->pc = 0x214700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2146FCu;
    // 0x214700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214760u, 0x2146FCu, 0x214704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214704u;
label_214704:
    // 0x214704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x214704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214708: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21470c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21470cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214710: 0xc0851da  jal         func_214768
    ctx->pc = 0x214710u;
    SET_GPR_U32(ctx, 31, 0x214718u);
    ctx->pc = 0x214714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214710u;
    // 0x214714: 0x26330d30  addiu       $s3, $s1, 0xD30 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214768u, 0x214710u, 0x214718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214718u;
label_214718:
    // 0x214718: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x214718u;
    {
        const bool branch_taken_0x214718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214718) {
            ctx->pc = 0x21471Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214718u;
            // 0x21471c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214744u;
            goto label_214744;
        }
    }
    ctx->pc = 0x214720u;
    // 0x214720: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x214720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x214724: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x214724u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x214728: 0xae44002c  sw          $a0, 0x2C($s2)
    ctx->pc = 0x214728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 4));
    // 0x21472c: 0xfe630150  sd          $v1, 0x150($s3)
    ctx->pc = 0x21472cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 336), GPR_U64(ctx, 3));
    // 0x214730: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x214730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x214734: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x214734u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x214738: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x214738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
    // 0x21473c: 0xfe430010  sd          $v1, 0x10($s2)
    ctx->pc = 0x21473cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 3));
label_214740:
    // 0x214740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_214744:
    // 0x214744: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214748: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214748u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21474c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21474cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214750: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x214750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214754: 0x3e00008  jr          $ra
    ctx->pc = 0x214754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214754u;
        // 0x214758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21475Cu;
}
