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

// Function: sub_001E9640
// Address: 0x1e9640 - 0x1e9ad0
void sub_001E9640_0x1e9640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9640_0x1e9640");
#endif

    switch (ctx->pc) {
        case 0x1e96a0u: goto label_1e96a0;
        case 0x1e96c0u: goto label_1e96c0;
        case 0x1e96c8u: goto label_1e96c8;
        case 0x1e96d4u: goto label_1e96d4;
        case 0x1e96ecu: goto label_1e96ec;
        case 0x1e9710u: goto label_1e9710;
        case 0x1e9720u: goto label_1e9720;
        case 0x1e978cu: goto label_1e978c;
        case 0x1e97a0u: goto label_1e97a0;
        case 0x1e97f4u: goto label_1e97f4;
        case 0x1e9808u: goto label_1e9808;
        case 0x1e9870u: goto label_1e9870;
        case 0x1e988cu: goto label_1e988c;
        case 0x1e9908u: goto label_1e9908;
        case 0x1e991cu: goto label_1e991c;
        case 0x1e9930u: goto label_1e9930;
        case 0x1e9944u: goto label_1e9944;
        case 0x1e9958u: goto label_1e9958;
        case 0x1e998cu: goto label_1e998c;
        case 0x1e99bcu: goto label_1e99bc;
        case 0x1e99ccu: goto label_1e99cc;
        case 0x1e9a08u: goto label_1e9a08;
        case 0x1e9a34u: goto label_1e9a34;
        case 0x1e9a50u: goto label_1e9a50;
        case 0x1e9a7cu: goto label_1e9a7c;
        case 0x1e9a88u: goto label_1e9a88;
        case 0x1e9aa0u: goto label_1e9aa0;
        default: break;
    }

    ctx->pc = 0x1e9640u;

    // 0x1e9640: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1e9640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1e9644: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e9644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1e9648: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e9648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1e964c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1e964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1e9650: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e9650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e9654: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1e9654u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9658: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e9658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e965c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e965cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9660: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e9660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e9664: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e9664u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9668: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e9668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e966c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e966cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e9670: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e9670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e9674: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e9674u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9678: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9678u;
    {
        const bool branch_taken_0x1e9678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9678u;
        // 0x1e967c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9678) {
            ctx->pc = 0x1E9688u;
            goto label_1e9688;
        }
    }
    ctx->pc = 0x1E9680u;
    // 0x1e9680: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x1E9680u;
    {
        const bool branch_taken_0x1e9680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9680u;
        // 0x1e9684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9680) {
            ctx->pc = 0x1E9AA8u;
            goto label_1e9aa8;
        }
    }
    ctx->pc = 0x1E9688u;
label_1e9688:
    // 0x1e9688: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9688u;
    {
        const bool branch_taken_0x1e9688 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9688u;
        // 0x1e968c: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9688) {
            ctx->pc = 0x1E9698u;
            goto label_1e9698;
        }
    }
    ctx->pc = 0x1E9690u;
    // 0x1e9690: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9690u;
    {
        const bool branch_taken_0x1e9690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9690u;
        // 0x1e9694: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9690) {
            ctx->pc = 0x1E96A8u;
            goto label_1e96a8;
        }
    }
    ctx->pc = 0x1E9698u;
label_1e9698:
    // 0x1e9698: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1E9698u;
    SET_GPR_U32(ctx, 31, 0x1E96A0u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1E9698u, 0x1E96A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E96A0u;
label_1e96a0:
    // 0x1e96a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e96a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e96a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e96a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e96a8:
    // 0x1e96a8: 0x92a50038  lbu         $a1, 0x38($s5)
    ctx->pc = 0x1e96a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x1e96ac: 0x92a60039  lbu         $a2, 0x39($s5)
    ctx->pc = 0x1e96acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 57)));
    // 0x1e96b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1e96b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e96b4: 0x92a8003c  lbu         $t0, 0x3C($s5)
    ctx->pc = 0x1e96b4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x1e96b8: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1E96B8u;
    SET_GPR_U32(ctx, 31, 0x1E96C0u);
    ctx->pc = 0x1E96BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E96B8u;
    // 0x1e96bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1E96B8u, 0x1E96C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E96C0u;
label_1e96c0:
    // 0x1e96c0: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x1E96C0u;
    SET_GPR_U32(ctx, 31, 0x1E96C8u);
    ctx->pc = 0x1E96C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E96C0u;
    // 0x1e96c4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x1E96C0u, 0x1E96C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E96C8u;
label_1e96c8:
    // 0x1e96c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e96c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e96cc: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x1E96CCu;
    SET_GPR_U32(ctx, 31, 0x1E96D4u);
    ctx->pc = 0x1E96D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E96CCu;
    // 0x1e96d0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x1E96CCu, 0x1E96D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E96D4u;
label_1e96d4:
    // 0x1e96d4: 0x92a80032  lbu         $t0, 0x32($s5)
    ctx->pc = 0x1e96d4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 50)));
    // 0x1e96d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e96d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e96dc: 0x26a40090  addiu       $a0, $s5, 0x90
    ctx->pc = 0x1e96dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x1e96e0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1e96e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1e96e4: 0xc074458  jal         func_1D1160
    ctx->pc = 0x1E96E4u;
    SET_GPR_U32(ctx, 31, 0x1E96ECu);
    ctx->pc = 0x1E96E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E96E4u;
    // 0x1e96e8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x1E96E4u, 0x1E96ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E96ECu;
label_1e96ec:
    // 0x1e96ec: 0x92a50033  lbu         $a1, 0x33($s5)
    ctx->pc = 0x1e96ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1e96f0: 0xc6ac0048  lwc1        $f12, 0x48($s5)
    ctx->pc = 0x1e96f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e96f4: 0xc6ad004c  lwc1        $f13, 0x4C($s5)
    ctx->pc = 0x1e96f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e96f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e96f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e96fc: 0xc6ae0058  lwc1        $f14, 0x58($s5)
    ctx->pc = 0x1e96fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e9700: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e9700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9704: 0xc6af005c  lwc1        $f15, 0x5C($s5)
    ctx->pc = 0x1e9704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e9708: 0xc074be8  jal         func_1D2FA0
    ctx->pc = 0x1E9708u;
    SET_GPR_U32(ctx, 31, 0x1E9710u);
    ctx->pc = 0x1E970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9708u;
    // 0x1e970c: 0x34440080  ori         $a0, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2FA0u, 0x1E9708u, 0x1E9710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9710u;
label_1e9710:
    // 0x1e9710: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e9710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9714: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1e9714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1e9718: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1E9718u;
    SET_GPR_U32(ctx, 31, 0x1E9720u);
    ctx->pc = 0x1E971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9718u;
    // 0x1e971c: 0x26a60080  addiu       $a2, $s5, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1E9718u, 0x1E9720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9720u;
label_1e9720:
    // 0x1e9720: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e9720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e9724: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1e9724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e9728: 0x78265c20  lq          $a2, 0x5C20($at)
    ctx->pc = 0x1e9728u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C20u));
    // 0x1e972c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e972cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9730: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e9730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9734: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e9734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e9738: 0x7fa60140  sq          $a2, 0x140($sp)
    ctx->pc = 0x1e9738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 6));
    // 0x1e973c: 0x78235c30  lq          $v1, 0x5C30($at)
    ctx->pc = 0x1e973cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C30u));
    // 0x1e9740: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e9740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e9744: 0x7fa30150  sq          $v1, 0x150($sp)
    ctx->pc = 0x1e9744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
    // 0x1e9748: 0x78225c40  lq          $v0, 0x5C40($at)
    ctx->pc = 0x1e9748u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C40u));
    // 0x1e974c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1e974cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1e9750: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e9750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e9754: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x1e9754u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x1e9758: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x1e9758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e975c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1e975cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1e9760: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1e9760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x1e9764: 0xc4216ca0  lwc1        $f1, 0x6CA0($at)
    ctx->pc = 0x1e9764u;
    { uint32_t bits = FAST_READ32(0x696CA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9768: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e9768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e976c: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x1e976cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x1e9770: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e9770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1e9774: 0xc4216ca8  lwc1        $f1, 0x6CA8($at)
    ctx->pc = 0x1e9774u;
    { uint32_t bits = FAST_READ32(0x696CA8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9778: 0xafa00164  sw          $zero, 0x164($sp)
    ctx->pc = 0x1e9778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 0));
    // 0x1e977c: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x1e977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9780: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e9780u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e9784: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x1E9784u;
    SET_GPR_U32(ctx, 31, 0x1E978Cu);
    ctx->pc = 0x1E9788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9784u;
    // 0x1e9788: 0xe7a00168  swc1        $f0, 0x168($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x1E9784u, 0x1E978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E978Cu;
label_1e978c:
    // 0x1e978c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e978cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9790: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e9790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e9794: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x1e9794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e9798: 0xc076678  jal         func_1D99E0
    ctx->pc = 0x1E9798u;
    SET_GPR_U32(ctx, 31, 0x1E97A0u);
    ctx->pc = 0x1E979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9798u;
    // 0x1e979c: 0xafa0016c  sw          $zero, 0x16C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99E0u, 0x1E9798u, 0x1E97A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E97A0u;
label_1e97a0:
    // 0x1e97a0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e97a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e97a4: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x1e97a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e97a8: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1e97a8u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1e97ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e97acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e97b0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1e97b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e97b4: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1e97b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e97b8: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1e97b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e97bc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e97bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e97c0: 0x7fa90100  sq          $t1, 0x100($sp)
    ctx->pc = 0x1e97c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 9));
    // 0x1e97c4: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1e97c4u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1e97c8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e97c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e97cc: 0x7fa80110  sq          $t0, 0x110($sp)
    ctx->pc = 0x1e97ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 8));
    // 0x1e97d0: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1e97d0u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1e97d4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1e97d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1e97d8: 0x7fa70120  sq          $a3, 0x120($sp)
    ctx->pc = 0x1e97d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 7));
    // 0x1e97dc: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1e97dcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1e97e0: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e97e0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e97e4: 0x7ba30180  lq          $v1, 0x180($sp)
    ctx->pc = 0x1e97e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1e97e8: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1e97e8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1e97ec: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E97ECu;
    SET_GPR_U32(ctx, 31, 0x1E97F4u);
    ctx->pc = 0x1E97F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E97ECu;
    // 0x1e97f0: 0xafa2013c  sw          $v0, 0x13C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E97ECu, 0x1E97F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E97F4u;
label_1e97f4:
    // 0x1e97f4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1e97f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e97f8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e97f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e97fc: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e97fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e9800: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1E9800u;
    SET_GPR_U32(ctx, 31, 0x1E9808u);
    ctx->pc = 0x1E9804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9800u;
    // 0x1e9804: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1E9800u, 0x1E9808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9808u;
label_1e9808:
    // 0x1e9808: 0x7aa20060  lq          $v0, 0x60($s5)
    ctx->pc = 0x1e9808u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1e980c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e980cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9810: 0x161c3c  dsll32      $v1, $s6, 16
    ctx->pc = 0x1e9810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 16));
    // 0x1e9814: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e9814u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1e9818: 0x7c220040  sq          $v0, 0x40($at)
    ctx->pc = 0x1e9818u;
    WRITE128(ADD32(GPR_U32(ctx, 1), 64), GPR_VEC(ctx, 2));
    // 0x1e981c: 0x7aa20070  lq          $v0, 0x70($s5)
    ctx->pc = 0x1e981cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1e9820: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9824: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x1e9824u;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x1e9828: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e982c: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x1e982cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x1e9830: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1e9830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e9834: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9838: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e9838u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e983c: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x1e983cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x1e9840: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9844: 0x8c22005c  lw          $v0, 0x5C($at)
    ctx->pc = 0x1e9844u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000005Cu)); // MMIO: 0x7000005c
    // 0x1e9848: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x1e9848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e984c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e984cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9850: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1e9850u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1e9854: 0xac22005c  sw          $v0, 0x5C($at)
    ctx->pc = 0x1e9854u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 92), GPR_U32(ctx, 2));
    // 0x1e9858: 0x92a20034  lbu         $v0, 0x34($s5)
    ctx->pc = 0x1e9858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e985c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1e985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1e9860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9860u;
    {
        const bool branch_taken_0x1e9860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9860u;
        // 0x1e9864: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9860) {
            ctx->pc = 0x1E9878u;
            goto label_1e9878;
        }
    }
    ctx->pc = 0x1E9868u;
    // 0x1e9868: 0xc07865c  jal         func_1E1970
    ctx->pc = 0x1E9868u;
    SET_GPR_U32(ctx, 31, 0x1E9870u);
    ctx->pc = 0x1E986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9868u;
    // 0x1e986c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1970u, 0x1E9868u, 0x1E9870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9870u;
label_1e9870:
    // 0x1e9870: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e9870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e9874: 0x0  nop
    ctx->pc = 0x1e9874u;
    // NOP
label_1e9878:
    // 0x1e9878: 0x92a50031  lbu         $a1, 0x31($s5)
    ctx->pc = 0x1e9878u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 49)));
    // 0x1e987c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e987cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e9880: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e9880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e9884: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1E9884u;
    SET_GPR_U32(ctx, 31, 0x1E988Cu);
    ctx->pc = 0x1E9888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9884u;
    // 0x1e9888: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1E9884u, 0x1E988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E988Cu;
label_1e988c:
    // 0x1e988c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e988cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e9890: 0x92a20034  lbu         $v0, 0x34($s5)
    ctx->pc = 0x1e9890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e9894: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e9894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e9898: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1E9898u;
    {
        const bool branch_taken_0x1e9898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9898) {
            ctx->pc = 0x1E99D8u;
            goto label_1e99d8;
        }
    }
    ctx->pc = 0x1E98A0u;
    // 0x1e98a0: 0xc6a00050  lwc1        $f0, 0x50($s5)
    ctx->pc = 0x1e98a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e98a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e98a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e98a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e98ac: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e98acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1e98b0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e98b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e98b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e98b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98b8: 0x86420008  lh          $v0, 0x8($s2)
    ctx->pc = 0x1e98b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e98bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e98bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e98c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e98c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e98c4: 0x0  nop
    ctx->pc = 0x1e98c4u;
    // NOP
    // 0x1e98c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e98c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e98cc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1e98ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1e98d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e98d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e98d4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1e98d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1e98d8: 0xc6a00054  lwc1        $f0, 0x54($s5)
    ctx->pc = 0x1e98d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e98dc: 0x8642000a  lh          $v0, 0xA($s2)
    ctx->pc = 0x1e98dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x1e98e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e98e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e98e4: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1e98e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1e98e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e98e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e98ec: 0x0  nop
    ctx->pc = 0x1e98ecu;
    // NOP
    // 0x1e98f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e98f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e98f4: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1e98f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1e98f8: 0x0  nop
    ctx->pc = 0x1e98f8u;
    // NOP
    // 0x1e98fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e98fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e9900: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E9900u;
    SET_GPR_U32(ctx, 31, 0x1E9908u);
    ctx->pc = 0x1E9904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9900u;
    // 0x1e9904: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E9900u, 0x1E9908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9908u;
label_1e9908:
    // 0x1e9908: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e9908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e990c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e990cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e9910: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1e9910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1e9914: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E9914u;
    SET_GPR_U32(ctx, 31, 0x1E991Cu);
    ctx->pc = 0x1E9918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9914u;
    // 0x1e9918: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E9914u, 0x1E991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E991Cu;
label_1e991c:
    // 0x1e991c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e991cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9920: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e9920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e9924: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x1e9924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1e9928: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E9928u;
    SET_GPR_U32(ctx, 31, 0x1E9930u);
    ctx->pc = 0x1E992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9928u;
    // 0x1e992c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E9928u, 0x1E9930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9930u;
label_1e9930:
    // 0x1e9930: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e9930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9934: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e9934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e9938: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x1e9938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1e993c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1E993Cu;
    SET_GPR_U32(ctx, 31, 0x1E9944u);
    ctx->pc = 0x1E9940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E993Cu;
    // 0x1e9940: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1E993Cu, 0x1E9944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9944u;
label_1e9944:
    // 0x1e9944: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e9944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e9948: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e9948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e994c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e994cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e9950: 0xc078624  jal         func_1E1890
    ctx->pc = 0x1E9950u;
    SET_GPR_U32(ctx, 31, 0x1E9958u);
    ctx->pc = 0x1E9954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9950u;
    // 0x1e9954: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1890u, 0x1E9950u, 0x1E9958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9958u;
label_1e9958:
    // 0x1e9958: 0x92ab0035  lbu         $t3, 0x35($s5)
    ctx->pc = 0x1e9958u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
    // 0x1e995c: 0x92aa0033  lbu         $t2, 0x33($s5)
    ctx->pc = 0x1e995cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1e9960: 0x154b000d  bne         $t2, $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x1E9960u;
    {
        const bool branch_taken_0x1e9960 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        ctx->pc = 0x1E9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9960u;
        // 0x1e9964: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9960) {
            ctx->pc = 0x1E9998u;
            goto label_1e9998;
        }
    }
    ctx->pc = 0x1E9968u;
    // 0x1e9968: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1e9968u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1e996c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e996cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e9970: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e9970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e9974: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e9974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e9978: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1e9978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1e997c: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1e997cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1e9980: 0x34e90050  ori         $t1, $a3, 0x50
    ctx->pc = 0x1e9980u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x1e9984: 0xc076090  jal         func_1D8240
    ctx->pc = 0x1E9984u;
    SET_GPR_U32(ctx, 31, 0x1E998Cu);
    ctx->pc = 0x1E9988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9984u;
    // 0x1e9988: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8240u, 0x1E9984u, 0x1E998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E998Cu;
label_1e998c:
    // 0x1e998c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E998Cu;
    {
        const bool branch_taken_0x1e998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E998Cu;
        // 0x1e9990: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e998c) {
            ctx->pc = 0x1E99C0u;
            goto label_1e99c0;
        }
    }
    ctx->pc = 0x1E9994u;
    // 0x1e9994: 0x0  nop
    ctx->pc = 0x1e9994u;
    // NOP
label_1e9998:
    // 0x1e9998: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1e9998u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1e999c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e999cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e99a0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e99a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e99a4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e99a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e99a8: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1e99a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1e99ac: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1e99acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1e99b0: 0x34e90050  ori         $t1, $a3, 0x50
    ctx->pc = 0x1e99b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x1e99b4: 0xc07616c  jal         func_1D85B0
    ctx->pc = 0x1E99B4u;
    SET_GPR_U32(ctx, 31, 0x1E99BCu);
    ctx->pc = 0x1E99B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E99B4u;
    // 0x1e99b8: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D85B0u, 0x1E99B4u, 0x1E99BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E99BCu;
label_1e99bc:
    // 0x1e99bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e99bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e99c0:
    // 0x1e99c0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e99c4: 0xc07864c  jal         func_1E1930
    ctx->pc = 0x1E99C4u;
    SET_GPR_U32(ctx, 31, 0x1E99CCu);
    ctx->pc = 0x1E99C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E99C4u;
    // 0x1e99c8: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1930u, 0x1E99C4u, 0x1E99CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E99CCu;
label_1e99cc:
    // 0x1e99cc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E99CCu;
    {
        const bool branch_taken_0x1e99cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99CCu;
        // 0x1e99d0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99cc) {
            ctx->pc = 0x1E9A38u;
            goto label_1e9a38;
        }
    }
    ctx->pc = 0x1E99D4u;
    // 0x1e99d4: 0x0  nop
    ctx->pc = 0x1e99d4u;
    // NOP
label_1e99d8:
    // 0x1e99d8: 0x92ab0035  lbu         $t3, 0x35($s5)
    ctx->pc = 0x1e99d8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
    // 0x1e99dc: 0x92aa0033  lbu         $t2, 0x33($s5)
    ctx->pc = 0x1e99dcu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 51)));
    // 0x1e99e0: 0x154b000b  bne         $t2, $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x1E99E0u;
    {
        const bool branch_taken_0x1e99e0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        ctx->pc = 0x1E99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99E0u;
        // 0x1e99e4: 0x3c077000  lui         $a3, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99e0) {
            ctx->pc = 0x1E9A10u;
            goto label_1e9a10;
        }
    }
    ctx->pc = 0x1E99E8u;
    // 0x1e99e8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e99ec: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e99ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e99f0: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e99f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e99f4: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1e99f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1e99f8: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1e99f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1e99fc: 0x34e90050  ori         $t1, $a3, 0x50
    ctx->pc = 0x1e99fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x1e9a00: 0xc076090  jal         func_1D8240
    ctx->pc = 0x1E9A00u;
    SET_GPR_U32(ctx, 31, 0x1E9A08u);
    ctx->pc = 0x1E9A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A00u;
    // 0x1e9a04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8240u, 0x1E9A00u, 0x1E9A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A08u;
label_1e9a08:
    // 0x1e9a08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E9A08u;
    {
        const bool branch_taken_0x1e9a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A08u;
        // 0x1e9a0c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a08) {
            ctx->pc = 0x1E9A38u;
            goto label_1e9a38;
        }
    }
    ctx->pc = 0x1E9A10u;
label_1e9a10:
    // 0x1e9a10: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1e9a10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1e9a14: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1e9a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e9a18: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e9a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e9a1c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1e9a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e9a20: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1e9a20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1e9a24: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1e9a24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1e9a28: 0x34e90050  ori         $t1, $a3, 0x50
    ctx->pc = 0x1e9a28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x1e9a2c: 0xc07616c  jal         func_1D85B0
    ctx->pc = 0x1E9A2Cu;
    SET_GPR_U32(ctx, 31, 0x1E9A34u);
    ctx->pc = 0x1E9A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A2Cu;
    // 0x1e9a30: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D85B0u, 0x1E9A2Cu, 0x1E9A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A34u;
label_1e9a34:
    // 0x1e9a34: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e9a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e9a38:
    // 0x1e9a38: 0x92a20034  lbu         $v0, 0x34($s5)
    ctx->pc = 0x1e9a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x1e9a3c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1e9a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1e9a40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E9A40u;
    {
        const bool branch_taken_0x1e9a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A40u;
        // 0x1e9a44: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a40) {
            ctx->pc = 0x1E9A58u;
            goto label_1e9a58;
        }
    }
    ctx->pc = 0x1E9A48u;
    // 0x1e9a48: 0xc07866c  jal         func_1E19B0
    ctx->pc = 0x1E9A48u;
    SET_GPR_U32(ctx, 31, 0x1E9A50u);
    ctx->pc = 0x1E9A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A48u;
    // 0x1e9a4c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19B0u, 0x1E9A48u, 0x1E9A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A50u;
label_1e9a50:
    // 0x1e9a50: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e9a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e9a54: 0x0  nop
    ctx->pc = 0x1e9a54u;
    // NOP
label_1e9a58:
    // 0x1e9a58: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9A58u;
    {
        const bool branch_taken_0x1e9a58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A58u;
        // 0x1e9a5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9a58) {
            ctx->pc = 0x1E9A68u;
            goto label_1e9a68;
        }
    }
    ctx->pc = 0x1E9A60u;
    // 0x1e9a60: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E9A60u;
    {
        const bool branch_taken_0x1e9a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a60) {
            ctx->pc = 0x1E9AA8u;
            goto label_1e9aa8;
        }
    }
    ctx->pc = 0x1E9A68u;
label_1e9a68:
    // 0x1e9a68: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1e9a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1e9a6c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1e9a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e9a70: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1e9a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1e9a74: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1E9A74u;
    SET_GPR_U32(ctx, 31, 0x1E9A7Cu);
    ctx->pc = 0x1E9A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A74u;
    // 0x1e9a78: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1E9A74u, 0x1E9A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A7Cu;
label_1e9a7c:
    // 0x1e9a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a80: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1E9A80u;
    SET_GPR_U32(ctx, 31, 0x1E9A88u);
    ctx->pc = 0x1E9A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A80u;
    // 0x1e9a84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1E9A80u, 0x1E9A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A88u;
label_1e9a88:
    // 0x1e9a88: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e9a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e9a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a90: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1e9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1e9a94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e9a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9a98: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1E9A98u;
    SET_GPR_U32(ctx, 31, 0x1E9AA0u);
    ctx->pc = 0x1E9A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A98u;
    // 0x1e9a9c: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1E9A98u, 0x1E9AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9AA0u;
label_1e9aa0:
    // 0x1e9aa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e9aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9aa4: 0x0  nop
    ctx->pc = 0x1e9aa4u;
    // NOP
label_1e9aa8:
    // 0x1e9aa8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e9aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e9aac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1e9aacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e9ab0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e9ab0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9ab4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e9ab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9ab8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e9ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9abc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e9abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9ac0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e9ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9ac4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e9ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AC8u;
        // 0x1e9acc: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9AD0u;
}
