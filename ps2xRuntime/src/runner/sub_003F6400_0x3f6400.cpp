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

// Function: sub_003F6400
// Address: 0x3f6400 - 0x3f6498
void sub_003F6400_0x3f6400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6400_0x3f6400");
#endif

    switch (ctx->pc) {
        case 0x3f6444u: goto label_3f6444;
        case 0x3f644cu: goto label_3f644c;
        case 0x3f6460u: goto label_3f6460;
        case 0x3f6468u: goto label_3f6468;
        case 0x3f647cu: goto label_3f647c;
        case 0x3f6484u: goto label_3f6484;
        default: break;
    }

    ctx->pc = 0x3f6400u;

    // 0x3f6400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f6400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f6404: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f6404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f6408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f6408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f640c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f640cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f6410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f6410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6414: 0x90840020  lbu         $a0, 0x20($a0)
    ctx->pc = 0x3f6414u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3f6418: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3F6418u;
    {
        const bool branch_taken_0x3f6418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6418u;
        // 0x3f641c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6418) {
            ctx->pc = 0x3F6470u;
            goto label_3f6470;
        }
    }
    ctx->pc = 0x3F6420u;
    // 0x3f6420: 0x1085000d  beq         $a0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x3F6420u;
    {
        const bool branch_taken_0x3f6420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x3f6420) {
            ctx->pc = 0x3F6458u;
            goto label_3f6458;
        }
    }
    ctx->pc = 0x3F6428u;
    // 0x3f6428: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F6428u;
    {
        const bool branch_taken_0x3f6428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6428) {
            ctx->pc = 0x3F6438u;
            goto label_3f6438;
        }
    }
    ctx->pc = 0x3F6430u;
    // 0x3f6430: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3F6430u;
    {
        const bool branch_taken_0x3f6430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6430) {
            ctx->pc = 0x3F6488u;
            goto label_3f6488;
        }
    }
    ctx->pc = 0x3F6438u;
label_3f6438:
    // 0x3f6438: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x3f6438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3f643c: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x3F643Cu;
    SET_GPR_U32(ctx, 31, 0x3F6444u);
    ctx->pc = 0x3F6440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F643Cu;
    // 0x3f6440: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x3F643Cu, 0x3F6444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6444u;
label_3f6444:
    // 0x3f6444: 0xc0fd938  jal         func_3F64E0
    ctx->pc = 0x3F6444u;
    SET_GPR_U32(ctx, 31, 0x3F644Cu);
    ctx->pc = 0x3F6448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6444u;
    // 0x3f6448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F64E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F64E0u, 0x3F6444u, 0x3F644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F644Cu;
label_3f644c:
    // 0x3f644c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3F644Cu;
    {
        const bool branch_taken_0x3f644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f644c) {
            ctx->pc = 0x3F6488u;
            goto label_3f6488;
        }
    }
    ctx->pc = 0x3F6454u;
    // 0x3f6454: 0x0  nop
    ctx->pc = 0x3f6454u;
    // NOP
label_3f6458:
    // 0x3f6458: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x3F6458u;
    SET_GPR_U32(ctx, 31, 0x3F6460u);
    ctx->pc = 0x3F645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6458u;
    // 0x3f645c: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x3F6458u, 0x3F6460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6460u;
label_3f6460:
    // 0x3f6460: 0xc0fd980  jal         func_3F6600
    ctx->pc = 0x3F6460u;
    SET_GPR_U32(ctx, 31, 0x3F6468u);
    ctx->pc = 0x3F6464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6460u;
    // 0x3f6464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6600u, 0x3F6460u, 0x3F6468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6468u;
label_3f6468:
    // 0x3f6468: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F6468u;
    {
        const bool branch_taken_0x3f6468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6468) {
            ctx->pc = 0x3F6488u;
            goto label_3f6488;
        }
    }
    ctx->pc = 0x3F6470u;
label_3f6470:
    // 0x3f6470: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x3f6470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3f6474: 0xc0b78bc  jal         func_2DE2F0
    ctx->pc = 0x3F6474u;
    SET_GPR_U32(ctx, 31, 0x3F647Cu);
    ctx->pc = 0x3F6478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6474u;
    // 0x3f6478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2F0u, 0x3F6474u, 0x3F647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F647Cu;
label_3f647c:
    // 0x3f647c: 0xc0fd9d8  jal         func_3F6760
    ctx->pc = 0x3F647Cu;
    SET_GPR_U32(ctx, 31, 0x3F6484u);
    ctx->pc = 0x3F6480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F647Cu;
    // 0x3f6480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6760u, 0x3F647Cu, 0x3F6484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6484u;
label_3f6484:
    // 0x3f6484: 0x0  nop
    ctx->pc = 0x3f6484u;
    // NOP
label_3f6488:
    // 0x3f6488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f6488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f648c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f648cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6490: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6490u;
        // 0x3f6494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6498u;
}
