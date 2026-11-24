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

// Function: sub_0025F650
// Address: 0x25f650 - 0x25f7c8
void sub_0025F650_0x25f650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F650_0x25f650");
#endif

    switch (ctx->pc) {
        case 0x25f6a4u: goto label_25f6a4;
        case 0x25f6b4u: goto label_25f6b4;
        case 0x25f6c8u: goto label_25f6c8;
        case 0x25f6f0u: goto label_25f6f0;
        case 0x25f730u: goto label_25f730;
        case 0x25f740u: goto label_25f740;
        case 0x25f758u: goto label_25f758;
        case 0x25f770u: goto label_25f770;
        case 0x25f780u: goto label_25f780;
        default: break;
    }

    ctx->pc = 0x25f650u;

    // 0x25f650: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25f650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25f654: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25f654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25f658: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25f658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25f65c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25f65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25f660: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x25f660u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f664: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25f664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25f668: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x25f668u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f66c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25f66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25f670: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x25f670u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f674: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25f674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25f678: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25f678u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f67c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25f67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25f680: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25f680u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f684: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25f684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25f688: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25f688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f68c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25f68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25f690: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x25f690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f694: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x25f694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f698: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x25f698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x25f69c: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25F69Cu;
    SET_GPR_U32(ctx, 31, 0x25F6A4u);
    ctx->pc = 0x25F6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F69Cu;
    // 0x25f6a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25F69Cu, 0x25F6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6A4u;
label_25f6a4:
    // 0x25f6a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F6A4u;
    {
        const bool branch_taken_0x25f6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6A4u;
        // 0x25f6a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6a4) {
            ctx->pc = 0x25F6B8u;
            goto label_25f6b8;
        }
    }
    ctx->pc = 0x25F6ACu;
    // 0x25f6ac: 0xc097a14  jal         func_25E850
    ctx->pc = 0x25F6ACu;
    SET_GPR_U32(ctx, 31, 0x25F6B4u);
    ctx->pc = 0x25F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6ACu;
    // 0x25f6b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E850u, 0x25F6ACu, 0x25F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6B4u;
label_25f6b4:
    // 0x25f6b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f6b8:
    // 0x25f6b8: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x25F6B8u;
    {
        const bool branch_taken_0x25f6b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6B8u;
        // 0x25f6bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6b8) {
            ctx->pc = 0x25F790u;
            goto label_25f790;
        }
    }
    ctx->pc = 0x25F6C0u;
    // 0x25f6c0: 0xc096c94  jal         func_25B250
    ctx->pc = 0x25F6C0u;
    SET_GPR_U32(ctx, 31, 0x25F6C8u);
    ctx->pc = 0x25F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6C0u;
    // 0x25f6c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B250u, 0x25F6C0u, 0x25F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6C8u;
label_25f6c8:
    // 0x25f6c8: 0x90450021  lbu         $a1, 0x21($v0)
    ctx->pc = 0x25f6c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x25f6cc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x25f6ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6d0: 0x90460022  lbu         $a2, 0x22($v0)
    ctx->pc = 0x25f6d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x25f6d4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x25f6d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6d8: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x25f6d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25f6dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6e4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x25f6e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f6e8: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x25F6E8u;
    SET_GPR_U32(ctx, 31, 0x25F6F0u);
    ctx->pc = 0x25F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6E8u;
    // 0x25f6ec: 0x262b0030  addiu       $t3, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x25F6E8u, 0x25F6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6F0u;
label_25f6f0:
    // 0x25f6f0: 0x92050064  lbu         $a1, 0x64($s0)
    ctx->pc = 0x25f6f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25f6f4: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x25f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x25f6f8: 0x93a300a0  lbu         $v1, 0xA0($sp)
    ctx->pc = 0x25f6f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25f6fc: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x25f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x25f700: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x25f700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x25f704: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x25f704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x25f708: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x25f708u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25f70c: 0x7e030070  sq          $v1, 0x70($s0)
    ctx->pc = 0x25f70cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 3));
    // 0x25f710: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x25f710u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x25f714: 0x7e030080  sq          $v1, 0x80($s0)
    ctx->pc = 0x25f714u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 3));
    // 0x25f718: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x25f718u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25f71c: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x25f71cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x25f720: 0x7a230030  lq          $v1, 0x30($s1)
    ctx->pc = 0x25f720u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x25f724: 0x7e0300a0  sq          $v1, 0xA0($s0)
    ctx->pc = 0x25f724u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 3));
    // 0x25f728: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25F728u;
    SET_GPR_U32(ctx, 31, 0x25F730u);
    ctx->pc = 0x25F72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F728u;
    // 0x25f72c: 0xa6020056  sh          $v0, 0x56($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25F728u, 0x25F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F730u;
label_25f730:
    // 0x25f730: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F730u;
    {
        const bool branch_taken_0x25f730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F730u;
        // 0x25f734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f730) {
            ctx->pc = 0x25F740u;
            goto label_25f740;
        }
    }
    ctx->pc = 0x25F738u;
    // 0x25f738: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x25F738u;
    SET_GPR_U32(ctx, 31, 0x25F740u);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x25F738u, 0x25F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F740u;
label_25f740:
    // 0x25f740: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x25f740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x25f744: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x25f744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x25f748: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F748u;
    {
        const bool branch_taken_0x25f748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f748) {
            ctx->pc = 0x25F760u;
            goto label_25f760;
        }
    }
    ctx->pc = 0x25F750u;
    // 0x25f750: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25F750u;
    SET_GPR_U32(ctx, 31, 0x25F758u);
    ctx->pc = 0x25F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F750u;
    // 0x25f754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25F750u, 0x25F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F758u;
label_25f758:
    // 0x25f758: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25F758u;
    {
        const bool branch_taken_0x25f758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F758u;
        // 0x25f75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f758) {
            ctx->pc = 0x25F798u;
            goto label_25f798;
        }
    }
    ctx->pc = 0x25F760u;
label_25f760:
    // 0x25f760: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25f760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f764: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25f764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f768: 0xc096c9c  jal         func_25B270
    ctx->pc = 0x25F768u;
    SET_GPR_U32(ctx, 31, 0x25F770u);
    ctx->pc = 0x25F76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F768u;
    // 0x25f76c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B270u, 0x25F768u, 0x25F770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F770u;
label_25f770:
    // 0x25f770: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F770u;
    {
        const bool branch_taken_0x25f770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F770u;
        // 0x25f774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f770) {
            ctx->pc = 0x25F788u;
            goto label_25f788;
        }
    }
    ctx->pc = 0x25F778u;
    // 0x25f778: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25F778u;
    SET_GPR_U32(ctx, 31, 0x25F780u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25F778u, 0x25F780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F780u;
label_25f780:
    // 0x25f780: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25F780u;
    {
        const bool branch_taken_0x25f780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F780u;
        // 0x25f784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f780) {
            ctx->pc = 0x25F798u;
            goto label_25f798;
        }
    }
    ctx->pc = 0x25F788u;
label_25f788:
    // 0x25f788: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F788u;
    {
        const bool branch_taken_0x25f788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F788u;
        // 0x25f78c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f788) {
            ctx->pc = 0x25F798u;
            goto label_25f798;
        }
    }
    ctx->pc = 0x25F790u;
label_25f790:
    // 0x25f790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f794: 0x0  nop
    ctx->pc = 0x25f794u;
    // NOP
label_25f798:
    // 0x25f798: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25f798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25f79c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25f79cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25f7a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25f7a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25f7a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25f7a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f7a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25f7a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f7ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25f7acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f7b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25f7b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f7b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f7b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f7b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25f7b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f7bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x25F7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7C0u;
        // 0x25f7c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F7C8u;
}
