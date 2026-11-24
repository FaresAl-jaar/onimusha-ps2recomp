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

// Function: sub_003DD530
// Address: 0x3dd530 - 0x3dd5ac
void sub_003DD530_0x3dd530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD530_0x3dd530");
#endif

    switch (ctx->pc) {
        case 0x3dd568u: goto label_3dd568;
        case 0x3dd578u: goto label_3dd578;
        default: break;
    }

    ctx->pc = 0x3dd530u;

    // 0x3dd530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3dd530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3dd534: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3dd534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3dd538: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3dd538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3dd53c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dd53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3dd540: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3dd540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd544: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3dd544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3dd548: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3dd548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3dd54c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3dd54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd550: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x3dd550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x3dd554: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x3dd554u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dd558: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x3dd558u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dd55c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3DD55Cu;
    {
        const bool branch_taken_0x3dd55c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD55Cu;
        // 0x3dd560: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd55c) {
            ctx->pc = 0x3DD590u;
            goto label_3dd590;
        }
    }
    ctx->pc = 0x3DD564u;
    // 0x3dd564: 0x0  nop
    ctx->pc = 0x3dd564u;
    // NOP
label_3dd568:
    // 0x3dd568: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3dd568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3dd56c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3dd56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd570: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DD570u;
    SET_GPR_U32(ctx, 31, 0x3DD578u);
    ctx->pc = 0x3DD574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD570u;
    // 0x3dd574: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DD570u, 0x3DD578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD578u;
label_3dd578:
    // 0x3dd578: 0x9243001a  lbu         $v1, 0x1A($s2)
    ctx->pc = 0x3dd578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26)));
    // 0x3dd57c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3dd57cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3dd580: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3dd580u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3dd584: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3DD584u;
    {
        const bool branch_taken_0x3dd584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD584u;
        // 0x3dd588: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd584) {
            ctx->pc = 0x3DD568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd568;
        }
    }
    ctx->pc = 0x3DD58Cu;
    // 0x3dd58c: 0x0  nop
    ctx->pc = 0x3dd58cu;
    // NOP
label_3dd590:
    // 0x3dd590: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3dd590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dd594: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3dd594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dd598: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3dd598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3dd59c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3dd59cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dd5a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3dd5a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD5A4u;
        // 0x3dd5a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD5ACu;
}
