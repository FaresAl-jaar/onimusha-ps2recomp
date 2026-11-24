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

// Function: sub_003B7CC0
// Address: 0x3b7cc0 - 0x3b7d38
void sub_003B7CC0_0x3b7cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7CC0_0x3b7cc0");
#endif

    switch (ctx->pc) {
        case 0x3b7cd4u: goto label_3b7cd4;
        case 0x3b7d18u: goto label_3b7d18;
        default: break;
    }

    ctx->pc = 0x3b7cc0u;

    // 0x3b7cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b7cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b7cc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b7cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b7cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b7cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b7ccc: 0xc0ee264  jal         func_3B8990
    ctx->pc = 0x3B7CCCu;
    SET_GPR_U32(ctx, 31, 0x3B7CD4u);
    ctx->pc = 0x3B7CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7CCCu;
    // 0x3b7cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8990u, 0x3B7CCCu, 0x3B7CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7CD4u;
label_3b7cd4:
    // 0x3b7cd4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B7CD4u;
    {
        const bool branch_taken_0x3b7cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7cd4) {
            ctx->pc = 0x3B7D28u;
            goto label_3b7d28;
        }
    }
    ctx->pc = 0x3B7CDCu;
    // 0x3b7cdc: 0x92052b57  lbu         $a1, 0x2B57($s0)
    ctx->pc = 0x3b7cdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11095)));
    // 0x3b7ce0: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x3B7CE0u;
    {
        const bool branch_taken_0x3b7ce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b7ce0) {
            ctx->pc = 0x3B7D10u;
            goto label_3b7d10;
        }
    }
    ctx->pc = 0x3B7CE8u;
    // 0x3b7ce8: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x3b7ce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3b7cec: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x3b7cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3b7cf0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3B7CF0u;
    {
        const bool branch_taken_0x3b7cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b7cf0) {
            ctx->pc = 0x3B7D28u;
            goto label_3b7d28;
        }
    }
    ctx->pc = 0x3B7CF8u;
    // 0x3b7cf8: 0x92032b59  lbu         $v1, 0x2B59($s0)
    ctx->pc = 0x3b7cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11097)));
    // 0x3b7cfc: 0xa2052b57  sb          $a1, 0x2B57($s0)
    ctx->pc = 0x3b7cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11095), (uint8_t)GPR_U32(ctx, 5));
    // 0x3b7d00: 0xa2032b59  sb          $v1, 0x2B59($s0)
    ctx->pc = 0x3b7d00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11097), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b7d04: 0xa2050780  sb          $a1, 0x780($s0)
    ctx->pc = 0x3b7d04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x3b7d08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B7D08u;
    {
        const bool branch_taken_0x3b7d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D08u;
        // 0x3b7d0c: 0xa2002b56  sb          $zero, 0x2B56($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d08) {
            ctx->pc = 0x3B7D28u;
            goto label_3b7d28;
        }
    }
    ctx->pc = 0x3B7D10u;
label_3b7d10:
    // 0x3b7d10: 0xc0ee264  jal         func_3B8990
    ctx->pc = 0x3B7D10u;
    SET_GPR_U32(ctx, 31, 0x3B7D18u);
    ctx->pc = 0x3B7D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7D10u;
    // 0x3b7d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8990u, 0x3B7D10u, 0x3B7D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7D18u;
label_3b7d18:
    // 0x3b7d18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7D18u;
    {
        const bool branch_taken_0x3b7d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D18u;
        // 0x3b7d1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d18) {
            ctx->pc = 0x3B7D28u;
            goto label_3b7d28;
        }
    }
    ctx->pc = 0x3B7D20u;
    // 0x3b7d20: 0xa2032b56  sb          $v1, 0x2B56($s0)
    ctx->pc = 0x3b7d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11094), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b7d24: 0x0  nop
    ctx->pc = 0x3b7d24u;
    // NOP
label_3b7d28:
    // 0x3b7d28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b7d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7d2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b7d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7d30: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D30u;
        // 0x3b7d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7D38u;
}
