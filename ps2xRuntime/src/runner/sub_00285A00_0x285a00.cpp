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

// Function: sub_00285A00
// Address: 0x285a00 - 0x285cbc
void sub_00285A00_0x285a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285A00_0x285a00");
#endif

    switch (ctx->pc) {
        case 0x285a4cu: goto label_285a4c;
        case 0x285a60u: goto label_285a60;
        case 0x285a6cu: goto label_285a6c;
        case 0x285a80u: goto label_285a80;
        case 0x285a90u: goto label_285a90;
        case 0x285aa8u: goto label_285aa8;
        case 0x285ac0u: goto label_285ac0;
        case 0x285accu: goto label_285acc;
        case 0x285ae8u: goto label_285ae8;
        case 0x285af4u: goto label_285af4;
        case 0x285c54u: goto label_285c54;
        case 0x285c6cu: goto label_285c6c;
        case 0x285c90u: goto label_285c90;
        default: break;
    }

    ctx->pc = 0x285a00u;

    // 0x285a00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x285a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x285a04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x285a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x285a08: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x285a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x285a0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x285a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x285a10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x285a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x285a14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x285a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x285a18: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x285a18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x285a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x285a20: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x285a20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x285a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x285a28: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x285a28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x285a30: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x285a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a34: 0x90e5000c  lbu         $a1, 0xC($a3)
    ctx->pc = 0x285a34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x285a38: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x285a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a3c: 0x90e6000d  lbu         $a2, 0xD($a3)
    ctx->pc = 0x285a3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x285a40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x285a40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a44: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x285A44u;
    SET_GPR_U32(ctx, 31, 0x285A4Cu);
    ctx->pc = 0x285A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285A44u;
    // 0x285a48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x285A44u, 0x285A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A4Cu;
label_285a4c:
    // 0x285a4c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x285a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x285a50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x285a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285a54: 0xdc265ae8  ld          $a2, 0x5AE8($at)
    ctx->pc = 0x285a54u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x665AE8u));
    // 0x285a58: 0xc074648  jal         func_1D1920
    ctx->pc = 0x285A58u;
    SET_GPR_U32(ctx, 31, 0x285A60u);
    ctx->pc = 0x285A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285A58u;
    // 0x285a5c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x285A58u, 0x285A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A60u;
label_285a60:
    // 0x285a60: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x285a60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x285a64: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x285A64u;
    SET_GPR_U32(ctx, 31, 0x285A6Cu);
    ctx->pc = 0x285A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285A64u;
    // 0x285a68: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x285A64u, 0x285A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A6Cu;
label_285a6c:
    // 0x285a6c: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x285a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x285a70: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x285a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x285a74: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x285a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x285a78: 0xc074648  jal         func_1D1920
    ctx->pc = 0x285A78u;
    SET_GPR_U32(ctx, 31, 0x285A80u);
    ctx->pc = 0x285A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285A78u;
    // 0x285a7c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x285A78u, 0x285A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A80u;
label_285a80:
    // 0x285a80: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x285a80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x285a84: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x285a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x285a88: 0xc0756d8  jal         func_1D5B60
    ctx->pc = 0x285A88u;
    SET_GPR_U32(ctx, 31, 0x285A90u);
    ctx->pc = 0x285A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285A88u;
    // 0x285a8c: 0x2622021  addu        $a0, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5B60u, 0x285A88u, 0x285A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285A90u;
label_285a90:
    // 0x285a90: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x285a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x285a94: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x285a94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x285a98: 0x1020007b  beqz        $at, . + 4 + (0x7B << 2)
    ctx->pc = 0x285A98u;
    {
        const bool branch_taken_0x285a98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A98u;
        // 0x285a9c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a98) {
            ctx->pc = 0x285C88u;
            goto label_285c88;
        }
    }
    ctx->pc = 0x285AA0u;
    // 0x285aa0: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x285aa0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x285aa4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x285aa4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_285aa8:
    // 0x285aa8: 0x86230008  lh          $v1, 0x8($s1)
    ctx->pc = 0x285aa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x285aac: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x285aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x285ab0: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x285AB0u;
    {
        const bool branch_taken_0x285ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x285AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285AB0u;
        // 0x285ab4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ab0) {
            ctx->pc = 0x285C70u;
            goto label_285c70;
        }
    }
    ctx->pc = 0x285AB8u;
    // 0x285ab8: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x285AB8u;
    SET_GPR_U32(ctx, 31, 0x285AC0u);
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x285AB8u, 0x285AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AC0u;
label_285ac0:
    // 0x285ac0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x285ac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ac4: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x285AC4u;
    SET_GPR_U32(ctx, 31, 0x285ACCu);
    ctx->pc = 0x285AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AC4u;
    // 0x285ac8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x285AC4u, 0x285ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285ACCu;
label_285acc:
    // 0x285acc: 0x9228000e  lbu         $t0, 0xE($s1)
    ctx->pc = 0x285accu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x285ad0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x285ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x285ad4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x285ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ad8: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x285ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x285adc: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x285adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x285ae0: 0xc074458  jal         func_1D1160
    ctx->pc = 0x285AE0u;
    SET_GPR_U32(ctx, 31, 0x285AE8u);
    ctx->pc = 0x285AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AE0u;
    // 0x285ae4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x285AE0u, 0x285AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AE8u;
label_285ae8:
    // 0x285ae8: 0x92040019  lbu         $a0, 0x19($s0)
    ctx->pc = 0x285ae8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x285aec: 0xc0a1224  jal         func_284890
    ctx->pc = 0x285AECu;
    SET_GPR_U32(ctx, 31, 0x285AF4u);
    ctx->pc = 0x285AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285AECu;
    // 0x285af0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284890u, 0x285AECu, 0x285AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285AF4u;
label_285af4:
    // 0x285af4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x285af4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285af8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285afc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x285afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x285b00: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x285b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x285b04: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x285b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x285b08: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x285b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x285b0c: 0x7c230080  sq          $v1, 0x80($at)
    ctx->pc = 0x285b0cu;
    runtime->Store128(rdram, ctx, 0x70000080u, GPR_VEC(ctx, 3));
    // 0x285b10: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x285b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x285b14: 0x8627000c  lh          $a3, 0xC($s1)
    ctx->pc = 0x285b14u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x285b18: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x285b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x285b1c: 0x9203001a  lbu         $v1, 0x1A($s0)
    ctx->pc = 0x285b1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x285b20: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285b24: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x285b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x285b28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x285b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285b2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x285b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x285b30: 0xf23818  mult        $a3, $a3, $s2
    ctx->pc = 0x285b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x285b34: 0x73a03  sra         $a3, $a3, 8
    ctx->pc = 0x285b34u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 8));
    // 0x285b38: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x285b38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x285b3c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x285b3cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x285b40: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x285b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x285b44: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x285b44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x285b48: 0xac23008c  sw          $v1, 0x8C($at)
    ctx->pc = 0x285b48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 140), GPR_U32(ctx, 3));
    // 0x285b4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285b50: 0x78230080  lq          $v1, 0x80($at)
    ctx->pc = 0x285b50u;
    SET_GPR_VEC(ctx, 3, runtime->Load128(rdram, ctx, 0x70000080u));
    // 0x285b54: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285b58: 0x7c230090  sq          $v1, 0x90($at)
    ctx->pc = 0x285b58u;
    runtime->Store128(rdram, ctx, 0x70000090u, GPR_VEC(ctx, 3));
    // 0x285b5c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285b60: 0x78230080  lq          $v1, 0x80($at)
    ctx->pc = 0x285b60u;
    SET_GPR_VEC(ctx, 3, runtime->Load128(rdram, ctx, 0x70000080u));
    // 0x285b64: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285b68: 0x7c2300a0  sq          $v1, 0xA0($at)
    ctx->pc = 0x285b68u;
    runtime->Store128(rdram, ctx, 0x700000A0u, GPR_VEC(ctx, 3));
    // 0x285b6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285b70: 0x78230080  lq          $v1, 0x80($at)
    ctx->pc = 0x285b70u;
    SET_GPR_VEC(ctx, 3, runtime->Load128(rdram, ctx, 0x70000080u));
    // 0x285b74: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285b78: 0x7c2300b0  sq          $v1, 0xB0($at)
    ctx->pc = 0x285b78u;
    runtime->Store128(rdram, ctx, 0x700000B0u, GPR_VEC(ctx, 3));
    // 0x285b7c: 0x86630008  lh          $v1, 0x8($s3)
    ctx->pc = 0x285b7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x285b80: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x285b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285b84: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285b88: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x285b88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x285b8c: 0x0  nop
    ctx->pc = 0x285b8cu;
    // NOP
    // 0x285b90: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x285b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x285b94: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x285b94u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x285b98: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x285b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x285b9c: 0xe4200000  swc1        $f0, 0x0($at)
    ctx->pc = 0x285b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000000u, bits); }
    // 0x285ba0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285ba4: 0xac200010  sw          $zero, 0x10($at)
    ctx->pc = 0x285ba4u;
    runtime->Store32(rdram, ctx, 0x70000010u, GPR_U32(ctx, 0)); // MMIO: 0x70000010
    // 0x285ba8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285bac: 0xc4200000  lwc1        $f0, 0x0($at)
    ctx->pc = 0x285bacu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285bb0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285bb4: 0xe4200020  swc1        $f0, 0x20($at)
    ctx->pc = 0x285bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000020u, bits); }
    // 0x285bb8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285bbc: 0xc4200010  lwc1        $f0, 0x10($at)
    ctx->pc = 0x285bbcu;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000010u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285bc0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285bc4: 0xe4200030  swc1        $f0, 0x30($at)
    ctx->pc = 0x285bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000030u, bits); }
    // 0x285bc8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285bcc: 0xac200004  sw          $zero, 0x4($at)
    ctx->pc = 0x285bccu;
    runtime->Store32(rdram, ctx, 0x70000004u, GPR_U32(ctx, 0)); // MMIO: 0x70000004
    // 0x285bd0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285bd4: 0xac200014  sw          $zero, 0x14($at)
    ctx->pc = 0x285bd4u;
    runtime->Store32(rdram, ctx, 0x70000014u, GPR_U32(ctx, 0)); // MMIO: 0x70000014
    // 0x285bd8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285bdc: 0xac200024  sw          $zero, 0x24($at)
    ctx->pc = 0x285bdcu;
    runtime->Store32(rdram, ctx, 0x70000024u, GPR_U32(ctx, 0)); // MMIO: 0x70000024
    // 0x285be0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285be4: 0xac200034  sw          $zero, 0x34($at)
    ctx->pc = 0x285be4u;
    runtime->Store32(rdram, ctx, 0x70000034u, GPR_U32(ctx, 0)); // MMIO: 0x70000034
    // 0x285be8: 0x8663000a  lh          $v1, 0xA($s3)
    ctx->pc = 0x285be8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x285bec: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x285becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285bf0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285bf4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x285bf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x285bf8: 0x0  nop
    ctx->pc = 0x285bf8u;
    // NOP
    // 0x285bfc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x285bfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x285c00: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x285c00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x285c04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x285c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x285c08: 0xe4200008  swc1        $f0, 0x8($at)
    ctx->pc = 0x285c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000008u, bits); }
    // 0x285c0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285c10: 0xe4200018  swc1        $f0, 0x18($at)
    ctx->pc = 0x285c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000018u, bits); }
    // 0x285c14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285c18: 0xc4200008  lwc1        $f0, 0x8($at)
    ctx->pc = 0x285c18u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285c1c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x285c1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x285c20: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285c24: 0xe4200028  swc1        $f0, 0x28($at)
    ctx->pc = 0x285c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000028u, bits); }
    // 0x285c28: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285c2c: 0xe4200038  swc1        $f0, 0x38($at)
    ctx->pc = 0x285c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000038u, bits); }
    // 0x285c30: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285c34: 0xac22000c  sw          $v0, 0xC($at)
    ctx->pc = 0x285c34u;
    runtime->Store32(rdram, ctx, 0x7000000Cu, GPR_U32(ctx, 2)); // MMIO: 0x7000000c
    // 0x285c38: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285c3c: 0xac22001c  sw          $v0, 0x1C($at)
    ctx->pc = 0x285c3cu;
    runtime->Store32(rdram, ctx, 0x7000001Cu, GPR_U32(ctx, 2)); // MMIO: 0x7000001c
    // 0x285c40: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285c44: 0xac22002c  sw          $v0, 0x2C($at)
    ctx->pc = 0x285c44u;
    runtime->Store32(rdram, ctx, 0x7000002Cu, GPR_U32(ctx, 2)); // MMIO: 0x7000002c
    // 0x285c48: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x285c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x285c4c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x285C4Cu;
    SET_GPR_U32(ctx, 31, 0x285C54u);
    ctx->pc = 0x285C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285C4Cu;
    // 0x285c50: 0xac22003c  sw          $v0, 0x3C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x285C4Cu, 0x285C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C54u;
label_285c54:
    // 0x285c54: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x285c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x285c58: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x285c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x285c5c: 0x34a60040  ori         $a2, $a1, 0x40
    ctx->pc = 0x285c5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x285c60: 0x34a70080  ori         $a3, $a1, 0x80
    ctx->pc = 0x285c60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x285c64: 0xc0756dc  jal         func_1D5B70
    ctx->pc = 0x285C64u;
    SET_GPR_U32(ctx, 31, 0x285C6Cu);
    ctx->pc = 0x285C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285C64u;
    // 0x285c68: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5B70u, 0x285C64u, 0x285C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C6Cu;
label_285c6c:
    // 0x285c6c: 0x0  nop
    ctx->pc = 0x285c6cu;
    // NOP
label_285c70:
    // 0x285c70: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x285c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x285c74: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x285c74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x285c78: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x285c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x285c7c: 0x1440ff8a  bnez        $v0, . + 4 + (-0x76 << 2)
    ctx->pc = 0x285C7Cu;
    {
        const bool branch_taken_0x285c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285C7Cu;
        // 0x285c80: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c7c) {
            ctx->pc = 0x285AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285aa8;
        }
    }
    ctx->pc = 0x285C84u;
    // 0x285c84: 0x0  nop
    ctx->pc = 0x285c84u;
    // NOP
label_285c88:
    // 0x285c88: 0xc0756f4  jal         func_1D5BD0
    ctx->pc = 0x285C88u;
    SET_GPR_U32(ctx, 31, 0x285C90u);
    ctx->pc = 0x1D5BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5BD0u, 0x285C88u, 0x285C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285C90u;
label_285c90:
    // 0x285c90: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x285c90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x285c94: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x285c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x285c98: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x285c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x285c9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285ca0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x285ca0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285ca4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x285ca4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285ca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x285ca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285cac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285cacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285cb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x285CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285CB4u;
        // 0x285cb8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285CBCu;
}
