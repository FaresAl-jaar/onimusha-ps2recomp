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

// Function: sub_0010A848
// Address: 0x10a848 - 0x10a99c
void sub_0010A848_0x10a848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A848_0x10a848");
#endif

    switch (ctx->pc) {
        case 0x10a890u: goto label_10a890;
        case 0x10a8a4u: goto label_10a8a4;
        case 0x10a8b0u: goto label_10a8b0;
        case 0x10a8b8u: goto label_10a8b8;
        case 0x10a8c4u: goto label_10a8c4;
        case 0x10a8e0u: goto label_10a8e0;
        case 0x10a924u: goto label_10a924;
        case 0x10a934u: goto label_10a934;
        case 0x10a93cu: goto label_10a93c;
        case 0x10a944u: goto label_10a944;
        case 0x10a95cu: goto label_10a95c;
        default: break;
    }

    ctx->pc = 0x10a848u;

    // 0x10a848: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10a848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10a84c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x10a84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x10a850: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x10a850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x10a854: 0x241701b3  addiu       $s7, $zero, 0x1B3
    ctx->pc = 0x10a854u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x10a858: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x10a858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x10a85c: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x10a85cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10a860: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x10a860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x10a864: 0x24150100  addiu       $s5, $zero, 0x100
    ctx->pc = 0x10a864u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10a868: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x10a868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x10a86c: 0x241401b7  addiu       $s4, $zero, 0x1B7
    ctx->pc = 0x10a86cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x10a870: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10a870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x10a874: 0x241301b8  addiu       $s3, $zero, 0x1B8
    ctx->pc = 0x10a874u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x10a878: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10a878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10a87c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x10a87cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a880: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10a880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10a884: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a888: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10a888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10a88c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_10a890:
    // 0x10a890: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x10A890u;
    {
        const bool branch_taken_0x10a890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A890u;
        // 0x10a894: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a890) {
            ctx->pc = 0x10A970u;
            goto label_10a970;
        }
    }
    ctx->pc = 0x10A898u;
    // 0x10a898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a89c: 0xc042a6a  jal         func_10A9A8
    ctx->pc = 0x10A89Cu;
    SET_GPR_U32(ctx, 31, 0x10A8A4u);
    ctx->pc = 0x10A8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A89Cu;
    // 0x10a8a0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A9A8u, 0x10A89Cu, 0x10A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8A4u;
label_10a8a4:
    // 0x10a8a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10A8A4u;
    {
        const bool branch_taken_0x10a8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8A4u;
        // 0x10a8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8a4) {
            ctx->pc = 0x10A8BCu;
            goto label_10a8bc;
        }
    }
    ctx->pc = 0x10A8ACu;
    // 0x10a8ac: 0x0  nop
    ctx->pc = 0x10a8acu;
    // NOP
label_10a8b0:
    // 0x10a8b0: 0xc042a10  jal         func_10A840
    ctx->pc = 0x10A8B0u;
    SET_GPR_U32(ctx, 31, 0x10A8B8u);
    ctx->pc = 0x10A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8B0u;
    // 0x10a8b4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A840u, 0x10A8B0u, 0x10A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8B8u;
label_10a8b8:
    // 0x10a8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a8bc:
    // 0x10a8bc: 0xc04216c  jal         func_1085B0
    ctx->pc = 0x10A8BCu;
    SET_GPR_U32(ctx, 31, 0x10A8C4u);
    ctx->pc = 0x10A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8BCu;
    // 0x10a8c0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085B0u, 0x10A8BCu, 0x10A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8C4u;
label_10a8c4:
    // 0x10a8c4: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A8C4u;
    {
        const bool branch_taken_0x10a8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x10A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8C4u;
        // 0x10a8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8c4) {
            ctx->pc = 0x10A8D8u;
            goto label_10a8d8;
        }
    }
    ctx->pc = 0x10A8CCu;
    // 0x10a8cc: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x10a8d0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10A8D0u;
    {
        const bool branch_taken_0x10a8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a8d0) {
            ctx->pc = 0x10A8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a8b0;
        }
    }
    ctx->pc = 0x10A8D8u;
label_10a8d8:
    // 0x10a8d8: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A8D8u;
    SET_GPR_U32(ctx, 31, 0x10A8E0u);
    ctx->pc = 0x10A8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8D8u;
    // 0x10a8dc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A8D8u, 0x10A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8E0u;
label_10a8e0:
    // 0x10a8e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10a8e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a8e4: 0x1077000d  beq         $v1, $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x10A8E4u;
    {
        const bool branch_taken_0x10a8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x10A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8E4u;
        // 0x10a8e8: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8e4) {
            ctx->pc = 0x10A91Cu;
            goto label_10a91c;
        }
    }
    ctx->pc = 0x10A8ECu;
    // 0x10a8ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A8ECu;
    {
        const bool branch_taken_0x10a8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a8ec) {
            ctx->pc = 0x10A904u;
            goto label_10a904;
        }
    }
    ctx->pc = 0x10A8F4u;
    // 0x10a8f4: 0x10750011  beq         $v1, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x10A8F4u;
    {
        const bool branch_taken_0x10a8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x10a8f4) {
            ctx->pc = 0x10A93Cu;
            goto label_10a93c;
        }
    }
    ctx->pc = 0x10A8FCu;
    // 0x10a8fc: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x10A8FCu;
    {
        const bool branch_taken_0x10a8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8FCu;
        // 0x10a900: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8fc) {
            ctx->pc = 0x10A890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a890;
        }
    }
    ctx->pc = 0x10A904u;
label_10a904:
    // 0x10a904: 0x1074001a  beq         $v1, $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x10A904u;
    {
        const bool branch_taken_0x10a904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x10A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A904u;
        // 0x10a908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a904) {
            ctx->pc = 0x10A970u;
            goto label_10a970;
        }
    }
    ctx->pc = 0x10A90Cu;
    // 0x10a90c: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A90Cu;
    {
        const bool branch_taken_0x10a90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x10a90c) {
            ctx->pc = 0x10A92Cu;
            goto label_10a92c;
        }
    }
    ctx->pc = 0x10A914u;
    // 0x10a914: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x10A914u;
    {
        const bool branch_taken_0x10a914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A914u;
        // 0x10a918: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a914) {
            ctx->pc = 0x10A890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a890;
        }
    }
    ctx->pc = 0x10A91Cu;
label_10a91c:
    // 0x10a91c: 0xc042754  jal         func_109D50
    ctx->pc = 0x10A91Cu;
    SET_GPR_U32(ctx, 31, 0x10A924u);
    ctx->pc = 0x10A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A91Cu;
    // 0x10a920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109D50u, 0x10A91Cu, 0x10A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A924u;
label_10a924:
    // 0x10a924: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x10A924u;
    {
        const bool branch_taken_0x10a924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A924u;
        // 0x10a928: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a924) {
            ctx->pc = 0x10A890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a890;
        }
    }
    ctx->pc = 0x10A92Cu;
label_10a92c:
    // 0x10a92c: 0xc042800  jal         func_10A000
    ctx->pc = 0x10A92Cu;
    SET_GPR_U32(ctx, 31, 0x10A934u);
    ctx->pc = 0x10A930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A92Cu;
    // 0x10a930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A000u, 0x10A92Cu, 0x10A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A934u;
label_10a934:
    // 0x10a934: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x10A934u;
    {
        const bool branch_taken_0x10a934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A934u;
        // 0x10a938: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a934) {
            ctx->pc = 0x10A890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a890;
        }
    }
    ctx->pc = 0x10A93Cu;
label_10a93c:
    // 0x10a93c: 0xc042828  jal         func_10A0A0
    ctx->pc = 0x10A93Cu;
    SET_GPR_U32(ctx, 31, 0x10A944u);
    ctx->pc = 0x10A940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A93Cu;
    // 0x10a940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A0A0u, 0x10A93Cu, 0x10A944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A944u;
label_10a944:
    // 0x10a944: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10a944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10a948: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10a948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a94c: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x10a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x10a950: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10a950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10a954: 0xc042ee0  jal         func_10BB80
    ctx->pc = 0x10A954u;
    SET_GPR_U32(ctx, 31, 0x10A95Cu);
    ctx->pc = 0x10A958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A954u;
    // 0x10a958: 0xffb20008  sd          $s2, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB80u, 0x10A954u, 0x10A95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A95Cu;
label_10a95c:
    // 0x10a95c: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x10a95cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a960: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x10a960u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a964: 0xfe020840  sd          $v0, 0x840($s0)
    ctx->pc = 0x10a964u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2112), GPR_U64(ctx, 2));
    // 0x10a968: 0xfe030838  sd          $v1, 0x838($s0)
    ctx->pc = 0x10a968u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2104), GPR_U64(ctx, 3));
    // 0x10a96c: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x10a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_10a970:
    // 0x10a970: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10a970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10a974: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x10a974u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10a978: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x10a978u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10a97c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x10a97cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10a980: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x10a980u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a984: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x10a984u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a988: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10a988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a98c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10a98cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a990: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10a990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a994: 0x3e00008  jr          $ra
    ctx->pc = 0x10A994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A994u;
        // 0x10a998: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A99Cu;
}
