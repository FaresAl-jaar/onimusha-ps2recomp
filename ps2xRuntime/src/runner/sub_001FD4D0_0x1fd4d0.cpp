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

// Function: sub_001FD4D0
// Address: 0x1fd4d0 - 0x1fd548
void sub_001FD4D0_0x1fd4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD4D0_0x1fd4d0");
#endif

    switch (ctx->pc) {
        case 0x1fd508u: goto label_1fd508;
        case 0x1fd51cu: goto label_1fd51c;
        case 0x1fd530u: goto label_1fd530;
        default: break;
    }

    ctx->pc = 0x1fd4d0u;

    // 0x1fd4d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd4d4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1fd4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1fd4d8: 0x8c438138  lw          $v1, -0x7EC8($v0)
    ctx->pc = 0x1fd4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B8138u));
    // 0x1fd4dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd4e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd4e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fd4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fd4e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fd4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fd4ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1fd4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1fd4f0: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FD4F0u;
    {
        const bool branch_taken_0x1fd4f0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1FD4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4F0u;
        // 0x1fd4f4: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4f0) {
            ctx->pc = 0x1FD528u;
            goto label_1fd528;
        }
    }
    ctx->pc = 0x1FD4F8u;
    // 0x1fd4f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd4fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fd4fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd500: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1fd500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd504: 0x0  nop
    ctx->pc = 0x1fd504u;
    // NOP
label_1fd508:
    // 0x1fd508: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fd508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fd50c: 0x50520004  beql        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD50Cu;
    {
        const bool branch_taken_0x1fd50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1fd50c) {
            ctx->pc = 0x1FD510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD50Cu;
            // 0x1fd510: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD520u;
            goto label_1fd520;
        }
    }
    ctx->pc = 0x1FD514u;
    // 0x1fd514: 0xc07f642  jal         func_1FD908
    ctx->pc = 0x1FD514u;
    SET_GPR_U32(ctx, 31, 0x1FD51Cu);
    ctx->pc = 0x1FD518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD514u;
    // 0x1fd518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD908u, 0x1FD514u, 0x1FD51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD51Cu;
label_1fd51c:
    // 0x1fd51c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1fd51cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1fd520:
    // 0x1fd520: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FD520u;
    {
        const bool branch_taken_0x1fd520 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD520u;
        // 0x1fd524: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd520) {
            ctx->pc = 0x1FD508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd508;
        }
    }
    ctx->pc = 0x1FD528u;
label_1fd528:
    // 0x1fd528: 0xc07ecb8  jal         func_1FB2E0
    ctx->pc = 0x1FD528u;
    SET_GPR_U32(ctx, 31, 0x1FD530u);
    ctx->pc = 0x1FB2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB2E0u, 0x1FD528u, 0x1FD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD530u;
label_1fd530:
    // 0x1fd530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd534: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd538: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fd538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd53c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fd53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fd540: 0x807f460  j           func_1FD180
    ctx->pc = 0x1FD540u;
    ctx->pc = 0x1FD544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD540u;
    // 0x1fd544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD180u;
    sub_001FD180_0x1fd180(rdram, ctx, runtime); return;
    ctx->pc = 0x1FD548u;
}
