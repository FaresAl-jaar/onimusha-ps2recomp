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

// Function: sub_002243A0
// Address: 0x2243a0 - 0x2243ec
void sub_002243A0_0x2243a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002243A0_0x2243a0");
#endif

    switch (ctx->pc) {
        case 0x2243c4u: goto label_2243c4;
        default: break;
    }

    ctx->pc = 0x2243a0u;

    // 0x2243a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2243a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2243a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2243a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2243a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2243a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2243ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2243acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2243b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2243b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2243b4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2243b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2243b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2243b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2243bc: 0xc088e5e  jal         func_223978
    ctx->pc = 0x2243BCu;
    SET_GPR_U32(ctx, 31, 0x2243C4u);
    ctx->pc = 0x2243C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2243BCu;
    // 0x2243c0: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x2243BCu, 0x2243C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2243C4u;
label_2243c4:
    // 0x2243c4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2243C4u;
    {
        const bool branch_taken_0x2243c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2243c4) {
            ctx->pc = 0x2243C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2243C4u;
            // 0x2243c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2243DCu;
            goto label_2243dc;
        }
    }
    ctx->pc = 0x2243CCu;
    // 0x2243cc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2243ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2243d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2243d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2243d4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2243d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2243d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2243d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2243dc:
    // 0x2243dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2243dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2243e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2243e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2243e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2243E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2243E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2243E4u;
        // 0x2243e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2243E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2243ECu;
}
