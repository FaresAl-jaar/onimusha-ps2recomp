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

// Function: sub_00293B00
// Address: 0x293b00 - 0x293b50
void sub_00293B00_0x293b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293B00_0x293b00");
#endif

    switch (ctx->pc) {
        case 0x293b14u: goto label_293b14;
        default: break;
    }

    ctx->pc = 0x293b00u;

    // 0x293b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x293b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x293b04: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x293b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x293b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x293b0c: 0xc0a737c  jal         func_29CDF0
    ctx->pc = 0x293B0Cu;
    SET_GPR_U32(ctx, 31, 0x293B14u);
    ctx->pc = 0x293B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293B0Cu;
    // 0x293b10: 0x248423a0  addiu       $a0, $a0, 0x23A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CDF0u, 0x293B0Cu, 0x293B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B14u;
label_293b14:
    // 0x293b14: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x293b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x293b18: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x293b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x293b1c: 0x24633890  addiu       $v1, $v1, 0x3890
    ctx->pc = 0x293b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14480));
    // 0x293b20: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x293b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x293b24: 0xac2324c0  sw          $v1, 0x24C0($at)
    ctx->pc = 0x293b24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D24C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D24C0u, _value); } while (0);
    // 0x293b28: 0x24843ab0  addiu       $a0, $a0, 0x3AB0
    ctx->pc = 0x293b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15024));
    // 0x293b2c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x293b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x293b30: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x293b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x293b34: 0xac2424c4  sw          $a0, 0x24C4($at)
    ctx->pc = 0x293b34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D24C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D24C4u, _value); } while (0);
    // 0x293b38: 0x24633ac0  addiu       $v1, $v1, 0x3AC0
    ctx->pc = 0x293b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15040));
    // 0x293b3c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x293b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x293b40: 0xac2324c8  sw          $v1, 0x24C8($at)
    ctx->pc = 0x293b40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8D24C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D24C8u, _value); } while (0);
    // 0x293b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293b48: 0x3e00008  jr          $ra
    ctx->pc = 0x293B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293B48u;
        // 0x293b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293B50u;
}
