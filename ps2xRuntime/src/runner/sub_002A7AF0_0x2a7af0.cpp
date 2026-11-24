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

// Function: sub_002A7AF0
// Address: 0x2a7af0 - 0x2a7b2c
void sub_002A7AF0_0x2a7af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7AF0_0x2a7af0");
#endif

    switch (ctx->pc) {
        case 0x2a7b20u: goto label_2a7b20;
        default: break;
    }

    ctx->pc = 0x2a7af0u;

    // 0x2a7af0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x2a7af0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7af4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a7af8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2a7af8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7afc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x2a7afcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b00: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2a7b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a7b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7b08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b0c: 0x3405ef98  ori         $a1, $zero, 0xEF98
    ctx->pc = 0x2a7b0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61336);
    // 0x2a7b10: 0x240600b8  addiu       $a2, $zero, 0xB8
    ctx->pc = 0x2a7b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x2a7b14: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a7b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a7b18: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A7B18u;
    SET_GPR_U32(ctx, 31, 0x2A7B20u);
    ctx->pc = 0x2A7B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7B18u;
    // 0x2a7b1c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A7B18u, 0x2A7B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7B20u;
label_2a7b20:
    // 0x2a7b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7b24: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B24u;
        // 0x2a7b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7B2Cu;
}
