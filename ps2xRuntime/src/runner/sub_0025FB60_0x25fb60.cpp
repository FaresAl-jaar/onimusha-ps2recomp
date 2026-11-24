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

// Function: sub_0025FB60
// Address: 0x25fb60 - 0x25fd00
void sub_0025FB60_0x25fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FB60_0x25fb60");
#endif

    switch (ctx->pc) {
        case 0x25fbc0u: goto label_25fbc0;
        case 0x25fbe0u: goto label_25fbe0;
        case 0x25fbf0u: goto label_25fbf0;
        case 0x25fc20u: goto label_25fc20;
        case 0x25fc48u: goto label_25fc48;
        case 0x25fc68u: goto label_25fc68;
        case 0x25fc78u: goto label_25fc78;
        case 0x25fc90u: goto label_25fc90;
        case 0x25fca8u: goto label_25fca8;
        case 0x25fcb8u: goto label_25fcb8;
        default: break;
    }

    ctx->pc = 0x25fb60u;

    // 0x25fb60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25fb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25fb64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25fb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25fb68: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25fb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25fb6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25fb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25fb70: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x25fb70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb74: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25fb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25fb78: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x25fb78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25fb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25fb80: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x25fb80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25fb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25fb88: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x25fb88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25fb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25fb90: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x25fb90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25fb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25fb98: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x25fb98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x25fb9c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x25fb9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25fba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25fba4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x25fba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fba8: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x25fba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fbac: 0x2484cff0  addiu       $a0, $a0, -0x3010
    ctx->pc = 0x25fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954992));
    // 0x25fbb0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25fbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fbb4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x25fbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fbb8: 0xc074324  jal         func_1D0C90
    ctx->pc = 0x25FBB8u;
    SET_GPR_U32(ctx, 31, 0x25FBC0u);
    ctx->pc = 0x25FBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBB8u;
    // 0x25fbbc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C90u, 0x25FBB8u, 0x25FBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBC0u;
label_25fbc0:
    // 0x25fbc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25fbc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fbc4: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25FBC4u;
    {
        const bool branch_taken_0x25fbc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fbc4) {
            ctx->pc = 0x25FBD8u;
            goto label_25fbd8;
        }
    }
    ctx->pc = 0x25FBCCu;
    // 0x25fbcc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x25FBCCu;
    {
        const bool branch_taken_0x25fbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBCCu;
        // 0x25fbd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbcc) {
            ctx->pc = 0x25FCD0u;
            goto label_25fcd0;
        }
    }
    ctx->pc = 0x25FBD4u;
    // 0x25fbd4: 0x0  nop
    ctx->pc = 0x25fbd4u;
    // NOP
label_25fbd8:
    // 0x25fbd8: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25FBD8u;
    SET_GPR_U32(ctx, 31, 0x25FBE0u);
    ctx->pc = 0x25FBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBD8u;
    // 0x25fbdc: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25FBD8u, 0x25FBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBE0u;
label_25fbe0:
    // 0x25fbe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FBE0u;
    {
        const bool branch_taken_0x25fbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBE0u;
        // 0x25fbe4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbe0) {
            ctx->pc = 0x25FBF8u;
            goto label_25fbf8;
        }
    }
    ctx->pc = 0x25FBE8u;
    // 0x25fbe8: 0xc097a14  jal         func_25E850
    ctx->pc = 0x25FBE8u;
    SET_GPR_U32(ctx, 31, 0x25FBF0u);
    ctx->pc = 0x25FBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FBE8u;
    // 0x25fbec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E850u, 0x25FBE8u, 0x25FBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FBF0u;
label_25fbf0:
    // 0x25fbf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25fbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fbf4: 0x0  nop
    ctx->pc = 0x25fbf4u;
    // NOP
label_25fbf8:
    // 0x25fbf8: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x25FBF8u;
    {
        const bool branch_taken_0x25fbf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FBF8u;
        // 0x25fbfc: 0x32a500ff  andi        $a1, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbf8) {
            ctx->pc = 0x25FCC8u;
            goto label_25fcc8;
        }
    }
    ctx->pc = 0x25FC00u;
    // 0x25fc00: 0x328600ff  andi        $a2, $s4, 0xFF
    ctx->pc = 0x25fc00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25fc04: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x25fc04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc08: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x25fc08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc0c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x25fc0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc14: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x25fc14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc18: 0xc096b38  jal         func_25ACE0
    ctx->pc = 0x25FC18u;
    SET_GPR_U32(ctx, 31, 0x25FC20u);
    ctx->pc = 0x25FC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC18u;
    // 0x25fc1c: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ACE0u, 0x25FC18u, 0x25FC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC20u;
label_25fc20:
    // 0x25fc20: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x25fc20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25fc24: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x25fc24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x25fc28: 0x93a200a8  lbu         $v0, 0xA8($sp)
    ctx->pc = 0x25fc28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25fc2c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x25fc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25fc30: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x25fc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x25fc34: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x25fc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25fc38: 0xa2020064  sb          $v0, 0x64($s0)
    ctx->pc = 0x25fc38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x25fc3c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x25fc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25fc40: 0xc097384  jal         func_25CE10
    ctx->pc = 0x25FC40u;
    SET_GPR_U32(ctx, 31, 0x25FC48u);
    ctx->pc = 0x25FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC40u;
    // 0x25fc44: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CE10u, 0x25FC40u, 0x25FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC48u;
label_25fc48:
    // 0x25fc48: 0x7a450000  lq          $a1, 0x0($s2)
    ctx->pc = 0x25fc48u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25fc4c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25fc50: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x25fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x25fc54: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x25fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x25fc58: 0x7e0500a0  sq          $a1, 0xA0($s0)
    ctx->pc = 0x25fc58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 5));
    // 0x25fc5c: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x25fc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x25fc60: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x25FC60u;
    SET_GPR_U32(ctx, 31, 0x25FC68u);
    ctx->pc = 0x25FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC60u;
    // 0x25fc64: 0xa6020056  sh          $v0, 0x56($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x25FC60u, 0x25FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC68u;
label_25fc68:
    // 0x25fc68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FC68u;
    {
        const bool branch_taken_0x25fc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC68u;
        // 0x25fc6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc68) {
            ctx->pc = 0x25FC78u;
            goto label_25fc78;
        }
    }
    ctx->pc = 0x25FC70u;
    // 0x25fc70: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x25FC70u;
    SET_GPR_U32(ctx, 31, 0x25FC78u);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x25FC70u, 0x25FC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC78u;
label_25fc78:
    // 0x25fc78: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x25fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x25fc7c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x25fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x25fc80: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FC80u;
    {
        const bool branch_taken_0x25fc80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fc80) {
            ctx->pc = 0x25FC98u;
            goto label_25fc98;
        }
    }
    ctx->pc = 0x25FC88u;
    // 0x25fc88: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25FC88u;
    SET_GPR_U32(ctx, 31, 0x25FC90u);
    ctx->pc = 0x25FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FC88u;
    // 0x25fc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25FC88u, 0x25FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FC90u;
label_25fc90:
    // 0x25fc90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25FC90u;
    {
        const bool branch_taken_0x25fc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FC90u;
        // 0x25fc94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc90) {
            ctx->pc = 0x25FCD0u;
            goto label_25fcd0;
        }
    }
    ctx->pc = 0x25FC98u;
label_25fc98:
    // 0x25fc98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25fc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc9c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x25fc9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fca0: 0xc096ca8  jal         func_25B2A0
    ctx->pc = 0x25FCA0u;
    SET_GPR_U32(ctx, 31, 0x25FCA8u);
    ctx->pc = 0x25FCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FCA0u;
    // 0x25fca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2A0u, 0x25FCA0u, 0x25FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FCA8u;
label_25fca8:
    // 0x25fca8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25FCA8u;
    {
        const bool branch_taken_0x25fca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCA8u;
        // 0x25fcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fca8) {
            ctx->pc = 0x25FCC0u;
            goto label_25fcc0;
        }
    }
    ctx->pc = 0x25FCB0u;
    // 0x25fcb0: 0xc074268  jal         func_1D09A0
    ctx->pc = 0x25FCB0u;
    SET_GPR_U32(ctx, 31, 0x25FCB8u);
    ctx->pc = 0x1D09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D09A0u, 0x25FCB0u, 0x25FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FCB8u;
label_25fcb8:
    // 0x25fcb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25FCB8u;
    {
        const bool branch_taken_0x25fcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCB8u;
        // 0x25fcbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fcb8) {
            ctx->pc = 0x25FCD0u;
            goto label_25fcd0;
        }
    }
    ctx->pc = 0x25FCC0u;
label_25fcc0:
    // 0x25fcc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25FCC0u;
    {
        const bool branch_taken_0x25fcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCC0u;
        // 0x25fcc4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fcc0) {
            ctx->pc = 0x25FCD0u;
            goto label_25fcd0;
        }
    }
    ctx->pc = 0x25FCC8u;
label_25fcc8:
    // 0x25fcc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25fcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fccc: 0x0  nop
    ctx->pc = 0x25fcccu;
    // NOP
label_25fcd0:
    // 0x25fcd0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25fcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25fcd4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25fcd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25fcd8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25fcd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25fcdc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25fcdcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25fce0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25fce0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25fce4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25fce4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25fce8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25fce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fcec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25fcecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fcf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25fcf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fcf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25fcf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x25FCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FCF8u;
        // 0x25fcfc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FD00u;
}
