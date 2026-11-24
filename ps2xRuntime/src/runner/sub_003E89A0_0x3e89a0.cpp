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

// Function: sub_003E89A0
// Address: 0x3e89a0 - 0x3e8a20
void sub_003E89A0_0x3e89a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E89A0_0x3e89a0");
#endif

    switch (ctx->pc) {
        case 0x3e89b0u: goto label_3e89b0;
        case 0x3e89c4u: goto label_3e89c4;
        case 0x3e89e4u: goto label_3e89e4;
        case 0x3e89f0u: goto label_3e89f0;
        case 0x3e8a04u: goto label_3e8a04;
        default: break;
    }

    ctx->pc = 0x3e89a0u;

    // 0x3e89a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e89a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e89a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e89a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e89a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e89a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e89ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e89acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e89b0:
    // 0x3e89b0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3e89b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3e89b4: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x3e89b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3e89b8: 0x24846690  addiu       $a0, $a0, 0x6690
    ctx->pc = 0x3e89b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    // 0x3e89bc: 0xc05d6a0  jal         func_175A80
    ctx->pc = 0x3E89BCu;
    SET_GPR_U32(ctx, 31, 0x3E89C4u);
    ctx->pc = 0x3E89C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E89BCu;
    // 0x3e89c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A80u, 0x3E89BCu, 0x3E89C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E89C4u;
label_3e89c4:
    // 0x3e89c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e89c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3e89c8: 0x2a01003e  slti        $at, $s0, 0x3E
    ctx->pc = 0x3e89c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)62) ? 1 : 0);
    // 0x3e89cc: 0x1420fff8  bnez        $at, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3E89CCu;
    {
        const bool branch_taken_0x3e89cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E89CCu;
        // 0x3e89d0: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e89cc) {
            ctx->pc = 0x3E89B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e89b0;
        }
    }
    ctx->pc = 0x3E89D4u;
    // 0x3e89d4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x3e89d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3e89d8: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x3e89d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x3e89dc: 0xc0692bc  jal         func_1A4AF0
    ctx->pc = 0x3E89DCu;
    SET_GPR_U32(ctx, 31, 0x3E89E4u);
    ctx->pc = 0x3E89E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E89DCu;
    // 0x3e89e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AF0u, 0x3E89DCu, 0x3E89E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E89E4u;
label_3e89e4:
    // 0x3e89e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e89e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e89e8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E89E8u;
    {
        const bool branch_taken_0x3e89e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e89e8) {
            ctx->pc = 0x3E8A10u;
            goto label_3e8a10;
        }
    }
    ctx->pc = 0x3E89F0u;
label_3e89f0:
    // 0x3e89f0: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x3e89f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x3e89f4: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x3e89f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e89f8: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x3e89f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x3e89fc: 0xc0692bc  jal         func_1A4AF0
    ctx->pc = 0x3E89FCu;
    SET_GPR_U32(ctx, 31, 0x3E8A04u);
    ctx->pc = 0x3E8A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E89FCu;
    // 0x3e8a00: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AF0u, 0x3E89FCu, 0x3E8A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8A04u;
label_3e8a04:
    // 0x3e8a04: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e8a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8a08: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3E8A08u;
    {
        const bool branch_taken_0x3e8a08 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8a08) {
            ctx->pc = 0x3E89F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e89f0;
        }
    }
    ctx->pc = 0x3E8A10u;
label_3e8a10:
    // 0x3e8a10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e8a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e8a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8a18: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8A18u;
        // 0x3e8a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8A20u;
}
