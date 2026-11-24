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

// Function: sub_0025CB70
// Address: 0x25cb70 - 0x25cbe8
void sub_0025CB70_0x25cb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CB70_0x25cb70");
#endif

    switch (ctx->pc) {
        case 0x25cb88u: goto label_25cb88;
        default: break;
    }

    ctx->pc = 0x25cb70u;

    // 0x25cb70: 0x8c88002c  lw          $t0, 0x2C($a0)
    ctx->pc = 0x25cb70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x25cb74: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x25CB74u;
    {
        const bool branch_taken_0x25cb74 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB74u;
        // 0x25cb78: 0x3c06008c  lui         $a2, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb74) {
            ctx->pc = 0x25CBE0u;
            goto label_25cbe0;
        }
    }
    ctx->pc = 0x25CB7Cu;
    // 0x25cb7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25cb80: 0x24c60950  addiu       $a2, $a2, 0x950
    ctx->pc = 0x25cb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2384));
    // 0x25cb84: 0x0  nop
    ctx->pc = 0x25cb84u;
    // NOP
label_25cb88:
    // 0x25cb88: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x25cb88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x25cb8c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x25cb8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x25cb90: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x25CB90u;
    {
        const bool branch_taken_0x25cb90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cb90) {
            ctx->pc = 0x25CBD0u;
            goto label_25cbd0;
        }
    }
    ctx->pc = 0x25CB98u;
    // 0x25cb98: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x25cb98u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x25cb9c: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x25cb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x25cba0: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x25cba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x25cba4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x25cba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x25cba8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x25cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x25cbac: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x25cbacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25cbb0: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x25CBB0u;
    {
        const bool branch_taken_0x25cbb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cbb0) {
            ctx->pc = 0x25CBD0u;
            goto label_25cbd0;
        }
    }
    ctx->pc = 0x25CBB8u;
    // 0x25cbb8: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x25cbb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25cbbc: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CBBCu;
    {
        const bool branch_taken_0x25cbbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x25cbbc) {
            ctx->pc = 0x25CBD0u;
            goto label_25cbd0;
        }
    }
    ctx->pc = 0x25CBC4u;
    // 0x25cbc4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x25cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x25cbc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25CBC8u;
    {
        const bool branch_taken_0x25cbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBC8u;
        // 0x25cbcc: 0xac8300cc  sw          $v1, 0xCC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cbc8) {
            ctx->pc = 0x25CBE0u;
            goto label_25cbe0;
        }
    }
    ctx->pc = 0x25CBD0u;
label_25cbd0:
    // 0x25cbd0: 0x8d08000c  lw          $t0, 0xC($t0)
    ctx->pc = 0x25cbd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x25cbd4: 0x1500ffec  bnez        $t0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x25CBD4u;
    {
        const bool branch_taken_0x25cbd4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cbd4) {
            ctx->pc = 0x25CB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25cb88;
        }
    }
    ctx->pc = 0x25CBDCu;
    // 0x25cbdc: 0x0  nop
    ctx->pc = 0x25cbdcu;
    // NOP
label_25cbe0:
    // 0x25cbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x25CBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CBE8u;
}
