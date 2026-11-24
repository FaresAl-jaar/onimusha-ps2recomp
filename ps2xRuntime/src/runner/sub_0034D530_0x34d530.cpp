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

// Function: sub_0034D530
// Address: 0x34d530 - 0x34d6b4
void sub_0034D530_0x34d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D530_0x34d530");
#endif

    switch (ctx->pc) {
        case 0x34d570u: goto label_34d570;
        case 0x34d5c4u: goto label_34d5c4;
        case 0x34d5d4u: goto label_34d5d4;
        case 0x34d624u: goto label_34d624;
        case 0x34d644u: goto label_34d644;
        case 0x34d654u: goto label_34d654;
        case 0x34d68cu: goto label_34d68c;
        case 0x34d69cu: goto label_34d69c;
        default: break;
    }

    ctx->pc = 0x34d530u;

    // 0x34d530: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x34d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x34d534: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34d534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34d538: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34d538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34d53c: 0x24427f30  addiu       $v0, $v0, 0x7F30
    ctx->pc = 0x34d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
    // 0x34d540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34d540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34d544: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x34d544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34d548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d54c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x34d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34d550: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x34d550u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x657F30u));
    // 0x34d554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34d554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d558: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34d558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34d55c: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x34d55cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x34d560: 0x24427f40  addiu       $v0, $v0, 0x7F40
    ctx->pc = 0x34d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32576));
    // 0x34d564: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x34d564u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x657F40u));
    // 0x34d568: 0xc0d3518  jal         func_34D460
    ctx->pc = 0x34D568u;
    SET_GPR_U32(ctx, 31, 0x34D570u);
    ctx->pc = 0x34D56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D568u;
    // 0x34d56c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D460u, 0x34D568u, 0x34D570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D570u;
label_34d570:
    // 0x34d570: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34d570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d574: 0x1220004a  beqz        $s1, . + 4 + (0x4A << 2)
    ctx->pc = 0x34D574u;
    {
        const bool branch_taken_0x34d574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d574) {
            ctx->pc = 0x34D6A0u;
            goto label_34d6a0;
        }
    }
    ctx->pc = 0x34D57Cu;
    // 0x34d57c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x34d57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34d580: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x34d580u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x34d584: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D584u;
    {
        const bool branch_taken_0x34d584 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d584) {
            ctx->pc = 0x34D598u;
            goto label_34d598;
        }
    }
    ctx->pc = 0x34D58Cu;
    // 0x34d58c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x34D58Cu;
    {
        const bool branch_taken_0x34d58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D58Cu;
        // 0x34d590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d58c) {
            ctx->pc = 0x34D5B8u;
            goto label_34d5b8;
        }
    }
    ctx->pc = 0x34D594u;
    // 0x34d594: 0x0  nop
    ctx->pc = 0x34d594u;
    // NOP
label_34d598:
    // 0x34d598: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x34d598u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x34d59c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D59Cu;
    {
        const bool branch_taken_0x34d59c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d59c) {
            ctx->pc = 0x34D5B0u;
            goto label_34d5b0;
        }
    }
    ctx->pc = 0x34D5A4u;
    // 0x34d5a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34D5A4u;
    {
        const bool branch_taken_0x34d5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D5A4u;
        // 0x34d5a8: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d5a4) {
            ctx->pc = 0x34D5B8u;
            goto label_34d5b8;
        }
    }
    ctx->pc = 0x34D5ACu;
    // 0x34d5ac: 0x0  nop
    ctx->pc = 0x34d5acu;
    // NOP
label_34d5b0:
    // 0x34d5b0: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x34d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x34d5b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34d5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34d5b8:
    // 0x34d5b8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x34d5b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34d5bc: 0xc04150c  jal         func_105430
    ctx->pc = 0x34D5BCu;
    SET_GPR_U32(ctx, 31, 0x34D5C4u);
    ctx->pc = 0x34D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D5BCu;
    // 0x34d5c0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x34D5BCu, 0x34D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D5C4u;
label_34d5c4:
    // 0x34d5c4: 0x862600c2  lh          $a2, 0xC2($s1)
    ctx->pc = 0x34d5c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x34d5c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x34d5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34d5cc: 0xc04d64c  jal         func_135930
    ctx->pc = 0x34D5CCu;
    SET_GPR_U32(ctx, 31, 0x34D5D4u);
    ctx->pc = 0x34D5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D5CCu;
    // 0x34d5d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135930u, 0x34D5CCu, 0x34D5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D5D4u;
label_34d5d4:
    // 0x34d5d4: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x34d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34d5d8: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x34d5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34d5dc: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x34d5dcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d5e0: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x34d5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34d5e4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x34d5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34d5e8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x34d5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34d5ec: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x34d5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34d5f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34d5f4: 0x7d090000  sq          $t1, 0x0($t0)
    ctx->pc = 0x34d5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 9));
    // 0x34d5f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d5f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d5fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34d5fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d600: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x34d600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34d604: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x34d604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x34d608: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34d608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34d60c: 0x24427f50  addiu       $v0, $v0, 0x7F50
    ctx->pc = 0x34d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32592));
    // 0x34d610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34d610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34d614: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x34d614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x34d618: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x34d618u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34d61c: 0xc041442  jal         func_105108
    ctx->pc = 0x34D61Cu;
    SET_GPR_U32(ctx, 31, 0x34D624u);
    ctx->pc = 0x34D620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D61Cu;
    // 0x34d620: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x34D61Cu, 0x34D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D624u;
label_34d624:
    // 0x34d624: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x34d624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34d628: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34d628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x34d62c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34d62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34d630: 0x24427fc0  addiu       $v0, $v0, 0x7FC0
    ctx->pc = 0x34d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32704));
    // 0x34d634: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34d634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x34d638: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34d638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d63c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x34D63Cu;
    SET_GPR_U32(ctx, 31, 0x34D644u);
    ctx->pc = 0x34D640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D63Cu;
    // 0x34d640: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x34D63Cu, 0x34D644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D644u;
label_34d644:
    // 0x34d644: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x34d644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34d648: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x34d648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34d64c: 0xc041442  jal         func_105108
    ctx->pc = 0x34D64Cu;
    SET_GPR_U32(ctx, 31, 0x34D654u);
    ctx->pc = 0x34D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D64Cu;
    // 0x34d650: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x34D64Cu, 0x34D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D654u;
label_34d654:
    // 0x34d654: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34d654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34d658: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34d658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d65c: 0xa3a300ad  sb          $v1, 0xAD($sp)
    ctx->pc = 0x34d65cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 173), (uint8_t)GPR_U32(ctx, 3));
    // 0x34d660: 0x8f8386e4  lw          $v1, -0x791C($gp)
    ctx->pc = 0x34d660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936292)));
    // 0x34d664: 0xa3a000ac  sb          $zero, 0xAC($sp)
    ctx->pc = 0x34d664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 0));
    // 0x34d668: 0xa3a400ae  sb          $a0, 0xAE($sp)
    ctx->pc = 0x34d668u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 174), (uint8_t)GPR_U32(ctx, 4));
    // 0x34d66c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x34D66Cu;
    {
        const bool branch_taken_0x34d66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D66Cu;
        // 0x34d670: 0xa3a000af  sb          $zero, 0xAF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d66c) {
            ctx->pc = 0x34D6A0u;
            goto label_34d6a0;
        }
    }
    ctx->pc = 0x34D674u;
    // 0x34d674: 0x97838818  lhu         $v1, -0x77E8($gp)
    ctx->pc = 0x34d674u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x34d678: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x34D678u;
    {
        const bool branch_taken_0x34d678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D678u;
        // 0x34d67c: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d678) {
            ctx->pc = 0x34D6A0u;
            goto label_34d6a0;
        }
    }
    ctx->pc = 0x34D680u;
    // 0x34d680: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x34d680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34d684: 0xc063f08  jal         func_18FC20
    ctx->pc = 0x34D684u;
    SET_GPR_U32(ctx, 31, 0x34D68Cu);
    ctx->pc = 0x34D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D684u;
    // 0x34d688: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FC20u, 0x34D684u, 0x34D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D68Cu;
label_34d68c:
    // 0x34d68c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x34d68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x34d690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34d690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d694: 0xc0ceb48  jal         func_33AD20
    ctx->pc = 0x34D694u;
    SET_GPR_U32(ctx, 31, 0x34D69Cu);
    ctx->pc = 0x34D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D694u;
    // 0x34d698: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AD20u, 0x34D694u, 0x34D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D69Cu;
label_34d69c:
    // 0x34d69c: 0x0  nop
    ctx->pc = 0x34d69cu;
    // NOP
label_34d6a0:
    // 0x34d6a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34d6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d6a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34d6a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d6a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x34D6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D6ACu;
        // 0x34d6b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D6B4u;
}
