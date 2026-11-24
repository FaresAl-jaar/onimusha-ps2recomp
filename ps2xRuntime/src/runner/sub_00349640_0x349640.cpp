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

// Function: sub_00349640
// Address: 0x349640 - 0x349734
void sub_00349640_0x349640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349640_0x349640");
#endif

    switch (ctx->pc) {
        case 0x349654u: goto label_349654;
        case 0x349660u: goto label_349660;
        case 0x349670u: goto label_349670;
        default: break;
    }

    ctx->pc = 0x349640u;

    // 0x349640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x349640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x349644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x349644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x349648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x349648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34964c: 0xc0d2578  jal         func_3495E0
    ctx->pc = 0x34964Cu;
    SET_GPR_U32(ctx, 31, 0x349654u);
    ctx->pc = 0x349650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34964Cu;
    // 0x349650: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3495E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3495E0u, 0x34964Cu, 0x349654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349654u;
label_349654:
    // 0x349654: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x349654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349658: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x349658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34965c: 0x0  nop
    ctx->pc = 0x34965cu;
    // NOP
label_349660:
    // 0x349660: 0x8f828ba8  lw          $v0, -0x7458($gp)
    ctx->pc = 0x349660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x349664: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x349664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349668: 0xc0d241c  jal         func_349070
    ctx->pc = 0x349668u;
    SET_GPR_U32(ctx, 31, 0x349670u);
    ctx->pc = 0x34966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349668u;
    // 0x34966c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349070u, 0x349668u, 0x349670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349670u;
label_349670:
    // 0x349670: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x349670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x349674: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x349674u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x349678: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x349678u;
    {
        const bool branch_taken_0x349678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349678u;
        // 0x34967c: 0x26100064  addiu       $s0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349678) {
            ctx->pc = 0x349660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349660;
        }
    }
    ctx->pc = 0x349680u;
    // 0x349680: 0x8f8c8ba8  lw          $t4, -0x7458($gp)
    ctx->pc = 0x349680u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x349684: 0x3c0a0100  lui         $t2, 0x100
    ctx->pc = 0x349684u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)256 << 16));
    // 0x349688: 0x3c090200  lui         $t1, 0x200
    ctx->pc = 0x349688u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)512 << 16));
    // 0x34968c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x34968cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x349690: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x349690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x349694: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x349694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x349698: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x349698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x34969c: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x34969cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x3496a0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x3496a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3496a4: 0x8d8b0024  lw          $t3, 0x24($t4)
    ctx->pc = 0x3496a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 36)));
    // 0x3496a8: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x3496a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x3496ac: 0xad8a0024  sw          $t2, 0x24($t4)
    ctx->pc = 0x3496acu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 36), GPR_U32(ctx, 10));
    // 0x3496b0: 0x8f8b8ba8  lw          $t3, -0x7458($gp)
    ctx->pc = 0x3496b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3496b4: 0x8d6a0024  lw          $t2, 0x24($t3)
    ctx->pc = 0x3496b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 36)));
    // 0x3496b8: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x3496b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x3496bc: 0xad690024  sw          $t1, 0x24($t3)
    ctx->pc = 0x3496bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 36), GPR_U32(ctx, 9));
    // 0x3496c0: 0x8f8a8ba8  lw          $t2, -0x7458($gp)
    ctx->pc = 0x3496c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3496c4: 0x8d490024  lw          $t1, 0x24($t2)
    ctx->pc = 0x3496c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 36)));
    // 0x3496c8: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x3496c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x3496cc: 0xad430024  sw          $v1, 0x24($t2)
    ctx->pc = 0x3496ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 36), GPR_U32(ctx, 3));
    // 0x3496d0: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x3496d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3496d4: 0xa068005d  sb          $t0, 0x5D($v1)
    ctx->pc = 0x3496d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 93), (uint8_t)GPR_U32(ctx, 8));
    // 0x3496d8: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x3496d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3496dc: 0xa06700c1  sb          $a3, 0xC1($v1)
    ctx->pc = 0x3496dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 193), (uint8_t)GPR_U32(ctx, 7));
    // 0x3496e0: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x3496e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3496e4: 0xa0660125  sb          $a2, 0x125($v1)
    ctx->pc = 0x3496e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 293), (uint8_t)GPR_U32(ctx, 6));
    // 0x3496e8: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x3496e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3496ec: 0xa0650189  sb          $a1, 0x189($v1)
    ctx->pc = 0x3496ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 393), (uint8_t)GPR_U32(ctx, 5));
    // 0x3496f0: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x3496f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3496f4: 0xa06401ed  sb          $a0, 0x1ED($v1)
    ctx->pc = 0x3496f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 493), (uint8_t)GPR_U32(ctx, 4));
    // 0x3496f8: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x3496f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x3496fc: 0xa060005e  sb          $zero, 0x5E($v1)
    ctx->pc = 0x3496fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 94), (uint8_t)GPR_U32(ctx, 0));
    // 0x349700: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x349700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x349704: 0xa06000c2  sb          $zero, 0xC2($v1)
    ctx->pc = 0x349704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 194), (uint8_t)GPR_U32(ctx, 0));
    // 0x349708: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x349708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x34970c: 0xa0600126  sb          $zero, 0x126($v1)
    ctx->pc = 0x34970cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 294), (uint8_t)GPR_U32(ctx, 0));
    // 0x349710: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x349710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x349714: 0xa060018a  sb          $zero, 0x18A($v1)
    ctx->pc = 0x349714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 394), (uint8_t)GPR_U32(ctx, 0));
    // 0x349718: 0x8f838ba8  lw          $v1, -0x7458($gp)
    ctx->pc = 0x349718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x34971c: 0xa06001ee  sb          $zero, 0x1EE($v1)
    ctx->pc = 0x34971cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 494), (uint8_t)GPR_U32(ctx, 0));
    // 0x349720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x349720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x349724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x349728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34972c: 0x3e00008  jr          $ra
    ctx->pc = 0x34972Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34972Cu;
        // 0x349730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34972Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349734u;
}
