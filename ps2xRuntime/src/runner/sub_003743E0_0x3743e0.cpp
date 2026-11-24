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

// Function: sub_003743E0
// Address: 0x3743e0 - 0x374450
void sub_003743E0_0x3743e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003743E0_0x3743e0");
#endif

    switch (ctx->pc) {
        case 0x374414u: goto label_374414;
        case 0x37441cu: goto label_37441c;
        default: break;
    }

    ctx->pc = 0x3743e0u;

    // 0x3743e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3743e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3743e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3743e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3743e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3743e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3743ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3743ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743f0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3743F0u;
    {
        const bool branch_taken_0x3743f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3743F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3743F0u;
        // 0x3743f4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3743f0) {
            ctx->pc = 0x374440u;
            goto label_374440;
        }
    }
    ctx->pc = 0x3743F8u;
    // 0x3743f8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3743f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3743fc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3743fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x374400: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x374400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x374404: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x374404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x374408: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x374408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x37440c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x37440Cu;
    SET_GPR_U32(ctx, 31, 0x374414u);
    ctx->pc = 0x374410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37440Cu;
    // 0x374410: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x37440Cu, 0x374414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374414u;
label_374414:
    // 0x374414: 0xc09d694  jal         func_275A50
    ctx->pc = 0x374414u;
    SET_GPR_U32(ctx, 31, 0x37441Cu);
    ctx->pc = 0x374418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374414u;
    // 0x374418: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x374414u, 0x37441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37441Cu;
label_37441c:
    // 0x37441c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x37441cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x374420: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x374420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x374424: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x374424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x374428: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x374428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x37442c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x37442cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x374430: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x374430u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x374434: 0x246396f0  addiu       $v1, $v1, -0x6910
    ctx->pc = 0x374434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940400));
    // 0x374438: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x374438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x37443c: 0x0  nop
    ctx->pc = 0x37443cu;
    // NOP
label_374440:
    // 0x374440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x374440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x374444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374448: 0x3e00008  jr          $ra
    ctx->pc = 0x374448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374448u;
        // 0x37444c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374450u;
}
