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

// Function: sub_0034BBB0
// Address: 0x34bbb0 - 0x34bc20
void sub_0034BBB0_0x34bbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BBB0_0x34bbb0");
#endif

    switch (ctx->pc) {
        case 0x34bbe4u: goto label_34bbe4;
        case 0x34bbecu: goto label_34bbec;
        default: break;
    }

    ctx->pc = 0x34bbb0u;

    // 0x34bbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34bbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34bbb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34bbb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34bbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34bbbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34bbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bbc0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x34BBC0u;
    {
        const bool branch_taken_0x34bbc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BBC0u;
        // 0x34bbc4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bbc0) {
            ctx->pc = 0x34BC10u;
            goto label_34bc10;
        }
    }
    ctx->pc = 0x34BBC8u;
    // 0x34bbc8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x34bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x34bbcc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x34bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x34bbd0: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x34bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x34bbd4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x34bbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x34bbd8: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x34bbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x34bbdc: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x34BBDCu;
    SET_GPR_U32(ctx, 31, 0x34BBE4u);
    ctx->pc = 0x34BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BBDCu;
    // 0x34bbe0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x34BBDCu, 0x34BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BBE4u;
label_34bbe4:
    // 0x34bbe4: 0xc09d694  jal         func_275A50
    ctx->pc = 0x34BBE4u;
    SET_GPR_U32(ctx, 31, 0x34BBECu);
    ctx->pc = 0x34BBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BBE4u;
    // 0x34bbe8: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x34BBE4u, 0x34BBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BBECu;
label_34bbec:
    // 0x34bbec: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x34bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x34bbf0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34bbf4: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x34bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x34bbf8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x34bbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x34bbfc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x34bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x34bc00: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x34bc00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bc04: 0x24638d50  addiu       $v1, $v1, -0x72B0
    ctx->pc = 0x34bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937936));
    // 0x34bc08: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x34bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x34bc0c: 0x0  nop
    ctx->pc = 0x34bc0cu;
    // NOP
label_34bc10:
    // 0x34bc10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34bc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bc14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34bc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34bc18: 0x3e00008  jr          $ra
    ctx->pc = 0x34BC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC18u;
        // 0x34bc1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BC20u;
}
