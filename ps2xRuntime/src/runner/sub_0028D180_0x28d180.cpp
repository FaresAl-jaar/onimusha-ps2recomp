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

// Function: sub_0028D180
// Address: 0x28d180 - 0x28d200
void sub_0028D180_0x28d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D180_0x28d180");
#endif

    switch (ctx->pc) {
        case 0x28d1bcu: goto label_28d1bc;
        case 0x28d1ccu: goto label_28d1cc;
        case 0x28d1e4u: goto label_28d1e4;
        default: break;
    }

    ctx->pc = 0x28d180u;

    // 0x28d180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28d180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28d184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28d184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28d188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d18c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28d18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28d190: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28d190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d194: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x28D194u;
    {
        const bool branch_taken_0x28d194 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D194u;
        // 0x28d198: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d194) {
            ctx->pc = 0x28D1E8u;
            goto label_28d1e8;
        }
    }
    ctx->pc = 0x28D19Cu;
    // 0x28d19c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x28d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x28d1a0: 0x24427680  addiu       $v0, $v0, 0x7680
    ctx->pc = 0x28d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30336));
    // 0x28d1a4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x28d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x28d1a8: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x28d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x28d1ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D1ACu;
    {
        const bool branch_taken_0x28d1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d1ac) {
            ctx->pc = 0x28D1C0u;
            goto label_28d1c0;
        }
    }
    ctx->pc = 0x28D1B4u;
    // 0x28d1b4: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x28D1B4u;
    SET_GPR_U32(ctx, 31, 0x28D1BCu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x28D1B4u, 0x28D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D1BCu;
label_28d1bc:
    // 0x28d1bc: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x28d1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_28d1c0:
    // 0x28d1c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d1c4: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x28D1C4u;
    SET_GPR_U32(ctx, 31, 0x28D1CCu);
    ctx->pc = 0x28D1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D1C4u;
    // 0x28d1c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x28D1C4u, 0x28D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D1CCu;
label_28d1cc:
    // 0x28d1cc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x28d1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x28d1d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x28d1d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28d1d4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D1D4u;
    {
        const bool branch_taken_0x28d1d4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x28D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1D4u;
        // 0x28d1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1d4) {
            ctx->pc = 0x28D1E8u;
            goto label_28d1e8;
        }
    }
    ctx->pc = 0x28D1DCu;
    // 0x28d1dc: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x28D1DCu;
    SET_GPR_U32(ctx, 31, 0x28D1E4u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x28D1DCu, 0x28D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D1E4u;
label_28d1e4:
    // 0x28d1e4: 0x0  nop
    ctx->pc = 0x28d1e4u;
    // NOP
label_28d1e8:
    // 0x28d1e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28d1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d1ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28d1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d1f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d1f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d1f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28d1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x28D1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D1F8u;
        // 0x28d1fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D200u;
}
