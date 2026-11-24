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

// Function: sub_00398890
// Address: 0x398890 - 0x398c98
void sub_00398890_0x398890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398890_0x398890");
#endif

    switch (ctx->pc) {
        case 0x3988c4u: goto label_3988c4;
        case 0x398910u: goto label_398910;
        case 0x39891cu: goto label_39891c;
        case 0x398960u: goto label_398960;
        case 0x398968u: goto label_398968;
        case 0x398994u: goto label_398994;
        case 0x3989a4u: goto label_3989a4;
        case 0x3989c4u: goto label_3989c4;
        case 0x3989f8u: goto label_3989f8;
        case 0x398a18u: goto label_398a18;
        case 0x398a34u: goto label_398a34;
        case 0x398a68u: goto label_398a68;
        case 0x398aacu: goto label_398aac;
        case 0x398b04u: goto label_398b04;
        case 0x398b24u: goto label_398b24;
        case 0x398b3cu: goto label_398b3c;
        case 0x398b4cu: goto label_398b4c;
        case 0x398b5cu: goto label_398b5c;
        case 0x398bbcu: goto label_398bbc;
        case 0x398bd0u: goto label_398bd0;
        case 0x398bdcu: goto label_398bdc;
        case 0x398bfcu: goto label_398bfc;
        case 0x398c20u: goto label_398c20;
        case 0x398c34u: goto label_398c34;
        case 0x398c50u: goto label_398c50;
        case 0x398c5cu: goto label_398c5c;
        case 0x398c6cu: goto label_398c6c;
        case 0x398c7cu: goto label_398c7c;
        default: break;
    }

    ctx->pc = 0x398890u;

    // 0x398890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x398890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x398894: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x398894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x398898: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x398898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x39889c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39889cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3988a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3988a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3988a4: 0x90850023  lbu         $a1, 0x23($a0)
    ctx->pc = 0x3988a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x3988a8: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x3988a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3988ac: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3988ACu;
    {
        const bool branch_taken_0x3988ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3988B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988ACu;
        // 0x3988b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3988ac) {
            ctx->pc = 0x3988C8u;
            goto label_3988c8;
        }
    }
    ctx->pc = 0x3988B4u;
    // 0x3988b4: 0x34a20002  ori         $v0, $a1, 0x2
    ctx->pc = 0x3988b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x3988b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3988b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3988bc: 0xc0e633c  jal         func_398CF0
    ctx->pc = 0x3988BCu;
    SET_GPR_U32(ctx, 31, 0x3988C4u);
    ctx->pc = 0x3988C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3988BCu;
    // 0x3988c0: 0xa2020023  sb          $v0, 0x23($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398CF0u, 0x3988BCu, 0x3988C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3988C4u;
label_3988c4:
    // 0x3988c4: 0x0  nop
    ctx->pc = 0x3988c4u;
    // NOP
label_3988c8:
    // 0x3988c8: 0x92040021  lbu         $a0, 0x21($s0)
    ctx->pc = 0x3988c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x3988cc: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3988ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3988d0: 0x108300cd  beq         $a0, $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x3988D0u;
    {
        const bool branch_taken_0x3988d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3988D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3988D0u;
        // 0x3988d4: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3988d0) {
            ctx->pc = 0x398C08u;
            goto label_398c08;
        }
    }
    ctx->pc = 0x3988D8u;
    // 0x3988d8: 0x10830095  beq         $a0, $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x3988D8u;
    {
        const bool branch_taken_0x3988d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3988d8) {
            ctx->pc = 0x398B30u;
            goto label_398b30;
        }
    }
    ctx->pc = 0x3988E0u;
    // 0x3988e0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3988e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3988e4: 0x10830074  beq         $a0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x3988E4u;
    {
        const bool branch_taken_0x3988e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3988e4) {
            ctx->pc = 0x398AB8u;
            goto label_398ab8;
        }
    }
    ctx->pc = 0x3988ECu;
    // 0x3988ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3988ECu;
    {
        const bool branch_taken_0x3988ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3988ec) {
            ctx->pc = 0x398900u;
            goto label_398900;
        }
    }
    ctx->pc = 0x3988F4u;
    // 0x3988f4: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x3988F4u;
    {
        const bool branch_taken_0x3988f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3988f4) {
            ctx->pc = 0x398C80u;
            goto label_398c80;
        }
    }
    ctx->pc = 0x3988FCu;
    // 0x3988fc: 0x0  nop
    ctx->pc = 0x3988fcu;
    // NOP
label_398900:
    // 0x398900: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x398900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x398904: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x398904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x398908: 0xc0cbed0  jal         func_32FB40
    ctx->pc = 0x398908u;
    SET_GPR_U32(ctx, 31, 0x398910u);
    ctx->pc = 0x39890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398908u;
    // 0x39890c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB40u, 0x398908u, 0x398910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398910u;
label_398910:
    // 0x398910: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x398910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x398914: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x398914u;
    SET_GPR_U32(ctx, 31, 0x39891Cu);
    ctx->pc = 0x398918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398914u;
    // 0x398918: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCD0u, 0x398914u, 0x39891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39891Cu;
label_39891c:
    // 0x39891c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x39891cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x398920: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x398920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398924: 0x14460012  bne         $v0, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x398924u;
    {
        const bool branch_taken_0x398924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x398928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398924u;
        // 0x398928: 0x8c321284  lw          $s2, 0x1284($at) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398924) {
            ctx->pc = 0x398970u;
            goto label_398970;
        }
    }
    ctx->pc = 0x39892Cu;
    // 0x39892c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39892cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x398930: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x398930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x398934: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x398934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x398938: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x398938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39893c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x39893cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x398940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x398940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398944: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x398944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x398948: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x398948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39894c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39894cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398950: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x398950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398954: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x398954u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398958: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x398958u;
    SET_GPR_U32(ctx, 31, 0x398960u);
    ctx->pc = 0x39895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398958u;
    // 0x39895c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x398958u, 0x398960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398960u;
label_398960:
    // 0x398960: 0xc0e5dd4  jal         func_397750
    ctx->pc = 0x398960u;
    SET_GPR_U32(ctx, 31, 0x398968u);
    ctx->pc = 0x398964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398960u;
    // 0x398964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397750u, 0x398960u, 0x398968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398968u;
label_398968:
    // 0x398968: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x398968u;
    {
        const bool branch_taken_0x398968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398968) {
            ctx->pc = 0x398C80u;
            goto label_398c80;
        }
    }
    ctx->pc = 0x398970u;
label_398970:
    // 0x398970: 0x124000c3  beqz        $s2, . + 4 + (0xC3 << 2)
    ctx->pc = 0x398970u;
    {
        const bool branch_taken_0x398970 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x398974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398970u;
        // 0x398974: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398970) {
            ctx->pc = 0x398C80u;
            goto label_398c80;
        }
    }
    ctx->pc = 0x398978u;
    // 0x398978: 0x144300c1  bne         $v0, $v1, . + 4 + (0xC1 << 2)
    ctx->pc = 0x398978u;
    {
        const bool branch_taken_0x398978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x398978) {
            ctx->pc = 0x398C80u;
            goto label_398c80;
        }
    }
    ctx->pc = 0x398980u;
    // 0x398980: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x398980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x398984: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x398984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x398988: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x398988u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x39898c: 0xc0bd324  jal         func_2F4C90
    ctx->pc = 0x39898Cu;
    SET_GPR_U32(ctx, 31, 0x398994u);
    ctx->pc = 0x398990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39898Cu;
    // 0x398990: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4C90u, 0x39898Cu, 0x398994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398994u;
label_398994:
    // 0x398994: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x398994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x398998: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x398998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39899c: 0xc0bd2d4  jal         func_2F4B50
    ctx->pc = 0x39899Cu;
    SET_GPR_U32(ctx, 31, 0x3989A4u);
    ctx->pc = 0x3989A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39899Cu;
    // 0x3989a0: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B50u, 0x39899Cu, 0x3989A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3989A4u;
label_3989a4:
    // 0x3989a4: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x3989a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3989a8: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x3989A8u;
    {
        const bool branch_taken_0x3989a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3989a8) {
            ctx->pc = 0x398A00u;
            goto label_398a00;
        }
    }
    ctx->pc = 0x3989B0u;
    // 0x3989b0: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x3989b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x3989b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3989b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989b8: 0x34450038  ori         $a1, $v0, 0x38
    ctx->pc = 0x3989b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56);
    // 0x3989bc: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x3989BCu;
    SET_GPR_U32(ctx, 31, 0x3989C4u);
    ctx->pc = 0x3989C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3989BCu;
    // 0x3989c0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x3989BCu, 0x3989C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3989C4u;
label_3989c4:
    // 0x3989c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3989c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3989c8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3989c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3989cc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3989ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3989d0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3989d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3989d4: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x3989d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x3989d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3989d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989dc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3989dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3989e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3989e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3989e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3989e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3989ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3989f0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3989F0u;
    SET_GPR_U32(ctx, 31, 0x3989F8u);
    ctx->pc = 0x3989F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3989F0u;
    // 0x3989f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3989F0u, 0x3989F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3989F8u;
label_3989f8:
    // 0x3989f8: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x3989F8u;
    {
        const bool branch_taken_0x3989f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3989f8) {
            ctx->pc = 0x398C80u;
            goto label_398c80;
        }
    }
    ctx->pc = 0x398A00u;
label_398a00:
    // 0x398a00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x398a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x398a04: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x398a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x398a08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x398a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398a0c: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x398a0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x398a10: 0xc0bd064  jal         func_2F4190
    ctx->pc = 0x398A10u;
    SET_GPR_U32(ctx, 31, 0x398A18u);
    ctx->pc = 0x398A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398A10u;
    // 0x398a14: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4190u, 0x398A10u, 0x398A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398A18u;
label_398a18:
    // 0x398a18: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x398A18u;
    {
        const bool branch_taken_0x398a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x398a18) {
            ctx->pc = 0x398A70u;
            goto label_398a70;
        }
    }
    ctx->pc = 0x398A20u;
    // 0x398a20: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x398a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x398a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a28: 0x34450039  ori         $a1, $v0, 0x39
    ctx->pc = 0x398a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57);
    // 0x398a2c: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x398A2Cu;
    SET_GPR_U32(ctx, 31, 0x398A34u);
    ctx->pc = 0x398A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398A2Cu;
    // 0x398a30: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x398A2Cu, 0x398A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398A34u;
label_398a34:
    // 0x398a34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x398a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x398a38: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x398a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x398a3c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x398a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x398a40: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x398a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x398a44: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x398a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x398a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x398a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a4c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x398a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x398a50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x398a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x398a54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x398a58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x398a5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a60: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x398A60u;
    SET_GPR_U32(ctx, 31, 0x398A68u);
    ctx->pc = 0x398A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398A60u;
    // 0x398a64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x398A60u, 0x398A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398A68u;
label_398a68:
    // 0x398a68: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x398A68u;
    {
        const bool branch_taken_0x398a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398a68) {
            ctx->pc = 0x398C80u;
            goto label_398c80;
        }
    }
    ctx->pc = 0x398A70u;
label_398a70:
    // 0x398a70: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x398a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x398a74: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x398a74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x398a78: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x398a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x398a7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x398a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x398a80: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x398a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x398a84: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x398a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x398a88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x398a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a8c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x398a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x398a90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x398a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a94: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x398a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x398a98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x398a98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398a9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x398a9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398aa0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x398aa0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398aa4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x398AA4u;
    SET_GPR_U32(ctx, 31, 0x398AACu);
    ctx->pc = 0x398AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398AA4u;
    // 0x398aa8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x398AA4u, 0x398AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398AACu;
label_398aac:
    // 0x398aac: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x398AACu;
    {
        const bool branch_taken_0x398aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398aac) {
            ctx->pc = 0x398C80u;
            goto label_398c80;
        }
    }
    ctx->pc = 0x398AB4u;
    // 0x398ab4: 0x0  nop
    ctx->pc = 0x398ab4u;
    // NOP
label_398ab8:
    // 0x398ab8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x398ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x398abc: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x398abcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x398ac0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x398ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x398ac4: 0x8c231284  lw          $v1, 0x1284($at)
    ctx->pc = 0x398ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x911284u));
    // 0x398ac8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x398ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x398acc: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x398accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x398ad0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x398ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x398ad4: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x398ad4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x398ad8: 0xa60201ae  sh          $v0, 0x1AE($s0)
    ctx->pc = 0x398ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 430), (uint16_t)GPR_U32(ctx, 2));
    // 0x398adc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x398adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x398ae0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x398ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x398ae4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x398ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x398ae8: 0x2167e  dsrl32      $v0, $v0, 25
    ctx->pc = 0x398ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 25));
    // 0x398aec: 0xa60201b0  sh          $v0, 0x1B0($s0)
    ctx->pc = 0x398aecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 432), (uint16_t)GPR_U32(ctx, 2));
    // 0x398af0: 0x960201b0  lhu         $v0, 0x1B0($s0)
    ctx->pc = 0x398af0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x398af4: 0xa60201b2  sh          $v0, 0x1B2($s0)
    ctx->pc = 0x398af4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 434), (uint16_t)GPR_U32(ctx, 2));
    // 0x398af8: 0x960501ae  lhu         $a1, 0x1AE($s0)
    ctx->pc = 0x398af8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 430)));
    // 0x398afc: 0xc0bd324  jal         func_2F4C90
    ctx->pc = 0x398AFCu;
    SET_GPR_U32(ctx, 31, 0x398B04u);
    ctx->pc = 0x398B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398AFCu;
    // 0x398b00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4C90u, 0x398AFCu, 0x398B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398B04u;
label_398b04:
    // 0x398b04: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x398b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x398b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398b0c: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x398b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x398b10: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x398b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x398b14: 0x3445003b  ori         $a1, $v0, 0x3B
    ctx->pc = 0x398b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59);
    // 0x398b18: 0x31023  negu        $v0, $v1
    ctx->pc = 0x398b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x398b1c: 0xc0dc804  jal         func_372010
    ctx->pc = 0x398B1Cu;
    SET_GPR_U32(ctx, 31, 0x398B24u);
    ctx->pc = 0x398B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398B1Cu;
    // 0x398b20: 0xae0201b8  sw          $v0, 0x1B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x398B1Cu, 0x398B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398B24u;
label_398b24:
    // 0x398b24: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x398B24u;
    {
        const bool branch_taken_0x398b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398b24) {
            ctx->pc = 0x398C80u;
            goto label_398c80;
        }
    }
    ctx->pc = 0x398B2Cu;
    // 0x398b2c: 0x0  nop
    ctx->pc = 0x398b2cu;
    // NOP
label_398b30:
    // 0x398b30: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x398b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x398b34: 0xc095150  jal         func_254540
    ctx->pc = 0x398B34u;
    SET_GPR_U32(ctx, 31, 0x398B3Cu);
    ctx->pc = 0x398B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398B34u;
    // 0x398b38: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x398B34u, 0x398B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398B3Cu;
label_398b3c:
    // 0x398b3c: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x398B3Cu;
    {
        const bool branch_taken_0x398b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B3Cu;
        // 0x398b40: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398b3c) {
            ctx->pc = 0x398C80u;
            goto label_398c80;
        }
    }
    ctx->pc = 0x398B44u;
    // 0x398b44: 0xc095154  jal         func_254550
    ctx->pc = 0x398B44u;
    SET_GPR_U32(ctx, 31, 0x398B4Cu);
    ctx->pc = 0x398B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398B44u;
    // 0x398b48: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x398B44u, 0x398B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398B4Cu;
label_398b4c:
    // 0x398b4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x398B4Cu;
    {
        const bool branch_taken_0x398b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B4Cu;
        // 0x398b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398b4c) {
            ctx->pc = 0x398B68u;
            goto label_398b68;
        }
    }
    ctx->pc = 0x398B54u;
    // 0x398b54: 0xc0e61e8  jal         func_3987A0
    ctx->pc = 0x398B54u;
    SET_GPR_U32(ctx, 31, 0x398B5Cu);
    ctx->pc = 0x3987A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987A0u, 0x398B54u, 0x398B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398B5Cu;
label_398b5c:
    // 0x398b5c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x398B5Cu;
    {
        const bool branch_taken_0x398b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398b5c) {
            ctx->pc = 0x398C80u;
            goto label_398c80;
        }
    }
    ctx->pc = 0x398B64u;
    // 0x398b64: 0x0  nop
    ctx->pc = 0x398b64u;
    // NOP
label_398b68:
    // 0x398b68: 0x92070021  lbu         $a3, 0x21($s0)
    ctx->pc = 0x398b68u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x398b6c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x398b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x398b70: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x398b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x398b74: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x398b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x398b78: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x398b78u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x398b7c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x398b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x398b80: 0x3003000f  andi        $v1, $zero, 0xF
    ctx->pc = 0x398b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)15);
    // 0x398b84: 0x24841270  addiu       $a0, $a0, 0x1270
    ctx->pc = 0x398b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x398b88: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x398b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x398b8c: 0xa2070021  sb          $a3, 0x21($s0)
    ctx->pc = 0x398b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 7));
    // 0x398b90: 0x8c291284  lw          $t1, 0x1284($at)
    ctx->pc = 0x398b90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4740)));
    // 0x398b94: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x398b94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x398b98: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x398b98u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x398b9c: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x398b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x398ba0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x398ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x398ba4: 0xa1050000  sb          $a1, 0x0($t0)
    ctx->pc = 0x398ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x398ba8: 0x91250008  lbu         $a1, 0x8($t1)
    ctx->pc = 0x398ba8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x398bac: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x398bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x398bb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x398bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x398bb4: 0xc0cbf18  jal         func_32FC60
    ctx->pc = 0x398BB4u;
    SET_GPR_U32(ctx, 31, 0x398BBCu);
    ctx->pc = 0x398BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398BB4u;
    // 0x398bb8: 0xa1220008  sb          $v0, 0x8($t1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 9), 8), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FC60u, 0x398BB4u, 0x398BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398BBCu;
label_398bbc:
    // 0x398bbc: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x398bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x398bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398bc4: 0x3445003c  ori         $a1, $v0, 0x3C
    ctx->pc = 0x398bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60);
    // 0x398bc8: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x398BC8u;
    SET_GPR_U32(ctx, 31, 0x398BD0u);
    ctx->pc = 0x398BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398BC8u;
    // 0x398bcc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x398BC8u, 0x398BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398BD0u;
label_398bd0:
    // 0x398bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398bd4: 0xc0e633c  jal         func_398CF0
    ctx->pc = 0x398BD4u;
    SET_GPR_U32(ctx, 31, 0x398BDCu);
    ctx->pc = 0x398BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398BD4u;
    // 0x398bd8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398CF0u, 0x398BD4u, 0x398BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398BDCu;
label_398bdc:
    // 0x398bdc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x398bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x398be0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x398be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x398be4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x398be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x398be8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x398be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x398bec: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x398becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x398bf0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x398bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398bf4: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x398BF4u;
    SET_GPR_U32(ctx, 31, 0x398BFCu);
    ctx->pc = 0x398BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398BF4u;
    // 0x398bf8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x398BF4u, 0x398BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398BFCu;
label_398bfc:
    // 0x398bfc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x398BFCu;
    {
        const bool branch_taken_0x398bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398bfc) {
            ctx->pc = 0x398C80u;
            goto label_398c80;
        }
    }
    ctx->pc = 0x398C04u;
    // 0x398c04: 0x0  nop
    ctx->pc = 0x398c04u;
    // NOP
label_398c08:
    // 0x398c08: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x398c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x398c0c: 0x8e0501b8  lw          $a1, 0x1B8($s0)
    ctx->pc = 0x398c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x398c10: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x398c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x398c14: 0x8c311284  lw          $s1, 0x1284($at)
    ctx->pc = 0x398c14u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x911284u));
    // 0x398c18: 0xc0bd2a8  jal         func_2F4AA0
    ctx->pc = 0x398C18u;
    SET_GPR_U32(ctx, 31, 0x398C20u);
    ctx->pc = 0x398C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C18u;
    // 0x398c1c: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4AA0u, 0x398C18u, 0x398C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C20u;
label_398c20:
    // 0x398c20: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x398c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x398c24: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x398c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x398c28: 0x960601b0  lhu         $a2, 0x1B0($s0)
    ctx->pc = 0x398c28u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x398c2c: 0xc0bcfbc  jal         func_2F3EF0
    ctx->pc = 0x398C2Cu;
    SET_GPR_U32(ctx, 31, 0x398C34u);
    ctx->pc = 0x398C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C2Cu;
    // 0x398c30: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3EF0u, 0x398C2Cu, 0x398C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C34u;
label_398c34:
    // 0x398c34: 0x920601b0  lbu         $a2, 0x1B0($s0)
    ctx->pc = 0x398c34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x398c38: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x398c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x398c3c: 0x960501ae  lhu         $a1, 0x1AE($s0)
    ctx->pc = 0x398c3cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 430)));
    // 0x398c40: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x398c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x398c44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x398c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398c48: 0xc0bce7c  jal         func_2F39F0
    ctx->pc = 0x398C48u;
    SET_GPR_U32(ctx, 31, 0x398C50u);
    ctx->pc = 0x398C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C48u;
    // 0x398c4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39F0u, 0x398C48u, 0x398C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C50u;
label_398c50:
    // 0x398c50: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x398c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x398c54: 0xc0cbee4  jal         func_32FB90
    ctx->pc = 0x398C54u;
    SET_GPR_U32(ctx, 31, 0x398C5Cu);
    ctx->pc = 0x398C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C54u;
    // 0x398c58: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB90u, 0x398C54u, 0x398C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C5Cu;
label_398c5c:
    // 0x398c5c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x398c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x398c60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398c64: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x398C64u;
    SET_GPR_U32(ctx, 31, 0x398C6Cu);
    ctx->pc = 0x398C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C64u;
    // 0x398c68: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x398C64u, 0x398C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C6Cu;
label_398c6c:
    // 0x398c6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x398c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x398c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x398c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398c74: 0xc0e61e8  jal         func_3987A0
    ctx->pc = 0x398C74u;
    SET_GPR_U32(ctx, 31, 0x398C7Cu);
    ctx->pc = 0x398C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398C74u;
    // 0x398c78: 0xa60201ae  sh          $v0, 0x1AE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 430), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3987A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3987A0u, 0x398C74u, 0x398C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C7Cu;
label_398c7c:
    // 0x398c7c: 0x0  nop
    ctx->pc = 0x398c7cu;
    // NOP
label_398c80:
    // 0x398c80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x398c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x398c84: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x398c84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x398c88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x398c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398c8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x398c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398c90: 0x3e00008  jr          $ra
    ctx->pc = 0x398C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C90u;
        // 0x398c94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398C98u;
}
