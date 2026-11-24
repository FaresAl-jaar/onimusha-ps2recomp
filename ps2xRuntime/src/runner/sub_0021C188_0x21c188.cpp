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

// Function: sub_0021C188
// Address: 0x21c188 - 0x21c1cc
void sub_0021C188_0x21c188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C188_0x21c188");
#endif

    ctx->pc = 0x21c188u;

    // 0x21c188: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x21c188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x21c18c: 0x3c035a5a  lui         $v1, 0x5A5A
    ctx->pc = 0x21c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23130 << 16));
    // 0x21c190: 0x8c448c30  lw          $a0, -0x73D0($v0)
    ctx->pc = 0x21c190u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x668C30u));
    // 0x21c194: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c198: 0x34635a5a  ori         $v1, $v1, 0x5A5A
    ctx->pc = 0x21c198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23130);
    // 0x21c19c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21C19Cu;
    {
        const bool branch_taken_0x21c19c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21C1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C19Cu;
        // 0x21c1a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c19c) {
            ctx->pc = 0x21C1C0u;
            goto label_21c1c0;
        }
    }
    ctx->pc = 0x21C1A4u;
    // 0x21c1a4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21c1a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c1ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c1b0: 0x34a50201  ori         $a1, $a1, 0x201
    ctx->pc = 0x21c1b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
    // 0x21c1b4: 0x80848e0  j           func_212380
    ctx->pc = 0x21C1B4u;
    ctx->pc = 0x21C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C1B4u;
    // 0x21c1b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21C1BCu;
    // 0x21c1bc: 0x0  nop
    ctx->pc = 0x21c1bcu;
    // NOP
label_21c1c0:
    // 0x21c1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x21C1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1C4u;
        // 0x21c1c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C1CCu;
}
