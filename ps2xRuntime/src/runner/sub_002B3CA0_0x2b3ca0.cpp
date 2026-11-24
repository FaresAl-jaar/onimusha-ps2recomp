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

// Function: sub_002B3CA0
// Address: 0x2b3ca0 - 0x2b3d28
void sub_002B3CA0_0x2b3ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3CA0_0x2b3ca0");
#endif

    switch (ctx->pc) {
        case 0x2b3cc4u: goto label_2b3cc4;
        default: break;
    }

    ctx->pc = 0x2b3ca0u;

    // 0x2b3ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3ca4: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x2b3ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x2b3ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b3ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3cac: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x2b3cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x2b3cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b3cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b3cb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b3cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3cb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b3cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3cbc: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x2B3CBCu;
    SET_GPR_U32(ctx, 31, 0x2B3CC4u);
    ctx->pc = 0x2B3CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CBCu;
    // 0x2b3cc0: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x2B3CBCu, 0x2B3CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CC4u;
label_2b3cc4:
    // 0x2b3cc4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2b3cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2b3cc8: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2b3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2b3ccc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2b3cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2b3cd0: 0x34668080  ori         $a2, $v1, 0x8080
    ctx->pc = 0x2b3cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x2b3cd4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2b3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2b3cd8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2b3cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2b3cdc: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x2b3cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x2b3ce0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2b3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b3ce4: 0xa205002c  sb          $a1, 0x2C($s0)
    ctx->pc = 0x2b3ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b3ce8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3cec: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2b3cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2b3cf0: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x2b3cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x2b3cf4: 0xa205002d  sb          $a1, 0x2D($s0)
    ctx->pc = 0x2b3cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b3cf8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2b3cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2b3cfc: 0xae060024  sw          $a2, 0x24($s0)
    ctx->pc = 0x2b3cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 6));
    // 0x2b3d00: 0xa205002e  sb          $a1, 0x2E($s0)
    ctx->pc = 0x2b3d00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b3d04: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2b3d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2b3d08: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x2b3d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
    // 0x2b3d0c: 0xa205002f  sb          $a1, 0x2F($s0)
    ctx->pc = 0x2b3d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b3d10: 0xa2040030  sb          $a0, 0x30($s0)
    ctx->pc = 0x2b3d10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3d14: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x2b3d14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b3d18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b3d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3d1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b3d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3d20: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D20u;
        // 0x2b3d24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3D28u;
}
