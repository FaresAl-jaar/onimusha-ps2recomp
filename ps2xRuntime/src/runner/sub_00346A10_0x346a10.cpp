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

// Function: sub_00346A10
// Address: 0x346a10 - 0x346b20
void sub_00346A10_0x346a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346A10_0x346a10");
#endif

    switch (ctx->pc) {
        case 0x346a10u: goto label_346a10;
        case 0x346a14u: goto label_346a14;
        case 0x346a18u: goto label_346a18;
        case 0x346a1cu: goto label_346a1c;
        case 0x346a20u: goto label_346a20;
        case 0x346a24u: goto label_346a24;
        case 0x346a28u: goto label_346a28;
        case 0x346a2cu: goto label_346a2c;
        case 0x346a30u: goto label_346a30;
        case 0x346a34u: goto label_346a34;
        case 0x346a38u: goto label_346a38;
        case 0x346a3cu: goto label_346a3c;
        case 0x346a40u: goto label_346a40;
        case 0x346a44u: goto label_346a44;
        case 0x346a48u: goto label_346a48;
        case 0x346a4cu: goto label_346a4c;
        case 0x346a50u: goto label_346a50;
        case 0x346a54u: goto label_346a54;
        case 0x346a58u: goto label_346a58;
        case 0x346a5cu: goto label_346a5c;
        case 0x346a60u: goto label_346a60;
        case 0x346a64u: goto label_346a64;
        case 0x346a68u: goto label_346a68;
        case 0x346a6cu: goto label_346a6c;
        case 0x346a70u: goto label_346a70;
        case 0x346a74u: goto label_346a74;
        case 0x346a78u: goto label_346a78;
        case 0x346a7cu: goto label_346a7c;
        case 0x346a80u: goto label_346a80;
        case 0x346a84u: goto label_346a84;
        case 0x346a88u: goto label_346a88;
        case 0x346a8cu: goto label_346a8c;
        case 0x346a90u: goto label_346a90;
        case 0x346a94u: goto label_346a94;
        case 0x346a98u: goto label_346a98;
        case 0x346a9cu: goto label_346a9c;
        case 0x346aa0u: goto label_346aa0;
        case 0x346aa4u: goto label_346aa4;
        case 0x346aa8u: goto label_346aa8;
        case 0x346aacu: goto label_346aac;
        case 0x346ab0u: goto label_346ab0;
        case 0x346ab4u: goto label_346ab4;
        case 0x346ab8u: goto label_346ab8;
        case 0x346abcu: goto label_346abc;
        case 0x346ac0u: goto label_346ac0;
        case 0x346ac4u: goto label_346ac4;
        case 0x346ac8u: goto label_346ac8;
        case 0x346accu: goto label_346acc;
        case 0x346ad0u: goto label_346ad0;
        case 0x346ad4u: goto label_346ad4;
        case 0x346ad8u: goto label_346ad8;
        case 0x346adcu: goto label_346adc;
        case 0x346ae0u: goto label_346ae0;
        case 0x346ae4u: goto label_346ae4;
        case 0x346ae8u: goto label_346ae8;
        case 0x346aecu: goto label_346aec;
        case 0x346af0u: goto label_346af0;
        case 0x346af4u: goto label_346af4;
        case 0x346af8u: goto label_346af8;
        case 0x346afcu: goto label_346afc;
        case 0x346b00u: goto label_346b00;
        case 0x346b04u: goto label_346b04;
        case 0x346b08u: goto label_346b08;
        case 0x346b0cu: goto label_346b0c;
        case 0x346b10u: goto label_346b10;
        case 0x346b14u: goto label_346b14;
        case 0x346b18u: goto label_346b18;
        case 0x346b1cu: goto label_346b1c;
        default: break;
    }

    ctx->pc = 0x346a10u;

label_346a10:
    // 0x346a10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x346a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_346a14:
    // 0x346a14: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x346a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_346a18:
    // 0x346a18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x346a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_346a1c:
    // 0x346a1c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x346a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_346a20:
    // 0x346a20: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x346a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_346a24:
    // 0x346a24: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x346a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_346a28:
    // 0x346a28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x346a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_346a2c:
    // 0x346a2c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x346a2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_346a30:
    // 0x346a30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x346a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_346a34:
    // 0x346a34: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x346a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_346a38:
    // 0x346a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_346a3c:
    // 0x346a3c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x346a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_346a40:
    // 0x346a40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x346a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_346a44:
    // 0x346a44: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x346a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_346a48:
    // 0x346a48: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x346a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_346a4c:
    // 0x346a4c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x346a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_346a50:
    // 0x346a50: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x346a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_346a54:
    // 0x346a54: 0x240600a3  addiu       $a2, $zero, 0xA3
    ctx->pc = 0x346a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
label_346a58:
    // 0x346a58: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x346a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_346a5c:
    // 0x346a5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x346a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346a60:
    // 0x346a60: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x346a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_346a64:
    // 0x346a64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x346a64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346a68:
    // 0x346a68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x346a68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_346a6c:
    // 0x346a6c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x346a6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_346a70:
    // 0x346a70: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x346a70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_346a74:
    // 0x346a74: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x346a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_346a78:
    // 0x346a78: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x346a78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_346a7c:
    // 0x346a7c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x346a7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_346a80:
    // 0x346a80: 0xc0510e0  jal         func_144380
label_346a84:
    if (ctx->pc == 0x346A84u) {
        ctx->pc = 0x346A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A80u;
        // 0x346a84: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x346A88u;
        goto label_346a88;
    }
    ctx->pc = 0x346A80u;
    SET_GPR_U32(ctx, 31, 0x346A88u);
    ctx->pc = 0x346A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346A80u;
    // 0x346a84: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x346A80u, 0x346A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346A88u;
label_346a88:
    // 0x346a88: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x346a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
label_346a8c:
    // 0x346a8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x346a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_346a90:
    // 0x346a90: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x346a90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_346a94:
    // 0x346a94: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x346a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
label_346a98:
    // 0x346a98: 0xc0bcbdc  jal         func_2F2F70
label_346a9c:
    if (ctx->pc == 0x346A9Cu) {
        ctx->pc = 0x346A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346A98u;
        // 0x346a9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346AA0u;
        goto label_346aa0;
    }
    ctx->pc = 0x346A98u;
    SET_GPR_U32(ctx, 31, 0x346AA0u);
    ctx->pc = 0x346A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346A98u;
    // 0x346a9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2F70u, 0x346A98u, 0x346AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346AA0u;
label_346aa0:
    // 0x346aa0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_346aa4:
    if (ctx->pc == 0x346AA4u) {
        ctx->pc = 0x346AA8u;
        goto label_346aa8;
    }
    ctx->pc = 0x346AA0u;
    {
        const bool branch_taken_0x346aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x346aa0) {
            ctx->pc = 0x346AB0u;
            goto label_346ab0;
        }
    }
    ctx->pc = 0x346AA8u;
label_346aa8:
    // 0x346aa8: 0x24140900  addiu       $s4, $zero, 0x900
    ctx->pc = 0x346aa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
label_346aac:
    // 0x346aac: 0x0  nop
    ctx->pc = 0x346aacu;
    // NOP
label_346ab0:
    // 0x346ab0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_346ab4:
    if (ctx->pc == 0x346AB4u) {
        ctx->pc = 0x346AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346AB0u;
        // 0x346ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346AB8u;
        goto label_346ab8;
    }
    ctx->pc = 0x346AB0u;
    {
        const bool branch_taken_0x346ab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x346AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346AB0u;
        // 0x346ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346ab0) {
            ctx->pc = 0x346B00u;
            goto label_346b00;
        }
    }
    ctx->pc = 0x346AB8u;
label_346ab8:
    // 0x346ab8: 0x2405021d  addiu       $a1, $zero, 0x21D
    ctx->pc = 0x346ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
label_346abc:
    // 0x346abc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x346abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_346ac0:
    // 0x346ac0: 0xc0d0484  jal         func_341210
label_346ac4:
    if (ctx->pc == 0x346AC4u) {
        ctx->pc = 0x346AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346AC0u;
        // 0x346ac4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346AC8u;
        goto label_346ac8;
    }
    ctx->pc = 0x346AC0u;
    SET_GPR_U32(ctx, 31, 0x346AC8u);
    ctx->pc = 0x346AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346AC0u;
    // 0x346ac4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x346AC0u, 0x346AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346AC8u;
label_346ac8:
    // 0x346ac8: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x346ac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_346acc:
    // 0x346acc: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x346accu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_346ad0:
    // 0x346ad0: 0x320f809  jalr        $t9
label_346ad4:
    if (ctx->pc == 0x346AD4u) {
        ctx->pc = 0x346AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346AD0u;
        // 0x346ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346AD8u;
        goto label_346ad8;
    }
    ctx->pc = 0x346AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x346AD8u);
        ctx->pc = 0x346AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346AD0u;
        // 0x346ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346AD0u, 0x346AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x346AD8u;
label_346ad8:
    // 0x346ad8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x346ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_346adc:
    // 0x346adc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x346adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_346ae0:
    // 0x346ae0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x346ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_346ae4:
    // 0x346ae4: 0xc0d0ae0  jal         func_342B80
label_346ae8:
    if (ctx->pc == 0x346AE8u) {
        ctx->pc = 0x346AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346AE4u;
        // 0x346ae8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346AECu;
        goto label_346aec;
    }
    ctx->pc = 0x346AE4u;
    SET_GPR_U32(ctx, 31, 0x346AECu);
    ctx->pc = 0x346AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346AE4u;
    // 0x346ae8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B80u, 0x346AE4u, 0x346AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346AECu;
label_346aec:
    // 0x346aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346af0:
    // 0x346af0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x346af0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_346af4:
    // 0x346af4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x346af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_346af8:
    // 0x346af8: 0xc0dd74c  jal         func_375D30
label_346afc:
    if (ctx->pc == 0x346AFCu) {
        ctx->pc = 0x346AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346AF8u;
        // 0x346afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346B00u;
        goto label_346b00;
    }
    ctx->pc = 0x346AF8u;
    SET_GPR_U32(ctx, 31, 0x346B00u);
    ctx->pc = 0x346AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346AF8u;
    // 0x346afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375D30u, 0x346AF8u, 0x346B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346B00u;
label_346b00:
    // 0x346b00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x346b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_346b04:
    // 0x346b04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x346b04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_346b08:
    // 0x346b08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x346b08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_346b0c:
    // 0x346b0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x346b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_346b10:
    // 0x346b10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x346b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_346b14:
    // 0x346b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x346b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_346b18:
    // 0x346b18: 0x3e00008  jr          $ra
label_346b1c:
    if (ctx->pc == 0x346B1Cu) {
        ctx->pc = 0x346B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B18u;
        // 0x346b1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346B20u;
        goto label_fallthrough_0x346b18;
    }
    ctx->pc = 0x346B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346B18u;
        // 0x346b1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x346b18:
    ctx->pc = 0x346B20u;
}
