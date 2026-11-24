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

// Function: sub_002E1F00
// Address: 0x2e1f00 - 0x2e1f84
void sub_002E1F00_0x2e1f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1F00_0x2e1f00");
#endif

    switch (ctx->pc) {
        case 0x2e1f28u: goto label_2e1f28;
        case 0x2e1f4cu: goto label_2e1f4c;
        case 0x2e1f54u: goto label_2e1f54;
        default: break;
    }

    ctx->pc = 0x2e1f00u;

    // 0x2e1f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e1f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e1f04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e1f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e1f08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e1f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e1f0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e1f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e1f10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e1f10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1f14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e1f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e1f18: 0x3c11008d  lui         $s1, 0x8D
    ctx->pc = 0x2e1f18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)141 << 16));
    // 0x2e1f1c: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x2e1f1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e1f20: 0x26317190  addiu       $s1, $s1, 0x7190
    ctx->pc = 0x2e1f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 29072));
    // 0x2e1f24: 0x0  nop
    ctx->pc = 0x2e1f24u;
    // NOP
label_2e1f28:
    // 0x2e1f28: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x2e1f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2e1f2c: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E1F2Cu;
    {
        const bool branch_taken_0x2e1f2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e1f2c) {
            ctx->pc = 0x2E1F58u;
            goto label_2e1f58;
        }
    }
    ctx->pc = 0x2E1F34u;
    // 0x2e1f34: 0x92230031  lbu         $v1, 0x31($s1)
    ctx->pc = 0x2e1f34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x2e1f38: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1F38u;
    {
        const bool branch_taken_0x2e1f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F38u;
        // 0x2e1f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f38) {
            ctx->pc = 0x2E1F58u;
            goto label_2e1f58;
        }
    }
    ctx->pc = 0x2E1F40u;
    // 0x2e1f40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e1f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1f44: 0xc0b87e4  jal         func_2E1F90
    ctx->pc = 0x2E1F44u;
    SET_GPR_U32(ctx, 31, 0x2E1F4Cu);
    ctx->pc = 0x2E1F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1F44u;
    // 0x2e1f48: 0xaf918ab0  sw          $s1, -0x7550($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937264), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1F90u, 0x2E1F44u, 0x2E1F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1F4Cu;
label_2e1f4c:
    // 0x2e1f4c: 0xc0b8410  jal         func_2E1040
    ctx->pc = 0x2E1F4Cu;
    SET_GPR_U32(ctx, 31, 0x2E1F54u);
    ctx->pc = 0x2E1F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1F4Cu;
    // 0x2e1f50: 0x8f848ab0  lw          $a0, -0x7550($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1040u, 0x2E1F4Cu, 0x2E1F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1F54u;
label_2e1f54:
    // 0x2e1f54: 0x0  nop
    ctx->pc = 0x2e1f54u;
    // NOP
label_2e1f58:
    // 0x2e1f58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e1f58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e1f5c: 0x2e430008  sltiu       $v1, $s2, 0x8
    ctx->pc = 0x2e1f5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e1f60: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2E1F60u;
    {
        const bool branch_taken_0x2e1f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F60u;
        // 0x2e1f64: 0x263106c0  addiu       $s1, $s1, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f60) {
            ctx->pc = 0x2E1F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1f28;
        }
    }
    ctx->pc = 0x2E1F68u;
    // 0x2e1f68: 0xaf808ab0  sw          $zero, -0x7550($gp)
    ctx->pc = 0x2e1f68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937264), GPR_U32(ctx, 0));
    // 0x2e1f6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e1f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1f70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e1f70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1f74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e1f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F7Cu;
        // 0x2e1f80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1F84u;
}
