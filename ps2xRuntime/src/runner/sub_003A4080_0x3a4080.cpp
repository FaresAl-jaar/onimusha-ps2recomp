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

// Function: sub_003A4080
// Address: 0x3a4080 - 0x3a40d4
void sub_003A4080_0x3a4080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4080_0x3a4080");
#endif

    switch (ctx->pc) {
        case 0x3a40b8u: goto label_3a40b8;
        case 0x3a40c8u: goto label_3a40c8;
        default: break;
    }

    ctx->pc = 0x3a4080u;

    // 0x3a4080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a4084: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x3a4084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3a4088: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A4088u;
    {
        const bool branch_taken_0x3a4088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4088u;
        // 0x3a408c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4088) {
            ctx->pc = 0x3A40C0u;
            goto label_3a40c0;
        }
    }
    ctx->pc = 0x3A4090u;
    // 0x3a4090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a4090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4094: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A4094u;
    {
        const bool branch_taken_0x3a4094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4094u;
        // 0x3a4098: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4094) {
            ctx->pc = 0x3A40B0u;
            goto label_3a40b0;
        }
    }
    ctx->pc = 0x3A409Cu;
    // 0x3a409c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A409Cu;
    {
        const bool branch_taken_0x3a409c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a409c) {
            ctx->pc = 0x3A40C8u;
            goto label_3a40c8;
        }
    }
    ctx->pc = 0x3A40A4u;
    // 0x3a40a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A40A4u;
    {
        const bool branch_taken_0x3a40a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a40a4) {
            ctx->pc = 0x3A40C8u;
            goto label_3a40c8;
        }
    }
    ctx->pc = 0x3A40ACu;
    // 0x3a40ac: 0x0  nop
    ctx->pc = 0x3a40acu;
    // NOP
label_3a40b0:
    // 0x3a40b0: 0xc0e8d34  jal         func_3A34D0
    ctx->pc = 0x3A40B0u;
    SET_GPR_U32(ctx, 31, 0x3A40B8u);
    ctx->pc = 0x3A40B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A40B0u;
    // 0x3a40b4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A34D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A34D0u, 0x3A40B0u, 0x3A40B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A40B8u;
label_3a40b8:
    // 0x3a40b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A40B8u;
    {
        const bool branch_taken_0x3a40b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a40b8) {
            ctx->pc = 0x3A40C8u;
            goto label_3a40c8;
        }
    }
    ctx->pc = 0x3A40C0u;
label_3a40c0:
    // 0x3a40c0: 0xc0e8d5c  jal         func_3A3570
    ctx->pc = 0x3A40C0u;
    SET_GPR_U32(ctx, 31, 0x3A40C8u);
    ctx->pc = 0x3A40C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A40C0u;
    // 0x3a40c4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3570u, 0x3A40C0u, 0x3A40C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A40C8u;
label_3a40c8:
    // 0x3a40c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a40c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a40cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A40CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A40CCu;
        // 0x3a40d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A40CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A40D4u;
}
