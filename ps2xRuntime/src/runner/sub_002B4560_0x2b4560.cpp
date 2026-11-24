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

// Function: sub_002B4560
// Address: 0x2b4560 - 0x2b463c
void sub_002B4560_0x2b4560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4560_0x2b4560");
#endif

    switch (ctx->pc) {
        case 0x2b4590u: goto label_2b4590;
        case 0x2b4598u: goto label_2b4598;
        case 0x2b45acu: goto label_2b45ac;
        case 0x2b45c0u: goto label_2b45c0;
        case 0x2b45d8u: goto label_2b45d8;
        case 0x2b45e0u: goto label_2b45e0;
        case 0x2b45f4u: goto label_2b45f4;
        case 0x2b4608u: goto label_2b4608;
        default: break;
    }

    ctx->pc = 0x2b4560u;

    // 0x2b4560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b4560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b4564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b4564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4568: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b4568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b456c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b4570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b4570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b4574: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b4574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4578: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b4578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b457c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b457cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b4580: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b4580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4584: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b4584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b4588: 0xc0ad0d8  jal         func_2B4360
    ctx->pc = 0x2B4588u;
    SET_GPR_U32(ctx, 31, 0x2B4590u);
    ctx->pc = 0x2B458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4588u;
    // 0x2b458c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4360u, 0x2B4588u, 0x2B4590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4590u;
label_2b4590:
    // 0x2b4590: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B4590u;
    {
        const bool branch_taken_0x2b4590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4590u;
        // 0x2b4594: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4590) {
            ctx->pc = 0x2B45C8u;
            goto label_2b45c8;
        }
    }
    ctx->pc = 0x2B4598u;
label_2b4598:
    // 0x2b4598: 0x92020038  lbu         $v0, 0x38($s0)
    ctx->pc = 0x2b4598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2b459c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B459Cu;
    {
        const bool branch_taken_0x2b459c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B45A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B459Cu;
        // 0x2b45a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b459c) {
            ctx->pc = 0x2B45B0u;
            goto label_2b45b0;
        }
    }
    ctx->pc = 0x2B45A4u;
    // 0x2b45a4: 0xc0ac418  jal         func_2B1060
    ctx->pc = 0x2B45A4u;
    SET_GPR_U32(ctx, 31, 0x2B45ACu);
    ctx->pc = 0x2B45A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45A4u;
    // 0x2b45a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1060u, 0x2B45A4u, 0x2B45ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45ACu;
label_2b45ac:
    // 0x2b45ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b45acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b45b0:
    // 0x2b45b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b45b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b45b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b45b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b45b8: 0xc0ad0d8  jal         func_2B4360
    ctx->pc = 0x2B45B8u;
    SET_GPR_U32(ctx, 31, 0x2B45C0u);
    ctx->pc = 0x2B45BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45B8u;
    // 0x2b45bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4360u, 0x2B45B8u, 0x2B45C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45C0u;
label_2b45c0:
    // 0x2b45c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B45C0u;
    {
        const bool branch_taken_0x2b45c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45C0u;
        // 0x2b45c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45c0) {
            ctx->pc = 0x2B4598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4598;
        }
    }
    ctx->pc = 0x2B45C8u;
label_2b45c8:
    // 0x2b45c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b45c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b45cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b45ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b45d0: 0xc0ad0d8  jal         func_2B4360
    ctx->pc = 0x2B45D0u;
    SET_GPR_U32(ctx, 31, 0x2B45D8u);
    ctx->pc = 0x2B45D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45D0u;
    // 0x2b45d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4360u, 0x2B45D0u, 0x2B45D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45D8u;
label_2b45d8:
    // 0x2b45d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B45D8u;
    {
        const bool branch_taken_0x2b45d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45D8u;
        // 0x2b45dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45d8) {
            ctx->pc = 0x2B4610u;
            goto label_2b4610;
        }
    }
    ctx->pc = 0x2B45E0u;
label_2b45e0:
    // 0x2b45e0: 0x92020038  lbu         $v0, 0x38($s0)
    ctx->pc = 0x2b45e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2b45e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B45E4u;
    {
        const bool branch_taken_0x2b45e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B45E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B45E4u;
        // 0x2b45e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b45e4) {
            ctx->pc = 0x2B45F8u;
            goto label_2b45f8;
        }
    }
    ctx->pc = 0x2B45ECu;
    // 0x2b45ec: 0xc0ac418  jal         func_2B1060
    ctx->pc = 0x2B45ECu;
    SET_GPR_U32(ctx, 31, 0x2B45F4u);
    ctx->pc = 0x2B45F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B45ECu;
    // 0x2b45f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1060u, 0x2B45ECu, 0x2B45F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B45F4u;
label_2b45f4:
    // 0x2b45f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b45f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b45f8:
    // 0x2b45f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b45f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b45fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b45fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4600: 0xc0ad0d8  jal         func_2B4360
    ctx->pc = 0x2B4600u;
    SET_GPR_U32(ctx, 31, 0x2B4608u);
    ctx->pc = 0x2B4604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4600u;
    // 0x2b4604: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4360u, 0x2B4600u, 0x2B4608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4608u;
label_2b4608:
    // 0x2b4608: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2B4608u;
    {
        const bool branch_taken_0x2b4608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4608u;
        // 0x2b460c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4608) {
            ctx->pc = 0x2B45E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b45e0;
        }
    }
    ctx->pc = 0x2B4610u;
label_2b4610:
    // 0x2b4610: 0x16320002  bne         $s1, $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4610u;
    {
        const bool branch_taken_0x2b4610 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x2b4610) {
            ctx->pc = 0x2B461Cu;
            goto label_2b461c;
        }
    }
    ctx->pc = 0x2B4618u;
    // 0x2b4618: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b4618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b461c:
    // 0x2b461c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b461cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4620: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b4620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4624: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b4624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4628: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b4628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b462c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b462cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b4630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4634: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4634u;
        // 0x2b4638: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B463Cu;
}
