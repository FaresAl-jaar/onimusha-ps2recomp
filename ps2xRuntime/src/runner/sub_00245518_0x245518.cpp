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

// Function: sub_00245518
// Address: 0x245518 - 0x2455b0
void sub_00245518_0x245518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245518_0x245518");
#endif

    switch (ctx->pc) {
        case 0x245540u: goto label_245540;
        case 0x24554cu: goto label_24554c;
        case 0x24556cu: goto label_24556c;
        default: break;
    }

    ctx->pc = 0x245518u;

    // 0x245518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24551c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x245520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x245524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x245528: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x245528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24552c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24552cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x245530: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245530u;
    {
        const bool branch_taken_0x245530 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x245534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245530u;
        // 0x245534: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245530) {
            ctx->pc = 0x245544u;
            goto label_245544;
        }
    }
    ctx->pc = 0x245538u;
    // 0x245538: 0xc090f28  jal         func_243CA0
    ctx->pc = 0x245538u;
    SET_GPR_U32(ctx, 31, 0x245540u);
    ctx->pc = 0x243CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243CA0u, 0x245538u, 0x245540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245540u;
label_245540:
    // 0x245540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_245544:
    // 0x245544: 0xc091532  jal         func_2454C8
    ctx->pc = 0x245544u;
    SET_GPR_U32(ctx, 31, 0x24554Cu);
    ctx->pc = 0x245548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245544u;
    // 0x245548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2454C8u, 0x245544u, 0x24554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24554Cu;
label_24554c:
    // 0x24554c: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x24554cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x245550: 0x24726150  addiu       $s2, $v1, 0x6150
    ctx->pc = 0x245550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x245554: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245558: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x245558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24555c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x24555Cu;
    {
        const bool branch_taken_0x24555c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x245560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24555Cu;
        // 0x245560: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24555c) {
            ctx->pc = 0x245598u;
            goto label_245598;
        }
    }
    ctx->pc = 0x245564u;
    // 0x245564: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x245564u;
    SET_GPR_U32(ctx, 31, 0x24556Cu);
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x245564u, 0x24556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24556Cu;
label_24556c:
    // 0x24556c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24556cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x245570: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x245570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24557c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24557cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245580: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x245580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245584: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x245584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245588: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x245588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24558c: 0x24a5c7b8  addiu       $a1, $a1, -0x3848
    ctx->pc = 0x24558cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952888));
    // 0x245590: 0x8049ce8  j           func_1273A0
    ctx->pc = 0x245590u;
    ctx->pc = 0x245594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245590u;
    // 0x245594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    sub_001273A0_0x1273a0(rdram, ctx, runtime); return;
    ctx->pc = 0x245598u;
label_245598:
    // 0x245598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24559c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24559cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2455a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2455a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2455a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2455a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2455a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2455A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2455ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455A8u;
        // 0x2455ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2455A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2455B0u;
}
