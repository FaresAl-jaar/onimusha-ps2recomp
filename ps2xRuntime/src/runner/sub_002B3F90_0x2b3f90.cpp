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

// Function: sub_002B3F90
// Address: 0x2b3f90 - 0x2b4024
void sub_002B3F90_0x2b3f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3F90_0x2b3f90");
#endif

    switch (ctx->pc) {
        case 0x2b3fdcu: goto label_2b3fdc;
        case 0x2b3fecu: goto label_2b3fec;
        case 0x2b4010u: goto label_2b4010;
        default: break;
    }

    ctx->pc = 0x2b3f90u;

    // 0x2b3f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b3f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b3f94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b3f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b3f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b3f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b3f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b3f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b3fa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b3fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fa4: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x2b3fa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2b3fa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b3fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b3fac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B3FACu;
    {
        const bool branch_taken_0x2b3fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FACu;
        // 0x2b3fb0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3fac) {
            ctx->pc = 0x2B3FF8u;
            goto label_2b3ff8;
        }
    }
    ctx->pc = 0x2B3FB4u;
    // 0x2b3fb4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2b3fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b3fb8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2b3fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2b3fbc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2b3fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b3fc0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B3FC0u;
    {
        const bool branch_taken_0x2b3fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3fc0) {
            ctx->pc = 0x2B3FF8u;
            goto label_2b3ff8;
        }
    }
    ctx->pc = 0x2B3FC8u;
    // 0x2b3fc8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2b3fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b3fcc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3FCCu;
    {
        const bool branch_taken_0x2b3fcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3FCCu;
        // 0x2b3fd0: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3fcc) {
            ctx->pc = 0x2B3FE0u;
            goto label_2b3fe0;
        }
    }
    ctx->pc = 0x2B3FD4u;
    // 0x2b3fd4: 0xc069324  jal         func_1A4C90
    ctx->pc = 0x2B3FD4u;
    SET_GPR_U32(ctx, 31, 0x2B3FDCu);
    ctx->pc = 0x2B3FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3FD4u;
    // 0x2b3fd8: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x2B3FD4u, 0x2B3FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3FDCu;
label_2b3fdc:
    // 0x2b3fdc: 0x0  nop
    ctx->pc = 0x2b3fdcu;
    // NOP
label_2b3fe0:
    // 0x2b3fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b3fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fe4: 0xc0ad0ec  jal         func_2B43B0
    ctx->pc = 0x2B3FE4u;
    SET_GPR_U32(ctx, 31, 0x2B3FECu);
    ctx->pc = 0x2B3FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3FE4u;
    // 0x2b3fe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B43B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B43B0u, 0x2B3FE4u, 0x2B3FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3FECu;
label_2b3fec:
    // 0x2b3fec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3FECu;
    {
        const bool branch_taken_0x2b3fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3fec) {
            ctx->pc = 0x2B4010u;
            goto label_2b4010;
        }
    }
    ctx->pc = 0x2B3FF4u;
    // 0x2b3ff4: 0x0  nop
    ctx->pc = 0x2b3ff4u;
    // NOP
label_2b3ff8:
    // 0x2b3ff8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2b3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2b3ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b3ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b4000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4004: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b4004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b4008: 0xc0acf4c  jal         func_2B3D30
    ctx->pc = 0x2B4008u;
    SET_GPR_U32(ctx, 31, 0x2B4010u);
    ctx->pc = 0x2B400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4008u;
    // 0x2b400c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3D30u, 0x2B4008u, 0x2B4010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4010u;
label_2b4010:
    // 0x2b4010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b4010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b4014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b4018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b401c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B401Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B401Cu;
        // 0x2b4020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B401Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4024u;
}
