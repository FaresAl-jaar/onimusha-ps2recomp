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

// Function: sub_002C57F0
// Address: 0x2c57f0 - 0x2c59a4
void sub_002C57F0_0x2c57f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C57F0_0x2c57f0");
#endif

    switch (ctx->pc) {
        case 0x2c582cu: goto label_2c582c;
        case 0x2c5840u: goto label_2c5840;
        case 0x2c5884u: goto label_2c5884;
        case 0x2c58b0u: goto label_2c58b0;
        case 0x2c58c0u: goto label_2c58c0;
        case 0x2c58d4u: goto label_2c58d4;
        case 0x2c5954u: goto label_2c5954;
        default: break;
    }

    ctx->pc = 0x2c57f0u;

    // 0x2c57f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c57f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c57f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c57f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c57f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c57f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c57fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c57fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c5800: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c5800u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5804: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c5804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c5808: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c5808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c580c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c580cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c5810: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c5810u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c5818: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c5818u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c581c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c581cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5820: 0x8ea50088  lw          $a1, 0x88($s5)
    ctx->pc = 0x2c5820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x2c5824: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C5824u;
    SET_GPR_U32(ctx, 31, 0x2C582Cu);
    ctx->pc = 0x2C5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5824u;
    // 0x2c5828: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C5824u, 0x2C582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C582Cu;
label_2c582c:
    // 0x2c582c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c582cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5830: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c5830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5834: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c5834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5838: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C5838u;
    SET_GPR_U32(ctx, 31, 0x2C5840u);
    ctx->pc = 0x2C583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5838u;
    // 0x2c583c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C5838u, 0x2C5840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5840u;
label_2c5840:
    // 0x2c5840: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C5840u;
    {
        const bool branch_taken_0x2c5840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5840) {
            ctx->pc = 0x2C58F0u;
            goto label_2c58f0;
        }
    }
    ctx->pc = 0x2C5848u;
    // 0x2c5848: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2c5848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2c584c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2c584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2c5850: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C5850u;
    {
        const bool branch_taken_0x2c5850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5850) {
            ctx->pc = 0x2C58E8u;
            goto label_2c58e8;
        }
    }
    ctx->pc = 0x2C5858u;
    // 0x2c5858: 0x92870002  lbu         $a3, 0x2($s4)
    ctx->pc = 0x2c5858u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2c585c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2c585cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2c5860: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2c5860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2c5864: 0x92a600e9  lbu         $a2, 0xE9($s5)
    ctx->pc = 0x2c5864u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 233)));
    // 0x2c5868: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2c5868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2c586c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2c586cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2c5870: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c5870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c5874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c5874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5878: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2c5878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c587c: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x2C587Cu;
    SET_GPR_U32(ctx, 31, 0x2C5884u);
    ctx->pc = 0x2C5880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C587Cu;
    // 0x2c5880: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D4F0u, 0x2C587Cu, 0x2C5884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5884u;
label_2c5884:
    // 0x2c5884: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x2c5884u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2c5888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c5888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c588c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2c588cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2c5890: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2c5890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2c5894: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2c5894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c5898: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c5898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c589c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c589cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c58a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c58a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c58a4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2c58a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c58a8: 0xc0ae964  jal         func_2BA590
    ctx->pc = 0x2C58A8u;
    SET_GPR_U32(ctx, 31, 0x2C58B0u);
    ctx->pc = 0x2C58ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C58A8u;
    // 0x2c58ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA590u, 0x2C58A8u, 0x2C58B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C58B0u;
label_2c58b0:
    // 0x2c58b0: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2c58b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2c58b4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x2c58b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2c58b8: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x2C58B8u;
    SET_GPR_U32(ctx, 31, 0x2C58C0u);
    ctx->pc = 0x2C58BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C58B8u;
    // 0x2c58bc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D4F0u, 0x2C58B8u, 0x2C58C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C58C0u;
label_2c58c0:
    // 0x2c58c0: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x2c58c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2c58c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c58c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58c8: 0x82a70103  lb          $a3, 0x103($s5)
    ctx->pc = 0x2c58c8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 259)));
    // 0x2c58cc: 0xc0c7670  jal         func_31D9C0
    ctx->pc = 0x2C58CCu;
    SET_GPR_U32(ctx, 31, 0x2C58D4u);
    ctx->pc = 0x2C58D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C58CCu;
    // 0x2c58d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D9C0u, 0x2C58CCu, 0x2C58D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C58D4u;
label_2c58d4:
    // 0x2c58d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C58D4u;
    {
        const bool branch_taken_0x2c58d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c58d4) {
            ctx->pc = 0x2C58F0u;
            goto label_2c58f0;
        }
    }
    ctx->pc = 0x2C58DCu;
    // 0x2c58dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C58DCu;
    {
        const bool branch_taken_0x2c58dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C58DCu;
        // 0x2c58e0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c58dc) {
            ctx->pc = 0x2C58F0u;
            goto label_2c58f0;
        }
    }
    ctx->pc = 0x2C58E4u;
    // 0x2c58e4: 0x0  nop
    ctx->pc = 0x2c58e4u;
    // NOP
label_2c58e8:
    // 0x2c58e8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2c58e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c58ec: 0x0  nop
    ctx->pc = 0x2c58ecu;
    // NOP
label_2c58f0:
    // 0x2c58f0: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x2c58f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2c58f4: 0x2228826  xor         $s1, $s1, $v0
    ctx->pc = 0x2c58f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x2c58f8: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C58F8u;
    {
        const bool branch_taken_0x2c58f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c58f8) {
            ctx->pc = 0x2C5978u;
            goto label_2c5978;
        }
    }
    ctx->pc = 0x2C5900u;
    // 0x2c5900: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c5900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c5904: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C5904u;
    {
        const bool branch_taken_0x2c5904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5904u;
        // 0x2c5908: 0x92650003  lbu         $a1, 0x3($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5904) {
            ctx->pc = 0x2C5960u;
            goto label_2c5960;
        }
    }
    ctx->pc = 0x2C590Cu;
    // 0x2c590c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C590Cu;
    {
        const bool branch_taken_0x2c590c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C590Cu;
        // 0x2c5910: 0xa2a0004f  sb          $zero, 0x4F($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c590c) {
            ctx->pc = 0x2C5948u;
            goto label_2c5948;
        }
    }
    ctx->pc = 0x2C5914u;
    // 0x2c5914: 0x92a40037  lbu         $a0, 0x37($s5)
    ctx->pc = 0x2c5914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 55)));
    // 0x2c5918: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c5918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c591c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c591cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c5920: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c5920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c5924: 0xa2a4004e  sb          $a0, 0x4E($s5)
    ctx->pc = 0x2c5924u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c5928: 0xa2a50037  sb          $a1, 0x37($s5)
    ctx->pc = 0x2c5928u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c592c: 0xa2a00032  sb          $zero, 0x32($s5)
    ctx->pc = 0x2c592cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c5930: 0xa2a3005f  sb          $v1, 0x5F($s5)
    ctx->pc = 0x2c5930u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5934: 0xa6a00080  sh          $zero, 0x80($s5)
    ctx->pc = 0x2c5934u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c5938: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2c5938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c593c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5940: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C5940u;
    {
        const bool branch_taken_0x2c5940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5940u;
        // 0x2c5944: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5940) {
            ctx->pc = 0x2C5970u;
            goto label_2c5970;
        }
    }
    ctx->pc = 0x2C5948u;
label_2c5948:
    // 0x2c5948: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c5948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c594c: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C594Cu;
    SET_GPR_U32(ctx, 31, 0x2C5954u);
    ctx->pc = 0x2C5950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C594Cu;
    // 0x2c5950: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C594Cu, 0x2C5954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5954u;
label_2c5954:
    // 0x2c5954: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5954u;
    {
        const bool branch_taken_0x2c5954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5954) {
            ctx->pc = 0x2C5968u;
            goto label_2c5968;
        }
    }
    ctx->pc = 0x2C595Cu;
    // 0x2c595c: 0x0  nop
    ctx->pc = 0x2c595cu;
    // NOP
label_2c5960:
    // 0x2c5960: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c5960u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c5964: 0x0  nop
    ctx->pc = 0x2c5964u;
    // NOP
label_2c5968:
    // 0x2c5968: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c596c: 0x0  nop
    ctx->pc = 0x2c596cu;
    // NOP
label_2c5970:
    // 0x2c5970: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5970u;
    {
        const bool branch_taken_0x2c5970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5970) {
            ctx->pc = 0x2C5980u;
            goto label_2c5980;
        }
    }
    ctx->pc = 0x2C5978u;
label_2c5978:
    // 0x2c5978: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x2c5978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2c597c: 0x0  nop
    ctx->pc = 0x2c597cu;
    // NOP
label_2c5980:
    // 0x2c5980: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c5980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c5984: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c5984u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5988: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c5988u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c598c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c598cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5990: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c5990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5994: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c599c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C599Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C59A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C599Cu;
        // 0x2c59a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C599Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C59A4u;
}
