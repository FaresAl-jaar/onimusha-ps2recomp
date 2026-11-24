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

// Function: sub_003F6E40
// Address: 0x3f6e40 - 0x3f6eac
void sub_003F6E40_0x3f6e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6E40_0x3f6e40");
#endif

    switch (ctx->pc) {
        case 0x3f6e60u: goto label_3f6e60;
        case 0x3f6e6cu: goto label_3f6e6c;
        case 0x3f6ea0u: goto label_3f6ea0;
        default: break;
    }

    ctx->pc = 0x3f6e40u;

    // 0x3f6e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f6e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f6e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f6e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f6e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f6e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f6e4c: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3f6e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f6e50: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3f6e50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f6e54: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3f6e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3f6e58: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x3F6E58u;
    SET_GPR_U32(ctx, 31, 0x3F6E60u);
    ctx->pc = 0x3F6E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6E58u;
    // 0x3f6e5c: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x3F6E58u, 0x3F6E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6E60u;
label_3f6e60:
    // 0x3f6e60: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3f6e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3f6e64: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3F6E64u;
    SET_GPR_U32(ctx, 31, 0x3F6E6Cu);
    ctx->pc = 0x3F6E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6E64u;
    // 0x3f6e68: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3F6E64u, 0x3F6E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6E6Cu;
label_3f6e6c:
    // 0x3f6e6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f6e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f6e70: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f6e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f6e74: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3f6e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3f6e78: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3f6e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3f6e7c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3f6e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3f6e80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f6e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6e84: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3f6e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3f6e88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f6e88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6e8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f6e8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6e90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f6e90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6e94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f6e94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6e98: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3F6E98u;
    SET_GPR_U32(ctx, 31, 0x3F6EA0u);
    ctx->pc = 0x3F6E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6E98u;
    // 0x3f6e9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3F6E98u, 0x3F6EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6EA0u;
label_3f6ea0:
    // 0x3f6ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f6ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f6ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6EA4u;
        // 0x3f6ea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6EACu;
}
