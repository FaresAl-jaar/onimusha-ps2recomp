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

// Function: sub_003E0460
// Address: 0x3e0460 - 0x3e0888
void sub_003E0460_0x3e0460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0460_0x3e0460");
#endif

    switch (ctx->pc) {
        case 0x3e0490u: goto label_3e0490;
        case 0x3e04bcu: goto label_3e04bc;
        case 0x3e04c8u: goto label_3e04c8;
        case 0x3e04dcu: goto label_3e04dc;
        case 0x3e0578u: goto label_3e0578;
        case 0x3e0630u: goto label_3e0630;
        case 0x3e0650u: goto label_3e0650;
        case 0x3e0660u: goto label_3e0660;
        case 0x3e06e4u: goto label_3e06e4;
        case 0x3e06f8u: goto label_3e06f8;
        case 0x3e0714u: goto label_3e0714;
        case 0x3e0788u: goto label_3e0788;
        case 0x3e079cu: goto label_3e079c;
        case 0x3e07d8u: goto label_3e07d8;
        case 0x3e07e8u: goto label_3e07e8;
        case 0x3e07f8u: goto label_3e07f8;
        case 0x3e0808u: goto label_3e0808;
        case 0x3e0820u: goto label_3e0820;
        default: break;
    }

    ctx->pc = 0x3e0460u;

    // 0x3e0460: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3e0460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3e0464: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3e0464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e0468: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e0468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3e046c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x3e046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3e0470: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e0470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3e0474: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e0474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3e0478: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e0478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e047c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3e047cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0480: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e0480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e0484: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e0484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e0488: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E0488u;
    {
        const bool branch_taken_0x3e0488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0488u;
        // 0x3e048c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0488) {
            ctx->pc = 0x3E04ACu;
            goto label_3e04ac;
        }
    }
    ctx->pc = 0x3E0490u;
label_3e0490:
    // 0x3e0490: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3e0490u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e0494: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e0494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e0498: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e0498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e049c: 0x0  nop
    ctx->pc = 0x3e049cu;
    // NOP
    // 0x3e04a0: 0x0  nop
    ctx->pc = 0x3e04a0u;
    // NOP
    // 0x3e04a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E04A4u;
    {
        const bool branch_taken_0x3e04a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e04a4) {
            ctx->pc = 0x3E0490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0490;
        }
    }
    ctx->pc = 0x3E04ACu;
label_3e04ac:
    // 0x3e04ac: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x3e04acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x3e04b0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3e04b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3e04b4: 0xc09e900  jal         func_27A400
    ctx->pc = 0x3E04B4u;
    SET_GPR_U32(ctx, 31, 0x3E04BCu);
    ctx->pc = 0x3E04B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E04B4u;
    // 0x3e04b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A400u, 0x3E04B4u, 0x3E04BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E04BCu;
label_3e04bc:
    // 0x3e04bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e04bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e04c0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3e04c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e04c4: 0x0  nop
    ctx->pc = 0x3e04c4u;
    // NOP
label_3e04c8:
    // 0x3e04c8: 0x8e252b70  lw          $a1, 0x2B70($s1)
    ctx->pc = 0x3e04c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11120)));
    // 0x3e04cc: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3E04CCu;
    {
        const bool branch_taken_0x3e04cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E04CCu;
        // 0x3e04d0: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e04cc) {
            ctx->pc = 0x3E0530u;
            goto label_3e0530;
        }
    }
    ctx->pc = 0x3E04D4u;
    // 0x3e04d4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3E04D4u;
    SET_GPR_U32(ctx, 31, 0x3E04DCu);
    ctx->pc = 0x3E04D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E04D4u;
    // 0x3e04d8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3E04D4u, 0x3E04DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E04DCu;
label_3e04dc:
    // 0x3e04dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E04DCu;
    {
        const bool branch_taken_0x3e04dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e04dc) {
            ctx->pc = 0x3E0500u;
            goto label_3e0500;
        }
    }
    ctx->pc = 0x3E04E4u;
    // 0x3e04e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E04E4u;
    {
        const bool branch_taken_0x3e04e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e04e4) {
            ctx->pc = 0x3E0518u;
            goto label_3e0518;
        }
    }
    ctx->pc = 0x3E04ECu;
    // 0x3e04ec: 0x9044065c  lbu         $a0, 0x65C($v0)
    ctx->pc = 0x3e04ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1628)));
    // 0x3e04f0: 0x2403009e  addiu       $v1, $zero, 0x9E
    ctx->pc = 0x3e04f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x3e04f4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E04F4u;
    {
        const bool branch_taken_0x3e04f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e04f4) {
            ctx->pc = 0x3E0518u;
            goto label_3e0518;
        }
    }
    ctx->pc = 0x3E04FCu;
    // 0x3e04fc: 0x0  nop
    ctx->pc = 0x3e04fcu;
    // NOP
label_3e0500:
    // 0x3e0500: 0xae202b70  sw          $zero, 0x2B70($s1)
    ctx->pc = 0x3e0500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11120), GPR_U32(ctx, 0));
    // 0x3e0504: 0x92032c70  lbu         $v1, 0x2C70($s0)
    ctx->pc = 0x3e0504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11376)));
    // 0x3e0508: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e0508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e050c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3E050Cu;
    {
        const bool branch_taken_0x3e050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E050Cu;
        // 0x3e0510: 0xa2032c70  sb          $v1, 0x2C70($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11376), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e050c) {
            ctx->pc = 0x3E0530u;
            goto label_3e0530;
        }
    }
    ctx->pc = 0x3E0514u;
    // 0x3e0514: 0x0  nop
    ctx->pc = 0x3e0514u;
    // NOP
label_3e0518:
    // 0x3e0518: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E0518u;
    {
        const bool branch_taken_0x3e0518 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0518) {
            ctx->pc = 0x3E0528u;
            goto label_3e0528;
        }
    }
    ctx->pc = 0x3E0520u;
    // 0x3e0520: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E0520u;
    {
        const bool branch_taken_0x3e0520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0520u;
        // 0x3e0524: 0xac40023c  sw          $zero, 0x23C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0520) {
            ctx->pc = 0x3E0530u;
            goto label_3e0530;
        }
    }
    ctx->pc = 0x3E0528u;
label_3e0528:
    // 0x3e0528: 0xac50023c  sw          $s0, 0x23C($v0)
    ctx->pc = 0x3e0528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 572), GPR_U32(ctx, 16));
    // 0x3e052c: 0x0  nop
    ctx->pc = 0x3e052cu;
    // NOP
label_3e0530:
    // 0x3e0530: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3e0530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3e0534: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x3e0534u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3e0538: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3E0538u;
    {
        const bool branch_taken_0x3e0538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0538u;
        // 0x3e053c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0538) {
            ctx->pc = 0x3E04C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e04c8;
        }
    }
    ctx->pc = 0x3E0540u;
    // 0x3e0540: 0x92032c70  lbu         $v1, 0x2C70($s0)
    ctx->pc = 0x3e0540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11376)));
    // 0x3e0544: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3e0544u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3e0548: 0x1020008b  beqz        $at, . + 4 + (0x8B << 2)
    ctx->pc = 0x3E0548u;
    {
        const bool branch_taken_0x3e0548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0548u;
        // 0x3e054c: 0x326300ff  andi        $v1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0548) {
            ctx->pc = 0x3E0778u;
            goto label_3e0778;
        }
    }
    ctx->pc = 0x3E0550u;
    // 0x3e0550: 0x14600089  bnez        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x3E0550u;
    {
        const bool branch_taken_0x3e0550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0550u;
        // 0x3e0554: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0550) {
            ctx->pc = 0x3E0778u;
            goto label_3e0778;
        }
    }
    ctx->pc = 0x3E0558u;
    // 0x3e0558: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x3e0558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3e055c: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x3e055cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x3e0560: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x3e0560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x3e0564: 0x25080b80  addiu       $t0, $t0, 0xB80
    ctx->pc = 0x3e0564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2944));
    // 0x3e0568: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3e0568u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e056c: 0x240a009e  addiu       $t2, $zero, 0x9E
    ctx->pc = 0x3e056cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x3e0570: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x3e0570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3e0574: 0x0  nop
    ctx->pc = 0x3e0574u;
    // NOP
label_3e0578:
    // 0x3e0578: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3e0578u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e057c: 0x1220007a  beqz        $s1, . + 4 + (0x7A << 2)
    ctx->pc = 0x3E057Cu;
    {
        const bool branch_taken_0x3e057c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e057c) {
            ctx->pc = 0x3E0768u;
            goto label_3e0768;
        }
    }
    ctx->pc = 0x3E0584u;
    // 0x3e0584: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x3e0584u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e0588: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x3e0588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3e058c: 0x2ca10002  sltiu       $at, $a1, 0x2
    ctx->pc = 0x3e058cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e0590: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E0590u;
    {
        const bool branch_taken_0x3e0590 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0590u;
        // 0x3e0594: 0x64090001  daddiu      $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0590) {
            ctx->pc = 0x3E05A0u;
            goto label_3e05a0;
        }
    }
    ctx->pc = 0x3E0598u;
    // 0x3e0598: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e0598u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e059c: 0x0  nop
    ctx->pc = 0x3e059cu;
    // NOP
label_3e05a0:
    // 0x3e05a0: 0x11200071  beqz        $t1, . + 4 + (0x71 << 2)
    ctx->pc = 0x3E05A0u;
    {
        const bool branch_taken_0x3e05a0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e05a0) {
            ctx->pc = 0x3E0768u;
            goto label_3e0768;
        }
    }
    ctx->pc = 0x3E05A8u;
    // 0x3e05a8: 0x8e2906ac  lw          $t1, 0x6AC($s1)
    ctx->pc = 0x3e05a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x3e05ac: 0x31250002  andi        $a1, $t1, 0x2
    ctx->pc = 0x3e05acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
    // 0x3e05b0: 0x10a0006d  beqz        $a1, . + 4 + (0x6D << 2)
    ctx->pc = 0x3E05B0u;
    {
        const bool branch_taken_0x3e05b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E05B0u;
        // 0x3e05b4: 0x31250004  andi        $a1, $t1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e05b0) {
            ctx->pc = 0x3E0768u;
            goto label_3e0768;
        }
    }
    ctx->pc = 0x3E05B8u;
    // 0x3e05b8: 0x14a0006b  bnez        $a1, . + 4 + (0x6B << 2)
    ctx->pc = 0x3E05B8u;
    {
        const bool branch_taken_0x3e05b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e05b8) {
            ctx->pc = 0x3E0768u;
            goto label_3e0768;
        }
    }
    ctx->pc = 0x3E05C0u;
    // 0x3e05c0: 0x8e2529c0  lw          $a1, 0x29C0($s1)
    ctx->pc = 0x3e05c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3e05c4: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x3e05c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e05c8: 0x10a00067  beqz        $a1, . + 4 + (0x67 << 2)
    ctx->pc = 0x3E05C8u;
    {
        const bool branch_taken_0x3e05c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e05c8) {
            ctx->pc = 0x3E0768u;
            goto label_3e0768;
        }
    }
    ctx->pc = 0x3E05D0u;
    // 0x3e05d0: 0x9225065c  lbu         $a1, 0x65C($s1)
    ctx->pc = 0x3e05d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x3e05d4: 0x10aa0064  beq         $a1, $t2, . + 4 + (0x64 << 2)
    ctx->pc = 0x3E05D4u;
    {
        const bool branch_taken_0x3e05d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        if (branch_taken_0x3e05d4) {
            ctx->pc = 0x3E0768u;
            goto label_3e0768;
        }
    }
    ctx->pc = 0x3E05DCu;
    // 0x3e05dc: 0x92290002  lbu         $t1, 0x2($s1)
    ctx->pc = 0x3e05dcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3e05e0: 0x928c0  sll         $a1, $t1, 3
    ctx->pc = 0x3e05e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3e05e4: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x3e05e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3e05e8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3e05e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e05ec: 0x1054821  addu        $t1, $t0, $a1
    ctx->pc = 0x3e05ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x3e05f0: 0x9125001a  lbu         $a1, 0x1A($t1)
    ctx->pc = 0x3e05f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 26)));
    // 0x3e05f4: 0x10a70006  beq         $a1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E05F4u;
    {
        const bool branch_taken_0x3e05f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x3e05f4) {
            ctx->pc = 0x3E0610u;
            goto label_3e0610;
        }
    }
    ctx->pc = 0x3E05FCu;
    // 0x3e05fc: 0x9125001b  lbu         $a1, 0x1B($t1)
    ctx->pc = 0x3e05fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 27)));
    // 0x3e0600: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x3e0600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e0604: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0604u;
    {
        const bool branch_taken_0x3e0604 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0604) {
            ctx->pc = 0x3E0620u;
            goto label_3e0620;
        }
    }
    ctx->pc = 0x3E060Cu;
    // 0x3e060c: 0x0  nop
    ctx->pc = 0x3e060cu;
    // NOP
label_3e0610:
    // 0x3e0610: 0xde050520  ld          $a1, 0x520($s0)
    ctx->pc = 0x3e0610u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x3e0614: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x3e0614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x3e0618: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3E0618u;
    {
        const bool branch_taken_0x3e0618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0618u;
        // 0x3e061c: 0xfe050520  sd          $a1, 0x520($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1312), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0618) {
            ctx->pc = 0x3E0768u;
            goto label_3e0768;
        }
    }
    ctx->pc = 0x3E0620u;
label_3e0620:
    // 0x3e0620: 0x8e022b70  lw          $v0, 0x2B70($s0)
    ctx->pc = 0x3e0620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11120)));
    // 0x3e0624: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3E0624u;
    {
        const bool branch_taken_0x3e0624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0624u;
        // 0x3e0628: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0624) {
            ctx->pc = 0x3E06C8u;
            goto label_3e06c8;
        }
    }
    ctx->pc = 0x3E062Cu;
    // 0x3e062c: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x3e062cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_3e0630:
    // 0x3e0630: 0x8c622b70  lw          $v0, 0x2B70($v1)
    ctx->pc = 0x3e0630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11120)));
    // 0x3e0634: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3E0634u;
    {
        const bool branch_taken_0x3e0634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0634) {
            ctx->pc = 0x3E06B8u;
            goto label_3e06b8;
        }
    }
    ctx->pc = 0x3E063Cu;
    // 0x3e063c: 0x19000022  blez        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3E063Cu;
    {
        const bool branch_taken_0x3e063c = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x3E0640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E063Cu;
        // 0x3e0640: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e063c) {
            ctx->pc = 0x3E06C8u;
            goto label_3e06c8;
        }
    }
    ctx->pc = 0x3E0644u;
    // 0x3e0644: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3e0644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3e0648: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3e0648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3e064c: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x3e064cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3e0650:
    // 0x3e0650: 0x24e62ae0  addiu       $a2, $a3, 0x2AE0
    ctx->pc = 0x3e0650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 10976));
    // 0x3e0654: 0x24e52b30  addiu       $a1, $a3, 0x2B30
    ctx->pc = 0x3e0654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 11056));
    // 0x3e0658: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3e0658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e065c: 0x0  nop
    ctx->pc = 0x3e065cu;
    // NOP
label_3e0660:
    // 0x3e0660: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e0660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e0664: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3e0664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3e0668: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3e0668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e066c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3e066cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3e0670: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3e0670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3e0674: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3e0674u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3e0678: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3E0678u;
    {
        const bool branch_taken_0x3e0678 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x3E067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0678u;
        // 0x3e067c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0678) {
            ctx->pc = 0x3E0660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0660;
        }
    }
    ctx->pc = 0x3E0680u;
    // 0x3e0680: 0x8ce22b20  lw          $v0, 0x2B20($a3)
    ctx->pc = 0x3e0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11040)));
    // 0x3e0684: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e0684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e0688: 0xace22b70  sw          $v0, 0x2B70($a3)
    ctx->pc = 0x3e0688u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 11120), GPR_U32(ctx, 2));
    // 0x3e068c: 0xc4e02b24  lwc1        $f0, 0x2B24($a3)
    ctx->pc = 0x3e068cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 11044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0690: 0xe4e02b74  swc1        $f0, 0x2B74($a3)
    ctx->pc = 0x3e0690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 11124), bits); }
    // 0x3e0694: 0xc4e02b28  lwc1        $f0, 0x2B28($a3)
    ctx->pc = 0x3e0694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 11048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0698: 0xe4e02b78  swc1        $f0, 0x2B78($a3)
    ctx->pc = 0x3e0698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 11128), bits); }
    // 0x3e069c: 0xc4e02b2c  lwc1        $f0, 0x2B2C($a3)
    ctx->pc = 0x3e069cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 11052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e06a0: 0xe4e02b7c  swc1        $f0, 0x2B7C($a3)
    ctx->pc = 0x3e06a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 11132), bits); }
    // 0x3e06a4: 0xace02b20  sw          $zero, 0x2B20($a3)
    ctx->pc = 0x3e06a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 11040), GPR_U32(ctx, 0));
    // 0x3e06a8: 0x1d00ffe9  bgtz        $t0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3E06A8u;
    {
        const bool branch_taken_0x3e06a8 = (GPR_S64(ctx, 8) > 0);
        ctx->pc = 0x3E06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06A8u;
        // 0x3e06ac: 0x24e7ffb0  addiu       $a3, $a3, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e06a8) {
            ctx->pc = 0x3E0650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0650;
        }
    }
    ctx->pc = 0x3E06B0u;
    // 0x3e06b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E06B0u;
    {
        const bool branch_taken_0x3e06b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e06b0) {
            ctx->pc = 0x3E06C8u;
            goto label_3e06c8;
        }
    }
    ctx->pc = 0x3E06B8u;
label_3e06b8:
    // 0x3e06b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3e06b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3e06bc: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x3e06bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3e06c0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3E06C0u;
    {
        const bool branch_taken_0x3e06c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E06C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06C0u;
        // 0x3e06c4: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e06c0) {
            ctx->pc = 0x3E0630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0630;
        }
    }
    ctx->pc = 0x3E06C8u;
label_3e06c8:
    // 0x3e06c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e06c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e06cc: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x3e06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x3e06d0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3e06d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3e06d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e06d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e06d8: 0xae032b70  sw          $v1, 0x2B70($s0)
    ctx->pc = 0x3e06d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11120), GPR_U32(ctx, 3));
    // 0x3e06dc: 0xc0969ac  jal         func_25A6B0
    ctx->pc = 0x3E06DCu;
    SET_GPR_U32(ctx, 31, 0x3E06E4u);
    ctx->pc = 0x3E06E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E06DCu;
    // 0x3e06e0: 0xae002b74  sw          $zero, 0x2B74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 11124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x3E06DCu, 0x3E06E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E06E4u;
label_3e06e4:
    // 0x3e06e4: 0x3c02405e  lui         $v0, 0x405E
    ctx->pc = 0x3e06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16478 << 16));
    // 0x3e06e8: 0x34426531  ori         $v0, $v0, 0x6531
    ctx->pc = 0x3e06e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25905);
    // 0x3e06ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e06ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e06f0: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3E06F0u;
    SET_GPR_U32(ctx, 31, 0x3E06F8u);
    ctx->pc = 0x3E06F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E06F0u;
    // 0x3e06f4: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3E06F0u, 0x3E06F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E06F8u;
label_3e06f8:
    // 0x3e06f8: 0xe6002b7c  swc1        $f0, 0x2B7C($s0)
    ctx->pc = 0x3e06f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11132), bits); }
    // 0x3e06fc: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x3e06fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x3e0700: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x3e0700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3e0704: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3e0704u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e0708: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3e0708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3e070c: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x3E070Cu;
    SET_GPR_U32(ctx, 31, 0x3E0714u);
    ctx->pc = 0x3E0710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E070Cu;
    // 0x3e0710: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x3E070Cu, 0x3E0714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0714u;
label_3e0714:
    // 0x3e0714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e0714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e0718: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3e0718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3e071c: 0x34660fdb  ori         $a2, $v1, 0xFDB
    ctx->pc = 0x3e071cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3e0720: 0x3c054500  lui         $a1, 0x4500
    ctx->pc = 0x3e0720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17664 << 16));
    // 0x3e0724: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3e0724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3e0728: 0x2404009e  addiu       $a0, $zero, 0x9E
    ctx->pc = 0x3e0728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x3e072c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e072cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e0730: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3e0730u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e0734: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3e0734u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e0738: 0x0  nop
    ctx->pc = 0x3e0738u;
    // NOP
    // 0x3e073c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e073cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e0740: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3e0740u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3e0744: 0xe6002b78  swc1        $f0, 0x2B78($s0)
    ctx->pc = 0x3e0744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11128), bits); }
    // 0x3e0748: 0xa2240780  sb          $a0, 0x780($s1)
    ctx->pc = 0x3e0748u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e074c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3e074cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e0750: 0xae2407c8  sw          $a0, 0x7C8($s1)
    ctx->pc = 0x3e0750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1992), GPR_U32(ctx, 4));
    // 0x3e0754: 0xa2230238  sb          $v1, 0x238($s1)
    ctx->pc = 0x3e0754u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 568), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e0758: 0x92032c70  lbu         $v1, 0x2C70($s0)
    ctx->pc = 0x3e0758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11376)));
    // 0x3e075c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e075cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e0760: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E0760u;
    {
        const bool branch_taken_0x3e0760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0760u;
        // 0x3e0764: 0xa2032c70  sb          $v1, 0x2C70($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11376), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0760) {
            ctx->pc = 0x3E0778u;
            goto label_3e0778;
        }
    }
    ctx->pc = 0x3E0768u;
label_3e0768:
    // 0x3e0768: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3e0768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3e076c: 0x28850004  slti        $a1, $a0, 0x4
    ctx->pc = 0x3e076cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3e0770: 0x14a0ff81  bnez        $a1, . + 4 + (-0x7F << 2)
    ctx->pc = 0x3E0770u;
    {
        const bool branch_taken_0x3e0770 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0770u;
        // 0x3e0774: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0770) {
            ctx->pc = 0x3E0578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0578;
        }
    }
    ctx->pc = 0x3E0778u;
label_3e0778:
    // 0x3e0778: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e0778u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e077c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3e077cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0780: 0x27b100a8  addiu       $s1, $sp, 0xA8
    ctx->pc = 0x3e0780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x3e0784: 0x0  nop
    ctx->pc = 0x3e0784u;
    // NOP
label_3e0788:
    // 0x3e0788: 0x8e452b70  lw          $a1, 0x2B70($s2)
    ctx->pc = 0x3e0788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11120)));
    // 0x3e078c: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3E078Cu;
    {
        const bool branch_taken_0x3e078c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E078Cu;
        // 0x3e0790: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e078c) {
            ctx->pc = 0x3E0858u;
            goto label_3e0858;
        }
    }
    ctx->pc = 0x3E0794u;
    // 0x3e0794: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3E0794u;
    SET_GPR_U32(ctx, 31, 0x3E079Cu);
    ctx->pc = 0x3E0798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0794u;
    // 0x3e0798: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3E0794u, 0x3E079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E079Cu;
label_3e079c:
    // 0x3e079c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3e079cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e07a0: 0x1260002d  beqz        $s3, . + 4 + (0x2D << 2)
    ctx->pc = 0x3E07A0u;
    {
        const bool branch_taken_0x3e07a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e07a0) {
            ctx->pc = 0x3E0858u;
            goto label_3e0858;
        }
    }
    ctx->pc = 0x3E07A8u;
    // 0x3e07a8: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x3e07a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3e07ac: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3E07ACu;
    {
        const bool branch_taken_0x3e07ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e07ac) {
            ctx->pc = 0x3E0858u;
            goto label_3e0858;
        }
    }
    ctx->pc = 0x3E07B4u;
    // 0x3e07b4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e07b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e07b8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x3e07b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3e07bc: 0x2442e6c0  addiu       $v0, $v0, -0x1940
    ctx->pc = 0x3e07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960832));
    // 0x3e07c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e07c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e07c4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3e07c4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E6C0u));
    // 0x3e07c8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3e07c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3e07cc: 0xc6402b74  lwc1        $f0, 0x2B74($s2)
    ctx->pc = 0x3e07ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e07d0: 0xc04150c  jal         func_105430
    ctx->pc = 0x3E07D0u;
    SET_GPR_U32(ctx, 31, 0x3E07D8u);
    ctx->pc = 0x3E07D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E07D0u;
    // 0x3e07d4: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x3E07D0u, 0x3E07D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E07D8u;
label_3e07d8:
    // 0x3e07d8: 0xc64c2b78  lwc1        $f12, 0x2B78($s2)
    ctx->pc = 0x3e07d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e07dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e07dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e07e0: 0xc041588  jal         func_105620
    ctx->pc = 0x3E07E0u;
    SET_GPR_U32(ctx, 31, 0x3E07E8u);
    ctx->pc = 0x3E07E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E07E0u;
    // 0x3e07e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x3E07E0u, 0x3E07E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E07E8u;
label_3e07e8:
    // 0x3e07e8: 0xc64c2b7c  lwc1        $f12, 0x2B7C($s2)
    ctx->pc = 0x3e07e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e07ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e07ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e07f0: 0xc041534  jal         func_1054D0
    ctx->pc = 0x3E07F0u;
    SET_GPR_U32(ctx, 31, 0x3E07F8u);
    ctx->pc = 0x3E07F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E07F0u;
    // 0x3e07f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054D0u, 0x3E07F0u, 0x3E07F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E07F8u;
label_3e07f8:
    // 0x3e07f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3e07f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e07fc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x3e07fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3e0800: 0xc0414e2  jal         func_105388
    ctx->pc = 0x3E0800u;
    SET_GPR_U32(ctx, 31, 0x3E0808u);
    ctx->pc = 0x3E0804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0800u;
    // 0x3e0804: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105388u, 0x3E0800u, 0x3E0808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0808u;
label_3e0808:
    // 0x3e0808: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3e0808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3e080c: 0x26442b30  addiu       $a0, $s2, 0x2B30
    ctx->pc = 0x3e080cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11056));
    // 0x3e0810: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3e0810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e0814: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3e0814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3e0818: 0xc04144e  jal         func_105138
    ctx->pc = 0x3E0818u;
    SET_GPR_U32(ctx, 31, 0x3E0820u);
    ctx->pc = 0x3E081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0818u;
    // 0x3e081c: 0x24450640  addiu       $a1, $v0, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x3E0818u, 0x3E0820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0820u;
label_3e0820:
    // 0x3e0820: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x3e0820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3e0824: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x3e0824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x3e0828: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3e0828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3e082c: 0x26452b30  addiu       $a1, $s2, 0x2B30
    ctx->pc = 0x3e082cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 11056));
    // 0x3e0830: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e0830u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e0834: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e0834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e0838: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x3e0838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3e083c: 0xac6500c0  sw          $a1, 0xC0($v1)
    ctx->pc = 0x3e083cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 5));
    // 0x3e0840: 0xc6422b74  lwc1        $f2, 0x2B74($s2)
    ctx->pc = 0x3e0840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e0844: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3e0844u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3e0848: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e0848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3e084c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3e084cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3e0850: 0xe6402b74  swc1        $f0, 0x2B74($s2)
    ctx->pc = 0x3e0850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11124), bits); }
    // 0x3e0854: 0x0  nop
    ctx->pc = 0x3e0854u;
    // NOP
label_3e0858:
    // 0x3e0858: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3e0858u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3e085c: 0x2a830004  slti        $v1, $s4, 0x4
    ctx->pc = 0x3e085cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3e0860: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x3E0860u;
    {
        const bool branch_taken_0x3e0860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0860u;
        // 0x3e0864: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0860) {
            ctx->pc = 0x3E0788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0788;
        }
    }
    ctx->pc = 0x3E0868u;
    // 0x3e0868: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e0868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e086c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e086cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e0870: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e0870u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e0874: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e0874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e0878: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e0878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e087c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e087cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e0880: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0880u;
        // 0x3e0884: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0888u;
}
