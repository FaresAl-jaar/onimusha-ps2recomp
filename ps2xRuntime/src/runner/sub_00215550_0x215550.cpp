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

// Function: sub_00215550
// Address: 0x215550 - 0x2155bc
void sub_00215550_0x215550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215550_0x215550");
#endif

    switch (ctx->pc) {
        case 0x21556cu: goto label_21556c;
        default: break;
    }

    ctx->pc = 0x215550u;

    // 0x215550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215558: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21555c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21555cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215560: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x215560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x215564: 0xc0867e2  jal         func_219F88
    ctx->pc = 0x215564u;
    SET_GPR_U32(ctx, 31, 0x21556Cu);
    ctx->pc = 0x215568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215564u;
    // 0x215568: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F88u, 0x215564u, 0x21556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21556Cu;
label_21556c:
    // 0x21556c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21556Cu;
    {
        const bool branch_taken_0x21556c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21556Cu;
        // 0x215570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21556c) {
            ctx->pc = 0x2155A8u;
            goto label_2155a8;
        }
    }
    ctx->pc = 0x215574u;
    // 0x215574: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x215574u;
    {
        const bool branch_taken_0x215574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x215578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215574u;
        // 0x215578: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215574) {
            ctx->pc = 0x2155A8u;
            goto label_2155a8;
        }
    }
    ctx->pc = 0x21557Cu;
    // 0x21557c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x21557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x215580: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x215580u;
    {
        const bool branch_taken_0x215580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215580) {
            ctx->pc = 0x215584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215580u;
            // 0x215584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2155A8u;
            goto label_2155a8;
        }
    }
    ctx->pc = 0x215588u;
    // 0x215588: 0x56230007  bnel        $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x215588u;
    {
        const bool branch_taken_0x215588 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x215588) {
            ctx->pc = 0x21558Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215588u;
            // 0x21558c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2155A8u;
            goto label_2155a8;
        }
    }
    ctx->pc = 0x215590u;
    // 0x215590: 0x8e03096c  lw          $v1, 0x96C($s0)
    ctx->pc = 0x215590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
    // 0x215594: 0x8e040968  lw          $a0, 0x968($s0)
    ctx->pc = 0x215594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x215598: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x215598u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21559c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21559Cu;
    {
        const bool branch_taken_0x21559c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2155A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21559Cu;
        // 0x2155a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21559c) {
            ctx->pc = 0x2155ACu;
            goto label_2155ac;
        }
    }
    ctx->pc = 0x2155A4u;
    // 0x2155a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2155a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2155a8:
    // 0x2155a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2155a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2155ac:
    // 0x2155ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2155acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2155b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2155b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2155b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2155B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2155B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155B4u;
        // 0x2155b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2155B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2155BCu;
}
