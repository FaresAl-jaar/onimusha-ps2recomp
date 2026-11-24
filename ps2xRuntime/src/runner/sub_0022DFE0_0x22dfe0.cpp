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

// Function: sub_0022DFE0
// Address: 0x22dfe0 - 0x22e03c
void sub_0022DFE0_0x22dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DFE0_0x22dfe0");
#endif

    ctx->pc = 0x22dfe0u;

    // 0x22dfe0: 0x28a50010  slti        $a1, $a1, 0x10
    ctx->pc = 0x22dfe0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x22dfe4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x22dfe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dfe8: 0x14a00012  bnez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x22DFE8u;
    {
        const bool branch_taken_0x22dfe8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFE8u;
        // 0x22dfec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dfe8) {
            ctx->pc = 0x22E034u;
            goto label_22e034;
        }
    }
    ctx->pc = 0x22DFF0u;
    // 0x22dff0: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x22dff0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x22dff4: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x22dff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x22dff8: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x22dff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22dffc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x22dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x22e000: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22e000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22e004: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x22e004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22e008: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x22E008u;
    {
        const bool branch_taken_0x22e008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x22E00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E008u;
        // 0x22e00c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e008) {
            ctx->pc = 0x22E034u;
            goto label_22e034;
        }
    }
    ctx->pc = 0x22E010u;
    // 0x22e010: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x22e010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x22e014: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x22e014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x22e018: 0x90e40003  lbu         $a0, 0x3($a3)
    ctx->pc = 0x22e018u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x22e01c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22e01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e020: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22e020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22e024: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x22e024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x22e028: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22e028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22e02c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x22e02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x22e030: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x22e030u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_22e034:
    // 0x22e034: 0x3e00008  jr          $ra
    ctx->pc = 0x22E034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E03Cu;
}
