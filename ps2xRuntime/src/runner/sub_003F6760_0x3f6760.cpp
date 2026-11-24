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

// Function: sub_003F6760
// Address: 0x3f6760 - 0x3f6950
void sub_003F6760_0x3f6760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6760_0x3f6760");
#endif

    switch (ctx->pc) {
        case 0x3f67d0u: goto label_3f67d0;
        case 0x3f67e4u: goto label_3f67e4;
        case 0x3f67f4u: goto label_3f67f4;
        case 0x3f6804u: goto label_3f6804;
        case 0x3f6838u: goto label_3f6838;
        case 0x3f684cu: goto label_3f684c;
        case 0x3f685cu: goto label_3f685c;
        case 0x3f686cu: goto label_3f686c;
        case 0x3f68a8u: goto label_3f68a8;
        case 0x3f68c4u: goto label_3f68c4;
        case 0x3f68dcu: goto label_3f68dc;
        case 0x3f68e8u: goto label_3f68e8;
        case 0x3f68f8u: goto label_3f68f8;
        case 0x3f691cu: goto label_3f691c;
        case 0x3f6930u: goto label_3f6930;
        case 0x3f6940u: goto label_3f6940;
        default: break;
    }

    ctx->pc = 0x3f6760u;

    // 0x3f6760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f6760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f6764: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f6764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f6768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f6768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f676c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f6770: 0x90850021  lbu         $a1, 0x21($a0)
    ctx->pc = 0x3f6770u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x3f6774: 0x10a30070  beq         $a1, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x3F6774u;
    {
        const bool branch_taken_0x3f6774 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6774u;
        // 0x3f6778: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6774) {
            ctx->pc = 0x3F6938u;
            goto label_3f6938;
        }
    }
    ctx->pc = 0x3F677Cu;
    // 0x3f677c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f677cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f6780: 0x10a3005f  beq         $a1, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x3F6780u;
    {
        const bool branch_taken_0x3f6780 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6780u;
        // 0x3f6784: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6780) {
            ctx->pc = 0x3F6900u;
            goto label_3f6900;
        }
    }
    ctx->pc = 0x3F6788u;
    // 0x3f6788: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3F6788u;
    {
        const bool branch_taken_0x3f6788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f6788) {
            ctx->pc = 0x3F6840u;
            goto label_3f6840;
        }
    }
    ctx->pc = 0x3F6790u;
    // 0x3f6790: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f6790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f6794: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F6794u;
    {
        const bool branch_taken_0x3f6794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f6794) {
            ctx->pc = 0x3F67D8u;
            goto label_3f67d8;
        }
    }
    ctx->pc = 0x3F679Cu;
    // 0x3f679c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F679Cu;
    {
        const bool branch_taken_0x3f679c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f679c) {
            ctx->pc = 0x3F67B0u;
            goto label_3f67b0;
        }
    }
    ctx->pc = 0x3F67A4u;
    // 0x3f67a4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x3F67A4u;
    {
        const bool branch_taken_0x3f67a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f67a4) {
            ctx->pc = 0x3F6940u;
            goto label_3f6940;
        }
    }
    ctx->pc = 0x3F67ACu;
    // 0x3f67ac: 0x0  nop
    ctx->pc = 0x3f67acu;
    // NOP
label_3f67b0:
    // 0x3f67b0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3f67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f67b4: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x3f67b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f67b8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3f67b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3f67bc: 0x8c261288  lw          $a2, 0x1288($at)
    ctx->pc = 0x3f67bcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x911288u));
    // 0x3f67c0: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x3f67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x3f67c4: 0x34450051  ori         $a1, $v0, 0x51
    ctx->pc = 0x3f67c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)81);
    // 0x3f67c8: 0xc0dc810  jal         func_372040
    ctx->pc = 0x3F67C8u;
    SET_GPR_U32(ctx, 31, 0x3F67D0u);
    ctx->pc = 0x3F67CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F67C8u;
    // 0x3f67cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x3F67C8u, 0x3F67D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F67D0u;
label_3f67d0:
    // 0x3f67d0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x3F67D0u;
    {
        const bool branch_taken_0x3f67d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f67d0) {
            ctx->pc = 0x3F6940u;
            goto label_3f6940;
        }
    }
    ctx->pc = 0x3F67D8u;
label_3f67d8:
    // 0x3f67d8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3f67d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3f67dc: 0xc095150  jal         func_254540
    ctx->pc = 0x3F67DCu;
    SET_GPR_U32(ctx, 31, 0x3F67E4u);
    ctx->pc = 0x3F67E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F67DCu;
    // 0x3f67e0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3F67DCu, 0x3F67E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F67E4u;
label_3f67e4:
    // 0x3f67e4: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3F67E4u;
    {
        const bool branch_taken_0x3f67e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F67E4u;
        // 0x3f67e8: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f67e4) {
            ctx->pc = 0x3F6940u;
            goto label_3f6940;
        }
    }
    ctx->pc = 0x3F67ECu;
    // 0x3f67ec: 0xc095154  jal         func_254550
    ctx->pc = 0x3F67ECu;
    SET_GPR_U32(ctx, 31, 0x3F67F4u);
    ctx->pc = 0x3F67F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F67ECu;
    // 0x3f67f0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x3F67ECu, 0x3F67F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F67F4u;
label_3f67f4:
    // 0x3f67f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F67F4u;
    {
        const bool branch_taken_0x3f67f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F67F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F67F4u;
        // 0x3f67f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f67f4) {
            ctx->pc = 0x3F6810u;
            goto label_3f6810;
        }
    }
    ctx->pc = 0x3F67FCu;
    // 0x3f67fc: 0xc0fd97c  jal         func_3F65F0
    ctx->pc = 0x3F67FCu;
    SET_GPR_U32(ctx, 31, 0x3F6804u);
    ctx->pc = 0x3F65F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F65F0u, 0x3F67FCu, 0x3F6804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6804u;
label_3f6804:
    // 0x3f6804: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3F6804u;
    {
        const bool branch_taken_0x3f6804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6804) {
            ctx->pc = 0x3F6940u;
            goto label_3f6940;
        }
    }
    ctx->pc = 0x3F680Cu;
    // 0x3f680c: 0x0  nop
    ctx->pc = 0x3f680cu;
    // NOP
label_3f6810:
    // 0x3f6810: 0x92030021  lbu         $v1, 0x21($s0)
    ctx->pc = 0x3f6810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x3f6814: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x3f6814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x3f6818: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3f6818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3f681c: 0x34450052  ori         $a1, $v0, 0x52
    ctx->pc = 0x3f681cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)82);
    // 0x3f6820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f6820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6824: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3f6824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f6828: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x3f6828u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f682c: 0x8c261288  lw          $a2, 0x1288($at)
    ctx->pc = 0x3f682cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x911288u));
    // 0x3f6830: 0xc0dc810  jal         func_372040
    ctx->pc = 0x3F6830u;
    SET_GPR_U32(ctx, 31, 0x3F6838u);
    ctx->pc = 0x3F6834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6830u;
    // 0x3f6834: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372040u, 0x3F6830u, 0x3F6838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6838u;
label_3f6838:
    // 0x3f6838: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3F6838u;
    {
        const bool branch_taken_0x3f6838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6838) {
            ctx->pc = 0x3F6940u;
            goto label_3f6940;
        }
    }
    ctx->pc = 0x3F6840u;
label_3f6840:
    // 0x3f6840: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3f6840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3f6844: 0xc095150  jal         func_254540
    ctx->pc = 0x3F6844u;
    SET_GPR_U32(ctx, 31, 0x3F684Cu);
    ctx->pc = 0x3F6848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6844u;
    // 0x3f6848: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3F6844u, 0x3F684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F684Cu;
label_3f684c:
    // 0x3f684c: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3F684Cu;
    {
        const bool branch_taken_0x3f684c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F684Cu;
        // 0x3f6850: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f684c) {
            ctx->pc = 0x3F6940u;
            goto label_3f6940;
        }
    }
    ctx->pc = 0x3F6854u;
    // 0x3f6854: 0xc095154  jal         func_254550
    ctx->pc = 0x3F6854u;
    SET_GPR_U32(ctx, 31, 0x3F685Cu);
    ctx->pc = 0x3F6858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6854u;
    // 0x3f6858: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x3F6854u, 0x3F685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F685Cu;
label_3f685c:
    // 0x3f685c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F685Cu;
    {
        const bool branch_taken_0x3f685c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F685Cu;
        // 0x3f6860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f685c) {
            ctx->pc = 0x3F6878u;
            goto label_3f6878;
        }
    }
    ctx->pc = 0x3F6864u;
    // 0x3f6864: 0xc0fd97c  jal         func_3F65F0
    ctx->pc = 0x3F6864u;
    SET_GPR_U32(ctx, 31, 0x3F686Cu);
    ctx->pc = 0x3F65F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F65F0u, 0x3F6864u, 0x3F686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F686Cu;
label_3f686c:
    // 0x3f686c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3F686Cu;
    {
        const bool branch_taken_0x3f686c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f686c) {
            ctx->pc = 0x3F6940u;
            goto label_3f6940;
        }
    }
    ctx->pc = 0x3F6874u;
    // 0x3f6874: 0x0  nop
    ctx->pc = 0x3f6874u;
    // NOP
label_3f6878:
    // 0x3f6878: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x3f6878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x3f687c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3f687cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3f6880: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3f6880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3f6884: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x3f6884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x3f6888: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f6888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f688c: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x3f688cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f6890: 0x8c221284  lw          $v0, 0x1284($at)
    ctx->pc = 0x3f6890u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x911284u));
    // 0x3f6894: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3f6894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f6898: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3f6898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3f689c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3f689cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3f68a0: 0xc0bcfbc  jal         func_2F3EF0
    ctx->pc = 0x3F68A0u;
    SET_GPR_U32(ctx, 31, 0x3F68A8u);
    ctx->pc = 0x3F68A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F68A0u;
    // 0x3f68a4: 0x2367e  dsrl32      $a2, $v0, 25 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3EF0u, 0x3F68A0u, 0x3F68A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F68A8u;
label_3f68a8:
    // 0x3f68a8: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x3f68a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3f68ac: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3f68acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3f68b0: 0x9206000a  lbu         $a2, 0xA($s0)
    ctx->pc = 0x3f68b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3f68b4: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x3f68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x3f68b8: 0x9207000b  lbu         $a3, 0xB($s0)
    ctx->pc = 0x3f68b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3f68bc: 0xc0bce7c  jal         func_2F39F0
    ctx->pc = 0x3F68BCu;
    SET_GPR_U32(ctx, 31, 0x3F68C4u);
    ctx->pc = 0x3F68C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F68BCu;
    // 0x3f68c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39F0u, 0x3F68BCu, 0x3F68C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F68C4u;
label_3f68c4:
    // 0x3f68c4: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3f68c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3f68c8: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x3f68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x3f68cc: 0x8c261288  lw          $a2, 0x1288($at)
    ctx->pc = 0x3f68ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x911288u));
    // 0x3f68d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f68d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f68d4: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x3F68D4u;
    SET_GPR_U32(ctx, 31, 0x3F68DCu);
    ctx->pc = 0x3F68D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F68D4u;
    // 0x3f68d8: 0x34450053  ori         $a1, $v0, 0x53 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)83);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x3F68D4u, 0x3F68DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F68DCu;
label_3f68dc:
    // 0x3f68dc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f68dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3f68e0: 0xc0cbee4  jal         func_32FB90
    ctx->pc = 0x3F68E0u;
    SET_GPR_U32(ctx, 31, 0x3F68E8u);
    ctx->pc = 0x3F68E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F68E0u;
    // 0x3f68e4: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB90u, 0x3F68E0u, 0x3F68E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F68E8u;
label_3f68e8:
    // 0x3f68e8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3f68e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3f68ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3f68ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f68f0: 0xc0cc00c  jal         func_330030
    ctx->pc = 0x3F68F0u;
    SET_GPR_U32(ctx, 31, 0x3F68F8u);
    ctx->pc = 0x3F68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F68F0u;
    // 0x3f68f4: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330030u, 0x3F68F0u, 0x3F68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F68F8u;
label_3f68f8:
    // 0x3f68f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3F68F8u;
    {
        const bool branch_taken_0x3f68f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f68f8) {
            ctx->pc = 0x3F6940u;
            goto label_3f6940;
        }
    }
    ctx->pc = 0x3F6900u;
label_3f6900:
    // 0x3f6900: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3f6900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3f6904: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x3f6904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f6908: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3f6908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3f690c: 0x9206000b  lbu         $a2, 0xB($s0)
    ctx->pc = 0x3f690cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3f6910: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x3f6910u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3f6914: 0xc0bd1d0  jal         func_2F4740
    ctx->pc = 0x3F6914u;
    SET_GPR_U32(ctx, 31, 0x3F691Cu);
    ctx->pc = 0x3F6918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6914u;
    // 0x3f6918: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4740u, 0x3F6914u, 0x3F691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F691Cu;
label_3f691c:
    // 0x3f691c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3f691cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3f6920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f6920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6924: 0x34650021  ori         $a1, $v1, 0x21
    ctx->pc = 0x3f6924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33);
    // 0x3f6928: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x3F6928u;
    SET_GPR_U32(ctx, 31, 0x3F6930u);
    ctx->pc = 0x3F692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6928u;
    // 0x3f692c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x3F6928u, 0x3F6930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6930u;
label_3f6930:
    // 0x3f6930: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F6930u;
    {
        const bool branch_taken_0x3f6930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6930) {
            ctx->pc = 0x3F6940u;
            goto label_3f6940;
        }
    }
    ctx->pc = 0x3F6938u;
label_3f6938:
    // 0x3f6938: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x3F6938u;
    SET_GPR_U32(ctx, 31, 0x3F6940u);
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x3F6938u, 0x3F6940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6940u;
label_3f6940:
    // 0x3f6940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f6940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f6944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f6944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6948: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6948u;
        // 0x3f694c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6950u;
}
