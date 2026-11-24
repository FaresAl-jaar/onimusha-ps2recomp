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

// Function: sub_00274FA0
// Address: 0x274fa0 - 0x275000
void sub_00274FA0_0x274fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274FA0_0x274fa0");
#endif

    ctx->pc = 0x274fa0u;

    // 0x274fa0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x274fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x274fa4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274FA4u;
    {
        const bool branch_taken_0x274fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FA4u;
        // 0x274fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274fa4) {
            ctx->pc = 0x274FB8u;
            goto label_274fb8;
        }
    }
    ctx->pc = 0x274FACu;
    // 0x274fac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x274FACu;
    {
        const bool branch_taken_0x274fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274fac) {
            ctx->pc = 0x274FF8u;
            goto label_274ff8;
        }
    }
    ctx->pc = 0x274FB4u;
    // 0x274fb4: 0x0  nop
    ctx->pc = 0x274fb4u;
    // NOP
label_274fb8:
    // 0x274fb8: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x274fb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x274fbc: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x274fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x274fc0: 0xa083000d  sb          $v1, 0xD($a0)
    ctx->pc = 0x274fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x274fc4: 0x10460006  beq         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x274FC4u;
    {
        const bool branch_taken_0x274fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x274FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274FC4u;
        // 0x274fc8: 0xa085000c  sb          $a1, 0xC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274fc4) {
            ctx->pc = 0x274FE0u;
            goto label_274fe0;
        }
    }
    ctx->pc = 0x274FCCu;
    // 0x274fcc: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x274fccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x274fd0: 0xfc820040  sd          $v0, 0x40($a0)
    ctx->pc = 0x274fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 2));
    // 0x274fd4: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x274fd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x274fd8: 0xfc820048  sd          $v0, 0x48($a0)
    ctx->pc = 0x274fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 2));
    // 0x274fdc: 0x0  nop
    ctx->pc = 0x274fdcu;
    // NOP
label_274fe0:
    // 0x274fe0: 0xa080000e  sb          $zero, 0xE($a0)
    ctx->pc = 0x274fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x274fe4: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x274fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x274fe8: 0xfc800038  sd          $zero, 0x38($a0)
    ctx->pc = 0x274fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 0));
    // 0x274fec: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x274fecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x274ff0: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x274ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x274ff4: 0x0  nop
    ctx->pc = 0x274ff4u;
    // NOP
label_274ff8:
    // 0x274ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x274FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275000u;
}
