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

// Function: sub_0021D368
// Address: 0x21d368 - 0x21d3cc
void sub_0021D368_0x21d368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D368_0x21d368");
#endif

    ctx->pc = 0x21d368u;

    // 0x21d368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d36c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x21d36cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d374: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21d374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21d378: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D378u;
    {
        const bool branch_taken_0x21d378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D378u;
        // 0x21d37c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d378) {
            ctx->pc = 0x21D398u;
            goto label_21d398;
        }
    }
    ctx->pc = 0x21D380u;
    // 0x21d380: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21d380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21d384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d388: 0x34a50204  ori         $a1, $a1, 0x204
    ctx->pc = 0x21d388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)516);
    // 0x21d38c: 0x80848e0  j           func_212380
    ctx->pc = 0x21D38Cu;
    ctx->pc = 0x21D390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D38Cu;
    // 0x21d390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21D394u;
    // 0x21d394: 0x0  nop
    ctx->pc = 0x21d394u;
    // NOP
label_21d398:
    // 0x21d398: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x21d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x21d39c: 0x2c4237d0  sltiu       $v0, $v0, 0x37D0
    ctx->pc = 0x21d39cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14288) ? 1 : 0);
    // 0x21d3a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D3A0u;
    {
        const bool branch_taken_0x21d3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3A0u;
        // 0x21d3a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d3a0) {
            ctx->pc = 0x21D3C0u;
            goto label_21d3c0;
        }
    }
    ctx->pc = 0x21D3A8u;
    // 0x21d3a8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21d3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21d3ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21d3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d3b0: 0x34a50205  ori         $a1, $a1, 0x205
    ctx->pc = 0x21d3b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)517);
    // 0x21d3b4: 0x80848e0  j           func_212380
    ctx->pc = 0x21D3B4u;
    ctx->pc = 0x21D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3B4u;
    // 0x21d3b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21D3BCu;
    // 0x21d3bc: 0x0  nop
    ctx->pc = 0x21d3bcu;
    // NOP
label_21d3c0:
    // 0x21d3c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21d3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x21D3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3C4u;
        // 0x21d3c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D3CCu;
}
