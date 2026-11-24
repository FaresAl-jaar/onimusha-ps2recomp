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

// Function: sub_002279D8
// Address: 0x2279d8 - 0x227a68
void sub_002279D8_0x2279d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002279D8_0x2279d8");
#endif

    switch (ctx->pc) {
        case 0x227a08u: goto label_227a08;
        case 0x227a2cu: goto label_227a2c;
        case 0x227a4cu: goto label_227a4c;
        default: break;
    }

    ctx->pc = 0x2279d8u;

    // 0x2279d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2279d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2279dc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2279dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2279e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2279e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2279e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2279e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2279e8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2279E8u;
    {
        const bool branch_taken_0x2279e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2279ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279E8u;
        // 0x2279ec: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279e8) {
            ctx->pc = 0x2279F8u;
            goto label_2279f8;
        }
    }
    ctx->pc = 0x2279F0u;
    // 0x2279f0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2279F0u;
    {
        const bool branch_taken_0x2279f0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2279f0) {
            ctx->pc = 0x227A00u;
            goto label_227a00;
        }
    }
    ctx->pc = 0x2279F8u;
label_2279f8:
    // 0x2279f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2279F8u;
    {
        const bool branch_taken_0x2279f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2279FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2279F8u;
        // 0x2279fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2279f8) {
            ctx->pc = 0x227A58u;
            goto label_227a58;
        }
    }
    ctx->pc = 0x227A00u;
label_227a00:
    // 0x227a00: 0xc089e2c  jal         func_2278B0
    ctx->pc = 0x227A00u;
    SET_GPR_U32(ctx, 31, 0x227A08u);
    ctx->pc = 0x2278B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2278B0u, 0x227A00u, 0x227A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A08u;
label_227a08:
    // 0x227a08: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x227a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x227a0c: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x227a0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x227a10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a14: 0x24a59590  addiu       $a1, $a1, -0x6A70
    ctx->pc = 0x227a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940048));
    // 0x227a18: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x227A18u;
    {
        const bool branch_taken_0x227a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x227A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A18u;
        // 0x227a1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a18) {
            ctx->pc = 0x227A58u;
            goto label_227a58;
        }
    }
    ctx->pc = 0x227A20u;
    // 0x227a20: 0x26100015  addiu       $s0, $s0, 0x15
    ctx->pc = 0x227a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
    // 0x227a24: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x227A24u;
    SET_GPR_U32(ctx, 31, 0x227A2Cu);
    ctx->pc = 0x227A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227A24u;
    // 0x227a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x227A24u, 0x227A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A2Cu;
label_227a2c:
    // 0x227a2c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x227a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x227a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a34: 0x24a59598  addiu       $a1, $a1, -0x6A68
    ctx->pc = 0x227a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940056));
    // 0x227a38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x227a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227a3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227A3Cu;
    {
        const bool branch_taken_0x227a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A3Cu;
        // 0x227a40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a3c) {
            ctx->pc = 0x227A54u;
            goto label_227a54;
        }
    }
    ctx->pc = 0x227A44u;
    // 0x227a44: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x227A44u;
    SET_GPR_U32(ctx, 31, 0x227A4Cu);
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x227A44u, 0x227A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A4Cu;
label_227a4c:
    // 0x227a4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x227a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x227a50: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x227a50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_227a54:
    // 0x227a54: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x227a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_227a58:
    // 0x227a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227a5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x227a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227a60: 0x3e00008  jr          $ra
    ctx->pc = 0x227A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A60u;
        // 0x227a64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227A68u;
}
