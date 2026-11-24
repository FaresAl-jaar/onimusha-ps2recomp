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

// Function: sub_0024C6D8
// Address: 0x24c6d8 - 0x24c774
void sub_0024C6D8_0x24c6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C6D8_0x24c6d8");
#endif

    switch (ctx->pc) {
        case 0x24c6f4u: goto label_24c6f4;
        case 0x24c70cu: goto label_24c70c;
        case 0x24c720u: goto label_24c720;
        case 0x24c750u: goto label_24c750;
        default: break;
    }

    ctx->pc = 0x24c6d8u;

    // 0x24c6d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24c6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24c6dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24c6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24c6e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24c6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c6e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x24c6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x24c6e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24c6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24c6ec: 0xc049f18  jal         func_127C60
    ctx->pc = 0x24C6ECu;
    SET_GPR_U32(ctx, 31, 0x24C6F4u);
    ctx->pc = 0x24C6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C6ECu;
    // 0x24c6f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x24C6ECu, 0x24C6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C6F4u;
label_24c6f4:
    // 0x24c6f4: 0x2c420012  sltiu       $v0, $v0, 0x12
    ctx->pc = 0x24c6f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x24c6f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24c6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c6fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C6FCu;
    {
        const bool branch_taken_0x24c6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6FCu;
        // 0x24c700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6fc) {
            ctx->pc = 0x24C70Cu;
            goto label_24c70c;
        }
    }
    ctx->pc = 0x24C704u;
    // 0x24c704: 0xc093184  jal         func_24C610
    ctx->pc = 0x24C704u;
    SET_GPR_U32(ctx, 31, 0x24C70Cu);
    ctx->pc = 0x24C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C610u, 0x24C704u, 0x24C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C70Cu;
label_24c70c:
    // 0x24c70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c710: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24c710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c714: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x24c714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24c718: 0xc093196  jal         func_24C658
    ctx->pc = 0x24C718u;
    SET_GPR_U32(ctx, 31, 0x24C720u);
    ctx->pc = 0x24C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C718u;
    // 0x24c71c: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C658u, 0x24C718u, 0x24C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C720u;
label_24c720:
    // 0x24c720: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x24c720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24c724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c728: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24c728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c72c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24c72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c730: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x24c730u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c734: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24C734u;
    {
        const bool branch_taken_0x24c734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C734u;
        // 0x24c738: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c734) {
            ctx->pc = 0x24C740u;
            goto label_24c740;
        }
    }
    ctx->pc = 0x24C73Cu;
    // 0x24c73c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_24c740:
    // 0x24c740: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24C740u;
    {
        const bool branch_taken_0x24c740 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C740u;
        // 0x24c744: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c740) {
            ctx->pc = 0x24C760u;
            goto label_24c760;
        }
    }
    ctx->pc = 0x24C748u;
    // 0x24c748: 0xc093190  jal         func_24C640
    ctx->pc = 0x24C748u;
    SET_GPR_U32(ctx, 31, 0x24C750u);
    ctx->pc = 0x24C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C748u;
    // 0x24c74c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C640u, 0x24C748u, 0x24C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C750u;
label_24c750:
    // 0x24c750: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x24c750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24c754: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x24c754u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x24c758: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x24c758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x24c75c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24c75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24c760:
    // 0x24c760: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24c760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c764: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24c764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c768: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24c768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c76c: 0x3e00008  jr          $ra
    ctx->pc = 0x24C76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C76Cu;
        // 0x24c770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C774u;
}
