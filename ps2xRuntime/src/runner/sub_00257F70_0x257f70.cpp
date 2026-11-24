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

// Function: sub_00257F70
// Address: 0x257f70 - 0x257fd4
void sub_00257F70_0x257f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257F70_0x257f70");
#endif

    switch (ctx->pc) {
        case 0x257fc8u: goto label_257fc8;
        default: break;
    }

    ctx->pc = 0x257f70u;

    // 0x257f70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x257f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x257f74: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x257f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x257f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257f7c: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x257f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x257f80: 0xafa90060  sw          $t1, 0x60($sp)
    ctx->pc = 0x257f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 9));
    // 0x257f84: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x257f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x257f88: 0xffab0078  sd          $t3, 0x78($sp)
    ctx->pc = 0x257f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    // 0x257f8c: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x257f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x257f90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257F90u;
    {
        const bool branch_taken_0x257f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F90u;
        // 0x257f94: 0xa4e60002  sh          $a2, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f90) {
            ctx->pc = 0x257FA0u;
            goto label_257fa0;
        }
    }
    ctx->pc = 0x257F98u;
    // 0x257f98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x257F98u;
    {
        const bool branch_taken_0x257f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F98u;
        // 0x257f9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257f98) {
            ctx->pc = 0x257FACu;
            goto label_257fac;
        }
    }
    ctx->pc = 0x257FA0u;
label_257fa0:
    // 0x257fa0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x257fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x257fa4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x257fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257fa8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x257fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_257fac:
    // 0x257fac: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x257facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257fb0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x257fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x257fb4: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x257fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x257fb8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x257fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257fbc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x257fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257fc0: 0xc095ff8  jal         func_257FE0
    ctx->pc = 0x257FC0u;
    SET_GPR_U32(ctx, 31, 0x257FC8u);
    ctx->pc = 0x257FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257FC0u;
    // 0x257fc4: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257FE0u, 0x257FC0u, 0x257FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257FC8u;
label_257fc8:
    // 0x257fc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x257FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257FCCu;
        // 0x257fd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257FD4u;
}
