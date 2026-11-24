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

// Function: sub_00252630
// Address: 0x252630 - 0x25269c
void sub_00252630_0x252630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252630_0x252630");
#endif

    switch (ctx->pc) {
        case 0x252678u: goto label_252678;
        default: break;
    }

    ctx->pc = 0x252630u;

    // 0x252630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252634: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x252634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x252638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25263c: 0x3c100089  lui         $s0, 0x89
    ctx->pc = 0x25263cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)137 << 16));
    // 0x252640: 0x244284c0  addiu       $v0, $v0, -0x7B40
    ctx->pc = 0x252640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935744));
    // 0x252644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x252644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x252648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25264c: 0x261085c0  addiu       $s0, $s0, -0x7A40
    ctx->pc = 0x25264cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936000));
    // 0x252650: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x252650u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8884C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C0u, _value); } while (0);
    // 0x252654: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x252654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x252658: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x252658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8884C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C4u, _value); } while (0);
    // 0x25265c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25265cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252660: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x252660u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8884C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C8u, _value); } while (0);
    // 0x252664: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x252664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252668: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x252668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25266c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x25266cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252670: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x252670u;
    SET_GPR_U32(ctx, 31, 0x252678u);
    ctx->pc = 0x252674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252670u;
    // 0x252674: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x252670u, 0x252678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252678u;
label_252678:
    // 0x252678: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x252678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25267c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x25267cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x252680: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x252680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x252684: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x252684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x252688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25268c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25268cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x252690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252694: 0x3e00008  jr          $ra
    ctx->pc = 0x252694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252694u;
        // 0x252698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25269Cu;
}
