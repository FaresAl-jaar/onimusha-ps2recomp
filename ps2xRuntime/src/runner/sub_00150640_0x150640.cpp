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

// Function: sub_00150640
// Address: 0x150640 - 0x150764
void sub_00150640_0x150640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150640_0x150640");
#endif

    switch (ctx->pc) {
        case 0x1506bcu: goto label_1506bc;
        case 0x1506dcu: goto label_1506dc;
        case 0x1506f4u: goto label_1506f4;
        case 0x150724u: goto label_150724;
        case 0x15073cu: goto label_15073c;
        default: break;
    }

    ctx->pc = 0x150640u;

    // 0x150640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150644: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15064c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150650: 0x90256ac0  lbu         $a1, 0x6AC0($at)
    ctx->pc = 0x150650u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x7E6AC0u));
    // 0x150654: 0x10a30036  beq         $a1, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x150654u;
    {
        const bool branch_taken_0x150654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x150658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150654u;
        // 0x150658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150654) {
            ctx->pc = 0x150730u;
            goto label_150730;
        }
    }
    ctx->pc = 0x15065Cu;
    // 0x15065c: 0x10a40022  beq         $a1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15065Cu;
    {
        const bool branch_taken_0x15065c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x15065c) {
            ctx->pc = 0x1506E8u;
            goto label_1506e8;
        }
    }
    ctx->pc = 0x150664u;
    // 0x150664: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x150664u;
    {
        const bool branch_taken_0x150664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x150664) {
            ctx->pc = 0x150678u;
            goto label_150678;
        }
    }
    ctx->pc = 0x15066Cu;
    // 0x15066c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x15066Cu;
    {
        const bool branch_taken_0x15066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15066c) {
            ctx->pc = 0x150758u;
            goto label_150758;
        }
    }
    ctx->pc = 0x150674u;
    // 0x150674: 0x0  nop
    ctx->pc = 0x150674u;
    // NOP
label_150678:
    // 0x150678: 0x93838bd0  lbu         $v1, -0x7430($gp)
    ctx->pc = 0x150678u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937552)));
    // 0x15067c: 0x93828bd4  lbu         $v0, -0x742C($gp)
    ctx->pc = 0x15067cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937556)));
    // 0x150680: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x150680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x150684: 0x601827  not         $v1, $v1
    ctx->pc = 0x150684u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x150688: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x150688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15068c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15068cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x150690: 0xa3828bd4  sb          $v0, -0x742C($gp)
    ctx->pc = 0x150690u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937556), (uint8_t)GPR_U32(ctx, 2));
    // 0x150694: 0x93828bd4  lbu         $v0, -0x742C($gp)
    ctx->pc = 0x150694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937556)));
    // 0x150698: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x150698u;
    {
        const bool branch_taken_0x150698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150698u;
        // 0x15069c: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150698) {
            ctx->pc = 0x1506C8u;
            goto label_1506c8;
        }
    }
    ctx->pc = 0x1506A0u;
    // 0x1506a0: 0x24040ff0  addiu       $a0, $zero, 0xFF0
    ctx->pc = 0x1506a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    // 0x1506a4: 0x8c2295a8  lw          $v0, -0x6A58($at)
    ctx->pc = 0x1506a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940072)));
    // 0x1506a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1506a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1506ac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1506acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1506b0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1506b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1506b4: 0xc054048  jal         func_150120
    ctx->pc = 0x1506B4u;
    SET_GPR_U32(ctx, 31, 0x1506BCu);
    ctx->pc = 0x1506B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1506B4u;
    // 0x1506b8: 0xac2295a8  sw          $v0, -0x6A58($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940072), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150120u, 0x1506B4u, 0x1506BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506BCu;
label_1506bc:
    // 0x1506bc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1506BCu;
    {
        const bool branch_taken_0x1506bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1506bc) {
            ctx->pc = 0x150758u;
            goto label_150758;
        }
    }
    ctx->pc = 0x1506C4u;
    // 0x1506c4: 0x0  nop
    ctx->pc = 0x1506c4u;
    // NOP
label_1506c8:
    // 0x1506c8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1506c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1506cc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1506ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1506d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1506d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1506d4: 0xc0ba3e4  jal         func_2E8F90
    ctx->pc = 0x1506D4u;
    SET_GPR_U32(ctx, 31, 0x1506DCu);
    ctx->pc = 0x1506D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1506D4u;
    // 0x1506d8: 0xa0226ac0  sb          $v0, 0x6AC0($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 27328), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8F90u, 0x1506D4u, 0x1506DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506DCu;
label_1506dc:
    // 0x1506dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1506DCu;
    {
        const bool branch_taken_0x1506dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1506dc) {
            ctx->pc = 0x150758u;
            goto label_150758;
        }
    }
    ctx->pc = 0x1506E4u;
    // 0x1506e4: 0x0  nop
    ctx->pc = 0x1506e4u;
    // NOP
label_1506e8:
    // 0x1506e8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x1506e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x1506ec: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x1506ECu;
    SET_GPR_U32(ctx, 31, 0x1506F4u);
    ctx->pc = 0x1506F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1506ECu;
    // 0x1506f0: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x1506ECu, 0x1506F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506F4u;
label_1506f4:
    // 0x1506f4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1506F4u;
    {
        const bool branch_taken_0x1506f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1506F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1506F4u;
        // 0x1506f8: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506f4) {
            ctx->pc = 0x150758u;
            goto label_150758;
        }
    }
    ctx->pc = 0x1506FCu;
    // 0x1506fc: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x1506fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x150700: 0x90226ac0  lbu         $v0, 0x6AC0($at)
    ctx->pc = 0x150700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27328)));
    // 0x150704: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x150704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x150708: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x150708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15070c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15070cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150710: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x150710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150714: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150718: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x15071c: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x15071Cu;
    SET_GPR_U32(ctx, 31, 0x150724u);
    ctx->pc = 0x150720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15071Cu;
    // 0x150720: 0xa0226ac0  sb          $v0, 0x6AC0($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 27328), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x15071Cu, 0x150724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150724u;
label_150724:
    // 0x150724: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x150724u;
    {
        const bool branch_taken_0x150724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150724) {
            ctx->pc = 0x150758u;
            goto label_150758;
        }
    }
    ctx->pc = 0x15072Cu;
    // 0x15072c: 0x0  nop
    ctx->pc = 0x15072cu;
    // NOP
label_150730:
    // 0x150730: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x150730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x150734: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x150734u;
    SET_GPR_U32(ctx, 31, 0x15073Cu);
    ctx->pc = 0x150738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150734u;
    // 0x150738: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x150734u, 0x15073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15073Cu;
label_15073c:
    // 0x15073c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15073Cu;
    {
        const bool branch_taken_0x15073c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15073Cu;
        // 0x150740: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15073c) {
            ctx->pc = 0x150758u;
            goto label_150758;
        }
    }
    ctx->pc = 0x150744u;
    // 0x150744: 0x8c2395a8  lw          $v1, -0x6A58($at)
    ctx->pc = 0x150744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940072)));
    // 0x150748: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x150748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x15074c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x15074cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x150750: 0xac2395a8  sw          $v1, -0x6A58($at)
    ctx->pc = 0x150750u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8095A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8095A8u, _value); } while (0);
    // 0x150754: 0x0  nop
    ctx->pc = 0x150754u;
    // NOP
label_150758:
    // 0x150758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15075c: 0x3e00008  jr          $ra
    ctx->pc = 0x15075Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15075Cu;
        // 0x150760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15075Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150764u;
}
