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

// Function: sub_0011E688
// Address: 0x11e688 - 0x11e768
void sub_0011E688_0x11e688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E688_0x11e688");
#endif

    switch (ctx->pc) {
        case 0x11e6bcu: goto label_11e6bc;
        case 0x11e6c4u: goto label_11e6c4;
        case 0x11e6c8u: goto label_11e6c8;
        case 0x11e6ecu: goto label_11e6ec;
        case 0x11e70cu: goto label_11e70c;
        case 0x11e714u: goto label_11e714;
        case 0x11e718u: goto label_11e718;
        case 0x11e724u: goto label_11e724;
        case 0x11e74cu: goto label_11e74c;
        case 0x11e760u: goto label_11e760;
        default: break;
    }

    ctx->pc = 0x11e688u;

    // 0x11e688: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11e688u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11e68c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e68cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11e690: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11e690u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11e694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11e694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11e698: 0x4683f  dsra32      $t5, $a0, 0
    ctx->pc = 0x11e698u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11e69c: 0x3c0e3fe9  lui         $t6, 0x3FE9
    ctx->pc = 0x11e69cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16361 << 16));
    // 0x11e6a0: 0x1af6824  and         $t5, $t5, $t7
    ctx->pc = 0x11e6a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x11e6a4: 0x35ce21fb  ori         $t6, $t6, 0x21FB
    ctx->pc = 0x11e6a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8699);
    // 0x11e6a8: 0x1cd702a  slt         $t6, $t6, $t5
    ctx->pc = 0x11e6a8u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11e6ac: 0x15c00008  bnez        $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E6ACu;
    {
        const bool branch_taken_0x11e6ac = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6ACu;
        // 0x11e6b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6ac) {
            ctx->pc = 0x11E6D0u;
            goto label_11e6d0;
        }
    }
    ctx->pc = 0x11E6B4u;
    // 0x11e6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11e6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e6bc:
    // 0x11e6bc: 0xc047494  jal         func_11D250
    ctx->pc = 0x11E6BCu;
    SET_GPR_U32(ctx, 31, 0x11E6C4u);
    ctx->pc = 0x11D250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D250u, 0x11E6BCu, 0x11E6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6C4u;
label_11e6c4:
    // 0x11e6c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11e6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11e6c8:
    // 0x11e6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6C8u;
        // 0x11e6cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E6D0u;
label_11e6d0:
    // 0x11e6d0: 0x3c0f7fef  lui         $t7, 0x7FEF
    ctx->pc = 0x11e6d0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32751 << 16));
    // 0x11e6d4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11e6d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11e6d8: 0x1ed782a  slt         $t7, $t7, $t5
    ctx->pc = 0x11e6d8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x11e6dc: 0x15e0000f  bnez        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x11E6DCu;
    {
        const bool branch_taken_0x11e6dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e6dc) {
            ctx->pc = 0x11E71Cu;
            goto label_11e71c;
        }
    }
    ctx->pc = 0x11E6E4u;
    // 0x11e6e4: 0xc0468b4  jal         func_11A2D0
    ctx->pc = 0x11E6E4u;
    SET_GPR_U32(ctx, 31, 0x11E6ECu);
    ctx->pc = 0x11E6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E6E4u;
    // 0x11e6e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A2D0u, 0x11E6E4u, 0x11E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E6ECu;
label_11e6ec:
    // 0x11e6ec: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x11e6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11e6f0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11e6f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e6f4: 0x104f0017  beq         $v0, $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x11E6F4u;
    {
        const bool branch_taken_0x11e6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x11E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6F4u;
        // 0x11e6f8: 0x284f0002  slti        $t7, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6f4) {
            ctx->pc = 0x11E754u;
            goto label_11e754;
        }
    }
    ctx->pc = 0x11E6FCu;
    // 0x11e6fc: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x11E6FCu;
    {
        const bool branch_taken_0x11e6fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E6FCu;
        // 0x11e700: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e6fc) {
            ctx->pc = 0x11E738u;
            goto label_11e738;
        }
    }
    ctx->pc = 0x11E704u;
    // 0x11e704: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E704u;
    {
        const bool branch_taken_0x11e704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E704u;
        // 0x11e708: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e704) {
            ctx->pc = 0x11E72Cu;
            goto label_11e72c;
        }
    }
    ctx->pc = 0x11E70Cu;
label_11e70c:
    // 0x11e70c: 0xc047170  jal         func_11C5C0
    ctx->pc = 0x11E70Cu;
    SET_GPR_U32(ctx, 31, 0x11E714u);
    ctx->pc = 0x11E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E70Cu;
    // 0x11e710: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C5C0u, 0x11E70Cu, 0x11E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E714u;
label_11e714:
    // 0x11e714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11e714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11e718:
    // 0x11e718: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11e718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e71c:
    // 0x11e71c: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11E71Cu;
    SET_GPR_U32(ctx, 31, 0x11E724u);
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11E71Cu, 0x11E724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E724u;
label_11e724:
    // 0x11e724: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11E724u;
    {
        const bool branch_taken_0x11e724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E724u;
        // 0x11e728: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e724) {
            ctx->pc = 0x11E6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e6c8;
        }
    }
    ctx->pc = 0x11E72Cu;
label_11e72c:
    // 0x11e72c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11e72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e730: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x11E730u;
    {
        const bool branch_taken_0x11e730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E730u;
        // 0x11e734: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e730) {
            ctx->pc = 0x11E6BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e6bc;
        }
    }
    ctx->pc = 0x11E738u;
label_11e738:
    // 0x11e738: 0x144ffff4  bne         $v0, $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E738u;
    {
        const bool branch_taken_0x11e738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x11E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E738u;
        // 0x11e73c: 0xdfa40000  ld          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e738) {
            ctx->pc = 0x11E70Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e70c;
        }
    }
    ctx->pc = 0x11E740u;
    // 0x11e740: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11e740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e744: 0xc047494  jal         func_11D250
    ctx->pc = 0x11E744u;
    SET_GPR_U32(ctx, 31, 0x11E74Cu);
    ctx->pc = 0x11E748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E744u;
    // 0x11e748: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D250u, 0x11E744u, 0x11E74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E74Cu;
label_11e74c:
    // 0x11e74c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x11E74Cu;
    {
        const bool branch_taken_0x11e74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E74Cu;
        // 0x11e750: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e74c) {
            ctx->pc = 0x11E718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e718;
        }
    }
    ctx->pc = 0x11E754u;
label_11e754:
    // 0x11e754: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x11e754u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e758: 0xc047170  jal         func_11C5C0
    ctx->pc = 0x11E758u;
    SET_GPR_U32(ctx, 31, 0x11E760u);
    ctx->pc = 0x11E75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E758u;
    // 0x11e75c: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C5C0u, 0x11E758u, 0x11E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E760u;
label_11e760:
    // 0x11e760: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x11E760u;
    {
        const bool branch_taken_0x11e760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E760u;
        // 0x11e764: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e760) {
            ctx->pc = 0x11E6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e6c8;
        }
    }
    ctx->pc = 0x11E768u;
}
