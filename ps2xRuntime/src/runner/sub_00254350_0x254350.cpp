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

// Function: sub_00254350
// Address: 0x254350 - 0x254494
void sub_00254350_0x254350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254350_0x254350");
#endif

    switch (ctx->pc) {
        case 0x2543bcu: goto label_2543bc;
        case 0x2543d8u: goto label_2543d8;
        case 0x2543f4u: goto label_2543f4;
        case 0x254410u: goto label_254410;
        case 0x254438u: goto label_254438;
        case 0x254468u: goto label_254468;
        default: break;
    }

    ctx->pc = 0x254350u;

    // 0x254350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254354: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x254354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x254358: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x254358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25435c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254360: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254364: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x254364u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x254368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x254368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25436c: 0x90c80002  lbu         $t0, 0x2($a2)
    ctx->pc = 0x25436cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x254370: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x254370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x254374: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x254374u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x254378: 0x82200  sll         $a0, $t0, 8
    ctx->pc = 0x254378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x25437c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x25437cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x254380: 0x11020031  beq         $t0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x254380u;
    {
        const bool branch_taken_0x254380 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x254384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254380u;
        // 0x254384: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254380) {
            ctx->pc = 0x254448u;
            goto label_254448;
        }
    }
    ctx->pc = 0x254388u;
    // 0x254388: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x254388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x25438c: 0x11020024  beq         $t0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x25438Cu;
    {
        const bool branch_taken_0x25438c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x254390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25438Cu;
        // 0x254390: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25438c) {
            ctx->pc = 0x254420u;
            goto label_254420;
        }
    }
    ctx->pc = 0x254394u;
    // 0x254394: 0x11020014  beq         $t0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x254394u;
    {
        const bool branch_taken_0x254394 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x254394) {
            ctx->pc = 0x2543E8u;
            goto label_2543e8;
        }
    }
    ctx->pc = 0x25439Cu;
    // 0x25439c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x25439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2543a0: 0x11020003  beq         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2543A0u;
    {
        const bool branch_taken_0x2543a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2543a0) {
            ctx->pc = 0x2543B0u;
            goto label_2543b0;
        }
    }
    ctx->pc = 0x2543A8u;
    // 0x2543a8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2543A8u;
    {
        const bool branch_taken_0x2543a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2543a8) {
            ctx->pc = 0x254478u;
            goto label_254478;
        }
    }
    ctx->pc = 0x2543B0u;
label_2543b0:
    // 0x2543b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2543b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543b4: 0xc095078  jal         func_2541E0
    ctx->pc = 0x2543B4u;
    SET_GPR_U32(ctx, 31, 0x2543BCu);
    ctx->pc = 0x2543B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2543B4u;
    // 0x2543b8: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2541E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2541E0u, 0x2543B4u, 0x2543BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2543BCu;
label_2543bc:
    // 0x2543bc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2543bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2543c0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2543c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543c4: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x2543c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x2543c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2543c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543cc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2543ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2543d0: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x2543D0u;
    SET_GPR_U32(ctx, 31, 0x2543D8u);
    ctx->pc = 0x2543D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2543D0u;
    // 0x2543d4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x2543D0u, 0x2543D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2543D8u;
label_2543d8:
    // 0x2543d8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2543d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2543dc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2543DCu;
    {
        const bool branch_taken_0x2543dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2543E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543DCu;
        // 0x2543e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2543dc) {
            ctx->pc = 0x254480u;
            goto label_254480;
        }
    }
    ctx->pc = 0x2543E4u;
    // 0x2543e4: 0x0  nop
    ctx->pc = 0x2543e4u;
    // NOP
label_2543e8:
    // 0x2543e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2543e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543ec: 0xc095078  jal         func_2541E0
    ctx->pc = 0x2543ECu;
    SET_GPR_U32(ctx, 31, 0x2543F4u);
    ctx->pc = 0x2543F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2543ECu;
    // 0x2543f0: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2541E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2541E0u, 0x2543ECu, 0x2543F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2543F4u;
label_2543f4:
    // 0x2543f4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2543f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2543f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2543f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543fc: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x2543fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x254400: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254404: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x254404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x254408: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x254408u;
    SET_GPR_U32(ctx, 31, 0x254410u);
    ctx->pc = 0x25440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254408u;
    // 0x25440c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x254408u, 0x254410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254410u;
label_254410:
    // 0x254410: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x254410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x254414: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x254414u;
    {
        const bool branch_taken_0x254414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254414u;
        // 0x254418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254414) {
            ctx->pc = 0x254480u;
            goto label_254480;
        }
    }
    ctx->pc = 0x25441Cu;
    // 0x25441c: 0x0  nop
    ctx->pc = 0x25441cu;
    // NOP
label_254420:
    // 0x254420: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x254420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x254424: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x254424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254428: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x254428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x25442c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x25442cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x254430: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x254430u;
    SET_GPR_U32(ctx, 31, 0x254438u);
    ctx->pc = 0x254434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254430u;
    // 0x254434: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x254430u, 0x254438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254438u;
label_254438:
    // 0x254438: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x254438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x25443c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25443Cu;
    {
        const bool branch_taken_0x25443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25443Cu;
        // 0x254440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25443c) {
            ctx->pc = 0x254480u;
            goto label_254480;
        }
    }
    ctx->pc = 0x254444u;
    // 0x254444: 0x0  nop
    ctx->pc = 0x254444u;
    // NOP
label_254448:
    // 0x254448: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x254448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25444c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x25444cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x254450: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x254450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254454: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x254454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x254458: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x254458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x25445c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x25445cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254460: 0xc04cae8  jal         func_132BA0
    ctx->pc = 0x254460u;
    SET_GPR_U32(ctx, 31, 0x254468u);
    ctx->pc = 0x254464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254460u;
    // 0x254464: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132BA0u, 0x254460u, 0x254468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254468u;
label_254468:
    // 0x254468: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x254468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x25446c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25446Cu;
    {
        const bool branch_taken_0x25446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25446Cu;
        // 0x254470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25446c) {
            ctx->pc = 0x254480u;
            goto label_254480;
        }
    }
    ctx->pc = 0x254474u;
    // 0x254474: 0x0  nop
    ctx->pc = 0x254474u;
    // NOP
label_254478:
    // 0x254478: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25447c: 0x0  nop
    ctx->pc = 0x25447cu;
    // NOP
label_254480:
    // 0x254480: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x254480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25448c: 0x3e00008  jr          $ra
    ctx->pc = 0x25448Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25448Cu;
        // 0x254490: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25448Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254494u;
}
