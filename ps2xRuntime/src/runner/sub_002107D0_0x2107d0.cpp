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

// Function: sub_002107D0
// Address: 0x2107d0 - 0x210928
void sub_002107D0_0x2107d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002107D0_0x2107d0");
#endif

    switch (ctx->pc) {
        case 0x210810u: goto label_210810;
        case 0x210824u: goto label_210824;
        case 0x21084cu: goto label_21084c;
        case 0x210874u: goto label_210874;
        case 0x210880u: goto label_210880;
        case 0x2108c0u: goto label_2108c0;
        case 0x2108f4u: goto label_2108f4;
        default: break;
    }

    ctx->pc = 0x2107d0u;

    // 0x2107d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2107d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2107d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2107d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2107d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2107d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107dc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2107dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2107e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2107e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107e4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2107e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2107e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2107e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107ec: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2107ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2107f0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2107f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2107f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2107f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2107f8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2107f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2107fc: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2107fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x210800: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x210800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x210804: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x210804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x210808: 0xc084968  jal         func_2125A0
    ctx->pc = 0x210808u;
    SET_GPR_U32(ctx, 31, 0x210810u);
    ctx->pc = 0x21080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210808u;
    // 0x21080c: 0xe0b82d  daddu       $s7, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x210808u, 0x210810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210810u;
label_210810:
    // 0x210810: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x210810u;
    {
        const bool branch_taken_0x210810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210810u;
        // 0x210814: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210810) {
            ctx->pc = 0x210830u;
            goto label_210830;
        }
    }
    ctx->pc = 0x210818u;
    // 0x210818: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x210818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21081c: 0xc0848e0  jal         func_212380
    ctx->pc = 0x21081Cu;
    SET_GPR_U32(ctx, 31, 0x210824u);
    ctx->pc = 0x210820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21081Cu;
    // 0x210820: 0x34a50162  ori         $a1, $a1, 0x162 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)354);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x21081Cu, 0x210824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210824u;
label_210824:
    // 0x210824: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x210824u;
    {
        const bool branch_taken_0x210824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210824u;
        // 0x210828: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210824) {
            ctx->pc = 0x2108FCu;
            goto label_2108fc;
        }
    }
    ctx->pc = 0x21082Cu;
    // 0x21082c: 0x0  nop
    ctx->pc = 0x21082cu;
    // NOP
label_210830:
    // 0x210830: 0x8e160e70  lw          $s6, 0xE70($s0)
    ctx->pc = 0x210830u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3696)));
    // 0x210834: 0x26110d30  addiu       $s1, $s0, 0xD30
    ctx->pc = 0x210834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x210838: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x210838u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x21083c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21083cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210840: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x210840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210844: 0xc0881d8  jal         func_220760
    ctx->pc = 0x210844u;
    SET_GPR_U32(ctx, 31, 0x21084Cu);
    ctx->pc = 0x210848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210844u;
    // 0x210848: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220760u, 0x210844u, 0x21084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21084Cu;
label_21084c:
    // 0x21084c: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x21084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x210850: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x210850u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210854: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x210854u;
    {
        const bool branch_taken_0x210854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210854u;
        // 0x210858: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210854) {
            ctx->pc = 0x2108F8u;
            goto label_2108f8;
        }
    }
    ctx->pc = 0x21085Cu;
    // 0x21085c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x21085cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x210860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x210860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210864: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x210864u;
    {
        const bool branch_taken_0x210864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x210868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210864u;
        // 0x210868: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210864) {
            ctx->pc = 0x2108F8u;
            goto label_2108f8;
        }
    }
    ctx->pc = 0x21086Cu;
    // 0x21086c: 0xc084990  jal         func_212640
    ctx->pc = 0x21086Cu;
    SET_GPR_U32(ctx, 31, 0x210874u);
    ctx->pc = 0x210870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21086Cu;
    // 0x210870: 0x26150d3c  addiu       $s5, $s0, 0xD3C (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 3388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x21086Cu, 0x210874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210874u;
label_210874:
    // 0x210874: 0x8e300168  lw          $s0, 0x168($s1)
    ctx->pc = 0x210874u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x210878: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x210878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21087c: 0x0  nop
    ctx->pc = 0x21087cu;
    // NOP
label_210880:
    // 0x210880: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x210880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x210884: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x210884u;
    {
        const bool branch_taken_0x210884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210884u;
        // 0x210888: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210884) {
            ctx->pc = 0x2108D4u;
            goto label_2108d4;
        }
    }
    ctx->pc = 0x21088Cu;
    // 0x21088c: 0x2604001f  addiu       $a0, $s0, 0x1F
    ctx->pc = 0x21088cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x210890: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x210890u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x210894: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x210894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210898: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x210898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21089c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x21089cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2108a0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2108a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108a4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2108a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2108a8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2108a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2108ac: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2108acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2108b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2108b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2108b4: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2108b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2108b8: 0xc080568  jal         func_2015A0
    ctx->pc = 0x2108B8u;
    SET_GPR_U32(ctx, 31, 0x2108C0u);
    ctx->pc = 0x2108BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2108B8u;
    // 0x2108bc: 0x8c440160  lw          $a0, 0x160($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x2108B8u, 0x2108C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108C0u;
label_2108c0:
    // 0x2108c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2108c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108c4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2108c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2108c8: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2108c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2108cc: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2108CCu;
    {
        const bool branch_taken_0x2108cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2108cc) {
            ctx->pc = 0x2108D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2108CCu;
            // 0x2108d0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210880;
        }
    }
    ctx->pc = 0x2108D4u;
label_2108d4:
    // 0x2108d4: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x2108d4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
    // 0x2108d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2108d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2108dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2108dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2108e0: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x2108e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2108e4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x2108e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2108e8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2108e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2108ec: 0xc084996  jal         func_212658
    ctx->pc = 0x2108ECu;
    SET_GPR_U32(ctx, 31, 0x2108F4u);
    ctx->pc = 0x2108F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2108ECu;
    // 0x2108f0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x2108ECu, 0x2108F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108F4u;
label_2108f4:
    // 0x2108f4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2108f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2108f8:
    // 0x2108f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2108f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2108fc:
    // 0x2108fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2108fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x210900: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x210900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210904: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x210904u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x210908: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x210908u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21090c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21090cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x210910: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x210910u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210914: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x210914u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x210918: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x210918u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21091c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x21091cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x210920: 0x3e00008  jr          $ra
    ctx->pc = 0x210920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210920u;
        // 0x210924: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210928u;
}
