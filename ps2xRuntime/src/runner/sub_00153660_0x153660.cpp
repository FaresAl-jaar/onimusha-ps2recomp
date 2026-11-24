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

// Function: sub_00153660
// Address: 0x153660 - 0x15376c
void sub_00153660_0x153660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153660_0x153660");
#endif

    switch (ctx->pc) {
        case 0x153678u: goto label_153678;
        case 0x1536e0u: goto label_1536e0;
        case 0x153744u: goto label_153744;
        default: break;
    }

    ctx->pc = 0x153660u;

    // 0x153660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x153664: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x153664u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x153668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15366c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15366cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153670: 0x24c6e610  addiu       $a2, $a2, -0x19F0
    ctx->pc = 0x153670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960656));
    // 0x153674: 0x0  nop
    ctx->pc = 0x153674u;
    // NOP
label_153678:
    // 0x153678: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x153678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x15367c: 0x14650034  bne         $v1, $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x15367Cu;
    {
        const bool branch_taken_0x15367c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x15367c) {
            ctx->pc = 0x153750u;
            goto label_153750;
        }
    }
    ctx->pc = 0x153684u;
    // 0x153684: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x153684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x153688: 0x74900  sll         $t1, $a3, 4
    ctx->pc = 0x153688u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x15368c: 0x2442e614  addiu       $v0, $v0, -0x19EC
    ctx->pc = 0x15368cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960660));
    // 0x153690: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x153690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x153694: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x153694u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153698: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x153698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x15369c: 0x2442e618  addiu       $v0, $v0, -0x19E8
    ctx->pc = 0x15369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960664));
    // 0x1536a0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1536a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1536a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1536a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1536a8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1536a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1536ac: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1536acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1536b0: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x1536B0u;
    {
        const bool branch_taken_0x1536b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1536B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1536B0u;
        // 0x1536b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1536b0) {
            ctx->pc = 0x153730u;
            goto label_153730;
        }
    }
    ctx->pc = 0x1536B8u;
    // 0x1536b8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1536b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1536bc: 0x2442e610  addiu       $v0, $v0, -0x19F0
    ctx->pc = 0x1536bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960656));
    // 0x1536c0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1536c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1536c4: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x1536c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1536c8: 0x24030065  addiu       $v1, $zero, 0x65
    ctx->pc = 0x1536c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x1536cc: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x1536ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1536d0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1536d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1536d4: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x1536d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1536d8: 0x24080044  addiu       $t0, $zero, 0x44
    ctx->pc = 0x1536d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1536dc: 0x0  nop
    ctx->pc = 0x1536dcu;
    // NOP
label_1536e0:
    // 0x1536e0: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x1536e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1536e4: 0x1448000c  bne         $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x1536E4u;
    {
        const bool branch_taken_0x1536e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1536e4) {
            ctx->pc = 0x153718u;
            goto label_153718;
        }
    }
    ctx->pc = 0x1536ECu;
    // 0x1536ec: 0x91820001  lbu         $v0, 0x1($t4)
    ctx->pc = 0x1536ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x1536f0: 0x14470009  bne         $v0, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1536F0u;
    {
        const bool branch_taken_0x1536f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1536f0) {
            ctx->pc = 0x153718u;
            goto label_153718;
        }
    }
    ctx->pc = 0x1536F8u;
    // 0x1536f8: 0x91820002  lbu         $v0, 0x2($t4)
    ctx->pc = 0x1536f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x1536fc: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1536FCu;
    {
        const bool branch_taken_0x1536fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x1536fc) {
            ctx->pc = 0x153718u;
            goto label_153718;
        }
    }
    ctx->pc = 0x153704u;
    // 0x153704: 0x91820003  lbu         $v0, 0x3($t4)
    ctx->pc = 0x153704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x153708: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153708u;
    {
        const bool branch_taken_0x153708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x153708) {
            ctx->pc = 0x153718u;
            goto label_153718;
        }
    }
    ctx->pc = 0x153710u;
    // 0x153710: 0xa1830000  sb          $v1, 0x0($t4)
    ctx->pc = 0x153710u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x153714: 0x0  nop
    ctx->pc = 0x153714u;
    // NOP
label_153718:
    // 0x153718: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x153718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x15371c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x15371cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x153720: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x153720u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x153724: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x153724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x153728: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x153728u;
    {
        const bool branch_taken_0x153728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153728u;
        // 0x15372c: 0x258c0018  addiu       $t4, $t4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153728) {
            ctx->pc = 0x1536E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1536e0;
        }
    }
    ctx->pc = 0x153730u;
label_153730:
    // 0x153730: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x153730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x153734: 0x2442e61c  addiu       $v0, $v0, -0x19E4
    ctx->pc = 0x153734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960668));
    // 0x153738: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x153738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x15373c: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x15373Cu;
    SET_GPR_U32(ctx, 31, 0x153744u);
    ctx->pc = 0x153740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15373Cu;
    // 0x153740: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x15373Cu, 0x153744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153744u;
label_153744:
    // 0x153744: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x153744u;
    {
        const bool branch_taken_0x153744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x153744) {
            ctx->pc = 0x153760u;
            goto label_153760;
        }
    }
    ctx->pc = 0x15374Cu;
    // 0x15374c: 0x0  nop
    ctx->pc = 0x15374cu;
    // NOP
label_153750:
    // 0x153750: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x153750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x153754: 0x28e30020  slti        $v1, $a3, 0x20
    ctx->pc = 0x153754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x153758: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x153758u;
    {
        const bool branch_taken_0x153758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153758u;
        // 0x15375c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153758) {
            ctx->pc = 0x153678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153678;
        }
    }
    ctx->pc = 0x153760u;
label_153760:
    // 0x153760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153764: 0x3e00008  jr          $ra
    ctx->pc = 0x153764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153764u;
        // 0x153768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15376Cu;
}
