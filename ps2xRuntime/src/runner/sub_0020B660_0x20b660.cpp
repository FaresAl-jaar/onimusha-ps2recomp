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

// Function: sub_0020B660
// Address: 0x20b660 - 0x20b6a8
void sub_0020B660_0x20b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B660_0x20b660");
#endif

    switch (ctx->pc) {
        case 0x20b690u: goto label_20b690;
        default: break;
    }

    ctx->pc = 0x20b660u;

    // 0x20b660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b664: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20b664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b668: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x20b668u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b66c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20b66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b670: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20b674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b678: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20b678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b67c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x20b67cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b680: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20b680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20b684: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20b684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20b688: 0xc094d4e  jal         func_253538
    ctx->pc = 0x20B688u;
    SET_GPR_U32(ctx, 31, 0x20B690u);
    ctx->pc = 0x20B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B688u;
    // 0x20b68c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253538u, 0x20B688u, 0x20B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B690u;
label_20b690:
    // 0x20b690: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x20b690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x20b694: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20b694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20b698: 0xac50fb44  sw          $s0, -0x4BC($v0)
    ctx->pc = 0x20b698u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x87FB44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x87FB44u, _value); } while (0);
    // 0x20b69c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x20B6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6A0u;
        // 0x20b6a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B6A8u;
}
