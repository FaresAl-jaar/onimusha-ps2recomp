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

// Function: sub_003D9870
// Address: 0x3d9870 - 0x3d98ec
void sub_003D9870_0x3d9870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9870_0x3d9870");
#endif

    switch (ctx->pc) {
        case 0x3d98dcu: goto label_3d98dc;
        default: break;
    }

    ctx->pc = 0x3d9870u;

    // 0x3d9870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d9870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d9874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d9874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d9878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d987c: 0x90852be1  lbu         $a1, 0x2BE1($a0)
    ctx->pc = 0x3d987cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d9880: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D9880u;
    {
        const bool branch_taken_0x3d9880 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d9880) {
            ctx->pc = 0x3D98C8u;
            goto label_3d98c8;
        }
    }
    ctx->pc = 0x3D9888u;
    // 0x3d9888: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9888u;
    {
        const bool branch_taken_0x3d9888 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9888) {
            ctx->pc = 0x3D9898u;
            goto label_3d9898;
        }
    }
    ctx->pc = 0x3D9890u;
    // 0x3d9890: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3D9890u;
    {
        const bool branch_taken_0x3d9890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9890) {
            ctx->pc = 0x3D98E0u;
            goto label_3d98e0;
        }
    }
    ctx->pc = 0x3D9898u;
label_3d9898:
    // 0x3d9898: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x3d9898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x3d989c: 0xa0832be4  sb          $v1, 0x2BE4($a0)
    ctx->pc = 0x3d989cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11236), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d98a0: 0xa0802be5  sb          $zero, 0x2BE5($a0)
    ctx->pc = 0x3d98a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11237), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d98a4: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x3d98a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d98a8: 0xa0802be3  sb          $zero, 0x2BE3($a0)
    ctx->pc = 0x3d98a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d98ac: 0xa4802be6  sh          $zero, 0x2BE6($a0)
    ctx->pc = 0x3d98acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d98b0: 0xa4802bea  sh          $zero, 0x2BEA($a0)
    ctx->pc = 0x3d98b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d98b4: 0xa4802be8  sh          $zero, 0x2BE8($a0)
    ctx->pc = 0x3d98b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d98b8: 0x90832be1  lbu         $v1, 0x2BE1($a0)
    ctx->pc = 0x3d98b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d98bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d98c0: 0xa0832be1  sb          $v1, 0x2BE1($a0)
    ctx->pc = 0x3d98c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11233), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d98c4: 0x0  nop
    ctx->pc = 0x3d98c4u;
    // NOP
label_3d98c8:
    // 0x3d98c8: 0x90832be3  lbu         $v1, 0x2BE3($a0)
    ctx->pc = 0x3d98c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11235)));
    // 0x3d98cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D98CCu;
    {
        const bool branch_taken_0x3d98cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d98cc) {
            ctx->pc = 0x3D98E0u;
            goto label_3d98e0;
        }
    }
    ctx->pc = 0x3D98D4u;
    // 0x3d98d4: 0xc0f6180  jal         func_3D8600
    ctx->pc = 0x3D98D4u;
    SET_GPR_U32(ctx, 31, 0x3D98DCu);
    ctx->pc = 0x3D8600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8600u, 0x3D98D4u, 0x3D98DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D98DCu;
label_3d98dc:
    // 0x3d98dc: 0x0  nop
    ctx->pc = 0x3d98dcu;
    // NOP
label_3d98e0:
    // 0x3d98e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d98e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d98e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D98E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D98E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D98E4u;
        // 0x3d98e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D98E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D98ECu;
}
