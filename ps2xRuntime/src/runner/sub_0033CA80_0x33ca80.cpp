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

// Function: sub_0033CA80
// Address: 0x33ca80 - 0x33caf0
void sub_0033CA80_0x33ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CA80_0x33ca80");
#endif

    switch (ctx->pc) {
        case 0x33cab4u: goto label_33cab4;
        case 0x33cabcu: goto label_33cabc;
        default: break;
    }

    ctx->pc = 0x33ca80u;

    // 0x33ca80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33ca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33ca84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33ca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33ca88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ca88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33ca8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33ca8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ca90: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33CA90u;
    {
        const bool branch_taken_0x33ca90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CA90u;
        // 0x33ca94: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ca90) {
            ctx->pc = 0x33CAE0u;
            goto label_33cae0;
        }
    }
    ctx->pc = 0x33CA98u;
    // 0x33ca98: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33ca9c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x33ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x33caa0: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x33caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x33caa4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33caa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33caa8: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x33caa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x33caac: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x33CAACu;
    SET_GPR_U32(ctx, 31, 0x33CAB4u);
    ctx->pc = 0x33CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CAACu;
    // 0x33cab0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x33CAACu, 0x33CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CAB4u;
label_33cab4:
    // 0x33cab4: 0xc09d694  jal         func_275A50
    ctx->pc = 0x33CAB4u;
    SET_GPR_U32(ctx, 31, 0x33CABCu);
    ctx->pc = 0x33CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CAB4u;
    // 0x33cab8: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x33CAB4u, 0x33CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CABCu;
label_33cabc:
    // 0x33cabc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33cac0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33cac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33cac4: 0x24637430  addiu       $v1, $v1, 0x7430
    ctx->pc = 0x33cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29744));
    // 0x33cac8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33cacc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x33caccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x33cad0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x33cad0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33cad4: 0x24638990  addiu       $v1, $v1, -0x7670
    ctx->pc = 0x33cad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936976));
    // 0x33cad8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x33cad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x33cadc: 0x0  nop
    ctx->pc = 0x33cadcu;
    // NOP
label_33cae0:
    // 0x33cae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33cae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33cae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33cae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cae8: 0x3e00008  jr          $ra
    ctx->pc = 0x33CAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CAE8u;
        // 0x33caec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CAF0u;
}
