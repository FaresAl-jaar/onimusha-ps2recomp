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

// Function: sub_001873C0
// Address: 0x1873c0 - 0x187550
void sub_001873C0_0x1873c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001873C0_0x1873c0");
#endif

    switch (ctx->pc) {
        case 0x1873f8u: goto label_1873f8;
        case 0x18740cu: goto label_18740c;
        case 0x187430u: goto label_187430;
        case 0x18747cu: goto label_18747c;
        case 0x18748cu: goto label_18748c;
        case 0x1874b0u: goto label_1874b0;
        case 0x1874dcu: goto label_1874dc;
        case 0x1874f0u: goto label_1874f0;
        case 0x187508u: goto label_187508;
        case 0x187514u: goto label_187514;
        default: break;
    }

    ctx->pc = 0x1873c0u;

    // 0x1873c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1873c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1873c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1873c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1873c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1873c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1873cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1873ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1873d0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1873d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1873d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1873d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1873d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1873d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1873dc: 0x3c14007e  lui         $s4, 0x7E
    ctx->pc = 0x1873dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)126 << 16));
    // 0x1873e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1873e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1873e4: 0x26946ae8  addiu       $s4, $s4, 0x6AE8
    ctx->pc = 0x1873e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 27368));
    // 0x1873e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1873e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1873ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1873ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1873f0: 0xc04c010  jal         func_130040
    ctx->pc = 0x1873F0u;
    SET_GPR_U32(ctx, 31, 0x1873F8u);
    ctx->pc = 0x1873F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1873F0u;
    // 0x1873f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130040u, 0x1873F0u, 0x1873F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1873F8u;
label_1873f8:
    // 0x1873f8: 0x2453ff80  addiu       $s3, $v0, -0x80
    ctx->pc = 0x1873f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x1873fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1873fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187400: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x187400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187404: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x187404u;
    SET_GPR_U32(ctx, 31, 0x18740Cu);
    ctx->pc = 0x187408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187404u;
    // 0x187408: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x187404u, 0x18740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18740Cu;
label_18740c:
    // 0x18740c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18740cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187410: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x187410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x187414: 0x902295a1  lbu         $v0, -0x6A5F($at)
    ctx->pc = 0x187414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x187418: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x187418u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18741c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x18741cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x187420: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x187420u;
    {
        const bool branch_taken_0x187420 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x187424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187420u;
        // 0x187424: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187420) {
            ctx->pc = 0x1874D0u;
            goto label_1874d0;
        }
    }
    ctx->pc = 0x187428u;
    // 0x187428: 0x3c100081  lui         $s0, 0x81
    ctx->pc = 0x187428u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)129 << 16));
    // 0x18742c: 0x261095a0  addiu       $s0, $s0, -0x6A60
    ctx->pc = 0x18742cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940064));
label_187430:
    // 0x187430: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x187430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x187434: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x187434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x187438: 0x24020911  addiu       $v0, $zero, 0x911
    ctx->pc = 0x187438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2321));
    // 0x18743c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18743Cu;
    {
        const bool branch_taken_0x18743c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18743Cu;
        // 0x187440: 0x26070030  addiu       $a3, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18743c) {
            ctx->pc = 0x187460u;
            goto label_187460;
        }
    }
    ctx->pc = 0x187444u;
    // 0x187444: 0x2402080b  addiu       $v0, $zero, 0x80B
    ctx->pc = 0x187444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    // 0x187448: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187448u;
    {
        const bool branch_taken_0x187448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187448u;
        // 0x18744c: 0x2402070b  addiu       $v0, $zero, 0x70B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1803));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187448) {
            ctx->pc = 0x187460u;
            goto label_187460;
        }
    }
    ctx->pc = 0x187450u;
    // 0x187450: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187450u;
    {
        const bool branch_taken_0x187450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187450) {
            ctx->pc = 0x187460u;
            goto label_187460;
        }
    }
    ctx->pc = 0x187458u;
    // 0x187458: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x187458u;
    {
        const bool branch_taken_0x187458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187458) {
            ctx->pc = 0x187498u;
            goto label_187498;
        }
    }
    ctx->pc = 0x187460u;
label_187460:
    // 0x187460: 0x8ce60078  lw          $a2, 0x78($a3)
    ctx->pc = 0x187460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 120)));
    // 0x187464: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x187464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x187468: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x187468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18746c: 0x8c28fc98  lw          $t0, -0x368($at)
    ctx->pc = 0x18746cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81FC98u));
    // 0x187470: 0x8ce7008c  lw          $a3, 0x8C($a3)
    ctx->pc = 0x187470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x187474: 0xc061d54  jal         func_187550
    ctx->pc = 0x187474u;
    SET_GPR_U32(ctx, 31, 0x18747Cu);
    ctx->pc = 0x187478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187474u;
    // 0x187478: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187550u, 0x187474u, 0x18747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18747Cu;
label_18747c:
    // 0x18747c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x18747cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x187480: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x187480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187484: 0xc05e390  jal         func_178E40
    ctx->pc = 0x187484u;
    SET_GPR_U32(ctx, 31, 0x18748Cu);
    ctx->pc = 0x187488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187484u;
    // 0x187488: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x187484u, 0x18748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18748Cu;
label_18748c:
    // 0x18748c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18748Cu;
    {
        const bool branch_taken_0x18748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18748c) {
            ctx->pc = 0x1874B8u;
            goto label_1874b8;
        }
    }
    ctx->pc = 0x187494u;
    // 0x187494: 0x0  nop
    ctx->pc = 0x187494u;
    // NOP
label_187498:
    // 0x187498: 0x8ce60078  lw          $a2, 0x78($a3)
    ctx->pc = 0x187498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 120)));
    // 0x18749c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x18749cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1874a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874a4: 0x8ce7008c  lw          $a3, 0x8C($a3)
    ctx->pc = 0x1874a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x1874a8: 0xc061d54  jal         func_187550
    ctx->pc = 0x1874A8u;
    SET_GPR_U32(ctx, 31, 0x1874B0u);
    ctx->pc = 0x1874ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1874A8u;
    // 0x1874ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187550u, 0x1874A8u, 0x1874B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1874B0u;
label_1874b0:
    // 0x1874b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1874b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874b4: 0x0  nop
    ctx->pc = 0x1874b4u;
    // NOP
label_1874b8:
    // 0x1874b8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1874b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1874bc: 0x902295a1  lbu         $v0, -0x6A5F($at)
    ctx->pc = 0x1874bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8095A1u));
    // 0x1874c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1874c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1874c4: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1874c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1874c8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1874C8u;
    {
        const bool branch_taken_0x1874c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1874CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874C8u;
        // 0x1874cc: 0x261022b0  addiu       $s0, $s0, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1874c8) {
            ctx->pc = 0x187430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187430;
        }
    }
    ctx->pc = 0x1874D0u;
label_1874d0:
    // 0x1874d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1874d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874d4: 0xc0631dc  jal         func_18C770
    ctx->pc = 0x1874D4u;
    SET_GPR_U32(ctx, 31, 0x1874DCu);
    ctx->pc = 0x1874D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1874D4u;
    // 0x1874d8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C770u, 0x1874D4u, 0x1874DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1874DCu;
label_1874dc:
    // 0x1874dc: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1874dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1874e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1874e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1874e4: 0x2623023  subu        $a2, $s3, $v0
    ctx->pc = 0x1874e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1874e8: 0xc04bffc  jal         func_12FFF0
    ctx->pc = 0x1874E8u;
    SET_GPR_U32(ctx, 31, 0x1874F0u);
    ctx->pc = 0x1874ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1874E8u;
    // 0x1874ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FFF0u, 0x1874E8u, 0x1874F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1874F0u;
label_1874f0:
    // 0x1874f0: 0x8ed00318  lw          $s0, 0x318($s6)
    ctx->pc = 0x1874f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 792)));
    // 0x1874f4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1874F4u;
    {
        const bool branch_taken_0x1874f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1874f4) {
            ctx->pc = 0x187528u;
            goto label_187528;
        }
    }
    ctx->pc = 0x1874FCu;
    // 0x1874fc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1874fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187500: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x187500u;
    {
        const bool branch_taken_0x187500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187500) {
            ctx->pc = 0x187528u;
            goto label_187528;
        }
    }
    ctx->pc = 0x187508u;
label_187508:
    // 0x187508: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x187508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x18750c: 0xc05f98c  jal         func_17E630
    ctx->pc = 0x18750Cu;
    SET_GPR_U32(ctx, 31, 0x187514u);
    ctx->pc = 0x187510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18750Cu;
    // 0x187510: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E630u, 0x18750Cu, 0x187514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187514u;
label_187514:
    // 0x187514: 0x261001a0  addiu       $s0, $s0, 0x1A0
    ctx->pc = 0x187514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x187518: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x187518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18751c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18751Cu;
    {
        const bool branch_taken_0x18751c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18751c) {
            ctx->pc = 0x187508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187508;
        }
    }
    ctx->pc = 0x187524u;
    // 0x187524: 0x0  nop
    ctx->pc = 0x187524u;
    // NOP
label_187528:
    // 0x187528: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x187528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18752c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18752cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x187530: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x187530u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x187534: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x187534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187538: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x187538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18753c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18753cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x187544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187548: 0x3e00008  jr          $ra
    ctx->pc = 0x187548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187548u;
        // 0x18754c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187550u;
}
