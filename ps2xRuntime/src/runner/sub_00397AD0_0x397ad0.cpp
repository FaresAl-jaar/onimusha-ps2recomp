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

// Function: sub_00397AD0
// Address: 0x397ad0 - 0x397b18
void sub_00397AD0_0x397ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397AD0_0x397ad0");
#endif

    switch (ctx->pc) {
        case 0x397afcu: goto label_397afc;
        case 0x397b08u: goto label_397b08;
        default: break;
    }

    ctx->pc = 0x397ad0u;

    // 0x397ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x397ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x397ad4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x397ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x397ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x397ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x397adc: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x397adcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x397ae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x397ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x397ae4: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x397ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x397ae8: 0x80890335  lb          $t1, 0x335($a0)
    ctx->pc = 0x397ae8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 821)));
    // 0x397aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x397aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397af0: 0x24e7c830  addiu       $a3, $a3, -0x37D0
    ctx->pc = 0x397af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953008));
    // 0x397af4: 0xc0dc390  jal         func_370E40
    ctx->pc = 0x397AF4u;
    SET_GPR_U32(ctx, 31, 0x397AFCu);
    ctx->pc = 0x397AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397AF4u;
    // 0x397af8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370E40u, 0x397AF4u, 0x397AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397AFCu;
label_397afc:
    // 0x397afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397b00: 0xc0dc700  jal         func_371C00
    ctx->pc = 0x397B00u;
    SET_GPR_U32(ctx, 31, 0x397B08u);
    ctx->pc = 0x397B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397B00u;
    // 0x397b04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371C00u, 0x397B00u, 0x397B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397B08u;
label_397b08:
    // 0x397b08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x397b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397b0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x397b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397b10: 0x3e00008  jr          $ra
    ctx->pc = 0x397B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397B10u;
        // 0x397b14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397B18u;
}
