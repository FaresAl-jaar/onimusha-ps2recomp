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

// Function: sub_00123AD0
// Address: 0x123ad0 - 0x123b40
void sub_00123AD0_0x123ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123AD0_0x123ad0");
#endif

    switch (ctx->pc) {
        case 0x123af8u: goto label_123af8;
        case 0x123b24u: goto label_123b24;
        default: break;
    }

    ctx->pc = 0x123ad0u;

    // 0x123ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123ad8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123adc: 0x24100058  addiu       $s0, $zero, 0x58
    ctx->pc = 0x123adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x123ae0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123ae4: 0xb08018  mult        $s0, $a1, $s0
    ctx->pc = 0x123ae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x123ae8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x123ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x123aec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x123aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123af0: 0xc0492fe  jal         func_124BF8
    ctx->pc = 0x123AF0u;
    SET_GPR_U32(ctx, 31, 0x123AF8u);
    ctx->pc = 0x123AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123AF0u;
    // 0x123af4: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124BF8u, 0x123AF0u, 0x123AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123AF8u;
label_123af8:
    // 0x123af8: 0x244f000c  addiu       $t7, $v0, 0xC
    ctx->pc = 0x123af8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x123afc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x123afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x123b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b04: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x123b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b0c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x123B0Cu;
    {
        const bool branch_taken_0x123b0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B0Cu;
        // 0x123b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b0c) {
            ctx->pc = 0x123B28u;
            goto label_123b28;
        }
    }
    ctx->pc = 0x123B14u;
    // 0x123b14: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x123b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x123b18: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x123b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x123b1c: 0xc049590  jal         func_125640
    ctx->pc = 0x123B1Cu;
    SET_GPR_U32(ctx, 31, 0x123B24u);
    ctx->pc = 0x123B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B1Cu;
    // 0x123b20: 0xae2f0008  sw          $t7, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x123B1Cu, 0x123B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B24u;
label_123b24:
    // 0x123b24: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x123b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123b28:
    // 0x123b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123b2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123b30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123b30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123b34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x123b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123b38: 0x3e00008  jr          $ra
    ctx->pc = 0x123B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B38u;
        // 0x123b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123B40u;
}
