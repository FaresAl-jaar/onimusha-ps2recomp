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

// Function: sub_001A76A0
// Address: 0x1a76a0 - 0x1a77e0
void sub_001A76A0_0x1a76a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A76A0_0x1a76a0");
#endif

    switch (ctx->pc) {
        case 0x1a76f8u: goto label_1a76f8;
        case 0x1a7744u: goto label_1a7744;
        case 0x1a775cu: goto label_1a775c;
        case 0x1a7770u: goto label_1a7770;
        case 0x1a7780u: goto label_1a7780;
        case 0x1a7790u: goto label_1a7790;
        case 0x1a77a4u: goto label_1a77a4;
        case 0x1a77b0u: goto label_1a77b0;
        case 0x1a77c4u: goto label_1a77c4;
        default: break;
    }

    ctx->pc = 0x1a76a0u;

    // 0x1a76a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a76a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a76a4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a76a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a76a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a76a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a76ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a76acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a76b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a76b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a76b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a76b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a76b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a76bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a76bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a76c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a76c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a76c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a76c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a76c8: 0x8c457808  lw          $a1, 0x7808($v0)
    ctx->pc = 0x1a76c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30728)));
    // 0x1a76cc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A76CCu;
    {
        const bool branch_taken_0x1a76cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76CCu;
        // 0x1a76d0: 0x24507808  addiu       $s0, $v0, 0x7808 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76cc) {
            ctx->pc = 0x1A76F0u;
            goto label_1a76f0;
        }
    }
    ctx->pc = 0x1A76D4u;
    // 0x1a76d4: 0x8e427848  lw          $v0, 0x7848($s2)
    ctx->pc = 0x1a76d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30792)));
    // 0x1a76d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a76dc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a76dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a76e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a76e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a76e4: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1A76E4u;
    {
        const bool branch_taken_0x1a76e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a76e4) {
            ctx->pc = 0x1A77B8u;
            goto label_1a77b8;
        }
    }
    ctx->pc = 0x1A76ECu;
    // 0x1a76ec: 0x0  nop
    ctx->pc = 0x1a76ecu;
    // NOP
label_1a76f0:
    // 0x1a76f0: 0xc069c84  jal         func_1A7210
    ctx->pc = 0x1A76F0u;
    SET_GPR_U32(ctx, 31, 0x1A76F8u);
    ctx->pc = 0x1A76F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A76F0u;
    // 0x1a76f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7210u, 0x1A76F0u, 0x1A76F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A76F8u;
label_1a76f8:
    // 0x1a76f8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1A76F8u;
    {
        const bool branch_taken_0x1a76f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76F8u;
        // 0x1a76fc: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76f8) {
            ctx->pc = 0x1A77C8u;
            goto label_1a77c8;
        }
    }
    ctx->pc = 0x1A7700u;
    // 0x1a7700: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a7700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a7704: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A7704u;
    {
        const bool branch_taken_0x1a7704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7704u;
        // 0x1a7708: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7704) {
            ctx->pc = 0x1A7788u;
            goto label_1a7788;
        }
    }
    ctx->pc = 0x1A770Cu;
    // 0x1a770c: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A770Cu;
    {
        const bool branch_taken_0x1a770c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a770c) {
            ctx->pc = 0x1A7778u;
            goto label_1a7778;
        }
    }
    ctx->pc = 0x1A7714u;
    // 0x1a7714: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a7714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7718: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A7718u;
    {
        const bool branch_taken_0x1a7718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7718u;
        // 0x1a771c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7718) {
            ctx->pc = 0x1A7768u;
            goto label_1a7768;
        }
    }
    ctx->pc = 0x1A7720u;
    // 0x1a7720: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A7720u;
    {
        const bool branch_taken_0x1a7720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a7720) {
            ctx->pc = 0x1A7750u;
            goto label_1a7750;
        }
    }
    ctx->pc = 0x1A7728u;
    // 0x1a7728: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7728u;
    {
        const bool branch_taken_0x1a7728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7728) {
            ctx->pc = 0x1A7738u;
            goto label_1a7738;
        }
    }
    ctx->pc = 0x1A7730u;
    // 0x1a7730: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1A7730u;
    {
        const bool branch_taken_0x1a7730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7730) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7738u;
label_1a7738:
    // 0x1a7738: 0x8e4578b4  lw          $a1, 0x78B4($s2)
    ctx->pc = 0x1a7738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30900)));
    // 0x1a773c: 0xc06fffc  jal         func_1BFFF0
    ctx->pc = 0x1A773Cu;
    SET_GPR_U32(ctx, 31, 0x1A7744u);
    ctx->pc = 0x1A7740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A773Cu;
    // 0x1a7740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFFF0u, 0x1A773Cu, 0x1A7744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7744u;
label_1a7744:
    // 0x1a7744: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1A7744u;
    {
        const bool branch_taken_0x1a7744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7744) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A774Cu;
    // 0x1a774c: 0x0  nop
    ctx->pc = 0x1a774cu;
    // NOP
label_1a7750:
    // 0x1a7750: 0x8e4578b4  lw          $a1, 0x78B4($s2)
    ctx->pc = 0x1a7750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30900)));
    // 0x1a7754: 0xc070230  jal         func_1C08C0
    ctx->pc = 0x1A7754u;
    SET_GPR_U32(ctx, 31, 0x1A775Cu);
    ctx->pc = 0x1A7758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7754u;
    // 0x1a7758: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C08C0u, 0x1A7754u, 0x1A775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A775Cu;
label_1a775c:
    // 0x1a775c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1A775Cu;
    {
        const bool branch_taken_0x1a775c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a775c) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7764u;
    // 0x1a7764: 0x0  nop
    ctx->pc = 0x1a7764u;
    // NOP
label_1a7768:
    // 0x1a7768: 0xc06fc00  jal         func_1BF000
    ctx->pc = 0x1A7768u;
    SET_GPR_U32(ctx, 31, 0x1A7770u);
    ctx->pc = 0x1A776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7768u;
    // 0x1a776c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF000u, 0x1A7768u, 0x1A7770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7770u;
label_1a7770:
    // 0x1a7770: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A7770u;
    {
        const bool branch_taken_0x1a7770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7770) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7778u;
label_1a7778:
    // 0x1a7778: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x1A7778u;
    SET_GPR_U32(ctx, 31, 0x1A7780u);
    ctx->pc = 0x1A777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7778u;
    // 0x1a777c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1A7778u, 0x1A7780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7780u;
label_1a7780:
    // 0x1a7780: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7780u;
    {
        const bool branch_taken_0x1a7780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7780) {
            ctx->pc = 0x1A77A8u;
            goto label_1a77a8;
        }
    }
    ctx->pc = 0x1A7788u;
label_1a7788:
    // 0x1a7788: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1A7788u;
    SET_GPR_U32(ctx, 31, 0x1A7790u);
    ctx->pc = 0x1A778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7788u;
    // 0x1a778c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1A7788u, 0x1A7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7790u;
label_1a7790:
    // 0x1a7790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a7790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7798: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1a7798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1a779c: 0xc070974  jal         func_1C25D0
    ctx->pc = 0x1A779Cu;
    SET_GPR_U32(ctx, 31, 0x1A77A4u);
    ctx->pc = 0x1A77A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A779Cu;
    // 0x1a77a0: 0x240700e0  addiu       $a3, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25D0u, 0x1A779Cu, 0x1A77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77A4u;
label_1a77a4:
    // 0x1a77a4: 0x0  nop
    ctx->pc = 0x1a77a4u;
    // NOP
label_1a77a8:
    // 0x1a77a8: 0xc069cbc  jal         func_1A72F0
    ctx->pc = 0x1A77A8u;
    SET_GPR_U32(ctx, 31, 0x1A77B0u);
    ctx->pc = 0x1A77ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77A8u;
    // 0x1a77ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72F0u, 0x1A77A8u, 0x1A77B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77B0u;
label_1a77b0:
    // 0x1a77b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a77b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a77b4: 0x0  nop
    ctx->pc = 0x1a77b4u;
    // NOP
label_1a77b8:
    // 0x1a77b8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a77b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a77bc: 0xc069d78  jal         func_1A75E0
    ctx->pc = 0x1A77BCu;
    SET_GPR_U32(ctx, 31, 0x1A77C4u);
    ctx->pc = 0x1A77C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77BCu;
    // 0x1a77c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A75E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A75E0u, 0x1A77BCu, 0x1A77C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77C4u;
label_1a77c4:
    // 0x1a77c4: 0x0  nop
    ctx->pc = 0x1a77c4u;
    // NOP
label_1a77c8:
    // 0x1a77c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a77c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a77cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a77ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a77d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a77d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a77d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a77d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a77d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A77D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77D8u;
        // 0x1a77dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A77D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A77E0u;
}
