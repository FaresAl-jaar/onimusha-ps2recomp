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

// Function: sub_0029AFA0
// Address: 0x29afa0 - 0x29b1c8
void sub_0029AFA0_0x29afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AFA0_0x29afa0");
#endif

    switch (ctx->pc) {
        case 0x29aff4u: goto label_29aff4;
        case 0x29b038u: goto label_29b038;
        case 0x29b048u: goto label_29b048;
        case 0x29b0a0u: goto label_29b0a0;
        case 0x29b0b4u: goto label_29b0b4;
        case 0x29b0d4u: goto label_29b0d4;
        case 0x29b120u: goto label_29b120;
        case 0x29b13cu: goto label_29b13c;
        case 0x29b150u: goto label_29b150;
        case 0x29b1a4u: goto label_29b1a4;
        default: break;
    }

    ctx->pc = 0x29afa0u;

    // 0x29afa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29afa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29afa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29afa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29afac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29afacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29afb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29afb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29afb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29afb8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x29afb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afbc: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x29afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x29afc0: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x29AFC0u;
    {
        const bool branch_taken_0x29afc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AFC0u;
        // 0x29afc4: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29afc0) {
            ctx->pc = 0x29B1B0u;
            goto label_29b1b0;
        }
    }
    ctx->pc = 0x29AFC8u;
    // 0x29afc8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x29afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29afcc: 0x79270000  lq          $a3, 0x0($t1)
    ctx->pc = 0x29afccu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29afd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29afd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29afd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29afd8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x29afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29afdc: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x29afdcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x29afe0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x29afe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x29afe4: 0xa6450850  sh          $a1, 0x850($s2)
    ctx->pc = 0x29afe4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2128), (uint16_t)GPR_U32(ctx, 5));
    // 0x29afe8: 0xa6460852  sh          $a2, 0x852($s2)
    ctx->pc = 0x29afe8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2130), (uint16_t)GPR_U32(ctx, 6));
    // 0x29afec: 0xc04d60c  jal         func_135830
    ctx->pc = 0x29AFECu;
    SET_GPR_U32(ctx, 31, 0x29AFF4u);
    ctx->pc = 0x29AFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AFECu;
    // 0x29aff0: 0x264500c0  addiu       $a1, $s2, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135830u, 0x29AFECu, 0x29AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AFF4u;
label_29aff4:
    // 0x29aff4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29aff4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aff8: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x29aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x29affc: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x29affcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29b000: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29b000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29b004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b008: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x29b008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x29b00c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x29b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29b010: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x29b010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29b014: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b018: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x29b018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29b01c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x29b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29b020: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x29b020u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x29b024: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x29b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29b028: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x29b028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x29b02c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x29b02cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b030: 0xc041442  jal         func_105108
    ctx->pc = 0x29B030u;
    SET_GPR_U32(ctx, 31, 0x29B038u);
    ctx->pc = 0x29B034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B030u;
    // 0x29b034: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x29B030u, 0x29B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B038u;
label_29b038:
    // 0x29b038: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29b038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29b03c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x29b03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29b040: 0xc041442  jal         func_105108
    ctx->pc = 0x29B040u;
    SET_GPR_U32(ctx, 31, 0x29B048u);
    ctx->pc = 0x29B044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B040u;
    // 0x29b044: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x29B040u, 0x29B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B048u;
label_29b048:
    // 0x29b048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b04c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x29b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29b050: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x29b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x29b054: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x29b054u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b058: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x29B058u;
    {
        const bool branch_taken_0x29b058 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B058u;
        // 0x29b05c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b058) {
            ctx->pc = 0x29B0D8u;
            goto label_29b0d8;
        }
    }
    ctx->pc = 0x29B060u;
    // 0x29b060: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x29b060u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x29b064: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x29b064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x29b068: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x29b068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x29b06c: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x29b06cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x29b070: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x29b070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x29b074: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x29b074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x29b078: 0x24c6f388  addiu       $a2, $a2, -0xC78
    ctx->pc = 0x29b078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964104));
    // 0x29b07c: 0x248435a0  addiu       $a0, $a0, 0x35A0
    ctx->pc = 0x29b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
    // 0x29b080: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x29b080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29b084: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x29b084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x29b088: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29b088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29b08c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29b090: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x29b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29b094: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x29b094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29b098: 0xc04f7a4  jal         func_13DE90
    ctx->pc = 0x29B098u;
    SET_GPR_U32(ctx, 31, 0x29B0A0u);
    ctx->pc = 0x29B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B098u;
    // 0x29b09c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE90u, 0x29B098u, 0x29B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0A0u;
label_29b0a0:
    // 0x29b0a0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x29b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x29b0a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x29b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x29b0a8: 0x248435a0  addiu       $a0, $a0, 0x35A0
    ctx->pc = 0x29b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
    // 0x29b0ac: 0xc04e710  jal         func_139C40
    ctx->pc = 0x29B0ACu;
    SET_GPR_U32(ctx, 31, 0x29B0B4u);
    ctx->pc = 0x29B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B0ACu;
    // 0x29b0b0: 0x34451101  ori         $a1, $v0, 0x1101 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4353);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C40u, 0x29B0ACu, 0x29B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0B4u;
label_29b0b4:
    // 0x29b0b4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x29b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x29b0b8: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x29b0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x29b0bc: 0x248435a0  addiu       $a0, $a0, 0x35A0
    ctx->pc = 0x29b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
    // 0x29b0c0: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x29b0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
    // 0x29b0c4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x29b0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29b0c8: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x29b0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29b0cc: 0xc04e744  jal         func_139D10
    ctx->pc = 0x29B0CCu;
    SET_GPR_U32(ctx, 31, 0x29B0D4u);
    ctx->pc = 0x29B0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B0CCu;
    // 0x29b0d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139D10u, 0x29B0CCu, 0x29B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0D4u;
label_29b0d4:
    // 0x29b0d4: 0x0  nop
    ctx->pc = 0x29b0d4u;
    // NOP
label_29b0d8:
    // 0x29b0d8: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29B0D8u;
    {
        const bool branch_taken_0x29b0d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b0d8) {
            ctx->pc = 0x29B140u;
            goto label_29b140;
        }
    }
    ctx->pc = 0x29B0E0u;
    // 0x29b0e0: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x29b0e0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x29b0e4: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x29b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x29b0e8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x29b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x29b0ec: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x29b0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x29b0f0: 0x2463f380  addiu       $v1, $v1, -0xC80
    ctx->pc = 0x29b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964096));
    // 0x29b0f4: 0x2442f384  addiu       $v0, $v0, -0xC7C
    ctx->pc = 0x29b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964100));
    // 0x29b0f8: 0x248425d0  addiu       $a0, $a0, 0x25D0
    ctx->pc = 0x29b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9680));
    // 0x29b0fc: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x29b0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x29b100: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29b100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29b104: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x29b104u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x29b108: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x29b108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x29b10c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29b110: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x29b110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29b114: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x29b114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29b118: 0xc04f7b8  jal         func_13DEE0
    ctx->pc = 0x29B118u;
    SET_GPR_U32(ctx, 31, 0x29B120u);
    ctx->pc = 0x29B11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B118u;
    // 0x29b11c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DEE0u, 0x29B118u, 0x29B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B120u;
label_29b120:
    // 0x29b120: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x29b120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x29b124: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x29b124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x29b128: 0x248425d0  addiu       $a0, $a0, 0x25D0
    ctx->pc = 0x29b128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9680));
    // 0x29b12c: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x29b12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
    // 0x29b130: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x29b130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x29b134: 0xc04e7fc  jal         func_139FF0
    ctx->pc = 0x29B134u;
    SET_GPR_U32(ctx, 31, 0x29B13Cu);
    ctx->pc = 0x29B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B134u;
    // 0x29b138: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139FF0u, 0x29B134u, 0x29B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B13Cu;
label_29b13c:
    // 0x29b13c: 0x0  nop
    ctx->pc = 0x29b13cu;
    // NOP
label_29b140:
    // 0x29b140: 0x26440840  addiu       $a0, $s2, 0x840
    ctx->pc = 0x29b140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2112));
    // 0x29b144: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x29b144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29b148: 0xc0414d0  jal         func_105340
    ctx->pc = 0x29B148u;
    SET_GPR_U32(ctx, 31, 0x29B150u);
    ctx->pc = 0x29B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B148u;
    // 0x29b14c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x29B148u, 0x29B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B150u;
label_29b150:
    // 0x29b150: 0x96420852  lhu         $v0, 0x852($s2)
    ctx->pc = 0x29b150u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2130)));
    // 0x29b154: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B154u;
    {
        const bool branch_taken_0x29b154 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x29B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B154u;
        // 0x29b158: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b154) {
            ctx->pc = 0x29B168u;
            goto label_29b168;
        }
    }
    ctx->pc = 0x29B15Cu;
    // 0x29b15c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b160: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29B160u;
    {
        const bool branch_taken_0x29b160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B160u;
        // 0x29b164: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b160) {
            ctx->pc = 0x29B180u;
            goto label_29b180;
        }
    }
    ctx->pc = 0x29B168u;
label_29b168:
    // 0x29b168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29b168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29b16c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29b16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b170: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29b170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b174: 0x0  nop
    ctx->pc = 0x29b174u;
    // NOP
    // 0x29b178: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29b178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29b17c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29b17cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_29b180:
    // 0x29b180: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29b180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29b184: 0x26440840  addiu       $a0, $s2, 0x840
    ctx->pc = 0x29b184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2112));
    // 0x29b188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b18c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29b18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b190: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x29b190u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x29b194: 0x0  nop
    ctx->pc = 0x29b194u;
    // NOP
    // 0x29b198: 0x0  nop
    ctx->pc = 0x29b198u;
    // NOP
    // 0x29b19c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x29B19Cu;
    SET_GPR_U32(ctx, 31, 0x29B1A4u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x29B19Cu, 0x29B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B1A4u;
label_29b1a4:
    // 0x29b1a4: 0x96430852  lhu         $v1, 0x852($s2)
    ctx->pc = 0x29b1a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2130)));
    // 0x29b1a8: 0xa6430854  sh          $v1, 0x854($s2)
    ctx->pc = 0x29b1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2132), (uint16_t)GPR_U32(ctx, 3));
    // 0x29b1ac: 0x0  nop
    ctx->pc = 0x29b1acu;
    // NOP
label_29b1b0:
    // 0x29b1b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29b1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b1b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29b1b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b1b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b1b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b1bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x29B1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B1C0u;
        // 0x29b1c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B1C8u;
}
