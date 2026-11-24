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

// Function: sub_0038F6E0
// Address: 0x38f6e0 - 0x38f830
void sub_0038F6E0_0x38f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F6E0_0x38f6e0");
#endif

    switch (ctx->pc) {
        case 0x38f6f4u: goto label_38f6f4;
        case 0x38f70cu: goto label_38f70c;
        case 0x38f778u: goto label_38f778;
        case 0x38f788u: goto label_38f788;
        case 0x38f7a8u: goto label_38f7a8;
        case 0x38f7b8u: goto label_38f7b8;
        case 0x38f7c8u: goto label_38f7c8;
        case 0x38f7d8u: goto label_38f7d8;
        case 0x38f7e8u: goto label_38f7e8;
        case 0x38f7fcu: goto label_38f7fc;
        case 0x38f814u: goto label_38f814;
        case 0x38f820u: goto label_38f820;
        default: break;
    }

    ctx->pc = 0x38f6e0u;

    // 0x38f6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38f6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38f6e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38f6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38f6e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38f6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38f6ec: 0xc0e3d40  jal         func_38F500
    ctx->pc = 0x38F6ECu;
    SET_GPR_U32(ctx, 31, 0x38F6F4u);
    ctx->pc = 0x38F6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F6ECu;
    // 0x38f6f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F500u, 0x38F6ECu, 0x38F6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F6F4u;
label_38f6f4:
    // 0x38f6f4: 0x8e0206ac  lw          $v0, 0x6AC($s0)
    ctx->pc = 0x38f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x38f6f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x38f6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x38f6fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38F6FCu;
    {
        const bool branch_taken_0x38f6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F6FCu;
        // 0x38f700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f6fc) {
            ctx->pc = 0x38F710u;
            goto label_38f710;
        }
    }
    ctx->pc = 0x38F704u;
    // 0x38f704: 0xc0e3d8c  jal         func_38F630
    ctx->pc = 0x38F704u;
    SET_GPR_U32(ctx, 31, 0x38F70Cu);
    ctx->pc = 0x38F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F630u, 0x38F704u, 0x38F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F70Cu;
label_38f70c:
    // 0x38f70c: 0x0  nop
    ctx->pc = 0x38f70cu;
    // NOP
label_38f710:
    // 0x38f710: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x38f710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x38f714: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x38f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x38f718: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x38F718u;
    {
        const bool branch_taken_0x38f718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F718u;
        // 0x38f71c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f718) {
            ctx->pc = 0x38F808u;
            goto label_38f808;
        }
    }
    ctx->pc = 0x38F720u;
    // 0x38f720: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x38F720u;
    {
        const bool branch_taken_0x38f720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38f720) {
            ctx->pc = 0x38F7F0u;
            goto label_38f7f0;
        }
    }
    ctx->pc = 0x38F728u;
    // 0x38f728: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x38f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38f72c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x38F72Cu;
    {
        const bool branch_taken_0x38f72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F72Cu;
        // 0x38f730: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f72c) {
            ctx->pc = 0x38F7E0u;
            goto label_38f7e0;
        }
    }
    ctx->pc = 0x38F734u;
    // 0x38f734: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x38F734u;
    {
        const bool branch_taken_0x38f734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38f734) {
            ctx->pc = 0x38F7D0u;
            goto label_38f7d0;
        }
    }
    ctx->pc = 0x38F73Cu;
    // 0x38f73c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x38f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x38f740: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x38F740u;
    {
        const bool branch_taken_0x38f740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F740u;
        // 0x38f744: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f740) {
            ctx->pc = 0x38F7C0u;
            goto label_38f7c0;
        }
    }
    ctx->pc = 0x38F748u;
    // 0x38f748: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38F748u;
    {
        const bool branch_taken_0x38f748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38f748) {
            ctx->pc = 0x38F7B0u;
            goto label_38f7b0;
        }
    }
    ctx->pc = 0x38F750u;
    // 0x38f750: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x38f750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x38f754: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x38F754u;
    {
        const bool branch_taken_0x38f754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38F758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F754u;
        // 0x38f758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f754) {
            ctx->pc = 0x38F7A0u;
            goto label_38f7a0;
        }
    }
    ctx->pc = 0x38F75Cu;
    // 0x38f75c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38F75Cu;
    {
        const bool branch_taken_0x38f75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38f75c) {
            ctx->pc = 0x38F770u;
            goto label_38f770;
        }
    }
    ctx->pc = 0x38F764u;
    // 0x38f764: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x38F764u;
    {
        const bool branch_taken_0x38f764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f764) {
            ctx->pc = 0x38F818u;
            goto label_38f818;
        }
    }
    ctx->pc = 0x38F76Cu;
    // 0x38f76c: 0x0  nop
    ctx->pc = 0x38f76cu;
    // NOP
label_38f770:
    // 0x38f770: 0xc09759c  jal         func_25D670
    ctx->pc = 0x38F770u;
    SET_GPR_U32(ctx, 31, 0x38F778u);
    ctx->pc = 0x38F774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F770u;
    // 0x38f774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D670u, 0x38F770u, 0x38F778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F778u;
label_38f778:
    // 0x38f778: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38F778u;
    {
        const bool branch_taken_0x38f778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F778u;
        // 0x38f77c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f778) {
            ctx->pc = 0x38F790u;
            goto label_38f790;
        }
    }
    ctx->pc = 0x38F780u;
    // 0x38f780: 0xc0e3cf4  jal         func_38F3D0
    ctx->pc = 0x38F780u;
    SET_GPR_U32(ctx, 31, 0x38F788u);
    ctx->pc = 0x38F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F3D0u, 0x38F780u, 0x38F788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F788u;
label_38f788:
    // 0x38f788: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x38F788u;
    {
        const bool branch_taken_0x38f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f788) {
            ctx->pc = 0x38F818u;
            goto label_38f818;
        }
    }
    ctx->pc = 0x38F790u;
label_38f790:
    // 0x38f790: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x38f790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x38f794: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38f794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38f798: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x38F798u;
    {
        const bool branch_taken_0x38f798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F798u;
        // 0x38f79c: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f798) {
            ctx->pc = 0x38F818u;
            goto label_38f818;
        }
    }
    ctx->pc = 0x38F7A0u;
label_38f7a0:
    // 0x38f7a0: 0xc0e3898  jal         func_38E260
    ctx->pc = 0x38F7A0u;
    SET_GPR_U32(ctx, 31, 0x38F7A8u);
    ctx->pc = 0x38F7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F7A0u;
    // 0x38f7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E260u, 0x38F7A0u, 0x38F7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F7A8u;
label_38f7a8:
    // 0x38f7a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x38F7A8u;
    {
        const bool branch_taken_0x38f7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f7a8) {
            ctx->pc = 0x38F818u;
            goto label_38f818;
        }
    }
    ctx->pc = 0x38F7B0u;
label_38f7b0:
    // 0x38f7b0: 0xc0e3990  jal         func_38E640
    ctx->pc = 0x38F7B0u;
    SET_GPR_U32(ctx, 31, 0x38F7B8u);
    ctx->pc = 0x38F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F7B0u;
    // 0x38f7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E640u, 0x38F7B0u, 0x38F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F7B8u;
label_38f7b8:
    // 0x38f7b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x38F7B8u;
    {
        const bool branch_taken_0x38f7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f7b8) {
            ctx->pc = 0x38F818u;
            goto label_38f818;
        }
    }
    ctx->pc = 0x38F7C0u;
label_38f7c0:
    // 0x38f7c0: 0xc0e3a68  jal         func_38E9A0
    ctx->pc = 0x38F7C0u;
    SET_GPR_U32(ctx, 31, 0x38F7C8u);
    ctx->pc = 0x38F7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F7C0u;
    // 0x38f7c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E9A0u, 0x38F7C0u, 0x38F7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F7C8u;
label_38f7c8:
    // 0x38f7c8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x38F7C8u;
    {
        const bool branch_taken_0x38f7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f7c8) {
            ctx->pc = 0x38F818u;
            goto label_38f818;
        }
    }
    ctx->pc = 0x38F7D0u;
label_38f7d0:
    // 0x38f7d0: 0xc0e3ca0  jal         func_38F280
    ctx->pc = 0x38F7D0u;
    SET_GPR_U32(ctx, 31, 0x38F7D8u);
    ctx->pc = 0x38F7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F7D0u;
    // 0x38f7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F280u, 0x38F7D0u, 0x38F7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F7D8u;
label_38f7d8:
    // 0x38f7d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x38F7D8u;
    {
        const bool branch_taken_0x38f7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f7d8) {
            ctx->pc = 0x38F818u;
            goto label_38f818;
        }
    }
    ctx->pc = 0x38F7E0u;
label_38f7e0:
    // 0x38f7e0: 0xc0e3c18  jal         func_38F060
    ctx->pc = 0x38F7E0u;
    SET_GPR_U32(ctx, 31, 0x38F7E8u);
    ctx->pc = 0x38F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F7E0u;
    // 0x38f7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F060u, 0x38F7E0u, 0x38F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F7E8u;
label_38f7e8:
    // 0x38f7e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x38F7E8u;
    {
        const bool branch_taken_0x38f7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f7e8) {
            ctx->pc = 0x38F818u;
            goto label_38f818;
        }
    }
    ctx->pc = 0x38F7F0u;
label_38f7f0:
    // 0x38f7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f7f4: 0xc0e3aec  jal         func_38EBB0
    ctx->pc = 0x38F7F4u;
    SET_GPR_U32(ctx, 31, 0x38F7FCu);
    ctx->pc = 0x38F7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F7F4u;
    // 0x38f7f8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EBB0u, 0x38F7F4u, 0x38F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F7FCu;
label_38f7fc:
    // 0x38f7fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38F7FCu;
    {
        const bool branch_taken_0x38f7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f7fc) {
            ctx->pc = 0x38F818u;
            goto label_38f818;
        }
    }
    ctx->pc = 0x38F804u;
    // 0x38f804: 0x0  nop
    ctx->pc = 0x38f804u;
    // NOP
label_38f808:
    // 0x38f808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f80c: 0xc0e3aec  jal         func_38EBB0
    ctx->pc = 0x38F80Cu;
    SET_GPR_U32(ctx, 31, 0x38F814u);
    ctx->pc = 0x38F810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F80Cu;
    // 0x38f810: 0x2405fff4  addiu       $a1, $zero, -0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EBB0u, 0x38F80Cu, 0x38F814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F814u;
label_38f814:
    // 0x38f814: 0x0  nop
    ctx->pc = 0x38f814u;
    // NOP
label_38f818:
    // 0x38f818: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x38F818u;
    SET_GPR_U32(ctx, 31, 0x38F820u);
    ctx->pc = 0x38F81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F818u;
    // 0x38f81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x38F818u, 0x38F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F820u;
label_38f820:
    // 0x38f820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38f820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38f824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38f824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f828: 0x3e00008  jr          $ra
    ctx->pc = 0x38F828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F828u;
        // 0x38f82c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F830u;
}
