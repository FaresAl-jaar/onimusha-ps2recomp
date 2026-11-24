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

// Function: sub_0021DF20
// Address: 0x21df20 - 0x21dfb0
void sub_0021DF20_0x21df20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DF20_0x21df20");
#endif

    switch (ctx->pc) {
        case 0x21df34u: goto label_21df34;
        case 0x21df74u: goto label_21df74;
        case 0x21df8cu: goto label_21df8c;
        default: break;
    }

    ctx->pc = 0x21df20u;

    // 0x21df20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21df20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21df24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21df28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21df28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21df2c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21DF2Cu;
    SET_GPR_U32(ctx, 31, 0x21DF34u);
    ctx->pc = 0x21DF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF2Cu;
    // 0x21df30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21DF2Cu, 0x21DF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF34u;
label_21df34:
    // 0x21df34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21df34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21df38: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x21df38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21df3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21df3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21df40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21DF44u;
    {
        const bool branch_taken_0x21df44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF44u;
        // 0x21df48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df44) {
            ctx->pc = 0x21DF68u;
            goto label_21df68;
        }
    }
    ctx->pc = 0x21DF4Cu;
    // 0x21df4c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21df4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21df50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21df50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21df54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21df54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21df58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21df58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df5c: 0x34a5013c  ori         $a1, $a1, 0x13C
    ctx->pc = 0x21df5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)316);
    // 0x21df60: 0x80848e0  j           func_212380
    ctx->pc = 0x21DF60u;
    ctx->pc = 0x21DF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF60u;
    // 0x21df64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21DF68u;
label_21df68:
    // 0x21df68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21df6c: 0xc0888d6  jal         func_222358
    ctx->pc = 0x21DF6Cu;
    SET_GPR_U32(ctx, 31, 0x21DF74u);
    ctx->pc = 0x21DF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF6Cu;
    // 0x21df70: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222358u, 0x21DF6Cu, 0x21DF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF74u;
label_21df74:
    // 0x21df74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21df74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21df78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21df7c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x21df7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21df80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21df80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df84: 0xc0888d6  jal         func_222358
    ctx->pc = 0x21DF84u;
    SET_GPR_U32(ctx, 31, 0x21DF8Cu);
    ctx->pc = 0x21DF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF84u;
    // 0x21df88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222358u, 0x21DF84u, 0x21DF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF8Cu;
label_21df8c:
    // 0x21df8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21df8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21df90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21df94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x21df94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21df98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21df98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21df9c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x21df9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21dfa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21dfa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21dfa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfa8: 0x80888d6  j           func_222358
    ctx->pc = 0x21DFA8u;
    ctx->pc = 0x21DFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFA8u;
    // 0x21dfac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222358u;
    sub_00222358_0x222358(rdram, ctx, runtime); return;
    ctx->pc = 0x21DFB0u;
}
