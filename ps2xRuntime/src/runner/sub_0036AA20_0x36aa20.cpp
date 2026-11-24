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

// Function: sub_0036AA20
// Address: 0x36aa20 - 0x36abf0
void sub_0036AA20_0x36aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AA20_0x36aa20");
#endif

    switch (ctx->pc) {
        case 0x36aa54u: goto label_36aa54;
        case 0x36aa88u: goto label_36aa88;
        case 0x36aaa8u: goto label_36aaa8;
        case 0x36aae8u: goto label_36aae8;
        case 0x36aaf0u: goto label_36aaf0;
        case 0x36ab54u: goto label_36ab54;
        case 0x36ab74u: goto label_36ab74;
        case 0x36ab80u: goto label_36ab80;
        case 0x36abb8u: goto label_36abb8;
        case 0x36abd4u: goto label_36abd4;
        default: break;
    }

    ctx->pc = 0x36aa20u;

    // 0x36aa20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36aa24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x36aa28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36aa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36aa2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36aa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36aa30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36aa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36aa34: 0x90830021  lbu         $v1, 0x21($a0)
    ctx->pc = 0x36aa34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x36aa38: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36AA38u;
    {
        const bool branch_taken_0x36aa38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA38u;
        // 0x36aa3c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa38) {
            ctx->pc = 0x36AA48u;
            goto label_36aa48;
        }
    }
    ctx->pc = 0x36AA40u;
    // 0x36aa40: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x36AA40u;
    {
        const bool branch_taken_0x36aa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aa40) {
            ctx->pc = 0x36ABD8u;
            goto label_36abd8;
        }
    }
    ctx->pc = 0x36AA48u;
label_36aa48:
    // 0x36aa48: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36aa48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36aa4c: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x36AA4Cu;
    SET_GPR_U32(ctx, 31, 0x36AA54u);
    ctx->pc = 0x36AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AA4Cu;
    // 0x36aa50: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x36AA4Cu, 0x36AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA54u;
label_36aa54:
    // 0x36aa54: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x36aa54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x36aa58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36aa58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa5c: 0x8c301284  lw          $s0, 0x1284($at)
    ctx->pc = 0x36aa5cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x911284u));
    // 0x36aa60: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x36aa60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x36aa64: 0x84221294  lh          $v0, 0x1294($at)
    ctx->pc = 0x36aa64u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x911294u));
    // 0x36aa68: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x36AA68u;
    {
        const bool branch_taken_0x36aa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36aa68) {
            ctx->pc = 0x36AA90u;
            goto label_36aa90;
        }
    }
    ctx->pc = 0x36AA70u;
    // 0x36aa70: 0x92430194  lbu         $v1, 0x194($s2)
    ctx->pc = 0x36aa70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x36aa74: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36aa78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36aa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36aa80: 0xc0dc804  jal         func_372010
    ctx->pc = 0x36AA80u;
    SET_GPR_U32(ctx, 31, 0x36AA88u);
    ctx->pc = 0x36AA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AA80u;
    // 0x36aa84: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x36AA80u, 0x36AA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA88u;
label_36aa88:
    // 0x36aa88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36AA88u;
    {
        const bool branch_taken_0x36aa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aa88) {
            ctx->pc = 0x36AAA8u;
            goto label_36aaa8;
        }
    }
    ctx->pc = 0x36AA90u;
label_36aa90:
    // 0x36aa90: 0x92430194  lbu         $v1, 0x194($s2)
    ctx->pc = 0x36aa90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x36aa94: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36aa98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36aa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa9c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x36aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x36aaa0: 0xc0dc804  jal         func_372010
    ctx->pc = 0x36AAA0u;
    SET_GPR_U32(ctx, 31, 0x36AAA8u);
    ctx->pc = 0x36AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AAA0u;
    // 0x36aaa4: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x36AAA0u, 0x36AAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AAA8u;
label_36aaa8:
    // 0x36aaa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36aaac: 0x16240012  bne         $s1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x36AAACu;
    {
        const bool branch_taken_0x36aaac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        if (branch_taken_0x36aaac) {
            ctx->pc = 0x36AAF8u;
            goto label_36aaf8;
        }
    }
    ctx->pc = 0x36AAB4u;
    // 0x36aab4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36aab8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36aabc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36aabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36aac0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36aac4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x36aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x36aac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36aac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aacc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36aaccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36aad0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36aad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aad4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36aad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aad8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36aad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aadc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36aadcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aae0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36AAE0u;
    SET_GPR_U32(ctx, 31, 0x36AAE8u);
    ctx->pc = 0x36AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AAE0u;
    // 0x36aae4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36AAE0u, 0x36AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AAE8u;
label_36aae8:
    // 0x36aae8: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x36AAE8u;
    SET_GPR_U32(ctx, 31, 0x36AAF0u);
    ctx->pc = 0x36AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AAE8u;
    // 0x36aaec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x36AAE8u, 0x36AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AAF0u;
label_36aaf0:
    // 0x36aaf0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x36AAF0u;
    {
        const bool branch_taken_0x36aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aaf0) {
            ctx->pc = 0x36ABD8u;
            goto label_36abd8;
        }
    }
    ctx->pc = 0x36AAF8u;
label_36aaf8:
    // 0x36aaf8: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x36AAF8u;
    {
        const bool branch_taken_0x36aaf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AAF8u;
        // 0x36aafc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aaf8) {
            ctx->pc = 0x36ABD8u;
            goto label_36abd8;
        }
    }
    ctx->pc = 0x36AB00u;
    // 0x36ab00: 0x16230035  bne         $s1, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x36AB00u;
    {
        const bool branch_taken_0x36ab00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x36ab00) {
            ctx->pc = 0x36ABD8u;
            goto label_36abd8;
        }
    }
    ctx->pc = 0x36AB08u;
    // 0x36ab08: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x36ab08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x36ab0c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x36ab0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x36ab10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36AB10u;
    {
        const bool branch_taken_0x36ab10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ab10) {
            ctx->pc = 0x36AB20u;
            goto label_36ab20;
        }
    }
    ctx->pc = 0x36AB18u;
    // 0x36ab18: 0x1444001b  bne         $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x36AB18u;
    {
        const bool branch_taken_0x36ab18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x36ab18) {
            ctx->pc = 0x36AB88u;
            goto label_36ab88;
        }
    }
    ctx->pc = 0x36AB20u;
label_36ab20:
    // 0x36ab20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ab24: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36ab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36ab28: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36ab2c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36ab30: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36ab30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36ab34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ab34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab38: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36ab38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36ab3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36ab3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36ab40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36ab44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36ab48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab4c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36AB4Cu;
    SET_GPR_U32(ctx, 31, 0x36AB54u);
    ctx->pc = 0x36AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AB4Cu;
    // 0x36ab50: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36AB4Cu, 0x36AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB54u;
label_36ab54:
    // 0x36ab54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x36ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36ab58: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x36ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x36ab5c: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x36ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x36ab60: 0xae420198  sw          $v0, 0x198($s2)
    ctx->pc = 0x36ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
    // 0x36ab64: 0x8e420198  lw          $v0, 0x198($s2)
    ctx->pc = 0x36ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 408)));
    // 0x36ab68: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x36ab68u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36ab6c: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x36AB6Cu;
    SET_GPR_U32(ctx, 31, 0x36AB74u);
    ctx->pc = 0x36AB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AB6Cu;
    // 0x36ab70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x36AB6Cu, 0x36AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB74u;
label_36ab74:
    // 0x36ab74: 0xae4201a4  sw          $v0, 0x1A4($s2)
    ctx->pc = 0x36ab74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 420), GPR_U32(ctx, 2));
    // 0x36ab78: 0xc0daafc  jal         func_36ABF0
    ctx->pc = 0x36AB78u;
    SET_GPR_U32(ctx, 31, 0x36AB80u);
    ctx->pc = 0x36AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AB78u;
    // 0x36ab7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ABF0u, 0x36AB78u, 0x36AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB80u;
label_36ab80:
    // 0x36ab80: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x36AB80u;
    {
        const bool branch_taken_0x36ab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36ab80) {
            ctx->pc = 0x36ABD8u;
            goto label_36abd8;
        }
    }
    ctx->pc = 0x36AB88u;
label_36ab88:
    // 0x36ab88: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36ab8c: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x36ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x36ab90: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x36ab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x36ab94: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36ab94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36ab98: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36ab98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36ab9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36ab9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36aba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aba4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36aba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aba8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36aba8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36abac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36abacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36abb0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36ABB0u;
    SET_GPR_U32(ctx, 31, 0x36ABB8u);
    ctx->pc = 0x36ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ABB0u;
    // 0x36abb4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36ABB0u, 0x36ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ABB8u;
label_36abb8:
    // 0x36abb8: 0x92430194  lbu         $v1, 0x194($s2)
    ctx->pc = 0x36abb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 404)));
    // 0x36abbc: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x36abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x36abc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36abc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36abc4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x36abc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36abc8: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x36abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x36abcc: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x36ABCCu;
    SET_GPR_U32(ctx, 31, 0x36ABD4u);
    ctx->pc = 0x36ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36ABCCu;
    // 0x36abd0: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x36ABCCu, 0x36ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36ABD4u;
label_36abd4:
    // 0x36abd4: 0x0  nop
    ctx->pc = 0x36abd4u;
    // NOP
label_36abd8:
    // 0x36abd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36abd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36abdc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36abdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36abe0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36abe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36abe4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36abe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36abe8: 0x3e00008  jr          $ra
    ctx->pc = 0x36ABE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ABE8u;
        // 0x36abec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36ABE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36ABF0u;
}
