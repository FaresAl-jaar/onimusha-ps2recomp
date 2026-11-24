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

// Function: sub_0034EF90
// Address: 0x34ef90 - 0x34efe4
void sub_0034EF90_0x34ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EF90_0x34ef90");
#endif

    ctx->pc = 0x34ef90u;

    // 0x34ef90: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x34ef90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34ef94: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x34ef94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x34ef98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x34EF98u;
    {
        const bool branch_taken_0x34ef98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ef98) {
            ctx->pc = 0x34EFA8u;
            goto label_34efa8;
        }
    }
    ctx->pc = 0x34EFA0u;
    // 0x34efa0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34EFA0u;
    {
        const bool branch_taken_0x34efa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFA0u;
        // 0x34efa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34efa0) {
            ctx->pc = 0x34EFC8u;
            goto label_34efc8;
        }
    }
    ctx->pc = 0x34EFA8u;
label_34efa8:
    // 0x34efa8: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x34efa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x34efac: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34EFACu;
    {
        const bool branch_taken_0x34efac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34efac) {
            ctx->pc = 0x34EFC0u;
            goto label_34efc0;
        }
    }
    ctx->pc = 0x34EFB4u;
    // 0x34efb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34EFB4u;
    {
        const bool branch_taken_0x34efb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFB4u;
        // 0x34efb8: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34efb4) {
            ctx->pc = 0x34EFC8u;
            goto label_34efc8;
        }
    }
    ctx->pc = 0x34EFBCu;
    // 0x34efbc: 0x0  nop
    ctx->pc = 0x34efbcu;
    // NOP
label_34efc0:
    // 0x34efc0: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x34efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x34efc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34efc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34efc8:
    // 0x34efc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34efc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34efcc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x34efccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34efd0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x34efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x34efd4: 0x244280c0  addiu       $v0, $v0, -0x7F40
    ctx->pc = 0x34efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934720));
    // 0x34efd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34efd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34efdc: 0x3e00008  jr          $ra
    ctx->pc = 0x34EFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EFDCu;
        // 0x34efe0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EFE4u;
}
