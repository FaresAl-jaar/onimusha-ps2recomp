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

// Function: sub_002A5CD0
// Address: 0x2a5cd0 - 0x2a5d60
void sub_002A5CD0_0x2a5cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5CD0_0x2a5cd0");
#endif

    switch (ctx->pc) {
        case 0x2a5d20u: goto label_2a5d20;
        case 0x2a5d48u: goto label_2a5d48;
        default: break;
    }

    ctx->pc = 0x2a5cd0u;

    // 0x2a5cd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a5cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a5cd4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a5cd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a5cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a5cdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a5cdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ce0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a5ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a5ce4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a5ce4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5ce8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a5ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a5cec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a5cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a5cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a5cf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a5cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cf8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a5cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cfc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a5cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a5d00: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a5d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a5d04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d08: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2a5d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2a5d0c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a5d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a5d10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a5d14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d18: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A5D18u;
    SET_GPR_U32(ctx, 31, 0x2A5D20u);
    ctx->pc = 0x2A5D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5D18u;
    // 0x2a5d1c: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A5D18u, 0x2A5D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D20u;
label_2a5d20:
    // 0x2a5d20: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a5d20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d24: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a5d24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d28: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a5d28u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a5d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d30: 0x2405764c  addiu       $a1, $zero, 0x764C
    ctx->pc = 0x2a5d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30284));
    // 0x2a5d34: 0x24060174  addiu       $a2, $zero, 0x174
    ctx->pc = 0x2a5d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
    // 0x2a5d38: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a5d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5d3c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a5d3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5d40: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A5D40u;
    SET_GPR_U32(ctx, 31, 0x2A5D48u);
    ctx->pc = 0x2A5D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5D40u;
    // 0x2a5d44: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A5D40u, 0x2A5D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D48u;
label_2a5d48:
    // 0x2a5d48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a5d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a5d4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a5d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a5d50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a5d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5d54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a5d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5d58: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D58u;
        // 0x2a5d5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5D60u;
}
