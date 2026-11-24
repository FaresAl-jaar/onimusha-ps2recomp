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

// Function: sub_0036A100
// Address: 0x36a100 - 0x36a170
void sub_0036A100_0x36a100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A100_0x36a100");
#endif

    switch (ctx->pc) {
        case 0x36a134u: goto label_36a134;
        case 0x36a13cu: goto label_36a13c;
        default: break;
    }

    ctx->pc = 0x36a100u;

    // 0x36a100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36a100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36a104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36a104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36a108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a10c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36a10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a110: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x36A110u;
    {
        const bool branch_taken_0x36a110 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A110u;
        // 0x36a114: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a110) {
            ctx->pc = 0x36A160u;
            goto label_36a160;
        }
    }
    ctx->pc = 0x36A118u;
    // 0x36a118: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x36a118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x36a11c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x36a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x36a120: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x36a120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x36a124: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x36a124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x36a128: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x36a128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x36a12c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x36A12Cu;
    SET_GPR_U32(ctx, 31, 0x36A134u);
    ctx->pc = 0x36A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A12Cu;
    // 0x36a130: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x36A12Cu, 0x36A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A134u;
label_36a134:
    // 0x36a134: 0xc09d694  jal         func_275A50
    ctx->pc = 0x36A134u;
    SET_GPR_U32(ctx, 31, 0x36A13Cu);
    ctx->pc = 0x36A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A134u;
    // 0x36a138: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x36A134u, 0x36A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A13Cu;
label_36a13c:
    // 0x36a13c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x36a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x36a140: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x36a140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36a144: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x36a144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x36a148: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x36a148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x36a14c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x36a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x36a150: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x36a150u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36a154: 0x246395e0  addiu       $v1, $v1, -0x6A20
    ctx->pc = 0x36a154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940128));
    // 0x36a158: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x36a158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x36a15c: 0x0  nop
    ctx->pc = 0x36a15cu;
    // NOP
label_36a160:
    // 0x36a160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36a160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a168: 0x3e00008  jr          $ra
    ctx->pc = 0x36A168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A168u;
        // 0x36a16c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A170u;
}
