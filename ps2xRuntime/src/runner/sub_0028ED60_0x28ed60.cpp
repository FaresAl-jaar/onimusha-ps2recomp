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

// Function: sub_0028ED60
// Address: 0x28ed60 - 0x28edb8
void sub_0028ED60_0x28ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ED60_0x28ed60");
#endif

    switch (ctx->pc) {
        case 0x28eda8u: goto label_28eda8;
        default: break;
    }

    ctx->pc = 0x28ed60u;

    // 0x28ed60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ed64: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x28ed64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x28ed68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ed68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ed6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ed70: 0xac2604d0  sw          $a2, 0x4D0($at)
    ctx->pc = 0x28ed70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8C04D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C04D0u, _value); } while (0);
    // 0x28ed74: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x28ed74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x28ed78: 0xac2404c0  sw          $a0, 0x4C0($at)
    ctx->pc = 0x28ed78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8C04C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C04C0u, _value); } while (0);
    // 0x28ed7c: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x28ed7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x28ed80: 0xac2204c4  sw          $v0, 0x4C4($at)
    ctx->pc = 0x28ed80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8C04C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C04C4u, _value); } while (0);
    // 0x28ed84: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x28ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x28ed88: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x28ed88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x28ed8c: 0x244204c0  addiu       $v0, $v0, 0x4C0
    ctx->pc = 0x28ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1216));
    // 0x28ed90: 0xac2204c8  sw          $v0, 0x4C8($at)
    ctx->pc = 0x28ed90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8C04C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C04C8u, _value); } while (0);
    // 0x28ed94: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x28ed94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x28ed98: 0xac2504cc  sw          $a1, 0x4CC($at)
    ctx->pc = 0x28ed98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8C04CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C04CCu, _value); } while (0);
    // 0x28ed9c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x28ed9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x28eda0: 0xc054048  jal         func_150120
    ctx->pc = 0x28EDA0u;
    SET_GPR_U32(ctx, 31, 0x28EDA8u);
    ctx->pc = 0x28EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EDA0u;
    // 0x28eda4: 0x24040ff7  addiu       $a0, $zero, 0xFF7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4087));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150120u, 0x28EDA0u, 0x28EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EDA8u;
label_28eda8:
    // 0x28eda8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28eda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28edac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28edacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28edb0: 0x3e00008  jr          $ra
    ctx->pc = 0x28EDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EDB0u;
        // 0x28edb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EDB8u;
}
