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

// Function: entry_111e3c
// Address: 0x111e3c - 0x111e98
void entry_111e3c_0x111e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_111e3c_0x111e98");
#endif

    switch (ctx->pc) {
        case 0x111e64u: goto label_111e64;
        case 0x111e74u: goto label_111e74;
        default: break;
    }

    ctx->pc = 0x111e3cu;

    // 0x111e3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x111e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111e40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x111e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x111e44: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x111e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x111e48: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x111e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x111e4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x111e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e50: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x111e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x111e54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x111e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111e58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e5c: 0xc0444ca  jal         func_111328
    ctx->pc = 0x111E5Cu;
    SET_GPR_U32(ctx, 31, 0x111E64u);
    ctx->pc = 0x111E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E5Cu;
    // 0x111e60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111328u, 0x111E5Cu, 0x111E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E64u;
label_111e64:
    // 0x111e64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x111E64u;
    {
        const bool branch_taken_0x111e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E64u;
        // 0x111e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e64) {
            ctx->pc = 0x111E78u;
            goto label_111e78;
        }
    }
    ctx->pc = 0x111E6Cu;
    // 0x111e6c: 0xc044604  jal         func_111810
    ctx->pc = 0x111E6Cu;
    SET_GPR_U32(ctx, 31, 0x111E74u);
    ctx->pc = 0x111E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E6Cu;
    // 0x111e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111810u, 0x111E6Cu, 0x111E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E74u;
label_111e74:
    // 0x111e74: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x111e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_111e78:
    // 0x111e78: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x111e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x111e7c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x111e7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111e80: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x111e80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111e84: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x111e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111e88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x111e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x111E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E8Cu;
        // 0x111e90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111E94u;
    // 0x111e94: 0x0  nop
    ctx->pc = 0x111e94u;
    // NOP
    ctx->pc = 0x111e98u;
}
