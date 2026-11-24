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

// Function: sub_00136C30
// Address: 0x136c30 - 0x136ca8
void sub_00136C30_0x136c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136C30_0x136c30");
#endif

    switch (ctx->pc) {
        case 0x136c60u: goto label_136c60;
        case 0x136c8cu: goto label_136c8c;
        default: break;
    }

    ctx->pc = 0x136c30u;

    // 0x136c30: 0x24030334  addiu       $v1, $zero, 0x334
    ctx->pc = 0x136c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 820));
    // 0x136c34: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136c38: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x136c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x136c3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x136c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x136c40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x136c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x136c44: 0x24420ed0  addiu       $v0, $v0, 0xED0
    ctx->pc = 0x136c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3792));
    // 0x136c48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x136c4c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x136c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136c50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136c54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x136c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x136c58: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x136c58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136c5c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x136c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_136c60:
    // 0x136c60: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x136c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x136c64: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x136c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x136c68: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x136c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x136c6c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x136c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x136c70: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x136c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x136c74: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x136c74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x136c78: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x136c78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x136c7c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x136c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x136c80: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x136c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x136c84: 0xc049590  jal         func_125640
    ctx->pc = 0x136C84u;
    SET_GPR_U32(ctx, 31, 0x136C8Cu);
    ctx->pc = 0x136C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C84u;
    // 0x136c88: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x136C84u, 0x136C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C8Cu;
label_136c8c:
    // 0x136c8c: 0x623fff4  bgezl       $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x136C8Cu;
    {
        const bool branch_taken_0x136c8c = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x136c8c) {
            ctx->pc = 0x136C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136C8Cu;
            // 0x136c90: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136c60;
        }
    }
    ctx->pc = 0x136C94u;
    // 0x136c94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136c98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x136c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136c9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x136CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CA0u;
        // 0x136ca4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136CA8u;
}
