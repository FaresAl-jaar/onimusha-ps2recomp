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

// Function: sub_0020B720
// Address: 0x20b720 - 0x20b758
void sub_0020B720_0x20b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B720_0x20b720");
#endif

    switch (ctx->pc) {
        case 0x20b744u: goto label_20b744;
        default: break;
    }

    ctx->pc = 0x20b720u;

    // 0x20b720: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x20b720u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b724: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20b724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b72c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x20b72cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b730: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20b730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20b734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20b734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b73c: 0xc094cc8  jal         func_253320
    ctx->pc = 0x20B73Cu;
    SET_GPR_U32(ctx, 31, 0x20B744u);
    ctx->pc = 0x20B740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B73Cu;
    // 0x20b740: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253320u, 0x20B73Cu, 0x20B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B744u;
label_20b744:
    // 0x20b744: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x20b744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x20b748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b74c: 0xac62fb4c  sw          $v0, -0x4B4($v1)
    ctx->pc = 0x20b74cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x87FB4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x87FB4Cu, _value); } while (0);
    // 0x20b750: 0x3e00008  jr          $ra
    ctx->pc = 0x20B750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B750u;
        // 0x20b754: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B758u;
}
