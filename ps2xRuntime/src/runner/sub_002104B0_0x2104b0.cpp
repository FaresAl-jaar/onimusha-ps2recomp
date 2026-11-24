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

// Function: sub_002104B0
// Address: 0x2104b0 - 0x21050c
void sub_002104B0_0x2104b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002104B0_0x2104b0");
#endif

    switch (ctx->pc) {
        case 0x2104c4u: goto label_2104c4;
        case 0x2104f8u: goto label_2104f8;
        default: break;
    }

    ctx->pc = 0x2104b0u;

    // 0x2104b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2104b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2104b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2104b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2104b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2104b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2104bc: 0xc084968  jal         func_2125A0
    ctx->pc = 0x2104BCu;
    SET_GPR_U32(ctx, 31, 0x2104C4u);
    ctx->pc = 0x2104C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2104BCu;
    // 0x2104c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x2104BCu, 0x2104C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2104C4u;
label_2104c4:
    // 0x2104c4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x2104c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x2104c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2104c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2104ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2104d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2104D0u;
    {
        const bool branch_taken_0x2104d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104D0u;
        // 0x2104d4: 0x34a50161  ori         $a1, $a1, 0x161 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)353);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104d0) {
            ctx->pc = 0x2104F0u;
            goto label_2104f0;
        }
    }
    ctx->pc = 0x2104D8u;
    // 0x2104d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2104d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2104dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2104dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2104e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2104e4: 0x80848e0  j           func_212380
    ctx->pc = 0x2104E4u;
    ctx->pc = 0x2104E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2104E4u;
    // 0x2104e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x2104ECu;
    // 0x2104ec: 0x0  nop
    ctx->pc = 0x2104ecu;
    // NOP
label_2104f0:
    // 0x2104f0: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x2104F0u;
    SET_GPR_U32(ctx, 31, 0x2104F8u);
    ctx->pc = 0x2104F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2104F0u;
    // 0x2104f4: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x2104F0u, 0x2104F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2104F8u;
label_2104f8:
    // 0x2104f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2104f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2104fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2104fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210500: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x210500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210504: 0x3e00008  jr          $ra
    ctx->pc = 0x210504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210504u;
        // 0x210508: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21050Cu;
}
