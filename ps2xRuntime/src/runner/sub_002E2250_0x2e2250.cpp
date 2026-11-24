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

// Function: sub_002E2250
// Address: 0x2e2250 - 0x2e22d4
void sub_002E2250_0x2e2250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2250_0x2e2250");
#endif

    switch (ctx->pc) {
        case 0x2e2278u: goto label_2e2278;
        case 0x2e229cu: goto label_2e229c;
        case 0x2e22a4u: goto label_2e22a4;
        default: break;
    }

    ctx->pc = 0x2e2250u;

    // 0x2e2250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e2250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e2254: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e2254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e2258: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e2258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e225c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e225cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e2260: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e2260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2264: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e2264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e2268: 0x3c11008d  lui         $s1, 0x8D
    ctx->pc = 0x2e2268u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)141 << 16));
    // 0x2e226c: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x2e226cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e2270: 0x26317190  addiu       $s1, $s1, 0x7190
    ctx->pc = 0x2e2270u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 29072));
    // 0x2e2274: 0x0  nop
    ctx->pc = 0x2e2274u;
    // NOP
label_2e2278:
    // 0x2e2278: 0x92230030  lbu         $v1, 0x30($s1)
    ctx->pc = 0x2e2278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2e227c: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E227Cu;
    {
        const bool branch_taken_0x2e227c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e227c) {
            ctx->pc = 0x2E22A8u;
            goto label_2e22a8;
        }
    }
    ctx->pc = 0x2E2284u;
    // 0x2e2284: 0x92230031  lbu         $v1, 0x31($s1)
    ctx->pc = 0x2e2284u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x2e2288: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2288u;
    {
        const bool branch_taken_0x2e2288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2288u;
        // 0x2e228c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2288) {
            ctx->pc = 0x2E22A8u;
            goto label_2e22a8;
        }
    }
    ctx->pc = 0x2E2290u;
    // 0x2e2290: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e2290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2294: 0xc0b88b8  jal         func_2E22E0
    ctx->pc = 0x2E2294u;
    SET_GPR_U32(ctx, 31, 0x2E229Cu);
    ctx->pc = 0x2E2298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2294u;
    // 0x2e2298: 0xaf918ab0  sw          $s1, -0x7550($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937264), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E22E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E22E0u, 0x2E2294u, 0x2E229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E229Cu;
label_2e229c:
    // 0x2e229c: 0xc0b8410  jal         func_2E1040
    ctx->pc = 0x2E229Cu;
    SET_GPR_U32(ctx, 31, 0x2E22A4u);
    ctx->pc = 0x2E22A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E229Cu;
    // 0x2e22a0: 0x8f848ab0  lw          $a0, -0x7550($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1040u, 0x2E229Cu, 0x2E22A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E22A4u;
label_2e22a4:
    // 0x2e22a4: 0x0  nop
    ctx->pc = 0x2e22a4u;
    // NOP
label_2e22a8:
    // 0x2e22a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e22a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e22ac: 0x2e430008  sltiu       $v1, $s2, 0x8
    ctx->pc = 0x2e22acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e22b0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2E22B0u;
    {
        const bool branch_taken_0x2e22b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22B0u;
        // 0x2e22b4: 0x263106c0  addiu       $s1, $s1, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e22b0) {
            ctx->pc = 0x2E2278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2278;
        }
    }
    ctx->pc = 0x2E22B8u;
    // 0x2e22b8: 0xaf808ab0  sw          $zero, -0x7550($gp)
    ctx->pc = 0x2e22b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937264), GPR_U32(ctx, 0));
    // 0x2e22bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e22bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e22c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e22c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e22c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e22c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e22c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e22c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e22cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E22CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E22CCu;
        // 0x2e22d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E22CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E22D4u;
}
