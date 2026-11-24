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

// Function: sub_0011C5C0
// Address: 0x11c5c0 - 0x11c818
void sub_0011C5C0_0x11c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C5C0_0x11c5c0");
#endif

    switch (ctx->pc) {
        case 0x11c614u: goto label_11c614;
        case 0x11c62cu: goto label_11c62c;
        case 0x11c640u: goto label_11c640;
        case 0x11c650u: goto label_11c650;
        case 0x11c65cu: goto label_11c65c;
        case 0x11c66cu: goto label_11c66c;
        case 0x11c678u: goto label_11c678;
        case 0x11c688u: goto label_11c688;
        case 0x11c694u: goto label_11c694;
        case 0x11c6a4u: goto label_11c6a4;
        case 0x11c6b0u: goto label_11c6b0;
        case 0x11c6c0u: goto label_11c6c0;
        case 0x11c6ccu: goto label_11c6cc;
        case 0x11c6f0u: goto label_11c6f0;
        case 0x11c700u: goto label_11c700;
        case 0x11c710u: goto label_11c710;
        case 0x11c71cu: goto label_11c71c;
        case 0x11c728u: goto label_11c728;
        case 0x11c734u: goto label_11c734;
        case 0x11c73cu: goto label_11c73c;
        case 0x11c7b4u: goto label_11c7b4;
        case 0x11c7c0u: goto label_11c7c0;
        case 0x11c7d4u: goto label_11c7d4;
        case 0x11c7e4u: goto label_11c7e4;
        case 0x11c7f4u: goto label_11c7f4;
        case 0x11c800u: goto label_11c800;
        case 0x11c80cu: goto label_11c80c;
        default: break;
    }

    ctx->pc = 0x11c5c0u;

    // 0x11c5c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11c5c4: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11c5c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11c5c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11c5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11c5cc: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11c5ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11c5d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11c5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11c5d4: 0x3c0e3e3f  lui         $t6, 0x3E3F
    ctx->pc = 0x11c5d4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)15935 << 16));
    // 0x11c5d8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x11c5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x11c5dc: 0x4883f  dsra32      $s1, $a0, 0
    ctx->pc = 0x11c5dcu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11c5e0: 0x22f8824  and         $s1, $s1, $t7
    ctx->pc = 0x11c5e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
    // 0x11c5e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c5e8: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11c5e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11c5ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11c5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11c5f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11c5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11c5f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11c5f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c5f8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x11c5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x11c5fc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x11c5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x11c600: 0x1d1702a  slt         $t6, $t6, $s1
    ctx->pc = 0x11c600u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11c604: 0x15c00006  bnez        $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C604u;
    {
        const bool branch_taken_0x11c604 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C604u;
        // 0x11c608: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c604) {
            ctx->pc = 0x11C620u;
            goto label_11c620;
        }
    }
    ctx->pc = 0x11C60Cu;
    // 0x11c60c: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x11C60Cu;
    SET_GPR_U32(ctx, 31, 0x11C614u);
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x11C60Cu, 0x11C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C614u;
label_11c614:
    // 0x11c614: 0x240f03ff  addiu       $t7, $zero, 0x3FF
    ctx->pc = 0x11c614u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11c618: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x11C618u;
    {
        const bool branch_taken_0x11c618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C618u;
        // 0x11c61c: 0xf7d3c  dsll32      $t7, $t7, 20 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c618) {
            ctx->pc = 0x11C740u;
            goto label_11c740;
        }
    }
    ctx->pc = 0x11C620u;
label_11c620:
    // 0x11c620: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11c620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c624: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C624u;
    SET_GPR_U32(ctx, 31, 0x11C62Cu);
    ctx->pc = 0x11C628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C624u;
    // 0x11c628: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C624u, 0x11C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C62Cu;
label_11c62c:
    // 0x11c62c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11c62cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11c630: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c634: 0xdde53358  ld          $a1, 0x3358($t7)
    ctx->pc = 0x11c634u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x663358u));
    // 0x11c638: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C638u;
    SET_GPR_U32(ctx, 31, 0x11C640u);
    ctx->pc = 0x11C63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C638u;
    // 0x11c63c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C638u, 0x11C640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C640u;
label_11c640:
    // 0x11c640: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11c640u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11c644: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c648: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11C648u;
    SET_GPR_U32(ctx, 31, 0x11C650u);
    ctx->pc = 0x11C64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C648u;
    // 0x11c64c: 0xdde53360  ld          $a1, 0x3360($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 13152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11C648u, 0x11C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C650u;
label_11c650:
    // 0x11c650: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c654: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C654u;
    SET_GPR_U32(ctx, 31, 0x11C65Cu);
    ctx->pc = 0x11C658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C654u;
    // 0x11c658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C654u, 0x11C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C65Cu;
label_11c65c:
    // 0x11c65c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11c65cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11c660: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c664: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11C664u;
    SET_GPR_U32(ctx, 31, 0x11C66Cu);
    ctx->pc = 0x11C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C664u;
    // 0x11c668: 0xdde53368  ld          $a1, 0x3368($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 13160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11C664u, 0x11C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C66Cu;
label_11c66c:
    // 0x11c66c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c670: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C670u;
    SET_GPR_U32(ctx, 31, 0x11C678u);
    ctx->pc = 0x11C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C670u;
    // 0x11c674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C670u, 0x11C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C678u;
label_11c678:
    // 0x11c678: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11c678u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11c67c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c680: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11C680u;
    SET_GPR_U32(ctx, 31, 0x11C688u);
    ctx->pc = 0x11C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C680u;
    // 0x11c684: 0xdde53370  ld          $a1, 0x3370($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 13168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11C680u, 0x11C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C688u;
label_11c688:
    // 0x11c688: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c68c: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C68Cu;
    SET_GPR_U32(ctx, 31, 0x11C694u);
    ctx->pc = 0x11C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C68Cu;
    // 0x11c690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C68Cu, 0x11C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C694u;
label_11c694:
    // 0x11c694: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11c694u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11c698: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c69c: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11C69Cu;
    SET_GPR_U32(ctx, 31, 0x11C6A4u);
    ctx->pc = 0x11C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C69Cu;
    // 0x11c6a0: 0xdde53378  ld          $a1, 0x3378($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 13176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11C69Cu, 0x11C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6A4u;
label_11c6a4:
    // 0x11c6a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6a8: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C6A8u;
    SET_GPR_U32(ctx, 31, 0x11C6B0u);
    ctx->pc = 0x11C6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6A8u;
    // 0x11c6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C6A8u, 0x11C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6B0u;
label_11c6b0:
    // 0x11c6b0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11c6b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11c6b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11c6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6b8: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x11C6B8u;
    SET_GPR_U32(ctx, 31, 0x11C6C0u);
    ctx->pc = 0x11C6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6B8u;
    // 0x11c6bc: 0xdde53380  ld          $a1, 0x3380($t7) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 13184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x11C6B8u, 0x11C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6C0u;
label_11c6c0:
    // 0x11c6c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6c4: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C6C4u;
    SET_GPR_U32(ctx, 31, 0x11C6CCu);
    ctx->pc = 0x11C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6C4u;
    // 0x11c6c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C6C4u, 0x11C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6CCu;
label_11c6cc:
    // 0x11c6cc: 0x3c0f3fd3  lui         $t7, 0x3FD3
    ctx->pc = 0x11c6ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16339 << 16));
    // 0x11c6d0: 0x35ef3332  ori         $t7, $t7, 0x3332
    ctx->pc = 0x11c6d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)13106);
    // 0x11c6d4: 0x1f1782a  slt         $t7, $t7, $s1
    ctx->pc = 0x11c6d4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11c6d8: 0x15e00024  bnez        $t7, . + 4 + (0x24 << 2)
    ctx->pc = 0x11C6D8u;
    {
        const bool branch_taken_0x11c6d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6D8u;
        // 0x11c6dc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6d8) {
            ctx->pc = 0x11C76Cu;
            goto label_11c76c;
        }
    }
    ctx->pc = 0x11C6E0u;
    // 0x11c6e0: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x11c6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x11c6e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6e8: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C6E8u;
    SET_GPR_U32(ctx, 31, 0x11C6F0u);
    ctx->pc = 0x11C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6E8u;
    // 0x11c6ec: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C6E8u, 0x11C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C6F0u;
label_11c6f0:
    // 0x11c6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11c6f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c6f8: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C6F8u;
    SET_GPR_U32(ctx, 31, 0x11C700u);
    ctx->pc = 0x11C6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C6F8u;
    // 0x11c6fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C6F8u, 0x11C700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C700u;
label_11c700:
    // 0x11c700: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c704: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11c704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c708: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C708u;
    SET_GPR_U32(ctx, 31, 0x11C710u);
    ctx->pc = 0x11C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C708u;
    // 0x11c70c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C708u, 0x11C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C710u;
label_11c710:
    // 0x11c710: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c714: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11C714u;
    SET_GPR_U32(ctx, 31, 0x11C71Cu);
    ctx->pc = 0x11C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C714u;
    // 0x11c718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11C714u, 0x11C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C71Cu;
label_11c71c:
    // 0x11c71c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c720: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11C720u;
    SET_GPR_U32(ctx, 31, 0x11C728u);
    ctx->pc = 0x11C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C720u;
    // 0x11c724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11C720u, 0x11C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C728u;
label_11c728:
    // 0x11c728: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x11c728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11c72c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c730: 0x4253c  dsll32      $a0, $a0, 20
    ctx->pc = 0x11c730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 20));
label_11c734:
    // 0x11c734: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11C734u;
    SET_GPR_U32(ctx, 31, 0x11C73Cu);
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11C734u, 0x11C73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C73Cu;
label_11c73c:
    // 0x11c73c: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x11c73cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11c740:
    // 0x11c740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c744: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x11c744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11c748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11c74c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11c74cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c750: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11c750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11c754: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11c754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c758: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x11c758u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11c75c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x11c75cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c760: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x11c760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11c764: 0x3e00008  jr          $ra
    ctx->pc = 0x11C764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C764u;
        // 0x11c768: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C76Cu;
label_11c76c:
    // 0x11c76c: 0x24121fe9  addiu       $s2, $zero, 0x1FE9
    ctx->pc = 0x11c76cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8169));
    // 0x11c770: 0x3c0f3fe9  lui         $t7, 0x3FE9
    ctx->pc = 0x11c770u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16361 << 16));
    // 0x11c774: 0x1f1782a  slt         $t7, $t7, $s1
    ctx->pc = 0x11c774u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11c778: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11C778u;
    {
        const bool branch_taken_0x11c778 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C778u;
        // 0x11c77c: 0x12947c  dsll32      $s2, $s2, 17 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c778) {
            ctx->pc = 0x11C7A4u;
            goto label_11c7a4;
        }
    }
    ctx->pc = 0x11C780u;
    // 0x11c780: 0x3c0fffe0  lui         $t7, 0xFFE0
    ctx->pc = 0x11c780u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65504 << 16));
    // 0x11c784: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x11c784u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x11c788: 0x22f7821  addu        $t7, $s1, $t7
    ctx->pc = 0x11c788u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x11c78c: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x11c78cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x11c790: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11c790u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11c794: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x11c794u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c798: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x11c798u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x11c79c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x11c79cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x11c7a0: 0x2ae9024  and         $s2, $s5, $t6
    ctx->pc = 0x11c7a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 21) & GPR_U64(ctx, 14));
label_11c7a4:
    // 0x11c7a4: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x11c7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x11c7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7ac: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C7ACu;
    SET_GPR_U32(ctx, 31, 0x11C7B4u);
    ctx->pc = 0x11C7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7ACu;
    // 0x11c7b0: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C7ACu, 0x11C7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7B4u;
label_11c7b4:
    // 0x11c7b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11c7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7b8: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11C7B8u;
    SET_GPR_U32(ctx, 31, 0x11C7C0u);
    ctx->pc = 0x11C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7B8u;
    // 0x11c7bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11C7B8u, 0x11C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7C0u;
label_11c7c0:
    // 0x11c7c0: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x11c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11c7c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11c7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11c7c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7cc: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11C7CCu;
    SET_GPR_U32(ctx, 31, 0x11C7D4u);
    ctx->pc = 0x11C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7CCu;
    // 0x11c7d0: 0x4253c  dsll32      $a0, $a0, 20 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11C7CCu, 0x11C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7D4u;
label_11c7d4:
    // 0x11c7d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11c7d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7dc: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C7DCu;
    SET_GPR_U32(ctx, 31, 0x11C7E4u);
    ctx->pc = 0x11C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7DCu;
    // 0x11c7e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C7DCu, 0x11C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7E4u;
label_11c7e4:
    // 0x11c7e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c7e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11c7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7ec: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x11C7ECu;
    SET_GPR_U32(ctx, 31, 0x11C7F4u);
    ctx->pc = 0x11C7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7ECu;
    // 0x11c7f0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x11C7ECu, 0x11C7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C7F4u;
label_11c7f4:
    // 0x11c7f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c7f8: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11C7F8u;
    SET_GPR_U32(ctx, 31, 0x11C800u);
    ctx->pc = 0x11C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C7F8u;
    // 0x11c7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11C7F8u, 0x11C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C800u;
label_11c800:
    // 0x11c800: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c804: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x11C804u;
    SET_GPR_U32(ctx, 31, 0x11C80Cu);
    ctx->pc = 0x11C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C804u;
    // 0x11c808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x11C804u, 0x11C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C80Cu;
label_11c80c:
    // 0x11c80c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11c80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c810: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x11C810u;
    {
        const bool branch_taken_0x11c810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C810u;
        // 0x11c814: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c810) {
            ctx->pc = 0x11C734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c734;
        }
    }
    ctx->pc = 0x11C818u;
}
