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

// Function: sub_003D90A0
// Address: 0x3d90a0 - 0x3d911c
void sub_003D90A0_0x3d90a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D90A0_0x3d90a0");
#endif

    switch (ctx->pc) {
        case 0x3d910cu: goto label_3d910c;
        default: break;
    }

    ctx->pc = 0x3d90a0u;

    // 0x3d90a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d90a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d90a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d90a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d90a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d90a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d90ac: 0x90832be1  lbu         $v1, 0x2BE1($a0)
    ctx->pc = 0x3d90acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d90b0: 0x10650011  beq         $v1, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D90B0u;
    {
        const bool branch_taken_0x3d90b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3d90b0) {
            ctx->pc = 0x3D90F8u;
            goto label_3d90f8;
        }
    }
    ctx->pc = 0x3D90B8u;
    // 0x3d90b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D90B8u;
    {
        const bool branch_taken_0x3d90b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d90b8) {
            ctx->pc = 0x3D90C8u;
            goto label_3d90c8;
        }
    }
    ctx->pc = 0x3D90C0u;
    // 0x3d90c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3D90C0u;
    {
        const bool branch_taken_0x3d90c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d90c0) {
            ctx->pc = 0x3D9110u;
            goto label_3d9110;
        }
    }
    ctx->pc = 0x3D90C8u;
label_3d90c8:
    // 0x3d90c8: 0x240300f5  addiu       $v1, $zero, 0xF5
    ctx->pc = 0x3d90c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x3d90cc: 0xa0832be4  sb          $v1, 0x2BE4($a0)
    ctx->pc = 0x3d90ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11236), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d90d0: 0xa0852be5  sb          $a1, 0x2BE5($a0)
    ctx->pc = 0x3d90d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11237), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d90d4: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x3d90d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d90d8: 0xa0802be3  sb          $zero, 0x2BE3($a0)
    ctx->pc = 0x3d90d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11235), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d90dc: 0xa4802be6  sh          $zero, 0x2BE6($a0)
    ctx->pc = 0x3d90dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11238), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d90e0: 0xa4802bea  sh          $zero, 0x2BEA($a0)
    ctx->pc = 0x3d90e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11242), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d90e4: 0xa4802be8  sh          $zero, 0x2BE8($a0)
    ctx->pc = 0x3d90e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 11240), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d90e8: 0x90832be1  lbu         $v1, 0x2BE1($a0)
    ctx->pc = 0x3d90e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11233)));
    // 0x3d90ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d90f0: 0xa0832be1  sb          $v1, 0x2BE1($a0)
    ctx->pc = 0x3d90f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11233), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d90f4: 0x0  nop
    ctx->pc = 0x3d90f4u;
    // NOP
label_3d90f8:
    // 0x3d90f8: 0x90832be3  lbu         $v1, 0x2BE3($a0)
    ctx->pc = 0x3d90f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11235)));
    // 0x3d90fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D90FCu;
    {
        const bool branch_taken_0x3d90fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d90fc) {
            ctx->pc = 0x3D9110u;
            goto label_3d9110;
        }
    }
    ctx->pc = 0x3D9104u;
    // 0x3d9104: 0xc0f6180  jal         func_3D8600
    ctx->pc = 0x3D9104u;
    SET_GPR_U32(ctx, 31, 0x3D910Cu);
    ctx->pc = 0x3D8600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8600u, 0x3D9104u, 0x3D910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D910Cu;
label_3d910c:
    // 0x3d910c: 0x0  nop
    ctx->pc = 0x3d910cu;
    // NOP
label_3d9110:
    // 0x3d9110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d9110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9114: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9114u;
        // 0x3d9118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D911Cu;
}
