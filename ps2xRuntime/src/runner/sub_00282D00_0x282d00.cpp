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

// Function: sub_00282D00
// Address: 0x282d00 - 0x282d6c
void sub_00282D00_0x282d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282D00_0x282d00");
#endif

    switch (ctx->pc) {
        case 0x282d30u: goto label_282d30;
        case 0x282d54u: goto label_282d54;
        default: break;
    }

    ctx->pc = 0x282d00u;

    // 0x282d00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282d04: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x282d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x282d08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x282d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x282d0c: 0x244244d0  addiu       $v0, $v0, 0x44D0
    ctx->pc = 0x282d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17616));
    // 0x282d10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282d14: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x282d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x282d18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282d1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x282d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d20: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x282d20u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E44D0u));
    // 0x282d24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x282d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d28: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x282D28u;
    SET_GPR_U32(ctx, 31, 0x282D30u);
    ctx->pc = 0x282D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D28u;
    // 0x282d2c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x282D28u, 0x282D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D30u;
label_282d30:
    // 0x282d30: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x282d30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
    // 0x282d34: 0x10543c  dsll32      $t2, $s0, 16
    ctx->pc = 0x282d34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) << (32 + 16));
    // 0x282d38: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x282d38u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x282d3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x282d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d40: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x282d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282d44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x282d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x282d48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d4c: 0xc0a90f4  jal         func_2A43D0
    ctx->pc = 0x282D4Cu;
    SET_GPR_U32(ctx, 31, 0x282D54u);
    ctx->pc = 0x282D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282D4Cu;
    // 0x282d50: 0x27a90030  addiu       $t1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43D0u, 0x282D4Cu, 0x282D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282D54u;
label_282d54:
    // 0x282d54: 0xae222978  sw          $v0, 0x2978($s1)
    ctx->pc = 0x282d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10616), GPR_U32(ctx, 2));
    // 0x282d58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x282d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282d64: 0x3e00008  jr          $ra
    ctx->pc = 0x282D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282D64u;
        // 0x282d68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282D6Cu;
}
