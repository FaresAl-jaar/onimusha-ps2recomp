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

// Function: sub_00207F50
// Address: 0x207f50 - 0x207fa4
void sub_00207F50_0x207f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207F50_0x207f50");
#endif

    switch (ctx->pc) {
        case 0x207f64u: goto label_207f64;
        case 0x207f80u: goto label_207f80;
        case 0x207f90u: goto label_207f90;
        default: break;
    }

    ctx->pc = 0x207f50u;

    // 0x207f50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x207f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x207f54: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x207f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x207f58: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x207f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x207f5c: 0xc081d84  jal         func_207610
    ctx->pc = 0x207F5Cu;
    SET_GPR_U32(ctx, 31, 0x207F64u);
    ctx->pc = 0x207F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F5Cu;
    // 0x207f60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207F5Cu, 0x207F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F64u;
label_207f64:
    // 0x207f64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207f68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x207f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207f6c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207F6Cu;
    {
        const bool branch_taken_0x207f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F6Cu;
        // 0x207f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f6c) {
            ctx->pc = 0x207F88u;
            goto label_207f88;
        }
    }
    ctx->pc = 0x207F74u;
    // 0x207f74: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x207f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207f78: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x207F78u;
    SET_GPR_U32(ctx, 31, 0x207F80u);
    ctx->pc = 0x207F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207F78u;
    // 0x207f7c: 0x24847a38  addiu       $a0, $a0, 0x7A38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x207F78u, 0x207F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F80u;
label_207f80:
    // 0x207f80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x207F80u;
    {
        const bool branch_taken_0x207f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F80u;
        // 0x207f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207f80) {
            ctx->pc = 0x207F94u;
            goto label_207f94;
        }
    }
    ctx->pc = 0x207F88u;
label_207f88:
    // 0x207f88: 0xc081d28  jal         func_2074A0
    ctx->pc = 0x207F88u;
    SET_GPR_U32(ctx, 31, 0x207F90u);
    ctx->pc = 0x2074A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074A0u, 0x207F88u, 0x207F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207F90u;
label_207f90:
    // 0x207f90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_207f94:
    // 0x207f94: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x207f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x207f98: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x207f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x207f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x207F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207F9Cu;
        // 0x207fa0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207FA4u;
}
