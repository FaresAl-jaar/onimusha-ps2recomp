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

// Function: sub_00150490
// Address: 0x150490 - 0x150634
void sub_00150490_0x150490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150490_0x150490");
#endif

    switch (ctx->pc) {
        case 0x1504fcu: goto label_1504fc;
        case 0x150504u: goto label_150504;
        case 0x15051cu: goto label_15051c;
        case 0x150524u: goto label_150524;
        case 0x150540u: goto label_150540;
        case 0x150550u: goto label_150550;
        case 0x150564u: goto label_150564;
        case 0x150594u: goto label_150594;
        case 0x1505acu: goto label_1505ac;
        case 0x1505e0u: goto label_1505e0;
        case 0x15060cu: goto label_15060c;
        default: break;
    }

    ctx->pc = 0x150490u;

    // 0x150490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150494: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15049c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15049cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1504a0: 0x90246ac0  lbu         $a0, 0x6AC0($at)
    ctx->pc = 0x1504a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x7E6AC0u));
    // 0x1504a4: 0x10830056  beq         $a0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1504A4u;
    {
        const bool branch_taken_0x1504a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1504A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1504A4u;
        // 0x1504a8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1504a4) {
            ctx->pc = 0x150600u;
            goto label_150600;
        }
    }
    ctx->pc = 0x1504ACu;
    // 0x1504ac: 0x1083003c  beq         $a0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1504ACu;
    {
        const bool branch_taken_0x1504ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1504ac) {
            ctx->pc = 0x1505A0u;
            goto label_1505a0;
        }
    }
    ctx->pc = 0x1504B4u;
    // 0x1504b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1504b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1504b8: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1504B8u;
    {
        const bool branch_taken_0x1504b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1504b8) {
            ctx->pc = 0x150558u;
            goto label_150558;
        }
    }
    ctx->pc = 0x1504C0u;
    // 0x1504c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1504C0u;
    {
        const bool branch_taken_0x1504c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1504c0) {
            ctx->pc = 0x1504D0u;
            goto label_1504d0;
        }
    }
    ctx->pc = 0x1504C8u;
    // 0x1504c8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1504C8u;
    {
        const bool branch_taken_0x1504c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1504c8) {
            ctx->pc = 0x150628u;
            goto label_150628;
        }
    }
    ctx->pc = 0x1504D0u;
label_1504d0:
    // 0x1504d0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1504d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1504d4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1504d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1504d8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1504d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x1504dc: 0xa0226ac0  sb          $v0, 0x6AC0($at)
    ctx->pc = 0x1504dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6AC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC0u, _value); } while (0);
    // 0x1504e0: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x1504e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x1504e4: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x1504e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x1504e8: 0xac2040b4  sw          $zero, 0x40B4($at)
    ctx->pc = 0x1504e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9140B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9140B4u, _value); } while (0);
    // 0x1504ec: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x1504ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x1504f0: 0x8c2540b8  lw          $a1, 0x40B8($at)
    ctx->pc = 0x1504f0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x9140B8u));
    // 0x1504f4: 0xc0ce438  jal         func_3390E0
    ctx->pc = 0x1504F4u;
    SET_GPR_U32(ctx, 31, 0x1504FCu);
    ctx->pc = 0x1504F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504F4u;
    // 0x1504f8: 0x2406fffb  addiu       $a2, $zero, -0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3390E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3390E0u, 0x1504F4u, 0x1504FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504FCu;
label_1504fc:
    // 0x1504fc: 0xc0d8d64  jal         func_363590
    ctx->pc = 0x1504FCu;
    SET_GPR_U32(ctx, 31, 0x150504u);
    ctx->pc = 0x150500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504FCu;
    // 0x150500: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x363590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363590u, 0x1504FCu, 0x150504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150504u;
label_150504:
    // 0x150504: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150508: 0x90226ac8  lbu         $v0, 0x6AC8($at)
    ctx->pc = 0x150508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x7E6AC8u));
    // 0x15050c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x15050Cu;
    {
        const bool branch_taken_0x15050c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15050Cu;
        // 0x150510: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15050c) {
            ctx->pc = 0x150558u;
            goto label_150558;
        }
    }
    ctx->pc = 0x150514u;
    // 0x150514: 0xc0ba3e4  jal         func_2E8F90
    ctx->pc = 0x150514u;
    SET_GPR_U32(ctx, 31, 0x15051Cu);
    ctx->pc = 0x2E8F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8F90u, 0x150514u, 0x15051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15051Cu;
label_15051c:
    // 0x15051c: 0xc0f8ccc  jal         func_3E3330
    ctx->pc = 0x15051Cu;
    SET_GPR_U32(ctx, 31, 0x150524u);
    ctx->pc = 0x3E3330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3330u, 0x15051Cu, 0x150524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150524u;
label_150524:
    // 0x150524: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x150524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x150528: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x150528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15052c: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x15052cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x150530: 0x1083003d  beq         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x150530u;
    {
        const bool branch_taken_0x150530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x150534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150530u;
        // 0x150534: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150530) {
            ctx->pc = 0x150628u;
            goto label_150628;
        }
    }
    ctx->pc = 0x150538u;
    // 0x150538: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x150538u;
    SET_GPR_U32(ctx, 31, 0x150540u);
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x150538u, 0x150540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150540u;
label_150540:
    // 0x150540: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x150540u;
    {
        const bool branch_taken_0x150540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150540u;
        // 0x150544: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150540) {
            ctx->pc = 0x150628u;
            goto label_150628;
        }
    }
    ctx->pc = 0x150548u;
    // 0x150548: 0xc0f8c8c  jal         func_3E3230
    ctx->pc = 0x150548u;
    SET_GPR_U32(ctx, 31, 0x150550u);
    ctx->pc = 0x3E3230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3230u, 0x150548u, 0x150550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150550u;
label_150550:
    // 0x150550: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x150550u;
    {
        const bool branch_taken_0x150550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150550) {
            ctx->pc = 0x150628u;
            goto label_150628;
        }
    }
    ctx->pc = 0x150558u;
label_150558:
    // 0x150558: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x150558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x15055c: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x15055Cu;
    SET_GPR_U32(ctx, 31, 0x150564u);
    ctx->pc = 0x150560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15055Cu;
    // 0x150560: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x15055Cu, 0x150564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150564u;
label_150564:
    // 0x150564: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x150564u;
    {
        const bool branch_taken_0x150564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150564u;
        // 0x150568: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150564) {
            ctx->pc = 0x150628u;
            goto label_150628;
        }
    }
    ctx->pc = 0x15056Cu;
    // 0x15056c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x15056cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x150570: 0x90226ac0  lbu         $v0, 0x6AC0($at)
    ctx->pc = 0x150570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27328)));
    // 0x150574: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x150574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x150578: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x150578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15057c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15057cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150580: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x150580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150584: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150588: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x15058c: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x15058Cu;
    SET_GPR_U32(ctx, 31, 0x150594u);
    ctx->pc = 0x150590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15058Cu;
    // 0x150590: 0xa0226ac0  sb          $v0, 0x6AC0($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 27328), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x15058Cu, 0x150594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150594u;
label_150594:
    // 0x150594: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x150594u;
    {
        const bool branch_taken_0x150594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150594) {
            ctx->pc = 0x150628u;
            goto label_150628;
        }
    }
    ctx->pc = 0x15059Cu;
    // 0x15059c: 0x0  nop
    ctx->pc = 0x15059cu;
    // NOP
label_1505a0:
    // 0x1505a0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x1505a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x1505a4: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x1505A4u;
    SET_GPR_U32(ctx, 31, 0x1505ACu);
    ctx->pc = 0x1505A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1505A4u;
    // 0x1505a8: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x1505A4u, 0x1505ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505ACu;
label_1505ac:
    // 0x1505ac: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1505ACu;
    {
        const bool branch_taken_0x1505ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1505B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505ACu;
        // 0x1505b0: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505ac) {
            ctx->pc = 0x150628u;
            goto label_150628;
        }
    }
    ctx->pc = 0x1505B4u;
    // 0x1505b4: 0x90236ac8  lbu         $v1, 0x6AC8($at)
    ctx->pc = 0x1505b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27336)));
    // 0x1505b8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1505B8u;
    {
        const bool branch_taken_0x1505b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1505b8) {
            ctx->pc = 0x1505E8u;
            goto label_1505e8;
        }
    }
    ctx->pc = 0x1505C0u;
    // 0x1505c0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1505c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1505c4: 0x24040e80  addiu       $a0, $zero, 0xE80
    ctx->pc = 0x1505c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3712));
    // 0x1505c8: 0x8c2295a8  lw          $v0, -0x6A58($at)
    ctx->pc = 0x1505c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095A8u));
    // 0x1505cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1505ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505d0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1505d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1505d4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1505d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1505d8: 0xc054048  jal         func_150120
    ctx->pc = 0x1505D8u;
    SET_GPR_U32(ctx, 31, 0x1505E0u);
    ctx->pc = 0x1505DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1505D8u;
    // 0x1505dc: 0xac2295a8  sw          $v0, -0x6A58($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150120u, 0x1505D8u, 0x1505E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1505E0u;
label_1505e0:
    // 0x1505e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1505E0u;
    {
        const bool branch_taken_0x1505e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1505e0) {
            ctx->pc = 0x150628u;
            goto label_150628;
        }
    }
    ctx->pc = 0x1505E8u;
label_1505e8:
    // 0x1505e8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1505e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1505ec: 0x8c2395a8  lw          $v1, -0x6A58($at)
    ctx->pc = 0x1505ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095A8u));
    // 0x1505f0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1505f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1505f4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1505f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1505f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1505F8u;
    {
        const bool branch_taken_0x1505f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1505FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1505F8u;
        // 0x1505fc: 0xac2395a8  sw          $v1, -0x6A58($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940072), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505f8) {
            ctx->pc = 0x150628u;
            goto label_150628;
        }
    }
    ctx->pc = 0x150600u;
label_150600:
    // 0x150600: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x150600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x150604: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x150604u;
    SET_GPR_U32(ctx, 31, 0x15060Cu);
    ctx->pc = 0x150608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150604u;
    // 0x150608: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x150604u, 0x15060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15060Cu;
label_15060c:
    // 0x15060c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15060Cu;
    {
        const bool branch_taken_0x15060c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15060Cu;
        // 0x150610: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15060c) {
            ctx->pc = 0x150628u;
            goto label_150628;
        }
    }
    ctx->pc = 0x150614u;
    // 0x150614: 0x8c2395a8  lw          $v1, -0x6A58($at)
    ctx->pc = 0x150614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940072)));
    // 0x150618: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x150618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x15061c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x15061cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x150620: 0xac2395a8  sw          $v1, -0x6A58($at)
    ctx->pc = 0x150620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8095A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8095A8u, _value); } while (0);
    // 0x150624: 0x0  nop
    ctx->pc = 0x150624u;
    // NOP
label_150628:
    // 0x150628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15062c: 0x3e00008  jr          $ra
    ctx->pc = 0x15062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15062Cu;
        // 0x150630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15062Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150634u;
}
