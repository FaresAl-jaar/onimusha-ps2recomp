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

// Function: sub_002245A0
// Address: 0x2245a0 - 0x2245f4
void sub_002245A0_0x2245a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002245A0_0x2245a0");
#endif

    switch (ctx->pc) {
        case 0x2245bcu: goto label_2245bc;
        default: break;
    }

    ctx->pc = 0x2245a0u;

    // 0x2245a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2245a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2245a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2245a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2245a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2245a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2245ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2245acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2245b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2245b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2245b4: 0xc088e5e  jal         func_223978
    ctx->pc = 0x2245B4u;
    SET_GPR_U32(ctx, 31, 0x2245BCu);
    ctx->pc = 0x2245B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245B4u;
    // 0x2245b8: 0x8c910004  lw          $s1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x2245B4u, 0x2245BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2245BCu;
label_2245bc:
    // 0x2245bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2245bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2245c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2245C0u;
    {
        const bool branch_taken_0x2245c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2245C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245C0u;
        // 0x2245c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245c0) {
            ctx->pc = 0x2245E0u;
            goto label_2245e0;
        }
    }
    ctx->pc = 0x2245C8u;
    // 0x2245c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2245c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2245cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2245ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2245d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2245d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2245d4: 0x8088f06  j           func_223C18
    ctx->pc = 0x2245D4u;
    ctx->pc = 0x2245D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245D4u;
    // 0x2245d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C18u;
    sub_00223C18_0x223c18(rdram, ctx, runtime); return;
    ctx->pc = 0x2245DCu;
    // 0x2245dc: 0x0  nop
    ctx->pc = 0x2245dcu;
    // NOP
label_2245e0:
    // 0x2245e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2245e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2245e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2245e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2245e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2245e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2245ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2245ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2245F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2245ECu;
        // 0x2245f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2245ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2245F4u;
}
