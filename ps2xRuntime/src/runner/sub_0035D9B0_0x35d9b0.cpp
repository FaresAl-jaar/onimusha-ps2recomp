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

// Function: sub_0035D9B0
// Address: 0x35d9b0 - 0x35da50
void sub_0035D9B0_0x35d9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D9B0_0x35d9b0");
#endif

    switch (ctx->pc) {
        case 0x35d9dcu: goto label_35d9dc;
        case 0x35da04u: goto label_35da04;
        case 0x35da34u: goto label_35da34;
        case 0x35da40u: goto label_35da40;
        default: break;
    }

    ctx->pc = 0x35d9b0u;

    // 0x35d9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d9b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d9b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35d9bc: 0x90833051  lbu         $v1, 0x3051($a0)
    ctx->pc = 0x35d9bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12369)));
    // 0x35d9c0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35D9C0u;
    {
        const bool branch_taken_0x35d9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9C0u;
        // 0x35d9c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d9c0) {
            ctx->pc = 0x35D9E8u;
            goto label_35d9e8;
        }
    }
    ctx->pc = 0x35D9C8u;
    // 0x35d9c8: 0x92023052  lbu         $v0, 0x3052($s0)
    ctx->pc = 0x35d9c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12370)));
    // 0x35d9cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D9CCu;
    {
        const bool branch_taken_0x35d9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d9cc) {
            ctx->pc = 0x35D9E8u;
            goto label_35d9e8;
        }
    }
    ctx->pc = 0x35D9D4u;
    // 0x35d9d4: 0xc0d7694  jal         func_35DA50
    ctx->pc = 0x35D9D4u;
    SET_GPR_U32(ctx, 31, 0x35D9DCu);
    ctx->pc = 0x35DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DA50u, 0x35D9D4u, 0x35D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D9DCu;
label_35d9dc:
    // 0x35d9dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x35D9DCu;
    {
        const bool branch_taken_0x35d9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d9dc) {
            ctx->pc = 0x35DA08u;
            goto label_35da08;
        }
    }
    ctx->pc = 0x35D9E4u;
    // 0x35d9e4: 0x0  nop
    ctx->pc = 0x35d9e4u;
    // NOP
label_35d9e8:
    // 0x35d9e8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35D9E8u;
    {
        const bool branch_taken_0x35d9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d9e8) {
            ctx->pc = 0x35DA08u;
            goto label_35da08;
        }
    }
    ctx->pc = 0x35D9F0u;
    // 0x35d9f0: 0x92023052  lbu         $v0, 0x3052($s0)
    ctx->pc = 0x35d9f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12370)));
    // 0x35d9f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D9F4u;
    {
        const bool branch_taken_0x35d9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9F4u;
        // 0x35d9f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d9f4) {
            ctx->pc = 0x35DA08u;
            goto label_35da08;
        }
    }
    ctx->pc = 0x35D9FCu;
    // 0x35d9fc: 0xc0d76a4  jal         func_35DA90
    ctx->pc = 0x35D9FCu;
    SET_GPR_U32(ctx, 31, 0x35DA04u);
    ctx->pc = 0x35DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DA90u, 0x35D9FCu, 0x35DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA04u;
label_35da04:
    // 0x35da04: 0x0  nop
    ctx->pc = 0x35da04u;
    // NOP
label_35da08:
    // 0x35da08: 0x92023051  lbu         $v0, 0x3051($s0)
    ctx->pc = 0x35da08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12369)));
    // 0x35da0c: 0xa2023052  sb          $v0, 0x3052($s0)
    ctx->pc = 0x35da0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12370), (uint8_t)GPR_U32(ctx, 2));
    // 0x35da10: 0xa2003051  sb          $zero, 0x3051($s0)
    ctx->pc = 0x35da10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12369), (uint8_t)GPR_U32(ctx, 0));
    // 0x35da14: 0x92023052  lbu         $v0, 0x3052($s0)
    ctx->pc = 0x35da14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12370)));
    // 0x35da18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35DA18u;
    {
        const bool branch_taken_0x35da18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35da18) {
            ctx->pc = 0x35DA38u;
            goto label_35da38;
        }
    }
    ctx->pc = 0x35DA20u;
    // 0x35da20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35da20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35da24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35da24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35da28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35da28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35da2c: 0xc0d76dc  jal         func_35DB70
    ctx->pc = 0x35DA2Cu;
    SET_GPR_U32(ctx, 31, 0x35DA34u);
    ctx->pc = 0x35DA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DA2Cu;
    // 0x35da30: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x35DB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DB70u, 0x35DA2Cu, 0x35DA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA34u;
label_35da34:
    // 0x35da34: 0x0  nop
    ctx->pc = 0x35da34u;
    // NOP
label_35da38:
    // 0x35da38: 0xc098770  jal         func_261DC0
    ctx->pc = 0x35DA38u;
    SET_GPR_U32(ctx, 31, 0x35DA40u);
    ctx->pc = 0x35DA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DA38u;
    // 0x35da3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261DC0u, 0x35DA38u, 0x35DA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA40u;
label_35da40:
    // 0x35da40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35da40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35da44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35da44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35da48: 0x3e00008  jr          $ra
    ctx->pc = 0x35DA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA48u;
        // 0x35da4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DA50u;
}
