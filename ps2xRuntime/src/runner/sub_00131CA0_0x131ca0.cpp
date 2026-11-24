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

// Function: sub_00131CA0
// Address: 0x131ca0 - 0x131d18
void sub_00131CA0_0x131ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131CA0_0x131ca0");
#endif

    switch (ctx->pc) {
        case 0x131ca8u: goto label_131ca8;
        default: break;
    }

    ctx->pc = 0x131ca0u;

    // 0x131ca0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x131ca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ca4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131ca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131ca8:
    // 0x131ca8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x131ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131cac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x131CACu;
    {
        const bool branch_taken_0x131cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131cac) {
            ctx->pc = 0x131CF8u;
            goto label_131cf8;
        }
    }
    ctx->pc = 0x131CB4u;
    // 0x131cb4: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x131cb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x131cb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x131cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x131cbc: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x131cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x131cc0: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x131cc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x131cc4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x131CC4u;
    {
        const bool branch_taken_0x131cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131cc4) {
            ctx->pc = 0x131CD0u;
            goto label_131cd0;
        }
    }
    ctx->pc = 0x131CCCu;
    // 0x131ccc: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x131cccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_131cd0:
    // 0x131cd0: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x131cd0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x131cd4: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x131cd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x131cd8: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x131cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x131cdc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x131cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x131ce0: 0xa4a30002  sh          $v1, 0x2($a1)
    ctx->pc = 0x131ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x131ce4: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x131ce4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x131ce8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x131ce8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x131cec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x131CECu;
    {
        const bool branch_taken_0x131cec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x131cec) {
            ctx->pc = 0x131CF8u;
            goto label_131cf8;
        }
    }
    ctx->pc = 0x131CF4u;
    // 0x131cf4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x131cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_131cf8:
    // 0x131cf8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x131cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x131cfc: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x131cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x131d00: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x131D00u;
    {
        const bool branch_taken_0x131d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D00u;
        // 0x131d04: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d00) {
            ctx->pc = 0x131CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131ca8;
        }
    }
    ctx->pc = 0x131D08u;
    // 0x131d08: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x131d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x131d0c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x131d0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x131d10: 0x3e00008  jr          $ra
    ctx->pc = 0x131D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D10u;
        // 0x131d14: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131D18u;
}
