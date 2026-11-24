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

// Function: sub_00110C58
// Address: 0x110c58 - 0x110cc8
void sub_00110C58_0x110c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110C58_0x110c58");
#endif

    switch (ctx->pc) {
        case 0x110c7cu: goto label_110c7c;
        case 0x110ca0u: goto label_110ca0;
        case 0x110cb0u: goto label_110cb0;
        default: break;
    }

    ctx->pc = 0x110c58u;

    // 0x110c58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x110c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x110c5c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x110c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x110c60: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x110c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x110c64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x110c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x110c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x110c6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x110c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x110c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x110c74: 0xc046028  jal         func_1180A0
    ctx->pc = 0x110C74u;
    SET_GPR_U32(ctx, 31, 0x110C7Cu);
    ctx->pc = 0x110C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C74u;
    // 0x110c78: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x110C74u, 0x110C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C7Cu;
label_110c7c:
    // 0x110c7c: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x110c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x110c80: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x110c80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x110c84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c88: 0x24840b38  addiu       $a0, $a0, 0xB38
    ctx->pc = 0x110c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2872));
    // 0x110c8c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x110c8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c90: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x110c90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x110c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c98: 0xc043f72  jal         func_10FDC8
    ctx->pc = 0x110C98u;
    SET_GPR_U32(ctx, 31, 0x110CA0u);
    ctx->pc = 0x110C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C98u;
    // 0x110c9c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDC8u, 0x110C98u, 0x110CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CA0u;
label_110ca0:
    // 0x110ca0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110CA0u;
    {
        const bool branch_taken_0x110ca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CA0u;
        // 0x110ca4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ca0) {
            ctx->pc = 0x110CB4u;
            goto label_110cb4;
        }
    }
    ctx->pc = 0x110CA8u;
    // 0x110ca8: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x110CA8u;
    SET_GPR_U32(ctx, 31, 0x110CB0u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x110CA8u, 0x110CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110CB0u;
label_110cb0:
    // 0x110cb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x110cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_110cb4:
    // 0x110cb4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x110cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110cb8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x110cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110cbc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x110cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x110CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110CC0u;
        // 0x110cc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110CC8u;
}
