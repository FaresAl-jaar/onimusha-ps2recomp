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

// Function: sub_00203840
// Address: 0x203840 - 0x203904
void sub_00203840_0x203840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203840_0x203840");
#endif

    switch (ctx->pc) {
        case 0x203868u: goto label_203868;
        case 0x203878u: goto label_203878;
        case 0x203894u: goto label_203894;
        case 0x2038a8u: goto label_2038a8;
        case 0x2038c0u: goto label_2038c0;
        case 0x2038c8u: goto label_2038c8;
        default: break;
    }

    ctx->pc = 0x203840u;

    // 0x203840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x203844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20384c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20384cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x203850: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x203850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x203854: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x203854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x203858: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x203858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20385c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x20385cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x203860: 0xc0821d8  jal         func_208760
    ctx->pc = 0x203860u;
    SET_GPR_U32(ctx, 31, 0x203868u);
    ctx->pc = 0x203864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203860u;
    // 0x203864: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208760u, 0x203860u, 0x203868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203868u;
label_203868:
    // 0x203868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20386c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20386cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203870: 0xc080f8e  jal         func_203E38
    ctx->pc = 0x203870u;
    SET_GPR_U32(ctx, 31, 0x203878u);
    ctx->pc = 0x203874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203870u;
    // 0x203874: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E38u, 0x203870u, 0x203878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203878u;
label_203878:
    // 0x203878: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x203878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20387c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20387Cu;
    {
        const bool branch_taken_0x20387c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20387Cu;
        // 0x203880: 0x248469a0  addiu       $a0, $a0, 0x69A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20387c) {
            ctx->pc = 0x2038B8u;
            goto label_2038b8;
        }
    }
    ctx->pc = 0x203884u;
    // 0x203884: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x203884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x203888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x203888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20388c: 0xc0824d4  jal         func_209350
    ctx->pc = 0x20388Cu;
    SET_GPR_U32(ctx, 31, 0x203894u);
    ctx->pc = 0x203890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20388Cu;
    // 0x203890: 0xae1200b0  sw          $s2, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209350u, 0x20388Cu, 0x203894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203894u;
label_203894:
    // 0x203894: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203898: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x203898u;
    {
        const bool branch_taken_0x203898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203898u;
        // 0x20389c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203898) {
            ctx->pc = 0x2038E0u;
            goto label_2038e0;
        }
    }
    ctx->pc = 0x2038A0u;
    // 0x2038a0: 0xc080f8e  jal         func_203E38
    ctx->pc = 0x2038A0u;
    SET_GPR_U32(ctx, 31, 0x2038A8u);
    ctx->pc = 0x2038A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038A0u;
    // 0x2038a4: 0x3c050002  lui         $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E38u, 0x2038A0u, 0x2038A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038A8u;
label_2038a8:
    // 0x2038a8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2038a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2038ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2038acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038b0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2038B0u;
    {
        const bool branch_taken_0x2038b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2038B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038B0u;
        // 0x2038b4: 0x248469c8  addiu       $a0, $a0, 0x69C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038b0) {
            ctx->pc = 0x2038D0u;
            goto label_2038d0;
        }
    }
    ctx->pc = 0x2038B8u;
label_2038b8:
    // 0x2038b8: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2038B8u;
    SET_GPR_U32(ctx, 31, 0x2038C0u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2038B8u, 0x2038C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038C0u;
label_2038c0:
    // 0x2038c0: 0xc080ff8  jal         func_203FE0
    ctx->pc = 0x2038C0u;
    SET_GPR_U32(ctx, 31, 0x2038C8u);
    ctx->pc = 0x2038C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2038C0u;
    // 0x2038c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE0u, 0x2038C0u, 0x2038C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2038C8u;
label_2038c8:
    // 0x2038c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2038C8u;
    {
        const bool branch_taken_0x2038c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038C8u;
        // 0x2038cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038c8) {
            ctx->pc = 0x2038ECu;
            goto label_2038ec;
        }
    }
    ctx->pc = 0x2038D0u;
label_2038d0:
    // 0x2038d0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2038d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2038d4: 0xae030180  sw          $v1, 0x180($s0)
    ctx->pc = 0x2038d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 3));
    // 0x2038d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2038D8u;
    {
        const bool branch_taken_0x2038d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038D8u;
        // 0x2038dc: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038d8) {
            ctx->pc = 0x2038E8u;
            goto label_2038e8;
        }
    }
    ctx->pc = 0x2038E0u;
label_2038e0:
    // 0x2038e0: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x2038e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x2038e4: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x2038e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
label_2038e8:
    // 0x2038e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2038e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2038ec:
    // 0x2038ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2038ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2038f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2038f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2038f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2038f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2038f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2038f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2038fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2038FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2038FCu;
        // 0x203900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2038FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203904u;
}
