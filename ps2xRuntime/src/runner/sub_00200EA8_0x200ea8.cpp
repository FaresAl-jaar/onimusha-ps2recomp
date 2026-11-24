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

// Function: sub_00200EA8
// Address: 0x200ea8 - 0x200f00
void sub_00200EA8_0x200ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200EA8_0x200ea8");
#endif

    switch (ctx->pc) {
        case 0x200ebcu: goto label_200ebc;
        case 0x200ed4u: goto label_200ed4;
        case 0x200edcu: goto label_200edc;
        case 0x200ee8u: goto label_200ee8;
        default: break;
    }

    ctx->pc = 0x200ea8u;

    // 0x200ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200eb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x200eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x200eb4: 0xc0803c0  jal         func_200F00
    ctx->pc = 0x200EB4u;
    SET_GPR_U32(ctx, 31, 0x200EBCu);
    ctx->pc = 0x200F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200F00u, 0x200EB4u, 0x200EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EBCu;
label_200ebc:
    // 0x200ebc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ec0: 0x2405040c  addiu       $a1, $zero, 0x40C
    ctx->pc = 0x200ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    // 0x200ec4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x200EC4u;
    {
        const bool branch_taken_0x200ec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x200EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EC4u;
        // 0x200ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ec4) {
            ctx->pc = 0x200EF0u;
            goto label_200ef0;
        }
    }
    ctx->pc = 0x200ECCu;
    // 0x200ecc: 0xc080426  jal         func_201098
    ctx->pc = 0x200ECCu;
    SET_GPR_U32(ctx, 31, 0x200ED4u);
    ctx->pc = 0x201098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201098u, 0x200ECCu, 0x200ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200ED4u;
label_200ed4:
    // 0x200ed4: 0xc0803d4  jal         func_200F50
    ctx->pc = 0x200ED4u;
    SET_GPR_U32(ctx, 31, 0x200EDCu);
    ctx->pc = 0x200ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200ED4u;
    // 0x200ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200F50u, 0x200ED4u, 0x200EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EDCu;
label_200edc:
    // 0x200edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ee0: 0xc0804b8  jal         func_2012E0
    ctx->pc = 0x200EE0u;
    SET_GPR_U32(ctx, 31, 0x200EE8u);
    ctx->pc = 0x200EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EE0u;
    // 0x200ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2012E0u, 0x200EE0u, 0x200EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EE8u;
label_200ee8:
    // 0x200ee8: 0xae0203b4  sw          $v0, 0x3B4($s0)
    ctx->pc = 0x200ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 2));
    // 0x200eec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x200eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200ef0:
    // 0x200ef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200ef4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x200ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x200EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EF8u;
        // 0x200efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200F00u;
}
