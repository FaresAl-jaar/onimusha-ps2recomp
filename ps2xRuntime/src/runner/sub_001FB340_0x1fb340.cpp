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

// Function: sub_001FB340
// Address: 0x1fb340 - 0x1fb38c
void sub_001FB340_0x1fb340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB340_0x1fb340");
#endif

    switch (ctx->pc) {
        case 0x1fb364u: goto label_1fb364;
        default: break;
    }

    ctx->pc = 0x1fb340u;

    // 0x1fb340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb34c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb350: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fb350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb354: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fb354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fb358: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fb358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fb35c: 0xc07f5d0  jal         func_1FD740
    ctx->pc = 0x1FB35Cu;
    SET_GPR_U32(ctx, 31, 0x1FB364u);
    ctx->pc = 0x1FB360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB35Cu;
    // 0x1fb360: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD740u, 0x1FB35Cu, 0x1FB364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB364u;
label_1fb364:
    // 0x1fb364: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB364u;
    {
        const bool branch_taken_0x1fb364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb364) {
            ctx->pc = 0x1FB368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB364u;
            // 0x1fb368: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB378u;
            goto label_1fb378;
        }
    }
    ctx->pc = 0x1FB36Cu;
    // 0x1fb36c: 0xae1100e8  sw          $s1, 0xE8($s0)
    ctx->pc = 0x1fb36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 17));
    // 0x1fb370: 0xae1200e4  sw          $s2, 0xE4($s0)
    ctx->pc = 0x1fb370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 18));
    // 0x1fb374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb378:
    // 0x1fb378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb37c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb37cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb380: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fb380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fb384: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB384u;
        // 0x1fb388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB38Cu;
}
