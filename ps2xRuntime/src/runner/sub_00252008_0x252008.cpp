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

// Function: sub_00252008
// Address: 0x252008 - 0x252094
void sub_00252008_0x252008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252008_0x252008");
#endif

    switch (ctx->pc) {
        case 0x25204cu: goto label_25204c;
        case 0x252068u: goto label_252068;
        default: break;
    }

    ctx->pc = 0x252008u;

    // 0x252008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x252008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25200c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25200Cu;
    {
        const bool branch_taken_0x25200c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x252010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25200Cu;
        // 0x252010: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25200c) {
            ctx->pc = 0x252028u;
            goto label_252028;
        }
    }
    ctx->pc = 0x252014u;
    // 0x252014: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x252014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x252018: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x252018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x25201c: 0x2484edd0  addiu       $a0, $a0, -0x1230
    ctx->pc = 0x25201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962640));
    // 0x252020: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x252020u;
    {
        const bool branch_taken_0x252020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252020u;
        // 0x252024: 0x24a5ec80  addiu       $a1, $a1, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252020) {
            ctx->pc = 0x252044u;
            goto label_252044;
        }
    }
    ctx->pc = 0x252028u;
label_252028:
    // 0x252028: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x252028u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25202c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25202Cu;
    {
        const bool branch_taken_0x25202c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25202c) {
            ctx->pc = 0x252030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25202Cu;
            // 0x252030: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252058u;
            goto label_252058;
        }
    }
    ctx->pc = 0x252034u;
    // 0x252034: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x252034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x252038: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x252038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x25203c: 0x2484ede0  addiu       $a0, $a0, -0x1220
    ctx->pc = 0x25203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
    // 0x252040: 0x24a5ecb0  addiu       $a1, $a1, -0x1350
    ctx->pc = 0x252040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962352));
label_252044:
    // 0x252044: 0xc0944dc  jal         func_251370
    ctx->pc = 0x252044u;
    SET_GPR_U32(ctx, 31, 0x25204Cu);
    ctx->pc = 0x251370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251370u, 0x252044u, 0x25204Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25204Cu;
label_25204c:
    // 0x25204c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25204Cu;
    {
        const bool branch_taken_0x25204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25204Cu;
        // 0x252050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25204c) {
            ctx->pc = 0x252088u;
            goto label_252088;
        }
    }
    ctx->pc = 0x252054u;
    // 0x252054: 0x0  nop
    ctx->pc = 0x252054u;
    // NOP
label_252058:
    // 0x252058: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x252058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25205c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x252060: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252060u;
    {
        const bool branch_taken_0x252060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252060u;
        // 0x252064: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252060) {
            ctx->pc = 0x252084u;
            goto label_252084;
        }
    }
    ctx->pc = 0x252068u;
label_252068:
    // 0x252068: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x252068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25206c: 0x0  nop
    ctx->pc = 0x25206cu;
    // NOP
    // 0x252070: 0x0  nop
    ctx->pc = 0x252070u;
    // NOP
    // 0x252074: 0x0  nop
    ctx->pc = 0x252074u;
    // NOP
    // 0x252078: 0x0  nop
    ctx->pc = 0x252078u;
    // NOP
    // 0x25207c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25207Cu;
    {
        const bool branch_taken_0x25207c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25207Cu;
        // 0x252080: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25207c) {
            ctx->pc = 0x252068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252068;
        }
    }
    ctx->pc = 0x252084u;
label_252084:
    // 0x252084: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x252084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_252088:
    // 0x252088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25208c: 0x3e00008  jr          $ra
    ctx->pc = 0x25208Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25208Cu;
        // 0x252090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25208Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252094u;
}
