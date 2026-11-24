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

// Function: sub_002F67F0
// Address: 0x2f67f0 - 0x2f6910
void sub_002F67F0_0x2f67f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F67F0_0x2f67f0");
#endif

    switch (ctx->pc) {
        case 0x2f6824u: goto label_2f6824;
        case 0x2f6830u: goto label_2f6830;
        case 0x2f683cu: goto label_2f683c;
        case 0x2f6868u: goto label_2f6868;
        case 0x2f6888u: goto label_2f6888;
        case 0x2f68c0u: goto label_2f68c0;
        case 0x2f68c8u: goto label_2f68c8;
        case 0x2f68dcu: goto label_2f68dc;
        case 0x2f68f8u: goto label_2f68f8;
        default: break;
    }

    ctx->pc = 0x2f67f0u;

    // 0x2f67f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f67f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f67f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f67f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f67f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f67f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f67fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f67fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f6800: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x2f6800u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f6804: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F6804u;
    {
        const bool branch_taken_0x2f6804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6804u;
        // 0x2f6808: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6804) {
            ctx->pc = 0x2F6830u;
            goto label_2f6830;
        }
    }
    ctx->pc = 0x2F680Cu;
    // 0x2f680c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f680cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f6810: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2f6810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2f6814: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f6814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6818: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2f6818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f681c: 0xc0cafac  jal         func_32BEB0
    ctx->pc = 0x2F681Cu;
    SET_GPR_U32(ctx, 31, 0x2F6824u);
    ctx->pc = 0x2F6820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F681Cu;
    // 0x2f6820: 0x24841150  addiu       $a0, $a0, 0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BEB0u, 0x2F681Cu, 0x2F6824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6824u;
label_2f6824:
    // 0x2f6824: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f6824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f6828: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x2F6828u;
    SET_GPR_U32(ctx, 31, 0x2F6830u);
    ctx->pc = 0x2F682Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6828u;
    // 0x2f682c: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x2F6828u, 0x2F6830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6830u;
label_2f6830:
    // 0x2f6830: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2f6830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2f6834: 0xc0cb014  jal         func_32C050
    ctx->pc = 0x2F6834u;
    SET_GPR_U32(ctx, 31, 0x2F683Cu);
    ctx->pc = 0x2F6838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6834u;
    // 0x2f6838: 0x24841150  addiu       $a0, $a0, 0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C050u, 0x2F6834u, 0x2F683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F683Cu;
label_2f683c:
    // 0x2f683c: 0x441002e  bgez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F683Cu;
    {
        const bool branch_taken_0x2f683c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2F6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F683Cu;
        // 0x2f6840: 0x3c010091  lui         $at, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f683c) {
            ctx->pc = 0x2F68F8u;
            goto label_2f68f8;
        }
    }
    ctx->pc = 0x2F6844u;
    // 0x2f6844: 0x8c241168  lw          $a0, 0x1168($at)
    ctx->pc = 0x2f6844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4456)));
    // 0x2f6848: 0x2881ffff  slti        $at, $a0, -0x1
    ctx->pc = 0x2f6848u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x2f684c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F684Cu;
    {
        const bool branch_taken_0x2f684c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f684c) {
            ctx->pc = 0x2F6870u;
            goto label_2f6870;
        }
    }
    ctx->pc = 0x2F6854u;
    // 0x2f6854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6858: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f6858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f685c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2f685cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f6860: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F6860u;
    SET_GPR_U32(ctx, 31, 0x2F6868u);
    ctx->pc = 0x2F6864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6860u;
    // 0x2f6864: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F6860u, 0x2F6868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6868u;
label_2f6868:
    // 0x2f6868: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2F6868u;
    {
        const bool branch_taken_0x2f6868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6868) {
            ctx->pc = 0x2F68F8u;
            goto label_2f68f8;
        }
    }
    ctx->pc = 0x2F6870u;
label_2f6870:
    // 0x2f6870: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f6870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6874: 0x14860006  bne         $a0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6874u;
    {
        const bool branch_taken_0x2f6874 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x2f6874) {
            ctx->pc = 0x2F6890u;
            goto label_2f6890;
        }
    }
    ctx->pc = 0x2F687Cu;
    // 0x2f687c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f687cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6880: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F6880u;
    SET_GPR_U32(ctx, 31, 0x2F6888u);
    ctx->pc = 0x2F6884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6880u;
    // 0x2f6884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F6880u, 0x2F6888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6888u;
label_2f6888:
    // 0x2f6888: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F6888u;
    {
        const bool branch_taken_0x2f6888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6888) {
            ctx->pc = 0x2F68F8u;
            goto label_2f68f8;
        }
    }
    ctx->pc = 0x2F6890u;
label_2f6890:
    // 0x2f6890: 0x30830c00  andi        $v1, $a0, 0xC00
    ctx->pc = 0x2f6890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3072);
    // 0x2f6894: 0x24020c00  addiu       $v0, $zero, 0xC00
    ctx->pc = 0x2f6894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x2f6898: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F6898u;
    {
        const bool branch_taken_0x2f6898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6898u;
        // 0x2f689c: 0x30820cff  andi        $v0, $a0, 0xCFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3327);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6898) {
            ctx->pc = 0x2F68E8u;
            goto label_2f68e8;
        }
    }
    ctx->pc = 0x2F68A0u;
    // 0x2f68a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f68a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f68a4: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2f68a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2f68a8: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x2f68a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f68ac: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x2f68acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x2f68b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f68b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f68b4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2f68b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f68b8: 0xc0bce7c  jal         func_2F39F0
    ctx->pc = 0x2F68B8u;
    SET_GPR_U32(ctx, 31, 0x2F68C0u);
    ctx->pc = 0x2F68BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F68B8u;
    // 0x2f68bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39F0u, 0x2F68B8u, 0x2F68C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F68C0u;
label_2f68c0:
    // 0x2f68c0: 0xc09c84c  jal         func_272130
    ctx->pc = 0x2F68C0u;
    SET_GPR_U32(ctx, 31, 0x2F68C8u);
    ctx->pc = 0x2F68C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F68C0u;
    // 0x2f68c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272130u, 0x2F68C0u, 0x2F68C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F68C8u;
label_2f68c8:
    // 0x2f68c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f68c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f68cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f68ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f68d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f68d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f68d4: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F68D4u;
    SET_GPR_U32(ctx, 31, 0x2F68DCu);
    ctx->pc = 0x2F68D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F68D4u;
    // 0x2f68d8: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F68D4u, 0x2F68DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F68DCu;
label_2f68dc:
    // 0x2f68dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F68DCu;
    {
        const bool branch_taken_0x2f68dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f68dc) {
            ctx->pc = 0x2F68F8u;
            goto label_2f68f8;
        }
    }
    ctx->pc = 0x2F68E4u;
    // 0x2f68e4: 0x0  nop
    ctx->pc = 0x2f68e4u;
    // NOP
label_2f68e8:
    // 0x2f68e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f68e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f68ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f68ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f68f0: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F68F0u;
    SET_GPR_U32(ctx, 31, 0x2F68F8u);
    ctx->pc = 0x2F68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F68F0u;
    // 0x2f68f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F68F0u, 0x2F68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F68F8u;
label_2f68f8:
    // 0x2f68f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f68f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f68fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f68fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f6904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6908: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6908u;
        // 0x2f690c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6910u;
}
