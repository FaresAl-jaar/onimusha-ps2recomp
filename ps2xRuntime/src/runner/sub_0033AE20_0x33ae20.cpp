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

// Function: sub_0033AE20
// Address: 0x33ae20 - 0x33aec4
void sub_0033AE20_0x33ae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AE20_0x33ae20");
#endif

    switch (ctx->pc) {
        case 0x33ae40u: goto label_33ae40;
        case 0x33aeb8u: goto label_33aeb8;
        default: break;
    }

    ctx->pc = 0x33ae20u;

    // 0x33ae20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33ae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33ae24: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x33ae24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33ae28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33ae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33ae2c: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x33ae2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33ae30: 0x10a30021  beq         $a1, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x33AE30u;
    {
        const bool branch_taken_0x33ae30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ae30) {
            ctx->pc = 0x33AEB8u;
            goto label_33aeb8;
        }
    }
    ctx->pc = 0x33AE38u;
    // 0x33ae38: 0xc0ceb50  jal         func_33AD40
    ctx->pc = 0x33AE38u;
    SET_GPR_U32(ctx, 31, 0x33AE40u);
    ctx->pc = 0x33AD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AD40u, 0x33AE38u, 0x33AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AE40u;
label_33ae40:
    // 0x33ae40: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33ae40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33ae44: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x33ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33ae48: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x33AE48u;
    {
        const bool branch_taken_0x33ae48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x33AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE48u;
        // 0x33ae4c: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ae48) {
            ctx->pc = 0x33AEB8u;
            goto label_33aeb8;
        }
    }
    ctx->pc = 0x33AE50u;
    // 0x33ae50: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x33ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x33ae54: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x33ae54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x33ae58: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x33AE58u;
    {
        const bool branch_taken_0x33ae58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ae58) {
            ctx->pc = 0x33AEB8u;
            goto label_33aeb8;
        }
    }
    ctx->pc = 0x33AE60u;
    // 0x33ae60: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x33ae60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x33ae64: 0x90221410  lbu         $v0, 0x1410($at)
    ctx->pc = 0x33ae64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x921410u));
    // 0x33ae68: 0x24430005  addiu       $v1, $v0, 0x5
    ctx->pc = 0x33ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x33ae6c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AE6Cu;
    {
        const bool branch_taken_0x33ae6c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x33AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AE6Cu;
        // 0x33ae70: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ae6c) {
            ctx->pc = 0x33AE80u;
            goto label_33ae80;
        }
    }
    ctx->pc = 0x33AE74u;
    // 0x33ae74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33AE74u;
    {
        const bool branch_taken_0x33ae74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ae74) {
            ctx->pc = 0x33AE80u;
            goto label_33ae80;
        }
    }
    ctx->pc = 0x33AE7Cu;
    // 0x33ae7c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x33ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_33ae80:
    // 0x33ae80: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x33ae80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x33ae84: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x33ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x33ae88: 0xa0221410  sb          $v0, 0x1410($at)
    ctx->pc = 0x33ae88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x921410u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x921410u, _value); } while (0);
    // 0x33ae8c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x33ae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x33ae90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ae94: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x33ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x33ae98: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x33ae98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x33ae9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33ae9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aea0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33aea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aea4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33aea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aea8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33aea8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aeac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33aeacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aeb0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x33AEB0u;
    SET_GPR_U32(ctx, 31, 0x33AEB8u);
    ctx->pc = 0x33AEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AEB0u;
    // 0x33aeb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x33AEB0u, 0x33AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AEB8u;
label_33aeb8:
    // 0x33aeb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33aeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33aebc: 0x3e00008  jr          $ra
    ctx->pc = 0x33AEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AEBCu;
        // 0x33aec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AEC4u;
}
