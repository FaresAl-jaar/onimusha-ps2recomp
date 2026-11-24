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

// Function: sub_00252790
// Address: 0x252790 - 0x2527f8
void sub_00252790_0x252790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252790_0x252790");
#endif

    switch (ctx->pc) {
        case 0x2527d8u: goto label_2527d8;
        default: break;
    }

    ctx->pc = 0x252790u;

    // 0x252790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252794: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x252794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x252798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25279c: 0x3c100089  lui         $s0, 0x89
    ctx->pc = 0x25279cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)137 << 16));
    // 0x2527a0: 0x244284c0  addiu       $v0, $v0, -0x7B40
    ctx->pc = 0x2527a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935744));
    // 0x2527a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2527a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2527a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2527a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2527ac: 0x261085c0  addiu       $s0, $s0, -0x7A40
    ctx->pc = 0x2527acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936000));
    // 0x2527b0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2527b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8884C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C0u, _value); } while (0);
    // 0x2527b4: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x2527b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2527b8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2527b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8884C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C4u, _value); } while (0);
    // 0x2527bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2527bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527c0: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2527c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8884C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C8u, _value); } while (0);
    // 0x2527c4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2527c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2527c8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2527c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2527ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2527d0: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x2527D0u;
    SET_GPR_U32(ctx, 31, 0x2527D8u);
    ctx->pc = 0x2527D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2527D0u;
    // 0x2527d4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x2527D0u, 0x2527D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2527D8u;
label_2527d8:
    // 0x2527d8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2527d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2527dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2527dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2527e0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2527e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2527e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2527e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2527e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2527e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2527ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2527ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2527f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2527F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2527F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527F0u;
        // 0x2527f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2527F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2527F8u;
}
