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

// Function: sub_00201338
// Address: 0x201338 - 0x201400
void sub_00201338_0x201338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201338_0x201338");
#endif

    switch (ctx->pc) {
        case 0x20135cu: goto label_20135c;
        case 0x201370u: goto label_201370;
        case 0x20138cu: goto label_20138c;
        case 0x2013a8u: goto label_2013a8;
        case 0x2013b4u: goto label_2013b4;
        case 0x2013ccu: goto label_2013cc;
        case 0x2013d4u: goto label_2013d4;
        default: break;
    }

    ctx->pc = 0x201338u;

    // 0x201338: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20133c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20133cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x201340: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x201340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201344: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x201344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x201348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20134c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20134cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x201350: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x201350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x201354: 0xc07d380  jal         func_1F4E00
    ctx->pc = 0x201354u;
    SET_GPR_U32(ctx, 31, 0x20135Cu);
    ctx->pc = 0x201358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201354u;
    // 0x201358: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E00u, 0x201354u, 0x20135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20135Cu;
label_20135c:
    // 0x20135c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20135Cu;
    {
        const bool branch_taken_0x20135c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20135Cu;
        // 0x201360: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20135c) {
            ctx->pc = 0x2013E0u;
            goto label_2013e0;
        }
    }
    ctx->pc = 0x201364u;
    // 0x201364: 0x263003bc  addiu       $s0, $s1, 0x3BC
    ctx->pc = 0x201364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 956));
    // 0x201368: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x201368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20136c: 0x0  nop
    ctx->pc = 0x20136cu;
    // NOP
label_201370:
    // 0x201370: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x201370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201374: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x201374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x201378: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x201378u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20137c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x20137cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x201380: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x201380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x201384: 0xc07d402  jal         func_1F5008
    ctx->pc = 0x201384u;
    SET_GPR_U32(ctx, 31, 0x20138Cu);
    ctx->pc = 0x201388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201384u;
    // 0x201388: 0x8e2403b4  lw          $a0, 0x3B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5008u, 0x201384u, 0x20138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20138Cu;
label_20138c:
    // 0x20138c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x20138cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x201390: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x201390u;
    {
        const bool branch_taken_0x201390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x201390) {
            ctx->pc = 0x201394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201390u;
            // 0x201394: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201370;
        }
    }
    ctx->pc = 0x201398u;
    // 0x201398: 0x8e2403b4  lw          $a0, 0x3B4($s1)
    ctx->pc = 0x201398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 948)));
    // 0x20139c: 0x8e2503ec  lw          $a1, 0x3EC($s1)
    ctx->pc = 0x20139cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x2013a0: 0xc07d40c  jal         func_1F5030
    ctx->pc = 0x2013A0u;
    SET_GPR_U32(ctx, 31, 0x2013A8u);
    ctx->pc = 0x2013A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2013A0u;
    // 0x2013a4: 0x8e2603f0  lw          $a2, 0x3F0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1008)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5030u, 0x2013A0u, 0x2013A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013A8u;
label_2013a8:
    // 0x2013a8: 0x8e2403b4  lw          $a0, 0x3B4($s1)
    ctx->pc = 0x2013a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 948)));
    // 0x2013ac: 0xc07d420  jal         func_1F5080
    ctx->pc = 0x2013ACu;
    SET_GPR_U32(ctx, 31, 0x2013B4u);
    ctx->pc = 0x2013B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2013ACu;
    // 0x2013b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5080u, 0x2013ACu, 0x2013B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013B4u;
label_2013b4:
    // 0x2013b4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2013B4u;
    {
        const bool branch_taken_0x2013b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2013B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013B4u;
        // 0x2013b8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013b4) {
            ctx->pc = 0x2013E4u;
            goto label_2013e4;
        }
    }
    ctx->pc = 0x2013BCu;
    // 0x2013bc: 0x8e2403b4  lw          $a0, 0x3B4($s1)
    ctx->pc = 0x2013bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 948)));
    // 0x2013c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2013c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2013c4: 0xc07d416  jal         func_1F5058
    ctx->pc = 0x2013C4u;
    SET_GPR_U32(ctx, 31, 0x2013CCu);
    ctx->pc = 0x2013C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2013C4u;
    // 0x2013c8: 0x262603f4  addiu       $a2, $s1, 0x3F4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1012));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5058u, 0x2013C4u, 0x2013CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013CCu;
label_2013cc:
    // 0x2013cc: 0xc080500  jal         func_201400
    ctx->pc = 0x2013CCu;
    SET_GPR_U32(ctx, 31, 0x2013D4u);
    ctx->pc = 0x2013D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2013CCu;
    // 0x2013d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201400u, 0x2013CCu, 0x2013D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2013D4u;
label_2013d4:
    // 0x2013d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2013D4u;
    {
        const bool branch_taken_0x2013d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013D4u;
        // 0x2013d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013d4) {
            ctx->pc = 0x2013E4u;
            goto label_2013e4;
        }
    }
    ctx->pc = 0x2013DCu;
    // 0x2013dc: 0x0  nop
    ctx->pc = 0x2013dcu;
    // NOP
label_2013e0:
    // 0x2013e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2013e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2013e4:
    // 0x2013e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2013e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2013e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2013e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2013ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2013ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2013f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2013f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2013f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2013f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2013f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2013F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2013FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013F8u;
        // 0x2013fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2013F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201400u;
}
