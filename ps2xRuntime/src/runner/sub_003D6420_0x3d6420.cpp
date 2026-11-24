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

// Function: sub_003D6420
// Address: 0x3d6420 - 0x3d6490
void sub_003D6420_0x3d6420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6420_0x3d6420");
#endif

    switch (ctx->pc) {
        case 0x3d6430u: goto label_3d6430;
        default: break;
    }

    ctx->pc = 0x3d6420u;

    // 0x3d6420: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3d6420u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3d6424: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d6424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6428: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d6428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d642c: 0x0  nop
    ctx->pc = 0x3d642cu;
    // NOP
label_3d6430:
    // 0x3d6430: 0x90832b59  lbu         $v1, 0x2B59($a0)
    ctx->pc = 0x3d6430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11097)));
    // 0x3d6434: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D6434u;
    {
        const bool branch_taken_0x3d6434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6434) {
            ctx->pc = 0x3D6478u;
            goto label_3d6478;
        }
    }
    ctx->pc = 0x3D643Cu;
    // 0x3d643c: 0x90862b58  lbu         $a2, 0x2B58($a0)
    ctx->pc = 0x3d643cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11096)));
    // 0x3d6440: 0x14c50003  bne         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6440u;
    {
        const bool branch_taken_0x3d6440 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x3d6440) {
            ctx->pc = 0x3D6450u;
            goto label_3d6450;
        }
    }
    ctx->pc = 0x3D6448u;
    // 0x3d6448: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3D6448u;
    {
        const bool branch_taken_0x3d6448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6448u;
        // 0x3d644c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6448) {
            ctx->pc = 0x3D6488u;
            goto label_3d6488;
        }
    }
    ctx->pc = 0x3D6450u;
label_3d6450:
    // 0x3d6450: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6450u;
    {
        const bool branch_taken_0x3d6450 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6450) {
            ctx->pc = 0x3D6460u;
            goto label_3d6460;
        }
    }
    ctx->pc = 0x3D6458u;
    // 0x3d6458: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3D6458u;
    {
        const bool branch_taken_0x3d6458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6458u;
        // 0x3d645c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6458) {
            ctx->pc = 0x3D6488u;
            goto label_3d6488;
        }
    }
    ctx->pc = 0x3D6460u;
label_3d6460:
    // 0x3d6460: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3d6460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d6464: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x3d6464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3d6468: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6468u;
    {
        const bool branch_taken_0x3d6468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d6468) {
            ctx->pc = 0x3D6478u;
            goto label_3d6478;
        }
    }
    ctx->pc = 0x3D6470u;
    // 0x3d6470: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3d6470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6474: 0x0  nop
    ctx->pc = 0x3d6474u;
    // NOP
label_3d6478:
    // 0x3d6478: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3d6478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3d647c: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x3d647cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3d6480: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3D6480u;
    {
        const bool branch_taken_0x3d6480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6480u;
        // 0x3d6484: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6480) {
            ctx->pc = 0x3D6430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6430;
        }
    }
    ctx->pc = 0x3D6488u;
label_3d6488:
    // 0x3d6488: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6490u;
}
