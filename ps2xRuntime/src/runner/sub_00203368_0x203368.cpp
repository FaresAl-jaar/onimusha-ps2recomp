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

// Function: sub_00203368
// Address: 0x203368 - 0x20370c
void sub_00203368_0x203368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203368_0x203368");
#endif

    switch (ctx->pc) {
        case 0x2033a8u: goto label_2033a8;
        case 0x2033c0u: goto label_2033c0;
        case 0x2033e8u: goto label_2033e8;
        case 0x203420u: goto label_203420;
        case 0x203438u: goto label_203438;
        case 0x203450u: goto label_203450;
        case 0x203464u: goto label_203464;
        case 0x203470u: goto label_203470;
        case 0x2034dcu: goto label_2034dc;
        case 0x203500u: goto label_203500;
        case 0x203508u: goto label_203508;
        case 0x203528u: goto label_203528;
        case 0x20353cu: goto label_20353c;
        case 0x203544u: goto label_203544;
        case 0x203564u: goto label_203564;
        case 0x2035b4u: goto label_2035b4;
        case 0x2035e0u: goto label_2035e0;
        case 0x2035ecu: goto label_2035ec;
        case 0x2035fcu: goto label_2035fc;
        case 0x20360cu: goto label_20360c;
        case 0x203614u: goto label_203614;
        case 0x203628u: goto label_203628;
        case 0x203630u: goto label_203630;
        case 0x203650u: goto label_203650;
        case 0x203674u: goto label_203674;
        case 0x20367cu: goto label_20367c;
        case 0x203688u: goto label_203688;
        case 0x2036a0u: goto label_2036a0;
        case 0x2036a8u: goto label_2036a8;
        case 0x2036b8u: goto label_2036b8;
        case 0x2036c0u: goto label_2036c0;
        case 0x2036c8u: goto label_2036c8;
        default: break;
    }

    ctx->pc = 0x203368u;

    // 0x203368: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x203368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20336c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x20336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x203370: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x203370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203374: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x203374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x203378: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x203378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x20337c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x20337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x203380: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x203380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x203384: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x203384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x203388: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x203388u;
    {
        const bool branch_taken_0x203388 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x20338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203388u;
        // 0x20338c: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203388) {
            ctx->pc = 0x2033A0u;
            goto label_2033a0;
        }
    }
    ctx->pc = 0x203390u;
    // 0x203390: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x203390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x203394: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x203394u;
    {
        const bool branch_taken_0x203394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203394u;
        // 0x203398: 0x24846798  addiu       $a0, $a0, 0x6798 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203394) {
            ctx->pc = 0x203448u;
            goto label_203448;
        }
    }
    ctx->pc = 0x20339Cu;
    // 0x20339c: 0x0  nop
    ctx->pc = 0x20339cu;
    // NOP
label_2033a0:
    // 0x2033a0: 0xc080dee  jal         func_2037B8
    ctx->pc = 0x2033A0u;
    SET_GPR_U32(ctx, 31, 0x2033A8u);
    ctx->pc = 0x2037B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037B8u, 0x2033A0u, 0x2033A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033A8u;
label_2033a8:
    // 0x2033a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2033a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2033ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2033acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033b0: 0x164300cd  bne         $s2, $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x2033B0u;
    {
        const bool branch_taken_0x2033b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x2033B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033B0u;
        // 0x2033b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033b0) {
            ctx->pc = 0x2036E8u;
            goto label_2036e8;
        }
    }
    ctx->pc = 0x2033B8u;
    // 0x2033b8: 0xc081544  jal         func_205510
    ctx->pc = 0x2033B8u;
    SET_GPR_U32(ctx, 31, 0x2033C0u);
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x2033B8u, 0x2033C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2033C0u;
label_2033c0:
    // 0x2033c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2033c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033c4: 0x2450006c  addiu       $s0, $v0, 0x6C
    ctx->pc = 0x2033c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x2033c8: 0x24530004  addiu       $s3, $v0, 0x4
    ctx->pc = 0x2033c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2033cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2033ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2033d0: 0x1452000f  bne         $v0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x2033D0u;
    {
        const bool branch_taken_0x2033d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2033D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033D0u;
        // 0x2033d4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033d0) {
            ctx->pc = 0x203410u;
            goto label_203410;
        }
    }
    ctx->pc = 0x2033D8u;
    // 0x2033d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2033d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2033dc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2033dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2033e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2033e4: 0x0  nop
    ctx->pc = 0x2033e4u;
    // NOP
label_2033e8:
    // 0x2033e8: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x2033e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2033ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2033ECu;
    {
        const bool branch_taken_0x2033ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2033ECu;
        // 0x2033f0: 0x24630304  addiu       $v1, $v1, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033ec) {
            ctx->pc = 0x20340Cu;
            goto label_20340c;
        }
    }
    ctx->pc = 0x2033F4u;
    // 0x2033f4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2033f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2033f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2033f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2033fc: 0x0  nop
    ctx->pc = 0x2033fcu;
    // NOP
    // 0x203400: 0x0  nop
    ctx->pc = 0x203400u;
    // NOP
    // 0x203404: 0x5045fff8  beql        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x203404u;
    {
        const bool branch_taken_0x203404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x203404) {
            ctx->pc = 0x203408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203404u;
            // 0x203408: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2033E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2033e8;
        }
    }
    ctx->pc = 0x20340Cu;
label_20340c:
    // 0x20340c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x20340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_203410:
    // 0x203410: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x203410u;
    {
        const bool branch_taken_0x203410 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x203410) {
            ctx->pc = 0x203414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203410u;
            // 0x203414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203430u;
            goto label_203430;
        }
    }
    ctx->pc = 0x203418u;
    // 0x203418: 0xc08168c  jal         func_205A30
    ctx->pc = 0x203418u;
    SET_GPR_U32(ctx, 31, 0x203420u);
    ctx->pc = 0x20341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203418u;
    // 0x20341c: 0x2404fff5  addiu       $a0, $zero, -0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x203418u, 0x203420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203420u;
label_203420:
    // 0x203420: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x203420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x203424: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x203424u;
    {
        const bool branch_taken_0x203424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203424u;
        // 0x203428: 0x248467c8  addiu       $a0, $a0, 0x67C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203424) {
            ctx->pc = 0x203448u;
            goto label_203448;
        }
    }
    ctx->pc = 0x20342Cu;
    // 0x20342c: 0x0  nop
    ctx->pc = 0x20342cu;
    // NOP
label_203430:
    // 0x203430: 0xc080dc4  jal         func_203710
    ctx->pc = 0x203430u;
    SET_GPR_U32(ctx, 31, 0x203438u);
    ctx->pc = 0x203434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203430u;
    // 0x203434: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203710u, 0x203430u, 0x203438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203438u;
label_203438:
    // 0x203438: 0x14550007  bne         $v0, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x203438u;
    {
        const bool branch_taken_0x203438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x20343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203438u;
        // 0x20343c: 0x24060304  addiu       $a2, $zero, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203438) {
            ctx->pc = 0x203458u;
            goto label_203458;
        }
    }
    ctx->pc = 0x203440u;
    // 0x203440: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x203440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x203444: 0x24846818  addiu       $a0, $a0, 0x6818
    ctx->pc = 0x203444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26648));
label_203448:
    // 0x203448: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x203448u;
    SET_GPR_U32(ctx, 31, 0x203450u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x203448u, 0x203450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203450u;
label_203450:
    // 0x203450: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x203450u;
    {
        const bool branch_taken_0x203450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203450u;
        // 0x203454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203450) {
            ctx->pc = 0x2036E8u;
            goto label_2036e8;
        }
    }
    ctx->pc = 0x203458u;
label_203458:
    // 0x203458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20345c: 0xc049590  jal         func_125640
    ctx->pc = 0x20345Cu;
    SET_GPR_U32(ctx, 31, 0x203464u);
    ctx->pc = 0x203460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20345Cu;
    // 0x203460: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x20345Cu, 0x203464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203464u;
label_203464:
    // 0x203464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203468: 0xc080dd8  jal         func_203760
    ctx->pc = 0x203468u;
    SET_GPR_U32(ctx, 31, 0x203470u);
    ctx->pc = 0x20346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203468u;
    // 0x20346c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203760u, 0x203468u, 0x203470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203470u;
label_203470:
    // 0x203470: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x203470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x203474: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x203474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x203478: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x203478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x20347c: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x20347cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x203480: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x203480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x203484: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x203484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x203488: 0x6a25001f  ldl         $a1, 0x1F($s1)
    ctx->pc = 0x203488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x20348c: 0x6e250018  ldr         $a1, 0x18($s1)
    ctx->pc = 0x20348cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x203490: 0xb202000f  sdl         $v0, 0xF($s0)
    ctx->pc = 0x203490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203494: 0xb6020008  sdr         $v0, 0x8($s0)
    ctx->pc = 0x203494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x203498: 0xb2030017  sdl         $v1, 0x17($s0)
    ctx->pc = 0x203498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20349c: 0xb6030010  sdr         $v1, 0x10($s0)
    ctx->pc = 0x20349cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2034a0: 0xb204001f  sdl         $a0, 0x1F($s0)
    ctx->pc = 0x2034a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2034a4: 0xb6040018  sdr         $a0, 0x18($s0)
    ctx->pc = 0x2034a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2034a8: 0xb2050027  sdl         $a1, 0x27($s0)
    ctx->pc = 0x2034a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2034ac: 0xb6050020  sdr         $a1, 0x20($s0)
    ctx->pc = 0x2034acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2034b0: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x2034b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2034b4: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x2034b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2034b8: 0x6a23002f  ldl         $v1, 0x2F($s1)
    ctx->pc = 0x2034b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2034bc: 0x6e230028  ldr         $v1, 0x28($s1)
    ctx->pc = 0x2034bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2034c0: 0xb202002f  sdl         $v0, 0x2F($s0)
    ctx->pc = 0x2034c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2034c4: 0xb6020028  sdr         $v0, 0x28($s0)
    ctx->pc = 0x2034c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2034c8: 0xb2030037  sdl         $v1, 0x37($s0)
    ctx->pc = 0x2034c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2034cc: 0xb6030030  sdr         $v1, 0x30($s0)
    ctx->pc = 0x2034ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2034d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2034d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034d4: 0xc080a02  jal         func_202808
    ctx->pc = 0x2034D4u;
    SET_GPR_U32(ctx, 31, 0x2034DCu);
    ctx->pc = 0x2034D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034D4u;
    // 0x2034d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202808u, 0x2034D4u, 0x2034DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2034DCu;
label_2034dc:
    // 0x2034dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2034dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2034e0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2034E0u;
    {
        const bool branch_taken_0x2034e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2034E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034E0u;
        // 0x2034e4: 0xae12003c  sw          $s2, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034e0) {
            ctx->pc = 0x2034F8u;
            goto label_2034f8;
        }
    }
    ctx->pc = 0x2034E8u;
    // 0x2034e8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2034e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2034ec: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2034ECu;
    {
        const bool branch_taken_0x2034ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2034ECu;
        // 0x2034f0: 0x24846858  addiu       $a0, $a0, 0x6858 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034ec) {
            ctx->pc = 0x203698u;
            goto label_203698;
        }
    }
    ctx->pc = 0x2034F4u;
    // 0x2034f4: 0x0  nop
    ctx->pc = 0x2034f4u;
    // NOP
label_2034f8:
    // 0x2034f8: 0xc081b22  jal         func_206C88
    ctx->pc = 0x2034F8u;
    SET_GPR_U32(ctx, 31, 0x203500u);
    ctx->pc = 0x2034FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2034F8u;
    // 0x2034fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206C88u, 0x2034F8u, 0x203500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203500u;
label_203500:
    // 0x203500: 0xc080bec  jal         func_202FB0
    ctx->pc = 0x203500u;
    SET_GPR_U32(ctx, 31, 0x203508u);
    ctx->pc = 0x203504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203500u;
    // 0x203504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202FB0u, 0x203500u, 0x203508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203508u;
label_203508:
    // 0x203508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x203508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20350c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20350cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203510: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x203510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x203514: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x203514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x203518: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x203518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x20351c: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x20351cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x203520: 0xc080810  jal         func_202040
    ctx->pc = 0x203520u;
    SET_GPR_U32(ctx, 31, 0x203528u);
    ctx->pc = 0x203524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203520u;
    // 0x203524: 0x27aa0014  addiu       $t2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202040u, 0x203520u, 0x203528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203528u;
label_203528:
    // 0x203528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20352c: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x20352cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x203530: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x203530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203534: 0xc080c56  jal         func_203158
    ctx->pc = 0x203534u;
    SET_GPR_U32(ctx, 31, 0x20353Cu);
    ctx->pc = 0x203538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203534u;
    // 0x203538: 0x8e670008  lw          $a3, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203158u, 0x203534u, 0x20353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20353Cu;
label_20353c:
    // 0x20353c: 0xc080cd0  jal         func_203340
    ctx->pc = 0x20353Cu;
    SET_GPR_U32(ctx, 31, 0x203544u);
    ctx->pc = 0x203540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20353Cu;
    // 0x203540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203340u, 0x20353Cu, 0x203544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203544u;
label_203544:
    // 0x203544: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203544u;
    {
        const bool branch_taken_0x203544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203544u;
        // 0x203548: 0xae0201c0  sw          $v0, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203544) {
            ctx->pc = 0x203558u;
            goto label_203558;
        }
    }
    ctx->pc = 0x20354Cu;
    // 0x20354c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x20354cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x203550: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x203550u;
    {
        const bool branch_taken_0x203550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203550u;
        // 0x203554: 0x24846880  addiu       $a0, $a0, 0x6880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203550) {
            ctx->pc = 0x203698u;
            goto label_203698;
        }
    }
    ctx->pc = 0x203558u;
label_203558:
    // 0x203558: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x203558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20355c: 0xc093fa6  jal         func_24FE98
    ctx->pc = 0x20355Cu;
    SET_GPR_U32(ctx, 31, 0x203564u);
    ctx->pc = 0x203560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20355Cu;
    // 0x203560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE98u, 0x20355Cu, 0x203564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203564u;
label_203564:
    // 0x203564: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x203564u;
    {
        const bool branch_taken_0x203564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203564u;
        // 0x203568: 0xae0201e0  sw          $v0, 0x1E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203564) {
            ctx->pc = 0x203578u;
            goto label_203578;
        }
    }
    ctx->pc = 0x20356Cu;
    // 0x20356c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x20356cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x203570: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x203570u;
    {
        const bool branch_taken_0x203570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203570u;
        // 0x203574: 0x248468a8  addiu       $a0, $a0, 0x68A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203570) {
            ctx->pc = 0x203698u;
            goto label_203698;
        }
    }
    ctx->pc = 0x203578u;
label_203578:
    // 0x203578: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x203578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20357c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x20357cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203580: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x203580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
    // 0x203584: 0x26130044  addiu       $s3, $s0, 0x44
    ctx->pc = 0x203584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x203588: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x203588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x20358c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20358cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203590: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x203590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x203594: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x203594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x203598: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x203598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x20359c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x20359cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035a0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2035a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2035a4: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x2035a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x2035a8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2035a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2035ac: 0xc087f7a  jal         func_21FDE8
    ctx->pc = 0x2035ACu;
    SET_GPR_U32(ctx, 31, 0x2035B4u);
    ctx->pc = 0x2035B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035ACu;
    // 0x2035b0: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FDE8u, 0x2035ACu, 0x2035B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035B4u;
label_2035b4:
    // 0x2035b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2035B4u;
    {
        const bool branch_taken_0x2035b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2035b4) {
            ctx->pc = 0x2035B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2035B4u;
            // 0x2035b8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2035BCu;
            goto label_2035bc;
        }
    }
    ctx->pc = 0x2035BCu;
label_2035bc:
    // 0x2035bc: 0xae14006c  sw          $s4, 0x6C($s0)
    ctx->pc = 0x2035bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 20));
    // 0x2035c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2035c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035c4: 0xa2000070  sb          $zero, 0x70($s0)
    ctx->pc = 0x2035c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x2035c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2035c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035cc: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x2035ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x2035d0: 0xa2000072  sb          $zero, 0x72($s0)
    ctx->pc = 0x2035d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x2035d4: 0xa2000073  sb          $zero, 0x73($s0)
    ctx->pc = 0x2035d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 0));
    // 0x2035d8: 0xc083156  jal         func_20C558
    ctx->pc = 0x2035D8u;
    SET_GPR_U32(ctx, 31, 0x2035E0u);
    ctx->pc = 0x2035DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035D8u;
    // 0x2035dc: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C558u, 0x2035D8u, 0x2035E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035E0u;
label_2035e0:
    // 0x2035e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2035e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035e4: 0xc08315a  jal         func_20C568
    ctx->pc = 0x2035E4u;
    SET_GPR_U32(ctx, 31, 0x2035ECu);
    ctx->pc = 0x2035E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035E4u;
    // 0x2035e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C568u, 0x2035E4u, 0x2035ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035ECu;
label_2035ec:
    // 0x2035ec: 0xae140054  sw          $s4, 0x54($s0)
    ctx->pc = 0x2035ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 20));
    // 0x2035f0: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x2035f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x2035f4: 0xc083270  jal         func_20C9C0
    ctx->pc = 0x2035F4u;
    SET_GPR_U32(ctx, 31, 0x2035FCu);
    ctx->pc = 0x2035F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2035F4u;
    // 0x2035f8: 0x8e0401c0  lw          $a0, 0x1C0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C9C0u, 0x2035F4u, 0x2035FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2035FCu;
label_2035fc:
    // 0x2035fc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2035FCu;
    {
        const bool branch_taken_0x2035fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2035FCu;
        // 0x203600: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035fc) {
            ctx->pc = 0x2036A0u;
            goto label_2036a0;
        }
    }
    ctx->pc = 0x203604u;
    // 0x203604: 0xc0819de  jal         func_206778
    ctx->pc = 0x203604u;
    SET_GPR_U32(ctx, 31, 0x20360Cu);
    ctx->pc = 0x203608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203604u;
    // 0x203608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206778u, 0x203604u, 0x20360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20360Cu;
label_20360c:
    // 0x20360c: 0xc092c8a  jal         func_24B228
    ctx->pc = 0x20360Cu;
    SET_GPR_U32(ctx, 31, 0x203614u);
    ctx->pc = 0x203610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20360Cu;
    // 0x203610: 0x8e0401c0  lw          $a0, 0x1C0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B228u, 0x20360Cu, 0x203614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203614u;
label_203614:
    // 0x203614: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x203614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x203618: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x203618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x20361c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20361cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203620: 0xc092cfa  jal         func_24B3E8
    ctx->pc = 0x203620u;
    SET_GPR_U32(ctx, 31, 0x203628u);
    ctx->pc = 0x203624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203620u;
    // 0x203624: 0x8e050040  lw          $a1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B3E8u, 0x203620u, 0x203628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203628u;
label_203628:
    // 0x203628: 0xc080e10  jal         func_203840
    ctx->pc = 0x203628u;
    SET_GPR_U32(ctx, 31, 0x203630u);
    ctx->pc = 0x20362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203628u;
    // 0x20362c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203840u, 0x203628u, 0x203630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203630u;
label_203630:
    // 0x203630: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x203630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x203634: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x203634u;
    {
        const bool branch_taken_0x203634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x203634) {
            ctx->pc = 0x2036A0u;
            goto label_2036a0;
        }
    }
    ctx->pc = 0x20363Cu;
    // 0x20363c: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x20363cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x203640: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x203640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x203644: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x203644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x203648: 0xc0821da  jal         func_208768
    ctx->pc = 0x203648u;
    SET_GPR_U32(ctx, 31, 0x203650u);
    ctx->pc = 0x20364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203648u;
    // 0x20364c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208768u, 0x203648u, 0x203650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203650u;
label_203650:
    // 0x203650: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x203650u;
    {
        const bool branch_taken_0x203650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203650) {
            ctx->pc = 0x203654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203650u;
            // 0x203654: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203668u;
            goto label_203668;
        }
    }
    ctx->pc = 0x203658u;
    // 0x203658: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x203658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20365c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20365Cu;
    {
        const bool branch_taken_0x20365c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20365Cu;
        // 0x203660: 0x248468d0  addiu       $a0, $a0, 0x68D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20365c) {
            ctx->pc = 0x203698u;
            goto label_203698;
        }
    }
    ctx->pc = 0x203664u;
    // 0x203664: 0x0  nop
    ctx->pc = 0x203664u;
    // NOP
label_203668:
    // 0x203668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20366c: 0xc0823ec  jal         func_208FB0
    ctx->pc = 0x20366Cu;
    SET_GPR_U32(ctx, 31, 0x203674u);
    ctx->pc = 0x203670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20366Cu;
    // 0x203670: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208FB0u, 0x20366Cu, 0x203674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203674u;
label_203674:
    // 0x203674: 0xc0824de  jal         func_209378
    ctx->pc = 0x203674u;
    SET_GPR_U32(ctx, 31, 0x20367Cu);
    ctx->pc = 0x203678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203674u;
    // 0x203678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209378u, 0x203674u, 0x20367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20367Cu;
label_20367c:
    // 0x20367c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20367cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203680: 0xc082502  jal         func_209408
    ctx->pc = 0x203680u;
    SET_GPR_U32(ctx, 31, 0x203688u);
    ctx->pc = 0x203684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203680u;
    // 0x203684: 0xae02017c  sw          $v0, 0x17C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209408u, 0x203680u, 0x203688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203688u;
label_203688:
    // 0x203688: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x203688u;
    {
        const bool branch_taken_0x203688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203688) {
            ctx->pc = 0x2036B0u;
            goto label_2036b0;
        }
    }
    ctx->pc = 0x203690u;
    // 0x203690: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x203690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x203694: 0x248468f0  addiu       $a0, $a0, 0x68F0
    ctx->pc = 0x203694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26864));
label_203698:
    // 0x203698: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x203698u;
    SET_GPR_U32(ctx, 31, 0x2036A0u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x203698u, 0x2036A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036A0u;
label_2036a0:
    // 0x2036a0: 0xc080e42  jal         func_203908
    ctx->pc = 0x2036A0u;
    SET_GPR_U32(ctx, 31, 0x2036A8u);
    ctx->pc = 0x2036A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036A0u;
    // 0x2036a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203908u, 0x2036A0u, 0x2036A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036A8u;
label_2036a8:
    // 0x2036a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2036A8u;
    {
        const bool branch_taken_0x2036a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2036A8u;
        // 0x2036ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2036a8) {
            ctx->pc = 0x2036E8u;
            goto label_2036e8;
        }
    }
    ctx->pc = 0x2036B0u;
label_2036b0:
    // 0x2036b0: 0xc08251a  jal         func_209468
    ctx->pc = 0x2036B0u;
    SET_GPR_U32(ctx, 31, 0x2036B8u);
    ctx->pc = 0x2036B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036B0u;
    // 0x2036b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209468u, 0x2036B0u, 0x2036B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036B8u;
label_2036b8:
    // 0x2036b8: 0xc08143e  jal         func_2050F8
    ctx->pc = 0x2036B8u;
    SET_GPR_U32(ctx, 31, 0x2036C0u);
    ctx->pc = 0x2036BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036B8u;
    // 0x2036bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2050F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2050F8u, 0x2036B8u, 0x2036C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036C0u;
label_2036c0:
    // 0x2036c0: 0xc081458  jal         func_205160
    ctx->pc = 0x2036C0u;
    SET_GPR_U32(ctx, 31, 0x2036C8u);
    ctx->pc = 0x2036C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2036C0u;
    // 0x2036c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205160u, 0x2036C0u, 0x2036C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2036C8u;
label_2036c8:
    // 0x2036c8: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x2036c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x2036cc: 0xae1502fc  sw          $s5, 0x2FC($s0)
    ctx->pc = 0x2036ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 21));
    // 0x2036d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2036d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2036d4: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x2036d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x2036d8: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x2036d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x2036dc: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x2036dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x2036e0: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x2036e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x2036e4: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x2036e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
label_2036e8:
    // 0x2036e8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2036e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2036ec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2036ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2036f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2036f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2036f4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2036f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2036f8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2036f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2036fc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2036fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x203700: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x203700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x203704: 0x3e00008  jr          $ra
    ctx->pc = 0x203704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203704u;
        // 0x203708: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20370Cu;
}
