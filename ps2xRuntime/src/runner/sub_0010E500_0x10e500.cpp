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

// Function: sub_0010E500
// Address: 0x10e500 - 0x10e5a4
void sub_0010E500_0x10e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E500_0x10e500");
#endif

    switch (ctx->pc) {
        case 0x10e518u: goto label_10e518;
        case 0x10e520u: goto label_10e520;
        case 0x10e544u: goto label_10e544;
        case 0x10e550u: goto label_10e550;
        case 0x10e574u: goto label_10e574;
        case 0x10e594u: goto label_10e594;
        default: break;
    }

    ctx->pc = 0x10e500u;

    // 0x10e500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e508: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10e508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e50c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10e510: 0xc0438d4  jal         func_10E350
    ctx->pc = 0x10E510u;
    SET_GPR_U32(ctx, 31, 0x10E518u);
    ctx->pc = 0x10E514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E510u;
    // 0x10e514: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E350u, 0x10E510u, 0x10E518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E518u;
label_10e518:
    // 0x10e518: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10E518u;
    SET_GPR_U32(ctx, 31, 0x10E520u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10E518u, 0x10E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E520u;
label_10e520:
    // 0x10e520: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10e520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10e524: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10e524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10e528: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10e528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10e52c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10e52cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x1000f000
    // 0x10e530: 0xf  sync
    ctx->pc = 0x10e530u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10e534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E534u;
    {
        const bool branch_taken_0x10e534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E534u;
        // 0x10e538: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e534) {
            ctx->pc = 0x10E548u;
            goto label_10e548;
        }
    }
    ctx->pc = 0x10E53Cu;
    // 0x10e53c: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10E53Cu;
    SET_GPR_U32(ctx, 31, 0x10E544u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10E53Cu, 0x10E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E544u;
label_10e544:
    // 0x10e544: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10e544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10e548:
    // 0x10e548: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10e548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10e54c: 0x0  nop
    ctx->pc = 0x10e54cu;
    // NOP
label_10e550:
    // 0x10e550: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10e550u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000f000
    // 0x10e554: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x10e554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x10e558: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E558u;
    {
        const bool branch_taken_0x10e558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e558) {
            ctx->pc = 0x10E56Cu;
            goto label_10e56c;
        }
    }
    ctx->pc = 0x10E560u;
    // 0x10e560: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e564: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10E564u;
    {
        const bool branch_taken_0x10e564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e564) {
            ctx->pc = 0x10E550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e550;
        }
    }
    ctx->pc = 0x10E56Cu;
label_10e56c:
    // 0x10e56c: 0xc046028  jal         func_1180A0
    ctx->pc = 0x10E56Cu;
    SET_GPR_U32(ctx, 31, 0x10E574u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x10E56Cu, 0x10E574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E574u;
label_10e574:
    // 0x10e574: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10e574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10e578: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x10e578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x10e57c: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x10e57cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 3)); // MMIO: 0x1000f000
    // 0x10e580: 0xf  sync
    ctx->pc = 0x10e580u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10e584: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E584u;
    {
        const bool branch_taken_0x10e584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e584) {
            ctx->pc = 0x10E594u;
            goto label_10e594;
        }
    }
    ctx->pc = 0x10E58Cu;
    // 0x10e58c: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x10E58Cu;
    SET_GPR_U32(ctx, 31, 0x10E594u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x10E58Cu, 0x10E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E594u;
label_10e594:
    // 0x10e594: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x10e594u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10e598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e59c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E59Cu;
        // 0x10e5a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E5A4u;
}
