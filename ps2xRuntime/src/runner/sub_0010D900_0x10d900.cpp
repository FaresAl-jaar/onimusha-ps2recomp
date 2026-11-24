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

// Function: sub_0010D900
// Address: 0x10d900 - 0x10d974
void sub_0010D900_0x10d900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D900_0x10d900");
#endif

    switch (ctx->pc) {
        case 0x10d914u: goto label_10d914;
        default: break;
    }

    ctx->pc = 0x10d900u;

    // 0x10d900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d90c: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10D90Cu;
    SET_GPR_U32(ctx, 31, 0x10D914u);
    ctx->pc = 0x10D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D90Cu;
    // 0x10d910: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10D90Cu, 0x10D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D914u;
label_10d914:
    // 0x10d914: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10d914u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10d918: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10d918u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10d91c: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10d91cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10d920: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10d920u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10d924: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10d924u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10d928: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10d928u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10d92c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10d930: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10d930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10d934: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10d934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10d938: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x10d938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x10d93c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10d93cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x10d940: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10d940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10d944: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x10d944u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 16)); // MMIO: 0x1000b400
    // 0x10d948: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10d948u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x10d94c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10d94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10d950: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10d950u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10d954: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D954u;
    {
        const bool branch_taken_0x10d954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D954u;
        // 0x10d958: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d954) {
            ctx->pc = 0x10D968u;
            goto label_10d968;
        }
    }
    ctx->pc = 0x10D95Cu;
    // 0x10d95c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d95cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d960: 0x804603c  j           func_1180F0
    ctx->pc = 0x10D960u;
    ctx->pc = 0x10D964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D960u;
    // 0x10d964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180F0u;
    sub_001180F0_0x1180f0(rdram, ctx, runtime); return;
    ctx->pc = 0x10D968u;
label_10d968:
    // 0x10d968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d96c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D96Cu;
        // 0x10d970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D974u;
}
