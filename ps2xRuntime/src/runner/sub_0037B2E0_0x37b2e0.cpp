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

// Function: sub_0037B2E0
// Address: 0x37b2e0 - 0x37b368
void sub_0037B2E0_0x37b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B2E0_0x37b2e0");
#endif

    ctx->pc = 0x37b2e0u;

    // 0x37b2e0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x37b2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x37b2e4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x37b2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x37b2e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37b2e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37b2ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37b2ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37b2f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x37b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37b2f4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x37b2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x37b2f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x37b2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37b2fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37b2fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x37b300: 0x28410800  slti        $at, $v0, 0x800
    ctx->pc = 0x37b300u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x37b304: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x37B304u;
    {
        const bool branch_taken_0x37b304 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b304) {
            ctx->pc = 0x37B328u;
            goto label_37b328;
        }
    }
    ctx->pc = 0x37B30Cu;
    // 0x37b30c: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x37b30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x37b310: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37b310u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37b314: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x37b314u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x37b318: 0xc1100a  movz        $v0, $a2, $at
    ctx->pc = 0x37b318u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x37b31c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x37B31Cu;
    {
        const bool branch_taken_0x37b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b31c) {
            ctx->pc = 0x37B360u;
            goto label_37b360;
        }
    }
    ctx->pc = 0x37B324u;
    // 0x37b324: 0x0  nop
    ctx->pc = 0x37b324u;
    // NOP
label_37b328:
    // 0x37b328: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x37b328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x37b32c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x37b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x37b330: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x37b330u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x37b334: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x37b334u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37b338: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x37b338u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x37b33c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x37B33Cu;
    {
        const bool branch_taken_0x37b33c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b33c) {
            ctx->pc = 0x37B354u;
            goto label_37b354;
        }
    }
    ctx->pc = 0x37B344u;
    // 0x37b344: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x37b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x37b348: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x37b348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37b34c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37B34Cu;
    {
        const bool branch_taken_0x37b34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B34Cu;
        // 0x37b350: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b34c) {
            ctx->pc = 0x37B360u;
            goto label_37b360;
        }
    }
    ctx->pc = 0x37B354u;
label_37b354:
    // 0x37b354: 0x41023  negu        $v0, $a0
    ctx->pc = 0x37b354u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x37b358: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x37b358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37b35c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x37b35cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_37b360:
    // 0x37b360: 0x3e00008  jr          $ra
    ctx->pc = 0x37B360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B368u;
}
