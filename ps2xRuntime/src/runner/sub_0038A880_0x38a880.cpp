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

// Function: sub_0038A880
// Address: 0x38a880 - 0x38a944
void sub_0038A880_0x38a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A880_0x38a880");
#endif

    switch (ctx->pc) {
        case 0x38a8a4u: goto label_38a8a4;
        case 0x38a8dcu: goto label_38a8dc;
        case 0x38a908u: goto label_38a908;
        case 0x38a914u: goto label_38a914;
        default: break;
    }

    ctx->pc = 0x38a880u;

    // 0x38a880: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38a880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38a884: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38a884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x38a888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38a888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38a88c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38a88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38a890: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38a890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a894: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38a894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38a898: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x38a898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a89c: 0xc0d0494  jal         func_341250
    ctx->pc = 0x38A89Cu;
    SET_GPR_U32(ctx, 31, 0x38A8A4u);
    ctx->pc = 0x38A8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A89Cu;
    // 0x38a8a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341250u, 0x38A89Cu, 0x38A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A8A4u;
label_38a8a4:
    // 0x38a8a4: 0xa6112ace  sh          $s1, 0x2ACE($s0)
    ctx->pc = 0x38a8a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10958), (uint16_t)GPR_U32(ctx, 17));
    // 0x38a8a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a8ac: 0x1642000e  bne         $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x38A8ACu;
    {
        const bool branch_taken_0x38a8ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x38A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A8ACu;
        // 0x38a8b0: 0xa6002ad0  sh          $zero, 0x2AD0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10960), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a8ac) {
            ctx->pc = 0x38A8E8u;
            goto label_38a8e8;
        }
    }
    ctx->pc = 0x38A8B4u;
    // 0x38a8b4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x38a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x38a8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a8bc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x38a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x38a8c0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x38a8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x38a8c4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x38a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x38a8c8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x38a8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x38a8cc: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x38a8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x38a8d0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x38a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x38a8d4: 0xc0d04e4  jal         func_341390
    ctx->pc = 0x38A8D4u;
    SET_GPR_U32(ctx, 31, 0x38A8DCu);
    ctx->pc = 0x38A8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A8D4u;
    // 0x38a8d8: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341390u, 0x38A8D4u, 0x38A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A8DCu;
label_38a8dc:
    // 0x38a8dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x38A8DCu;
    {
        const bool branch_taken_0x38a8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a8dc) {
            ctx->pc = 0x38A908u;
            goto label_38a908;
        }
    }
    ctx->pc = 0x38A8E4u;
    // 0x38a8e4: 0x0  nop
    ctx->pc = 0x38a8e4u;
    // NOP
label_38a8e8:
    // 0x38a8e8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x38a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x38a8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38a8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a8f0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x38a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x38a8f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x38a8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x38a8f8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x38a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x38a8fc: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x38a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x38a900: 0xc0d04e4  jal         func_341390
    ctx->pc = 0x38A900u;
    SET_GPR_U32(ctx, 31, 0x38A908u);
    ctx->pc = 0x38A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A900u;
    // 0x38a904: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341390u, 0x38A900u, 0x38A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A908u;
label_38a908:
    // 0x38a908: 0x8e10004c  lw          $s0, 0x4C($s0)
    ctx->pc = 0x38a908u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x38a90c: 0xc0d168c  jal         func_345A30
    ctx->pc = 0x38A90Cu;
    SET_GPR_U32(ctx, 31, 0x38A914u);
    ctx->pc = 0x38A910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A90Cu;
    // 0x38a910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345A30u, 0x38A90Cu, 0x38A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A914u;
label_38a914:
    // 0x38a914: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x38a914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x38a918: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x38a918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x38a91c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38a91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x38a920: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x38a920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x38a924: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x38a924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x38a928: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x38a928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x38a92c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38a92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38a930: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38a930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38a934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38a938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a93c: 0x3e00008  jr          $ra
    ctx->pc = 0x38A93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A93Cu;
        // 0x38a940: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A944u;
}
