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

// Function: sub_003D8F60
// Address: 0x3d8f60 - 0x3d8fdc
void sub_003D8F60_0x3d8f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8F60_0x3d8f60");
#endif

    switch (ctx->pc) {
        case 0x3d8fccu: goto label_3d8fcc;
        default: break;
    }

    ctx->pc = 0x3d8f60u;

    // 0x3d8f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d8f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d8f64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d8f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d8f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d8f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d8f6c: 0x90852be1  lbu         $a1, 0x2BE1($a0)
    ctx->pc = 0x3d8f6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d8f70: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D8F70u;
    {
        const bool branch_taken_0x3d8f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d8f70) {
            ctx->pc = 0x3D8FB8u;
            goto label_3d8fb8;
        }
    }
    ctx->pc = 0x3D8F78u;
    // 0x3d8f78: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8F78u;
    {
        const bool branch_taken_0x3d8f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8f78) {
            ctx->pc = 0x3D8F88u;
            goto label_3d8f88;
        }
    }
    ctx->pc = 0x3D8F80u;
    // 0x3d8f80: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3D8F80u;
    {
        const bool branch_taken_0x3d8f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8f80) {
            ctx->pc = 0x3D8FD0u;
            goto label_3d8fd0;
        }
    }
    ctx->pc = 0x3D8F88u;
label_3d8f88:
    // 0x3d8f88: 0x240500f4  addiu       $a1, $zero, 0xF4
    ctx->pc = 0x3d8f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x3d8f8c: 0xa0852be4  sb          $a1, 0x2BE4($a0)
    ctx->pc = 0x3d8f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11236), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d8f90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d8f94: 0xa0832be5  sb          $v1, 0x2BE5($a0)
    ctx->pc = 0x3d8f94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11237), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d8f98: 0xa0850780  sb          $a1, 0x780($a0)
    ctx->pc = 0x3d8f98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d8f9c: 0xa0802be3  sb          $zero, 0x2BE3($a0)
    ctx->pc = 0x3d8f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d8fa0: 0xa4802be6  sh          $zero, 0x2BE6($a0)
    ctx->pc = 0x3d8fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d8fa4: 0xa4802bea  sh          $zero, 0x2BEA($a0)
    ctx->pc = 0x3d8fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d8fa8: 0xa4802be8  sh          $zero, 0x2BE8($a0)
    ctx->pc = 0x3d8fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d8fac: 0x90832be1  lbu         $v1, 0x2BE1($a0)
    ctx->pc = 0x3d8facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d8fb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d8fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d8fb4: 0xa0832be1  sb          $v1, 0x2BE1($a0)
    ctx->pc = 0x3d8fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11233), (uint8_t)GPR_U32(ctx, 3));
label_3d8fb8:
    // 0x3d8fb8: 0x90832be3  lbu         $v1, 0x2BE3($a0)
    ctx->pc = 0x3d8fb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11235)));
    // 0x3d8fbc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8FBCu;
    {
        const bool branch_taken_0x3d8fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8fbc) {
            ctx->pc = 0x3D8FD0u;
            goto label_3d8fd0;
        }
    }
    ctx->pc = 0x3D8FC4u;
    // 0x3d8fc4: 0xc0f6180  jal         func_3D8600
    ctx->pc = 0x3D8FC4u;
    SET_GPR_U32(ctx, 31, 0x3D8FCCu);
    ctx->pc = 0x3D8600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8600u, 0x3D8FC4u, 0x3D8FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8FCCu;
label_3d8fcc:
    // 0x3d8fcc: 0x0  nop
    ctx->pc = 0x3d8fccu;
    // NOP
label_3d8fd0:
    // 0x3d8fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d8fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8FD4u;
        // 0x3d8fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8FDCu;
}
