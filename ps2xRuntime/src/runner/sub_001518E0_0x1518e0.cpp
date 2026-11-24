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

// Function: sub_001518E0
// Address: 0x1518e0 - 0x151958
void sub_001518E0_0x1518e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001518E0_0x1518e0");
#endif

    switch (ctx->pc) {
        case 0x151904u: goto label_151904;
        case 0x151934u: goto label_151934;
        case 0x15193cu: goto label_15193c;
        case 0x151944u: goto label_151944;
        default: break;
    }

    ctx->pc = 0x1518e0u;

    // 0x1518e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1518e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1518e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1518e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1518e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1518e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1518ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1518ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1518f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1518f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1518f4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1518f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1518f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1518f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1518fc: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x1518FCu;
    SET_GPR_U32(ctx, 31, 0x151904u);
    ctx->pc = 0x151900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1518FCu;
    // 0x151900: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x1518FCu, 0x151904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151904u;
label_151904:
    // 0x151904: 0xaf82859c  sw          $v0, -0x7A64($gp)
    ctx->pc = 0x151904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935964), GPR_U32(ctx, 2));
    // 0x151908: 0x8f82859c  lw          $v0, -0x7A64($gp)
    ctx->pc = 0x151908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935964)));
    // 0x15190c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15190Cu;
    {
        const bool branch_taken_0x15190c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x15190c) {
            ctx->pc = 0x151920u;
            goto label_151920;
        }
    }
    ctx->pc = 0x151914u;
    // 0x151914: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x151914u;
    {
        const bool branch_taken_0x151914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151914u;
        // 0x151918: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151914) {
            ctx->pc = 0x151948u;
            goto label_151948;
        }
    }
    ctx->pc = 0x15191Cu;
    // 0x15191c: 0x0  nop
    ctx->pc = 0x15191cu;
    // NOP
label_151920:
    // 0x151920: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x151920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x151924: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x151924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x151928: 0x24a518b0  addiu       $a1, $a1, 0x18B0
    ctx->pc = 0x151928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6320));
    // 0x15192c: 0xc043758  jal         func_10DD60
    ctx->pc = 0x15192Cu;
    SET_GPR_U32(ctx, 31, 0x151934u);
    ctx->pc = 0x151930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15192Cu;
    // 0x151930: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD60u, 0x15192Cu, 0x151934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151934u;
label_151934:
    // 0x151934: 0xc043808  jal         func_10E020
    ctx->pc = 0x151934u;
    SET_GPR_U32(ctx, 31, 0x15193Cu);
    ctx->pc = 0x151938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151934u;
    // 0x151938: 0x8f84859c  lw          $a0, -0x7A64($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x151934u, 0x15193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15193Cu;
label_15193c:
    // 0x15193c: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x15193Cu;
    SET_GPR_U32(ctx, 31, 0x151944u);
    ctx->pc = 0x151940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15193Cu;
    // 0x151940: 0x8f84859c  lw          $a0, -0x7A64($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935964)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x15193Cu, 0x151944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151944u;
label_151944:
    // 0x151944: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x151944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151948:
    // 0x151948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x151948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15194c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15194cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151950: 0x3e00008  jr          $ra
    ctx->pc = 0x151950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151950u;
        // 0x151954: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151958u;
}
