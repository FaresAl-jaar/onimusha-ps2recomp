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

// Function: sub_00234200
// Address: 0x234200 - 0x234294
void sub_00234200_0x234200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234200_0x234200");
#endif

    switch (ctx->pc) {
        case 0x234228u: goto label_234228;
        case 0x234230u: goto label_234230;
        case 0x234238u: goto label_234238;
        case 0x234240u: goto label_234240;
        case 0x234248u: goto label_234248;
        case 0x234260u: goto label_234260;
        case 0x23426cu: goto label_23426c;
        case 0x234278u: goto label_234278;
        default: break;
    }

    ctx->pc = 0x234200u;

    // 0x234200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x234200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x234204: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x234204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x234208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23420c: 0x2463fc14  addiu       $v1, $v1, -0x3EC
    ctx->pc = 0x23420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966292));
    // 0x234210: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x234210u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BFC14u));
    // 0x234214: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x234214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x234218: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x234218u;
    {
        const bool branch_taken_0x234218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234218u;
        // 0x23421c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234218) {
            ctx->pc = 0x234288u;
            goto label_234288;
        }
    }
    ctx->pc = 0x234220u;
    // 0x234220: 0xc08d06c  jal         func_2341B0
    ctx->pc = 0x234220u;
    SET_GPR_U32(ctx, 31, 0x234228u);
    ctx->pc = 0x2341B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2341B0u, 0x234220u, 0x234228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234228u;
label_234228:
    // 0x234228: 0xc08d0da  jal         func_234368
    ctx->pc = 0x234228u;
    SET_GPR_U32(ctx, 31, 0x234230u);
    ctx->pc = 0x234368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234368u, 0x234228u, 0x234230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234230u;
label_234230:
    // 0x234230: 0xc08d142  jal         func_234508
    ctx->pc = 0x234230u;
    SET_GPR_U32(ctx, 31, 0x234238u);
    ctx->pc = 0x234508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234508u, 0x234230u, 0x234238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234238u;
label_234238:
    // 0x234238: 0xc08d10e  jal         func_234438
    ctx->pc = 0x234238u;
    SET_GPR_U32(ctx, 31, 0x234240u);
    ctx->pc = 0x234438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234438u, 0x234238u, 0x234240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234240u;
label_234240:
    // 0x234240: 0xc08d1c2  jal         func_234708
    ctx->pc = 0x234240u;
    SET_GPR_U32(ctx, 31, 0x234248u);
    ctx->pc = 0x234708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234708u, 0x234240u, 0x234248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234248u;
label_234248:
    // 0x234248: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x234248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x23424c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x23424cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x234250: 0x2442fcb8  addiu       $v0, $v0, -0x348
    ctx->pc = 0x234250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966456));
    // 0x234254: 0x8c657548  lw          $a1, 0x7548($v1)
    ctx->pc = 0x234254u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4C7548u));
    // 0x234258: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x234258u;
    SET_GPR_U32(ctx, 31, 0x234260u);
    ctx->pc = 0x23425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234258u;
    // 0x23425c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x234258u, 0x234260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234260u;
label_234260:
    // 0x234260: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x234260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234264: 0xc094de0  jal         func_253780
    ctx->pc = 0x234264u;
    SET_GPR_U32(ctx, 31, 0x23426Cu);
    ctx->pc = 0x234268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234264u;
    // 0x234268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x234264u, 0x23426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23426Cu;
label_23426c:
    // 0x23426c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23426cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234270: 0xc094de6  jal         func_253798
    ctx->pc = 0x234270u;
    SET_GPR_U32(ctx, 31, 0x234278u);
    ctx->pc = 0x234274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234270u;
    // 0x234274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253798u, 0x234270u, 0x234278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234278u;
label_234278:
    // 0x234278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23427c: 0x8094eb8  j           func_253AE0
    ctx->pc = 0x23427Cu;
    ctx->pc = 0x234280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23427Cu;
    // 0x234280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253AE0u;
    sub_00253AE0_0x253ae0(rdram, ctx, runtime); return;
    ctx->pc = 0x234284u;
    // 0x234284: 0x0  nop
    ctx->pc = 0x234284u;
    // NOP
label_234288:
    // 0x234288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23428c: 0x3e00008  jr          $ra
    ctx->pc = 0x23428Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23428Cu;
        // 0x234290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23428Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234294u;
}
