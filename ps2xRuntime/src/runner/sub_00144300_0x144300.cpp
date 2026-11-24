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

// Function: sub_00144300
// Address: 0x144300 - 0x14437c
void sub_00144300_0x144300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144300_0x144300");
#endif

    switch (ctx->pc) {
        case 0x14431cu: goto label_14431c;
        case 0x14432cu: goto label_14432c;
        case 0x14433cu: goto label_14433c;
        case 0x14434cu: goto label_14434c;
        case 0x14435cu: goto label_14435c;
        case 0x14436cu: goto label_14436c;
        default: break;
    }

    ctx->pc = 0x144300u;

    // 0x144300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x144304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x144308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14430c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14430cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144310: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x144310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x144314: 0xc0514cc  jal         func_145330
    ctx->pc = 0x144314u;
    SET_GPR_U32(ctx, 31, 0x14431Cu);
    ctx->pc = 0x144318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144314u;
    // 0x144318: 0x2606001c  addiu       $a2, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145330u, 0x144314u, 0x14431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14431Cu;
label_14431c:
    // 0x14431c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144320: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x144320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x144324: 0xc0514cc  jal         func_145330
    ctx->pc = 0x144324u;
    SET_GPR_U32(ctx, 31, 0x14432Cu);
    ctx->pc = 0x144328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144324u;
    // 0x144328: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145330u, 0x144324u, 0x14432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14432Cu;
label_14432c:
    // 0x14432c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14432cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144330: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x144330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x144334: 0xc0514cc  jal         func_145330
    ctx->pc = 0x144334u;
    SET_GPR_U32(ctx, 31, 0x14433Cu);
    ctx->pc = 0x144338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144334u;
    // 0x144338: 0x26060024  addiu       $a2, $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145330u, 0x144334u, 0x14433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14433Cu;
label_14433c:
    // 0x14433c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14433cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144340: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x144340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x144344: 0xc0514cc  jal         func_145330
    ctx->pc = 0x144344u;
    SET_GPR_U32(ctx, 31, 0x14434Cu);
    ctx->pc = 0x144348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144344u;
    // 0x144348: 0x26060028  addiu       $a2, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145330u, 0x144344u, 0x14434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14434Cu;
label_14434c:
    // 0x14434c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14434cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144350: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x144350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x144354: 0xc0514cc  jal         func_145330
    ctx->pc = 0x144354u;
    SET_GPR_U32(ctx, 31, 0x14435Cu);
    ctx->pc = 0x144358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144354u;
    // 0x144358: 0x2606002c  addiu       $a2, $s0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145330u, 0x144354u, 0x14435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14435Cu;
label_14435c:
    // 0x14435c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14435cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144360: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x144360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x144364: 0xc0514cc  jal         func_145330
    ctx->pc = 0x144364u;
    SET_GPR_U32(ctx, 31, 0x14436Cu);
    ctx->pc = 0x144368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144364u;
    // 0x144368: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145330u, 0x144364u, 0x14436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14436Cu;
label_14436c:
    // 0x14436c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14436cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144374: 0x3e00008  jr          $ra
    ctx->pc = 0x144374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144374u;
        // 0x144378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14437Cu;
}
