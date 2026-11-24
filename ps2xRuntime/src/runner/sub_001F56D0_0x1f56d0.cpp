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

// Function: sub_001F56D0
// Address: 0x1f56d0 - 0x1f5754
void sub_001F56D0_0x1f56d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F56D0_0x1f56d0");
#endif

    switch (ctx->pc) {
        case 0x1f56f0u: goto label_1f56f0;
        default: break;
    }

    ctx->pc = 0x1f56d0u;

    // 0x1f56d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f56d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f56d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f56d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f56d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f56d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f56dc: 0x24900160  addiu       $s0, $a0, 0x160
    ctx->pc = 0x1f56dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x1f56e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f56e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f56e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f56e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f56e8: 0xc049590  jal         func_125640
    ctx->pc = 0x1F56E8u;
    SET_GPR_U32(ctx, 31, 0x1F56F0u);
    ctx->pc = 0x1F56ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F56E8u;
    // 0x1f56ec: 0x240604d0  addiu       $a2, $zero, 0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1F56E8u, 0x1F56F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F56F0u;
label_1f56f0:
    // 0x1f56f0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1f56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f56f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f56f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f56f8: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x1f56f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
    // 0x1f56fc: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x1f56fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x1f5700: 0xae0004c0  sw          $zero, 0x4C0($s0)
    ctx->pc = 0x1f5700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1216), GPR_U32(ctx, 0));
    // 0x1f5704: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1f5704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1f5708: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1f5708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1f570c: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1f570cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x1f5710: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1f5710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x1f5714: 0xae00040c  sw          $zero, 0x40C($s0)
    ctx->pc = 0x1f5714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 0));
    // 0x1f5718: 0xae000410  sw          $zero, 0x410($s0)
    ctx->pc = 0x1f5718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
    // 0x1f571c: 0xae000414  sw          $zero, 0x414($s0)
    ctx->pc = 0x1f571cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 0));
    // 0x1f5720: 0xae000418  sw          $zero, 0x418($s0)
    ctx->pc = 0x1f5720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 0));
    // 0x1f5724: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x1f5724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
    // 0x1f5728: 0xae000420  sw          $zero, 0x420($s0)
    ctx->pc = 0x1f5728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 0));
    // 0x1f572c: 0xae000428  sw          $zero, 0x428($s0)
    ctx->pc = 0x1f572cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1064), GPR_U32(ctx, 0));
    // 0x1f5730: 0xae0003c8  sw          $zero, 0x3C8($s0)
    ctx->pc = 0x1f5730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 0));
    // 0x1f5734: 0xae00049c  sw          $zero, 0x49C($s0)
    ctx->pc = 0x1f5734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1180), GPR_U32(ctx, 0));
    // 0x1f5738: 0xae0004a0  sw          $zero, 0x4A0($s0)
    ctx->pc = 0x1f5738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1184), GPR_U32(ctx, 0));
    // 0x1f573c: 0xae0004b0  sw          $zero, 0x4B0($s0)
    ctx->pc = 0x1f573cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1200), GPR_U32(ctx, 0));
    // 0x1f5740: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1f5740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1f5744: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f5744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f574c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F574Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F574Cu;
        // 0x1f5750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F574Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5754u;
}
