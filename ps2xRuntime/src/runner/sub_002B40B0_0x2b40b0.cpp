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

// Function: sub_002B40B0
// Address: 0x2b40b0 - 0x2b4124
void sub_002B40B0_0x2b40b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B40B0_0x2b40b0");
#endif

    switch (ctx->pc) {
        case 0x2b40d4u: goto label_2b40d4;
        default: break;
    }

    ctx->pc = 0x2b40b0u;

    // 0x2b40b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b40b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b40b4: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x2b40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x2b40b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b40b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b40bc: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x2b40bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x2b40c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b40c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b40c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b40c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b40c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b40c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b40cc: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x2B40CCu;
    SET_GPR_U32(ctx, 31, 0x2B40D4u);
    ctx->pc = 0x2B40D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B40CCu;
    // 0x2b40d0: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x2B40CCu, 0x2B40D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B40D4u;
label_2b40d4:
    // 0x2b40d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2b40d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2b40d8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2b40d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b40dc: 0xa203002c  sb          $v1, 0x2C($s0)
    ctx->pc = 0x2b40dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b40e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b40e4: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x2b40e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b40e8: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x2b40e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x2b40ec: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2b40ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2b40f0: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x2b40f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x2b40f4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2b40f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2b40f8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2b40f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2b40fc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2b40fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2b4100: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2b4100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2b4104: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2b4104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2b4108: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x2b4108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x2b410c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2b410cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2b4110: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2b4110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x2b4114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b4114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b4118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b411c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B411Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B411Cu;
        // 0x2b4120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B411Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4124u;
}
