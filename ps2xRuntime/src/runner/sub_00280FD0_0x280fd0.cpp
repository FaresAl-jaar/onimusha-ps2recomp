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

// Function: sub_00280FD0
// Address: 0x280fd0 - 0x28109c
void sub_00280FD0_0x280fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280FD0_0x280fd0");
#endif

    switch (ctx->pc) {
        case 0x280ff0u: goto label_280ff0;
        case 0x28104cu: goto label_28104c;
        default: break;
    }

    ctx->pc = 0x280fd0u;

    // 0x280fd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x280fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x280fd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280fd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x280fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x280fdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x280fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280fe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x280fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x280fe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x280fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280fe8: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x280FE8u;
    SET_GPR_U32(ctx, 31, 0x280FF0u);
    ctx->pc = 0x280FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280FE8u;
    // 0x280fec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x280FE8u, 0x280FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280FF0u;
label_280ff0:
    // 0x280ff0: 0x92240821  lbu         $a0, 0x821($s1)
    ctx->pc = 0x280ff0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2081)));
    // 0x280ff4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x280ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280ff8: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x280FF8u;
    {
        const bool branch_taken_0x280ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x280FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FF8u;
        // 0x280ffc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ff8) {
            ctx->pc = 0x281060u;
            goto label_281060;
        }
    }
    ctx->pc = 0x281000u;
    // 0x281000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x281000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281004: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x281004u;
    {
        const bool branch_taken_0x281004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x281004) {
            ctx->pc = 0x281050u;
            goto label_281050;
        }
    }
    ctx->pc = 0x28100Cu;
    // 0x28100c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28100Cu;
    {
        const bool branch_taken_0x28100c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28100c) {
            ctx->pc = 0x281020u;
            goto label_281020;
        }
    }
    ctx->pc = 0x281014u;
    // 0x281014: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x281014u;
    {
        const bool branch_taken_0x281014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281014) {
            ctx->pc = 0x281088u;
            goto label_281088;
        }
    }
    ctx->pc = 0x28101Cu;
    // 0x28101c: 0x0  nop
    ctx->pc = 0x28101cu;
    // NOP
label_281020:
    // 0x281020: 0xa22007f6  sb          $zero, 0x7F6($s1)
    ctx->pc = 0x281020u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x281024: 0xa22007f4  sb          $zero, 0x7F4($s1)
    ctx->pc = 0x281024u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x281028: 0x240200c5  addiu       $v0, $zero, 0xC5
    ctx->pc = 0x281028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
    // 0x28102c: 0xa62207f2  sh          $v0, 0x7F2($s1)
    ctx->pc = 0x28102cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x281030: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x281030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x281034: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x281034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x281038: 0xa22007f5  sb          $zero, 0x7F5($s1)
    ctx->pc = 0x281038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x28103c: 0xae2207ec  sw          $v0, 0x7EC($s1)
    ctx->pc = 0x28103cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2028), GPR_U32(ctx, 2));
    // 0x281040: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x281040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281044: 0xc096d04  jal         func_25B410
    ctx->pc = 0x281044u;
    SET_GPR_U32(ctx, 31, 0x28104Cu);
    ctx->pc = 0x281048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281044u;
    // 0x281048: 0xa2230821  sb          $v1, 0x821($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B410u, 0x281044u, 0x28104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28104Cu;
label_28104c:
    // 0x28104c: 0x0  nop
    ctx->pc = 0x28104cu;
    // NOP
label_281050:
    // 0x281050: 0x922307f6  lbu         $v1, 0x7F6($s1)
    ctx->pc = 0x281050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2038)));
    // 0x281054: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x281054u;
    {
        const bool branch_taken_0x281054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281054u;
        // 0x281058: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281054) {
            ctx->pc = 0x281088u;
            goto label_281088;
        }
    }
    ctx->pc = 0x28105Cu;
    // 0x28105c: 0xa2230821  sb          $v1, 0x821($s1)
    ctx->pc = 0x28105cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2081), (uint8_t)GPR_U32(ctx, 3));
label_281060:
    // 0x281060: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x281060u;
    {
        const bool branch_taken_0x281060 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x281060) {
            ctx->pc = 0x281088u;
            goto label_281088;
        }
    }
    ctx->pc = 0x281068u;
    // 0x281068: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x281068u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28106c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28106cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x281070: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281070u;
    {
        const bool branch_taken_0x281070 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x281074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281070u;
        // 0x281074: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281070) {
            ctx->pc = 0x281080u;
            goto label_281080;
        }
    }
    ctx->pc = 0x281078u;
    // 0x281078: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x281078u;
    {
        const bool branch_taken_0x281078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281078u;
        // 0x28107c: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281078) {
            ctx->pc = 0x281088u;
            goto label_281088;
        }
    }
    ctx->pc = 0x281080u;
label_281080:
    // 0x281080: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x281080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281084: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x281084u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_281088:
    // 0x281088: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x281088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28108c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28108cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281094: 0x3e00008  jr          $ra
    ctx->pc = 0x281094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281094u;
        // 0x281098: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28109Cu;
}
