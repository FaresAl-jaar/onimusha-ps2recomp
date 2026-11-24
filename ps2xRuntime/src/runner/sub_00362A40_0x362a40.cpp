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

// Function: sub_00362A40
// Address: 0x362a40 - 0x362b8c
void sub_00362A40_0x362a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362A40_0x362a40");
#endif

    switch (ctx->pc) {
        case 0x362aa0u: goto label_362aa0;
        case 0x362ac8u: goto label_362ac8;
        case 0x362b08u: goto label_362b08;
        case 0x362b34u: goto label_362b34;
        case 0x362b50u: goto label_362b50;
        default: break;
    }

    ctx->pc = 0x362a40u;

    // 0x362a40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x362a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x362a44: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x362a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x362a48: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x362a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x362a4c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x362a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x362a50: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x362a50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a54: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x362a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x362a58: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x362a58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x362a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x362a60: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x362a60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x362a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x362a68: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x362a68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x362a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x362a70: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x362a70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a74: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x362a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x362a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x362a7c: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x362a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x362a80: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x362a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a84: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x362a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x362a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x362a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a90: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x362a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x362a94: 0x250829d0  addiu       $t0, $t0, 0x29D0
    ctx->pc = 0x362a94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10704));
    // 0x362a98: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x362A98u;
    SET_GPR_U32(ctx, 31, 0x362AA0u);
    ctx->pc = 0x362A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362A98u;
    // 0x362a9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x362A98u, 0x362AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362AA0u;
label_362aa0:
    // 0x362aa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x362aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362aa4: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x362AA4u;
    {
        const bool branch_taken_0x362aa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x362AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362AA4u;
        // 0x362aa8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362aa4) {
            ctx->pc = 0x362B58u;
            goto label_362b58;
        }
    }
    ctx->pc = 0x362AACu;
    // 0x362aac: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x362aacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ab0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x362ab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ab4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x362ab4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362abc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x362abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x362ac0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x362AC0u;
    SET_GPR_U32(ctx, 31, 0x362AC8u);
    ctx->pc = 0x362AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362AC0u;
    // 0x362ac4: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x362AC0u, 0x362AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362AC8u;
label_362ac8:
    // 0x362ac8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x362ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x362acc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x362accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x362ad0: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x362ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x362ad4: 0x2442fb00  addiu       $v0, $v0, -0x500
    ctx->pc = 0x362ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966016));
    // 0x362ad8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x362ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x362adc: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x362adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x362ae0: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x362ae0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x362ae4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x362ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x362ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362aec: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x362aecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x362af0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x362af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362af4: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x362af4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x362af8: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x362af8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x362afc: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x362afcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x362b00: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x362B00u;
    SET_GPR_U32(ctx, 31, 0x362B08u);
    ctx->pc = 0x362B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362B00u;
    // 0x362b04: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x362B00u, 0x362B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362B08u;
label_362b08:
    // 0x362b08: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x362b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x362b0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x362b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x362b10: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x362b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x362b14: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x362b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x362b18: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x362b18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x362b1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x362b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362b20: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x362b20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x362b24: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x362b24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x362b28: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x362b28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x362b2c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x362B2Cu;
    SET_GPR_U32(ctx, 31, 0x362B34u);
    ctx->pc = 0x362B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362B2Cu;
    // 0x362b30: 0xae000094  sw          $zero, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x362B2Cu, 0x362B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362B34u;
label_362b34:
    // 0x362b34: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x362b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x362b38: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x362b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x362b3c: 0x2442fb04  addiu       $v0, $v0, -0x4FC
    ctx->pc = 0x362b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966020));
    // 0x362b40: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x362b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x362b44: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x362b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x362b48: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x362B48u;
    SET_GPR_U32(ctx, 31, 0x362B50u);
    ctx->pc = 0x362B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362B48u;
    // 0x362b4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x362B48u, 0x362B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362B50u;
label_362b50:
    // 0x362b50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x362B50u;
    {
        const bool branch_taken_0x362b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B50u;
        // 0x362b54: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362b50) {
            ctx->pc = 0x362B60u;
            goto label_362b60;
        }
    }
    ctx->pc = 0x362B58u;
label_362b58:
    // 0x362b58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362b5c: 0x0  nop
    ctx->pc = 0x362b5cu;
    // NOP
label_362b60:
    // 0x362b60: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x362b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x362b64: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x362b64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x362b68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x362b68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x362b6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x362b6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362b70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x362b70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x362b74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x362b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x362b78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x362b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x362b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x362b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362b84: 0x3e00008  jr          $ra
    ctx->pc = 0x362B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B84u;
        // 0x362b88: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362B8Cu;
}
