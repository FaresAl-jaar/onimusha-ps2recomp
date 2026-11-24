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

// Function: sub_003BBCA0
// Address: 0x3bbca0 - 0x3bbd30
void sub_003BBCA0_0x3bbca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBCA0_0x3bbca0");
#endif

    switch (ctx->pc) {
        case 0x3bbcb4u: goto label_3bbcb4;
        case 0x3bbcccu: goto label_3bbccc;
        case 0x3bbd04u: goto label_3bbd04;
        case 0x3bbd20u: goto label_3bbd20;
        default: break;
    }

    ctx->pc = 0x3bbca0u;

    // 0x3bbca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bbca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3bbca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bbca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bbca8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bbca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bbcac: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3BBCACu;
    SET_GPR_U32(ctx, 31, 0x3BBCB4u);
    ctx->pc = 0x3BBCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBCACu;
    // 0x3bbcb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3BBCACu, 0x3BBCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBCB4u;
label_3bbcb4:
    // 0x3bbcb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3bbcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbcb8: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x3bbcb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3bbcbc: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3bbcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3bbcc0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3bbcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3bbcc4: 0xc0aa1c8  jal         func_2A8720
    ctx->pc = 0x3BBCC4u;
    SET_GPR_U32(ctx, 31, 0x3BBCCCu);
    ctx->pc = 0x3BBCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBCC4u;
    // 0x3bbcc8: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8720u, 0x3BBCC4u, 0x3BBCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBCCCu;
label_3bbccc:
    // 0x3bbccc: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x3bbcccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3bbcd0: 0x3c022700  lui         $v0, 0x2700
    ctx->pc = 0x3bbcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9984 << 16));
    // 0x3bbcd4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3bbcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3bbcd8: 0x34455102  ori         $a1, $v0, 0x5102
    ctx->pc = 0x3bbcd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20738);
    // 0x3bbcdc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3bbcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3bbce0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3bbce0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbce4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3bbce4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbce8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3bbce8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbcec: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3bbcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3bbcf0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3bbcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3bbcf4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3bbcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bbcf8: 0x8c470088  lw          $a3, 0x88($v0)
    ctx->pc = 0x3bbcf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x3bbcfc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3BBCFCu;
    SET_GPR_U32(ctx, 31, 0x3BBD04u);
    ctx->pc = 0x3BBD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBCFCu;
    // 0x3bbd00: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3BBCFCu, 0x3BBD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBD04u;
label_3bbd04:
    // 0x3bbd04: 0x92022b4b  lbu         $v0, 0x2B4B($s0)
    ctx->pc = 0x3bbd04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3bbd08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bbd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbd0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3bbd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bbd10: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x3bbd10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3bbd14: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3bbd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x3bbd18: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x3BBD18u;
    SET_GPR_U32(ctx, 31, 0x3BBD20u);
    ctx->pc = 0x3BBD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBD18u;
    // 0x3bbd1c: 0xa2022b4b  sb          $v0, 0x2B4B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x3BBD18u, 0x3BBD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBD20u;
label_3bbd20:
    // 0x3bbd20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bbd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bbd24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bbd24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bbd28: 0x3e00008  jr          $ra
    ctx->pc = 0x3BBD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBD28u;
        // 0x3bbd2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BBD30u;
}
