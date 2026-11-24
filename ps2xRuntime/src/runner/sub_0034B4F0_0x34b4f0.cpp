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

// Function: sub_0034B4F0
// Address: 0x34b4f0 - 0x34b580
void sub_0034B4F0_0x34b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B4F0_0x34b4f0");
#endif

    switch (ctx->pc) {
        case 0x34b54cu: goto label_34b54c;
        case 0x34b570u: goto label_34b570;
        default: break;
    }

    ctx->pc = 0x34b4f0u;

    // 0x34b4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34b4f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34b4fc: 0x90822b69  lbu         $v0, 0x2B69($a0)
    ctx->pc = 0x34b4fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11113)));
    // 0x34b500: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34b500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34b504: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34B504u;
    {
        const bool branch_taken_0x34b504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B504u;
        // 0x34b508: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b504) {
            ctx->pc = 0x34B518u;
            goto label_34b518;
        }
    }
    ctx->pc = 0x34B50Cu;
    // 0x34b50c: 0x8e022b64  lw          $v0, 0x2B64($s0)
    ctx->pc = 0x34b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11108)));
    // 0x34b510: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34b510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34b514: 0xae022b64  sw          $v0, 0x2B64($s0)
    ctx->pc = 0x34b514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11108), GPR_U32(ctx, 2));
label_34b518:
    // 0x34b518: 0x92032b68  lbu         $v1, 0x2B68($s0)
    ctx->pc = 0x34b518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11112)));
    // 0x34b51c: 0x92020782  lbu         $v0, 0x782($s0)
    ctx->pc = 0x34b51cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1922)));
    // 0x34b520: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x34b520u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34b524: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34B524u;
    {
        const bool branch_taken_0x34b524 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b524) {
            ctx->pc = 0x34B538u;
            goto label_34b538;
        }
    }
    ctx->pc = 0x34B52Cu;
    // 0x34b52c: 0xa2030782  sb          $v1, 0x782($s0)
    ctx->pc = 0x34b52cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1922), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b530: 0xa2002b68  sb          $zero, 0x2B68($s0)
    ctx->pc = 0x34b530u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11112), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b534: 0x0  nop
    ctx->pc = 0x34b534u;
    // NOP
label_34b538:
    // 0x34b538: 0x8e052b60  lw          $a1, 0x2B60($s0)
    ctx->pc = 0x34b538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11104)));
    // 0x34b53c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x34B53Cu;
    {
        const bool branch_taken_0x34b53c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B53Cu;
        // 0x34b540: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b53c) {
            ctx->pc = 0x34B568u;
            goto label_34b568;
        }
    }
    ctx->pc = 0x34B544u;
    // 0x34b544: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x34B544u;
    SET_GPR_U32(ctx, 31, 0x34B54Cu);
    ctx->pc = 0x34B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B544u;
    // 0x34b548: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x34B544u, 0x34B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B54Cu;
label_34b54c:
    // 0x34b54c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34B54Cu;
    {
        const bool branch_taken_0x34b54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B54Cu;
        // 0x34b550: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b54c) {
            ctx->pc = 0x34B568u;
            goto label_34b568;
        }
    }
    ctx->pc = 0x34B554u;
    // 0x34b554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b558: 0xa2032ab6  sb          $v1, 0x2AB6($s0)
    ctx->pc = 0x34b558u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10934), (uint8_t)GPR_U32(ctx, 3));
    // 0x34b55c: 0xa6022ab4  sh          $v0, 0x2AB4($s0)
    ctx->pc = 0x34b55cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10932), (uint16_t)GPR_U32(ctx, 2));
    // 0x34b560: 0xae002b60  sw          $zero, 0x2B60($s0)
    ctx->pc = 0x34b560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11104), GPR_U32(ctx, 0));
    // 0x34b564: 0x0  nop
    ctx->pc = 0x34b564u;
    // NOP
label_34b568:
    // 0x34b568: 0xc0a6188  jal         func_298620
    ctx->pc = 0x34B568u;
    SET_GPR_U32(ctx, 31, 0x34B570u);
    ctx->pc = 0x34B56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B568u;
    // 0x34b56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298620u, 0x34B568u, 0x34B570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B570u;
label_34b570:
    // 0x34b570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b578: 0x3e00008  jr          $ra
    ctx->pc = 0x34B578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B578u;
        // 0x34b57c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B580u;
}
