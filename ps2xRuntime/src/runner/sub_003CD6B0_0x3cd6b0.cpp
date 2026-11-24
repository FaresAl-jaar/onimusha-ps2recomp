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

// Function: sub_003CD6B0
// Address: 0x3cd6b0 - 0x3cd718
void sub_003CD6B0_0x3cd6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD6B0_0x3cd6b0");
#endif

    switch (ctx->pc) {
        case 0x3cd6d8u: goto label_3cd6d8;
        default: break;
    }

    ctx->pc = 0x3cd6b0u;

    // 0x3cd6b0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x3cd6b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3cd6b4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3cd6b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3cd6b8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3cd6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3cd6bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3cd6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd6c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3cd6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3cd6c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cd6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cd6c8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3cd6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3cd6cc: 0x246801c4  addiu       $t0, $v1, 0x1C4
    ctx->pc = 0x3cd6ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 452));
    // 0x3cd6d0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3cd6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd6d4: 0x0  nop
    ctx->pc = 0x3cd6d4u;
    // NOP
label_3cd6d8:
    // 0x3cd6d8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x3cd6d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3cd6dc: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3CD6DCu;
    {
        const bool branch_taken_0x3cd6dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CD6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD6DCu;
        // 0x3cd6e0: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd6dc) {
            ctx->pc = 0x3CD700u;
            goto label_3cd700;
        }
    }
    ctx->pc = 0x3CD6E4u;
    // 0x3cd6e4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3cd6e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3cd6e8: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x3cd6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3cd6ec: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3cd6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3cd6f0: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x3cd6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3cd6f4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3cd6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3cd6f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3CD6F8u;
    {
        const bool branch_taken_0x3cd6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD6F8u;
        // 0x3cd6fc: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd6f8) {
            ctx->pc = 0x3CD710u;
            goto label_3cd710;
        }
    }
    ctx->pc = 0x3CD700u;
label_3cd700:
    // 0x3cd700: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3cd700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3cd704: 0x28e30005  slti        $v1, $a3, 0x5
    ctx->pc = 0x3cd704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3cd708: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x3CD708u;
    {
        const bool branch_taken_0x3cd708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD708u;
        // 0x3cd70c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd708) {
            ctx->pc = 0x3CD6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cd6d8;
        }
    }
    ctx->pc = 0x3CD710u;
label_3cd710:
    // 0x3cd710: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD718u;
}
