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

// Function: sub_002026A0
// Address: 0x2026a0 - 0x202804
void sub_002026A0_0x2026a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002026A0_0x2026a0");
#endif

    switch (ctx->pc) {
        case 0x2026e4u: goto label_2026e4;
        case 0x202768u: goto label_202768;
        case 0x2027b8u: goto label_2027b8;
        case 0x2027c4u: goto label_2027c4;
        default: break;
    }

    ctx->pc = 0x2026a0u;

    // 0x2026a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2026a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2026a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2026a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2026a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2026a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026ac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2026acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2026b0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2026b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026b4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2026b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2026b8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2026b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2026bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2026c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2026c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2026c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2026c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2026c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2026c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2026cc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2026ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2026d0: 0x8cb10008  lw          $s1, 0x8($a1)
    ctx->pc = 0x2026d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2026d4: 0x8cb0000c  lw          $s0, 0xC($a1)
    ctx->pc = 0x2026d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2026d8: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x2026d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2026dc: 0xc08089e  jal         func_202278
    ctx->pc = 0x2026DCu;
    SET_GPR_U32(ctx, 31, 0x2026E4u);
    ctx->pc = 0x2026E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026DCu;
    // 0x2026e0: 0x8cb30010  lw          $s3, 0x10($a1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202278u, 0x2026DCu, 0x2026E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026E4u;
label_2026e4:
    // 0x2026e4: 0x2626000f  addiu       $a2, $s1, 0xF
    ctx->pc = 0x2026e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x2026e8: 0x2a240000  slti        $a0, $s1, 0x0
    ctx->pc = 0x2026e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2026ec: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x2026ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2026f0: 0x2605000f  addiu       $a1, $s0, 0xF
    ctx->pc = 0x2026f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x2026f4: 0xc4880b  movn        $s1, $a2, $a0
    ctx->pc = 0x2026f4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
    // 0x2026f8: 0xa3800b  movn        $s0, $a1, $v1
    ctx->pc = 0x2026f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x2026fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2026fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202700: 0x118903  sra         $s1, $s1, 4
    ctx->pc = 0x202700u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 4));
    // 0x202704: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x202704u;
    {
        const bool branch_taken_0x202704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x202708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202704u;
        // 0x202708: 0x101903  sra         $v1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202704) {
            ctx->pc = 0x202718u;
            goto label_202718;
        }
    }
    ctx->pc = 0x20270Cu;
    // 0x20270c: 0x2231018  mult        $v0, $s1, $v1
    ctx->pc = 0x20270cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x202710: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x202710u;
    {
        const bool branch_taken_0x202710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202710u;
        // 0x202714: 0x21280  sll         $v0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202710) {
            ctx->pc = 0x202728u;
            goto label_202728;
        }
    }
    ctx->pc = 0x202718u;
label_202718:
    // 0x202718: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x202718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20271c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20271cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x202720: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x202720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202724: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x202724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_202728:
    // 0x202728: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x202728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x20272c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x20272cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x202730: 0x8c4386d0  lw          $v1, -0x7930($v0)
    ctx->pc = 0x202730u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B86D0u));
    // 0x202734: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x202734u;
    {
        const bool branch_taken_0x202734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202734u;
        // 0x202738: 0x26620002  addiu       $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202734) {
            ctx->pc = 0x2027A0u;
            goto label_2027a0;
        }
    }
    ctx->pc = 0x20273Cu;
    // 0x20273c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20273cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x202740: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x202740u;
    {
        const bool branch_taken_0x202740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202740) {
            ctx->pc = 0x202744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202740u;
            // 0x202744: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2027D8u;
            goto label_2027d8;
        }
    }
    ctx->pc = 0x202748u;
    // 0x202748: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x202748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x20274c: 0x8c6286d4  lw          $v0, -0x792C($v1)
    ctx->pc = 0x20274cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B86D4u));
    // 0x202750: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x202750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x202754: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x202754u;
    {
        const bool branch_taken_0x202754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202754u;
        // 0x202758: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202754) {
            ctx->pc = 0x202788u;
            goto label_202788;
        }
    }
    ctx->pc = 0x20275Cu;
    // 0x20275c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20275Cu;
    {
        const bool branch_taken_0x20275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20275Cu;
        // 0x202760: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20275c) {
            ctx->pc = 0x2027D8u;
            goto label_2027d8;
        }
    }
    ctx->pc = 0x202764u;
    // 0x202764: 0x0  nop
    ctx->pc = 0x202764u;
    // NOP
label_202768:
    // 0x202768: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x202768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20276c: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x20276cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x202770: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x202770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x202774: 0x8c847810  lw          $a0, 0x7810($a0)
    ctx->pc = 0x202774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30736)));
    // 0x202778: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x202778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x20277c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20277cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202780: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x202780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x202784: 0x64a00a  movz        $s4, $v1, $a0
    ctx->pc = 0x202784u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_202788:
    // 0x202788: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x202788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x20278c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x20278Cu;
    {
        const bool branch_taken_0x20278c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20278c) {
            ctx->pc = 0x202790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20278Cu;
            // 0x202790: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202768;
        }
    }
    ctx->pc = 0x202794u;
    // 0x202794: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x202794u;
    {
        const bool branch_taken_0x202794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202794u;
        // 0x202798: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202794) {
            ctx->pc = 0x2027DCu;
            goto label_2027dc;
        }
    }
    ctx->pc = 0x20279Cu;
    // 0x20279c: 0x0  nop
    ctx->pc = 0x20279cu;
    // NOP
label_2027a0:
    // 0x2027a0: 0x1a60000e  blez        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x2027A0u;
    {
        const bool branch_taken_0x2027a0 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x2027A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027A0u;
        // 0x2027a4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027a0) {
            ctx->pc = 0x2027DCu;
            goto label_2027dc;
        }
    }
    ctx->pc = 0x2027A8u;
    // 0x2027a8: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2027a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027ac: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2027acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2027b0: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x2027b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027b4: 0x0  nop
    ctx->pc = 0x2027b4u;
    // NOP
label_2027b8:
    // 0x2027b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2027b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027bc: 0xc080f8e  jal         func_203E38
    ctx->pc = 0x2027BCu;
    SET_GPR_U32(ctx, 31, 0x2027C4u);
    ctx->pc = 0x2027C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027BCu;
    // 0x2027c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E38u, 0x2027BCu, 0x2027C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027C4u;
label_2027c4:
    // 0x2027c4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2027c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2027c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2027c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2027cc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2027ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2027d0: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2027D0u;
    {
        const bool branch_taken_0x2027d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2027D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027D0u;
        // 0x2027d4: 0x262a00a  movz        $s4, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027d0) {
            ctx->pc = 0x2027B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2027b8;
        }
    }
    ctx->pc = 0x2027D8u;
label_2027d8:
    // 0x2027d8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2027d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2027dc:
    // 0x2027dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2027dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2027e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2027e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2027e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2027e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2027e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2027e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2027ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2027ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2027f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2027f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2027f4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2027f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2027f8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2027f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2027fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2027FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027FCu;
        // 0x202800: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2027FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202804u;
}
