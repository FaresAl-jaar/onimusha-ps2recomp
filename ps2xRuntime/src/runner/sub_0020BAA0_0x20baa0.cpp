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

// Function: sub_0020BAA0
// Address: 0x20baa0 - 0x20bb20
void sub_0020BAA0_0x20baa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BAA0_0x20baa0");
#endif

    switch (ctx->pc) {
        case 0x20bad0u: goto label_20bad0;
        case 0x20bae0u: goto label_20bae0;
        case 0x20bae8u: goto label_20bae8;
        default: break;
    }

    ctx->pc = 0x20baa0u;

    // 0x20baa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20baa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20baa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20baa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20baac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20baacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20bab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20bab4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20bab8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20bab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20babc: 0x8e1101ac  lw          $s1, 0x1AC($s0)
    ctx->pc = 0x20babcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x20bac0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BAC0u;
    {
        const bool branch_taken_0x20bac0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x20BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAC0u;
        // 0x20bac4: 0x8e12003c  lw          $s2, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bac0) {
            ctx->pc = 0x20BAD8u;
            goto label_20bad8;
        }
    }
    ctx->pc = 0x20BAC8u;
    // 0x20bac8: 0xc082f4e  jal         func_20BD38
    ctx->pc = 0x20BAC8u;
    SET_GPR_U32(ctx, 31, 0x20BAD0u);
    ctx->pc = 0x20BD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BD38u, 0x20BAC8u, 0x20BAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAD0u;
label_20bad0:
    // 0x20bad0: 0x50510001  beql        $v0, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x20BAD0u;
    {
        const bool branch_taken_0x20bad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x20bad0) {
            ctx->pc = 0x20BAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BAD0u;
            // 0x20bad4: 0xae0001ac  sw          $zero, 0x1AC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BAD8u;
            goto label_20bad8;
        }
    }
    ctx->pc = 0x20BAD8u;
label_20bad8:
    // 0x20bad8: 0xc082ec8  jal         func_20BB20
    ctx->pc = 0x20BAD8u;
    SET_GPR_U32(ctx, 31, 0x20BAE0u);
    ctx->pc = 0x20BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BAD8u;
    // 0x20badc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BB20u, 0x20BAD8u, 0x20BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAE0u;
label_20bae0:
    // 0x20bae0: 0xc087dfe  jal         func_21F7F8
    ctx->pc = 0x20BAE0u;
    SET_GPR_U32(ctx, 31, 0x20BAE8u);
    ctx->pc = 0x20BAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BAE0u;
    // 0x20bae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F7F8u, 0x20BAE0u, 0x20BAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BAE8u;
label_20bae8:
    // 0x20bae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20bae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20baec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20baf0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20BAF0u;
    {
        const bool branch_taken_0x20baf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAF0u;
        // 0x20baf4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20baf0) {
            ctx->pc = 0x20BB00u;
            goto label_20bb00;
        }
    }
    ctx->pc = 0x20BAF8u;
    // 0x20baf8: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20BAF8u;
    {
        const bool branch_taken_0x20baf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x20baf8) {
            ctx->pc = 0x20BAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BAF8u;
            // 0x20bafc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BB0Cu;
            goto label_20bb0c;
        }
    }
    ctx->pc = 0x20BB00u;
label_20bb00:
    // 0x20bb00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20bb04: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x20bb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x20bb08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20bb08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20bb0c:
    // 0x20bb0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20bb0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20bb10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20bb10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20bb14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20bb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20bb18: 0x3e00008  jr          $ra
    ctx->pc = 0x20BB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB18u;
        // 0x20bb1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BB20u;
}
