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

// Function: sub_003F6600
// Address: 0x3f6600 - 0x3f6720
void sub_003F6600_0x3f6600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6600_0x3f6600");
#endif

    switch (ctx->pc) {
        case 0x3f661cu: goto label_3f661c;
        case 0x3f6634u: goto label_3f6634;
        case 0x3f6668u: goto label_3f6668;
        case 0x3f66a0u: goto label_3f66a0;
        case 0x3f66d4u: goto label_3f66d4;
        case 0x3f6710u: goto label_3f6710;
        default: break;
    }

    ctx->pc = 0x3f6600u;

    // 0x3f6600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f6600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f6604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f6604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f6608: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f6608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3f660c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f660cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6610: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f6610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3f6614: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x3F6614u;
    SET_GPR_U32(ctx, 31, 0x3F661Cu);
    ctx->pc = 0x3F6618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6614u;
    // 0x3f6618: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x3F6614u, 0x3F661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F661Cu;
label_3f661c:
    // 0x3f661c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3f661cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3f6620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f6620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f6624: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3F6624u;
    {
        const bool branch_taken_0x3f6624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F6628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6624u;
        // 0x3f6628: 0x8c241284  lw          $a0, 0x1284($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6624) {
            ctx->pc = 0x3F6670u;
            goto label_3f6670;
        }
    }
    ctx->pc = 0x3F662Cu;
    // 0x3f662c: 0xc0fd928  jal         func_3F64A0
    ctx->pc = 0x3F662Cu;
    SET_GPR_U32(ctx, 31, 0x3F6634u);
    ctx->pc = 0x3F6630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F662Cu;
    // 0x3f6630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F64A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F64A0u, 0x3F662Cu, 0x3F6634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6634u;
label_3f6634:
    // 0x3f6634: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f6634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f6638: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f6638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f663c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3f663cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3f6640: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3f6640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3f6644: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3f6644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3f6648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f6648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f664c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3f664cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3f6650: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f6650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6654: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f6654u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6658: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f6658u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f665c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f665cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6660: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3F6660u;
    SET_GPR_U32(ctx, 31, 0x3F6668u);
    ctx->pc = 0x3F6664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6660u;
    // 0x3f6664: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3F6660u, 0x3F6668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6668u;
label_3f6668:
    // 0x3f6668: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3F6668u;
    {
        const bool branch_taken_0x3f6668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6668) {
            ctx->pc = 0x3F6710u;
            goto label_3f6710;
        }
    }
    ctx->pc = 0x3F6670u;
label_3f6670:
    // 0x3f6670: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3F6670u;
    {
        const bool branch_taken_0x3f6670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6670u;
        // 0x3f6674: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6670) {
            ctx->pc = 0x3F6710u;
            goto label_3f6710;
        }
    }
    ctx->pc = 0x3F6678u;
    // 0x3f6678: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3F6678u;
    {
        const bool branch_taken_0x3f6678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f6678) {
            ctx->pc = 0x3F6710u;
            goto label_3f6710;
        }
    }
    ctx->pc = 0x3F6680u;
    // 0x3f6680: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x3f6680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3f6684: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3f6684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3f6688: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F6688u;
    {
        const bool branch_taken_0x3f6688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6688) {
            ctx->pc = 0x3F6698u;
            goto label_3f6698;
        }
    }
    ctx->pc = 0x3F6690u;
    // 0x3f6690: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3F6690u;
    {
        const bool branch_taken_0x3f6690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f6690) {
            ctx->pc = 0x3F66E0u;
            goto label_3f66e0;
        }
    }
    ctx->pc = 0x3F6698u;
label_3f6698:
    // 0x3f6698: 0xc0fd9c8  jal         func_3F6720
    ctx->pc = 0x3F6698u;
    SET_GPR_U32(ctx, 31, 0x3F66A0u);
    ctx->pc = 0x3F669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6698u;
    // 0x3f669c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6720u, 0x3F6698u, 0x3F66A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F66A0u;
label_3f66a0:
    // 0x3f66a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f66a4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f66a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f66a8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3f66a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3f66ac: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3f66acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3f66b0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3f66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3f66b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f66b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f66b8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3f66b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3f66bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f66bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f66c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f66c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f66c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f66c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f66c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f66c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f66cc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3F66CCu;
    SET_GPR_U32(ctx, 31, 0x3F66D4u);
    ctx->pc = 0x3F66D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F66CCu;
    // 0x3f66d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3F66CCu, 0x3F66D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F66D4u;
label_3f66d4:
    // 0x3f66d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3F66D4u;
    {
        const bool branch_taken_0x3f66d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f66d4) {
            ctx->pc = 0x3F6710u;
            goto label_3f6710;
        }
    }
    ctx->pc = 0x3F66DCu;
    // 0x3f66dc: 0x0  nop
    ctx->pc = 0x3f66dcu;
    // NOP
label_3f66e0:
    // 0x3f66e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f66e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f66e4: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x3f66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x3f66e8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3f66e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3f66ec: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3f66ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3f66f0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3f66f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3f66f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f66f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f66f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f66f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f66fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3f66fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6700: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f6700u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6704: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f6704u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6708: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3F6708u;
    SET_GPR_U32(ctx, 31, 0x3F6710u);
    ctx->pc = 0x3F670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6708u;
    // 0x3f670c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3F6708u, 0x3F6710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6710u;
label_3f6710:
    // 0x3f6710: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f6710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f6714: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f6714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f6718: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6718u;
        // 0x3f671c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6720u;
}
