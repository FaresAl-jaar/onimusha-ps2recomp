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

// Function: sub_00233F18
// Address: 0x233f18 - 0x233fe8
void sub_00233F18_0x233f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233F18_0x233f18");
#endif

    switch (ctx->pc) {
        case 0x233f74u: goto label_233f74;
        case 0x233f9cu: goto label_233f9c;
        case 0x233fb0u: goto label_233fb0;
        case 0x233fc0u: goto label_233fc0;
        case 0x233fccu: goto label_233fcc;
        default: break;
    }

    ctx->pc = 0x233f18u;

    // 0x233f18: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x233f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x233f1c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233f1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x233f20: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x233f20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f24: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x233f24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f28: 0x244239b8  addiu       $v0, $v0, 0x39B8
    ctx->pc = 0x233f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14776));
    // 0x233f2c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x233f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x233f30: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x233f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x233f34: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x233f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f38: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x233f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f3c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x233F3Cu;
    {
        const bool branch_taken_0x233f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F3Cu;
        // 0x233f40: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f3c) {
            ctx->pc = 0x233F60u;
            goto label_233f60;
        }
    }
    ctx->pc = 0x233F44u;
    // 0x233f44: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233f48: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x233f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x233f4c: 0x24425540  addiu       $v0, $v0, 0x5540
    ctx->pc = 0x233f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21824));
    // 0x233f50: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x233f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x233f54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x233F54u;
    {
        const bool branch_taken_0x233f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F54u;
        // 0x233f58: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f54) {
            ctx->pc = 0x233F74u;
            goto label_233f74;
        }
    }
    ctx->pc = 0x233F5Cu;
    // 0x233f5c: 0x0  nop
    ctx->pc = 0x233f5cu;
    // NOP
label_233f60:
    // 0x233f60: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x233f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x233f64: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x233f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x233f68: 0x2484ae18  addiu       $a0, $a0, -0x51E8
    ctx->pc = 0x233f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946328));
    // 0x233f6c: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x233F6Cu;
    SET_GPR_U32(ctx, 31, 0x233F74u);
    ctx->pc = 0x233F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F6Cu;
    // 0x233f70: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x233F6Cu, 0x233F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F74u;
label_233f74:
    // 0x233f74: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x233f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x233f78: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x233f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x233f7c: 0x8ca37548  lw          $v1, 0x7548($a1)
    ctx->pc = 0x233f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C7548u));
    // 0x233f80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f84: 0x24423370  addiu       $v0, $v0, 0x3370
    ctx->pc = 0x233f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13168));
    // 0x233f88: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x233f88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x233f8c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x233f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x233f90: 0x2610fcc0  addiu       $s0, $s0, -0x340
    ctx->pc = 0x233f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966464));
    // 0x233f94: 0xc043778  jal         func_10DDE0
    ctx->pc = 0x233F94u;
    SET_GPR_U32(ctx, 31, 0x233F9Cu);
    ctx->pc = 0x233F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F94u;
    // 0x233f98: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDE0u, 0x233F94u, 0x233F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F9Cu;
label_233f9c:
    // 0x233f9c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x233f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x233fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fa4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x233fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233fa8: 0xc043c48  jal         func_10F120
    ctx->pc = 0x233FA8u;
    SET_GPR_U32(ctx, 31, 0x233FB0u);
    ctx->pc = 0x233FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FA8u;
    // 0x233fac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F120u, 0x233FA8u, 0x233FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FB0u;
label_233fb0:
    // 0x233fb0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x233fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233fb4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233fb8: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x233FB8u;
    SET_GPR_U32(ctx, 31, 0x233FC0u);
    ctx->pc = 0x233FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FB8u;
    // 0x233fbc: 0x8c45fc3c  lw          $a1, -0x3C4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x233FB8u, 0x233FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FC0u;
label_233fc0:
    // 0x233fc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x233fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233fc4: 0xc08ceec  jal         func_233BB0
    ctx->pc = 0x233FC4u;
    SET_GPR_U32(ctx, 31, 0x233FCCu);
    ctx->pc = 0x233BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233BB0u, 0x233FC4u, 0x233FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FCCu;
label_233fcc:
    // 0x233fcc: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x233fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x233fd0: 0x2463fcbc  addiu       $v1, $v1, -0x344
    ctx->pc = 0x233fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966460));
    // 0x233fd4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x233fd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233fd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x233fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BFCBCu));
    // 0x233fdc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x233fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x233FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FE0u;
        // 0x233fe4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233FE8u;
}
