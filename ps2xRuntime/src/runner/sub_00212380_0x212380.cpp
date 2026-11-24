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

// Function: sub_00212380
// Address: 0x212380 - 0x2123f0
void sub_00212380_0x212380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212380_0x212380");
#endif

    switch (ctx->pc) {
        case 0x2123b4u: goto label_2123b4;
        case 0x2123c8u: goto label_2123c8;
        default: break;
    }

    ctx->pc = 0x212380u;

    // 0x212380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212384: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x212384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212388: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21238c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21238cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212390: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212394: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x212394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212398: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x212398u;
    {
        const bool branch_taken_0x212398 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212398u;
        // 0x21239c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212398) {
            ctx->pc = 0x2123DCu;
            goto label_2123dc;
        }
    }
    ctx->pc = 0x2123A0u;
    // 0x2123a0: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2123A0u;
    {
        const bool branch_taken_0x2123a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2123a0) {
            ctx->pc = 0x2123C0u;
            goto label_2123c0;
        }
    }
    ctx->pc = 0x2123A8u;
    // 0x2123a8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2123a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2123ac: 0xc0848fc  jal         func_2123F0
    ctx->pc = 0x2123ACu;
    SET_GPR_U32(ctx, 31, 0x2123B4u);
    ctx->pc = 0x2123B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123ACu;
    // 0x2123b0: 0x2484a164  addiu       $a0, $a0, -0x5E9C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943076));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2123F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2123F0u, 0x2123ACu, 0x2123B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123B4u;
label_2123b4:
    // 0x2123b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2123B4u;
    {
        const bool branch_taken_0x2123b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2123B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123B4u;
        // 0x2123b8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123b4) {
            ctx->pc = 0x2123DCu;
            goto label_2123dc;
        }
    }
    ctx->pc = 0x2123BCu;
    // 0x2123bc: 0x0  nop
    ctx->pc = 0x2123bcu;
    // NOP
label_2123c0:
    // 0x2123c0: 0xc0848fc  jal         func_2123F0
    ctx->pc = 0x2123C0u;
    SET_GPR_U32(ctx, 31, 0x2123C8u);
    ctx->pc = 0x2123C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2123C0u;
    // 0x2123c4: 0x260409f8  addiu       $a0, $s0, 0x9F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2123F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2123F0u, 0x2123C0u, 0x2123C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2123C8u;
label_2123c8:
    // 0x2123c8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2123c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2123cc: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2123CCu;
    {
        const bool branch_taken_0x2123cc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2123D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123CCu;
        // 0x2123d0: 0x21823  negu        $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2123cc) {
            ctx->pc = 0x2123D8u;
            goto label_2123d8;
        }
    }
    ctx->pc = 0x2123D4u;
    // 0x2123d4: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2123d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_2123d8:
    // 0x2123d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2123d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2123dc:
    // 0x2123dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2123dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2123e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2123e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2123e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2123e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2123e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2123E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2123ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2123E8u;
        // 0x2123ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2123E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2123F0u;
}
