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

// Function: sub_00252508
// Address: 0x252508 - 0x25255c
void sub_00252508_0x252508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252508_0x252508");
#endif

    switch (ctx->pc) {
        case 0x252548u: goto label_252548;
        default: break;
    }

    ctx->pc = 0x252508u;

    // 0x252508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25250c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x25250cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x252510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252514: 0x3c100089  lui         $s0, 0x89
    ctx->pc = 0x252514u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)137 << 16));
    // 0x252518: 0x244284c0  addiu       $v0, $v0, -0x7B40
    ctx->pc = 0x252518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935744));
    // 0x25251c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25251cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x252520: 0x261085c0  addiu       $s0, $s0, -0x7A40
    ctx->pc = 0x252520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936000));
    // 0x252524: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x252524u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8884C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C0u, _value); } while (0);
    // 0x252528: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x252528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8884C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C4u, _value); } while (0);
    // 0x25252c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25252cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252530: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x252530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8884C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C8u, _value); } while (0);
    // 0x252534: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x252534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252538: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x252538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25253c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x25253cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x252540: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x252540u;
    SET_GPR_U32(ctx, 31, 0x252548u);
    ctx->pc = 0x252544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252540u;
    // 0x252544: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x252540u, 0x252548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252548u;
label_252548:
    // 0x252548: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x252548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25254c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25254cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x252550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252554: 0x3e00008  jr          $ra
    ctx->pc = 0x252554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252554u;
        // 0x252558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25255Cu;
}
