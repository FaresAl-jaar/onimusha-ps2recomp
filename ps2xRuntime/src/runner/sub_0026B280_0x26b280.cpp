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

// Function: sub_0026B280
// Address: 0x26b280 - 0x26b2e8
void sub_0026B280_0x26b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B280_0x26b280");
#endif

    switch (ctx->pc) {
        case 0x26b2c0u: goto label_26b2c0;
        case 0x26b2d8u: goto label_26b2d8;
        default: break;
    }

    ctx->pc = 0x26b280u;

    // 0x26b280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26b280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26b284: 0x28a10020  slti        $at, $a1, 0x20
    ctx->pc = 0x26b284u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x26b288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26b28c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26b290: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B290u;
    {
        const bool branch_taken_0x26b290 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B290u;
        // 0x26b294: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b290) {
            ctx->pc = 0x26B2A0u;
            goto label_26b2a0;
        }
    }
    ctx->pc = 0x26B298u;
    // 0x26b298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26b298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b29c: 0x0  nop
    ctx->pc = 0x26b29cu;
    // NOP
label_26b2a0:
    // 0x26b2a0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x26b2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26b2a4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x26b2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x26b2a8: 0x24a20ec9  addiu       $v0, $a1, 0xEC9
    ctx->pc = 0x26b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3785));
    // 0x26b2ac: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x26b2acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26b2b0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x26b2b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26b2b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x26b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x26b2b8: 0xc0c70c8  jal         func_31C320
    ctx->pc = 0x26B2B8u;
    SET_GPR_U32(ctx, 31, 0x26B2C0u);
    ctx->pc = 0x26B2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B2B8u;
    // 0x26b2bc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C320u, 0x26B2B8u, 0x26B2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2C0u;
label_26b2c0:
    // 0x26b2c0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x26b2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x26b2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b2c8: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x26b2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x26b2cc: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x26b2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x26b2d0: 0xc09acdc  jal         func_26B370
    ctx->pc = 0x26B2D0u;
    SET_GPR_U32(ctx, 31, 0x26B2D8u);
    ctx->pc = 0x26B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B2D0u;
    // 0x26b2d4: 0xa6000010  sh          $zero, 0x10($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B370u, 0x26B2D0u, 0x26B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B2D8u;
label_26b2d8:
    // 0x26b2d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26b2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b2dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x26B2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B2E0u;
        // 0x26b2e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B2E8u;
}
