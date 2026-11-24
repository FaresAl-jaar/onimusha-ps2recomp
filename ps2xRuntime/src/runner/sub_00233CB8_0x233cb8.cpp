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

// Function: sub_00233CB8
// Address: 0x233cb8 - 0x233d70
void sub_00233CB8_0x233cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233CB8_0x233cb8");
#endif

    switch (ctx->pc) {
        case 0x233d14u: goto label_233d14;
        case 0x233d3cu: goto label_233d3c;
        case 0x233d50u: goto label_233d50;
        case 0x233d60u: goto label_233d60;
        default: break;
    }

    ctx->pc = 0x233cb8u;

    // 0x233cb8: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x233cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x233cbc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233cbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233cc0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x233cc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233cc4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x233cc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233cc8: 0x244235f0  addiu       $v0, $v0, 0x35F0
    ctx->pc = 0x233cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13808));
    // 0x233ccc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x233cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x233cd0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x233cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x233cd4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x233cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233cd8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x233cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233cdc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x233CDCu;
    {
        const bool branch_taken_0x233cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CDCu;
        // 0x233ce0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cdc) {
            ctx->pc = 0x233D00u;
            goto label_233d00;
        }
    }
    ctx->pc = 0x233CE4u;
    // 0x233ce4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233ce8: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x233ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x233cec: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x233cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x233cf0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x233cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x233cf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x233CF4u;
    {
        const bool branch_taken_0x233cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233CF4u;
        // 0x233cf8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233cf4) {
            ctx->pc = 0x233D14u;
            goto label_233d14;
        }
    }
    ctx->pc = 0x233CFCu;
    // 0x233cfc: 0x0  nop
    ctx->pc = 0x233cfcu;
    // NOP
label_233d00:
    // 0x233d00: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x233d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x233d04: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x233d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x233d08: 0x2484add8  addiu       $a0, $a0, -0x5228
    ctx->pc = 0x233d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946264));
    // 0x233d0c: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x233D0Cu;
    SET_GPR_U32(ctx, 31, 0x233D14u);
    ctx->pc = 0x233D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D0Cu;
    // 0x233d10: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x233D0Cu, 0x233D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D14u;
label_233d14:
    // 0x233d14: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x233d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x233d18: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x233d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x233d1c: 0x8ca37548  lw          $v1, 0x7548($a1)
    ctx->pc = 0x233d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C7548u));
    // 0x233d20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233d24: 0x24423370  addiu       $v0, $v0, 0x3370
    ctx->pc = 0x233d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
    // 0x233d28: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x233d28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x233d2c: 0x2610fcac  addiu       $s0, $s0, -0x354
    ctx->pc = 0x233d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966444));
    // 0x233d30: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x233d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x233d34: 0xc043778  jal         func_10DDE0
    ctx->pc = 0x233D34u;
    SET_GPR_U32(ctx, 31, 0x233D3Cu);
    ctx->pc = 0x233D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D34u;
    // 0x233d38: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDE0u, 0x233D34u, 0x233D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D3Cu;
label_233d3c:
    // 0x233d3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x233d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x233d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233d44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x233d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233d48: 0xc043c48  jal         func_10F120
    ctx->pc = 0x233D48u;
    SET_GPR_U32(ctx, 31, 0x233D50u);
    ctx->pc = 0x233D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D48u;
    // 0x233d4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F120u, 0x233D48u, 0x233D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D50u;
label_233d50:
    // 0x233d50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x233d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233d54: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233d58: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x233D58u;
    SET_GPR_U32(ctx, 31, 0x233D60u);
    ctx->pc = 0x233D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233D58u;
    // 0x233d5c: 0x8c45fc28  lw          $a1, -0x3D8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x233D58u, 0x233D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233D60u;
label_233d60:
    // 0x233d60: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x233d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233d64: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x233d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233d68: 0x3e00008  jr          $ra
    ctx->pc = 0x233D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233D68u;
        // 0x233d6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233D70u;
}
