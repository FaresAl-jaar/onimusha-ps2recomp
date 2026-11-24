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

// Function: sub_002218D0
// Address: 0x2218d0 - 0x221944
void sub_002218D0_0x2218d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002218D0_0x2218d0");
#endif

    switch (ctx->pc) {
        case 0x22191cu: goto label_22191c;
        default: break;
    }

    ctx->pc = 0x2218d0u;

    // 0x2218d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2218d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2218d4: 0x24880d30  addiu       $t0, $a0, 0xD30
    ctx->pc = 0x2218d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3376));
    // 0x2218d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2218d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2218dc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2218dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2218e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2218e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2218e4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2218e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2218e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2218e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2218ec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2218ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2218f0: 0x8d0302cc  lw          $v1, 0x2CC($t0)
    ctx->pc = 0x2218f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 716)));
    // 0x2218f4: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2218F4u;
    {
        const bool branch_taken_0x2218f4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2218F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218F4u;
        // 0x2218f8: 0x2442a178  addiu       $v0, $v0, -0x5E88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218f4) {
            ctx->pc = 0x221910u;
            goto label_221910;
        }
    }
    ctx->pc = 0x2218FCu;
    // 0x2218fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2218fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221900: 0xad0002cc  sw          $zero, 0x2CC($t0)
    ctx->pc = 0x221900u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 716), GPR_U32(ctx, 0));
    // 0x221904: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x221904u;
    {
        const bool branch_taken_0x221904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221904u;
        // 0x221908: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221904) {
            ctx->pc = 0x221934u;
            goto label_221934;
        }
    }
    ctx->pc = 0x22190Cu;
    // 0x22190c: 0x0  nop
    ctx->pc = 0x22190cu;
    // NOP
label_221910:
    // 0x221910: 0x8d0602cc  lw          $a2, 0x2CC($t0)
    ctx->pc = 0x221910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 716)));
    // 0x221914: 0xc07d36e  jal         func_1F4DB8
    ctx->pc = 0x221914u;
    SET_GPR_U32(ctx, 31, 0x22191Cu);
    ctx->pc = 0x221918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221914u;
    // 0x221918: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DB8u, 0x221914u, 0x22191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22191Cu;
label_22191c:
    // 0x22191c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22191Cu;
    {
        const bool branch_taken_0x22191c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22191Cu;
        // 0x221920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22191c) {
            ctx->pc = 0x221930u;
            goto label_221930;
        }
    }
    ctx->pc = 0x221924u;
    // 0x221924: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x221924u;
    {
        const bool branch_taken_0x221924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221924u;
        // 0x221928: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221924) {
            ctx->pc = 0x221934u;
            goto label_221934;
        }
    }
    ctx->pc = 0x22192Cu;
    // 0x22192c: 0x0  nop
    ctx->pc = 0x22192cu;
    // NOP
label_221930:
    // 0x221930: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x221930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_221934:
    // 0x221934: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221938: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x221938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22193c: 0x3e00008  jr          $ra
    ctx->pc = 0x22193Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22193Cu;
        // 0x221940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22193Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221944u;
}
