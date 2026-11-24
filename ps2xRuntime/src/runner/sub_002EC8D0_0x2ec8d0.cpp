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

// Function: sub_002EC8D0
// Address: 0x2ec8d0 - 0x2ec970
void sub_002EC8D0_0x2ec8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC8D0_0x2ec8d0");
#endif

    switch (ctx->pc) {
        case 0x2ec8e4u: goto label_2ec8e4;
        case 0x2ec900u: goto label_2ec900;
        case 0x2ec944u: goto label_2ec944;
        default: break;
    }

    ctx->pc = 0x2ec8d0u;

    // 0x2ec8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ec8d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ec8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ec8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ec8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ec8dc: 0xc0a60b8  jal         func_2982E0
    ctx->pc = 0x2EC8DCu;
    SET_GPR_U32(ctx, 31, 0x2EC8E4u);
    ctx->pc = 0x2EC8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC8DCu;
    // 0x2ec8e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2982E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2982E0u, 0x2EC8DCu, 0x2EC8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC8E4u;
label_2ec8e4:
    // 0x2ec8e4: 0x9204065c  lbu         $a0, 0x65C($s0)
    ctx->pc = 0x2ec8e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x2ec8e8: 0x240300c2  addiu       $v1, $zero, 0xC2
    ctx->pc = 0x2ec8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x2ec8ec: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EC8ECu;
    {
        const bool branch_taken_0x2ec8ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ec8ec) {
            ctx->pc = 0x2EC960u;
            goto label_2ec960;
        }
    }
    ctx->pc = 0x2EC8F4u;
    // 0x2ec8f4: 0x8e0401ec  lw          $a0, 0x1EC($s0)
    ctx->pc = 0x2ec8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x2ec8f8: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EC8F8u;
    {
        const bool branch_taken_0x2ec8f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec8f8) {
            ctx->pc = 0x2EC960u;
            goto label_2ec960;
        }
    }
    ctx->pc = 0x2EC900u;
label_2ec900:
    // 0x2ec900: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2ec900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ec904: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ec904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ec908: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EC908u;
    {
        const bool branch_taken_0x2ec908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec908) {
            ctx->pc = 0x2EC950u;
            goto label_2ec950;
        }
    }
    ctx->pc = 0x2EC910u;
    // 0x2ec910: 0x90870002  lbu         $a3, 0x2($a0)
    ctx->pc = 0x2ec910u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ec914: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x2ec914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x2ec918: 0x24420958  addiu       $v0, $v0, 0x958
    ctx->pc = 0x2ec918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2392));
    // 0x2ec91c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2ec91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2ec920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ec920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec924: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ec924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec928: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2ec928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ec92c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2ec92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ec930: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ec930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ec934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec938: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2ec938u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ec93c: 0xc09fcf4  jal         func_27F3D0
    ctx->pc = 0x2EC93Cu;
    SET_GPR_U32(ctx, 31, 0x2EC944u);
    ctx->pc = 0x2EC940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC93Cu;
    // 0x2ec940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D0u, 0x2EC93Cu, 0x2EC944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC944u;
label_2ec944:
    // 0x2ec944: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC944u;
    {
        const bool branch_taken_0x2ec944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec944) {
            ctx->pc = 0x2EC960u;
            goto label_2ec960;
        }
    }
    ctx->pc = 0x2EC94Cu;
    // 0x2ec94c: 0x0  nop
    ctx->pc = 0x2ec94cu;
    // NOP
label_2ec950:
    // 0x2ec950: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x2ec950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec954: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2EC954u;
    {
        const bool branch_taken_0x2ec954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec954) {
            ctx->pc = 0x2EC900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec900;
        }
    }
    ctx->pc = 0x2EC95Cu;
    // 0x2ec95c: 0x0  nop
    ctx->pc = 0x2ec95cu;
    // NOP
label_2ec960:
    // 0x2ec960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ec960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ec964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec968: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC968u;
        // 0x2ec96c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC970u;
}
