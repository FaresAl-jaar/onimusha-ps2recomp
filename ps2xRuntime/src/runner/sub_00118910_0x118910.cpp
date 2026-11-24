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

// Function: sub_00118910
// Address: 0x118910 - 0x118980
void sub_00118910_0x118910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118910_0x118910");
#endif

    switch (ctx->pc) {
        case 0x118928u: goto label_118928;
        default: break;
    }

    ctx->pc = 0x118910u;

    // 0x118910: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x118910u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x118914: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x118914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x118918: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x118918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11891c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x11891Cu;
    {
        const bool branch_taken_0x11891c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11891Cu;
        // 0x118920: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11891c) {
            ctx->pc = 0x11894Cu;
            goto label_11894c;
        }
    }
    ctx->pc = 0x118924u;
    // 0x118924: 0x0  nop
    ctx->pc = 0x118924u;
    // NOP
label_118928:
    // 0x118928: 0x42000039  di
    ctx->pc = 0x118928u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x11892c: 0x40f  sync.p
    ctx->pc = 0x11892cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x118930: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x118930u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x118934: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x118934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x118938: 0x0  nop
    ctx->pc = 0x118938u;
    // NOP
    // 0x11893c: 0x0  nop
    ctx->pc = 0x11893cu;
    // NOP
    // 0x118940: 0x0  nop
    ctx->pc = 0x118940u;
    // NOP
    // 0x118944: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x118944u;
    {
        const bool branch_taken_0x118944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x118944) {
            ctx->pc = 0x118928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118928;
        }
    }
    ctx->pc = 0x11894Cu;
label_11894c:
    // 0x11894c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x11894cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x118950: 0x40f  sync.p
    ctx->pc = 0x118950u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x118954: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x118954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x118958: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x118958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x11895c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11895cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x118960: 0x40826000  mtc0        $v0, Status
    ctx->pc = 0x118960u;
    ctx->cop0_status = GPR_U32(ctx, 2) & 0xFF57FFFF;
    // 0x118964: 0x40f  sync.p
    ctx->pc = 0x118964u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x118968: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x118968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11896c: 0x409ff000  mtc0        $ra, ErrorEPC
    ctx->pc = 0x11896cu;
    ctx->cop0_errorepc = GPR_U32(ctx, 31);
    // 0x118970: 0x40f  sync.p
    ctx->pc = 0x118970u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x118974: 0x42000018  eret
    ctx->pc = 0x118974u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
    // 0x118978: 0x3e00008  jr          $ra
    ctx->pc = 0x118978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118980u;
}
