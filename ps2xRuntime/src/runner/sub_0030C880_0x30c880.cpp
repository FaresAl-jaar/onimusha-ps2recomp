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

// Function: sub_0030C880
// Address: 0x30c880 - 0x30c928
void sub_0030C880_0x30c880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C880_0x30c880");
#endif

    switch (ctx->pc) {
        case 0x30c8b0u: goto label_30c8b0;
        default: break;
    }

    ctx->pc = 0x30c880u;

    // 0x30c880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c884: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x30c884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x30c888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30c888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30c88c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c890: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x30c890u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x30c894: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x30c894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x30c898: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C898u;
    {
        const bool branch_taken_0x30c898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C898u;
        // 0x30c89c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c898) {
            ctx->pc = 0x30C8A8u;
            goto label_30c8a8;
        }
    }
    ctx->pc = 0x30C8A0u;
    // 0x30c8a0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x30C8A0u;
    {
        const bool branch_taken_0x30c8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8A0u;
        // 0x30c8a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8a0) {
            ctx->pc = 0x30C918u;
            goto label_30c918;
        }
    }
    ctx->pc = 0x30C8A8u;
label_30c8a8:
    // 0x30c8a8: 0xc0d8f58  jal         func_363D60
    ctx->pc = 0x30C8A8u;
    SET_GPR_U32(ctx, 31, 0x30C8B0u);
    ctx->pc = 0x30C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C8A8u;
    // 0x30c8ac: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D60u, 0x30C8A8u, 0x30C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C8B0u;
label_30c8b0:
    // 0x30c8b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C8B0u;
    {
        const bool branch_taken_0x30c8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c8b0) {
            ctx->pc = 0x30C8C0u;
            goto label_30c8c0;
        }
    }
    ctx->pc = 0x30C8B8u;
    // 0x30c8b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x30C8B8u;
    {
        const bool branch_taken_0x30c8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8B8u;
        // 0x30c8bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8b8) {
            ctx->pc = 0x30C918u;
            goto label_30c918;
        }
    }
    ctx->pc = 0x30C8C0u;
label_30c8c0:
    // 0x30c8c0: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x30c8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x30c8c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30c8c8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x30C8C8u;
    {
        const bool branch_taken_0x30c8c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x30C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8C8u;
        // 0x30c8cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8c8) {
            ctx->pc = 0x30C8F8u;
            goto label_30c8f8;
        }
    }
    ctx->pc = 0x30C8D0u;
    // 0x30c8d0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C8D0u;
    {
        const bool branch_taken_0x30c8d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30c8d0) {
            ctx->pc = 0x30C8E0u;
            goto label_30c8e0;
        }
    }
    ctx->pc = 0x30C8D8u;
    // 0x30c8d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30C8D8u;
    {
        const bool branch_taken_0x30c8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c8d8) {
            ctx->pc = 0x30C910u;
            goto label_30c910;
        }
    }
    ctx->pc = 0x30C8E0u;
label_30c8e0:
    // 0x30c8e0: 0x944229de  lhu         $v0, 0x29DE($v0)
    ctx->pc = 0x30c8e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10718)));
    // 0x30c8e4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x30c8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30c8e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C8E8u;
    {
        const bool branch_taken_0x30c8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c8e8) {
            ctx->pc = 0x30C910u;
            goto label_30c910;
        }
    }
    ctx->pc = 0x30C8F0u;
    // 0x30c8f0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30C8F0u;
    {
        const bool branch_taken_0x30c8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8F0u;
        // 0x30c8f4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8f0) {
            ctx->pc = 0x30C918u;
            goto label_30c918;
        }
    }
    ctx->pc = 0x30C8F8u;
label_30c8f8:
    // 0x30c8f8: 0x944229de  lhu         $v0, 0x29DE($v0)
    ctx->pc = 0x30c8f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10718)));
    // 0x30c8fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x30c8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x30c900: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C900u;
    {
        const bool branch_taken_0x30c900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c900) {
            ctx->pc = 0x30C910u;
            goto label_30c910;
        }
    }
    ctx->pc = 0x30C908u;
    // 0x30c908: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30C908u;
    {
        const bool branch_taken_0x30c908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C908u;
        // 0x30c90c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c908) {
            ctx->pc = 0x30C918u;
            goto label_30c918;
        }
    }
    ctx->pc = 0x30C910u;
label_30c910:
    // 0x30c910: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30c910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c914: 0x0  nop
    ctx->pc = 0x30c914u;
    // NOP
label_30c918:
    // 0x30c918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30c918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c91c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c920: 0x3e00008  jr          $ra
    ctx->pc = 0x30C920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C920u;
        // 0x30c924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C928u;
}
