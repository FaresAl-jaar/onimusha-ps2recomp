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

// Function: sub_0031D8D0
// Address: 0x31d8d0 - 0x31d940
void sub_0031D8D0_0x31d8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D8D0_0x31d8d0");
#endif

    switch (ctx->pc) {
        case 0x31d8f0u: goto label_31d8f0;
        default: break;
    }

    ctx->pc = 0x31d8d0u;

    // 0x31d8d0: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x31d8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x31d8d4: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x31D8D4u;
    {
        const bool branch_taken_0x31d8d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8D4u;
        // 0x31d8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8d4) {
            ctx->pc = 0x31D938u;
            goto label_31d938;
        }
    }
    ctx->pc = 0x31D8DCu;
    // 0x31d8dc: 0x90880013  lbu         $t0, 0x13($a0)
    ctx->pc = 0x31d8dcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 19)));
    // 0x31d8e0: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x31d8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x31d8e4: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x31d8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x31d8e8: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x31d8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x31d8ec: 0x0  nop
    ctx->pc = 0x31d8ecu;
    // NOP
label_31d8f0:
    // 0x31d8f0: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x31d8f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31d8f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31d8f8: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x31d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x31d8fc: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x31d8fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x31d900: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x31d900u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x31d904: 0xa62806  srlv        $a1, $a2, $a1
    ctx->pc = 0x31d904u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x31d908: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31d908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31d90c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x31d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31d910: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31d910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31d914: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x31d914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x31d918: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D918u;
    {
        const bool branch_taken_0x31d918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D918u;
        // 0x31d91c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d918) {
            ctx->pc = 0x31D928u;
            goto label_31d928;
        }
    }
    ctx->pc = 0x31D920u;
    // 0x31d920: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x31d920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31d924: 0x0  nop
    ctx->pc = 0x31d924u;
    // NOP
label_31d928:
    // 0x31d928: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x31d928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x31d92c: 0x1500fff0  bnez        $t0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x31D92Cu;
    {
        const bool branch_taken_0x31d92c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d92c) {
            ctx->pc = 0x31D8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d8f0;
        }
    }
    ctx->pc = 0x31D934u;
    // 0x31d934: 0x0  nop
    ctx->pc = 0x31d934u;
    // NOP
label_31d938:
    // 0x31d938: 0x3e00008  jr          $ra
    ctx->pc = 0x31D938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D940u;
}
