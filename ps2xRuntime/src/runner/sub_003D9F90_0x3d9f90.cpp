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

// Function: sub_003D9F90
// Address: 0x3d9f90 - 0x3da018
void sub_003D9F90_0x3d9f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9F90_0x3d9f90");
#endif

    switch (ctx->pc) {
        case 0x3d9fd0u: goto label_3d9fd0;
        case 0x3d9fe8u: goto label_3d9fe8;
        default: break;
    }

    ctx->pc = 0x3d9f90u;

    // 0x3d9f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d9f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d9f94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9f98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d9f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d9f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d9f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d9fa0: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x3d9fa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d9fa4: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3D9FA4u;
    {
        const bool branch_taken_0x3d9fa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9FA4u;
        // 0x3d9fa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9fa4) {
            ctx->pc = 0x3D9FE0u;
            goto label_3d9fe0;
        }
    }
    ctx->pc = 0x3D9FACu;
    // 0x3d9fac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D9FACu;
    {
        const bool branch_taken_0x3d9fac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9fac) {
            ctx->pc = 0x3D9FC0u;
            goto label_3d9fc0;
        }
    }
    ctx->pc = 0x3D9FB4u;
    // 0x3d9fb4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3D9FB4u;
    {
        const bool branch_taken_0x3d9fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9fb4) {
            ctx->pc = 0x3DA008u;
            goto label_3da008;
        }
    }
    ctx->pc = 0x3D9FBCu;
    // 0x3d9fbc: 0x0  nop
    ctx->pc = 0x3d9fbcu;
    // NOP
label_3d9fc0:
    // 0x3d9fc0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3d9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3d9fc4: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x3d9fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x3d9fc8: 0xc0f6c58  jal         func_3DB160
    ctx->pc = 0x3D9FC8u;
    SET_GPR_U32(ctx, 31, 0x3D9FD0u);
    ctx->pc = 0x3D9FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9FC8u;
    // 0x3d9fcc: 0x34460040  ori         $a2, $v0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB160u, 0x3D9FC8u, 0x3D9FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9FD0u;
label_3d9fd0:
    // 0x3d9fd0: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x3d9fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3d9fd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d9fd8: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3d9fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9fdc: 0x0  nop
    ctx->pc = 0x3d9fdcu;
    // NOP
label_3d9fe0:
    // 0x3d9fe0: 0xc0f6c64  jal         func_3DB190
    ctx->pc = 0x3D9FE0u;
    SET_GPR_U32(ctx, 31, 0x3D9FE8u);
    ctx->pc = 0x3D9FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9FE0u;
    // 0x3d9fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB190u, 0x3D9FE0u, 0x3D9FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9FE8u;
label_3d9fe8:
    // 0x3d9fe8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D9FE8u;
    {
        const bool branch_taken_0x3d9fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9FE8u;
        // 0x3d9fec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9fe8) {
            ctx->pc = 0x3DA008u;
            goto label_3da008;
        }
    }
    ctx->pc = 0x3D9FF0u;
    // 0x3d9ff0: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d9ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9ff4: 0xa2032be3  sb          $v1, 0x2BE3($s0)
    ctx->pc = 0x3d9ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9ff8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3d9ff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3d9ffc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3da000: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3da000u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3da004: 0x0  nop
    ctx->pc = 0x3da004u;
    // NOP
label_3da008:
    // 0x3da008: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3da008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da00c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3da00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da010: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA010u;
        // 0x3da014: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA018u;
}
