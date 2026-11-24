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

// Function: sub_0020DA58
// Address: 0x20da58 - 0x20db00
void sub_0020DA58_0x20da58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DA58_0x20da58");
#endif

    switch (ctx->pc) {
        case 0x20da80u: goto label_20da80;
        case 0x20da9cu: goto label_20da9c;
        case 0x20daa8u: goto label_20daa8;
        case 0x20dab8u: goto label_20dab8;
        case 0x20daccu: goto label_20dacc;
        case 0x20dad8u: goto label_20dad8;
        case 0x20dae8u: goto label_20dae8;
        default: break;
    }

    ctx->pc = 0x20da58u;

    // 0x20da58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20da58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20da5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20da5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20da60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20da60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20da64: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20da68: 0x26021ffc  addiu       $v0, $s0, 0x1FFC
    ctx->pc = 0x20da68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8188));
    // 0x20da6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20da6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20da70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20da70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20da74: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x20da74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20da78: 0xc083eb8  jal         func_20FAE0
    ctx->pc = 0x20DA78u;
    SET_GPR_U32(ctx, 31, 0x20DA80u);
    ctx->pc = 0x20DA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DA78u;
    // 0x20da7c: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FAE0u, 0x20DA78u, 0x20DA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA80u;
label_20da80:
    // 0x20da80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20da84: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x20da84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20da88: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x20da88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x20da8c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20DA8Cu;
    {
        const bool branch_taken_0x20da8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA8Cu;
        // 0x20da90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20da8c) {
            ctx->pc = 0x20DAECu;
            goto label_20daec;
        }
    }
    ctx->pc = 0x20DA94u;
    // 0x20da94: 0xc0840b0  jal         func_2102C0
    ctx->pc = 0x20DA94u;
    SET_GPR_U32(ctx, 31, 0x20DA9Cu);
    ctx->pc = 0x2102C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2102C0u, 0x20DA94u, 0x20DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA9Cu;
label_20da9c:
    // 0x20da9c: 0xde0409b8  ld          $a0, 0x9B8($s0)
    ctx->pc = 0x20da9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2488)));
    // 0x20daa0: 0xc08411e  jal         func_210478
    ctx->pc = 0x20DAA0u;
    SET_GPR_U32(ctx, 31, 0x20DAA8u);
    ctx->pc = 0x20DAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DAA0u;
    // 0x20daa4: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210478u, 0x20DAA0u, 0x20DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAA8u;
label_20daa8:
    // 0x20daa8: 0xde0409c0  ld          $a0, 0x9C0($s0)
    ctx->pc = 0x20daa8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2496)));
    // 0x20daac: 0xfe0209b8  sd          $v0, 0x9B8($s0)
    ctx->pc = 0x20daacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2488), GPR_U64(ctx, 2));
    // 0x20dab0: 0xc08411e  jal         func_210478
    ctx->pc = 0x20DAB0u;
    SET_GPR_U32(ctx, 31, 0x20DAB8u);
    ctx->pc = 0x20DAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DAB0u;
    // 0x20dab4: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210478u, 0x20DAB0u, 0x20DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAB8u;
label_20dab8:
    // 0x20dab8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x20dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20dabc: 0xfe0209c0  sd          $v0, 0x9C0($s0)
    ctx->pc = 0x20dabcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2496), GPR_U64(ctx, 2));
    // 0x20dac0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x20dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20dac4: 0xc0840b0  jal         func_2102C0
    ctx->pc = 0x20DAC4u;
    SET_GPR_U32(ctx, 31, 0x20DACCu);
    ctx->pc = 0x20DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DAC4u;
    // 0x20dac8: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2102C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2102C0u, 0x20DAC4u, 0x20DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DACCu;
label_20dacc:
    // 0x20dacc: 0xde0409d0  ld          $a0, 0x9D0($s0)
    ctx->pc = 0x20daccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2512)));
    // 0x20dad0: 0xc08411e  jal         func_210478
    ctx->pc = 0x20DAD0u;
    SET_GPR_U32(ctx, 31, 0x20DAD8u);
    ctx->pc = 0x20DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DAD0u;
    // 0x20dad4: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210478u, 0x20DAD0u, 0x20DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAD8u;
label_20dad8:
    // 0x20dad8: 0xde0409d8  ld          $a0, 0x9D8($s0)
    ctx->pc = 0x20dad8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2520)));
    // 0x20dadc: 0xfe0209d0  sd          $v0, 0x9D0($s0)
    ctx->pc = 0x20dadcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2512), GPR_U64(ctx, 2));
    // 0x20dae0: 0xc08411e  jal         func_210478
    ctx->pc = 0x20DAE0u;
    SET_GPR_U32(ctx, 31, 0x20DAE8u);
    ctx->pc = 0x20DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DAE0u;
    // 0x20dae4: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210478u, 0x20DAE0u, 0x20DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DAE8u;
label_20dae8:
    // 0x20dae8: 0xfe0209d8  sd          $v0, 0x9D8($s0)
    ctx->pc = 0x20dae8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2520), GPR_U64(ctx, 2));
label_20daec:
    // 0x20daec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20daecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20daf0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20daf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20daf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20daf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20daf8: 0x3e00008  jr          $ra
    ctx->pc = 0x20DAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAF8u;
        // 0x20dafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DB00u;
}
