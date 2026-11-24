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

// Function: sub_00247510
// Address: 0x247510 - 0x24757c
void sub_00247510_0x247510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247510_0x247510");
#endif

    switch (ctx->pc) {
        case 0x247568u: goto label_247568;
        default: break;
    }

    ctx->pc = 0x247510u;

    // 0x247510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247514: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x247514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x247518: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x247518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24751c: 0x3c100088  lui         $s0, 0x88
    ctx->pc = 0x24751cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)136 << 16));
    // 0x247520: 0x24426280  addiu       $v0, $v0, 0x6280
    ctx->pc = 0x247520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25216));
    // 0x247524: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x247524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x247528: 0x26106380  addiu       $s0, $s0, 0x6380
    ctx->pc = 0x247528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25472));
    // 0x24752c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24752cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x247530: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x247530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x886280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x886280u, _value); } while (0);
    // 0x247534: 0x2464fac0  addiu       $a0, $v1, -0x540
    ctx->pc = 0x247534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965952));
    // 0x247538: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x247538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x886284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x886284u, _value); } while (0);
    // 0x24753c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24753cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x247540: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x247540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x886288u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x886288u, _value); } while (0);
    // 0x247544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247548: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x247548u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x88628Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x88628Cu, _value); } while (0);
    // 0x24754c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x24754cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247550: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x247550u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247554: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x247554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x247558: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x247558u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24755c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x24755cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247560: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x247560u;
    SET_GPR_U32(ctx, 31, 0x247568u);
    ctx->pc = 0x247564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247560u;
    // 0x247564: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x247560u, 0x247568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247568u;
label_247568:
    // 0x247568: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x247568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24756c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247570: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x247570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247574: 0x3e00008  jr          $ra
    ctx->pc = 0x247574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247574u;
        // 0x247578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24757Cu;
}
