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

// Function: sub_00104AB8
// Address: 0x104ab8 - 0x104b10
void sub_00104AB8_0x104ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104AB8_0x104ab8");
#endif

    switch (ctx->pc) {
        case 0x104ad4u: goto label_104ad4;
        default: break;
    }

    ctx->pc = 0x104ab8u;

    // 0x104ab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x104ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x104abc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x104abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x104ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x104ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104ac8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x104ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x104acc: 0xc041298  jal         func_104A60
    ctx->pc = 0x104ACCu;
    SET_GPR_U32(ctx, 31, 0x104AD4u);
    ctx->pc = 0x104AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104ACCu;
    // 0x104ad0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A60u, 0x104ACCu, 0x104AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104AD4u;
label_104ad4:
    // 0x104ad4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x104ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x104ad8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x104ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x104adc: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x104adcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x104ae0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x104ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x104ae4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x104ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x104ae8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x104ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x104aec: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x104aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x104af0: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x104af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x104af4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x104af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104af8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x104af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x104afc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x104afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104b04: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x104b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x104b08: 0x3e00008  jr          $ra
    ctx->pc = 0x104B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104B08u;
        // 0x104b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104B10u;
}
