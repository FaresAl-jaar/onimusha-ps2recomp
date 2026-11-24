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

// Function: sub_0010D570
// Address: 0x10d570 - 0x10d5e4
void sub_0010D570_0x10d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D570_0x10d570");
#endif

    switch (ctx->pc) {
        case 0x10d584u: goto label_10d584;
        default: break;
    }

    ctx->pc = 0x10d570u;

    // 0x10d570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d57c: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10D57Cu;
    SET_GPR_U32(ctx, 31, 0x10D584u);
    ctx->pc = 0x10D580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D57Cu;
    // 0x10d580: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10D57Cu, 0x10D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D584u;
label_10d584:
    // 0x10d584: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10d584u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10d588: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10d588u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10d58c: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10d58cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10d590: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10d590u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10d594: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10d594u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10d598: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10d598u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10d59c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10d5a0: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10d5a4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10d5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10d5a8: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x10d5a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x10d5ac: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10d5acu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x10d5b0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10d5b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10d5b4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x10d5b4u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 16)); // MMIO: 0x1000b000
    // 0x10d5b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10d5bc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10d5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10d5c0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10d5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10d5c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D5C4u;
    {
        const bool branch_taken_0x10d5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5C4u;
        // 0x10d5c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d5c4) {
            ctx->pc = 0x10D5D8u;
            goto label_10d5d8;
        }
    }
    ctx->pc = 0x10D5CCu;
    // 0x10d5cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d5ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d5d0: 0x804603c  j           func_1180F0
    ctx->pc = 0x10D5D0u;
    ctx->pc = 0x10D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D5D0u;
    // 0x10d5d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180F0u;
    sub_001180F0_0x1180f0(rdram, ctx, runtime); return;
    ctx->pc = 0x10D5D8u;
label_10d5d8:
    // 0x10d5d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d5d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x10D5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D5DCu;
        // 0x10d5e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D5E4u;
}
