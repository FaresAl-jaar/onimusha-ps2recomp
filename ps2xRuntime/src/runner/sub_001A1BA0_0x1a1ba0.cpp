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

// Function: sub_001A1BA0
// Address: 0x1a1ba0 - 0x1a1c14
void sub_001A1BA0_0x1a1ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1BA0_0x1a1ba0");
#endif

    switch (ctx->pc) {
        case 0x1a1bb4u: goto label_1a1bb4;
        case 0x1a1c08u: goto label_1a1c08;
        default: break;
    }

    ctx->pc = 0x1a1ba0u;

    // 0x1a1ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a1ba4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1a1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a1ba8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1a1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a1bac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1BACu;
    {
        const bool branch_taken_0x1a1bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BACu;
        // 0x1a1bb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1bac) {
            ctx->pc = 0x1A1BD0u;
            goto label_1a1bd0;
        }
    }
    ctx->pc = 0x1A1BB4u;
label_1a1bb4:
    // 0x1a1bb4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1a1bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1bb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a1bbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1bc0: 0x0  nop
    ctx->pc = 0x1a1bc0u;
    // NOP
    // 0x1a1bc4: 0x0  nop
    ctx->pc = 0x1a1bc4u;
    // NOP
    // 0x1a1bc8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1BC8u;
    {
        const bool branch_taken_0x1a1bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1bc8) {
            ctx->pc = 0x1A1BB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1bb4;
        }
    }
    ctx->pc = 0x1A1BD0u;
label_1a1bd0:
    // 0x1a1bd0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1a1bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1bd4: 0x3c02c11c  lui         $v0, 0xC11C
    ctx->pc = 0x1a1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49436 << 16));
    // 0x1a1bd8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1a1bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a1bdc: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x1a1bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1a1be0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1a1be0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a1be4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1a1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1a1be8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a1be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a1bec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1a1becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a1bf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a1bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1bf4: 0x0  nop
    ctx->pc = 0x1a1bf4u;
    // NOP
    // 0x1a1bf8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1a1bf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1a1bfc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a1bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a1c00: 0xc0686c8  jal         func_1A1B20
    ctx->pc = 0x1A1C00u;
    SET_GPR_U32(ctx, 31, 0x1A1C08u);
    ctx->pc = 0x1A1C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C00u;
    // 0x1a1c04: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1B20u, 0x1A1C00u, 0x1A1C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C08u;
label_1a1c08:
    // 0x1a1c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C0Cu;
        // 0x1a1c10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1C14u;
}
