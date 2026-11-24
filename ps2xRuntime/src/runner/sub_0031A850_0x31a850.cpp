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

// Function: sub_0031A850
// Address: 0x31a850 - 0x31a8d8
void sub_0031A850_0x31a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A850_0x31a850");
#endif

    switch (ctx->pc) {
        case 0x31a8b4u: goto label_31a8b4;
        case 0x31a8c8u: goto label_31a8c8;
        default: break;
    }

    ctx->pc = 0x31a850u;

    // 0x31a850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31a854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31a858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31a85c: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x31a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x31a860: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x31a860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a864: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A864u;
    {
        const bool branch_taken_0x31a864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A864u;
        // 0x31a868: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a864) {
            ctx->pc = 0x31A878u;
            goto label_31a878;
        }
    }
    ctx->pc = 0x31A86Cu;
    // 0x31a86c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x31a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31a870: 0xa6020786  sh          $v0, 0x786($s0)
    ctx->pc = 0x31a870u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 2));
    // 0x31a874: 0xa6000784  sh          $zero, 0x784($s0)
    ctx->pc = 0x31a874u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1924), (uint16_t)GPR_U32(ctx, 0));
label_31a878:
    // 0x31a878: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x31a878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x31a87c: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x31a87cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x31a880: 0x24020241  addiu       $v0, $zero, 0x241
    ctx->pc = 0x31a880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x31a884: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31A884u;
    {
        const bool branch_taken_0x31a884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31a884) {
            ctx->pc = 0x31A8C0u;
            goto label_31a8c0;
        }
    }
    ctx->pc = 0x31A88Cu;
    // 0x31a88c: 0x96020786  lhu         $v0, 0x786($s0)
    ctx->pc = 0x31a88cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1926)));
    // 0x31a890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31a890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a894: 0x1445000a  bne         $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x31A894u;
    {
        const bool branch_taken_0x31a894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x31a894) {
            ctx->pc = 0x31A8C0u;
            goto label_31a8c0;
        }
    }
    ctx->pc = 0x31A89Cu;
    // 0x31a89c: 0x92022b24  lbu         $v0, 0x2B24($s0)
    ctx->pc = 0x31a89cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x31a8a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31A8A0u;
    {
        const bool branch_taken_0x31a8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8A0u;
        // 0x31a8a4: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8a0) {
            ctx->pc = 0x31A8C0u;
            goto label_31a8c0;
        }
    }
    ctx->pc = 0x31A8A8u;
    // 0x31a8a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31a8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a8ac: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x31A8ACu;
    SET_GPR_U32(ctx, 31, 0x31A8B4u);
    ctx->pc = 0x31A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A8ACu;
    // 0x31a8b0: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x31A8ACu, 0x31A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A8B4u;
label_31a8b4:
    // 0x31a8b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a8b8: 0xa2022b24  sb          $v0, 0x2B24($s0)
    ctx->pc = 0x31a8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11044), (uint8_t)GPR_U32(ctx, 2));
    // 0x31a8bc: 0x0  nop
    ctx->pc = 0x31a8bcu;
    // NOP
label_31a8c0:
    // 0x31a8c0: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x31A8C0u;
    SET_GPR_U32(ctx, 31, 0x31A8C8u);
    ctx->pc = 0x31A8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A8C0u;
    // 0x31a8c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x31A8C0u, 0x31A8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A8C8u;
label_31a8c8:
    // 0x31a8c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a8cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x31A8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8D0u;
        // 0x31a8d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A8D8u;
}
