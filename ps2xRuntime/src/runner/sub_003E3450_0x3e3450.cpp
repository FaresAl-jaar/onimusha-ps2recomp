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

// Function: sub_003E3450
// Address: 0x3e3450 - 0x3e3a80
void sub_003E3450_0x3e3450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3450_0x3e3450");
#endif

    switch (ctx->pc) {
        case 0x3e349cu: goto label_3e349c;
        case 0x3e34b8u: goto label_3e34b8;
        case 0x3e34ecu: goto label_3e34ec;
        case 0x3e34fcu: goto label_3e34fc;
        case 0x3e350cu: goto label_3e350c;
        case 0x3e351cu: goto label_3e351c;
        case 0x3e3528u: goto label_3e3528;
        case 0x3e3530u: goto label_3e3530;
        case 0x3e3540u: goto label_3e3540;
        case 0x3e3558u: goto label_3e3558;
        case 0x3e357cu: goto label_3e357c;
        case 0x3e35b0u: goto label_3e35b0;
        case 0x3e3600u: goto label_3e3600;
        case 0x3e361cu: goto label_3e361c;
        case 0x3e3634u: goto label_3e3634;
        case 0x3e3698u: goto label_3e3698;
        case 0x3e36f4u: goto label_3e36f4;
        case 0x3e3714u: goto label_3e3714;
        case 0x3e3748u: goto label_3e3748;
        case 0x3e375cu: goto label_3e375c;
        case 0x3e3788u: goto label_3e3788;
        case 0x3e3790u: goto label_3e3790;
        case 0x3e37a0u: goto label_3e37a0;
        case 0x3e37a8u: goto label_3e37a8;
        case 0x3e37b0u: goto label_3e37b0;
        case 0x3e37d8u: goto label_3e37d8;
        case 0x3e37e0u: goto label_3e37e0;
        case 0x3e37e8u: goto label_3e37e8;
        case 0x3e3804u: goto label_3e3804;
        case 0x3e3814u: goto label_3e3814;
        case 0x3e381cu: goto label_3e381c;
        case 0x3e383cu: goto label_3e383c;
        case 0x3e3888u: goto label_3e3888;
        case 0x3e38b4u: goto label_3e38b4;
        case 0x3e38c0u: goto label_3e38c0;
        case 0x3e38d0u: goto label_3e38d0;
        case 0x3e3944u: goto label_3e3944;
        case 0x3e3964u: goto label_3e3964;
        default: break;
    }

    ctx->pc = 0x3e3450u;

    // 0x3e3450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e3450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e3454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e3454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e3458: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e3458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e345c: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x3e345cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x3e3460: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x3e3460u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3e3464: 0x10200180  beqz        $at, . + 4 + (0x180 << 2)
    ctx->pc = 0x3E3464u;
    {
        const bool branch_taken_0x3e3464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3464u;
        // 0x3e3468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3464) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E346Cu;
    // 0x3e346c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3e346cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3e3470: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3e3470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e3474: 0x24634940  addiu       $v1, $v1, 0x4940
    ctx->pc = 0x3e3474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18752));
    // 0x3e3478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e3478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e347c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e347cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e3480: 0x400008  jr          $v0
    ctx->pc = 0x3E3480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E3488u: goto label_3e3488;
            case 0x3E34B0u: goto label_3e34b0;
            case 0x3E3550u: goto label_3e3550;
            case 0x3E36E8u: goto label_3e36e8;
            case 0x3E3798u: goto label_3e3798;
            case 0x3E37B8u: goto label_3e37b8;
            case 0x3E37F8u: goto label_3e37f8;
            case 0x3E3858u: goto label_3e3858;
            case 0x3E38C8u: goto label_3e38c8;
            case 0x3E3938u: goto label_3e3938;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3480u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E3488u;
label_3e3488:
    // 0x3e3488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e3488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e348c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e348cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e3490: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x3e3490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x3e3494: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x3E3494u;
    SET_GPR_U32(ctx, 31, 0x3E349Cu);
    ctx->pc = 0x3E3498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3494u;
    // 0x3e3498: 0xa022cea9  sb          $v0, -0x3157($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294954665), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x3E3494u, 0x3E349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E349Cu;
label_3e349c:
    // 0x3e349c: 0xa200005f  sb          $zero, 0x5F($s0)
    ctx->pc = 0x3e349cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 95), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e34a0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x3e34a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3e34a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e34a8: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x3E34A8u;
    {
        const bool branch_taken_0x3e34a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E34A8u;
        // 0x3e34ac: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e34a8) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E34B0u;
label_3e34b0:
    // 0x3e34b0: 0xc05551c  jal         func_155470
    ctx->pc = 0x3E34B0u;
    SET_GPR_U32(ctx, 31, 0x3E34B8u);
    ctx->pc = 0x3E34B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E34B0u;
    // 0x3e34b4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x3E34B0u, 0x3E34B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E34B8u;
label_3e34b8:
    // 0x3e34b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e34b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e34bc: 0x1043016a  beq         $v0, $v1, . + 4 + (0x16A << 2)
    ctx->pc = 0x3E34BCu;
    {
        const bool branch_taken_0x3e34bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E34C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E34BCu;
        // 0x3e34c0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e34bc) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E34C4u;
    // 0x3e34c4: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x3e34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x3e34c8: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3e34c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x3e34cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e34ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3e34d0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3e34d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3e34d4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3e34d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3e34d8: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3e34d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3e34dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e34dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e34e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e34e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e34e4: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3E34E4u;
    SET_GPR_U32(ctx, 31, 0x3E34ECu);
    ctx->pc = 0x3E34E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E34E4u;
    // 0x3e34e8: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3E34E4u, 0x3E34ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E34ECu;
label_3e34ec:
    // 0x3e34ec: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3e34ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3e34f0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3e34f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3e34f4: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3E34F4u;
    SET_GPR_U32(ctx, 31, 0x3E34FCu);
    ctx->pc = 0x3E34F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E34F4u;
    // 0x3e34f8: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3E34F4u, 0x3E34FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E34FCu;
label_3e34fc:
    // 0x3e34fc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3e34fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3e3500: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3e3500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3e3504: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3E3504u;
    SET_GPR_U32(ctx, 31, 0x3E350Cu);
    ctx->pc = 0x3E3508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3504u;
    // 0x3e3508: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3E3504u, 0x3E350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E350Cu;
label_3e350c:
    // 0x3e350c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3e350cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3e3510: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3e3510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3e3514: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3E3514u;
    SET_GPR_U32(ctx, 31, 0x3E351Cu);
    ctx->pc = 0x3E3518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3514u;
    // 0x3e3518: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3E3514u, 0x3E351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E351Cu;
label_3e351c:
    // 0x3e351c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x3e351cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x3e3520: 0xc0f0140  jal         func_3C0500
    ctx->pc = 0x3E3520u;
    SET_GPR_U32(ctx, 31, 0x3E3528u);
    ctx->pc = 0x3E3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3520u;
    // 0x3e3524: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0500u, 0x3E3520u, 0x3E3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3528u;
label_3e3528:
    // 0x3e3528: 0xc0c70c8  jal         func_31C320
    ctx->pc = 0x3E3528u;
    SET_GPR_U32(ctx, 31, 0x3E3530u);
    ctx->pc = 0x3E352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3528u;
    // 0x3e352c: 0x24040ec5  addiu       $a0, $zero, 0xEC5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3781));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C320u, 0x3E3528u, 0x3E3530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3530u;
label_3e3530:
    // 0x3e3530: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3e3530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3e3534: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e3534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3538: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x3E3538u;
    SET_GPR_U32(ctx, 31, 0x3E3540u);
    ctx->pc = 0x3E353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3538u;
    // 0x3e353c: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x3E3538u, 0x3E3540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3540u;
label_3e3540:
    // 0x3e3540: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x3e3540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3e3544: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e3544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e3548: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x3E3548u;
    {
        const bool branch_taken_0x3e3548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3548u;
        // 0x3e354c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3548) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E3550u;
label_3e3550:
    // 0x3e3550: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3E3550u;
    SET_GPR_U32(ctx, 31, 0x3E3558u);
    ctx->pc = 0x3E3554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3550u;
    // 0x3e3554: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3E3550u, 0x3E3558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3558u;
label_3e3558:
    // 0x3e3558: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x3E3558u;
    {
        const bool branch_taken_0x3e3558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3558u;
        // 0x3e355c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3558) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E3560u;
    // 0x3e3560: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3e3560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3e3564: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3e3564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x3e3568: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x3e3568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x3e356c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3e356cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e3570: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e3570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e3574: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x3E3574u;
    SET_GPR_U32(ctx, 31, 0x3E357Cu);
    ctx->pc = 0x3E3578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3574u;
    // 0x3e3578: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x3E3574u, 0x3E357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E357Cu;
label_3e357c:
    // 0x3e357c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e3580: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e3580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e3584: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e3584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e3588: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e3588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e358c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3e358cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3e3590: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e3590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3594: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e3594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e3598: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e3598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e359c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e359cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e35a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e35a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e35a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e35a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e35a8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E35A8u;
    SET_GPR_U32(ctx, 31, 0x3E35B0u);
    ctx->pc = 0x3E35ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E35A8u;
    // 0x3e35ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E35A8u, 0x3E35B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E35B0u;
label_3e35b0:
    // 0x3e35b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e35b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e35b4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e35b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e35b8: 0x8c2aceb8  lw          $t2, -0x3148($at)
    ctx->pc = 0x3e35b8u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3e35bc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3e35bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3e35c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3e35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3e35c4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3e35c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3e35c8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3e35c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e35cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e35ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e35d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e35d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e35d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e35d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e35d8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x3e35d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e35dc: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x3e35dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x3e35e0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e35e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e35e4: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x3e35e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3e35e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e35e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e35ec: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3e35ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3e35f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3e35f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e35f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e35f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e35f8: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x3E35F8u;
    SET_GPR_U32(ctx, 31, 0x3E3600u);
    ctx->pc = 0x3E35FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E35F8u;
    // 0x3e35fc: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x3E35F8u, 0x3E3600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3600u;
label_3e3600:
    // 0x3e3600: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3e3600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3e3604: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e3604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e3608: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3e3608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3e360c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3e360cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3e3610: 0x2406400e  addiu       $a2, $zero, 0x400E
    ctx->pc = 0x3e3610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16398));
    // 0x3e3614: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x3E3614u;
    SET_GPR_U32(ctx, 31, 0x3E361Cu);
    ctx->pc = 0x3E3618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3614u;
    // 0x3e3618: 0xa020cea9  sb          $zero, -0x3157($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294954665), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x3E3614u, 0x3E361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E361Cu;
label_3e361c:
    // 0x3e361c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3e361cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3e3620: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3e3620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3e3624: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3e3624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3e3628: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3e3628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3e362c: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x3E362Cu;
    SET_GPR_U32(ctx, 31, 0x3E3634u);
    ctx->pc = 0x3E3630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E362Cu;
    // 0x3e3630: 0x2406500e  addiu       $a2, $zero, 0x500E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20494));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x3E362Cu, 0x3E3634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3634u;
label_3e3634:
    // 0x3e3634: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3e3634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3e3638: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e3638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e363c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x3e363cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3e3640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e3640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e3644: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x3e3644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x3e3648: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x3e3648u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3e364c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3e364cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3e3650: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3E3650u;
    {
        const bool branch_taken_0x3e3650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3650) {
            ctx->pc = 0x3E36B8u;
            goto label_3e36b8;
        }
    }
    ctx->pc = 0x3E3658u;
    // 0x3e3658: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e3658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e365c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3e365cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3e3660: 0xa2020054  sb          $v0, 0x54($s0)
    ctx->pc = 0x3e3660u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3664: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e3664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e3668: 0xa203005c  sb          $v1, 0x5C($s0)
    ctx->pc = 0x3e3668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e366c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e366cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3670: 0xa203005b  sb          $v1, 0x5B($s0)
    ctx->pc = 0x3e3670u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e3674: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x3e3674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x3e3678: 0xa2020080  sb          $v0, 0x80($s0)
    ctx->pc = 0x3e3678u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e367c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x3e367cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3e3680: 0xa2030055  sb          $v1, 0x55($s0)
    ctx->pc = 0x3e3680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e3684: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e3684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3688: 0xa2030056  sb          $v1, 0x56($s0)
    ctx->pc = 0x3e3688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e368c: 0xa2000079  sb          $zero, 0x79($s0)
    ctx->pc = 0x3e368cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e3690: 0xc0ce5d0  jal         func_339740
    ctx->pc = 0x3E3690u;
    SET_GPR_U32(ctx, 31, 0x3E3698u);
    ctx->pc = 0x3E3694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3690u;
    // 0x3e3694: 0xa200007d  sb          $zero, 0x7D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339740u, 0x3E3690u, 0x3E3698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3698u;
label_3e3698:
    // 0x3e3698: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e3698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e369c: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x3e369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x3e36a0: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3e36a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3e36a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e36a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e36a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e36a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e36ac: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x3E36ACu;
    {
        const bool branch_taken_0x3e36ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E36ACu;
        // 0x3e36b0: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e36ac) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E36B4u;
    // 0x3e36b4: 0x0  nop
    ctx->pc = 0x3e36b4u;
    // NOP
label_3e36b8:
    // 0x3e36b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e36b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e36bc: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x3e36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3e36c0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x3e36c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x3e36c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E36C4u;
    {
        const bool branch_taken_0x3e36c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E36C4u;
        // 0x3e36c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e36c4) {
            ctx->pc = 0x3E36D8u;
            goto label_3e36d8;
        }
    }
    ctx->pc = 0x3E36CCu;
    // 0x3e36cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E36CCu;
    {
        const bool branch_taken_0x3e36cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E36D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E36CCu;
        // 0x3e36d0: 0xa20200c8  sb          $v0, 0xC8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 200), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e36cc) {
            ctx->pc = 0x3E36E0u;
            goto label_3e36e0;
        }
    }
    ctx->pc = 0x3E36D4u;
    // 0x3e36d4: 0x0  nop
    ctx->pc = 0x3e36d4u;
    // NOP
label_3e36d8:
    // 0x3e36d8: 0xa20000c8  sb          $zero, 0xC8($s0)
    ctx->pc = 0x3e36d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e36dc: 0x0  nop
    ctx->pc = 0x3e36dcu;
    // NOP
label_3e36e0:
    // 0x3e36e0: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x3E36E0u;
    {
        const bool branch_taken_0x3e36e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E36E0u;
        // 0x3e36e4: 0xa2000086  sb          $zero, 0x86($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 134), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e36e0) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E36E8u;
label_3e36e8:
    // 0x3e36e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e36e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e36ec: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3E36ECu;
    SET_GPR_U32(ctx, 31, 0x3E36F4u);
    ctx->pc = 0x3E36F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E36ECu;
    // 0x3e36f0: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3E36ECu, 0x3E36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E36F4u;
label_3e36f4:
    // 0x3e36f4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3E36F4u;
    {
        const bool branch_taken_0x3e36f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E36F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E36F4u;
        // 0x3e36f8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e36f4) {
            ctx->pc = 0x3E3780u;
            goto label_3e3780;
        }
    }
    ctx->pc = 0x3E36FCu;
    // 0x3e36fc: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x3e36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x3e3700: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3e3700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3e3704: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E3704u;
    {
        const bool branch_taken_0x3e3704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3704) {
            ctx->pc = 0x3E3730u;
            goto label_3e3730;
        }
    }
    ctx->pc = 0x3E370Cu;
    // 0x3e370c: 0xc0fa10c  jal         func_3E8430
    ctx->pc = 0x3E370Cu;
    SET_GPR_U32(ctx, 31, 0x3E3714u);
    ctx->pc = 0x3E8430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8430u, 0x3E370Cu, 0x3E3714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3714u;
label_3e3714:
    // 0x3e3714: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e3714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e3718: 0x2402bfff  addiu       $v0, $zero, -0x4001
    ctx->pc = 0x3e3718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x3e371c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3e371cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3e3720: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e3720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e3724: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e3724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e3728: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3E3728u;
    {
        const bool branch_taken_0x3e3728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3728u;
        // 0x3e372c: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3728) {
            ctx->pc = 0x3E3770u;
            goto label_3e3770;
        }
    }
    ctx->pc = 0x3E3730u;
label_3e3730:
    // 0x3e3730: 0x82030058  lb          $v1, 0x58($s0)
    ctx->pc = 0x3e3730u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e3734: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3e3734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3e3738: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3738u;
    {
        const bool branch_taken_0x3e3738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3738u;
        // 0x3e373c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3738) {
            ctx->pc = 0x3E3750u;
            goto label_3e3750;
        }
    }
    ctx->pc = 0x3E3740u;
    // 0x3e3740: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E3740u;
    SET_GPR_U32(ctx, 31, 0x3E3748u);
    ctx->pc = 0x3E3744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3740u;
    // 0x3e3744: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E3740u, 0x3E3748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3748u;
label_3e3748:
    // 0x3e3748: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3748u;
    {
        const bool branch_taken_0x3e3748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3748) {
            ctx->pc = 0x3E3760u;
            goto label_3e3760;
        }
    }
    ctx->pc = 0x3E3750u;
label_3e3750:
    // 0x3e3750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e3750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3754: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E3754u;
    SET_GPR_U32(ctx, 31, 0x3E375Cu);
    ctx->pc = 0x3E3758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3754u;
    // 0x3e3758: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E3754u, 0x3E375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E375Cu;
label_3e375c:
    // 0x3e375c: 0x0  nop
    ctx->pc = 0x3e375cu;
    // NOP
label_3e3760:
    // 0x3e3760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e3760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3764: 0xa2020054  sb          $v0, 0x54($s0)
    ctx->pc = 0x3e3764u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3768: 0xa2000055  sb          $zero, 0x55($s0)
    ctx->pc = 0x3e3768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e376c: 0xa2000056  sb          $zero, 0x56($s0)
    ctx->pc = 0x3e376cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 0));
label_3e3770:
    // 0x3e3770: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x3e3770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3e3774: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e3774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e3778: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x3e3778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x3e377c: 0x0  nop
    ctx->pc = 0x3e377cu;
    // NOP
label_3e3780:
    // 0x3e3780: 0xc0f9ca4  jal         func_3E7290
    ctx->pc = 0x3E3780u;
    SET_GPR_U32(ctx, 31, 0x3E3788u);
    ctx->pc = 0x3E3784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3780u;
    // 0x3e3784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7290u, 0x3E3780u, 0x3E3788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3788u;
label_3e3788:
    // 0x3e3788: 0xc0f9a24  jal         func_3E6890
    ctx->pc = 0x3E3788u;
    SET_GPR_U32(ctx, 31, 0x3E3790u);
    ctx->pc = 0x3E378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3788u;
    // 0x3e378c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6890u, 0x3E3788u, 0x3E3790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3790u;
label_3e3790:
    // 0x3e3790: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x3E3790u;
    {
        const bool branch_taken_0x3e3790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3790) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E3798u;
label_3e3798:
    // 0x3e3798: 0xc0f97d4  jal         func_3E5F50
    ctx->pc = 0x3E3798u;
    SET_GPR_U32(ctx, 31, 0x3E37A0u);
    ctx->pc = 0x3E5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5F50u, 0x3E3798u, 0x3E37A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37A0u;
label_3e37a0:
    // 0x3e37a0: 0xc0f9a24  jal         func_3E6890
    ctx->pc = 0x3E37A0u;
    SET_GPR_U32(ctx, 31, 0x3E37A8u);
    ctx->pc = 0x3E37A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37A0u;
    // 0x3e37a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6890u, 0x3E37A0u, 0x3E37A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37A8u;
label_3e37a8:
    // 0x3e37a8: 0xc0f9ca4  jal         func_3E7290
    ctx->pc = 0x3E37A8u;
    SET_GPR_U32(ctx, 31, 0x3E37B0u);
    ctx->pc = 0x3E37ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37A8u;
    // 0x3e37ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7290u, 0x3E37A8u, 0x3E37B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37B0u;
label_3e37b0:
    // 0x3e37b0: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x3E37B0u;
    {
        const bool branch_taken_0x3e37b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e37b0) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E37B8u;
label_3e37b8:
    // 0x3e37b8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e37b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e37bc: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3e37bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3e37c0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3e37c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e37c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e37c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e37c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e37c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e37cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e37ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e37d0: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3E37D0u;
    SET_GPR_U32(ctx, 31, 0x3E37D8u);
    ctx->pc = 0x3E37D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37D0u;
    // 0x3e37d4: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3E37D0u, 0x3E37D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37D8u;
label_3e37d8:
    // 0x3e37d8: 0xc0f9a24  jal         func_3E6890
    ctx->pc = 0x3E37D8u;
    SET_GPR_U32(ctx, 31, 0x3E37E0u);
    ctx->pc = 0x3E37DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37D8u;
    // 0x3e37dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6890u, 0x3E37D8u, 0x3E37E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37E0u;
label_3e37e0:
    // 0x3e37e0: 0xc0f9ca4  jal         func_3E7290
    ctx->pc = 0x3E37E0u;
    SET_GPR_U32(ctx, 31, 0x3E37E8u);
    ctx->pc = 0x3E37E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37E0u;
    // 0x3e37e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7290u, 0x3E37E0u, 0x3E37E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37E8u;
label_3e37e8:
    // 0x3e37e8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x3e37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3e37ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e37f0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x3E37F0u;
    {
        const bool branch_taken_0x3e37f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E37F0u;
        // 0x3e37f4: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e37f0) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E37F8u;
label_3e37f8:
    // 0x3e37f8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e37f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e37fc: 0xc063d48  jal         func_18F520
    ctx->pc = 0x3E37FCu;
    SET_GPR_U32(ctx, 31, 0x3E3804u);
    ctx->pc = 0x3E3800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37FCu;
    // 0x3e3800: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x3E37FCu, 0x3E3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3804u;
label_3e3804:
    // 0x3e3804: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E3804u;
    {
        const bool branch_taken_0x3e3804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3804u;
        // 0x3e3808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3804) {
            ctx->pc = 0x3E3828u;
            goto label_3e3828;
        }
    }
    ctx->pc = 0x3E380Cu;
    // 0x3e380c: 0xc0f9a24  jal         func_3E6890
    ctx->pc = 0x3E380Cu;
    SET_GPR_U32(ctx, 31, 0x3E3814u);
    ctx->pc = 0x3E6890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6890u, 0x3E380Cu, 0x3E3814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3814u;
label_3e3814:
    // 0x3e3814: 0xc0f9ca4  jal         func_3E7290
    ctx->pc = 0x3E3814u;
    SET_GPR_U32(ctx, 31, 0x3E381Cu);
    ctx->pc = 0x3E3818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3814u;
    // 0x3e3818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7290u, 0x3E3814u, 0x3E381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E381Cu;
label_3e381c:
    // 0x3e381c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x3E381Cu;
    {
        const bool branch_taken_0x3e381c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e381c) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E3824u;
    // 0x3e3824: 0x0  nop
    ctx->pc = 0x3e3824u;
    // NOP
label_3e3828:
    // 0x3e3828: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x3e3828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3e382c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e382cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3830: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e3830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e3834: 0xc0f9e84  jal         func_3E7A10
    ctx->pc = 0x3E3834u;
    SET_GPR_U32(ctx, 31, 0x3E383Cu);
    ctx->pc = 0x3E3838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3834u;
    // 0x3e3838: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A10u, 0x3E3834u, 0x3E383Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E383Cu;
label_3e383c:
    // 0x3e383c: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3e383cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3e3840: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x3e3840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x3e3844: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x3e3844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x3e3848: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3e3848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3e384c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x3E384Cu;
    {
        const bool branch_taken_0x3e384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E384Cu;
        // 0x3e3850: 0xa022feea  sb          $v0, -0x116($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e384c) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E3854u;
    // 0x3e3854: 0x0  nop
    ctx->pc = 0x3e3854u;
    // NOP
label_3e3858:
    // 0x3e3858: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3e3858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3e385c: 0x9022ff2c  lbu         $v0, -0xD4($at)
    ctx->pc = 0x3e385cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FF2Cu));
    // 0x3e3860: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3e3860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e3864: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3e3864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3e3868: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e3868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e386c: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x3E386Cu;
    {
        const bool branch_taken_0x3e386c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E386Cu;
        // 0x3e3870: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e386c) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E3874u;
    // 0x3e3874: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3e3874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3e3878: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3e3878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3e387c: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x3e387cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x3e3880: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3E3880u;
    SET_GPR_U32(ctx, 31, 0x3E3888u);
    ctx->pc = 0x3E3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3880u;
    // 0x3e3884: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3E3880u, 0x3E3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3888u;
label_3e3888:
    // 0x3e3888: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e3888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e388c: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x3e388cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x3e3890: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3e3890u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3e3894: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e3894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3e3898: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3e3898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3e389c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3e389cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3e38a0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3e38a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3e38a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3e38a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e38a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e38a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e38ac: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3E38ACu;
    SET_GPR_U32(ctx, 31, 0x3E38B4u);
    ctx->pc = 0x3E38B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E38ACu;
    // 0x3e38b0: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3E38ACu, 0x3E38B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E38B4u;
label_3e38b4:
    // 0x3e38b4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e38b8: 0xc095128  jal         func_2544A0
    ctx->pc = 0x3E38B8u;
    SET_GPR_U32(ctx, 31, 0x3E38C0u);
    ctx->pc = 0x3E38BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E38B8u;
    // 0x3e38bc: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x3E38B8u, 0x3E38C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E38C0u;
label_3e38c0:
    // 0x3e38c0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x3E38C0u;
    {
        const bool branch_taken_0x3e38c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e38c0) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E38C8u;
label_3e38c8:
    // 0x3e38c8: 0xc0fa0d4  jal         func_3E8350
    ctx->pc = 0x3E38C8u;
    SET_GPR_U32(ctx, 31, 0x3E38D0u);
    ctx->pc = 0x3E38CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E38C8u;
    // 0x3e38cc: 0xa200005e  sb          $zero, 0x5E($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 94), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8350u, 0x3E38C8u, 0x3E38D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E38D0u;
label_3e38d0:
    // 0x3e38d0: 0x82020086  lb          $v0, 0x86($s0)
    ctx->pc = 0x3e38d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x3e38d4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3E38D4u;
    {
        const bool branch_taken_0x3e38d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E38D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E38D4u;
        // 0x3e38d8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e38d4) {
            ctx->pc = 0x3E3930u;
            goto label_3e3930;
        }
    }
    ctx->pc = 0x3E38DCu;
    // 0x3e38dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e38dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e38e0: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3e38e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966412)));
    // 0x3e38e4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E38E4u;
    {
        const bool branch_taken_0x3e38e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e38e4) {
            ctx->pc = 0x3E3900u;
            goto label_3e3900;
        }
    }
    ctx->pc = 0x3E38ECu;
    // 0x3e38ec: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x3e38ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3e38f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e38f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e38f4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3E38F4u;
    {
        const bool branch_taken_0x3e38f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E38F4u;
        // 0x3e38f8: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e38f4) {
            ctx->pc = 0x3E3A70u;
            goto label_3e3a70;
        }
    }
    ctx->pc = 0x3E38FCu;
    // 0x3e38fc: 0x0  nop
    ctx->pc = 0x3e38fcu;
    // NOP
label_3e3900:
    // 0x3e3900: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e3900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e3904: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3e3904u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3e3908: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x3e3908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3e390c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E390Cu;
    {
        const bool branch_taken_0x3e390c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e390c) {
            ctx->pc = 0x3E3920u;
            goto label_3e3920;
        }
    }
    ctx->pc = 0x3E3914u;
    // 0x3e3914: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x3E3914u;
    {
        const bool branch_taken_0x3e3914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3914u;
        // 0x3e3918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3914) {
            ctx->pc = 0x3E3A70u;
            goto label_3e3a70;
        }
    }
    ctx->pc = 0x3E391Cu;
    // 0x3e391c: 0x0  nop
    ctx->pc = 0x3e391cu;
    // NOP
label_3e3920:
    // 0x3e3920: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x3e3920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3e3924: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e3924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e3928: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x3E3928u;
    {
        const bool branch_taken_0x3e3928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3928u;
        // 0x3e392c: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3928) {
            ctx->pc = 0x3E3A70u;
            goto label_3e3a70;
        }
    }
    ctx->pc = 0x3E3930u;
label_3e3930:
    // 0x3e3930: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x3E3930u;
    {
        const bool branch_taken_0x3e3930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3930u;
        // 0x3e3934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3930) {
            ctx->pc = 0x3E3A70u;
            goto label_3e3a70;
        }
    }
    ctx->pc = 0x3E3938u;
label_3e3938:
    // 0x3e3938: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3e3938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3e393c: 0xc0ea04c  jal         func_3A8130
    ctx->pc = 0x3E393Cu;
    SET_GPR_U32(ctx, 31, 0x3E3944u);
    ctx->pc = 0x3E3940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E393Cu;
    // 0x3e3940: 0x24843340  addiu       $a0, $a0, 0x3340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8130u, 0x3E393Cu, 0x3E3944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3944u;
label_3e3944:
    // 0x3e3944: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3E3944u;
    {
        const bool branch_taken_0x3e3944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3944u;
        // 0x3e3948: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3944) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E394Cu;
    // 0x3e394c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3950: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3e3950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966412)));
    // 0x3e3954: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3E3954u;
    {
        const bool branch_taken_0x3e3954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3954u;
        // 0x3e3958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3954) {
            ctx->pc = 0x3E3A58u;
            goto label_3e3a58;
        }
    }
    ctx->pc = 0x3E395Cu;
    // 0x3e395c: 0xc0f8d00  jal         func_3E3400
    ctx->pc = 0x3E395Cu;
    SET_GPR_U32(ctx, 31, 0x3E3964u);
    ctx->pc = 0x3E3960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E395Cu;
    // 0x3e3960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3400u, 0x3E395Cu, 0x3E3964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3964u;
label_3e3964:
    // 0x3e3964: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3e3964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3e3968: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e3968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e396c: 0xa2020058  sb          $v0, 0x58($s0)
    ctx->pc = 0x3e396cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e3970: 0x2463e924  addiu       $v1, $v1, -0x16DC
    ctx->pc = 0x3e3970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961444));
    // 0x3e3974: 0x82050058  lb          $a1, 0x58($s0)
    ctx->pc = 0x3e3974u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e3978: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e3978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e397c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e397cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e3980: 0x2442e926  addiu       $v0, $v0, -0x16DA
    ctx->pc = 0x3e3980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961446));
    // 0x3e3984: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3e3984u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e3988: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3e3988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e398c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x3e398cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3e3990: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e3990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e3994: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e3994u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e3998: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x3e3998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x3e399c: 0xa423edf4  sh          $v1, -0x120C($at)
    ctx->pc = 0x3e399cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962676), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e39a0: 0x82040058  lb          $a0, 0x58($s0)
    ctx->pc = 0x3e39a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e39a4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e39a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e39a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e39a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e39ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e39acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e39b0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e39b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e39b4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e39b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e39b8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e39b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e39bc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3e39bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3e39c0: 0xa423edf6  sh          $v1, -0x120A($at)
    ctx->pc = 0x3e39c0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294962678), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e39c4: 0x82040058  lb          $a0, 0x58($s0)
    ctx->pc = 0x3e39c4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e39c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e39c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e39cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e39d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e39d4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e39d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e39d8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e39d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e39dc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e39dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e39e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e39e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e39e4: 0xa423e806  sh          $v1, -0x17FA($at)
    ctx->pc = 0x3e39e4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961158), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e39e8: 0x82040058  lb          $a0, 0x58($s0)
    ctx->pc = 0x3e39e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e39ec: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e39ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e39f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e39f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e39f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e39f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e39f8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e39fc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e39fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e3a00: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e3a00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e3a04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e3a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e3a08: 0xa423e81e  sh          $v1, -0x17E2($at)
    ctx->pc = 0x3e3a08u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961182), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e3a0c: 0x82040058  lb          $a0, 0x58($s0)
    ctx->pc = 0x3e3a0cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e3a10: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e3a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e3a14: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e3a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e3a18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e3a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e3a1c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e3a20: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e3a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e3a24: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e3a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e3a28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e3a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e3a2c: 0xa423e836  sh          $v1, -0x17CA($at)
    ctx->pc = 0x3e3a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961206), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e3a30: 0x82040058  lb          $a0, 0x58($s0)
    ctx->pc = 0x3e3a30u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e3a34: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e3a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e3a38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3e3a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e3a3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e3a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e3a40: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e3a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e3a44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e3a48: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3e3a48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e3a4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e3a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e3a50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E3A50u;
    {
        const bool branch_taken_0x3e3a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A50u;
        // 0x3e3a54: 0xa422e84e  sh          $v0, -0x17B2($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294961230), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3a50) {
            ctx->pc = 0x3E3A68u;
            goto label_3e3a68;
        }
    }
    ctx->pc = 0x3E3A58u;
label_3e3a58:
    // 0x3e3a58: 0xa2000086  sb          $zero, 0x86($s0)
    ctx->pc = 0x3e3a58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e3a5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E3A5Cu;
    {
        const bool branch_taken_0x3e3a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A5Cu;
        // 0x3e3a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3a5c) {
            ctx->pc = 0x3E3A70u;
            goto label_3e3a70;
        }
    }
    ctx->pc = 0x3E3A64u;
    // 0x3e3a64: 0x0  nop
    ctx->pc = 0x3e3a64u;
    // NOP
label_3e3a68:
    // 0x3e3a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3a6c: 0x0  nop
    ctx->pc = 0x3e3a6cu;
    // NOP
label_3e3a70:
    // 0x3e3a70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e3a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e3a74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e3a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e3a78: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3A78u;
        // 0x3e3a7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3A80u;
}
