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

// Function: sub_0028CD00
// Address: 0x28cd00 - 0x28cd5c
void sub_0028CD00_0x28cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CD00_0x28cd00");
#endif

    switch (ctx->pc) {
        case 0x28cd44u: goto label_28cd44;
        default: break;
    }

    ctx->pc = 0x28cd00u;

    // 0x28cd00: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x28cd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x28cd04: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x28cd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x28cd08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x28cd08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x28cd0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28cd0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28cd10: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x28cd10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28cd14: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28cd14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28cd18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28cd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28cd1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28cd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28cd20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28cd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd24: 0x9082015e  lbu         $v0, 0x15E($a0)
    ctx->pc = 0x28cd24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 350)));
    // 0x28cd28: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x28cd28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x28cd2c: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x28cd2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x28cd30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CD30u;
    {
        const bool branch_taken_0x28cd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD30u;
        // 0x28cd34: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd30) {
            ctx->pc = 0x28CD48u;
            goto label_28cd48;
        }
    }
    ctx->pc = 0x28CD38u;
    // 0x28cd38: 0x8c870154  lw          $a3, 0x154($a0)
    ctx->pc = 0x28cd38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x28cd3c: 0xc0a2e68  jal         func_28B9A0
    ctx->pc = 0x28CD3Cu;
    SET_GPR_U32(ctx, 31, 0x28CD44u);
    ctx->pc = 0x28CD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CD3Cu;
    // 0x28cd40: 0x248600e0  addiu       $a2, $a0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B9A0u, 0x28CD3Cu, 0x28CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CD44u;
label_28cd44:
    // 0x28cd44: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28cd44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28cd48:
    // 0x28cd48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28cd48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cd4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28cd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cd50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28cd50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cd54: 0x3e00008  jr          $ra
    ctx->pc = 0x28CD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CD54u;
        // 0x28cd58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CD5Cu;
}
