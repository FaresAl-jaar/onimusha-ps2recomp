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

// Function: sub_001FB390
// Address: 0x1fb390 - 0x1fb3dc
void sub_001FB390_0x1fb390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB390_0x1fb390");
#endif

    switch (ctx->pc) {
        case 0x1fb3b4u: goto label_1fb3b4;
        default: break;
    }

    ctx->pc = 0x1fb390u;

    // 0x1fb390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb39c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb3a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fb3a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb3a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fb3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fb3a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fb3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fb3ac: 0xc07f5d0  jal         func_1FD740
    ctx->pc = 0x1FB3ACu;
    SET_GPR_U32(ctx, 31, 0x1FB3B4u);
    ctx->pc = 0x1FB3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB3ACu;
    // 0x1fb3b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD740u, 0x1FB3ACu, 0x1FB3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB3B4u;
label_1fb3b4:
    // 0x1fb3b4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB3B4u;
    {
        const bool branch_taken_0x1fb3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb3b4) {
            ctx->pc = 0x1FB3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB3B4u;
            // 0x1fb3b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB3C8u;
            goto label_1fb3c8;
        }
    }
    ctx->pc = 0x1FB3BCu;
    // 0x1fb3bc: 0xae1100f0  sw          $s1, 0xF0($s0)
    ctx->pc = 0x1fb3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 17));
    // 0x1fb3c0: 0xae1200ec  sw          $s2, 0xEC($s0)
    ctx->pc = 0x1fb3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 18));
    // 0x1fb3c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb3c8:
    // 0x1fb3c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb3c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb3cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb3ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb3d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fb3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fb3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB3D4u;
        // 0x1fb3d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB3DCu;
}
