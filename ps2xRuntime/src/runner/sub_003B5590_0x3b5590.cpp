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

// Function: sub_003B5590
// Address: 0x3b5590 - 0x3b57c0
void sub_003B5590_0x3b5590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5590_0x3b5590");
#endif

    switch (ctx->pc) {
        case 0x3b55c0u: goto label_3b55c0;
        case 0x3b55d4u: goto label_3b55d4;
        case 0x3b5604u: goto label_3b5604;
        case 0x3b560cu: goto label_3b560c;
        case 0x3b562cu: goto label_3b562c;
        case 0x3b5674u: goto label_3b5674;
        case 0x3b56b4u: goto label_3b56b4;
        case 0x3b56d4u: goto label_3b56d4;
        case 0x3b56e0u: goto label_3b56e0;
        case 0x3b56ecu: goto label_3b56ec;
        case 0x3b56f8u: goto label_3b56f8;
        case 0x3b5718u: goto label_3b5718;
        case 0x3b5724u: goto label_3b5724;
        case 0x3b5730u: goto label_3b5730;
        case 0x3b573cu: goto label_3b573c;
        case 0x3b575cu: goto label_3b575c;
        case 0x3b5768u: goto label_3b5768;
        case 0x3b5774u: goto label_3b5774;
        case 0x3b5780u: goto label_3b5780;
        case 0x3b579cu: goto label_3b579c;
        default: break;
    }

    ctx->pc = 0x3b5590u;

    // 0x3b5590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b5590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b5594: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b5594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3b5598: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b5598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3b559c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b559cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b55a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b55a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b55a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b55a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b55a8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b55a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b55ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b55acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b55b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b55b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b55b4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3b55b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b55b8: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x3B55B8u;
    SET_GPR_U32(ctx, 31, 0x3B55C0u);
    ctx->pc = 0x3B55BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B55B8u;
    // 0x3b55bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x3B55B8u, 0x3B55C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B55C0u;
label_3b55c0:
    // 0x3b55c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b55c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b55c4: 0x12600076  beqz        $s3, . + 4 + (0x76 << 2)
    ctx->pc = 0x3B55C4u;
    {
        const bool branch_taken_0x3b55c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B55C4u;
        // 0x3b55c8: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b55c4) {
            ctx->pc = 0x3B57A0u;
            goto label_3b57a0;
        }
    }
    ctx->pc = 0x3B55CCu;
    // 0x3b55cc: 0xc0d8fc4  jal         func_363F10
    ctx->pc = 0x3B55CCu;
    SET_GPR_U32(ctx, 31, 0x3B55D4u);
    ctx->pc = 0x363F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363F10u, 0x3B55CCu, 0x3B55D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B55D4u;
label_3b55d4:
    // 0x3b55d4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3b55d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b55d8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b55d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b55dc: 0x26220006  addiu       $v0, $s1, 0x6
    ctx->pc = 0x3b55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x3b55e0: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3b55e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3b55e4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3b55e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b55e8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b55e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b55ec: 0x2642000c  addiu       $v0, $s2, 0xC
    ctx->pc = 0x3b55ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x3b55f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b55f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b55f4: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3b55f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b55f8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3b55f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b55fc: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3B55FCu;
    SET_GPR_U32(ctx, 31, 0x3B5604u);
    ctx->pc = 0x3B5600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B55FCu;
    // 0x3b5600: 0x25292b10  addiu       $t1, $t1, 0x2B10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3B55FCu, 0x3B5604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5604u;
label_3b5604:
    // 0x3b5604: 0xc0ed944  jal         func_3B6510
    ctx->pc = 0x3B5604u;
    SET_GPR_U32(ctx, 31, 0x3B560Cu);
    ctx->pc = 0x3B5608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5604u;
    // 0x3b5608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6510u, 0x3B5604u, 0x3B560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B560Cu;
label_3b560c:
    // 0x3b560c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b560cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5610: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x3b5610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3b5614: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3b5614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3b5618: 0x2647001f  addiu       $a3, $s2, 0x1F
    ctx->pc = 0x3b5618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 31));
    // 0x3b561c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b561cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5620: 0x3408fff8  ori         $t0, $zero, 0xFFF8
    ctx->pc = 0x3b5620u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x3b5624: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x3B5624u;
    SET_GPR_U32(ctx, 31, 0x3B562Cu);
    ctx->pc = 0x3B5628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5624u;
    // 0x3b5628: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x3B5624u, 0x3B562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B562Cu;
label_3b562c:
    // 0x3b562c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b562cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b5630: 0x265000b6  addiu       $s0, $s2, 0xB6
    ctx->pc = 0x3b5630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 182));
    // 0x3b5634: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x3b5634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x3b5638: 0x26320004  addiu       $s2, $s1, 0x4
    ctx->pc = 0x3b5638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3b563c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b5640: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3B5640u;
    {
        const bool branch_taken_0x3b5640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5640u;
        // 0x3b5644: 0x2631006f  addiu       $s1, $s1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5640) {
            ctx->pc = 0x3B5680u;
            goto label_3b5680;
        }
    }
    ctx->pc = 0x3B5648u;
    // 0x3b5648: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b564c: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3b564cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3b5650: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3b5650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3b5654: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x3b5654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x3b5658: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x3b5658u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3b565c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b5660: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b5660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5664: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3b5664u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b5668: 0x25292b10  addiu       $t1, $t1, 0x2B10
    ctx->pc = 0x3b5668u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11024));
    // 0x3b566c: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3B566Cu;
    SET_GPR_U32(ctx, 31, 0x3B5674u);
    ctx->pc = 0x3B5670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B566Cu;
    // 0x3b5670: 0x344a0003  ori         $t2, $v0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3B566Cu, 0x3B5674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5674u;
label_3b5674:
    // 0x3b5674: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3B5674u;
    {
        const bool branch_taken_0x3b5674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5674) {
            ctx->pc = 0x3B56B8u;
            goto label_3b56b8;
        }
    }
    ctx->pc = 0x3B567Cu;
    // 0x3b567c: 0x0  nop
    ctx->pc = 0x3b567cu;
    // NOP
label_3b5680:
    // 0x3b5680: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3b5680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x3b5684: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b5688: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3b5688u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3b568c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b568cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3b5690: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x3b5690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x3b5694: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x3b5694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3b5698: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b5698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b569c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b569cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b56a0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3b56a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b56a4: 0x25292b10  addiu       $t1, $t1, 0x2B10
    ctx->pc = 0x3b56a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11024));
    // 0x3b56a8: 0x344a0031  ori         $t2, $v0, 0x31
    ctx->pc = 0x3b56a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49);
    // 0x3b56ac: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3B56ACu;
    SET_GPR_U32(ctx, 31, 0x3B56B4u);
    ctx->pc = 0x3B56B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56ACu;
    // 0x3b56b0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3B56ACu, 0x3B56B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56B4u;
label_3b56b4:
    // 0x3b56b4: 0x0  nop
    ctx->pc = 0x3b56b4u;
    // NOP
label_3b56b8:
    // 0x3b56b8: 0x92680004  lbu         $t0, 0x4($s3)
    ctx->pc = 0x3b56b8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3b56bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b56bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b56c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b56c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b56c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b56c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b56c8: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x3b56c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3b56cc: 0xc0ed738  jal         func_3B5CE0
    ctx->pc = 0x3B56CCu;
    SET_GPR_U32(ctx, 31, 0x3B56D4u);
    ctx->pc = 0x3B56D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56CCu;
    // 0x3b56d0: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5CE0u, 0x3B56CCu, 0x3B56D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56D4u;
label_3b56d4:
    // 0x3b56d4: 0x9674000a  lhu         $s4, 0xA($s3)
    ctx->pc = 0x3b56d4u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x3b56d8: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x3B56D8u;
    SET_GPR_U32(ctx, 31, 0x3B56E0u);
    ctx->pc = 0x3B56DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56D8u;
    // 0x3b56dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x3B56D8u, 0x3B56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56E0u;
label_3b56e0:
    // 0x3b56e0: 0x3284ffff  andi        $a0, $s4, 0xFFFF
    ctx->pc = 0x3b56e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x3b56e4: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3B56E4u;
    SET_GPR_U32(ctx, 31, 0x3B56ECu);
    ctx->pc = 0x3B56E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56E4u;
    // 0x3b56e8: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3B56E4u, 0x3B56ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56ECu;
label_3b56ec:
    // 0x3b56ec: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x3b56ecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b56f0: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x3B56F0u;
    SET_GPR_U32(ctx, 31, 0x3B56F8u);
    ctx->pc = 0x3B56F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B56F0u;
    // 0x3b56f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x3B56F0u, 0x3B56F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B56F8u;
label_3b56f8:
    // 0x3b56f8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3b56f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b56fc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3b56fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5700: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3b5700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3b5704: 0x2606ffee  addiu       $a2, $s0, -0x12
    ctx->pc = 0x3b5704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967278));
    // 0x3b5708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b5708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b570c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b570cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5710: 0xc0ed53c  jal         func_3B54F0
    ctx->pc = 0x3B5710u;
    SET_GPR_U32(ctx, 31, 0x3B5718u);
    ctx->pc = 0x3B5714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5710u;
    // 0x3b5714: 0x34470002  ori         $a3, $v0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B54F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B54F0u, 0x3B5710u, 0x3B5718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5718u;
label_3b5718:
    // 0x3b5718: 0x96740006  lhu         $s4, 0x6($s3)
    ctx->pc = 0x3b5718u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x3b571c: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x3B571Cu;
    SET_GPR_U32(ctx, 31, 0x3B5724u);
    ctx->pc = 0x3B5720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B571Cu;
    // 0x3b5720: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x3B571Cu, 0x3B5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5724u;
label_3b5724:
    // 0x3b5724: 0x3284ffff  andi        $a0, $s4, 0xFFFF
    ctx->pc = 0x3b5724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x3b5728: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3B5728u;
    SET_GPR_U32(ctx, 31, 0x3B5730u);
    ctx->pc = 0x3B572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5728u;
    // 0x3b572c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3B5728u, 0x3B5730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5730u;
label_3b5730:
    // 0x3b5730: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x3b5730u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b5734: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x3B5734u;
    SET_GPR_U32(ctx, 31, 0x3B573Cu);
    ctx->pc = 0x3B5738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5734u;
    // 0x3b5738: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x3B5734u, 0x3B573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B573Cu;
label_3b573c:
    // 0x3b573c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3b573cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5740: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3b5740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5744: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3b5744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3b5748: 0x2606ffdc  addiu       $a2, $s0, -0x24
    ctx->pc = 0x3b5748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967260));
    // 0x3b574c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b574cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5750: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5754: 0xc0ed53c  jal         func_3B54F0
    ctx->pc = 0x3B5754u;
    SET_GPR_U32(ctx, 31, 0x3B575Cu);
    ctx->pc = 0x3B5758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5754u;
    // 0x3b5758: 0x34470001  ori         $a3, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B54F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B54F0u, 0x3B5754u, 0x3B575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B575Cu;
label_3b575c:
    // 0x3b575c: 0x96740000  lhu         $s4, 0x0($s3)
    ctx->pc = 0x3b575cu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3b5760: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x3B5760u;
    SET_GPR_U32(ctx, 31, 0x3B5768u);
    ctx->pc = 0x3B5764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5760u;
    // 0x3b5764: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x3B5760u, 0x3B5768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5768u;
label_3b5768:
    // 0x3b5768: 0x3284ffff  andi        $a0, $s4, 0xFFFF
    ctx->pc = 0x3b5768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x3b576c: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3B576Cu;
    SET_GPR_U32(ctx, 31, 0x3B5774u);
    ctx->pc = 0x3B5770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B576Cu;
    // 0x3b5770: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3B576Cu, 0x3B5774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5774u;
label_3b5774:
    // 0x3b5774: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b5774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5778: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x3B5778u;
    SET_GPR_U32(ctx, 31, 0x3B5780u);
    ctx->pc = 0x3B577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5778u;
    // 0x3b577c: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x3B5778u, 0x3B5780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5780u;
label_3b5780:
    // 0x3b5780: 0x2606ffca  addiu       $a2, $s0, -0x36
    ctx->pc = 0x3b5780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967242));
    // 0x3b5784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b5784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5788: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b578c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3b578cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5790: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x3b5790u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x3b5794: 0xc0ed53c  jal         func_3B54F0
    ctx->pc = 0x3B5794u;
    SET_GPR_U32(ctx, 31, 0x3B579Cu);
    ctx->pc = 0x3B5798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5794u;
    // 0x3b5798: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B54F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B54F0u, 0x3B5794u, 0x3B579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B579Cu;
label_3b579c:
    // 0x3b579c: 0x0  nop
    ctx->pc = 0x3b579cu;
    // NOP
label_3b57a0:
    // 0x3b57a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b57a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b57a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b57a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b57a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b57a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b57ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b57acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b57b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b57b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b57b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b57b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b57b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B57B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B57B8u;
        // 0x3b57bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B57B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B57C0u;
}
