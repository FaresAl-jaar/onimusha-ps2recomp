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

// Function: sub_001A0CF0
// Address: 0x1a0cf0 - 0x1a0d60
void sub_001A0CF0_0x1a0cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0CF0_0x1a0cf0");
#endif

    ctx->pc = 0x1a0cf0u;

    // 0x1a0cf0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1a0cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1a0cf4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A0CF4u;
    {
        const bool branch_taken_0x1a0cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0cf4) {
            ctx->pc = 0x1A0D28u;
            goto label_1a0d28;
        }
    }
    ctx->pc = 0x1A0CFCu;
    // 0x1a0cfc: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x1a0cfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1a0d00: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1a0d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1a0d04: 0x30c7000f  andi        $a3, $a2, 0xF
    ctx->pc = 0x1a0d04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1a0d08: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x1a0d08u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1a0d0c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1a0d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1a0d10: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x1a0d10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1a0d14: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1a0d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a0d18: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1a0d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1a0d1c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a0d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1a0d20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A0D20u;
    {
        const bool branch_taken_0x1a0d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0D20u;
        // 0x1a0d24: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d20) {
            ctx->pc = 0x1A0D58u;
            goto label_1a0d58;
        }
    }
    ctx->pc = 0x1A0D28u;
label_1a0d28:
    // 0x1a0d28: 0x30e900ff  andi        $t1, $a3, 0xFF
    ctx->pc = 0x1a0d28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1a0d2c: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1a0d2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1a0d30: 0x91903  sra         $v1, $t1, 4
    ctx->pc = 0x1a0d30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 9), 4));
    // 0x1a0d34: 0x63903  sra         $a3, $a2, 4
    ctx->pc = 0x1a0d34u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1a0d38: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x1a0d38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a0d3c: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x1a0d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x1a0d40: 0x3123000f  andi        $v1, $t1, 0xF
    ctx->pc = 0x1a0d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x1a0d44: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1a0d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1a0d48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a0d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a0d4c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1a0d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1a0d50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0d54: 0xac650080  sw          $a1, 0x80($v1)
    ctx->pc = 0x1a0d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 5));
label_1a0d58:
    // 0x1a0d58: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0D60u;
}
