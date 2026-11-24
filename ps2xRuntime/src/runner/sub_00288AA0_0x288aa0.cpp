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

// Function: sub_00288AA0
// Address: 0x288aa0 - 0x288c70
void sub_00288AA0_0x288aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288AA0_0x288aa0");
#endif

    switch (ctx->pc) {
        case 0x288ae4u: goto label_288ae4;
        case 0x288af0u: goto label_288af0;
        case 0x288b00u: goto label_288b00;
        case 0x288b14u: goto label_288b14;
        case 0x288b30u: goto label_288b30;
        case 0x288b44u: goto label_288b44;
        case 0x288b78u: goto label_288b78;
        case 0x288b88u: goto label_288b88;
        case 0x288b98u: goto label_288b98;
        case 0x288bd4u: goto label_288bd4;
        case 0x288be4u: goto label_288be4;
        case 0x288bf0u: goto label_288bf0;
        case 0x288c34u: goto label_288c34;
        default: break;
    }

    ctx->pc = 0x288aa0u;

    // 0x288aa0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x288aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x288aa4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x288aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x288aa8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x288aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x288aac: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x288aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x288ab0: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x288ab0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ab4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x288ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x288ab8: 0x27a400cc  addiu       $a0, $sp, 0xCC
    ctx->pc = 0x288ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x288abc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x288abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x288ac0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x288ac0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ac4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x288ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x288ac8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x288ac8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288acc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x288accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x288ad0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x288ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x288ad4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x288ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x288ad8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x288ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288adc: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x288ADCu;
    SET_GPR_U32(ctx, 31, 0x288AE4u);
    ctx->pc = 0x288AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288ADCu;
    // 0x288ae0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x288ADCu, 0x288AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AE4u;
label_288ae4:
    // 0x288ae4: 0x8ee50190  lw          $a1, 0x190($s7)
    ctx->pc = 0x288ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 400)));
    // 0x288ae8: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x288AE8u;
    SET_GPR_U32(ctx, 31, 0x288AF0u);
    ctx->pc = 0x288AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AE8u;
    // 0x288aec: 0x27a400cc  addiu       $a0, $sp, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x288AE8u, 0x288AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AF0u;
label_288af0:
    // 0x288af0: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x288af0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x288af4: 0x27a400cc  addiu       $a0, $sp, 0xCC
    ctx->pc = 0x288af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x288af8: 0xc09d524  jal         func_275490
    ctx->pc = 0x288AF8u;
    SET_GPR_U32(ctx, 31, 0x288B00u);
    ctx->pc = 0x288AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AF8u;
    // 0x288afc: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x288AF8u, 0x288B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B00u;
label_288b00:
    // 0x288b00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x288b00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b04: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x288B04u;
    {
        const bool branch_taken_0x288b04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x288B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B04u;
        // 0x288b08: 0x27a400cc  addiu       $a0, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b04) {
            ctx->pc = 0x288B20u;
            goto label_288b20;
        }
    }
    ctx->pc = 0x288B0Cu;
    // 0x288b0c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x288B0Cu;
    SET_GPR_U32(ctx, 31, 0x288B14u);
    ctx->pc = 0x288B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B0Cu;
    // 0x288b10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x288B0Cu, 0x288B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B14u;
label_288b14:
    // 0x288b14: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x288B14u;
    {
        const bool branch_taken_0x288b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B14u;
        // 0x288b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b14) {
            ctx->pc = 0x288C40u;
            goto label_288c40;
        }
    }
    ctx->pc = 0x288B1Cu;
    // 0x288b1c: 0x0  nop
    ctx->pc = 0x288b1cu;
    // NOP
label_288b20:
    // 0x288b20: 0x9666000e  lhu         $a2, 0xE($s3)
    ctx->pc = 0x288b20u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x288b24: 0x27a400cc  addiu       $a0, $sp, 0xCC
    ctx->pc = 0x288b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x288b28: 0xc09d524  jal         func_275490
    ctx->pc = 0x288B28u;
    SET_GPR_U32(ctx, 31, 0x288B30u);
    ctx->pc = 0x288B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B28u;
    // 0x288b2c: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x288B28u, 0x288B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B30u;
label_288b30:
    // 0x288b30: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x288b30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b34: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x288B34u;
    {
        const bool branch_taken_0x288b34 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x288B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B34u;
        // 0x288b38: 0x27a400cc  addiu       $a0, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b34) {
            ctx->pc = 0x288B50u;
            goto label_288b50;
        }
    }
    ctx->pc = 0x288B3Cu;
    // 0x288b3c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x288B3Cu;
    SET_GPR_U32(ctx, 31, 0x288B44u);
    ctx->pc = 0x288B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B3Cu;
    // 0x288b40: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x288B3Cu, 0x288B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B44u;
label_288b44:
    // 0x288b44: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x288B44u;
    {
        const bool branch_taken_0x288b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B44u;
        // 0x288b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b44) {
            ctx->pc = 0x288C40u;
            goto label_288c40;
        }
    }
    ctx->pc = 0x288B4Cu;
    // 0x288b4c: 0x0  nop
    ctx->pc = 0x288b4cu;
    // NOP
label_288b50:
    // 0x288b50: 0x3c02561c  lui         $v0, 0x561C
    ctx->pc = 0x288b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22044 << 16));
    // 0x288b54: 0x34423ec8  ori         $v0, $v0, 0x3EC8
    ctx->pc = 0x288b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16072);
    // 0x288b58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x288b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b5c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x288b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x288b60: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x288b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x288b64: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x288b64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x288b68: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x288B68u;
    {
        const bool branch_taken_0x288b68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x288B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B68u;
        // 0x288b6c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b68) {
            ctx->pc = 0x288C28u;
            goto label_288c28;
        }
    }
    ctx->pc = 0x288B70u;
    // 0x288b70: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x288b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b74: 0x0  nop
    ctx->pc = 0x288b74u;
    // NOP
label_288b78:
    // 0x288b78: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x288b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x288b7c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x288b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b80: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x288B80u;
    SET_GPR_U32(ctx, 31, 0x288B88u);
    ctx->pc = 0x288B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B80u;
    // 0x288b84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x288B80u, 0x288B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B88u;
label_288b88:
    // 0x288b88: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x288b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x288b8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x288b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288b90: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x288B90u;
    SET_GPR_U32(ctx, 31, 0x288B98u);
    ctx->pc = 0x288B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288B90u;
    // 0x288b94: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x288B90u, 0x288B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288B98u;
label_288b98:
    // 0x288b98: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x288b98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x288b9c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x288B9Cu;
    {
        const bool branch_taken_0x288b9c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x288BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288B9Cu;
        // 0x288ba0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288b9c) {
            ctx->pc = 0x288BB0u;
            goto label_288bb0;
        }
    }
    ctx->pc = 0x288BA4u;
    // 0x288ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x288ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288ba8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x288BA8u;
    {
        const bool branch_taken_0x288ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288BA8u;
        // 0x288bac: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ba8) {
            ctx->pc = 0x288BC8u;
            goto label_288bc8;
        }
    }
    ctx->pc = 0x288BB0u;
label_288bb0:
    // 0x288bb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x288bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x288bb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x288bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x288bb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x288bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x288bbc: 0x0  nop
    ctx->pc = 0x288bbcu;
    // NOP
    // 0x288bc0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x288bc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x288bc4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x288bc4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_288bc8:
    // 0x288bc8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x288bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x288bcc: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x288BCCu;
    SET_GPR_U32(ctx, 31, 0x288BD4u);
    ctx->pc = 0x288BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288BCCu;
    // 0x288bd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x288BCCu, 0x288BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BD4u;
label_288bd4:
    // 0x288bd4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x288bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x288bd8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x288bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x288bdc: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x288BDCu;
    SET_GPR_U32(ctx, 31, 0x288BE4u);
    ctx->pc = 0x288BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288BDCu;
    // 0x288be0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x288BDCu, 0x288BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BE4u;
label_288be4:
    // 0x288be4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x288be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288be8: 0xc076664  jal         func_1D9990
    ctx->pc = 0x288BE8u;
    SET_GPR_U32(ctx, 31, 0x288BF0u);
    ctx->pc = 0x288BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288BE8u;
    // 0x288bec: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x288BE8u, 0x288BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288BF0u;
label_288bf0:
    // 0x288bf0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x288bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288bf4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x288BF4u;
    {
        const bool branch_taken_0x288bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288bf4) {
            ctx->pc = 0x288C10u;
            goto label_288c10;
        }
    }
    ctx->pc = 0x288BFCu;
    // 0x288bfc: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x288bfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x288c00: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x288c00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x288c04: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x288c04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c08: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x288c08u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x288c0c: 0x0  nop
    ctx->pc = 0x288c0cu;
    // NOP
label_288c10:
    // 0x288c10: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x288c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x288c14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x288c14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x288c18: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x288c18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x288c1c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x288C1Cu;
    {
        const bool branch_taken_0x288c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x288C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C1Cu;
        // 0x288c20: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c1c) {
            ctx->pc = 0x288B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288b78;
        }
    }
    ctx->pc = 0x288C24u;
    // 0x288c24: 0x0  nop
    ctx->pc = 0x288c24u;
    // NOP
label_288c28:
    // 0x288c28: 0x27a400cc  addiu       $a0, $sp, 0xCC
    ctx->pc = 0x288c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x288c2c: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x288C2Cu;
    SET_GPR_U32(ctx, 31, 0x288C34u);
    ctx->pc = 0x288C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288C2Cu;
    // 0x288c30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x288C2Cu, 0x288C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288C34u;
label_288c34:
    // 0x288c34: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x288c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x288c38: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x288c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x288c3c: 0x0  nop
    ctx->pc = 0x288c3cu;
    // NOP
label_288c40:
    // 0x288c40: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x288c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x288c44: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x288c44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x288c48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x288c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288c4c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x288c4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x288c50: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x288c50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x288c54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x288c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288c58: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x288c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288c5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x288c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288c60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x288c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288c64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x288c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288c68: 0x3e00008  jr          $ra
    ctx->pc = 0x288C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288C68u;
        // 0x288c6c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288C70u;
}
