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

// Function: sub_003BE710
// Address: 0x3be710 - 0x3be860
void sub_003BE710_0x3be710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE710_0x3be710");
#endif

    switch (ctx->pc) {
        case 0x3be758u: goto label_3be758;
        case 0x3be768u: goto label_3be768;
        case 0x3be778u: goto label_3be778;
        case 0x3be7a4u: goto label_3be7a4;
        case 0x3be7ccu: goto label_3be7cc;
        case 0x3be7e0u: goto label_3be7e0;
        case 0x3be80cu: goto label_3be80c;
        case 0x3be834u: goto label_3be834;
        case 0x3be840u: goto label_3be840;
        case 0x3be850u: goto label_3be850;
        default: break;
    }

    ctx->pc = 0x3be710u;

    // 0x3be710: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3be710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3be714: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3be714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3be718: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3be718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3be71c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3be71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3be720: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3be720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3be724: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3be724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3be728: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x3be728u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3be72c: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x3BE72Cu;
    {
        const bool branch_taken_0x3be72c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE72Cu;
        // 0x3be730: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be72c) {
            ctx->pc = 0x3BE850u;
            goto label_3be850;
        }
    }
    ctx->pc = 0x3BE734u;
    // 0x3be734: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3be734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3be738: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3be738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3be73c: 0x24a52d60  addiu       $a1, $a1, 0x2D60
    ctx->pc = 0x3be73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11616));
    // 0x3be740: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3be740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3be744: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3be744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3be748: 0x600008  jr          $v1
    ctx->pc = 0x3BE748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3BE750u: goto label_3be750;
            case 0x3BE760u: goto label_3be760;
            case 0x3BE770u: goto label_3be770;
            case 0x3BE780u: goto label_3be780;
            case 0x3BE7D8u: goto label_3be7d8;
            case 0x3BE7E8u: goto label_3be7e8;
            case 0x3BE848u: goto label_3be848;
            case 0x3BE850u: goto label_3be850;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE748u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3BE750u;
label_3be750:
    // 0x3be750: 0xc0ef948  jal         func_3BE520
    ctx->pc = 0x3BE750u;
    SET_GPR_U32(ctx, 31, 0x3BE758u);
    ctx->pc = 0x3BE520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE520u, 0x3BE750u, 0x3BE758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE758u;
label_3be758:
    // 0x3be758: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3BE758u;
    {
        const bool branch_taken_0x3be758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be758) {
            ctx->pc = 0x3BE850u;
            goto label_3be850;
        }
    }
    ctx->pc = 0x3BE760u;
label_3be760:
    // 0x3be760: 0xc0ef964  jal         func_3BE590
    ctx->pc = 0x3BE760u;
    SET_GPR_U32(ctx, 31, 0x3BE768u);
    ctx->pc = 0x3BE590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE590u, 0x3BE760u, 0x3BE768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE768u;
label_3be768:
    // 0x3be768: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3BE768u;
    {
        const bool branch_taken_0x3be768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be768) {
            ctx->pc = 0x3BE850u;
            goto label_3be850;
        }
    }
    ctx->pc = 0x3BE770u;
label_3be770:
    // 0x3be770: 0xc0ef92c  jal         func_3BE4B0
    ctx->pc = 0x3BE770u;
    SET_GPR_U32(ctx, 31, 0x3BE778u);
    ctx->pc = 0x3BE4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE4B0u, 0x3BE770u, 0x3BE778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE778u;
label_3be778:
    // 0x3be778: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3BE778u;
    {
        const bool branch_taken_0x3be778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be778) {
            ctx->pc = 0x3BE850u;
            goto label_3be850;
        }
    }
    ctx->pc = 0x3BE780u;
label_3be780:
    // 0x3be780: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3be780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3be784: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3be784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3be788: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BE788u;
    {
        const bool branch_taken_0x3be788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE788u;
        // 0x3be78c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be788) {
            ctx->pc = 0x3BE7B0u;
            goto label_3be7b0;
        }
    }
    ctx->pc = 0x3BE790u;
    // 0x3be790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be794: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x3be794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3be798: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be79c: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BE79Cu;
    SET_GPR_U32(ctx, 31, 0x3BE7A4u);
    ctx->pc = 0x3BE7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE79Cu;
    // 0x3be7a0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BE79Cu, 0x3BE7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE7A4u;
label_3be7a4:
    // 0x3be7a4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3BE7A4u;
    {
        const bool branch_taken_0x3be7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be7a4) {
            ctx->pc = 0x3BE850u;
            goto label_3be850;
        }
    }
    ctx->pc = 0x3BE7ACu;
    // 0x3be7ac: 0x0  nop
    ctx->pc = 0x3be7acu;
    // NOP
label_3be7b0:
    // 0x3be7b0: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3be7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3be7b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3be7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be7b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be7bc: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x3be7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3be7c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be7c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be7c4: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BE7C4u;
    SET_GPR_U32(ctx, 31, 0x3BE7CCu);
    ctx->pc = 0x3BE7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE7C4u;
    // 0x3be7c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BE7C4u, 0x3BE7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE7CCu;
label_3be7cc:
    // 0x3be7cc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3BE7CCu;
    {
        const bool branch_taken_0x3be7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be7cc) {
            ctx->pc = 0x3BE850u;
            goto label_3be850;
        }
    }
    ctx->pc = 0x3BE7D4u;
    // 0x3be7d4: 0x0  nop
    ctx->pc = 0x3be7d4u;
    // NOP
label_3be7d8:
    // 0x3be7d8: 0xc0ef9a4  jal         func_3BE690
    ctx->pc = 0x3BE7D8u;
    SET_GPR_U32(ctx, 31, 0x3BE7E0u);
    ctx->pc = 0x3BE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE690u, 0x3BE7D8u, 0x3BE7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE7E0u;
label_3be7e0:
    // 0x3be7e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3BE7E0u;
    {
        const bool branch_taken_0x3be7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be7e0) {
            ctx->pc = 0x3BE850u;
            goto label_3be850;
        }
    }
    ctx->pc = 0x3BE7E8u;
label_3be7e8:
    // 0x3be7e8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x3be7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3be7ec: 0x240408c7  addiu       $a0, $zero, 0x8C7
    ctx->pc = 0x3be7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2247));
    // 0x3be7f0: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BE7F0u;
    {
        const bool branch_taken_0x3be7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3BE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7F0u;
        // 0x3be7f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be7f0) {
            ctx->pc = 0x3BE818u;
            goto label_3be818;
        }
    }
    ctx->pc = 0x3BE7F8u;
    // 0x3be7f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be7fc: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x3be7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3be800: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be800u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be804: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3BE804u;
    SET_GPR_U32(ctx, 31, 0x3BE80Cu);
    ctx->pc = 0x3BE808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE804u;
    // 0x3be808: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3BE804u, 0x3BE80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE80Cu;
label_3be80c:
    // 0x3be80c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3BE80Cu;
    {
        const bool branch_taken_0x3be80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be80c) {
            ctx->pc = 0x3BE838u;
            goto label_3be838;
        }
    }
    ctx->pc = 0x3BE814u;
    // 0x3be814: 0x0  nop
    ctx->pc = 0x3be814u;
    // NOP
label_3be818:
    // 0x3be818: 0x24040c50  addiu       $a0, $zero, 0xC50
    ctx->pc = 0x3be818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3152));
    // 0x3be81c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3be81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3be820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be824: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x3be824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3be828: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3be828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be82c: 0xc0d6dd8  jal         func_35B760
    ctx->pc = 0x3BE82Cu;
    SET_GPR_U32(ctx, 31, 0x3BE834u);
    ctx->pc = 0x3BE830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE82Cu;
    // 0x3be830: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B760u, 0x3BE82Cu, 0x3BE834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE834u;
label_3be834:
    // 0x3be834: 0x0  nop
    ctx->pc = 0x3be834u;
    // NOP
label_3be838:
    // 0x3be838: 0xc0ef964  jal         func_3BE590
    ctx->pc = 0x3BE838u;
    SET_GPR_U32(ctx, 31, 0x3BE840u);
    ctx->pc = 0x3BE83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE838u;
    // 0x3be83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE590u, 0x3BE838u, 0x3BE840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE840u;
label_3be840:
    // 0x3be840: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BE840u;
    {
        const bool branch_taken_0x3be840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be840) {
            ctx->pc = 0x3BE850u;
            goto label_3be850;
        }
    }
    ctx->pc = 0x3BE848u;
label_3be848:
    // 0x3be848: 0xc0ef984  jal         func_3BE610
    ctx->pc = 0x3BE848u;
    SET_GPR_U32(ctx, 31, 0x3BE850u);
    ctx->pc = 0x3BE610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE610u, 0x3BE848u, 0x3BE850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE850u;
label_3be850:
    // 0x3be850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3be850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3be854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3be854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be858: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE858u;
        // 0x3be85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE860u;
}
