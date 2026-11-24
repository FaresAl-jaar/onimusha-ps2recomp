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

// Function: sub_003CE250
// Address: 0x3ce250 - 0x3ce294
void sub_003CE250_0x3ce250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CE250_0x3ce250");
#endif

    switch (ctx->pc) {
        case 0x3ce264u: goto label_3ce264;
        case 0x3ce274u: goto label_3ce274;
        case 0x3ce284u: goto label_3ce284;
        default: break;
    }

    ctx->pc = 0x3ce250u;

    // 0x3ce250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ce250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ce254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ce254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ce258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ce258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ce25c: 0xc0c0858  jal         func_302160
    ctx->pc = 0x3CE25Cu;
    SET_GPR_U32(ctx, 31, 0x3CE264u);
    ctx->pc = 0x3CE260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE25Cu;
    // 0x3ce260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302160u, 0x3CE25Cu, 0x3CE264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE264u;
label_3ce264:
    // 0x3ce264: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CE264u;
    {
        const bool branch_taken_0x3ce264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE264u;
        // 0x3ce268: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce264) {
            ctx->pc = 0x3CE278u;
            goto label_3ce278;
        }
    }
    ctx->pc = 0x3CE26Cu;
    // 0x3ce26c: 0xc0ef4a4  jal         func_3BD290
    ctx->pc = 0x3CE26Cu;
    SET_GPR_U32(ctx, 31, 0x3CE274u);
    ctx->pc = 0x3CE270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE26Cu;
    // 0x3ce270: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD290u, 0x3CE26Cu, 0x3CE274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE274u;
label_3ce274:
    // 0x3ce274: 0x0  nop
    ctx->pc = 0x3ce274u;
    // NOP
label_3ce278:
    // 0x3ce278: 0x8e050550  lw          $a1, 0x550($s0)
    ctx->pc = 0x3ce278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x3ce27c: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3CE27Cu;
    SET_GPR_U32(ctx, 31, 0x3CE284u);
    ctx->pc = 0x3CE280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE27Cu;
    // 0x3ce280: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3CE27Cu, 0x3CE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE284u;
label_3ce284:
    // 0x3ce284: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ce284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ce288: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ce288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ce28c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CE28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CE290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE28Cu;
        // 0x3ce290: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CE294u;
}
