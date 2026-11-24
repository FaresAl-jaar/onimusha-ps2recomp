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

// Function: sub_00223F80
// Address: 0x223f80 - 0x223fcc
void sub_00223F80_0x223f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223F80_0x223f80");
#endif

    switch (ctx->pc) {
        case 0x223fa4u: goto label_223fa4;
        default: break;
    }

    ctx->pc = 0x223f80u;

    // 0x223f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223f88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x223f8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x223f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x223f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223f94: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x223f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x223f98: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x223f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x223f9c: 0xc088e5e  jal         func_223978
    ctx->pc = 0x223F9Cu;
    SET_GPR_U32(ctx, 31, 0x223FA4u);
    ctx->pc = 0x223FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F9Cu;
    // 0x223fa0: 0x24500080  addiu       $s0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x223F9Cu, 0x223FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FA4u;
label_223fa4:
    // 0x223fa4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x223FA4u;
    {
        const bool branch_taken_0x223fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223fa4) {
            ctx->pc = 0x223FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223FA4u;
            // 0x223fa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223FBCu;
            goto label_223fbc;
        }
    }
    ctx->pc = 0x223FACu;
    // 0x223fac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x223facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x223fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x223fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223fb4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x223fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x223fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_223fbc:
    // 0x223fbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223fc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x223fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x223FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FC4u;
        // 0x223fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223FCCu;
}
