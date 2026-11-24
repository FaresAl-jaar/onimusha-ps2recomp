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

// Function: sub_0033AED0
// Address: 0x33aed0 - 0x33af6c
void sub_0033AED0_0x33aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AED0_0x33aed0");
#endif

    switch (ctx->pc) {
        case 0x33aefcu: goto label_33aefc;
        case 0x33af1cu: goto label_33af1c;
        case 0x33af50u: goto label_33af50;
        default: break;
    }

    ctx->pc = 0x33aed0u;

    // 0x33aed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33aed4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33aed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33aed8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33aed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33aedc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33aedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33aee0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33aee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aee4: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AEE4u;
    {
        const bool branch_taken_0x33aee4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x33AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AEE4u;
        // 0x33aee8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aee4) {
            ctx->pc = 0x33AF08u;
            goto label_33af08;
        }
    }
    ctx->pc = 0x33AEECu;
    // 0x33aeec: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x33aeecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33aef0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33aef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33aef4: 0xc0cebec  jal         func_33AFB0
    ctx->pc = 0x33AEF4u;
    SET_GPR_U32(ctx, 31, 0x33AEFCu);
    ctx->pc = 0x33AEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AEF4u;
    // 0x33aef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AFB0u, 0x33AEF4u, 0x33AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AEFCu;
label_33aefc:
    // 0x33aefc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x33AEFCu;
    {
        const bool branch_taken_0x33aefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aefc) {
            ctx->pc = 0x33AF58u;
            goto label_33af58;
        }
    }
    ctx->pc = 0x33AF04u;
    // 0x33af04: 0x0  nop
    ctx->pc = 0x33af04u;
    // NOP
label_33af08:
    // 0x33af08: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x33af08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33af0c: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x33af0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33af10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33af10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33af14: 0xc0cebec  jal         func_33AFB0
    ctx->pc = 0x33AF14u;
    SET_GPR_U32(ctx, 31, 0x33AF1Cu);
    ctx->pc = 0x33AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AF14u;
    // 0x33af18: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AFB0u, 0x33AF14u, 0x33AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF1Cu;
label_33af1c:
    // 0x33af1c: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x33af1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x33af20: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x33af20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x33af24: 0xa2240009  sb          $a0, 0x9($s1)
    ctx->pc = 0x33af24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x33af28: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x33af28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33af2c: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x33af2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x33af30: 0x4267e  dsrl32      $a0, $a0, 25
    ctx->pc = 0x33af30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 25));
    // 0x33af34: 0xa224000a  sb          $a0, 0xA($s1)
    ctx->pc = 0x33af34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 4));
    // 0x33af38: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x33af38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33af3c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33AF3Cu;
    {
        const bool branch_taken_0x33af3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x33AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF3Cu;
        // 0x33af40: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af3c) {
            ctx->pc = 0x33AF58u;
            goto label_33af58;
        }
    }
    ctx->pc = 0x33AF44u;
    // 0x33af44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33af44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33af48: 0xc0dace0  jal         func_36B380
    ctx->pc = 0x33AF48u;
    SET_GPR_U32(ctx, 31, 0x33AF50u);
    ctx->pc = 0x33AF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AF48u;
    // 0x33af4c: 0x24841400  addiu       $a0, $a0, 0x1400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B380u, 0x33AF48u, 0x33AF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF50u;
label_33af50:
    // 0x33af50: 0xa222000a  sb          $v0, 0xA($s1)
    ctx->pc = 0x33af50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x33af54: 0x0  nop
    ctx->pc = 0x33af54u;
    // NOP
label_33af58:
    // 0x33af58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33af58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33af5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33af5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33af60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33af60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33af64: 0x3e00008  jr          $ra
    ctx->pc = 0x33AF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF64u;
        // 0x33af68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AF6Cu;
}
