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

// Function: sub_00227CD0
// Address: 0x227cd0 - 0x227d2c
void sub_00227CD0_0x227cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227CD0_0x227cd0");
#endif

    switch (ctx->pc) {
        case 0x227d18u: goto label_227d18;
        default: break;
    }

    ctx->pc = 0x227cd0u;

    // 0x227cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227cd4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227CD4u;
    {
        const bool branch_taken_0x227cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CD4u;
        // 0x227cd8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cd4) {
            ctx->pc = 0x227CE4u;
            goto label_227ce4;
        }
    }
    ctx->pc = 0x227CDCu;
    // 0x227cdc: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x227CDCu;
    {
        const bool branch_taken_0x227cdc = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x227cdc) {
            ctx->pc = 0x227CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227CDCu;
            // 0x227ce0: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227CF0u;
            goto label_227cf0;
        }
    }
    ctx->pc = 0x227CE4u;
label_227ce4:
    // 0x227ce4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x227CE4u;
    {
        const bool branch_taken_0x227ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CE4u;
        // 0x227ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ce4) {
            ctx->pc = 0x227D20u;
            goto label_227d20;
        }
    }
    ctx->pc = 0x227CECu;
    // 0x227cec: 0x0  nop
    ctx->pc = 0x227cecu;
    // NOP
label_227cf0:
    // 0x227cf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x227cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cf4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x227cf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227cf8: 0x80470001  lb          $a3, 0x1($v0)
    ctx->pc = 0x227cf8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x227cfc: 0x80480002  lb          $t0, 0x2($v0)
    ctx->pc = 0x227cfcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x227d00: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x227d00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x227d04: 0xa3a70001  sb          $a3, 0x1($sp)
    ctx->pc = 0x227d04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x227d08: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x227d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x227d0c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x227d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x227d10: 0xc089f4c  jal         func_227D30
    ctx->pc = 0x227D10u;
    SET_GPR_U32(ctx, 31, 0x227D18u);
    ctx->pc = 0x227D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227D10u;
    // 0x227d14: 0xa3a80002  sb          $t0, 0x2($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D30u, 0x227D10u, 0x227D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D18u;
label_227d18:
    // 0x227d18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x227d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x227d1c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x227d1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_227d20:
    // 0x227d20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x227d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227d24: 0x3e00008  jr          $ra
    ctx->pc = 0x227D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D24u;
        // 0x227d28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227D2Cu;
}
