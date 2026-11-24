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

// Function: sub_002E5E50
// Address: 0x2e5e50 - 0x2e5ed0
void sub_002E5E50_0x2e5e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5E50_0x2e5e50");
#endif

    switch (ctx->pc) {
        case 0x2e5e90u: goto label_2e5e90;
        case 0x2e5ea4u: goto label_2e5ea4;
        case 0x2e5ebcu: goto label_2e5ebc;
        default: break;
    }

    ctx->pc = 0x2e5e50u;

    // 0x2e5e50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e5e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e5e54: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x2e5e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2e5e58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e5e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e5e5c: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x2e5e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2e5e60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e5e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e5e64: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2e5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2e5e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e5e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e5e6c: 0x24426900  addiu       $v0, $v0, 0x6900
    ctx->pc = 0x2e5e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26880));
    // 0x2e5e70: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2e5e70u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E6900u));
    // 0x2e5e74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e5e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5e78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e5e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5e7c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2e5e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e5e80: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2e5e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5e84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e5e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e5e88: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x2E5E88u;
    SET_GPR_U32(ctx, 31, 0x2E5E90u);
    ctx->pc = 0x2E5E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E88u;
    // 0x2e5e8c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x2E5E88u, 0x2E5E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5E90u;
label_2e5e90:
    // 0x2e5e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5e94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2e5e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e5e98: 0x24067000  addiu       $a2, $zero, 0x7000
    ctx->pc = 0x2e5e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x2e5e9c: 0xc076814  jal         func_1DA050
    ctx->pc = 0x2E5E9Cu;
    SET_GPR_U32(ctx, 31, 0x2E5EA4u);
    ctx->pc = 0x2E5EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5E9Cu;
    // 0x2e5ea0: 0x24077900  addiu       $a3, $zero, 0x7900 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA050u, 0x2E5E9Cu, 0x2E5EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EA4u;
label_2e5ea4:
    // 0x2e5ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ea8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e5ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5eac: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2e5eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e5eb0: 0x24071ff0  addiu       $a3, $zero, 0x1FF0
    ctx->pc = 0x2e5eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8176));
    // 0x2e5eb4: 0xc07683c  jal         func_1DA0F0
    ctx->pc = 0x2E5EB4u;
    SET_GPR_U32(ctx, 31, 0x2E5EBCu);
    ctx->pc = 0x2E5EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5EB4u;
    // 0x2e5eb8: 0x24080df0  addiu       $t0, $zero, 0xDF0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0F0u, 0x2E5EB4u, 0x2E5EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EBCu;
label_2e5ebc:
    // 0x2e5ebc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e5ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5ec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5EC8u;
        // 0x2e5ecc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5ED0u;
}
