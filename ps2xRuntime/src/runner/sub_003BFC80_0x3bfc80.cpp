#include <cstdio>
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

// Function: sub_003BFC80
// Address: 0x3bfc80 - 0x3bff18
void sub_003BFC80_0x3bfc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFC80_0x3bfc80");
#endif
    { static uint32_t n=0; ++n; if (n<=5 || (n%600)==0) fprintf(stderr,"[probe ipu_decode] call %u a0=0x%x ra=0x%x\n",n,GPR_U32(ctx,4),GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x3bfcb8u: goto label_3bfcb8;
        case 0x3bfcecu: goto label_3bfcec;
        case 0x3bfd20u: goto label_3bfd20;
        case 0x3bfd48u: goto label_3bfd48;
        case 0x3bfd54u: goto label_3bfd54;
        case 0x3bfd70u: goto label_3bfd70;
        case 0x3bfdb0u: goto label_3bfdb0;
        case 0x3bfe10u: goto label_3bfe10;
        case 0x3bfe24u: goto label_3bfe24;
        case 0x3bfe50u: goto label_3bfe50;
        case 0x3bfe64u: goto label_3bfe64;
        case 0x3bfe94u: goto label_3bfe94;
        case 0x3bfebcu: goto label_3bfebc;
        case 0x3bfee0u: goto label_3bfee0;
        default: break;
    }

    ctx->pc = 0x3bfc80u;

    // 0x3bfc80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bfc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bfc84: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x3bfc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3bfc88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3bfc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3bfc8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3bfc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3bfc90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bfc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bfc94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bfc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bfc98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bfc98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfc9c: 0x12030098  beq         $s0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x3BFC9Cu;
    {
        const bool branch_taken_0x3bfc9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BFCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFC9Cu;
        // 0x3bfca0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfc9c) {
            ctx->pc = 0x3BFF00u;
            goto label_3bff00;
        }
    }
    ctx->pc = 0x3BFCA4u;
    // 0x3bfca4: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3bfca4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3bfca8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x3bfca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x3bfcac: 0x24a5ff30  addiu       $a1, $a1, -0xD0
    ctx->pc = 0x3bfcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967088));
    // 0x3bfcb0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x3bfcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3bfcb4: 0x0  nop
    ctx->pc = 0x3bfcb4u;
    // NOP
label_3bfcb8:
    // 0x3bfcb8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3bfcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x70000000
    // 0x3bfcbc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3bfcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3bfcc0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3bfcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 4))); // MMIO: 0x70000004
    // 0x3bfcc4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3bfcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3bfcc8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3bfcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3bfccc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3bfcccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3bfcd0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3BFCD0u;
    {
        const bool branch_taken_0x3bfcd0 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x3BFCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFCD0u;
        // 0x3bfcd4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfcd0) {
            ctx->pc = 0x3BFCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfcb8;
        }
    }
    ctx->pc = 0x3BFCD8u;
    // 0x3bfcd8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3bfcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3bfcdc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3BFCDCu;
    {
        const bool branch_taken_0x3bfcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bfcdc) {
            ctx->pc = 0x3BFD30u;
            goto label_3bfd30;
        }
    }
    ctx->pc = 0x3BFCE4u;
    // 0x3bfce4: 0xc04365e  jal         func_10D978
    ctx->pc = 0x3BFCE4u;
    SET_GPR_U32(ctx, 31, 0x3BFCECu);
    ctx->pc = 0x10D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D978u, 0x3BFCE4u, 0x3BFCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFCECu;
label_3bfcec:
    // 0x3bfcec: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x3bfcecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x3bfcf0: 0x3c0391ff  lui         $v1, 0x91FF
    ctx->pc = 0x3bfcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37375 << 16));
    // 0x3bfcf4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3bfcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3bfcf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3bfcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3bfcfc: 0xac232000  sw          $v1, 0x2000($at)
    ctx->pc = 0x3bfcfcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x3bfd00: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3bfd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bfd04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bfd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bfd08: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3bfd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3bfd0c: 0x3444b400  ori         $a0, $v0, 0xB400
    ctx->pc = 0x3bfd0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x3bfd10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3bfd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bfd14: 0xaf828c98  sw          $v0, -0x7368($gp)
    ctx->pc = 0x3bfd14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 2));
    // 0x3bfd18: 0xc041172  jal         func_1045C8
    ctx->pc = 0x3BFD18u;
    SET_GPR_U32(ctx, 31, 0x3BFD20u);
    ctx->pc = 0x3BFD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFD18u;
    // 0x3bfd1c: 0x8f858c98  lw          $a1, -0x7368($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045C8u, 0x3BFD18u, 0x3BFD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFD20u;
label_3bfd20:
    // 0x3bfd20: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3bfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3bfd24: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3bfd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3bfd28: 0x3442007c  ori         $v0, $v0, 0x7C
    ctx->pc = 0x3bfd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)124);
    // 0x3bfd2c: 0xac22e030  sw          $v0, -0x1FD0($at)
    ctx->pc = 0x3bfd2cu;
    runtime->Store32(rdram, ctx, 0x1000E030u, GPR_U32(ctx, 2)); // MMIO: 0x1000e030
label_3bfd30:
    // 0x3bfd30: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3bfd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3bfd34: 0x8c252d80  lw          $a1, 0x2D80($at)
    ctx->pc = 0x3bfd34u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x682D80u));
    // 0x3bfd38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bfd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bfd3c: 0x3444b000  ori         $a0, $v0, 0xB000
    ctx->pc = 0x3bfd3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x3bfd40: 0xc0411da  jal         func_104768
    ctx->pc = 0x3BFD40u;
    SET_GPR_U32(ctx, 31, 0x3BFD48u);
    ctx->pc = 0x3BFD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFD40u;
    // 0x3bfd44: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104768u, 0x3BFD40u, 0x3BFD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFD48u;
label_3bfd48:
    // 0x3bfd48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3bfd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfd4c: 0xc043626  jal         func_10D898
    ctx->pc = 0x3BFD4Cu;
    SET_GPR_U32(ctx, 31, 0x3BFD54u);
    ctx->pc = 0x3BFD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFD4Cu;
    // 0x3bfd50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D898u, 0x3BFD4Cu, 0x3BFD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFD54u;
label_3bfd54:
    // 0x3bfd54: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3bfd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3bfd58: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3bfd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3bfd5c: 0xac222000  sw          $v0, 0x2000($at)
    ctx->pc = 0x3bfd5cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2)); // MMIO: 0x10002000
    // 0x3bfd60: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3bfd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3bfd64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3bfd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3bfd68: 0x70021b89  pcpyld      $v1, $zero, $v0
    ctx->pc = 0x3bfd68u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3bfd6c: 0x0  nop
    ctx->pc = 0x3bfd6cu;
    // NOP
label_3bfd70:
    // 0x3bfd70: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3bfd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3bfd74: 0x9c242000  lwu         $a0, 0x2000($at)
    ctx->pc = 0x3bfd74u;
    SET_GPR_ZE32(ctx, 4, runtime->Load32(rdram, ctx, 0x10002000u));
    // 0x3bfd78: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x3bfd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3bfd7c: 0x0  nop
    ctx->pc = 0x3bfd7cu;
    // NOP
    // 0x3bfd80: 0x0  nop
    ctx->pc = 0x3bfd80u;
    // NOP
    // 0x3bfd84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BFD84u;
    {
        const bool branch_taken_0x3bfd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bfd84) {
            ctx->pc = 0x3BFD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd70;
        }
    }
    ctx->pc = 0x3BFD8Cu;
    // 0x3bfd8c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3bfd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3bfd90: 0x41e3a  dsrl        $v1, $a0, 24
    ctx->pc = 0x3bfd90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> 24);
    // 0x3bfd94: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3bfd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3bfd98: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3bfd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3bfd9c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x3bfd9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3bfda0: 0xac222000  sw          $v0, 0x2000($at)
    ctx->pc = 0x3bfda0u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2)); // MMIO: 0x10002000
    // 0x3bfda4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3bfda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfda8: 0xc043626  jal         func_10D898
    ctx->pc = 0x3BFDA8u;
    SET_GPR_U32(ctx, 31, 0x3BFDB0u);
    ctx->pc = 0x3BFDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFDA8u;
    // 0x3bfdac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D898u, 0x3BFDA8u, 0x3BFDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFDB0u;
label_3bfdb0:
    // 0x3bfdb0: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3bfdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3bfdb4: 0x1010ba  dsrl        $v0, $s0, 2
    ctx->pc = 0x3bfdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) >> 2);
    // 0x3bfdb8: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x3bfdb8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x3bfdbc: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x3bfdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x3bfdc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3bfdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3bfdc4: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x3bfdc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x3bfdc8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3bfdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3bfdcc: 0x21e38  dsll        $v1, $v0, 24
    ctx->pc = 0x3bfdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 24);
    // 0x3bfdd0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3bfdd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3bfdd4: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x3bfdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x3bfdd8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3bfdd8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3bfddc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3bfddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3bfde0: 0xac242010  sw          $a0, 0x2010($at)
    ctx->pc = 0x3bfde0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 4));
    // 0x3bfde4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3bfde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3bfde8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3bfde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3bfdec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3bfdecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3bfdf0: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x3bfdf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3bfdf4: 0xac222000  sw          $v0, 0x2000($at)
    ctx->pc = 0x3bfdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 2));
    // 0x3bfdf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3bfdf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfdfc: 0x8f838c98  lw          $v1, -0x7368($gp)
    ctx->pc = 0x3bfdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
    // 0x3bfe00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3bfe00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfe04: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3bfe04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3bfe08: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3BFE08u;
    {
        const bool branch_taken_0x3bfe08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE08u;
        // 0x3bfe0c: 0x24728000  addiu       $s2, $v1, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfe08) {
            ctx->pc = 0x3BFEA8u;
            goto label_3bfea8;
        }
    }
    ctx->pc = 0x3BFE10u;
label_3bfe10:
    // 0x3bfe10: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bfe10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bfe14: 0x3444b000  ori         $a0, $v0, 0xB000
    ctx->pc = 0x3bfe14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x3bfe18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bfe18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfe1c: 0xc04121a  jal         func_104868
    ctx->pc = 0x3BFE1Cu;
    SET_GPR_U32(ctx, 31, 0x3BFE24u);
    ctx->pc = 0x3BFE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFE1Cu;
    // 0x3bfe20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x3BFE1Cu, 0x3BFE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFE24u;
label_3bfe24:
    // 0x3bfe24: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3BFE24u;
    {
        const bool branch_taken_0x3bfe24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE24u;
        // 0x3bfe28: 0x3a220001  xori        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfe24) {
            ctx->pc = 0x3BFE50u;
            goto label_3bfe50;
        }
    }
    ctx->pc = 0x3BFE2Cu;
    // 0x3bfe2c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3bfe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3bfe30: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x3bfe30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bfe34: 0x24632d80  addiu       $v1, $v1, 0x2D80
    ctx->pc = 0x3bfe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11648));
    // 0x3bfe38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bfe38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bfe3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bfe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bfe40: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3bfe40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bfe44: 0x3444b000  ori         $a0, $v0, 0xB000
    ctx->pc = 0x3bfe44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x3bfe48: 0xc0411da  jal         func_104768
    ctx->pc = 0x3BFE48u;
    SET_GPR_U32(ctx, 31, 0x3BFE50u);
    ctx->pc = 0x3BFE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFE48u;
    // 0x3bfe4c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104768u, 0x3BFE48u, 0x3BFE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFE50u;
label_3bfe50:
    // 0x3bfe50: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bfe50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bfe54: 0x3444d000  ori         $a0, $v0, 0xD000
    ctx->pc = 0x3bfe54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x3bfe58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bfe58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfe5c: 0xc04121a  jal         func_104868
    ctx->pc = 0x3BFE5Cu;
    SET_GPR_U32(ctx, 31, 0x3BFE64u);
    ctx->pc = 0x3BFE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFE5Cu;
    // 0x3bfe60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x3BFE5Cu, 0x3BFE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFE64u;
label_3bfe64:
    // 0x3bfe64: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3bfe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3bfe68: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3bfe68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3bfe6c: 0x24422d80  addiu       $v0, $v0, 0x2D80
    ctx->pc = 0x3bfe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11648));
    // 0x3bfe70: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x3bfe70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x3bfe74: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3bfe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bfe78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3bfe78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfe7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3bfe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bfe80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bfe80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bfe84: 0x3444d000  ori         $a0, $v0, 0xD000
    ctx->pc = 0x3bfe84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x3bfe88: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3bfe88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3bfe8c: 0xc0411fa  jal         func_1047E8
    ctx->pc = 0x3BFE8Cu;
    SET_GPR_U32(ctx, 31, 0x3BFE94u);
    ctx->pc = 0x3BFE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFE8Cu;
    // 0x3bfe90: 0xac23d080  sw          $v1, -0x2F80($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294955136), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1047E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047E8u, 0x3BFE8Cu, 0x3BFE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFE94u;
label_3bfe94:
    // 0x3bfe94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3bfe94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfe98: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x3bfe98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3bfe9c: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x3bfe9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x3bfea0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3BFEA0u;
    {
        const bool branch_taken_0x3bfea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BFEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEA0u;
        // 0x3bfea4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfea0) {
            ctx->pc = 0x3BFE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfe10;
        }
    }
    ctx->pc = 0x3BFEA8u;
label_3bfea8:
    // 0x3bfea8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bfea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bfeac: 0x3444d000  ori         $a0, $v0, 0xD000
    ctx->pc = 0x3bfeacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x3bfeb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bfeb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfeb4: 0xc04121a  jal         func_104868
    ctx->pc = 0x3BFEB4u;
    SET_GPR_U32(ctx, 31, 0x3BFEBCu);
    ctx->pc = 0x3BFEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFEB4u;
    // 0x3bfeb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x3BFEB4u, 0x3BFEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFEBCu;
label_3bfebc:
    // 0x3bfebc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3bfebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3bfec0: 0x3c070093  lui         $a3, 0x93
    ctx->pc = 0x3bfec0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)147 << 16));
    // 0x3bfec4: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x3bfec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x3bfec8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3bfec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3bfecc: 0x24e7ff30  addiu       $a3, $a3, -0xD0
    ctx->pc = 0x3bfeccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967088));
    // 0x3bfed0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x3bfed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x3bfed4: 0xac232000  sw          $v1, 0x2000($at)
    ctx->pc = 0x3bfed4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x3bfed8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3bfed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3bfedc: 0x0  nop
    ctx->pc = 0x3bfedcu;
    // NOP
label_3bfee0:
    // 0x3bfee0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3bfee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3bfee4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3bfee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3bfee8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3bfee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3bfeec: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x3bfeecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4)); // MMIO: 0x70000000
    // 0x3bfef0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3bfef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3bfef4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x3bfef4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3)); // MMIO: 0x70000004
    // 0x3bfef8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3BFEF8u;
    {
        const bool branch_taken_0x3bfef8 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x3BFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEF8u;
        // 0x3bfefc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfef8) {
            ctx->pc = 0x3BFEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfee0;
        }
    }
    ctx->pc = 0x3BFF00u;
label_3bff00:
    // 0x3bff00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3bff00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bff04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bff04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bff08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bff08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bff0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bff0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bff10: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF10u;
        // 0x3bff14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BFF18u;
}
