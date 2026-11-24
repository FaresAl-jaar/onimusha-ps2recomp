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

// Function: sub_00214510
// Address: 0x214510 - 0x214598
void sub_00214510_0x214510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214510_0x214510");
#endif

    switch (ctx->pc) {
        case 0x214568u: goto label_214568;
        default: break;
    }

    ctx->pc = 0x214510u;

    // 0x214510: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x214510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x214514: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x214514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214518: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x214518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21451c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21451cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x214520: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x214520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x214524: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x214524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x214528: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x214528u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x21452c: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x21452cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x214530: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x214530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x214534: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x214534u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
    // 0x214538: 0x24a6014c  addiu       $a2, $a1, 0x14C
    ctx->pc = 0x214538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 332));
    // 0x21453c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x21453cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x214540: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x214540u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x214544: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x214544u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x214548: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x214548u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x21454c: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x21454cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x214550: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x214550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x214554: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x214554u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x214558: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x214558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x21455c: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x21455cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x214560: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x214560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x214564: 0x0  nop
    ctx->pc = 0x214564u;
    // NOP
label_214568:
    // 0x214568: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x214568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x21456c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x21456cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x214570: 0x0  nop
    ctx->pc = 0x214570u;
    // NOP
    // 0x214574: 0x0  nop
    ctx->pc = 0x214574u;
    // NOP
    // 0x214578: 0x0  nop
    ctx->pc = 0x214578u;
    // NOP
    // 0x21457c: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21457Cu;
    {
        const bool branch_taken_0x21457c = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x214580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21457Cu;
        // 0x214580: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21457c) {
            ctx->pc = 0x214568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214568;
        }
    }
    ctx->pc = 0x214584u;
    // 0x214584: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x214584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x214588: 0xaca00150  sw          $zero, 0x150($a1)
    ctx->pc = 0x214588u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 336), GPR_U32(ctx, 0));
    // 0x21458c: 0xaca20158  sw          $v0, 0x158($a1)
    ctx->pc = 0x21458cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 2));
    // 0x214590: 0x3e00008  jr          $ra
    ctx->pc = 0x214590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214590u;
        // 0x214594: 0xaca00154  sw          $zero, 0x154($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214598u;
}
