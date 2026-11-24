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

// Function: sub_003647B0
// Address: 0x3647b0 - 0x364830
void sub_003647B0_0x3647b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003647B0_0x3647b0");
#endif

    switch (ctx->pc) {
        case 0x3647ccu: goto label_3647cc;
        case 0x3647d8u: goto label_3647d8;
        case 0x364810u: goto label_364810;
        case 0x364820u: goto label_364820;
        default: break;
    }

    ctx->pc = 0x3647b0u;

    // 0x3647b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3647b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3647b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3647b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3647b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3647b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3647bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3647bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3647c0: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3647c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3647c4: 0xc09c46c  jal         func_2711B0
    ctx->pc = 0x3647C4u;
    SET_GPR_U32(ctx, 31, 0x3647CCu);
    ctx->pc = 0x3647C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3647C4u;
    // 0x3647c8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2711B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711B0u, 0x3647C4u, 0x3647CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3647CCu;
label_3647cc:
    // 0x3647cc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3647ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3647d0: 0xc0b78e0  jal         func_2DE380
    ctx->pc = 0x3647D0u;
    SET_GPR_U32(ctx, 31, 0x3647D8u);
    ctx->pc = 0x3647D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3647D0u;
    // 0x3647d4: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE380u, 0x3647D0u, 0x3647D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3647D8u;
label_3647d8:
    // 0x3647d8: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x3647d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3647dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3647dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3647e0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3647E0u;
    {
        const bool branch_taken_0x3647e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3647E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3647E0u;
        // 0x3647e4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3647e0) {
            ctx->pc = 0x364818u;
            goto label_364818;
        }
    }
    ctx->pc = 0x3647E8u;
    // 0x3647e8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3647E8u;
    {
        const bool branch_taken_0x3647e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3647e8) {
            ctx->pc = 0x364818u;
            goto label_364818;
        }
    }
    ctx->pc = 0x3647F0u;
    // 0x3647f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3647F0u;
    {
        const bool branch_taken_0x3647f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3647F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3647F0u;
        // 0x3647f4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3647f0) {
            ctx->pc = 0x364808u;
            goto label_364808;
        }
    }
    ctx->pc = 0x3647F8u;
    // 0x3647f8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3647F8u;
    {
        const bool branch_taken_0x3647f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3647f8) {
            ctx->pc = 0x364808u;
            goto label_364808;
        }
    }
    ctx->pc = 0x364800u;
    // 0x364800: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x364800u;
    {
        const bool branch_taken_0x364800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364800) {
            ctx->pc = 0x364820u;
            goto label_364820;
        }
    }
    ctx->pc = 0x364808u;
label_364808:
    // 0x364808: 0xc0d920c  jal         func_364830
    ctx->pc = 0x364808u;
    SET_GPR_U32(ctx, 31, 0x364810u);
    ctx->pc = 0x36480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364808u;
    // 0x36480c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364830u, 0x364808u, 0x364810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364810u;
label_364810:
    // 0x364810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x364810u;
    {
        const bool branch_taken_0x364810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364810) {
            ctx->pc = 0x364820u;
            goto label_364820;
        }
    }
    ctx->pc = 0x364818u;
label_364818:
    // 0x364818: 0xc0d9284  jal         func_364A10
    ctx->pc = 0x364818u;
    SET_GPR_U32(ctx, 31, 0x364820u);
    ctx->pc = 0x36481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364818u;
    // 0x36481c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364A10u, 0x364818u, 0x364820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364820u;
label_364820:
    // 0x364820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x364820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x364824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364828: 0x3e00008  jr          $ra
    ctx->pc = 0x364828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364828u;
        // 0x36482c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364830u;
}
