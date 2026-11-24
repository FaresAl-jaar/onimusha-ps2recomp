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

// Function: sub_0014A2D0
// Address: 0x14a2d0 - 0x14a434
void sub_0014A2D0_0x14a2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A2D0_0x14a2d0");
#endif

    switch (ctx->pc) {
        case 0x14a334u: goto label_14a334;
        case 0x14a370u: goto label_14a370;
        case 0x14a398u: goto label_14a398;
        default: break;
    }

    ctx->pc = 0x14a2d0u;

    // 0x14a2d0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x14a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14a2d4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a2d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a2d8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x14a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14a2dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14a2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14a2e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a2e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a2e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14a2ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a2f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14a2f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a2f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a2fc: 0x24700220  addiu       $s0, $v1, 0x220
    ctx->pc = 0x14a2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x14a300: 0x8c630220  lw          $v1, 0x220($v1)
    ctx->pc = 0x14a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x14a304: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14A304u;
    {
        const bool branch_taken_0x14a304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A304u;
        // 0x14a308: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a304) {
            ctx->pc = 0x14A388u;
            goto label_14a388;
        }
    }
    ctx->pc = 0x14A30Cu;
    // 0x14a30c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a310: 0x10640015  beq         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14A310u;
    {
        const bool branch_taken_0x14a310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x14a310) {
            ctx->pc = 0x14A368u;
            goto label_14a368;
        }
    }
    ctx->pc = 0x14A318u;
    // 0x14a318: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A318u;
    {
        const bool branch_taken_0x14a318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a318) {
            ctx->pc = 0x14A328u;
            goto label_14a328;
        }
    }
    ctx->pc = 0x14A320u;
    // 0x14a320: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x14A320u;
    {
        const bool branch_taken_0x14a320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a320) {
            ctx->pc = 0x14A418u;
            goto label_14a418;
        }
    }
    ctx->pc = 0x14A328u;
label_14a328:
    // 0x14a328: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14a328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14a32c: 0xc048566  jal         func_121598
    ctx->pc = 0x14A32Cu;
    SET_GPR_U32(ctx, 31, 0x14A334u);
    ctx->pc = 0x14A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A32Cu;
    // 0x14a330: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14A32Cu, 0x14A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A334u;
label_14a334:
    // 0x14a334: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A334u;
    {
        const bool branch_taken_0x14a334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a334) {
            ctx->pc = 0x14A348u;
            goto label_14a348;
        }
    }
    ctx->pc = 0x14A33Cu;
    // 0x14a33c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x14A33Cu;
    {
        const bool branch_taken_0x14a33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A33Cu;
        // 0x14a340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a33c) {
            ctx->pc = 0x14A420u;
            goto label_14a420;
        }
    }
    ctx->pc = 0x14A344u;
    // 0x14a344: 0x0  nop
    ctx->pc = 0x14a344u;
    // NOP
label_14a348:
    // 0x14a348: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14a348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a34c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a350: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14a354: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14a354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14a358: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x14a358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x14a35c: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x14a35cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x14a360: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x14a360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a364: 0x0  nop
    ctx->pc = 0x14a364u;
    // NOP
label_14a368:
    // 0x14a368: 0xc04842e  jal         func_1210B8
    ctx->pc = 0x14A368u;
    SET_GPR_U32(ctx, 31, 0x14A370u);
    ctx->pc = 0x14A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A368u;
    // 0x14a36c: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1210B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1210B8u, 0x14A368u, 0x14A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A370u;
label_14a370:
    // 0x14a370: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x14A370u;
    {
        const bool branch_taken_0x14a370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a370) {
            ctx->pc = 0x14A418u;
            goto label_14a418;
        }
    }
    ctx->pc = 0x14A378u;
    // 0x14a378: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a37c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a380: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x14A380u;
    {
        const bool branch_taken_0x14a380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A380u;
        // 0x14a384: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a380) {
            ctx->pc = 0x14A418u;
            goto label_14a418;
        }
    }
    ctx->pc = 0x14A388u;
label_14a388:
    // 0x14a388: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14a388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a38c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x14a38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14a390: 0xc048566  jal         func_121598
    ctx->pc = 0x14A390u;
    SET_GPR_U32(ctx, 31, 0x14A398u);
    ctx->pc = 0x14A394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A390u;
    // 0x14a394: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121598u, 0x14A390u, 0x14A398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A398u;
label_14a398:
    // 0x14a398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a39c: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x14A39Cu;
    {
        const bool branch_taken_0x14a39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a39c) {
            ctx->pc = 0x14A418u;
            goto label_14a418;
        }
    }
    ctx->pc = 0x14A3A4u;
    // 0x14a3a4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14a3a8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x14a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x14a3ac: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14A3ACu;
    {
        const bool branch_taken_0x14a3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3ACu;
        // 0x14a3b0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3ac) {
            ctx->pc = 0x14A3E8u;
            goto label_14a3e8;
        }
    }
    ctx->pc = 0x14A3B4u;
    // 0x14a3b4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14A3B4u;
    {
        const bool branch_taken_0x14a3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a3b4) {
            ctx->pc = 0x14A3E8u;
            goto label_14a3e8;
        }
    }
    ctx->pc = 0x14A3BCu;
    // 0x14a3bc: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x14a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x14a3c0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A3C0u;
    {
        const bool branch_taken_0x14a3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14a3c0) {
            ctx->pc = 0x14A3D8u;
            goto label_14a3d8;
        }
    }
    ctx->pc = 0x14A3C8u;
    // 0x14a3c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A3C8u;
    {
        const bool branch_taken_0x14a3c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a3c8) {
            ctx->pc = 0x14A3D8u;
            goto label_14a3d8;
        }
    }
    ctx->pc = 0x14A3D0u;
    // 0x14a3d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A3D0u;
    {
        const bool branch_taken_0x14a3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a3d0) {
            ctx->pc = 0x14A3E8u;
            goto label_14a3e8;
        }
    }
    ctx->pc = 0x14A3D8u;
label_14a3d8:
    // 0x14a3d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a3dc: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x14a3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a3e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14A3E0u;
    {
        const bool branch_taken_0x14a3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3E0u;
        // 0x14a3e4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3e0) {
            ctx->pc = 0x14A420u;
            goto label_14a420;
        }
    }
    ctx->pc = 0x14A3E8u;
label_14a3e8:
    // 0x14a3e8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x14a3e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a3ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14A3ECu;
    {
        const bool branch_taken_0x14a3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3ECu;
        // 0x14a3f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3ec) {
            ctx->pc = 0x14A408u;
            goto label_14a408;
        }
    }
    ctx->pc = 0x14A3F4u;
    // 0x14a3f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14a3f8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x14a3f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a3fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14a400: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14A400u;
    {
        const bool branch_taken_0x14a400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A400u;
        // 0x14a404: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a400) {
            ctx->pc = 0x14A418u;
            goto label_14a418;
        }
    }
    ctx->pc = 0x14A408u;
label_14a408:
    // 0x14a408: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14a40c: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x14a40cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a410: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14A410u;
    {
        const bool branch_taken_0x14a410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A410u;
        // 0x14a414: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a410) {
            ctx->pc = 0x14A420u;
            goto label_14a420;
        }
    }
    ctx->pc = 0x14A418u;
label_14a418:
    // 0x14a418: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a41c: 0x0  nop
    ctx->pc = 0x14a41cu;
    // NOP
label_14a420:
    // 0x14a420: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14a420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a42c: 0x3e00008  jr          $ra
    ctx->pc = 0x14A42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A42Cu;
        // 0x14a430: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A434u;
}
