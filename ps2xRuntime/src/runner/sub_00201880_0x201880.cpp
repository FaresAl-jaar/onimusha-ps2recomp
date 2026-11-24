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

// Function: sub_00201880
// Address: 0x201880 - 0x201900
void sub_00201880_0x201880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201880_0x201880");
#endif

    switch (ctx->pc) {
        case 0x2018acu: goto label_2018ac;
        case 0x2018b8u: goto label_2018b8;
        case 0x2018e4u: goto label_2018e4;
        default: break;
    }

    ctx->pc = 0x201880u;

    // 0x201880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201884: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x201884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x201888: 0x24b1e800  addiu       $s1, $a1, -0x1800
    ctx->pc = 0x201888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961152));
    // 0x20188c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x201890: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x201890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201894: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x201894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201898: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x201898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20189c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20189cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2018a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2018a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2018a4: 0xc08e442  jal         func_239108
    ctx->pc = 0x2018A4u;
    SET_GPR_U32(ctx, 31, 0x2018ACu);
    ctx->pc = 0x2018A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018A4u;
    // 0x2018a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239108u, 0x2018A4u, 0x2018ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018ACu;
label_2018ac:
    // 0x2018ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2018acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018b0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2018B0u;
    {
        const bool branch_taken_0x2018b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2018B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018B0u;
        // 0x2018b4: 0x2512821  addu        $a1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2018b0) {
            ctx->pc = 0x2018D8u;
            goto label_2018d8;
        }
    }
    ctx->pc = 0x2018B8u;
label_2018b8:
    // 0x2018b8: 0x0  nop
    ctx->pc = 0x2018b8u;
    // NOP
    // 0x2018bc: 0x0  nop
    ctx->pc = 0x2018bcu;
    // NOP
    // 0x2018c0: 0x0  nop
    ctx->pc = 0x2018c0u;
    // NOP
    // 0x2018c4: 0x0  nop
    ctx->pc = 0x2018c4u;
    // NOP
    // 0x2018c8: 0x0  nop
    ctx->pc = 0x2018c8u;
    // NOP
    // 0x2018cc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x2018CCu;
    {
        const bool branch_taken_0x2018cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2018cc) {
            ctx->pc = 0x2018B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2018b8;
        }
    }
    ctx->pc = 0x2018D4u;
    // 0x2018d4: 0x0  nop
    ctx->pc = 0x2018d4u;
    // NOP
label_2018d8:
    // 0x2018d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2018d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018dc: 0xc08a3ce  jal         func_228F38
    ctx->pc = 0x2018DCu;
    SET_GPR_U32(ctx, 31, 0x2018E4u);
    ctx->pc = 0x2018E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018DCu;
    // 0x2018e0: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228F38u, 0x2018DCu, 0x2018E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018E4u;
label_2018e4:
    // 0x2018e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2018e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2018e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2018ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2018ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2018f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2018f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2018f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2018f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2018f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2018F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2018FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018F8u;
        // 0x2018fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2018F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201900u;
}
