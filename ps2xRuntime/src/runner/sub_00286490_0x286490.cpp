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

// Function: sub_00286490
// Address: 0x286490 - 0x2866cc
void sub_00286490_0x286490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286490_0x286490");
#endif

    switch (ctx->pc) {
        case 0x2864e0u: goto label_2864e0;
        case 0x2864f4u: goto label_2864f4;
        case 0x286500u: goto label_286500;
        case 0x286514u: goto label_286514;
        case 0x286530u: goto label_286530;
        case 0x286548u: goto label_286548;
        case 0x286554u: goto label_286554;
        case 0x286570u: goto label_286570;
        case 0x28657cu: goto label_28657c;
        case 0x2865d8u: goto label_2865d8;
        case 0x286618u: goto label_286618;
        case 0x286628u: goto label_286628;
        case 0x286638u: goto label_286638;
        case 0x286684u: goto label_286684;
        default: break;
    }

    ctx->pc = 0x286490u;

    // 0x286490: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x286490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x286494: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x286494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x286498: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x286498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28649c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28649cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2864a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2864a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2864a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2864a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2864a8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2864a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2864acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2864b0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2864b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2864b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2864b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2864b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2864bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2864c0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2864c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2864c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2864c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2864c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864cc: 0x90e50010  lbu         $a1, 0x10($a3)
    ctx->pc = 0x2864ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2864d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2864d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864d4: 0x90e60011  lbu         $a2, 0x11($a3)
    ctx->pc = 0x2864d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 17)));
    // 0x2864d8: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x2864D8u;
    SET_GPR_U32(ctx, 31, 0x2864E0u);
    ctx->pc = 0x2864DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2864D8u;
    // 0x2864dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x2864D8u, 0x2864E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2864E0u;
label_2864e0:
    // 0x2864e0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2864e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2864e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2864e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864e8: 0xdc265ae8  ld          $a2, 0x5AE8($at)
    ctx->pc = 0x2864e8u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x665AE8u));
    // 0x2864ec: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2864ECu;
    SET_GPR_U32(ctx, 31, 0x2864F4u);
    ctx->pc = 0x2864F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2864ECu;
    // 0x2864f0: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2864ECu, 0x2864F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2864F4u;
label_2864f4:
    // 0x2864f4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2864f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2864f8: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x2864F8u;
    SET_GPR_U32(ctx, 31, 0x286500u);
    ctx->pc = 0x2864FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2864F8u;
    // 0x2864fc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x2864F8u, 0x286500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286500u;
label_286500:
    // 0x286500: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x286500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x286504: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x286504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x286508: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x286508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x28650c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x28650Cu;
    SET_GPR_U32(ctx, 31, 0x286514u);
    ctx->pc = 0x286510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28650Cu;
    // 0x286510: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x28650Cu, 0x286514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286514u;
label_286514:
    // 0x286514: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x286514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x286518: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x286518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x28651c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28651cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286520: 0x1020005f  beqz        $at, . + 4 + (0x5F << 2)
    ctx->pc = 0x286520u;
    {
        const bool branch_taken_0x286520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x286524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286520u;
        // 0x286524: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286520) {
            ctx->pc = 0x2866A0u;
            goto label_2866a0;
        }
    }
    ctx->pc = 0x286528u;
    // 0x286528: 0x15b43c  dsll32      $s6, $s5, 16
    ctx->pc = 0x286528u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 21) << (32 + 16));
    // 0x28652c: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x28652cu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
label_286530:
    // 0x286530: 0x86630010  lh          $v1, 0x10($s3)
    ctx->pc = 0x286530u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x286534: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x286534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x286538: 0x10620053  beq         $v1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x286538u;
    {
        const bool branch_taken_0x286538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286538u;
        // 0x28653c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286538) {
            ctx->pc = 0x286688u;
            goto label_286688;
        }
    }
    ctx->pc = 0x286540u;
    // 0x286540: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x286540u;
    SET_GPR_U32(ctx, 31, 0x286548u);
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x286540u, 0x286548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286548u;
label_286548:
    // 0x286548: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x286548u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28654c: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x28654Cu;
    SET_GPR_U32(ctx, 31, 0x286554u);
    ctx->pc = 0x286550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28654Cu;
    // 0x286550: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x28654Cu, 0x286554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286554u;
label_286554:
    // 0x286554: 0x92680012  lbu         $t0, 0x12($s3)
    ctx->pc = 0x286554u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x286558: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x286558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x28655c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x28655cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286560: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x286560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x286564: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x286564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x286568: 0xc074458  jal         func_1D1160
    ctx->pc = 0x286568u;
    SET_GPR_U32(ctx, 31, 0x286570u);
    ctx->pc = 0x28656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286568u;
    // 0x28656c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x286568u, 0x286570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286570u;
label_286570:
    // 0x286570: 0x9244001d  lbu         $a0, 0x1D($s2)
    ctx->pc = 0x286570u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 29)));
    // 0x286574: 0xc0a1224  jal         func_284890
    ctx->pc = 0x286574u;
    SET_GPR_U32(ctx, 31, 0x28657Cu);
    ctx->pc = 0x286578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286574u;
    // 0x286578: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284890u, 0x286574u, 0x28657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28657Cu;
label_28657c:
    // 0x28657c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x28657cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286580: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x286580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x286584: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x286584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x286588: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x286588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x28658c: 0x7c220080  sq          $v0, 0x80($at)
    ctx->pc = 0x28658cu;
    runtime->Store128(rdram, ctx, 0x70000080u, GPR_VEC(ctx, 2));
    // 0x286590: 0x9242001e  lbu         $v0, 0x1E($s2)
    ctx->pc = 0x286590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x286594: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x286594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x286598: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x286598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28659c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x28659cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2865a0: 0xac22008c  sw          $v0, 0x8C($at)
    ctx->pc = 0x2865a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 140), GPR_U32(ctx, 2));
    // 0x2865a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2865a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2865a8: 0x78220080  lq          $v0, 0x80($at)
    ctx->pc = 0x2865a8u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000080u));
    // 0x2865ac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2865acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2865b0: 0x7c220090  sq          $v0, 0x90($at)
    ctx->pc = 0x2865b0u;
    runtime->Store128(rdram, ctx, 0x70000090u, GPR_VEC(ctx, 2));
    // 0x2865b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2865b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2865b8: 0x78220080  lq          $v0, 0x80($at)
    ctx->pc = 0x2865b8u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000080u));
    // 0x2865bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2865bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2865c0: 0x7c2200a0  sq          $v0, 0xA0($at)
    ctx->pc = 0x2865c0u;
    runtime->Store128(rdram, ctx, 0x700000A0u, GPR_VEC(ctx, 2));
    // 0x2865c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2865c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2865c8: 0x78220080  lq          $v0, 0x80($at)
    ctx->pc = 0x2865c8u;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000080u));
    // 0x2865cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2865ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2865d0: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x2865D0u;
    SET_GPR_U32(ctx, 31, 0x2865D8u);
    ctx->pc = 0x2865D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865D0u;
    // 0x2865d4: 0x7c2200b0  sq          $v0, 0xB0($at) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 1), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x2865D0u, 0x2865D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865D8u;
label_2865d8:
    // 0x2865d8: 0x86a30008  lh          $v1, 0x8($s5)
    ctx->pc = 0x2865d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2865dc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2865dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2865e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2865e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2865e4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x2865e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x2865e8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2865e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2865ec: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2865ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2865f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2865f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2865f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2865f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2865f8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2865f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2865fc: 0x0  nop
    ctx->pc = 0x2865fcu;
    // NOP
    // 0x286600: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x286600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x286604: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x286604u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x286608: 0x0  nop
    ctx->pc = 0x286608u;
    // NOP
    // 0x28660c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x28660cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x286610: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x286610u;
    SET_GPR_U32(ctx, 31, 0x286618u);
    ctx->pc = 0x286614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286610u;
    // 0x286614: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x286610u, 0x286618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286618u;
label_286618:
    // 0x286618: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x286618u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x28661c: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x28661cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x286620: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x286620u;
    SET_GPR_U32(ctx, 31, 0x286628u);
    ctx->pc = 0x286624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286620u;
    // 0x286624: 0x34c40010  ori         $a0, $a2, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x286620u, 0x286628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286628u;
label_286628:
    // 0x286628: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x286628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x28662c: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x28662cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x286630: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x286630u;
    SET_GPR_U32(ctx, 31, 0x286638u);
    ctx->pc = 0x286634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286630u;
    // 0x286634: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x286630u, 0x286638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286638u;
label_286638:
    // 0x286638: 0x86a3000a  lh          $v1, 0xA($s5)
    ctx->pc = 0x286638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x28663c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x28663cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x286640: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x286640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x286644: 0x34a60040  ori         $a2, $a1, 0x40
    ctx->pc = 0x286644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x286648: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x286648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28664c: 0x34a70080  ori         $a3, $a1, 0x80
    ctx->pc = 0x28664cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x286650: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x286650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286654: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x286654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286658: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x286658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x28665c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28665cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286660: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x286660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x286664: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x286664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x286668: 0x0  nop
    ctx->pc = 0x286668u;
    // NOP
    // 0x28666c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28666cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x286670: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x286670u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x286674: 0x0  nop
    ctx->pc = 0x286674u;
    // NOP
    // 0x286678: 0x0  nop
    ctx->pc = 0x286678u;
    // NOP
    // 0x28667c: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x28667Cu;
    SET_GPR_U32(ctx, 31, 0x286684u);
    ctx->pc = 0x286680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28667Cu;
    // 0x286680: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x28667Cu, 0x286684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286684u;
label_286684:
    // 0x286684: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x286684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_286688:
    // 0x286688: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x286688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x28668c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28668cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x286690: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x286690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x286694: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x286694u;
    {
        const bool branch_taken_0x286694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286694u;
        // 0x286698: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286694) {
            ctx->pc = 0x286530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286530;
        }
    }
    ctx->pc = 0x28669Cu;
    // 0x28669c: 0x0  nop
    ctx->pc = 0x28669cu;
    // NOP
label_2866a0:
    // 0x2866a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2866a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866a4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2866a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2866a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2866a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2866ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2866acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2866b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2866b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2866b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2866b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2866b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2866b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2866bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2866bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2866c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2866c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2866c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2866C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2866C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866C4u;
        // 0x2866c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2866CCu;
}
