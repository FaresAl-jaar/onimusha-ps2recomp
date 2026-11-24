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

// Function: sub_002ED190
// Address: 0x2ed190 - 0x2ed1f4
void sub_002ED190_0x2ed190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED190_0x2ed190");
#endif

    switch (ctx->pc) {
        case 0x2ed1e4u: goto label_2ed1e4;
        default: break;
    }

    ctx->pc = 0x2ed190u;

    // 0x2ed190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed194: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ed194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed19c: 0x8ca40148  lw          $a0, 0x148($a1)
    ctx->pc = 0x2ed19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x2ed1a0: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x2ed1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x2ed1a4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2ed1a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ed1a8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2ed1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2ed1ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ed1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ed1b0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2ED1B0u;
    {
        const bool branch_taken_0x2ed1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1B0u;
        // 0x2ed1b4: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1b0) {
            ctx->pc = 0x2ED1E8u;
            goto label_2ed1e8;
        }
    }
    ctx->pc = 0x2ED1B8u;
    // 0x2ed1b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ed1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ed1bc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2ed1bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ed1c0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2ed1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2ed1c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ed1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ed1c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED1C8u;
    {
        const bool branch_taken_0x2ed1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed1c8) {
            ctx->pc = 0x2ED1E8u;
            goto label_2ed1e8;
        }
    }
    ctx->pc = 0x2ED1D0u;
    // 0x2ed1d0: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x2ed1d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ed1d4: 0x24a401c0  addiu       $a0, $a1, 0x1C0
    ctx->pc = 0x2ed1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 448));
    // 0x2ed1d8: 0x90e70001  lbu         $a3, 0x1($a3)
    ctx->pc = 0x2ed1d8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2ed1dc: 0xc09f9a4  jal         func_27E690
    ctx->pc = 0x2ED1DCu;
    SET_GPR_U32(ctx, 31, 0x2ED1E4u);
    ctx->pc = 0x2ED1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED1DCu;
    // 0x2ed1e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x2ED1DCu, 0x2ED1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED1E4u;
label_2ed1e4:
    // 0x2ed1e4: 0x0  nop
    ctx->pc = 0x2ed1e4u;
    // NOP
label_2ed1e8:
    // 0x2ed1e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1ECu;
        // 0x2ed1f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED1F4u;
}
