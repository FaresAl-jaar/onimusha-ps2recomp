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

// Function: sub_00110BD8
// Address: 0x110bd8 - 0x110c10
void sub_00110BD8_0x110bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110BD8_0x110bd8");
#endif

    switch (ctx->pc) {
        case 0x110c04u: goto label_110c04;
        default: break;
    }

    ctx->pc = 0x110bd8u;

    // 0x110bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x110bdc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x110bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110be0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x110be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x110be4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x110be4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110be8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x110be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bec: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x110becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x110bf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x110bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110bf4: 0x24840ae0  addiu       $a0, $a0, 0xAE0
    ctx->pc = 0x110bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2784));
    // 0x110bf8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x110bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bfc: 0xc043f72  jal         func_10FDC8
    ctx->pc = 0x110BFCu;
    SET_GPR_U32(ctx, 31, 0x110C04u);
    ctx->pc = 0x110C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BFCu;
    // 0x110c00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDC8u, 0x110BFCu, 0x110C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C04u;
label_110c04:
    // 0x110c04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x110c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110c08: 0x3e00008  jr          $ra
    ctx->pc = 0x110C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C08u;
        // 0x110c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110C10u;
}
