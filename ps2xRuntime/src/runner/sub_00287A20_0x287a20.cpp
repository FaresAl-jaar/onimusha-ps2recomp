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

// Function: sub_00287A20
// Address: 0x287a20 - 0x287c74
void sub_00287A20_0x287a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287A20_0x287a20");
#endif

    switch (ctx->pc) {
        case 0x287a70u: goto label_287a70;
        case 0x287a84u: goto label_287a84;
        case 0x287a90u: goto label_287a90;
        case 0x287aa4u: goto label_287aa4;
        case 0x287ac0u: goto label_287ac0;
        case 0x287ad8u: goto label_287ad8;
        case 0x287ae4u: goto label_287ae4;
        case 0x287b00u: goto label_287b00;
        case 0x287b0cu: goto label_287b0c;
        case 0x287b7cu: goto label_287b7c;
        case 0x287bbcu: goto label_287bbc;
        case 0x287bccu: goto label_287bcc;
        case 0x287bdcu: goto label_287bdc;
        case 0x287c28u: goto label_287c28;
        default: break;
    }

    ctx->pc = 0x287a20u;

    // 0x287a20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x287a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x287a24: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x287a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x287a28: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x287a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x287a2c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x287a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x287a30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x287a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x287a34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x287a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x287a38: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x287a38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x287a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x287a40: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x287a40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x287a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x287a48: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x287a48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x287a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x287a50: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x287a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x287a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x287a58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x287a58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a5c: 0x90e50010  lbu         $a1, 0x10($a3)
    ctx->pc = 0x287a5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x287a60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x287a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a64: 0x90e60011  lbu         $a2, 0x11($a3)
    ctx->pc = 0x287a64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 17)));
    // 0x287a68: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x287A68u;
    SET_GPR_U32(ctx, 31, 0x287A70u);
    ctx->pc = 0x287A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A68u;
    // 0x287a6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x287A68u, 0x287A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A70u;
label_287a70:
    // 0x287a70: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x287a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x287a74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x287a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a78: 0xdc265ae8  ld          $a2, 0x5AE8($at)
    ctx->pc = 0x287a78u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x665AE8u));
    // 0x287a7c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x287A7Cu;
    SET_GPR_U32(ctx, 31, 0x287A84u);
    ctx->pc = 0x287A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A7Cu;
    // 0x287a80: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x287A7Cu, 0x287A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A84u;
label_287a84:
    // 0x287a84: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x287a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x287a88: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x287A88u;
    SET_GPR_U32(ctx, 31, 0x287A90u);
    ctx->pc = 0x287A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A88u;
    // 0x287a8c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x287A88u, 0x287A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A90u;
label_287a90:
    // 0x287a90: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x287a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x287a94: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x287a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x287a98: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x287a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x287a9c: 0xc074648  jal         func_1D1920
    ctx->pc = 0x287A9Cu;
    SET_GPR_U32(ctx, 31, 0x287AA4u);
    ctx->pc = 0x287AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A9Cu;
    // 0x287aa0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x287A9Cu, 0x287AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AA4u;
label_287aa4:
    // 0x287aa4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x287aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x287aa8: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x287aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x287aac: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x287aacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x287ab0: 0x10200065  beqz        $at, . + 4 + (0x65 << 2)
    ctx->pc = 0x287AB0u;
    {
        const bool branch_taken_0x287ab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x287AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287AB0u;
        // 0x287ab4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ab0) {
            ctx->pc = 0x287C48u;
            goto label_287c48;
        }
    }
    ctx->pc = 0x287AB8u;
    // 0x287ab8: 0x15b43c  dsll32      $s6, $s5, 16
    ctx->pc = 0x287ab8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 21) << (32 + 16));
    // 0x287abc: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x287abcu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
label_287ac0:
    // 0x287ac0: 0x86630010  lh          $v1, 0x10($s3)
    ctx->pc = 0x287ac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x287ac4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x287ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x287ac8: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x287AC8u;
    {
        const bool branch_taken_0x287ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x287ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287AC8u;
        // 0x287acc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ac8) {
            ctx->pc = 0x287C30u;
            goto label_287c30;
        }
    }
    ctx->pc = 0x287AD0u;
    // 0x287ad0: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x287AD0u;
    SET_GPR_U32(ctx, 31, 0x287AD8u);
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x287AD0u, 0x287AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AD8u;
label_287ad8:
    // 0x287ad8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x287ad8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287adc: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x287ADCu;
    SET_GPR_U32(ctx, 31, 0x287AE4u);
    ctx->pc = 0x287AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287ADCu;
    // 0x287ae0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x287ADCu, 0x287AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AE4u;
label_287ae4:
    // 0x287ae4: 0x92680012  lbu         $t0, 0x12($s3)
    ctx->pc = 0x287ae4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x287ae8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x287ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x287aec: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x287aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287af0: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x287af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x287af4: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x287af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x287af8: 0xc074458  jal         func_1D1160
    ctx->pc = 0x287AF8u;
    SET_GPR_U32(ctx, 31, 0x287B00u);
    ctx->pc = 0x287AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AF8u;
    // 0x287afc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x287AF8u, 0x287B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B00u;
label_287b00:
    // 0x287b00: 0x9244001d  lbu         $a0, 0x1D($s2)
    ctx->pc = 0x287b00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 29)));
    // 0x287b04: 0xc0a1224  jal         func_284890
    ctx->pc = 0x287B04u;
    SET_GPR_U32(ctx, 31, 0x287B0Cu);
    ctx->pc = 0x287B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B04u;
    // 0x287b08: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284890u, 0x287B04u, 0x287B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B0Cu;
label_287b0c:
    // 0x287b0c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x287b0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x287b10: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x287b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x287b14: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x287b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x287b18: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x287b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x287b1c: 0x7c220080  sq          $v0, 0x80($at)
    ctx->pc = 0x287b1cu;
    runtime->Store128(rdram, ctx, 0x70000080u, GPR_VEC(ctx, 2));
    // 0x287b20: 0x8663000e  lh          $v1, 0xE($s3)
    ctx->pc = 0x287b20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x287b24: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x287b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x287b28: 0x9242001e  lbu         $v0, 0x1E($s2)
    ctx->pc = 0x287b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x287b2c: 0x761818  mult        $v1, $v1, $s6
    ctx->pc = 0x287b2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x287b30: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x287b30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x287b34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x287b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x287b38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x287b38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x287b3c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x287b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x287b40: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x287b40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x287b44: 0xac22008c  sw          $v0, 0x8C($at)
    ctx->pc = 0x287b44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 140), GPR_U32(ctx, 2));
    // 0x287b48: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x287b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x287b4c: 0x78220080  lq          $v0, 0x80($at)
    ctx->pc = 0x287b4cu;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000080u));
    // 0x287b50: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x287b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x287b54: 0x7c220090  sq          $v0, 0x90($at)
    ctx->pc = 0x287b54u;
    runtime->Store128(rdram, ctx, 0x70000090u, GPR_VEC(ctx, 2));
    // 0x287b58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x287b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x287b5c: 0x78220080  lq          $v0, 0x80($at)
    ctx->pc = 0x287b5cu;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000080u));
    // 0x287b60: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x287b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x287b64: 0x7c2200a0  sq          $v0, 0xA0($at)
    ctx->pc = 0x287b64u;
    runtime->Store128(rdram, ctx, 0x700000A0u, GPR_VEC(ctx, 2));
    // 0x287b68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x287b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x287b6c: 0x78220080  lq          $v0, 0x80($at)
    ctx->pc = 0x287b6cu;
    SET_GPR_VEC(ctx, 2, runtime->Load128(rdram, ctx, 0x70000080u));
    // 0x287b70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x287b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x287b74: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x287B74u;
    SET_GPR_U32(ctx, 31, 0x287B7Cu);
    ctx->pc = 0x287B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B74u;
    // 0x287b78: 0x7c2200b0  sq          $v0, 0xB0($at) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 1), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x287B74u, 0x287B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B7Cu;
label_287b7c:
    // 0x287b7c: 0x86a30008  lh          $v1, 0x8($s5)
    ctx->pc = 0x287b7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x287b80: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x287b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x287b84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x287b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287b88: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x287b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x287b8c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x287b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287b90: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x287b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x287b94: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x287b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x287b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x287b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x287b9c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x287b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x287ba0: 0x0  nop
    ctx->pc = 0x287ba0u;
    // NOP
    // 0x287ba4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x287ba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x287ba8: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x287ba8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x287bac: 0x0  nop
    ctx->pc = 0x287bacu;
    // NOP
    // 0x287bb0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x287bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x287bb4: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x287BB4u;
    SET_GPR_U32(ctx, 31, 0x287BBCu);
    ctx->pc = 0x287BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BB4u;
    // 0x287bb8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x287BB4u, 0x287BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BBCu;
label_287bbc:
    // 0x287bbc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x287bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x287bc0: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x287bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x287bc4: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x287BC4u;
    SET_GPR_U32(ctx, 31, 0x287BCCu);
    ctx->pc = 0x287BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BC4u;
    // 0x287bc8: 0x34c40010  ori         $a0, $a2, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x287BC4u, 0x287BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BCCu;
label_287bcc:
    // 0x287bcc: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x287bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x287bd0: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x287bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x287bd4: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x287BD4u;
    SET_GPR_U32(ctx, 31, 0x287BDCu);
    ctx->pc = 0x287BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BD4u;
    // 0x287bd8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x287BD4u, 0x287BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BDCu;
label_287bdc:
    // 0x287bdc: 0x86a3000a  lh          $v1, 0xA($s5)
    ctx->pc = 0x287bdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x287be0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x287be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x287be4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x287be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x287be8: 0x34a60040  ori         $a2, $a1, 0x40
    ctx->pc = 0x287be8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x287bec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x287becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287bf0: 0x34a70080  ori         $a3, $a1, 0x80
    ctx->pc = 0x287bf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x287bf4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x287bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287bf8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x287bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287bfc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x287bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x287c00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x287c00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c04: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x287c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x287c08: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x287c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x287c0c: 0x0  nop
    ctx->pc = 0x287c0cu;
    // NOP
    // 0x287c10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x287c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x287c14: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x287c14u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x287c18: 0x0  nop
    ctx->pc = 0x287c18u;
    // NOP
    // 0x287c1c: 0x0  nop
    ctx->pc = 0x287c1cu;
    // NOP
    // 0x287c20: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x287C20u;
    SET_GPR_U32(ctx, 31, 0x287C28u);
    ctx->pc = 0x287C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C20u;
    // 0x287c24: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x287C20u, 0x287C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C28u;
label_287c28:
    // 0x287c28: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x287c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x287c2c: 0x0  nop
    ctx->pc = 0x287c2cu;
    // NOP
label_287c30:
    // 0x287c30: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x287c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x287c34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x287c34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x287c38: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x287c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x287c3c: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x287C3Cu;
    {
        const bool branch_taken_0x287c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C3Cu;
        // 0x287c40: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c3c) {
            ctx->pc = 0x287AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287ac0;
        }
    }
    ctx->pc = 0x287C44u;
    // 0x287c44: 0x0  nop
    ctx->pc = 0x287c44u;
    // NOP
label_287c48:
    // 0x287c48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x287c48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c4c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x287c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x287c50: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x287c50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x287c54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x287c54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x287c58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x287c58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287c5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x287c5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287c60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x287c60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x287c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x287c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x287C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C6Cu;
        // 0x287c70: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287C74u;
}
