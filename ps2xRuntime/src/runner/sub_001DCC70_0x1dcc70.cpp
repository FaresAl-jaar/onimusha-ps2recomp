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

// Function: sub_001DCC70
// Address: 0x1dcc70 - 0x1dccc4
void sub_001DCC70_0x1dcc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCC70_0x1dcc70");
#endif

    switch (ctx->pc) {
        case 0x1dcc70u: goto label_1dcc70;
        case 0x1dcc74u: goto label_1dcc74;
        case 0x1dcc78u: goto label_1dcc78;
        case 0x1dcc7cu: goto label_1dcc7c;
        case 0x1dcc80u: goto label_1dcc80;
        case 0x1dcc84u: goto label_1dcc84;
        case 0x1dcc88u: goto label_1dcc88;
        case 0x1dcc8cu: goto label_1dcc8c;
        case 0x1dcc90u: goto label_1dcc90;
        case 0x1dcc94u: goto label_1dcc94;
        case 0x1dcc98u: goto label_1dcc98;
        case 0x1dcc9cu: goto label_1dcc9c;
        case 0x1dcca0u: goto label_1dcca0;
        case 0x1dcca4u: goto label_1dcca4;
        case 0x1dcca8u: goto label_1dcca8;
        case 0x1dccacu: goto label_1dccac;
        case 0x1dccb0u: goto label_1dccb0;
        case 0x1dccb4u: goto label_1dccb4;
        case 0x1dccb8u: goto label_1dccb8;
        case 0x1dccbcu: goto label_1dccbc;
        case 0x1dccc0u: goto label_1dccc0;
        default: break;
    }

    ctx->pc = 0x1dcc70u;

label_1dcc70:
    // 0x1dcc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dcc74:
    // 0x1dcc74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dcc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dcc78:
    // 0x1dcc78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dcc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dcc7c:
    // 0x1dcc7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dcc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcc80:
    // 0x1dcc80: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1dcc84:
    if (ctx->pc == 0x1DCC84u) {
        ctx->pc = 0x1DCC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC80u;
        // 0x1dcc84: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCC88u;
        goto label_1dcc88;
    }
    ctx->pc = 0x1DCC80u;
    {
        const bool branch_taken_0x1dcc80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC80u;
        // 0x1dcc84: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc80) {
            ctx->pc = 0x1DCCB0u;
            goto label_1dccb0;
        }
    }
    ctx->pc = 0x1DCC88u;
label_1dcc88:
    // 0x1dcc88: 0x244261b0  addiu       $v0, $v0, 0x61B0
    ctx->pc = 0x1dcc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25008));
label_1dcc8c:
    // 0x1dcc8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dcc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dcc90:
    // 0x1dcc90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dcc90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dcc94:
    // 0x1dcc94: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dcc94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dcc98:
    // 0x1dcc98: 0x320f809  jalr        $t9
label_1dcc9c:
    if (ctx->pc == 0x1DCC9Cu) {
        ctx->pc = 0x1DCCA0u;
        goto label_1dcca0;
    }
    ctx->pc = 0x1DCC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DCCA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC98u, 0x1DCCA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DCCA0u;
label_1dcca0:
    // 0x1dcca0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1dcca4:
    if (ctx->pc == 0x1DCCA4u) {
        ctx->pc = 0x1DCCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCA0u;
        // 0x1dcca4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCCA8u;
        goto label_1dcca8;
    }
    ctx->pc = 0x1DCCA0u;
    {
        const bool branch_taken_0x1dcca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCA0u;
        // 0x1dcca4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcca0) {
            ctx->pc = 0x1DCCB0u;
            goto label_1dccb0;
        }
    }
    ctx->pc = 0x1DCCA8u;
label_1dcca8:
    // 0x1dcca8: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1dcca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1dccac:
    // 0x1dccac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dccacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dccb0:
    // 0x1dccb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dccb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dccb4:
    // 0x1dccb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dccb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dccb8:
    // 0x1dccb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dccb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dccbc:
    // 0x1dccbc: 0x3e00008  jr          $ra
label_1dccc0:
    if (ctx->pc == 0x1DCCC0u) {
        ctx->pc = 0x1DCCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCBCu;
        // 0x1dccc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCCC4u;
        goto label_fallthrough_0x1dccbc;
    }
    ctx->pc = 0x1DCCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCBCu;
        // 0x1dccc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dccbc:
    ctx->pc = 0x1DCCC4u;
}
