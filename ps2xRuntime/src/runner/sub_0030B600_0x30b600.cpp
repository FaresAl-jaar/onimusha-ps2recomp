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

// Function: sub_0030B600
// Address: 0x30b600 - 0x30ba0c
void sub_0030B600_0x30b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B600_0x30b600");
#endif

    switch (ctx->pc) {
        case 0x30b628u: goto label_30b628;
        case 0x30b638u: goto label_30b638;
        case 0x30b650u: goto label_30b650;
        case 0x30b668u: goto label_30b668;
        case 0x30b6dcu: goto label_30b6dc;
        case 0x30b710u: goto label_30b710;
        case 0x30b728u: goto label_30b728;
        case 0x30b750u: goto label_30b750;
        case 0x30b76cu: goto label_30b76c;
        case 0x30b788u: goto label_30b788;
        case 0x30b824u: goto label_30b824;
        case 0x30b874u: goto label_30b874;
        case 0x30b88cu: goto label_30b88c;
        case 0x30b8c0u: goto label_30b8c0;
        case 0x30b928u: goto label_30b928;
        case 0x30b93cu: goto label_30b93c;
        case 0x30b954u: goto label_30b954;
        case 0x30b9a4u: goto label_30b9a4;
        case 0x30b9b8u: goto label_30b9b8;
        default: break;
    }

    ctx->pc = 0x30b600u;

    // 0x30b600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30b600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30b604: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30b604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30b608: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30b608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30b60c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30b60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30b610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30b610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b614: 0x90830024  lbu         $v1, 0x24($a0)
    ctx->pc = 0x30b614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x30b618: 0x106000f7  beqz        $v1, . + 4 + (0xF7 << 2)
    ctx->pc = 0x30B618u;
    {
        const bool branch_taken_0x30b618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B618u;
        // 0x30b61c: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b618) {
            ctx->pc = 0x30B9F8u;
            goto label_30b9f8;
        }
    }
    ctx->pc = 0x30B620u;
    // 0x30b620: 0xc0bd200  jal         func_2F4800
    ctx->pc = 0x30B620u;
    SET_GPR_U32(ctx, 31, 0x30B628u);
    ctx->pc = 0x30B624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B620u;
    // 0x30b624: 0x96050004  lhu         $a1, 0x4($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4800u, 0x30B620u, 0x30B628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B628u;
label_30b628:
    // 0x30b628: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30B628u;
    {
        const bool branch_taken_0x30b628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b628) {
            ctx->pc = 0x30B670u;
            goto label_30b670;
        }
    }
    ctx->pc = 0x30B630u;
    // 0x30b630: 0xc09c84c  jal         func_272130
    ctx->pc = 0x30B630u;
    SET_GPR_U32(ctx, 31, 0x30B638u);
    ctx->pc = 0x30B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B630u;
    // 0x30b634: 0x96040004  lhu         $a0, 0x4($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272130u, 0x30B630u, 0x30B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B638u;
label_30b638:
    // 0x30b638: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x30b638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x30b63c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x30b63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30b640: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x30b640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x30b644: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x30b644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b648: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x30B648u;
    SET_GPR_U32(ctx, 31, 0x30B650u);
    ctx->pc = 0x30B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B648u;
    // 0x30b64c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x30B648u, 0x30B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B650u;
label_30b650:
    // 0x30b650: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B650u;
    {
        const bool branch_taken_0x30b650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b650) {
            ctx->pc = 0x30B668u;
            goto label_30b668;
        }
    }
    ctx->pc = 0x30B658u;
    // 0x30b658: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x30b658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x30b65c: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x30b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
    // 0x30b660: 0xc0bd750  jal         func_2F5D40
    ctx->pc = 0x30B660u;
    SET_GPR_U32(ctx, 31, 0x30B668u);
    ctx->pc = 0x30B664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B660u;
    // 0x30b664: 0x24845d80  addiu       $a0, $a0, 0x5D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5D40u, 0x30B660u, 0x30B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B668u;
label_30b668:
    // 0x30b668: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x30B668u;
    {
        const bool branch_taken_0x30b668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B668u;
        // 0x30b66c: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b668) {
            ctx->pc = 0x30B9F8u;
            goto label_30b9f8;
        }
    }
    ctx->pc = 0x30B670u;
label_30b670:
    // 0x30b670: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x30b670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x30b674: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x30b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30b678: 0x106200bb  beq         $v1, $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x30B678u;
    {
        const bool branch_taken_0x30b678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B678u;
        // 0x30b67c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b678) {
            ctx->pc = 0x30B968u;
            goto label_30b968;
        }
    }
    ctx->pc = 0x30B680u;
    // 0x30b680: 0x106200a7  beq         $v1, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x30B680u;
    {
        const bool branch_taken_0x30b680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30b680) {
            ctx->pc = 0x30B920u;
            goto label_30b920;
        }
    }
    ctx->pc = 0x30B688u;
    // 0x30b688: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x30b688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30b68c: 0x10620090  beq         $v1, $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x30B68Cu;
    {
        const bool branch_taken_0x30b68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B68Cu;
        // 0x30b690: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b68c) {
            ctx->pc = 0x30B8D0u;
            goto label_30b8d0;
        }
    }
    ctx->pc = 0x30B694u;
    // 0x30b694: 0x1062006a  beq         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x30B694u;
    {
        const bool branch_taken_0x30b694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30b694) {
            ctx->pc = 0x30B840u;
            goto label_30b840;
        }
    }
    ctx->pc = 0x30B69Cu;
    // 0x30b69c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30b6a0: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x30B6A0u;
    {
        const bool branch_taken_0x30b6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6A0u;
        // 0x30b6a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b6a0) {
            ctx->pc = 0x30B7D0u;
            goto label_30b7d0;
        }
    }
    ctx->pc = 0x30B6A8u;
    // 0x30b6a8: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x30B6A8u;
    {
        const bool branch_taken_0x30b6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30b6a8) {
            ctx->pc = 0x30B780u;
            goto label_30b780;
        }
    }
    ctx->pc = 0x30B6B0u;
    // 0x30b6b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b6b4: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x30B6B4u;
    {
        const bool branch_taken_0x30b6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30b6b4) {
            ctx->pc = 0x30B760u;
            goto label_30b760;
        }
    }
    ctx->pc = 0x30B6BCu;
    // 0x30b6bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B6BCu;
    {
        const bool branch_taken_0x30b6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b6bc) {
            ctx->pc = 0x30B6D0u;
            goto label_30b6d0;
        }
    }
    ctx->pc = 0x30B6C4u;
    // 0x30b6c4: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x30B6C4u;
    {
        const bool branch_taken_0x30b6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b6c4) {
            ctx->pc = 0x30B970u;
            goto label_30b970;
        }
    }
    ctx->pc = 0x30B6CCu;
    // 0x30b6cc: 0x0  nop
    ctx->pc = 0x30b6ccu;
    // NOP
label_30b6d0:
    // 0x30b6d0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x30b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x30b6d4: 0xc0ceaf0  jal         func_33ABC0
    ctx->pc = 0x30B6D4u;
    SET_GPR_U32(ctx, 31, 0x30B6DCu);
    ctx->pc = 0x30B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B6D4u;
    // 0x30b6d8: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ABC0u, 0x30B6D4u, 0x30B6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B6DCu;
label_30b6dc:
    // 0x30b6dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b6e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x30b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x30b6e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x30b6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x30b6e8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x30b6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x30b6ec: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30b6f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30b6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b6f4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x30b6f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x30b6f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30b6f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b6fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30b6fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b700: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30b700u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b704: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30b704u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b708: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x30B708u;
    SET_GPR_U32(ctx, 31, 0x30B710u);
    ctx->pc = 0x30B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B708u;
    // 0x30b70c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x30B708u, 0x30B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B710u;
label_30b710:
    // 0x30b710: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x30b710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x30b714: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x30b714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30b718: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x30b718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x30b71c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30b71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b720: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x30B720u;
    SET_GPR_U32(ctx, 31, 0x30B728u);
    ctx->pc = 0x30B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B720u;
    // 0x30b724: 0xa7808af0  sh          $zero, -0x7510($gp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937328), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x30B720u, 0x30B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B728u;
label_30b728:
    // 0x30b728: 0xaf828af8  sw          $v0, -0x7508($gp)
    ctx->pc = 0x30b728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937336), GPR_U32(ctx, 2));
    // 0x30b72c: 0x8f828af8  lw          $v0, -0x7508($gp)
    ctx->pc = 0x30b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937336)));
    // 0x30b730: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30B730u;
    {
        const bool branch_taken_0x30b730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b730) {
            ctx->pc = 0x30B748u;
            goto label_30b748;
        }
    }
    ctx->pc = 0x30B738u;
    // 0x30b738: 0xa0400068  sb          $zero, 0x68($v0)
    ctx->pc = 0x30b738u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b73c: 0x8f828af8  lw          $v0, -0x7508($gp)
    ctx->pc = 0x30b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937336)));
    // 0x30b740: 0xa0400069  sb          $zero, 0x69($v0)
    ctx->pc = 0x30b740u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b744: 0x0  nop
    ctx->pc = 0x30b744u;
    // NOP
label_30b748:
    // 0x30b748: 0xc0c2e84  jal         func_30BA10
    ctx->pc = 0x30B748u;
    SET_GPR_U32(ctx, 31, 0x30B750u);
    ctx->pc = 0x30B74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B748u;
    // 0x30b74c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA10u, 0x30B748u, 0x30B750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B750u;
label_30b750:
    // 0x30b750: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x30b750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x30b754: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b758: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x30B758u;
    {
        const bool branch_taken_0x30b758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B758u;
        // 0x30b75c: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b758) {
            ctx->pc = 0x30B970u;
            goto label_30b970;
        }
    }
    ctx->pc = 0x30B760u;
label_30b760:
    // 0x30b760: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x30b760u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30b764: 0xc0c2e98  jal         func_30BA60
    ctx->pc = 0x30B764u;
    SET_GPR_U32(ctx, 31, 0x30B76Cu);
    ctx->pc = 0x30B768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B764u;
    // 0x30b768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA60u, 0x30B764u, 0x30B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B76Cu;
label_30b76c:
    // 0x30b76c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x30b76cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x30b770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b774: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x30B774u;
    {
        const bool branch_taken_0x30b774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B774u;
        // 0x30b778: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b774) {
            ctx->pc = 0x30B970u;
            goto label_30b970;
        }
    }
    ctx->pc = 0x30B77Cu;
    // 0x30b77c: 0x0  nop
    ctx->pc = 0x30b77cu;
    // NOP
label_30b780:
    // 0x30b780: 0xc0c2ea4  jal         func_30BA90
    ctx->pc = 0x30B780u;
    SET_GPR_U32(ctx, 31, 0x30B788u);
    ctx->pc = 0x30B784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B780u;
    // 0x30b784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA90u, 0x30B780u, 0x30B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B788u;
label_30b788:
    // 0x30b788: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30B788u;
    {
        const bool branch_taken_0x30b788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b788) {
            ctx->pc = 0x30B7A8u;
            goto label_30b7a8;
        }
    }
    ctx->pc = 0x30B790u;
    // 0x30b790: 0xa7808af4  sh          $zero, -0x750C($gp)
    ctx->pc = 0x30b790u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937332), (uint16_t)GPR_U32(ctx, 0));
    // 0x30b794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b798: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x30b798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x30b79c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30b7a0: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x30b7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30b7a4: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x30b7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_30b7a8:
    // 0x30b7a8: 0x87838af0  lh          $v1, -0x7510($gp)
    ctx->pc = 0x30b7a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937328)));
    // 0x30b7ac: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x30b7acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x30b7b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B7B0u;
    {
        const bool branch_taken_0x30b7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7B0u;
        // 0x30b7b4: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b7b0) {
            ctx->pc = 0x30B7C0u;
            goto label_30b7c0;
        }
    }
    ctx->pc = 0x30B7B8u;
    // 0x30b7b8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x30B7B8u;
    {
        const bool branch_taken_0x30b7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7B8u;
        // 0x30b7bc: 0xa7828af0  sh          $v0, -0x7510($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b7b8) {
            ctx->pc = 0x30B970u;
            goto label_30b970;
        }
    }
    ctx->pc = 0x30B7C0u;
label_30b7c0:
    // 0x30b7c0: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x30b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x30b7c4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x30B7C4u;
    {
        const bool branch_taken_0x30b7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7C4u;
        // 0x30b7c8: 0xa7828af0  sh          $v0, -0x7510($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937328), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b7c4) {
            ctx->pc = 0x30B970u;
            goto label_30b970;
        }
    }
    ctx->pc = 0x30B7CCu;
    // 0x30b7cc: 0x0  nop
    ctx->pc = 0x30b7ccu;
    // NOP
label_30b7d0:
    // 0x30b7d0: 0x87838af4  lh          $v1, -0x750C($gp)
    ctx->pc = 0x30b7d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937332)));
    // 0x30b7d4: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x30b7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x30b7d8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x30B7D8u;
    {
        const bool branch_taken_0x30b7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7D8u;
        // 0x30b7dc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b7d8) {
            ctx->pc = 0x30B830u;
            goto label_30b830;
        }
    }
    ctx->pc = 0x30B7E0u;
    // 0x30b7e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x30b7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x30b7e4: 0xa7828af4  sh          $v0, -0x750C($gp)
    ctx->pc = 0x30b7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937332), (uint16_t)GPR_U32(ctx, 2));
    // 0x30b7e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b7ec: 0x920c0001  lbu         $t4, 0x1($s0)
    ctx->pc = 0x30b7ecu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x30b7f0: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x30b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x30b7f4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x30b7f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x30b7f8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x30b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x30b7fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30b7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b800: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30b800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b804: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30b804u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b808: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30b808u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b80c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30b80cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b810: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x30b810u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b814: 0x25820001  addiu       $v0, $t4, 0x1
    ctx->pc = 0x30b814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x30b818: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x30b818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x30b81c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x30B81Cu;
    SET_GPR_U32(ctx, 31, 0x30B824u);
    ctx->pc = 0x30B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B81Cu;
    // 0x30b820: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x30B81Cu, 0x30B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B824u;
label_30b824:
    // 0x30b824: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x30B824u;
    {
        const bool branch_taken_0x30b824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b824) {
            ctx->pc = 0x30B970u;
            goto label_30b970;
        }
    }
    ctx->pc = 0x30B82Cu;
    // 0x30b82c: 0x0  nop
    ctx->pc = 0x30b82cu;
    // NOP
label_30b830:
    // 0x30b830: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x30b830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x30b834: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x30B834u;
    {
        const bool branch_taken_0x30b834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B834u;
        // 0x30b838: 0xa7828af4  sh          $v0, -0x750C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937332), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b834) {
            ctx->pc = 0x30B970u;
            goto label_30b970;
        }
    }
    ctx->pc = 0x30B83Cu;
    // 0x30b83c: 0x0  nop
    ctx->pc = 0x30b83cu;
    // NOP
label_30b840:
    // 0x30b840: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x30b840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x30b844: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30B844u;
    {
        const bool branch_taken_0x30b844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B844u;
        // 0x30b848: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b844) {
            ctx->pc = 0x30B868u;
            goto label_30b868;
        }
    }
    ctx->pc = 0x30B84Cu;
    // 0x30b84c: 0x8c22ea24  lw          $v0, -0x15DC($at)
    ctx->pc = 0x30b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x30b850: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x30b850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x30b854: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30B854u;
    {
        const bool branch_taken_0x30b854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b854) {
            ctx->pc = 0x30B880u;
            goto label_30b880;
        }
    }
    ctx->pc = 0x30B85Cu;
    // 0x30b85c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x30B85Cu;
    {
        const bool branch_taken_0x30b85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b85c) {
            ctx->pc = 0x30B970u;
            goto label_30b970;
        }
    }
    ctx->pc = 0x30B864u;
    // 0x30b864: 0x0  nop
    ctx->pc = 0x30b864u;
    // NOP
label_30b868:
    // 0x30b868: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x30b868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x30b86c: 0xc095150  jal         func_254540
    ctx->pc = 0x30B86Cu;
    SET_GPR_U32(ctx, 31, 0x30B874u);
    ctx->pc = 0x30B870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B86Cu;
    // 0x30b870: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x30B86Cu, 0x30B874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B874u;
label_30b874:
    // 0x30b874: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x30B874u;
    {
        const bool branch_taken_0x30b874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b874) {
            ctx->pc = 0x30B970u;
            goto label_30b970;
        }
    }
    ctx->pc = 0x30B87Cu;
    // 0x30b87c: 0x0  nop
    ctx->pc = 0x30b87cu;
    // NOP
label_30b880:
    // 0x30b880: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x30b880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x30b884: 0xc0ceafc  jal         func_33ABF0
    ctx->pc = 0x30B884u;
    SET_GPR_U32(ctx, 31, 0x30B88Cu);
    ctx->pc = 0x30B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B884u;
    // 0x30b888: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ABF0u, 0x30B884u, 0x30B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B88Cu;
label_30b88c:
    // 0x30b88c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30b88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b890: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x30b890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x30b894: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x30b894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x30b898: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x30b898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x30b89c: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x30b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x30b8a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30b8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b8a4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x30b8a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x30b8a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30b8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b8ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30b8acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b8b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30b8b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b8b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30b8b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b8b8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x30B8B8u;
    SET_GPR_U32(ctx, 31, 0x30B8C0u);
    ctx->pc = 0x30B8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B8B8u;
    // 0x30b8bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x30B8B8u, 0x30B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B8C0u;
label_30b8c0:
    // 0x30b8c0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x30b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30b8c4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x30B8C4u;
    {
        const bool branch_taken_0x30b8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8C4u;
        // 0x30b8c8: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8c4) {
            ctx->pc = 0x30B970u;
            goto label_30b970;
        }
    }
    ctx->pc = 0x30B8CCu;
    // 0x30b8cc: 0x0  nop
    ctx->pc = 0x30b8ccu;
    // NOP
label_30b8d0:
    // 0x30b8d0: 0x87828af0  lh          $v0, -0x7510($gp)
    ctx->pc = 0x30b8d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937328)));
    // 0x30b8d4: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B8D4u;
    {
        const bool branch_taken_0x30b8d4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x30b8d4) {
            ctx->pc = 0x30B8E8u;
            goto label_30b8e8;
        }
    }
    ctx->pc = 0x30B8DCu;
    // 0x30b8dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30B8DCu;
    {
        const bool branch_taken_0x30b8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8DCu;
        // 0x30b8e0: 0xa7808af0  sh          $zero, -0x7510($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937328), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8dc) {
            ctx->pc = 0x30B8F0u;
            goto label_30b8f0;
        }
    }
    ctx->pc = 0x30B8E4u;
    // 0x30b8e4: 0x0  nop
    ctx->pc = 0x30b8e4u;
    // NOP
label_30b8e8:
    // 0x30b8e8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x30b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x30b8ec: 0xa7828af0  sh          $v0, -0x7510($gp)
    ctx->pc = 0x30b8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937328), (uint16_t)GPR_U32(ctx, 2));
label_30b8f0:
    // 0x30b8f0: 0x87828af4  lh          $v0, -0x750C($gp)
    ctx->pc = 0x30b8f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937332)));
    // 0x30b8f4: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30B8F4u;
    {
        const bool branch_taken_0x30b8f4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x30b8f4) {
            ctx->pc = 0x30B910u;
            goto label_30b910;
        }
    }
    ctx->pc = 0x30B8FCu;
    // 0x30b8fc: 0xa7808af4  sh          $zero, -0x750C($gp)
    ctx->pc = 0x30b8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937332), (uint16_t)GPR_U32(ctx, 0));
    // 0x30b900: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x30b900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x30b904: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b908: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x30B908u;
    {
        const bool branch_taken_0x30b908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B908u;
        // 0x30b90c: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b908) {
            ctx->pc = 0x30B970u;
            goto label_30b970;
        }
    }
    ctx->pc = 0x30B910u;
label_30b910:
    // 0x30b910: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x30b910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x30b914: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x30B914u;
    {
        const bool branch_taken_0x30b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B914u;
        // 0x30b918: 0xa7828af4  sh          $v0, -0x750C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937332), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b914) {
            ctx->pc = 0x30B970u;
            goto label_30b970;
        }
    }
    ctx->pc = 0x30B91Cu;
    // 0x30b91c: 0x0  nop
    ctx->pc = 0x30b91cu;
    // NOP
label_30b920:
    // 0x30b920: 0xc0c2e84  jal         func_30BA10
    ctx->pc = 0x30B920u;
    SET_GPR_U32(ctx, 31, 0x30B928u);
    ctx->pc = 0x30B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B920u;
    // 0x30b924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA10u, 0x30B920u, 0x30B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B928u;
label_30b928:
    // 0x30b928: 0x8f858af8  lw          $a1, -0x7508($gp)
    ctx->pc = 0x30b928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937336)));
    // 0x30b92c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30B92Cu;
    {
        const bool branch_taken_0x30b92c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B92Cu;
        // 0x30b930: 0x3c040085  lui         $a0, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b92c) {
            ctx->pc = 0x30B940u;
            goto label_30b940;
        }
    }
    ctx->pc = 0x30B934u;
    // 0x30b934: 0xc069324  jal         func_1A4C90
    ctx->pc = 0x30B934u;
    SET_GPR_U32(ctx, 31, 0x30B93Cu);
    ctx->pc = 0x30B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B934u;
    // 0x30b938: 0x2484f280  addiu       $a0, $a0, -0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C90u, 0x30B934u, 0x30B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B93Cu;
label_30b93c:
    // 0x30b93c: 0x0  nop
    ctx->pc = 0x30b93cu;
    // NOP
label_30b940:
    // 0x30b940: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x30b940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x30b944: 0x248410c0  addiu       $a0, $a0, 0x10C0
    ctx->pc = 0x30b944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    // 0x30b948: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30b948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b94c: 0xc061de4  jal         func_187790
    ctx->pc = 0x30B94Cu;
    SET_GPR_U32(ctx, 31, 0x30B954u);
    ctx->pc = 0x30B950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B94Cu;
    // 0x30b950: 0xaf808af8  sw          $zero, -0x7508($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937336), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187790u, 0x30B94Cu, 0x30B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B954u;
label_30b954:
    // 0x30b954: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x30b954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x30b958: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30b958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30b95c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x30b95cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x30b960: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30B960u;
    {
        const bool branch_taken_0x30b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B960u;
        // 0x30b964: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b960) {
            ctx->pc = 0x30B970u;
            goto label_30b970;
        }
    }
    ctx->pc = 0x30B968u;
label_30b968:
    // 0x30b968: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x30b968u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b96c: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x30b96cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
label_30b970:
    // 0x30b970: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x30b970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x30b974: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30B974u;
    {
        const bool branch_taken_0x30b974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b974) {
            ctx->pc = 0x30B9A8u;
            goto label_30b9a8;
        }
    }
    ctx->pc = 0x30B97Cu;
    // 0x30b97c: 0x87838af4  lh          $v1, -0x750C($gp)
    ctx->pc = 0x30b97cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937332)));
    // 0x30b980: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x30b980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x30b984: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x30b984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x30b988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b98c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x30b98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30b990: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x30b990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x30b994: 0x3407fff6  ori         $a3, $zero, 0xFFF6
    ctx->pc = 0x30b994u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65526);
    // 0x30b998: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x30b998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x30b99c: 0xc0c2f14  jal         func_30BC50
    ctx->pc = 0x30B99Cu;
    SET_GPR_U32(ctx, 31, 0x30B9A4u);
    ctx->pc = 0x30B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B99Cu;
    // 0x30b9a0: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BC50u, 0x30B99Cu, 0x30B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B9A4u;
label_30b9a4:
    // 0x30b9a4: 0x0  nop
    ctx->pc = 0x30b9a4u;
    // NOP
label_30b9a8:
    // 0x30b9a8: 0x93858af0  lbu         $a1, -0x7510($gp)
    ctx->pc = 0x30b9a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937328)));
    // 0x30b9ac: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x30b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x30b9b0: 0xc061de4  jal         func_187790
    ctx->pc = 0x30B9B0u;
    SET_GPR_U32(ctx, 31, 0x30B9B8u);
    ctx->pc = 0x30B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B9B0u;
    // 0x30b9b4: 0x248410c0  addiu       $a0, $a0, 0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187790u, 0x30B9B0u, 0x30B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B9B8u;
label_30b9b8:
    // 0x30b9b8: 0x8f858af8  lw          $a1, -0x7508($gp)
    ctx->pc = 0x30b9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937336)));
    // 0x30b9bc: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x30B9BCu;
    {
        const bool branch_taken_0x30b9bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b9bc) {
            ctx->pc = 0x30B9F8u;
            goto label_30b9f8;
        }
    }
    ctx->pc = 0x30B9C4u;
    // 0x30b9c4: 0x87848af0  lh          $a0, -0x7510($gp)
    ctx->pc = 0x30b9c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937328)));
    // 0x30b9c8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B9C8u;
    {
        const bool branch_taken_0x30b9c8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x30B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9C8u;
        // 0x30b9cc: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9c8) {
            ctx->pc = 0x30B9D8u;
            goto label_30b9d8;
        }
    }
    ctx->pc = 0x30B9D0u;
    // 0x30b9d0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x30b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30b9d4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x30b9d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_30b9d8:
    // 0x30b9d8: 0xa0a30068  sb          $v1, 0x68($a1)
    ctx->pc = 0x30b9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 104), (uint8_t)GPR_U32(ctx, 3));
    // 0x30b9dc: 0x87838af0  lh          $v1, -0x7510($gp)
    ctx->pc = 0x30b9dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937328)));
    // 0x30b9e0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B9E0u;
    {
        const bool branch_taken_0x30b9e0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x30B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9E0u;
        // 0x30b9e4: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9e0) {
            ctx->pc = 0x30B9F0u;
            goto label_30b9f0;
        }
    }
    ctx->pc = 0x30B9E8u;
    // 0x30b9e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30b9ec: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x30b9ecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_30b9f0:
    // 0x30b9f0: 0x8f838af8  lw          $v1, -0x7508($gp)
    ctx->pc = 0x30b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937336)));
    // 0x30b9f4: 0xa0640069  sb          $a0, 0x69($v1)
    ctx->pc = 0x30b9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 105), (uint8_t)GPR_U32(ctx, 4));
label_30b9f8:
    // 0x30b9f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30b9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b9fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30b9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ba00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30ba00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ba04: 0x3e00008  jr          $ra
    ctx->pc = 0x30BA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA04u;
        // 0x30ba08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BA0Cu;
}
