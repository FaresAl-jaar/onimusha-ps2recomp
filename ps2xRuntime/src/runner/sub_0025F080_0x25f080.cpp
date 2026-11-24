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

// Function: sub_0025F080
// Address: 0x25f080 - 0x25f1f0
void sub_0025F080_0x25f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F080_0x25f080");
#endif

    switch (ctx->pc) {
        case 0x25f0d4u: goto label_25f0d4;
        case 0x25f0e4u: goto label_25f0e4;
        case 0x25f0f8u: goto label_25f0f8;
        case 0x25f120u: goto label_25f120;
        case 0x25f148u: goto label_25f148;
        case 0x25f158u: goto label_25f158;
        case 0x25f168u: goto label_25f168;
        case 0x25f180u: goto label_25f180;
        case 0x25f198u: goto label_25f198;
        case 0x25f1a8u: goto label_25f1a8;
        default: break;
    }

    ctx->pc = 0x25f080u;

    // 0x25f080: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25f080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25f084: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25f084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25f088: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25f088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25f08c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25f08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25f090: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x25f090u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f094: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25f094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25f098: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x25f098u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f09c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25f09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25f0a0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x25f0a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25f0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25f0a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25f0a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25f0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25f0b0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25f0b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25f0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25f0b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25f0b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25f0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25f0c0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x25f0c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0c4: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x25f0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f0c8: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x25f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x25f0cc: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25F0CCu;
    SET_GPR_U32(ctx, 31, 0x25F0D4u);
    ctx->pc = 0x25F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0CCu;
    // 0x25f0d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25F0CCu, 0x25F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0D4u;
label_25f0d4:
    // 0x25f0d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F0D4u;
    {
        const bool branch_taken_0x25f0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0D4u;
        // 0x25f0d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0d4) {
            ctx->pc = 0x25F0E8u;
            goto label_25f0e8;
        }
    }
    ctx->pc = 0x25F0DCu;
    // 0x25f0dc: 0xc097a14  jal         func_25E850
    ctx->pc = 0x25F0DCu;
    SET_GPR_U32(ctx, 31, 0x25F0E4u);
    ctx->pc = 0x25F0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0DCu;
    // 0x25f0e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E850u, 0x25F0DCu, 0x25F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0E4u;
label_25f0e4:
    // 0x25f0e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f0e8:
    // 0x25f0e8: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x25F0E8u;
    {
        const bool branch_taken_0x25f0e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0E8u;
        // 0x25f0ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0e8) {
            ctx->pc = 0x25F1B8u;
            goto label_25f1b8;
        }
    }
    ctx->pc = 0x25F0F0u;
    // 0x25f0f0: 0xc096c94  jal         func_25B250
    ctx->pc = 0x25F0F0u;
    SET_GPR_U32(ctx, 31, 0x25F0F8u);
    ctx->pc = 0x25F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0F0u;
    // 0x25f0f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B250u, 0x25F0F0u, 0x25F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0F8u;
label_25f0f8:
    // 0x25f0f8: 0x90450021  lbu         $a1, 0x21($v0)
    ctx->pc = 0x25f0f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
    // 0x25f0fc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x25f0fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f100: 0x90460022  lbu         $a2, 0x22($v0)
    ctx->pc = 0x25f100u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x25f104: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x25f104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f108: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x25f108u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f10c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25f10cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f114: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x25f114u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f118: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x25F118u;
    SET_GPR_U32(ctx, 31, 0x25F120u);
    ctx->pc = 0x25F11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F118u;
    // 0x25f11c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x25F118u, 0x25F120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F120u;
label_25f120:
    // 0x25f120: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x25f120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25f124: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x25f124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x25f128: 0x93a200a8  lbu         $v0, 0xA8($sp)
    ctx->pc = 0x25f128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25f12c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x25f12cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f130: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x25f130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25f134: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25f134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25f138: 0xa2020064  sb          $v0, 0x64($s0)
    ctx->pc = 0x25f138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x25f13c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x25f13cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25f140: 0xc097340  jal         func_25CD00
    ctx->pc = 0x25F140u;
    SET_GPR_U32(ctx, 31, 0x25F148u);
    ctx->pc = 0x25F144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F140u;
    // 0x25f144: 0x24a55c70  addiu       $a1, $a1, 0x5C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD00u, 0x25F140u, 0x25F148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F148u;
label_25f148:
    // 0x25f148: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x25f148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x25f14c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x25f14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x25f150: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25F150u;
    SET_GPR_U32(ctx, 31, 0x25F158u);
    ctx->pc = 0x25F154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F150u;
    // 0x25f154: 0xa6020056  sh          $v0, 0x56($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25F150u, 0x25F158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F158u;
label_25f158:
    // 0x25f158: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F158u;
    {
        const bool branch_taken_0x25f158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F158u;
        // 0x25f15c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f158) {
            ctx->pc = 0x25F168u;
            goto label_25f168;
        }
    }
    ctx->pc = 0x25F160u;
    // 0x25f160: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x25F160u;
    SET_GPR_U32(ctx, 31, 0x25F168u);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x25F160u, 0x25F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F168u;
label_25f168:
    // 0x25f168: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x25f168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x25f16c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x25f16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x25f170: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F170u;
    {
        const bool branch_taken_0x25f170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f170) {
            ctx->pc = 0x25F188u;
            goto label_25f188;
        }
    }
    ctx->pc = 0x25F178u;
    // 0x25f178: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25F178u;
    SET_GPR_U32(ctx, 31, 0x25F180u);
    ctx->pc = 0x25F17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F178u;
    // 0x25f17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25F178u, 0x25F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F180u;
label_25f180:
    // 0x25f180: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25F180u;
    {
        const bool branch_taken_0x25f180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F180u;
        // 0x25f184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f180) {
            ctx->pc = 0x25F1C0u;
            goto label_25f1c0;
        }
    }
    ctx->pc = 0x25F188u;
label_25f188:
    // 0x25f188: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25f188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f18c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x25f18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f190: 0xc096c9c  jal         func_25B270
    ctx->pc = 0x25F190u;
    SET_GPR_U32(ctx, 31, 0x25F198u);
    ctx->pc = 0x25F194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F190u;
    // 0x25f194: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B270u, 0x25F190u, 0x25F198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F198u;
label_25f198:
    // 0x25f198: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F198u;
    {
        const bool branch_taken_0x25f198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F198u;
        // 0x25f19c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f198) {
            ctx->pc = 0x25F1B0u;
            goto label_25f1b0;
        }
    }
    ctx->pc = 0x25F1A0u;
    // 0x25f1a0: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25F1A0u;
    SET_GPR_U32(ctx, 31, 0x25F1A8u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25F1A0u, 0x25F1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F1A8u;
label_25f1a8:
    // 0x25f1a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25F1A8u;
    {
        const bool branch_taken_0x25f1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1A8u;
        // 0x25f1ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1a8) {
            ctx->pc = 0x25F1C0u;
            goto label_25f1c0;
        }
    }
    ctx->pc = 0x25F1B0u;
label_25f1b0:
    // 0x25f1b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F1B0u;
    {
        const bool branch_taken_0x25f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1B0u;
        // 0x25f1b4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f1b0) {
            ctx->pc = 0x25F1C0u;
            goto label_25f1c0;
        }
    }
    ctx->pc = 0x25F1B8u;
label_25f1b8:
    // 0x25f1b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f1b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f1bc: 0x0  nop
    ctx->pc = 0x25f1bcu;
    // NOP
label_25f1c0:
    // 0x25f1c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25f1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25f1c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25f1c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25f1c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25f1c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25f1cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25f1ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25f1d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25f1d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25f1d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25f1d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25f1d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25f1d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25f1dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f1dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f1e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25f1e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25f1e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x25F1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1E8u;
        // 0x25f1ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F1F0u;
}
