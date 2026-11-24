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

// Function: sub_00215350
// Address: 0x215350 - 0x2153b8
void sub_00215350_0x215350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215350_0x215350");
#endif

    switch (ctx->pc) {
        case 0x215380u: goto label_215380;
        default: break;
    }

    ctx->pc = 0x215350u;

    // 0x215350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215358: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x215358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21535c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21535cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215360: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x215360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x215364: 0x8e300a68  lw          $s0, 0xA68($s1)
    ctx->pc = 0x215364u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x215368: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x215368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x21536c: 0x101827  nor         $v1, $zero, $s0
    ctx->pc = 0x21536cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x215370: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x215370u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x215374: 0x50282a  slt         $a1, $v0, $s0
    ctx->pc = 0x215374u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x215378: 0xc0867ea  jal         func_219FA8
    ctx->pc = 0x215378u;
    SET_GPR_U32(ctx, 31, 0x215380u);
    ctx->pc = 0x21537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215378u;
    // 0x21537c: 0x45800b  movn        $s0, $v0, $a1 (Delay Slot)
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219FA8u, 0x215378u, 0x215380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215380u;
label_215380:
    // 0x215380: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x215380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x215384: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x215384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215388: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x215388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21538c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21538Cu;
    {
        const bool branch_taken_0x21538c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x215390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21538Cu;
        // 0x215390: 0xb0102a  slt         $v0, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21538c) {
            ctx->pc = 0x2153A0u;
            goto label_2153a0;
        }
    }
    ctx->pc = 0x215394u;
    // 0x215394: 0x8e220968  lw          $v0, 0x968($s1)
    ctx->pc = 0x215394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
    // 0x215398: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x215398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x21539c: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x21539cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2153a0:
    // 0x2153a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2153a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2153a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2153a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2153a8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2153a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2153ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2153acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2153b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2153B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2153B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153B0u;
        // 0x2153b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2153B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2153B8u;
}
