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

// Function: sub_001246D8
// Address: 0x1246d8 - 0x124760
void sub_001246D8_0x1246d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001246D8_0x1246d8");
#endif

    switch (ctx->pc) {
        case 0x124710u: goto label_124710;
        case 0x124724u: goto label_124724;
        case 0x124734u: goto label_124734;
        default: break;
    }

    ctx->pc = 0x1246d8u;

    // 0x1246d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1246d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1246dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1246dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1246e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1246e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1246e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1246e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1246e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1246e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1246ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1246f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1246f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1246f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1246f8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1246f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246fc: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1246FCu;
    {
        const bool branch_taken_0x1246fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x124700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246FCu;
        // 0x124700: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246fc) {
            ctx->pc = 0x124758u;
            goto label_124758;
        }
    }
    ctx->pc = 0x124704u;
    // 0x124704: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x124704u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
    // 0x124708: 0xc049e80  jal         func_127A00
    ctx->pc = 0x124708u;
    SET_GPR_U32(ctx, 31, 0x124710u);
    ctx->pc = 0x12470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124708u;
    // 0x12470c: 0x26653c28  addiu       $a1, $s3, 0x3C28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 15400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A00u, 0x124708u, 0x124710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124710u;
label_124710:
    // 0x124710: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124710u;
    {
        const bool branch_taken_0x124710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124710u;
        // 0x124714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124710) {
            ctx->pc = 0x12472Cu;
            goto label_12472c;
        }
    }
    ctx->pc = 0x124718u;
    // 0x124718: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x124718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x12471c: 0xc049e80  jal         func_127A00
    ctx->pc = 0x12471Cu;
    SET_GPR_U32(ctx, 31, 0x124724u);
    ctx->pc = 0x124720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12471Cu;
    // 0x124720: 0x24a53bf0  addiu       $a1, $a1, 0x3BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127A00u, 0x12471Cu, 0x124724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124724u;
label_124724:
    // 0x124724: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124724u;
    {
        const bool branch_taken_0x124724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124724u;
        // 0x124728: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124724) {
            ctx->pc = 0x124738u;
            goto label_124738;
        }
    }
    ctx->pc = 0x12472Cu;
label_12472c:
    // 0x12472c: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x12472cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x124730: 0xae320030  sw          $s2, 0x30($s1)
    ctx->pc = 0x124730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
label_124734:
    // 0x124734: 0x266f3c28  addiu       $t7, $s3, 0x3C28
    ctx->pc = 0x124734u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 15400));
label_124738:
    // 0x124738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12473c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x12473cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124744: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124748: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124748u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12474c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12474cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124750: 0x3e00008  jr          $ra
    ctx->pc = 0x124750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124750u;
        // 0x124754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124758u;
label_124758:
    // 0x124758: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x124758u;
    {
        const bool branch_taken_0x124758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124758u;
        // 0x12475c: 0x3c130066  lui         $s3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124758) {
            ctx->pc = 0x124734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124734;
        }
    }
    ctx->pc = 0x124760u;
}
