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

// Function: sub_0033BD20
// Address: 0x33bd20 - 0x33bddc
void sub_0033BD20_0x33bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BD20_0x33bd20");
#endif

    switch (ctx->pc) {
        case 0x33bd44u: goto label_33bd44;
        case 0x33bd4cu: goto label_33bd4c;
        case 0x33bd74u: goto label_33bd74;
        case 0x33bd9cu: goto label_33bd9c;
        case 0x33bdc4u: goto label_33bdc4;
        default: break;
    }

    ctx->pc = 0x33bd20u;

    // 0x33bd20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33bd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33bd24: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x33bd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x33bd28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33bd2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33bd30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33bd34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33bd34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33bd38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd3c: 0xc0cecc0  jal         func_33B300
    ctx->pc = 0x33BD3Cu;
    SET_GPR_U32(ctx, 31, 0x33BD44u);
    ctx->pc = 0x33BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD3Cu;
    // 0x33bd40: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B300u, 0x33BD3Cu, 0x33BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD44u;
label_33bd44:
    // 0x33bd44: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x33BD44u;
    SET_GPR_U32(ctx, 31, 0x33BD4Cu);
    ctx->pc = 0x33BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD44u;
    // 0x33bd48: 0x96240002  lhu         $a0, 0x2($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x33BD44u, 0x33BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD4Cu;
label_33bd4c:
    // 0x33bd4c: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x33bd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x33bd50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33bd54: 0x9024140c  lbu         $a0, 0x140C($at)
    ctx->pc = 0x33bd54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x92140Cu));
    // 0x33bd58: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x33BD58u;
    {
        const bool branch_taken_0x33bd58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33bd58) {
            ctx->pc = 0x33BDC8u;
            goto label_33bdc8;
        }
    }
    ctx->pc = 0x33BD60u;
    // 0x33bd60: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x33bd60u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33bd64: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x33bd68: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x33bd68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x33bd6c: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x33BD6Cu;
    SET_GPR_U32(ctx, 31, 0x33BD74u);
    ctx->pc = 0x33BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD6Cu;
    // 0x33bd70: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x33BD6Cu, 0x33BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD74u;
label_33bd74:
    // 0x33bd74: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33bd78: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33bd78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x33bd7c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x33bd7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd80: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33bd84: 0x2405011e  addiu       $a1, $zero, 0x11E
    ctx->pc = 0x33bd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x33bd88: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x33bd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x33bd8c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33bd8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd90: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x33bd90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33bd94: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x33BD94u;
    SET_GPR_U32(ctx, 31, 0x33BD9Cu);
    ctx->pc = 0x33BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD94u;
    // 0x33bd98: 0x2529ef60  addiu       $t1, $t1, -0x10A0 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x33BD94u, 0x33BD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD9Cu;
label_33bd9c:
    // 0x33bd9c: 0x922a000a  lbu         $t2, 0xA($s1)
    ctx->pc = 0x33bd9cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x33bda0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33bda0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33bda4: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33bda4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x33bda8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33bda8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bdac: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33bdb0: 0x2405011e  addiu       $a1, $zero, 0x11E
    ctx->pc = 0x33bdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x33bdb4: 0x2406011f  addiu       $a2, $zero, 0x11F
    ctx->pc = 0x33bdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x33bdb8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x33bdb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33bdbc: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x33BDBCu;
    SET_GPR_U32(ctx, 31, 0x33BDC4u);
    ctx->pc = 0x33BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BDBCu;
    // 0x33bdc0: 0x2529ef68  addiu       $t1, $t1, -0x1098 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x33BDBCu, 0x33BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BDC4u;
label_33bdc4:
    // 0x33bdc4: 0x0  nop
    ctx->pc = 0x33bdc4u;
    // NOP
label_33bdc8:
    // 0x33bdc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33bdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33bdcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33bdccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33bdd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33bdd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x33BDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDD4u;
        // 0x33bdd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BDDCu;
}
