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

// Function: sub_003D8EE0
// Address: 0x3d8ee0 - 0x3d8f5c
void sub_003D8EE0_0x3d8ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8EE0_0x3d8ee0");
#endif

    switch (ctx->pc) {
        case 0x3d8f4cu: goto label_3d8f4c;
        default: break;
    }

    ctx->pc = 0x3d8ee0u;

    // 0x3d8ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d8ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d8ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d8ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d8ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d8ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d8eec: 0x90852be1  lbu         $a1, 0x2BE1($a0)
    ctx->pc = 0x3d8eecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d8ef0: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D8EF0u;
    {
        const bool branch_taken_0x3d8ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d8ef0) {
            ctx->pc = 0x3D8F38u;
            goto label_3d8f38;
        }
    }
    ctx->pc = 0x3D8EF8u;
    // 0x3d8ef8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8EF8u;
    {
        const bool branch_taken_0x3d8ef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8ef8) {
            ctx->pc = 0x3D8F08u;
            goto label_3d8f08;
        }
    }
    ctx->pc = 0x3D8F00u;
    // 0x3d8f00: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3D8F00u;
    {
        const bool branch_taken_0x3d8f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8f00) {
            ctx->pc = 0x3D8F50u;
            goto label_3d8f50;
        }
    }
    ctx->pc = 0x3D8F08u;
label_3d8f08:
    // 0x3d8f08: 0x240500f3  addiu       $a1, $zero, 0xF3
    ctx->pc = 0x3d8f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x3d8f0c: 0xa0852be4  sb          $a1, 0x2BE4($a0)
    ctx->pc = 0x3d8f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11236), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d8f10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d8f14: 0xa0832be5  sb          $v1, 0x2BE5($a0)
    ctx->pc = 0x3d8f14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11237), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d8f18: 0xa0850780  sb          $a1, 0x780($a0)
    ctx->pc = 0x3d8f18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d8f1c: 0xa0802be3  sb          $zero, 0x2BE3($a0)
    ctx->pc = 0x3d8f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d8f20: 0xa4802be6  sh          $zero, 0x2BE6($a0)
    ctx->pc = 0x3d8f20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d8f24: 0xa4802bea  sh          $zero, 0x2BEA($a0)
    ctx->pc = 0x3d8f24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d8f28: 0xa4802be8  sh          $zero, 0x2BE8($a0)
    ctx->pc = 0x3d8f28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d8f2c: 0x90832be1  lbu         $v1, 0x2BE1($a0)
    ctx->pc = 0x3d8f2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d8f30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d8f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d8f34: 0xa0832be1  sb          $v1, 0x2BE1($a0)
    ctx->pc = 0x3d8f34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d8f38:
    // 0x3d8f38: 0x90832be3  lbu         $v1, 0x2BE3($a0)
    ctx->pc = 0x3d8f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11235)));
    // 0x3d8f3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8F3Cu;
    {
        const bool branch_taken_0x3d8f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8f3c) {
            ctx->pc = 0x3D8F50u;
            goto label_3d8f50;
        }
    }
    ctx->pc = 0x3D8F44u;
    // 0x3d8f44: 0xc0f6180  jal         func_3D8600
    ctx->pc = 0x3D8F44u;
    SET_GPR_U32(ctx, 31, 0x3D8F4Cu);
    ctx->pc = 0x3D8600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8600u, 0x3D8F44u, 0x3D8F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8F4Cu;
label_3d8f4c:
    // 0x3d8f4c: 0x0  nop
    ctx->pc = 0x3d8f4cu;
    // NOP
label_3d8f50:
    // 0x3d8f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d8f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8f54: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8F54u;
        // 0x3d8f58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8F5Cu;
}
