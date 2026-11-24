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

// Function: sub_001876A0
// Address: 0x1876a0 - 0x1876f8
void sub_001876A0_0x1876a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001876A0_0x1876a0");
#endif

    switch (ctx->pc) {
        case 0x1876c8u: goto label_1876c8;
        case 0x1876d4u: goto label_1876d4;
        default: break;
    }

    ctx->pc = 0x1876a0u;

    // 0x1876a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1876a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1876a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1876a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1876a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1876a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1876ac: 0x8c900318  lw          $s0, 0x318($a0)
    ctx->pc = 0x1876acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
    // 0x1876b0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1876B0u;
    {
        const bool branch_taken_0x1876b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1876b0) {
            ctx->pc = 0x1876E8u;
            goto label_1876e8;
        }
    }
    ctx->pc = 0x1876B8u;
    // 0x1876b8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1876b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1876bc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1876BCu;
    {
        const bool branch_taken_0x1876bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1876bc) {
            ctx->pc = 0x1876E8u;
            goto label_1876e8;
        }
    }
    ctx->pc = 0x1876C4u;
    // 0x1876c4: 0x0  nop
    ctx->pc = 0x1876c4u;
    // NOP
label_1876c8:
    // 0x1876c8: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x1876c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x1876cc: 0xc05fe50  jal         func_17F940
    ctx->pc = 0x1876CCu;
    SET_GPR_U32(ctx, 31, 0x1876D4u);
    ctx->pc = 0x1876D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1876CCu;
    // 0x1876d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F940u, 0x1876CCu, 0x1876D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1876D4u;
label_1876d4:
    // 0x1876d4: 0x261001a0  addiu       $s0, $s0, 0x1A0
    ctx->pc = 0x1876d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1876d8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1876d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1876dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1876DCu;
    {
        const bool branch_taken_0x1876dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1876dc) {
            ctx->pc = 0x1876C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1876c8;
        }
    }
    ctx->pc = 0x1876E4u;
    // 0x1876e4: 0x0  nop
    ctx->pc = 0x1876e4u;
    // NOP
label_1876e8:
    // 0x1876e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1876e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1876ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1876ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1876f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1876F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1876F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876F0u;
        // 0x1876f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1876F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1876F8u;
}
