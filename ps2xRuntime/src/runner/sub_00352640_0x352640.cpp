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

// Function: sub_00352640
// Address: 0x352640 - 0x352820
void sub_00352640_0x352640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352640_0x352640");
#endif

    switch (ctx->pc) {
        case 0x3526bcu: goto label_3526bc;
        case 0x3526f8u: goto label_3526f8;
        case 0x352734u: goto label_352734;
        case 0x352754u: goto label_352754;
        case 0x352790u: goto label_352790;
        case 0x3527c4u: goto label_3527c4;
        case 0x35280cu: goto label_35280c;
        default: break;
    }

    ctx->pc = 0x352640u;

    // 0x352640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x352644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x352644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x352648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x352648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35264c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35264cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352650: 0x90840008  lbu         $a0, 0x8($a0)
    ctx->pc = 0x352650u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x352654: 0x1080006e  beqz        $a0, . + 4 + (0x6E << 2)
    ctx->pc = 0x352654u;
    {
        const bool branch_taken_0x352654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x352654) {
            ctx->pc = 0x352810u;
            goto label_352810;
        }
    }
    ctx->pc = 0x35265Cu;
    // 0x35265c: 0x9205000a  lbu         $a1, 0xA($s0)
    ctx->pc = 0x35265cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x352660: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x352660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x352664: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x352664u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x352668: 0x14600069  bnez        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x352668u;
    {
        const bool branch_taken_0x352668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352668u;
        // 0x35266c: 0x2c810007  sltiu       $at, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x352668) {
            ctx->pc = 0x352810u;
            goto label_352810;
        }
    }
    ctx->pc = 0x352670u;
    // 0x352670: 0x10200067  beqz        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x352670u;
    {
        const bool branch_taken_0x352670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x352674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352670u;
        // 0x352674: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352670) {
            ctx->pc = 0x352810u;
            goto label_352810;
        }
    }
    ctx->pc = 0x352678u;
    // 0x352678: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x352678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x35267c: 0x2484f850  addiu       $a0, $a0, -0x7B0
    ctx->pc = 0x35267cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965328));
    // 0x352680: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x352680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x352684: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x352684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352688: 0x600008  jr          $v1
    ctx->pc = 0x352688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x352690u: goto label_352690;
            case 0x3526C8u: goto label_3526c8;
            case 0x352700u: goto label_352700;
            case 0x352760u: goto label_352760;
            case 0x352798u: goto label_352798;
            case 0x3527D0u: goto label_3527d0;
            case 0x352810u: goto label_352810;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352688u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x352690u;
label_352690:
    // 0x352690: 0x92040009  lbu         $a0, 0x9($s0)
    ctx->pc = 0x352690u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x352694: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x352694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352698: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x352698u;
    {
        const bool branch_taken_0x352698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x352698) {
            ctx->pc = 0x3526A8u;
            goto label_3526a8;
        }
    }
    ctx->pc = 0x3526A0u;
    // 0x3526a0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x3526A0u;
    {
        const bool branch_taken_0x3526a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3526a0) {
            ctx->pc = 0x352810u;
            goto label_352810;
        }
    }
    ctx->pc = 0x3526A8u;
label_3526a8:
    // 0x3526a8: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x3526a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3526ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3526acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3526b0: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x3526b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3526b4: 0xc0d47f8  jal         func_351FE0
    ctx->pc = 0x3526B4u;
    SET_GPR_U32(ctx, 31, 0x3526BCu);
    ctx->pc = 0x3526B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3526B4u;
    // 0x3526b8: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x351FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351FE0u, 0x3526B4u, 0x3526BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3526BCu;
label_3526bc:
    // 0x3526bc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3526BCu;
    {
        const bool branch_taken_0x3526bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3526bc) {
            ctx->pc = 0x352810u;
            goto label_352810;
        }
    }
    ctx->pc = 0x3526C4u;
    // 0x3526c4: 0x0  nop
    ctx->pc = 0x3526c4u;
    // NOP
label_3526c8:
    // 0x3526c8: 0x92040009  lbu         $a0, 0x9($s0)
    ctx->pc = 0x3526c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x3526cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3526ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3526d0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3526D0u;
    {
        const bool branch_taken_0x3526d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3526d0) {
            ctx->pc = 0x3526E0u;
            goto label_3526e0;
        }
    }
    ctx->pc = 0x3526D8u;
    // 0x3526d8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3526D8u;
    {
        const bool branch_taken_0x3526d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3526d8) {
            ctx->pc = 0x352810u;
            goto label_352810;
        }
    }
    ctx->pc = 0x3526E0u;
label_3526e0:
    // 0x3526e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3526e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3526e4: 0x8606000e  lh          $a2, 0xE($s0)
    ctx->pc = 0x3526e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3526e8: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x3526e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3526ec: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x3526ecu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3526f0: 0xc0d4850  jal         func_352140
    ctx->pc = 0x3526F0u;
    SET_GPR_U32(ctx, 31, 0x3526F8u);
    ctx->pc = 0x3526F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3526F0u;
    // 0x3526f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352140u, 0x3526F0u, 0x3526F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3526F8u;
label_3526f8:
    // 0x3526f8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x3526F8u;
    {
        const bool branch_taken_0x3526f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3526f8) {
            ctx->pc = 0x352810u;
            goto label_352810;
        }
    }
    ctx->pc = 0x352700u;
label_352700:
    // 0x352700: 0x92040009  lbu         $a0, 0x9($s0)
    ctx->pc = 0x352700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x352704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x352704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352708: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x352708u;
    {
        const bool branch_taken_0x352708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x352708) {
            ctx->pc = 0x352718u;
            goto label_352718;
        }
    }
    ctx->pc = 0x352710u;
    // 0x352710: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x352710u;
    {
        const bool branch_taken_0x352710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352710) {
            ctx->pc = 0x352810u;
            goto label_352810;
        }
    }
    ctx->pc = 0x352718u;
label_352718:
    // 0x352718: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x352718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x35271c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x35271cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x352720: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x352720u;
    {
        const bool branch_taken_0x352720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x352720) {
            ctx->pc = 0x352738u;
            goto label_352738;
        }
    }
    ctx->pc = 0x352728u;
    // 0x352728: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x352728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35272c: 0xc0d4770  jal         func_351DC0
    ctx->pc = 0x35272Cu;
    SET_GPR_U32(ctx, 31, 0x352734u);
    ctx->pc = 0x352730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35272Cu;
    // 0x352730: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351DC0u, 0x35272Cu, 0x352734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352734u;
label_352734:
    // 0x352734: 0x0  nop
    ctx->pc = 0x352734u;
    // NOP
label_352738:
    // 0x352738: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x352738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x35273c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x35273cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x352740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x352740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352744: 0x8606000e  lh          $a2, 0xE($s0)
    ctx->pc = 0x352744u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x352748: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x352748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x35274c: 0xc0d4850  jal         func_352140
    ctx->pc = 0x35274Cu;
    SET_GPR_U32(ctx, 31, 0x352754u);
    ctx->pc = 0x352750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35274Cu;
    // 0x352750: 0x2382b  sltu        $a3, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x352140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352140u, 0x35274Cu, 0x352754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352754u;
label_352754:
    // 0x352754: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x352754u;
    {
        const bool branch_taken_0x352754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352754) {
            ctx->pc = 0x352810u;
            goto label_352810;
        }
    }
    ctx->pc = 0x35275Cu;
    // 0x35275c: 0x0  nop
    ctx->pc = 0x35275cu;
    // NOP
label_352760:
    // 0x352760: 0x92040009  lbu         $a0, 0x9($s0)
    ctx->pc = 0x352760u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x352764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x352764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x352768: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x352768u;
    {
        const bool branch_taken_0x352768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x352768) {
            ctx->pc = 0x352778u;
            goto label_352778;
        }
    }
    ctx->pc = 0x352770u;
    // 0x352770: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x352770u;
    {
        const bool branch_taken_0x352770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352770) {
            ctx->pc = 0x352810u;
            goto label_352810;
        }
    }
    ctx->pc = 0x352778u;
label_352778:
    // 0x352778: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x352778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x35277c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x35277cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x352780: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x352780u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x352784: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x352784u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x352788: 0xc0d48b0  jal         func_3522C0
    ctx->pc = 0x352788u;
    SET_GPR_U32(ctx, 31, 0x352790u);
    ctx->pc = 0x35278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352788u;
    // 0x35278c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3522C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3522C0u, 0x352788u, 0x352790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352790u;
label_352790:
    // 0x352790: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x352790u;
    {
        const bool branch_taken_0x352790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352790) {
            ctx->pc = 0x352810u;
            goto label_352810;
        }
    }
    ctx->pc = 0x352798u;
label_352798:
    // 0x352798: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x352798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x35279c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35279cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3527a0: 0x10670003  beq         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3527A0u;
    {
        const bool branch_taken_0x3527a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x3527a0) {
            ctx->pc = 0x3527B0u;
            goto label_3527b0;
        }
    }
    ctx->pc = 0x3527A8u;
    // 0x3527a8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3527A8u;
    {
        const bool branch_taken_0x3527a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3527a8) {
            ctx->pc = 0x352810u;
            goto label_352810;
        }
    }
    ctx->pc = 0x3527B0u;
label_3527b0:
    // 0x3527b0: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x3527b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3527b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3527b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3527b8: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x3527b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3527bc: 0xc0d48b0  jal         func_3522C0
    ctx->pc = 0x3527BCu;
    SET_GPR_U32(ctx, 31, 0x3527C4u);
    ctx->pc = 0x3527C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3527BCu;
    // 0x3527c0: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3522C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3522C0u, 0x3527BCu, 0x3527C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3527C4u;
label_3527c4:
    // 0x3527c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3527C4u;
    {
        const bool branch_taken_0x3527c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3527c4) {
            ctx->pc = 0x352810u;
            goto label_352810;
        }
    }
    ctx->pc = 0x3527CCu;
    // 0x3527cc: 0x0  nop
    ctx->pc = 0x3527ccu;
    // NOP
label_3527d0:
    // 0x3527d0: 0x92040009  lbu         $a0, 0x9($s0)
    ctx->pc = 0x3527d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x3527d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3527d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3527d8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3527D8u;
    {
        const bool branch_taken_0x3527d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3527d8) {
            ctx->pc = 0x3527E8u;
            goto label_3527e8;
        }
    }
    ctx->pc = 0x3527E0u;
    // 0x3527e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3527E0u;
    {
        const bool branch_taken_0x3527e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3527e0) {
            ctx->pc = 0x352810u;
            goto label_352810;
        }
    }
    ctx->pc = 0x3527E8u;
label_3527e8:
    // 0x3527e8: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x3527e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3527ec: 0x2382b  sltu        $a3, $zero, $v0
    ctx->pc = 0x3527ecu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3527f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3527f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3527f4: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x3527f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3527f8: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x3527f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x3527fc: 0x2442ffd5  addiu       $v0, $v0, -0x2B
    ctx->pc = 0x3527fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967253));
    // 0x352800: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x352800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x352804: 0xc0d4850  jal         func_352140
    ctx->pc = 0x352804u;
    SET_GPR_U32(ctx, 31, 0x35280Cu);
    ctx->pc = 0x352808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352804u;
    // 0x352808: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352140u, 0x352804u, 0x35280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35280Cu;
label_35280c:
    // 0x35280c: 0x0  nop
    ctx->pc = 0x35280cu;
    // NOP
label_352810:
    // 0x352810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x352810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x352814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352818: 0x3e00008  jr          $ra
    ctx->pc = 0x352818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352818u;
        // 0x35281c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352820u;
}
