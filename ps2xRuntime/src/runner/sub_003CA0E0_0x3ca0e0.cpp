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

// Function: sub_003CA0E0
// Address: 0x3ca0e0 - 0x3ca1f4
void sub_003CA0E0_0x3ca0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA0E0_0x3ca0e0");
#endif

    switch (ctx->pc) {
        case 0x3ca144u: goto label_3ca144;
        case 0x3ca174u: goto label_3ca174;
        case 0x3ca1b8u: goto label_3ca1b8;
        case 0x3ca1d8u: goto label_3ca1d8;
        default: break;
    }

    ctx->pc = 0x3ca0e0u;

    // 0x3ca0e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ca0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3ca0e4: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x3ca0e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3ca0e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ca0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3ca0ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ca0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ca0f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ca0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ca0f4: 0xc21804  sllv        $v1, $v0, $a2
    ctx->pc = 0x3ca0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3ca0f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ca0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ca0fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3ca0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ca100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ca100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ca104: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ca104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ca108: 0x90822b24  lbu         $v0, 0x2B24($a0)
    ctx->pc = 0x3ca108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x3ca10c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ca10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ca110: 0xa0822b24  sb          $v0, 0x2B24($a0)
    ctx->pc = 0x3ca110u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11044), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ca114: 0x90820735  lbu         $v0, 0x735($a0)
    ctx->pc = 0x3ca114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1845)));
    // 0x3ca118: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3ca118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3ca11c: 0xa0820735  sb          $v0, 0x735($a0)
    ctx->pc = 0x3ca11cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1845), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ca120: 0x90820733  lbu         $v0, 0x733($a0)
    ctx->pc = 0x3ca120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1843)));
    // 0x3ca124: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CA124u;
    {
        const bool branch_taken_0x3ca124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x3CA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA124u;
        // 0x3ca128: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca124) {
            ctx->pc = 0x3CA138u;
            goto label_3ca138;
        }
    }
    ctx->pc = 0x3CA12Cu;
    // 0x3ca12c: 0x8e4206cc  lw          $v0, 0x6CC($s2)
    ctx->pc = 0x3ca12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1740)));
    // 0x3ca130: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3ca130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3ca134: 0xae4206cc  sw          $v0, 0x6CC($s2)
    ctx->pc = 0x3ca134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1740), GPR_U32(ctx, 2));
label_3ca138:
    // 0x3ca138: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x3ca138u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3ca13c: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3CA13Cu;
    SET_GPR_U32(ctx, 31, 0x3CA144u);
    ctx->pc = 0x3CA140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA13Cu;
    // 0x3ca140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3CA13Cu, 0x3CA144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA144u;
label_3ca144:
    // 0x3ca144: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3ca144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3ca148: 0x924508e8  lbu         $a1, 0x8E8($s2)
    ctx->pc = 0x3ca148u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x3ca14c: 0x24632f38  addiu       $v1, $v1, 0x2F38
    ctx->pc = 0x3ca14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12088));
    // 0x3ca150: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3ca150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3ca154: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3ca154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3ca158: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ca158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca15c: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x3ca15cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ca160: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3ca160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3ca164: 0x24632f40  addiu       $v1, $v1, 0x2F40
    ctx->pc = 0x3ca164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12096));
    // 0x3ca168: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x3ca168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ca16c: 0xc0aa4d0  jal         func_2A9340
    ctx->pc = 0x3CA16Cu;
    SET_GPR_U32(ctx, 31, 0x3CA174u);
    ctx->pc = 0x3CA170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA16Cu;
    // 0x3ca170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9340u, 0x3CA16Cu, 0x3CA174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA174u;
label_3ca174:
    // 0x3ca174: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ca174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca178: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x3ca178u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3ca17c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ca17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ca180: 0x24422f28  addiu       $v0, $v0, 0x2F28
    ctx->pc = 0x3ca180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12072));
    // 0x3ca184: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3ca184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3ca188: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ca188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ca18c: 0x3883000f  xori        $v1, $a0, 0xF
    ctx->pc = 0x3ca18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)15);
    // 0x3ca190: 0x2882000e  slti        $v0, $a0, 0xE
    ctx->pc = 0x3ca190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x3ca194: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3ca194u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3ca198: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3ca198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3ca19c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3CA19Cu;
    {
        const bool branch_taken_0x3ca19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca19c) {
            ctx->pc = 0x3CA1C0u;
            goto label_3ca1c0;
        }
    }
    ctx->pc = 0x3CA1A4u;
    // 0x3ca1a4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3ca1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3ca1a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3ca1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ca1ac: 0x8c442950  lw          $a0, 0x2950($v0)
    ctx->pc = 0x3ca1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10576)));
    // 0x3ca1b0: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3CA1B0u;
    SET_GPR_U32(ctx, 31, 0x3CA1B8u);
    ctx->pc = 0x3CA1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA1B0u;
    // 0x3ca1b4: 0x24532950  addiu       $s3, $v0, 0x2950 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 10576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3CA1B0u, 0x3CA1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA1B8u;
label_3ca1b8:
    // 0x3ca1b8: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x3ca1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x3ca1bc: 0x0  nop
    ctx->pc = 0x3ca1bcu;
    // NOP
label_3ca1c0:
    // 0x3ca1c0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3ca1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3ca1c4: 0x24422f30  addiu       $v0, $v0, 0x2F30
    ctx->pc = 0x3ca1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12080));
    // 0x3ca1c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3ca1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3ca1cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3ca1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ca1d0: 0xc0bfae0  jal         func_2FEB80
    ctx->pc = 0x3CA1D0u;
    SET_GPR_U32(ctx, 31, 0x3CA1D8u);
    ctx->pc = 0x3CA1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA1D0u;
    // 0x3ca1d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB80u, 0x3CA1D0u, 0x3CA1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA1D8u;
label_3ca1d8:
    // 0x3ca1d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ca1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ca1dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ca1dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ca1e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ca1e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca1e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ca1e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca1e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ca1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA1ECu;
        // 0x3ca1f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA1F4u;
}
