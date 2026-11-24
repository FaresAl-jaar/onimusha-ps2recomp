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

// Function: sub_0024E7A0
// Address: 0x24e7a0 - 0x24e804
void sub_0024E7A0_0x24e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E7A0_0x24e7a0");
#endif

    switch (ctx->pc) {
        case 0x24e7e0u: goto label_24e7e0;
        default: break;
    }

    ctx->pc = 0x24e7a0u;

    // 0x24e7a0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e7a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24e7a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24e7a8: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24e7ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e7b0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24E7B0u;
    {
        const bool branch_taken_0x24e7b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E7B0u;
        // 0x24e7b4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e7b0) {
            ctx->pc = 0x24E7C8u;
            goto label_24e7c8;
        }
    }
    ctx->pc = 0x24E7B8u;
    // 0x24e7b8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24e7bc: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24e7c0: 0x5860000e  blezl       $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x24E7C0u;
    {
        const bool branch_taken_0x24e7c0 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x24e7c0) {
            ctx->pc = 0x24E7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E7C0u;
            // 0x24e7c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E7FCu;
            goto label_24e7fc;
        }
    }
    ctx->pc = 0x24E7C8u;
label_24e7c8:
    // 0x24e7c8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x24e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x24e7cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24e7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24e7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7d4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x24e7d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7d8: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x24E7D8u;
    SET_GPR_U32(ctx, 31, 0x24E7E0u);
    ctx->pc = 0x24E7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E7D8u;
    // 0x24e7dc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x24E7D8u, 0x24E7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E7E0u;
label_24e7e0:
    // 0x24e7e0: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24e7e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e7e8: 0x24637510  addiu       $v1, $v1, 0x7510
    ctx->pc = 0x24e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29968));
    // 0x24e7ec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x24e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x24e7f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24e7f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4D7510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D7510u, _value); } while (0);
    // 0x24e7f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24e7f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4D7514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4D7514u, _value); } while (0);
    // 0x24e7f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24e7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24e7fc:
    // 0x24e7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x24E7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E7FCu;
        // 0x24e800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E804u;
}
