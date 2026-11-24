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

// Function: sub_001C5700
// Address: 0x1c5700 - 0x1c5ae4
void sub_001C5700_0x1c5700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5700_0x1c5700");
#endif

    switch (ctx->pc) {
        case 0x1c5778u: goto label_1c5778;
        case 0x1c57c0u: goto label_1c57c0;
        case 0x1c57ccu: goto label_1c57cc;
        case 0x1c57ecu: goto label_1c57ec;
        case 0x1c5800u: goto label_1c5800;
        case 0x1c5814u: goto label_1c5814;
        case 0x1c5820u: goto label_1c5820;
        case 0x1c5844u: goto label_1c5844;
        case 0x1c5858u: goto label_1c5858;
        case 0x1c5864u: goto label_1c5864;
        case 0x1c5888u: goto label_1c5888;
        case 0x1c589cu: goto label_1c589c;
        case 0x1c58bcu: goto label_1c58bc;
        case 0x1c58d0u: goto label_1c58d0;
        case 0x1c58e4u: goto label_1c58e4;
        case 0x1c58f8u: goto label_1c58f8;
        case 0x1c591cu: goto label_1c591c;
        case 0x1c5930u: goto label_1c5930;
        case 0x1c593cu: goto label_1c593c;
        case 0x1c595cu: goto label_1c595c;
        case 0x1c5970u: goto label_1c5970;
        case 0x1c5978u: goto label_1c5978;
        case 0x1c5988u: goto label_1c5988;
        case 0x1c5994u: goto label_1c5994;
        case 0x1c5a00u: goto label_1c5a00;
        case 0x1c5a14u: goto label_1c5a14;
        case 0x1c5a40u: goto label_1c5a40;
        case 0x1c5a54u: goto label_1c5a54;
        case 0x1c5a68u: goto label_1c5a68;
        case 0x1c5a7cu: goto label_1c5a7c;
        case 0x1c5a88u: goto label_1c5a88;
        case 0x1c5aacu: goto label_1c5aac;
        case 0x1c5ac0u: goto label_1c5ac0;
        default: break;
    }

    ctx->pc = 0x1c5700u;

    // 0x1c5700: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1c5700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1c5704: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c5704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c5708: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c5708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c570c: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x1c570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
    // 0x1c5710: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c5710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1c5714: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x1c5714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c5718: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c5718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c571c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c571cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5720: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c5720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c5724: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c5724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5728: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c5728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c572c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c572cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5730: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c5730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c5734: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1c5734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1c5738: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c5738u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c573c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c573cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5740: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x1c5740u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x40F600u));
    // 0x1c5744: 0x24c6f610  addiu       $a2, $a2, -0x9F0
    ctx->pc = 0x1c5744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964752));
    // 0x1c5748: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1c5748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c574c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x1c574cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c5750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c5750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5758: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x1c5758u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
    // 0x1c575c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1c575cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1c5760: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x1c5760u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x40F610u));
    // 0x1c5764: 0x2442f620  addiu       $v0, $v0, -0x9E0
    ctx->pc = 0x1c5764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964768));
    // 0x1c5768: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1c5768u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1c576c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c576cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40F620u));
    // 0x1c5770: 0xc06736c  jal         func_19CDB0
    ctx->pc = 0x1C5770u;
    SET_GPR_U32(ctx, 31, 0x1C5778u);
    ctx->pc = 0x1C5774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5770u;
    // 0x1c5774: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x1C5770u, 0x1C5778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5778u;
label_1c5778:
    // 0x1c5778: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x1c5778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c577c: 0x104300a8  beq         $v0, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x1C577Cu;
    {
        const bool branch_taken_0x1c577c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C577Cu;
        // 0x1c5780: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c577c) {
            ctx->pc = 0x1C5A20u;
            goto label_1c5a20;
        }
    }
    ctx->pc = 0x1C5784u;
    // 0x1c5784: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5784u;
    {
        const bool branch_taken_0x1c5784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5784) {
            ctx->pc = 0x1C57A0u;
            goto label_1c57a0;
        }
    }
    ctx->pc = 0x1C578Cu;
    // 0x1c578c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1c578cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c5790: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5790u;
    {
        const bool branch_taken_0x1c5790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5790) {
            ctx->pc = 0x1C57A0u;
            goto label_1c57a0;
        }
    }
    ctx->pc = 0x1C5798u;
    // 0x1c5798: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1C5798u;
    {
        const bool branch_taken_0x1c5798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5798) {
            ctx->pc = 0x1C5AC0u;
            goto label_1c5ac0;
        }
    }
    ctx->pc = 0x1C57A0u;
label_1c57a0:
    // 0x1c57a0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c57a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c57a4: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c57a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c57a8: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c57a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c57ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c57acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c57b0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c57b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c57b4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c57b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c57b8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C57B8u;
    SET_GPR_U32(ctx, 31, 0x1C57C0u);
    ctx->pc = 0x1C57BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57B8u;
    // 0x1c57bc: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C57B8u, 0x1C57C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57C0u;
label_1c57c0:
    // 0x1c57c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c57c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57c4: 0xc06736c  jal         func_19CDB0
    ctx->pc = 0x1C57C4u;
    SET_GPR_U32(ctx, 31, 0x1C57CCu);
    ctx->pc = 0x1C57C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57C4u;
    // 0x1c57c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CDB0u, 0x1C57C4u, 0x1C57CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57CCu;
label_1c57cc:
    // 0x1c57cc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1c57ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c57d0: 0x14430035  bne         $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C57D0u;
    {
        const bool branch_taken_0x1c57d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c57d0) {
            ctx->pc = 0x1C58A8u;
            goto label_1c58a8;
        }
    }
    ctx->pc = 0x1C57D8u;
    // 0x1c57d8: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x1c57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1c57dc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c57dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c57e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c57e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57e4: 0xc041442  jal         func_105108
    ctx->pc = 0x1C57E4u;
    SET_GPR_U32(ctx, 31, 0x1C57ECu);
    ctx->pc = 0x1C57E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57E4u;
    // 0x1c57e8: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C57E4u, 0x1C57ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C57ECu;
label_1c57ec:
    // 0x1c57ec: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x1c57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1c57f0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c57f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c57f4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c57f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c57f8: 0xc041442  jal         func_105108
    ctx->pc = 0x1C57F8u;
    SET_GPR_U32(ctx, 31, 0x1C5800u);
    ctx->pc = 0x1C57FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C57F8u;
    // 0x1c57fc: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C57F8u, 0x1C5800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5800u;
label_1c5800:
    // 0x1c5800: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x1c5800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1c5804: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c5804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c5808: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c5808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c580c: 0xc041442  jal         func_105108
    ctx->pc = 0x1C580Cu;
    SET_GPR_U32(ctx, 31, 0x1C5814u);
    ctx->pc = 0x1C5810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C580Cu;
    // 0x1c5810: 0x24450280  addiu       $a1, $v0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C580Cu, 0x1C5814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5814u;
label_1c5814:
    // 0x1c5814: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c5814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c5818: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C5818u;
    SET_GPR_U32(ctx, 31, 0x1C5820u);
    ctx->pc = 0x1C581Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5818u;
    // 0x1c581c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C5818u, 0x1C5820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5820u;
label_1c5820:
    // 0x1c5820: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1c5820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1c5824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5828: 0x0  nop
    ctx->pc = 0x1c5828u;
    // NOP
    // 0x1c582c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c582cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5830: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5830u;
    {
        const bool branch_taken_0x1c5830 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5830u;
        // 0x1c5834: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5830) {
            ctx->pc = 0x1C5858u;
            goto label_1c5858;
        }
    }
    ctx->pc = 0x1C5838u;
    // 0x1c5838: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1c5838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c583c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C583Cu;
    SET_GPR_U32(ctx, 31, 0x1C5844u);
    ctx->pc = 0x1C5840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C583Cu;
    // 0x1c5840: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C583Cu, 0x1C5844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5844u;
label_1c5844:
    // 0x1c5844: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5848: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1c5848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1c584c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c584cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5850: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5850u;
    SET_GPR_U32(ctx, 31, 0x1C5858u);
    ctx->pc = 0x1C5854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5850u;
    // 0x1c5854: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5850u, 0x1C5858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5858u;
label_1c5858:
    // 0x1c5858: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c5858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c585c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C585Cu;
    SET_GPR_U32(ctx, 31, 0x1C5864u);
    ctx->pc = 0x1C5860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C585Cu;
    // 0x1c5860: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C585Cu, 0x1C5864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5864u;
label_1c5864:
    // 0x1c5864: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1c5864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x1c5868: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c586c: 0x0  nop
    ctx->pc = 0x1c586cu;
    // NOP
    // 0x1c5870: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c5870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5874: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x1C5874u;
    {
        const bool branch_taken_0x1c5874 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5874u;
        // 0x1c5878: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5874) {
            ctx->pc = 0x1C5930u;
            goto label_1c5930;
        }
    }
    ctx->pc = 0x1C587Cu;
    // 0x1c587c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c5880: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5880u;
    SET_GPR_U32(ctx, 31, 0x1C5888u);
    ctx->pc = 0x1C5884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5880u;
    // 0x1c5884: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5880u, 0x1C5888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5888u;
label_1c5888:
    // 0x1c5888: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c588c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1c588cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1c5890: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5894: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5894u;
    SET_GPR_U32(ctx, 31, 0x1C589Cu);
    ctx->pc = 0x1C5898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5894u;
    // 0x1c5898: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5894u, 0x1C589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C589Cu;
label_1c589c:
    // 0x1c589c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1C589Cu;
    {
        const bool branch_taken_0x1c589c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c589c) {
            ctx->pc = 0x1C5930u;
            goto label_1c5930;
        }
    }
    ctx->pc = 0x1C58A4u;
    // 0x1c58a4: 0x0  nop
    ctx->pc = 0x1c58a4u;
    // NOP
label_1c58a8:
    // 0x1c58a8: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x1c58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1c58ac: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c58acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c58b0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c58b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58b4: 0xc041442  jal         func_105108
    ctx->pc = 0x1C58B4u;
    SET_GPR_U32(ctx, 31, 0x1C58BCu);
    ctx->pc = 0x1C58B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C58B4u;
    // 0x1c58b8: 0x24450700  addiu       $a1, $v0, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C58B4u, 0x1C58BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C58BCu;
label_1c58bc:
    // 0x1c58bc: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x1c58bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1c58c0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c58c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c58c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c58c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58c8: 0xc041442  jal         func_105108
    ctx->pc = 0x1C58C8u;
    SET_GPR_U32(ctx, 31, 0x1C58D0u);
    ctx->pc = 0x1C58CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C58C8u;
    // 0x1c58cc: 0x24450700  addiu       $a1, $v0, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C58C8u, 0x1C58D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C58D0u;
label_1c58d0:
    // 0x1c58d0: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x1c58d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1c58d4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c58d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c58d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58dc: 0xc041442  jal         func_105108
    ctx->pc = 0x1C58DCu;
    SET_GPR_U32(ctx, 31, 0x1C58E4u);
    ctx->pc = 0x1C58E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C58DCu;
    // 0x1c58e0: 0x24450700  addiu       $a1, $v0, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C58DCu, 0x1C58E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C58E4u;
label_1c58e4:
    // 0x1c58e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c58e8: 0x12230075  beq         $s1, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x1C58E8u;
    {
        const bool branch_taken_0x1c58e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C58E8u;
        // 0x1c58ec: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c58e8) {
            ctx->pc = 0x1C5AC0u;
            goto label_1c5ac0;
        }
    }
    ctx->pc = 0x1C58F0u;
    // 0x1c58f0: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C58F0u;
    SET_GPR_U32(ctx, 31, 0x1C58F8u);
    ctx->pc = 0x1C58F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C58F0u;
    // 0x1c58f4: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C58F0u, 0x1C58F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C58F8u;
label_1c58f8:
    // 0x1c58f8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1c58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1c58fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c58fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5900: 0x0  nop
    ctx->pc = 0x1c5900u;
    // NOP
    // 0x1c5904: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c5904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5908: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5908u;
    {
        const bool branch_taken_0x1c5908 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5908u;
        // 0x1c590c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5908) {
            ctx->pc = 0x1C5930u;
            goto label_1c5930;
        }
    }
    ctx->pc = 0x1C5910u;
    // 0x1c5910: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c5910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c5914: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5914u;
    SET_GPR_U32(ctx, 31, 0x1C591Cu);
    ctx->pc = 0x1C5918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5914u;
    // 0x1c5918: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5914u, 0x1C591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C591Cu;
label_1c591c:
    // 0x1c591c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c591cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5920: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1c5920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c5924: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5928: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5928u;
    SET_GPR_U32(ctx, 31, 0x1C5930u);
    ctx->pc = 0x1C592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5928u;
    // 0x1c592c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5928u, 0x1C5930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5930u;
label_1c5930:
    // 0x1c5930: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c5930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1c5934: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C5934u;
    SET_GPR_U32(ctx, 31, 0x1C593Cu);
    ctx->pc = 0x1C5938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5934u;
    // 0x1c5938: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C5934u, 0x1C593Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C593Cu;
label_1c593c:
    // 0x1c593c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c593cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5940: 0x0  nop
    ctx->pc = 0x1c5940u;
    // NOP
    // 0x1c5944: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c5944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5948: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5948u;
    {
        const bool branch_taken_0x1c5948 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5948u;
        // 0x1c594c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5948) {
            ctx->pc = 0x1C5970u;
            goto label_1c5970;
        }
    }
    ctx->pc = 0x1C5950u;
    // 0x1c5950: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c5950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c5954: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5954u;
    SET_GPR_U32(ctx, 31, 0x1C595Cu);
    ctx->pc = 0x1C5958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5954u;
    // 0x1c5958: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5954u, 0x1C595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C595Cu;
label_1c595c:
    // 0x1c595c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5960: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1c5960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c5964: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5968: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5968u;
    SET_GPR_U32(ctx, 31, 0x1C5970u);
    ctx->pc = 0x1C596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5968u;
    // 0x1c596c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5968u, 0x1C5970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5970u;
label_1c5970:
    // 0x1c5970: 0xc04d7b4  jal         func_135ED0
    ctx->pc = 0x1C5970u;
    SET_GPR_U32(ctx, 31, 0x1C5978u);
    ctx->pc = 0x1C5974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5970u;
    // 0x1c5974: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135ED0u, 0x1C5970u, 0x1C5978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5978u;
label_1c5978:
    // 0x1c5978: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c5978u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c597c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c5980: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1C5980u;
    SET_GPR_U32(ctx, 31, 0x1C5988u);
    ctx->pc = 0x1C5984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5980u;
    // 0x1c5984: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1C5980u, 0x1C5988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5988u;
label_1c5988:
    // 0x1c5988: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c5988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c598c: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C598Cu;
    SET_GPR_U32(ctx, 31, 0x1C5994u);
    ctx->pc = 0x1C5990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C598Cu;
    // 0x1c5990: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C598Cu, 0x1C5994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5994u;
label_1c5994:
    // 0x1c5994: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c5994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5998: 0x0  nop
    ctx->pc = 0x1c5998u;
    // NOP
    // 0x1c599c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c599cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c59a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C59A0u;
    {
        const bool branch_taken_0x1c59a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C59A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59A0u;
        // 0x1c59a4: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59a0) {
            ctx->pc = 0x1C59ACu;
            goto label_1c59ac;
        }
    }
    ctx->pc = 0x1C59A8u;
    // 0x1c59a8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1c59a8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1c59ac:
    // 0x1c59ac: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1c59acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1c59b0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c59b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c59b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c59b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c59b8: 0x0  nop
    ctx->pc = 0x1c59b8u;
    // NOP
    // 0x1c59bc: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1c59bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c59c0: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x1C59C0u;
    {
        const bool branch_taken_0x1c59c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c59c0) {
            ctx->pc = 0x1C5AC0u;
            goto label_1c5ac0;
        }
    }
    ctx->pc = 0x1C59C8u;
    // 0x1c59c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c59c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c59cc: 0x0  nop
    ctx->pc = 0x1c59ccu;
    // NOP
    // 0x1c59d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c59d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c59d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C59D4u;
    {
        const bool branch_taken_0x1c59d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c59d4) {
            ctx->pc = 0x1C59E8u;
            goto label_1c59e8;
        }
    }
    ctx->pc = 0x1C59DCu;
    // 0x1c59dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C59DCu;
    {
        const bool branch_taken_0x1c59dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C59E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C59DCu;
        // 0x1c59e0: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59dc) {
            ctx->pc = 0x1C59F0u;
            goto label_1c59f0;
        }
    }
    ctx->pc = 0x1C59E4u;
    // 0x1c59e4: 0x0  nop
    ctx->pc = 0x1c59e4u;
    // NOP
label_1c59e8:
    // 0x1c59e8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c59e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c59ec: 0x0  nop
    ctx->pc = 0x1c59ecu;
    // NOP
label_1c59f0:
    // 0x1c59f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1c59f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c59f4: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x1c59f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c59f8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C59F8u;
    SET_GPR_U32(ctx, 31, 0x1C5A00u);
    ctx->pc = 0x1C59FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C59F8u;
    // 0x1c59fc: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C59F8u, 0x1C5A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A00u;
label_1c5a00:
    // 0x1c5a00: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5a04: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1c5a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c5a08: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5a0c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C5A14u);
    ctx->pc = 0x1C5A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A0Cu;
    // 0x1c5a10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5A0Cu, 0x1C5A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A14u;
label_1c5a14:
    // 0x1c5a14: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1C5A14u;
    {
        const bool branch_taken_0x1c5a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5a14) {
            ctx->pc = 0x1C5AC0u;
            goto label_1c5ac0;
        }
    }
    ctx->pc = 0x1C5A1Cu;
    // 0x1c5a1c: 0x0  nop
    ctx->pc = 0x1c5a1cu;
    // NOP
label_1c5a20:
    // 0x1c5a20: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c5a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5a24: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1c5a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c5a28: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1c5a28u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1c5a2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c5a30: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c5a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c5a34: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1c5a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c5a38: 0xc0414d0  jal         func_105340
    ctx->pc = 0x1C5A38u;
    SET_GPR_U32(ctx, 31, 0x1C5A40u);
    ctx->pc = 0x1C5A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A38u;
    // 0x1c5a3c: 0x703021  addu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x1C5A38u, 0x1C5A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A40u;
label_1c5a40:
    // 0x1c5a40: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x1c5a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1c5a44: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c5a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c5a48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c5a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a4c: 0xc041442  jal         func_105108
    ctx->pc = 0x1C5A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C5A54u);
    ctx->pc = 0x1C5A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A4Cu;
    // 0x1c5a50: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C5A4Cu, 0x1C5A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A54u;
label_1c5a54:
    // 0x1c5a54: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x1c5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1c5a58: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c5a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1c5a5c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c5a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a60: 0xc041442  jal         func_105108
    ctx->pc = 0x1C5A60u;
    SET_GPR_U32(ctx, 31, 0x1C5A68u);
    ctx->pc = 0x1C5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A60u;
    // 0x1c5a64: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C5A60u, 0x1C5A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A68u;
label_1c5a68:
    // 0x1c5a68: 0x8e820094  lw          $v0, 0x94($s4)
    ctx->pc = 0x1c5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x1c5a6c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c5a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1c5a70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c5a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5a74: 0xc041442  jal         func_105108
    ctx->pc = 0x1C5A74u;
    SET_GPR_U32(ctx, 31, 0x1C5A7Cu);
    ctx->pc = 0x1C5A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A74u;
    // 0x1c5a78: 0x24450140  addiu       $a1, $v0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1C5A74u, 0x1C5A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A7Cu;
label_1c5a7c:
    // 0x1c5a7c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c5a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c5a80: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1C5A80u;
    SET_GPR_U32(ctx, 31, 0x1C5A88u);
    ctx->pc = 0x1C5A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5A80u;
    // 0x1c5a84: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1C5A80u, 0x1C5A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5A88u;
label_1c5a88:
    // 0x1c5a88: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c5a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c5a8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c5a8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5a90: 0x0  nop
    ctx->pc = 0x1c5a90u;
    // NOP
    // 0x1c5a94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c5a94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5a98: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5A98u;
    {
        const bool branch_taken_0x1c5a98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5A98u;
        // 0x1c5a9c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a98) {
            ctx->pc = 0x1C5AC0u;
            goto label_1c5ac0;
        }
    }
    ctx->pc = 0x1C5AA0u;
    // 0x1c5aa0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c5aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c5aa4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1C5AA4u;
    SET_GPR_U32(ctx, 31, 0x1C5AACu);
    ctx->pc = 0x1C5AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5AA4u;
    // 0x1c5aa8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1C5AA4u, 0x1C5AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5AACu;
label_1c5aac:
    // 0x1c5aac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c5aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c5ab0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1c5ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c5ab4: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1c5ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5ab8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1C5AB8u;
    SET_GPR_U32(ctx, 31, 0x1C5AC0u);
    ctx->pc = 0x1C5ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5AB8u;
    // 0x1c5abc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1C5AB8u, 0x1C5AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5AC0u;
label_1c5ac0:
    // 0x1c5ac0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c5ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c5ac4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1c5ac4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5ac8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c5ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c5acc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c5accu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5ad0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c5ad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5ad4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c5ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5ad8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c5ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5ADCu;
        // 0x1c5ae0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5AE4u;
}
