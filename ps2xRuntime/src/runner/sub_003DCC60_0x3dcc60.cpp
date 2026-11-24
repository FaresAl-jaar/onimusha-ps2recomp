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

// Function: sub_003DCC60
// Address: 0x3dcc60 - 0x3dccd0
void sub_003DCC60_0x3dcc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCC60_0x3dcc60");
#endif

    switch (ctx->pc) {
        case 0x3dcc94u: goto label_3dcc94;
        case 0x3dcc9cu: goto label_3dcc9c;
        default: break;
    }

    ctx->pc = 0x3dcc60u;

    // 0x3dcc60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dcc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dcc64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dcc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dcc68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dcc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dcc6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dcc6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcc70: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3DCC70u;
    {
        const bool branch_taken_0x3dcc70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC70u;
        // 0x3dcc74: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcc70) {
            ctx->pc = 0x3DCCC0u;
            goto label_3dccc0;
        }
    }
    ctx->pc = 0x3DCC78u;
    // 0x3dcc78: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3dcc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3dcc7c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3dcc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3dcc80: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3dcc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3dcc84: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3dcc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3dcc88: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3dcc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3dcc8c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3DCC8Cu;
    SET_GPR_U32(ctx, 31, 0x3DCC94u);
    ctx->pc = 0x3DCC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCC8Cu;
    // 0x3dcc90: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3DCC8Cu, 0x3DCC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCC94u;
label_3dcc94:
    // 0x3dcc94: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3DCC94u;
    SET_GPR_U32(ctx, 31, 0x3DCC9Cu);
    ctx->pc = 0x3DCC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCC94u;
    // 0x3dcc98: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3DCC94u, 0x3DCC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCC9Cu;
label_3dcc9c:
    // 0x3dcc9c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3dcc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3dcca0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3dcca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3dcca4: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3dcca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3dcca8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3dcca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3dccac: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3dccacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3dccb0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3dccb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3dccb4: 0x2463ae10  addiu       $v1, $v1, -0x51F0
    ctx->pc = 0x3dccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946320));
    // 0x3dccb8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3dccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3dccbc: 0x0  nop
    ctx->pc = 0x3dccbcu;
    // NOP
label_3dccc0:
    // 0x3dccc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dccc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dccc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dccc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dccc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCCC8u;
        // 0x3dcccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCCD0u;
}
