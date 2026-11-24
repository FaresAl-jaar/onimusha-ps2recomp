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

// Function: sub_002A8CA0
// Address: 0x2a8ca0 - 0x2a8d34
void sub_002A8CA0_0x2a8ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8CA0_0x2a8ca0");
#endif

    switch (ctx->pc) {
        case 0x2a8cf0u: goto label_2a8cf0;
        case 0x2a8d1cu: goto label_2a8d1c;
        default: break;
    }

    ctx->pc = 0x2a8ca0u;

    // 0x2a8ca0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a8ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a8ca4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2a8ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2a8ca8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a8ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a8cac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a8cacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cb0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a8cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a8cb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a8cb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a8cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a8cbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a8cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a8cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a8cc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a8cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cc8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a8cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ccc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a8cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a8cd0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a8cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a8cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a8cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cd8: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x2a8cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x2a8cdc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a8cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ce0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8ce0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ce4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a8ce4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ce8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A8CE8u;
    SET_GPR_U32(ctx, 31, 0x2A8CF0u);
    ctx->pc = 0x2A8CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8CE8u;
    // 0x2a8cec: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A8CE8u, 0x2A8CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8CF0u;
label_2a8cf0:
    // 0x2a8cf0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a8cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a8cf4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a8cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cf8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a8cf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8cfc: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a8cfcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a8d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d04: 0x344548d8  ori         $a1, $v0, 0x48D8
    ctx->pc = 0x2a8d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18648);
    // 0x2a8d08: 0x240601f4  addiu       $a2, $zero, 0x1F4
    ctx->pc = 0x2a8d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x2a8d0c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a8d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a8d10: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a8d10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8d14: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A8D14u;
    SET_GPR_U32(ctx, 31, 0x2A8D1Cu);
    ctx->pc = 0x2A8D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8D14u;
    // 0x2a8d18: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A8D14u, 0x2A8D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8D1Cu;
label_2a8d1c:
    // 0x2a8d1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a8d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8d20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a8d20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a8d24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a8d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8d28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a8d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8D2Cu;
        // 0x2a8d30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8D34u;
}
