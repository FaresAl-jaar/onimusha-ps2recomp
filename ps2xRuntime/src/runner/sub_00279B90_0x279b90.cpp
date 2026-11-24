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

// Function: sub_00279B90
// Address: 0x279b90 - 0x279c60
void sub_00279B90_0x279b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279B90_0x279b90");
#endif

    switch (ctx->pc) {
        case 0x279c10u: goto label_279c10;
        default: break;
    }

    ctx->pc = 0x279b90u;

    // 0x279b90: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x279b90u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x279b94: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x279b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x279b98: 0x10a3002f  beq         $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x279B98u;
    {
        const bool branch_taken_0x279b98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x279b98) {
            ctx->pc = 0x279C58u;
            goto label_279c58;
        }
    }
    ctx->pc = 0x279BA0u;
    // 0x279ba0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x279ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x279ba4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x279ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x279ba8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x279ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x279bac: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x279bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x279bb0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x279bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x279bb4: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x279bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x279bb8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x279bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x279bbc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x279bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x279bc0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x279bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x279bc4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x279bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x279bc8: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x279bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x279bcc: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x279bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x279bd0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x279bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x279bd4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x279bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x279bd8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x279bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x279bdc: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x279bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x279be0: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x279be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x279be4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x279be4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x279be8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x279be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x279bec: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x279becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x279bf0: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x279bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x279bf4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x279bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x279bf8: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x279bf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x279bfc: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x279BFCu;
    {
        const bool branch_taken_0x279bfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279BFCu;
        // 0x279c00: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279bfc) {
            ctx->pc = 0x279C58u;
            goto label_279c58;
        }
    }
    ctx->pc = 0x279C04u;
    // 0x279c04: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x279c04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279c08: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x279c08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x279c0c: 0x24c641f0  addiu       $a2, $a2, 0x41F0
    ctx->pc = 0x279c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16880));
label_279c10:
    // 0x279c10: 0x8d050020  lw          $a1, 0x20($t0)
    ctx->pc = 0x279c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x279c14: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x279C14u;
    {
        const bool branch_taken_0x279c14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x279c14) {
            ctx->pc = 0x279C38u;
            goto label_279c38;
        }
    }
    ctx->pc = 0x279C1Cu;
    // 0x279c1c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x279c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x279c20: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x279c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x279c24: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x279c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x279c28: 0xad050020  sw          $a1, 0x20($t0)
    ctx->pc = 0x279c28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 5));
    // 0x279c2c: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x279c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x279c30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x279C30u;
    {
        const bool branch_taken_0x279c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C30u;
        // 0x279c34: 0xad050024  sw          $a1, 0x24($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c30) {
            ctx->pc = 0x279C40u;
            goto label_279c40;
        }
    }
    ctx->pc = 0x279C38u;
label_279c38:
    // 0x279c38: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x279c38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x279c3c: 0xad000024  sw          $zero, 0x24($t0)
    ctx->pc = 0x279c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
label_279c40:
    // 0x279c40: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x279c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x279c44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x279c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x279c48: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x279c48u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x279c4c: 0x14a0fff0  bnez        $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x279C4Cu;
    {
        const bool branch_taken_0x279c4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x279C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C4Cu;
        // 0x279c50: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c4c) {
            ctx->pc = 0x279C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279c10;
        }
    }
    ctx->pc = 0x279C54u;
    // 0x279c54: 0x0  nop
    ctx->pc = 0x279c54u;
    // NOP
label_279c58:
    // 0x279c58: 0x3e00008  jr          $ra
    ctx->pc = 0x279C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279C60u;
}
