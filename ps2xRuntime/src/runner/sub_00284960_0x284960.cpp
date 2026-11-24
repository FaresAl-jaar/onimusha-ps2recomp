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

// Function: sub_00284960
// Address: 0x284960 - 0x284ef4
void sub_00284960_0x284960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284960_0x284960");
#endif

    switch (ctx->pc) {
        case 0x2849b0u: goto label_2849b0;
        case 0x284a4cu: goto label_284a4c;
        case 0x284e1cu: goto label_284e1c;
        case 0x284e8cu: goto label_284e8c;
        case 0x284e9cu: goto label_284e9c;
        case 0x284eb4u: goto label_284eb4;
        default: break;
    }

    ctx->pc = 0x284960u;

    // 0x284960: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x284960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x284964: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x284964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x284968: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x284968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x28496c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28496cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x284970: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x284970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284974: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x284974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x284978: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x284978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28497c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28497cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x284980: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x284980u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x284984: 0x84830054  lh          $v1, 0x54($a0)
    ctx->pc = 0x284984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x284988: 0x14600151  bnez        $v1, . + 4 + (0x151 << 2)
    ctx->pc = 0x284988u;
    {
        const bool branch_taken_0x284988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284988u;
        // 0x28498c: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284988) {
            ctx->pc = 0x284ED0u;
            goto label_284ed0;
        }
    }
    ctx->pc = 0x284990u;
    // 0x284990: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x284990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x284994: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x284994u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x284998: 0x1020014d  beqz        $at, . + 4 + (0x14D << 2)
    ctx->pc = 0x284998u;
    {
        const bool branch_taken_0x284998 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284998u;
        // 0x28499c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284998) {
            ctx->pc = 0x284ED0u;
            goto label_284ed0;
        }
    }
    ctx->pc = 0x2849A0u;
    // 0x2849a0: 0x6843c  dsll32      $s0, $a2, 16
    ctx->pc = 0x2849a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2849a4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2849a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2849a8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2849a8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2849ac: 0x0  nop
    ctx->pc = 0x2849acu;
    // NOP
label_2849b0:
    // 0x2849b0: 0x86240004  lh          $a0, 0x4($s1)
    ctx->pc = 0x2849b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2849b4: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x2849b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x2849b8: 0x1483013f  bne         $a0, $v1, . + 4 + (0x13F << 2)
    ctx->pc = 0x2849B8u;
    {
        const bool branch_taken_0x2849b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2849b8) {
            ctx->pc = 0x284EB8u;
            goto label_284eb8;
        }
    }
    ctx->pc = 0x2849C0u;
    // 0x2849c0: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x2849c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2849c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2849c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2849c8: 0x86630022  lh          $v1, 0x22($s3)
    ctx->pc = 0x2849c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x2849cc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2849ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2849d0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2849d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2849d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2849d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2849d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2849d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2849dc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2849dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2849e0: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x2849e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2849e4: 0x86620020  lh          $v0, 0x20($s3)
    ctx->pc = 0x2849e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2849e8: 0x42302  srl         $a0, $a0, 12
    ctx->pc = 0x2849e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x2849ec: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2849ecu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2849f0: 0x0  nop
    ctx->pc = 0x2849f0u;
    // NOP
    // 0x2849f4: 0x0  nop
    ctx->pc = 0x2849f4u;
    // NOP
    // 0x2849f8: 0x1810  mfhi        $v1
    ctx->pc = 0x2849f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2849fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2849fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284a00: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x284a00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x284a04: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x284a04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x284a08: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284A08u;
    {
        const bool branch_taken_0x284a08 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x284A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A08u;
        // 0x284a0c: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a08) {
            ctx->pc = 0x284A18u;
            goto label_284a18;
        }
    }
    ctx->pc = 0x284A10u;
    // 0x284a10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x284A10u;
    {
        const bool branch_taken_0x284a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A10u;
        // 0x284a14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a10) {
            ctx->pc = 0x284A28u;
            goto label_284a28;
        }
    }
    ctx->pc = 0x284A18u;
label_284a18:
    // 0x284a18: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x284A18u;
    {
        const bool branch_taken_0x284a18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x284a18) {
            ctx->pc = 0x284A28u;
            goto label_284a28;
        }
    }
    ctx->pc = 0x284A20u;
    // 0x284a20: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x284A20u;
    {
        const bool branch_taken_0x284a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A20u;
        // 0x284a24: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a20) {
            ctx->pc = 0x284A28u;
            goto label_284a28;
        }
    }
    ctx->pc = 0x284A28u;
label_284a28:
    // 0x284a28: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x284a28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x284a2c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x284a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x284a30: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x284a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x284a34: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x284a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x284a38: 0x26670012  addiu       $a3, $s3, 0x12
    ctx->pc = 0x284a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 18));
    // 0x284a3c: 0x26680014  addiu       $t0, $s3, 0x14
    ctx->pc = 0x284a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x284a40: 0x26690018  addiu       $t1, $s3, 0x18
    ctx->pc = 0x284a40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x284a44: 0xc096da0  jal         func_25B680
    ctx->pc = 0x284A44u;
    SET_GPR_U32(ctx, 31, 0x284A4Cu);
    ctx->pc = 0x284A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284A44u;
    // 0x284a48: 0xa6200004  sh          $zero, 0x4($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x284A44u, 0x284A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284A4Cu;
label_284a4c:
    // 0x284a4c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x284a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x284a50: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x284a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x284a54: 0xa6230008  sh          $v1, 0x8($s1)
    ctx->pc = 0x284a54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x284a58: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x284a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x284a5c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x284a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284a60: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x284a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x284a64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x284a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x284a68: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x284a68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x284a6c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x284a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284a70: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x284a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x284a74: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x284a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x284a78: 0xa222000a  sb          $v0, 0xA($s1)
    ctx->pc = 0x284a78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x284a7c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x284a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284a80: 0xc6640028  lwc1        $f4, 0x28($s3)
    ctx->pc = 0x284a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x284a84: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x284a84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x284a88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x284a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x284a8c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x284a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x284a90: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x284a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284a94: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x284a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x284a98: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284A98u;
    {
        const bool branch_taken_0x284a98 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x284A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A98u;
        // 0x284a9c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a98) {
            ctx->pc = 0x284AACu;
            goto label_284aac;
        }
    }
    ctx->pc = 0x284AA0u;
    // 0x284aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284aa4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x284AA4u;
    {
        const bool branch_taken_0x284aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AA4u;
        // 0x284aa8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284aa4) {
            ctx->pc = 0x284AC4u;
            goto label_284ac4;
        }
    }
    ctx->pc = 0x284AACu;
label_284aac:
    // 0x284aac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284ab0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x284ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x284ab4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284ab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284ab8: 0x0  nop
    ctx->pc = 0x284ab8u;
    // NOP
    // 0x284abc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x284abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x284ac0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x284ac0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_284ac4:
    // 0x284ac4: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x284ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x284ac8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x284ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x284acc: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x284accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x284ad0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x284ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x284ad4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x284ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284ad8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x284ad8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x284adc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x284adcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x284ae0: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x284ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284ae4: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x284ae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x284ae8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x284ae8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x284aec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x284aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284af0: 0x0  nop
    ctx->pc = 0x284af0u;
    // NOP
    // 0x284af4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x284af4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284af8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x284AF8u;
    {
        const bool branch_taken_0x284af8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x284AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AF8u;
        // 0x284afc: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284af8) {
            ctx->pc = 0x284B08u;
            goto label_284b08;
        }
    }
    ctx->pc = 0x284B00u;
    // 0x284b00: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x284b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x284b04: 0x0  nop
    ctx->pc = 0x284b04u;
    // NOP
label_284b08:
    // 0x284b08: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x284b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284b0c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x284b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x284b10: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x284b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x284b14: 0xc6640034  lwc1        $f4, 0x34($s3)
    ctx->pc = 0x284b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x284b18: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x284b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x284b1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x284b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x284b20: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x284b20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x284b24: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x284b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284b28: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x284b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x284b2c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284B2Cu;
    {
        const bool branch_taken_0x284b2c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x284B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B2Cu;
        // 0x284b30: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b2c) {
            ctx->pc = 0x284B40u;
            goto label_284b40;
        }
    }
    ctx->pc = 0x284B34u;
    // 0x284b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284b38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x284B38u;
    {
        const bool branch_taken_0x284b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B38u;
        // 0x284b3c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b38) {
            ctx->pc = 0x284B58u;
            goto label_284b58;
        }
    }
    ctx->pc = 0x284B40u;
label_284b40:
    // 0x284b40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284b44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x284b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x284b48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284b4c: 0x0  nop
    ctx->pc = 0x284b4cu;
    // NOP
    // 0x284b50: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x284b50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x284b54: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x284b54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_284b58:
    // 0x284b58: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x284b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x284b5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x284b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x284b60: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x284b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x284b64: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x284b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x284b68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x284b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284b6c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x284b6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x284b70: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x284b70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x284b74: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x284b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284b78: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x284b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x284b7c: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x284b7cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x284b80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x284b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284b84: 0x0  nop
    ctx->pc = 0x284b84u;
    // NOP
    // 0x284b88: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x284b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x284b8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x284B8Cu;
    {
        const bool branch_taken_0x284b8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x284b8c) {
            ctx->pc = 0x284B98u;
            goto label_284b98;
        }
    }
    ctx->pc = 0x284B94u;
    // 0x284b94: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x284b94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_284b98:
    // 0x284b98: 0x9262001f  lbu         $v0, 0x1F($s3)
    ctx->pc = 0x284b98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 31)));
    // 0x284b9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284ba0: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x284BA0u;
    {
        const bool branch_taken_0x284ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BA0u;
        // 0x284ba4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ba0) {
            ctx->pc = 0x284CB8u;
            goto label_284cb8;
        }
    }
    ctx->pc = 0x284BA8u;
    // 0x284ba8: 0x12020043  beq         $s0, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x284BA8u;
    {
        const bool branch_taken_0x284ba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x284ba8) {
            ctx->pc = 0x284CB8u;
            goto label_284cb8;
        }
    }
    ctx->pc = 0x284BB0u;
    // 0x284bb0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x284bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x284bb4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x284bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x284bb8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x284bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x284bbc: 0x86670002  lh          $a3, 0x2($s3)
    ctx->pc = 0x284bbcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x284bc0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x284bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x284bc4: 0x24a56540  addiu       $a1, $a1, 0x6540
    ctx->pc = 0x284bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    // 0x284bc8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x284bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x284bcc: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x284bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x284bd0: 0xaf8680e0  sw          $a2, -0x7F20($gp)
    ctx->pc = 0x284bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 6));
    // 0x284bd4: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x284bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x284bd8: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x284bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284bdc: 0x63302  srl         $a2, $a2, 12
    ctx->pc = 0x284bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x284be0: 0xc4001b  divu        $zero, $a2, $a0
    ctx->pc = 0x284be0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x284be4: 0x0  nop
    ctx->pc = 0x284be4u;
    // NOP
    // 0x284be8: 0x0  nop
    ctx->pc = 0x284be8u;
    // NOP
    // 0x284bec: 0x2010  mfhi        $a0
    ctx->pc = 0x284becu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x284bf0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x284bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x284bf4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x284bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x284bf8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x284bf8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x284bfc: 0x24860400  addiu       $a2, $a0, 0x400
    ctx->pc = 0x284bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x284c00: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x284c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x284c04: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x284c04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x284c08: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x284c08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x284c0c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x284c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x284c10: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x284c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x284c14: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x284c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x284c18: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x284c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284c1c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x284c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x284c20: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x284c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x284c24: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x284c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284c28: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x284c28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x284c2c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x284c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x284c30: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x284c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x284c34: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x284c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284c38: 0x70621018  mult1       $v0, $v1, $v0
    ctx->pc = 0x284c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x284c3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x284c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x284c40: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x284c40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x284c44: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x284c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284c48: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x284c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x284c4c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284C4Cu;
    {
        const bool branch_taken_0x284c4c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x284C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C4Cu;
        // 0x284c50: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c4c) {
            ctx->pc = 0x284C60u;
            goto label_284c60;
        }
    }
    ctx->pc = 0x284C54u;
    // 0x284c54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284c58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x284C58u;
    {
        const bool branch_taken_0x284c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C58u;
        // 0x284c5c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c58) {
            ctx->pc = 0x284C78u;
            goto label_284c78;
        }
    }
    ctx->pc = 0x284C60u;
label_284c60:
    // 0x284c60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284c64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x284c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x284c68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284c68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284c6c: 0x0  nop
    ctx->pc = 0x284c6cu;
    // NOP
    // 0x284c70: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x284c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x284c74: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x284c74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_284c78:
    // 0x284c78: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x284c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x284c7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x284c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x284c80: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x284c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x284c84: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x284c84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284c88: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x284c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x284c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284c90: 0x0  nop
    ctx->pc = 0x284c90u;
    // NOP
    // 0x284c94: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x284c94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x284c98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x284c98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284c9c: 0x0  nop
    ctx->pc = 0x284c9cu;
    // NOP
    // 0x284ca0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x284ca0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x284ca4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x284ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x284ca8: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x284ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x284cac: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x284CACu;
    {
        const bool branch_taken_0x284cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CACu;
        // 0x284cb0: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cac) {
            ctx->pc = 0x284E10u;
            goto label_284e10;
        }
    }
    ctx->pc = 0x284CB4u;
    // 0x284cb4: 0x0  nop
    ctx->pc = 0x284cb4u;
    // NOP
label_284cb8:
    // 0x284cb8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x284cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x284cbc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x284cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x284cc0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x284cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x284cc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x284cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x284cc8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x284cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x284ccc: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x284cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284cd0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x284cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x284cd4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284CD4u;
    {
        const bool branch_taken_0x284cd4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x284CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CD4u;
        // 0x284cd8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cd4) {
            ctx->pc = 0x284CE8u;
            goto label_284ce8;
        }
    }
    ctx->pc = 0x284CDCu;
    // 0x284cdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284ce0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x284CE0u;
    {
        const bool branch_taken_0x284ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CE0u;
        // 0x284ce4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ce0) {
            ctx->pc = 0x284D00u;
            goto label_284d00;
        }
    }
    ctx->pc = 0x284CE8u;
label_284ce8:
    // 0x284ce8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284cec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x284cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x284cf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284cf4: 0x0  nop
    ctx->pc = 0x284cf4u;
    // NOP
    // 0x284cf8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x284cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x284cfc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x284cfcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_284d00:
    // 0x284d00: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x284d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x284d04: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x284d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x284d08: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x284d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x284d0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x284d0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284d10: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x284d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x284d14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x284d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284d18: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x284d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x284d1c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x284d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x284d20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x284d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x284d24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x284d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284d28: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x284d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x284d2c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x284d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284d30: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x284d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x284d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x284d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x284d38: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x284d38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x284d3c: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x284d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284d40: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x284d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x284d44: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284D44u;
    {
        const bool branch_taken_0x284d44 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x284D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D44u;
        // 0x284d48: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d44) {
            ctx->pc = 0x284D58u;
            goto label_284d58;
        }
    }
    ctx->pc = 0x284D4Cu;
    // 0x284d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284d50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x284D50u;
    {
        const bool branch_taken_0x284d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D50u;
        // 0x284d54: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d50) {
            ctx->pc = 0x284D70u;
            goto label_284d70;
        }
    }
    ctx->pc = 0x284D58u;
label_284d58:
    // 0x284d58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284d5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x284d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x284d60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284d60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284d64: 0x0  nop
    ctx->pc = 0x284d64u;
    // NOP
    // 0x284d68: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x284d68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x284d6c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x284d6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_284d70:
    // 0x284d70: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x284d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x284d74: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x284d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x284d78: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x284d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x284d7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x284d7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284d80: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x284d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x284d84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x284d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284d88: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x284d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x284d8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x284d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x284d90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x284d90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x284d94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x284d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284d98: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x284d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x284d9c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x284d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284da0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x284da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x284da4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x284da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x284da8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x284da8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x284dac: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x284dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284db0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x284db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x284db4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284DB4u;
    {
        const bool branch_taken_0x284db4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x284DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DB4u;
        // 0x284db8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284db4) {
            ctx->pc = 0x284DC8u;
            goto label_284dc8;
        }
    }
    ctx->pc = 0x284DBCu;
    // 0x284dbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284dc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x284DC0u;
    {
        const bool branch_taken_0x284dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DC0u;
        // 0x284dc4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284dc0) {
            ctx->pc = 0x284DE0u;
            goto label_284de0;
        }
    }
    ctx->pc = 0x284DC8u;
label_284dc8:
    // 0x284dc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284dcc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x284dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x284dd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284dd4: 0x0  nop
    ctx->pc = 0x284dd4u;
    // NOP
    // 0x284dd8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x284dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x284ddc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x284ddcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_284de0:
    // 0x284de0: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x284de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x284de4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x284de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x284de8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x284de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x284dec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284df0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x284df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284df4: 0x0  nop
    ctx->pc = 0x284df4u;
    // NOP
    // 0x284df8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x284df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x284dfc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x284dfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x284e00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x284e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x284e04: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x284e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x284e08: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x284e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x284e0c: 0x0  nop
    ctx->pc = 0x284e0cu;
    // NOP
label_284e10:
    // 0x284e10: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x284e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x284e14: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x284E14u;
    SET_GPR_U32(ctx, 31, 0x284E1Cu);
    ctx->pc = 0x284E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E14u;
    // 0x284e18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x284E14u, 0x284E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E1Cu;
label_284e1c:
    // 0x284e1c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x284e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284e20: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x284e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x284e24: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x284e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x284e28: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x284e28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x284e2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x284e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x284e30: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x284e30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x284e34: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x284e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x284e38: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x284e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x284e3c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284E3Cu;
    {
        const bool branch_taken_0x284e3c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x284E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E3Cu;
        // 0x284e40: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284e3c) {
            ctx->pc = 0x284E50u;
            goto label_284e50;
        }
    }
    ctx->pc = 0x284E44u;
    // 0x284e44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x284E48u;
    {
        const bool branch_taken_0x284e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E48u;
        // 0x284e4c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x284e48) {
            ctx->pc = 0x284E68u;
            goto label_284e68;
        }
    }
    ctx->pc = 0x284E50u;
label_284e50:
    // 0x284e50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x284e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x284e54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x284e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x284e58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x284e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284e5c: 0x0  nop
    ctx->pc = 0x284e5cu;
    // NOP
    // 0x284e60: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x284e60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x284e64: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x284e64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_284e68:
    // 0x284e68: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x284e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x284e6c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x284e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x284e70: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x284e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x284e74: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x284e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x284e78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x284e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284e7c: 0xc660003c  lwc1        $f0, 0x3C($s3)
    ctx->pc = 0x284e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284e80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x284e80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x284e84: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x284E84u;
    SET_GPR_U32(ctx, 31, 0x284E8Cu);
    ctx->pc = 0x284E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E84u;
    // 0x284e88: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x284E84u, 0x284E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E8Cu;
label_284e8c:
    // 0x284e8c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x284e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x284e90: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x284e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284e94: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x284E94u;
    SET_GPR_U32(ctx, 31, 0x284E9Cu);
    ctx->pc = 0x284E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284E94u;
    // 0x284e98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x284E94u, 0x284E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E9Cu;
label_284e9c:
    // 0x284e9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x284e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x284ea0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x284ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x284ea4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x284ea4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x284ea8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x284ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x284eac: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x284EACu;
    SET_GPR_U32(ctx, 31, 0x284EB4u);
    ctx->pc = 0x284EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284EACu;
    // 0x284eb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x284EACu, 0x284EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284EB4u;
label_284eb4:
    // 0x284eb4: 0x0  nop
    ctx->pc = 0x284eb4u;
    // NOP
label_284eb8:
    // 0x284eb8: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x284eb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x284ebc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x284ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x284ec0: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x284ec0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x284ec4: 0x1460feba  bnez        $v1, . + 4 + (-0x146 << 2)
    ctx->pc = 0x284EC4u;
    {
        const bool branch_taken_0x284ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284EC4u;
        // 0x284ec8: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284ec4) {
            ctx->pc = 0x2849B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2849b0;
        }
    }
    ctx->pc = 0x284ECCu;
    // 0x284ecc: 0x0  nop
    ctx->pc = 0x284eccu;
    // NOP
label_284ed0:
    // 0x284ed0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x284ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x284ed4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x284ed4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x284ed8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x284ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x284edc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x284edcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284ee0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x284ee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284ee4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x284ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284ee8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x284ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284eec: 0x3e00008  jr          $ra
    ctx->pc = 0x284EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284EECu;
        // 0x284ef0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284EF4u;
}
