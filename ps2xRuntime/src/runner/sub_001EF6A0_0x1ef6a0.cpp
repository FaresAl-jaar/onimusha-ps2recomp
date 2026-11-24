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

// Function: sub_001EF6A0
// Address: 0x1ef6a0 - 0x1ef720
void sub_001EF6A0_0x1ef6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF6A0_0x1ef6a0");
#endif

    switch (ctx->pc) {
        case 0x1ef6d4u: goto label_1ef6d4;
        default: break;
    }

    ctx->pc = 0x1ef6a0u;

    // 0x1ef6a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef6a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef6a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ef6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ef6ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef6b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef6b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef6b4: 0x90840047  lbu         $a0, 0x47($a0)
    ctx->pc = 0x1ef6b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 71)));
    // 0x1ef6b8: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EF6B8u;
    {
        const bool branch_taken_0x1ef6b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ef6b8) {
            ctx->pc = 0x1EF710u;
            goto label_1ef710;
        }
    }
    ctx->pc = 0x1EF6C0u;
    // 0x1ef6c0: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x1ef6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x1ef6c4: 0xa3838c88  sb          $v1, -0x7378($gp)
    ctx->pc = 0x1ef6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef6c8: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x1ef6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x1ef6cc: 0xc056a98  jal         func_15AA60
    ctx->pc = 0x1EF6CCu;
    SET_GPR_U32(ctx, 31, 0x1EF6D4u);
    ctx->pc = 0x1EF6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF6CCu;
    // 0x1ef6d0: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA60u, 0x1EF6CCu, 0x1EF6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF6D4u;
label_1ef6d4:
    // 0x1ef6d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ef6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef6d8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF6D8u;
    {
        const bool branch_taken_0x1ef6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6D8u;
        // 0x1ef6dc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6d8) {
            ctx->pc = 0x1EF700u;
            goto label_1ef700;
        }
    }
    ctx->pc = 0x1EF6E0u;
    // 0x1ef6e0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ef6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ef6e4: 0x9423a3d6  lhu         $v1, -0x5C2A($at)
    ctx->pc = 0x1ef6e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294943702)));
    // 0x1ef6e8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1ef6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1ef6ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF6ECu;
    {
        const bool branch_taken_0x1ef6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6ECu;
        // 0x1ef6f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6ec) {
            ctx->pc = 0x1EF700u;
            goto label_1ef700;
        }
    }
    ctx->pc = 0x1EF6F4u;
    // 0x1ef6f4: 0xa3838c88  sb          $v1, -0x7378($gp)
    ctx->pc = 0x1ef6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef6f8: 0xa2000047  sb          $zero, 0x47($s0)
    ctx->pc = 0x1ef6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef6fc: 0x0  nop
    ctx->pc = 0x1ef6fcu;
    // NOP
label_1ef700:
    // 0x1ef700: 0x97838818  lhu         $v1, -0x77E8($gp)
    ctx->pc = 0x1ef700u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x1ef704: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ef704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ef708: 0xa7838818  sh          $v1, -0x77E8($gp)
    ctx->pc = 0x1ef708u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936600), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef70c: 0x0  nop
    ctx->pc = 0x1ef70cu;
    // NOP
label_1ef710:
    // 0x1ef710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ef710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef718: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF718u;
        // 0x1ef71c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF720u;
}
