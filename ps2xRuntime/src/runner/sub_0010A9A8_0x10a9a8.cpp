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

// Function: sub_0010A9A8
// Address: 0x10a9a8 - 0x10a9f8
void sub_0010A9A8_0x10a9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A9A8_0x10a9a8");
#endif

    switch (ctx->pc) {
        case 0x10a9bcu: goto label_10a9bc;
        default: break;
    }

    ctx->pc = 0x10a9a8u;

    // 0x10a9a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a9ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a9b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a9b4: 0xc042a02  jal         func_10A808
    ctx->pc = 0x10A9B4u;
    SET_GPR_U32(ctx, 31, 0x10A9BCu);
    ctx->pc = 0x10A9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9B4u;
    // 0x10a9b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A808u, 0x10A9B4u, 0x10A9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9BCu;
label_10a9bc:
    // 0x10a9bc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10a9c0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x10a9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x10a9c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x10a9c8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x10a9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10a9cc: 0x31823  negu        $v1, $v1
    ctx->pc = 0x10a9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x10a9d0: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x10a9d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x10a9d4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A9D4u;
    {
        const bool branch_taken_0x10a9d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9D4u;
        // 0x10a9d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9d4) {
            ctx->pc = 0x10A9ECu;
            goto label_10a9ec;
        }
    }
    ctx->pc = 0x10A9DCu;
    // 0x10a9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a9e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a9e4: 0x8042a10  j           func_10A840
    ctx->pc = 0x10A9E4u;
    ctx->pc = 0x10A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9E4u;
    // 0x10a9e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A840u;
    sub_0010A840_0x10a840(rdram, ctx, runtime); return;
    ctx->pc = 0x10A9ECu;
label_10a9ec:
    // 0x10a9ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9F0u;
        // 0x10a9f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A9F8u;
}
