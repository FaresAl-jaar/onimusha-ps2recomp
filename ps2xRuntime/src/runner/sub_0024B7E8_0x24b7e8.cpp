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

// Function: sub_0024B7E8
// Address: 0x24b7e8 - 0x24b86c
void sub_0024B7E8_0x24b7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B7E8_0x24b7e8");
#endif

    switch (ctx->pc) {
        case 0x24b848u: goto label_24b848;
        case 0x24b858u: goto label_24b858;
        default: break;
    }

    ctx->pc = 0x24b7e8u;

    // 0x24b7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b7ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b7f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b7f4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24B7F4u;
    {
        const bool branch_taken_0x24b7f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7F4u;
        // 0x24b7f8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7f4) {
            ctx->pc = 0x24B818u;
            goto label_24b818;
        }
    }
    ctx->pc = 0x24B7FCu;
    // 0x24b7fc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24b7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24b800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b804: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b808: 0x2484d858  addiu       $a0, $a0, -0x27A8
    ctx->pc = 0x24b808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957144));
    // 0x24b80c: 0x8093008  j           func_24C020
    ctx->pc = 0x24B80Cu;
    ctx->pc = 0x24B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B80Cu;
    // 0x24b810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    sub_0024C020_0x24c020(rdram, ctx, runtime); return;
    ctx->pc = 0x24B814u;
    // 0x24b814: 0x0  nop
    ctx->pc = 0x24b814u;
    // NOP
label_24b818:
    // 0x24b818: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x24b818u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x24b81c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x24B81Cu;
    {
        const bool branch_taken_0x24b81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b81c) {
            ctx->pc = 0x24B820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B81Cu;
            // 0x24b820: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B860u;
            goto label_24b860;
        }
    }
    ctx->pc = 0x24B824u;
    // 0x24b824: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x24b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x24b828: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24B828u;
    {
        const bool branch_taken_0x24b828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B828u;
        // 0x24b82c: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b828) {
            ctx->pc = 0x24B84Cu;
            goto label_24b84c;
        }
    }
    ctx->pc = 0x24B830u;
    // 0x24b830: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x24b830u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x24b834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b838: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24B838u;
    {
        const bool branch_taken_0x24b838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b838) {
            ctx->pc = 0x24B83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B838u;
            // 0x24b83c: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B850u;
            goto label_24b850;
        }
    }
    ctx->pc = 0x24B840u;
    // 0x24b840: 0xc08de38  jal         func_2378E0
    ctx->pc = 0x24B840u;
    SET_GPR_U32(ctx, 31, 0x24B848u);
    ctx->pc = 0x2378E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2378E0u, 0x24B840u, 0x24B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B848u;
label_24b848:
    // 0x24b848: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x24b848u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_24b84c:
    // 0x24b84c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x24b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_24b850:
    // 0x24b850: 0xc092dac  jal         func_24B6B0
    ctx->pc = 0x24B850u;
    SET_GPR_U32(ctx, 31, 0x24B858u);
    ctx->pc = 0x24B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B850u;
    // 0x24b854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B6B0u, 0x24B850u, 0x24B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B858u;
label_24b858:
    // 0x24b858: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x24b858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x24b85c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b85cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24b860:
    // 0x24b860: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b864: 0x3e00008  jr          $ra
    ctx->pc = 0x24B864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B864u;
        // 0x24b868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B86Cu;
}
