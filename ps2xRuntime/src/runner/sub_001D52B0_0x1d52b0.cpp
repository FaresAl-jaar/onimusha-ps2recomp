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

// Function: sub_001D52B0
// Address: 0x1d52b0 - 0x1d5338
void sub_001D52B0_0x1d52b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D52B0_0x1d52b0");
#endif

    ctx->pc = 0x1d52b0u;

    // 0x1d52b0: 0x8f8387fc  lw          $v1, -0x7804($gp)
    ctx->pc = 0x1d52b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
    // 0x1d52b4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1d52b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1d52b8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1d52b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1d52bc: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1d52bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1d52c0: 0x0  nop
    ctx->pc = 0x1d52c0u;
    // NOP
    // 0x1d52c4: 0x0  nop
    ctx->pc = 0x1d52c4u;
    // NOP
    // 0x1d52c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1d52c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d52cc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1d52ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1d52d0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d52d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1d52d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d52d8: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D52D8u;
    {
        const bool branch_taken_0x1d52d8 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1d52d8) {
            ctx->pc = 0x1D5320u;
            goto label_1d5320;
        }
    }
    ctx->pc = 0x1D52E0u;
    // 0x1d52e0: 0x8f8587f8  lw          $a1, -0x7808($gp)
    ctx->pc = 0x1d52e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936568)));
    // 0x1d52e4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1d52e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d52e8: 0x3c0350ab  lui         $v1, 0x50AB
    ctx->pc = 0x1d52e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20651 << 16));
    // 0x1d52ec: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1d52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1d52f0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d52f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d52f4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d52f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d52f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d52f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d52fc: 0x34423531  ori         $v0, $v0, 0x3531
    ctx->pc = 0x1d52fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13617);
    // 0x1d5300: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d5300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d5304: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1d5304u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1d5308: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x1d5308u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x1d530c: 0x8f8287fc  lw          $v0, -0x7804($gp)
    ctx->pc = 0x1d530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
    // 0x1d5310: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d5310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d5314: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5314u;
    {
        const bool branch_taken_0x1d5314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5314u;
        // 0x1d5318: 0xaf8287fc  sw          $v0, -0x7804($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5314) {
            ctx->pc = 0x1D5328u;
            goto label_1d5328;
        }
    }
    ctx->pc = 0x1D531Cu;
    // 0x1d531c: 0x0  nop
    ctx->pc = 0x1d531cu;
    // NOP
label_1d5320:
    // 0x1d5320: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5320u;
    {
        const bool branch_taken_0x1d5320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5320u;
        // 0x1d5324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5320) {
            ctx->pc = 0x1D5330u;
            goto label_1d5330;
        }
    }
    ctx->pc = 0x1D5328u;
label_1d5328:
    // 0x1d5328: 0x8f8287fc  lw          $v0, -0x7804($gp)
    ctx->pc = 0x1d5328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
    // 0x1d532c: 0x0  nop
    ctx->pc = 0x1d532cu;
    // NOP
label_1d5330:
    // 0x1d5330: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5338u;
}
