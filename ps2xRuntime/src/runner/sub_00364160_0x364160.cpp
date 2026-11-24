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

// Function: sub_00364160
// Address: 0x364160 - 0x364244
void sub_00364160_0x364160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364160_0x364160");
#endif

    switch (ctx->pc) {
        case 0x364184u: goto label_364184;
        case 0x364198u: goto label_364198;
        case 0x3641a4u: goto label_3641a4;
        case 0x3641b8u: goto label_3641b8;
        case 0x364204u: goto label_364204;
        case 0x364224u: goto label_364224;
        case 0x364238u: goto label_364238;
        default: break;
    }

    ctx->pc = 0x364160u;

    // 0x364160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x364160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x364164: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x364164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x364168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36416c: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x36416cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x364170: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x364170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364174: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x364174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x364178: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x364178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36417c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x36417Cu;
    SET_GPR_U32(ctx, 31, 0x364184u);
    ctx->pc = 0x364180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36417Cu;
    // 0x364180: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x36417Cu, 0x364184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364184u;
label_364184:
    // 0x364184: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x364184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x364188: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x364188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36418c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x36418cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x364190: 0xc095130  jal         func_2544C0
    ctx->pc = 0x364190u;
    SET_GPR_U32(ctx, 31, 0x364198u);
    ctx->pc = 0x364194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364190u;
    // 0x364194: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x364190u, 0x364198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364198u;
label_364198:
    // 0x364198: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x364198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x36419c: 0xc0b78b4  jal         func_2DE2D0
    ctx->pc = 0x36419Cu;
    SET_GPR_U32(ctx, 31, 0x3641A4u);
    ctx->pc = 0x3641A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36419Cu;
    // 0x3641a0: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE2D0u, 0x36419Cu, 0x3641A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3641A4u;
label_3641a4:
    // 0x3641a4: 0x93868bd4  lbu         $a2, -0x742C($gp)
    ctx->pc = 0x3641a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937556)));
    // 0x3641a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3641a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3641ac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3641acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3641b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3641b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3641b4: 0x0  nop
    ctx->pc = 0x3641b4u;
    // NOP
label_3641b8:
    // 0x3641b8: 0x93838bd0  lbu         $v1, -0x7430($gp)
    ctx->pc = 0x3641b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937552)));
    // 0x3641bc: 0x651004  sllv        $v0, $a1, $v1
    ctx->pc = 0x3641bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x3641c0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3641c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3641c4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3641C4u;
    {
        const bool branch_taken_0x3641c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3641C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3641C4u;
        // 0x3641c8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3641c4) {
            ctx->pc = 0x3641F0u;
            goto label_3641f0;
        }
    }
    ctx->pc = 0x3641CCu;
    // 0x3641cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3641ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3641d0: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x3641d0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3641d4: 0x0  nop
    ctx->pc = 0x3641d4u;
    // NOP
    // 0x3641d8: 0x0  nop
    ctx->pc = 0x3641d8u;
    // NOP
    // 0x3641dc: 0x1810  mfhi        $v1
    ctx->pc = 0x3641dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3641e0: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x3641e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3641e4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3641E4u;
    {
        const bool branch_taken_0x3641e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3641E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3641E4u;
        // 0x3641e8: 0xa3838bd0  sb          $v1, -0x7430($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937552), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3641e4) {
            ctx->pc = 0x3641B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3641b8;
        }
    }
    ctx->pc = 0x3641ECu;
    // 0x3641ec: 0x0  nop
    ctx->pc = 0x3641ecu;
    // NOP
label_3641f0:
    // 0x3641f0: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3641f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3641f4: 0x2484fee0  addiu       $a0, $a0, -0x120
    ctx->pc = 0x3641f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    // 0x3641f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3641f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3641fc: 0xc0f0154  jal         func_3C0550
    ctx->pc = 0x3641FCu;
    SET_GPR_U32(ctx, 31, 0x364204u);
    ctx->pc = 0x364200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3641FCu;
    // 0x364200: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0550u, 0x3641FCu, 0x364204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364204u;
label_364204:
    // 0x364204: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x364204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x364208: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x364208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x36420c: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x36420cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x364210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364214: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x364214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364218: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x364218u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36421c: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x36421Cu;
    SET_GPR_U32(ctx, 31, 0x364224u);
    ctx->pc = 0x364220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36421Cu;
    // 0x364220: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x36421Cu, 0x364224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364224u;
label_364224:
    // 0x364224: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x364224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x364228: 0x240519e7  addiu       $a1, $zero, 0x19E7
    ctx->pc = 0x364228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6631));
    // 0x36422c: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x36422cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x364230: 0xc0ce590  jal         func_339640
    ctx->pc = 0x364230u;
    SET_GPR_U32(ctx, 31, 0x364238u);
    ctx->pc = 0x364234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364230u;
    // 0x364234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339640u, 0x364230u, 0x364238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364238u;
label_364238:
    // 0x364238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36423c: 0x3e00008  jr          $ra
    ctx->pc = 0x36423Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36423Cu;
        // 0x364240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36423Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364244u;
}
