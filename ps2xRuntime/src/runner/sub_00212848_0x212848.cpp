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

// Function: sub_00212848
// Address: 0x212848 - 0x2128b8
void sub_00212848_0x212848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212848_0x212848");
#endif

    switch (ctx->pc) {
        case 0x212858u: goto label_212858;
        case 0x212860u: goto label_212860;
        case 0x21288cu: goto label_21288c;
        default: break;
    }

    ctx->pc = 0x212848u;

    // 0x212848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21284c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212850: 0xc084a2e  jal         func_2128B8
    ctx->pc = 0x212850u;
    SET_GPR_U32(ctx, 31, 0x212858u);
    ctx->pc = 0x2128B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2128B8u, 0x212850u, 0x212858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212858u;
label_212858:
    // 0x212858: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x212858u;
    {
        const bool branch_taken_0x212858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212858u;
        // 0x21285c: 0x3c050088  lui         $a1, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)136 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x212858) {
            ctx->pc = 0x212880u;
            goto label_212880;
        }
    }
    ctx->pc = 0x212860u;
label_212860:
    // 0x212860: 0x0  nop
    ctx->pc = 0x212860u;
    // NOP
    // 0x212864: 0x0  nop
    ctx->pc = 0x212864u;
    // NOP
    // 0x212868: 0x0  nop
    ctx->pc = 0x212868u;
    // NOP
    // 0x21286c: 0x0  nop
    ctx->pc = 0x21286cu;
    // NOP
    // 0x212870: 0x0  nop
    ctx->pc = 0x212870u;
    // NOP
    // 0x212874: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x212874u;
    {
        const bool branch_taken_0x212874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212874) {
            ctx->pc = 0x212860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_212860;
        }
    }
    ctx->pc = 0x21287Cu;
    // 0x21287c: 0x0  nop
    ctx->pc = 0x21287cu;
    // NOP
label_212880:
    // 0x212880: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x212880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x212884: 0xc07f4f2  jal         func_1FD3C8
    ctx->pc = 0x212884u;
    SET_GPR_U32(ctx, 31, 0x21288Cu);
    ctx->pc = 0x212888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212884u;
    // 0x212888: 0x24a50e20  addiu       $a1, $a1, 0xE20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3C8u, 0x212884u, 0x21288Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21288Cu;
label_21288c:
    // 0x21288c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21288Cu;
    {
        const bool branch_taken_0x21288c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x212890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21288Cu;
        // 0x212890: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21288c) {
            ctx->pc = 0x2128A8u;
            goto label_2128a8;
        }
    }
    ctx->pc = 0x212894u;
    // 0x212894: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x212894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x212898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x212898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21289c: 0x34a50d01  ori         $a1, $a1, 0xD01
    ctx->pc = 0x21289cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3329);
    // 0x2128a0: 0x80848e0  j           func_212380
    ctx->pc = 0x2128A0u;
    ctx->pc = 0x2128A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2128A0u;
    // 0x2128a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x2128A8u;
label_2128a8:
    // 0x2128a8: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2128a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2128ac: 0xac60a1f0  sw          $zero, -0x5E10($v1)
    ctx->pc = 0x2128acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BA1F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BA1F0u, _value); } while (0);
    // 0x2128b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2128B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2128B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2128B0u;
        // 0x2128b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2128B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2128B8u;
}
