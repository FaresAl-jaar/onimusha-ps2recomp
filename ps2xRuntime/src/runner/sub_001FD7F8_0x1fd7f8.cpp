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

// Function: sub_001FD7F8
// Address: 0x1fd7f8 - 0x1fd898
void sub_001FD7F8_0x1fd7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD7F8_0x1fd7f8");
#endif

    switch (ctx->pc) {
        case 0x1fd81cu: goto label_1fd81c;
        case 0x1fd828u: goto label_1fd828;
        case 0x1fd834u: goto label_1fd834;
        case 0x1fd83cu: goto label_1fd83c;
        case 0x1fd844u: goto label_1fd844;
        case 0x1fd84cu: goto label_1fd84c;
        case 0x1fd854u: goto label_1fd854;
        case 0x1fd85cu: goto label_1fd85c;
        default: break;
    }

    ctx->pc = 0x1fd7f8u;

    // 0x1fd7f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd7fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd808: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd80c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1fd80cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd810: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fd814: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x1FD814u;
    SET_GPR_U32(ctx, 31, 0x1FD81Cu);
    ctx->pc = 0x1FD818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD814u;
    // 0x1fd818: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB210u, 0x1FD814u, 0x1FD81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD81Cu;
label_1fd81c:
    // 0x1fd81c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1fd81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1fd820: 0xc07f558  jal         func_1FD560
    ctx->pc = 0x1FD820u;
    SET_GPR_U32(ctx, 31, 0x1FD828u);
    ctx->pc = 0x1FD824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD820u;
    // 0x1fd824: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD560u, 0x1FD820u, 0x1FD828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD828u;
label_1fd828:
    // 0x1fd828: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x1fd828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x1fd82c: 0xc07f626  jal         func_1FD898
    ctx->pc = 0x1FD82Cu;
    SET_GPR_U32(ctx, 31, 0x1FD834u);
    ctx->pc = 0x1FD830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD82Cu;
    // 0x1fd830: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD898u, 0x1FD82Cu, 0x1FD834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD834u;
label_1fd834:
    // 0x1fd834: 0xc07f62c  jal         func_1FD8B0
    ctx->pc = 0x1FD834u;
    SET_GPR_U32(ctx, 31, 0x1FD83Cu);
    ctx->pc = 0x1FD838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD834u;
    // 0x1fd838: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8B0u, 0x1FD834u, 0x1FD83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD83Cu;
label_1fd83c:
    // 0x1fd83c: 0xc07f62c  jal         func_1FD8B0
    ctx->pc = 0x1FD83Cu;
    SET_GPR_U32(ctx, 31, 0x1FD844u);
    ctx->pc = 0x1FD840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD83Cu;
    // 0x1fd840: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8B0u, 0x1FD83Cu, 0x1FD844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD844u;
label_1fd844:
    // 0x1fd844: 0xc07f62c  jal         func_1FD8B0
    ctx->pc = 0x1FD844u;
    SET_GPR_U32(ctx, 31, 0x1FD84Cu);
    ctx->pc = 0x1FD848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD844u;
    // 0x1fd848: 0x26040068  addiu       $a0, $s0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8B0u, 0x1FD844u, 0x1FD84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD84Cu;
label_1fd84c:
    // 0x1fd84c: 0xc07f62c  jal         func_1FD8B0
    ctx->pc = 0x1FD84Cu;
    SET_GPR_U32(ctx, 31, 0x1FD854u);
    ctx->pc = 0x1FD850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD84Cu;
    // 0x1fd850: 0x26040088  addiu       $a0, $s0, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8B0u, 0x1FD84Cu, 0x1FD854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD854u;
label_1fd854:
    // 0x1fd854: 0xc07f636  jal         func_1FD8D8
    ctx->pc = 0x1FD854u;
    SET_GPR_U32(ctx, 31, 0x1FD85Cu);
    ctx->pc = 0x1FD858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD854u;
    // 0x1fd858: 0x260400a8  addiu       $a0, $s0, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8D8u, 0x1FD854u, 0x1FD85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD85Cu;
label_1fd85c:
    // 0x1fd85c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1fd85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1fd860: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fd860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1fd864: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1fd864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1fd868: 0x2442b4d8  addiu       $v0, $v0, -0x4B28
    ctx->pc = 0x1fd868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948056));
    // 0x1fd86c: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x1fd86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x1fd870: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x1fd870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x1fd874: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fd874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd878: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1fd878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1fd87c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1fd87cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1fd880: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1fd880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1fd884: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd88c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd890: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD890u;
        // 0x1fd894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD898u;
}
