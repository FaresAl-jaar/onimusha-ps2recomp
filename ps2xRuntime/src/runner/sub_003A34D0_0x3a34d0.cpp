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

// Function: sub_003A34D0
// Address: 0x3a34d0 - 0x3a3564
void sub_003A34D0_0x3a34d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A34D0_0x3a34d0");
#endif

    switch (ctx->pc) {
        case 0x3a34f0u: goto label_3a34f0;
        case 0x3a3510u: goto label_3a3510;
        case 0x3a3538u: goto label_3a3538;
        default: break;
    }

    ctx->pc = 0x3a34d0u;

    // 0x3a34d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a34d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a34d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a34d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a34d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a34d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a34dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a34dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a34e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a34e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a34e4: 0x8f858c60  lw          $a1, -0x73A0($gp)
    ctx->pc = 0x3a34e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a34e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a34e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a34ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a34ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a34f0:
    // 0x3a34f0: 0x8c830964  lw          $v1, 0x964($a0)
    ctx->pc = 0x3a34f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2404)));
    // 0x3a34f4: 0x10700016  beq         $v1, $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A34F4u;
    {
        const bool branch_taken_0x3a34f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3a34f4) {
            ctx->pc = 0x3A3550u;
            goto label_3a3550;
        }
    }
    ctx->pc = 0x3A34FCu;
    // 0x3a34fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a34fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a3500: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x3a3500u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a3504: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A3504u;
    {
        const bool branch_taken_0x3a3504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3504u;
        // 0x3a3508: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3504) {
            ctx->pc = 0x3A34F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a34f0;
        }
    }
    ctx->pc = 0x3A350Cu;
    // 0x3a350c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a350cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a3510:
    // 0x3a3510: 0x8ca30964  lw          $v1, 0x964($a1)
    ctx->pc = 0x3a3510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2404)));
    // 0x3a3514: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A3514u;
    {
        const bool branch_taken_0x3a3514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A3518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3514u;
        // 0x3a3518: 0x24b10960  addiu       $s1, $a1, 0x960 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 2400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3514) {
            ctx->pc = 0x3A3540u;
            goto label_3a3540;
        }
    }
    ctx->pc = 0x3A351Cu;
    // 0x3a351c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3a351cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a3520: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3520u;
    {
        const bool branch_taken_0x3a3520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3520) {
            ctx->pc = 0x3A3538u;
            goto label_3a3538;
        }
    }
    ctx->pc = 0x3A3528u;
    // 0x3a3528: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3a3528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3a352c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3a352cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3530: 0xc0f03fc  jal         func_3C0FF0
    ctx->pc = 0x3A3530u;
    SET_GPR_U32(ctx, 31, 0x3A3538u);
    ctx->pc = 0x3A3534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3530u;
    // 0x3a3534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0FF0u, 0x3A3530u, 0x3A3538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3538u;
label_3a3538:
    // 0x3a3538: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3538u;
    {
        const bool branch_taken_0x3a3538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3538u;
        // 0x3a353c: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3538) {
            ctx->pc = 0x3A3550u;
            goto label_3a3550;
        }
    }
    ctx->pc = 0x3A3540u;
label_3a3540:
    // 0x3a3540: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a3540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a3544: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x3a3544u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a3548: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x3A3548u;
    {
        const bool branch_taken_0x3a3548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3548u;
        // 0x3a354c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3548) {
            ctx->pc = 0x3A3510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3510;
        }
    }
    ctx->pc = 0x3A3550u;
label_3a3550:
    // 0x3a3550: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a3550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a3554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a3554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a3558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a355c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A355Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A355Cu;
        // 0x3a3560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A355Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3564u;
}
