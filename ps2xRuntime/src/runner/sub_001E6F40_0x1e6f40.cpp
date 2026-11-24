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

// Function: sub_001E6F40
// Address: 0x1e6f40 - 0x1e6fa8
void sub_001E6F40_0x1e6f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6F40_0x1e6f40");
#endif

    switch (ctx->pc) {
        case 0x1e6f68u: goto label_1e6f68;
        case 0x1e6f90u: goto label_1e6f90;
        default: break;
    }

    ctx->pc = 0x1e6f40u;

    // 0x1e6f40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e6f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e6f44: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e6f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e6f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e6f4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6f50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e6f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6f58: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1e6f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f5c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e6f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e6f60: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1E6F60u;
    SET_GPR_U32(ctx, 31, 0x1E6F68u);
    ctx->pc = 0x1E6F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F60u;
    // 0x1e6f64: 0x26260040  addiu       $a2, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E6F60u, 0x1E6F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F68u;
label_1e6f68:
    // 0x1e6f68: 0x96230036  lhu         $v1, 0x36($s1)
    ctx->pc = 0x1e6f68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x1e6f6c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e6f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1e6f70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e6f70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e6f74: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e6f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e6f78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e6f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f7c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1e6f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e6f80: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e6f80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e6f84: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1e6f84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e6f88: 0xc0b6c2c  jal         func_2DB0B0
    ctx->pc = 0x1E6F88u;
    SET_GPR_U32(ctx, 31, 0x1E6F90u);
    ctx->pc = 0x1E6F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6F88u;
    // 0x1e6f8c: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB0B0u, 0x1E6F88u, 0x1E6F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6F90u;
label_1e6f90:
    // 0x1e6f90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e6f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6f94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e6f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6f98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6FA0u;
        // 0x1e6fa4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6FA8u;
}
