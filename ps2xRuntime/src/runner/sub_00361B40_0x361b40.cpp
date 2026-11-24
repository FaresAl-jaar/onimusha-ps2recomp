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

// Function: sub_00361B40
// Address: 0x361b40 - 0x362070
void sub_00361B40_0x361b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361B40_0x361b40");
#endif

    switch (ctx->pc) {
        case 0x361ba0u: goto label_361ba0;
        case 0x361c58u: goto label_361c58;
        case 0x361c8cu: goto label_361c8c;
        case 0x361cc0u: goto label_361cc0;
        case 0x361ce0u: goto label_361ce0;
        case 0x361cf8u: goto label_361cf8;
        case 0x361d10u: goto label_361d10;
        case 0x361d20u: goto label_361d20;
        case 0x361d3cu: goto label_361d3c;
        case 0x361d50u: goto label_361d50;
        case 0x361d98u: goto label_361d98;
        case 0x361e70u: goto label_361e70;
        case 0x361e80u: goto label_361e80;
        case 0x361ec8u: goto label_361ec8;
        case 0x361f70u: goto label_361f70;
        case 0x361fd0u: goto label_361fd0;
        case 0x362048u: goto label_362048;
        default: break;
    }

    ctx->pc = 0x361b40u;

    // 0x361b40: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x361b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x361b44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x361b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361b48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x361b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x361b4c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x361b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x361b50: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x361b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x361b54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x361b54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361b58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x361b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x361b5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x361b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x361b60: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x361b60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x361b64: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x361b64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x361b68: 0x1083011b  beq         $a0, $v1, . + 4 + (0x11B << 2)
    ctx->pc = 0x361B68u;
    {
        const bool branch_taken_0x361b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x361b68) {
            ctx->pc = 0x361FD8u;
            goto label_361fd8;
        }
    }
    ctx->pc = 0x361B70u;
    // 0x361b70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x361b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361b74: 0x108300b6  beq         $a0, $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x361B74u;
    {
        const bool branch_taken_0x361b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x361b74) {
            ctx->pc = 0x361E50u;
            goto label_361e50;
        }
    }
    ctx->pc = 0x361B7Cu;
    // 0x361b7c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x361B7Cu;
    {
        const bool branch_taken_0x361b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x361b7c) {
            ctx->pc = 0x361B90u;
            goto label_361b90;
        }
    }
    ctx->pc = 0x361B84u;
    // 0x361b84: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x361B84u;
    {
        const bool branch_taken_0x361b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361b84) {
            ctx->pc = 0x362050u;
            goto label_362050;
        }
    }
    ctx->pc = 0x361B8Cu;
    // 0x361b8c: 0x0  nop
    ctx->pc = 0x361b8cu;
    // NOP
label_361b90:
    // 0x361b90: 0x8e6507c0  lw          $a1, 0x7C0($s3)
    ctx->pc = 0x361b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1984)));
    // 0x361b94: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x361b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x361b98: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x361B98u;
    SET_GPR_U32(ctx, 31, 0x361BA0u);
    ctx->pc = 0x361B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361B98u;
    // 0x361b9c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x361B98u, 0x361BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361BA0u;
label_361ba0:
    // 0x361ba0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x361ba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361ba4: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x361BA4u;
    {
        const bool branch_taken_0x361ba4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x361ba4) {
            ctx->pc = 0x361BF0u;
            goto label_361bf0;
        }
    }
    ctx->pc = 0x361BACu;
    // 0x361bac: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x361bacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x361bb0: 0x38830002  xori        $v1, $a0, 0x2
    ctx->pc = 0x361bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x361bb4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x361bb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x361bb8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x361BB8u;
    {
        const bool branch_taken_0x361bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x361BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361BB8u;
        // 0x361bbc: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361bb8) {
            ctx->pc = 0x361BD8u;
            goto label_361bd8;
        }
    }
    ctx->pc = 0x361BC0u;
    // 0x361bc0: 0x38830003  xori        $v1, $a0, 0x3
    ctx->pc = 0x361bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
    // 0x361bc4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x361bc4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x361bc8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x361BC8u;
    {
        const bool branch_taken_0x361bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x361bc8) {
            ctx->pc = 0x361BD8u;
            goto label_361bd8;
        }
    }
    ctx->pc = 0x361BD0u;
    // 0x361bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x361bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361bd4: 0x0  nop
    ctx->pc = 0x361bd4u;
    // NOP
label_361bd8:
    // 0x361bd8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x361BD8u;
    {
        const bool branch_taken_0x361bd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x361bd8) {
            ctx->pc = 0x361BF0u;
            goto label_361bf0;
        }
    }
    ctx->pc = 0x361BE0u;
    // 0x361be0: 0x8e4306ac  lw          $v1, 0x6AC($s2)
    ctx->pc = 0x361be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
    // 0x361be4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x361be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x361be8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x361BE8u;
    {
        const bool branch_taken_0x361be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x361be8) {
            ctx->pc = 0x361C00u;
            goto label_361c00;
        }
    }
    ctx->pc = 0x361BF0u;
label_361bf0:
    // 0x361bf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x361bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361bf4: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x361BF4u;
    {
        const bool branch_taken_0x361bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361BF4u;
        // 0x361bf8: 0xa2630821  sb          $v1, 0x821($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361bf4) {
            ctx->pc = 0x362050u;
            goto label_362050;
        }
    }
    ctx->pc = 0x361BFCu;
    // 0x361bfc: 0x0  nop
    ctx->pc = 0x361bfcu;
    // NOP
label_361c00:
    // 0x361c00: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x361c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x361c04: 0x2463a3b0  addiu       $v1, $v1, -0x5C50
    ctx->pc = 0x361c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943664));
    // 0x361c08: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x361c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x361c0c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x361c0cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x65A3B0u));
    // 0x361c10: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x361c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x361c14: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x361c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x361c18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x361c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361c1c: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x361c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x361c20: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x361c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x361c24: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x361c24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x361c28: 0x2463f388  addiu       $v1, $v1, -0xC78
    ctx->pc = 0x361c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964104));
    // 0x361c2c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x361c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x361c30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x361c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x361c34: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x361c34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x361c38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x361c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x361c3c: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x361c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x361c40: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x361c40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x361c44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x361c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x361c48: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x361c48u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x361c4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x361c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x361c50: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x361C50u;
    {
        const bool branch_taken_0x361c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361C50u;
        // 0x361c54: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x361c50) {
            ctx->pc = 0x361D68u;
            goto label_361d68;
        }
    }
    ctx->pc = 0x361C58u;
label_361c58:
    // 0x361c58: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x361c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x361c5c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x361c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x361c60: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x361c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x361c64: 0x2442a3a0  addiu       $v0, $v0, -0x5C60
    ctx->pc = 0x361c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943648));
    // 0x361c68: 0x864500c2  lh          $a1, 0xC2($s2)
    ctx->pc = 0x361c68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x361c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x361c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x361c70: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x361c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x361c74: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x361c74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361c78: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x361c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x361c7c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x361c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x361c80: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x361c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x361c84: 0xc04d594  jal         func_135650
    ctx->pc = 0x361C84u;
    SET_GPR_U32(ctx, 31, 0x361C8Cu);
    ctx->pc = 0x361C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361C84u;
    // 0x361c88: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x361C84u, 0x361C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361C8Cu;
label_361c8c:
    // 0x361c8c: 0xc6410020  lwc1        $f1, 0x20($s2)
    ctx->pc = 0x361c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361c90: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x361c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x361c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x361c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x361c98: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x361c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x361c9c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x361c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x361ca0: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x361ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x361ca4: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x361ca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x361ca8: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x361ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361cac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x361cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x361cb0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x361cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x361cb4: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x361cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361cb8: 0xc041442  jal         func_105108
    ctx->pc = 0x361CB8u;
    SET_GPR_U32(ctx, 31, 0x361CC0u);
    ctx->pc = 0x361CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361CB8u;
    // 0x361cbc: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x361CB8u, 0x361CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361CC0u;
label_361cc0:
    // 0x361cc0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x361cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x361cc4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x361cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x361cc8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x361cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x361ccc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x361cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x361cd0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x361cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x361cd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x361cd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x361cd8: 0xc0b82c4  jal         func_2E0B10
    ctx->pc = 0x361CD8u;
    SET_GPR_U32(ctx, 31, 0x361CE0u);
    ctx->pc = 0x361CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361CD8u;
    // 0x361cdc: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0B10u, 0x361CD8u, 0x361CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361CE0u;
label_361ce0:
    // 0x361ce0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x361ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x361ce4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x361ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x361ce8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x361ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x361cec: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x361cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x361cf0: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x361CF0u;
    SET_GPR_U32(ctx, 31, 0x361CF8u);
    ctx->pc = 0x361CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361CF0u;
    // 0x361cf4: 0x244400d0  addiu       $a0, $v0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x361CF0u, 0x361CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361CF8u;
label_361cf8:
    // 0x361cf8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x361cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x361cfc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x361cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x361d00: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x361d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x361d04: 0xe44000dc  swc1        $f0, 0xDC($v0)
    ctx->pc = 0x361d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
    // 0x361d08: 0xc04b946  jal         func_12E518
    ctx->pc = 0x361D08u;
    SET_GPR_U32(ctx, 31, 0x361D10u);
    ctx->pc = 0x361D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D08u;
    // 0x361d0c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x361D08u, 0x361D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D10u;
label_361d10:
    // 0x361d10: 0x3c034079  lui         $v1, 0x4079
    ctx->pc = 0x361d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16505 << 16));
    // 0x361d14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x361d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d18: 0xc0400c0  jal         func_100300
    ctx->pc = 0x361D18u;
    SET_GPR_U32(ctx, 31, 0x361D20u);
    ctx->pc = 0x361D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D18u;
    // 0x361d1c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100300u, 0x361D18u, 0x361D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D20u;
label_361d20:
    // 0x361d20: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x361D20u;
    {
        const bool branch_taken_0x361d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361d20) {
            ctx->pc = 0x361D60u;
            goto label_361d60;
        }
    }
    ctx->pc = 0x361D28u;
    // 0x361d28: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x361d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x361d2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x361d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x361d30: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x361d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x361d34: 0xc04b946  jal         func_12E518
    ctx->pc = 0x361D34u;
    SET_GPR_U32(ctx, 31, 0x361D3Cu);
    ctx->pc = 0x361D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D34u;
    // 0x361d38: 0xc44c00dc  lwc1        $f12, 0xDC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x361D34u, 0x361D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D3Cu;
label_361d3c:
    // 0x361d3c: 0x3c034082  lui         $v1, 0x4082
    ctx->pc = 0x361d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16514 << 16));
    // 0x361d40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x361d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d44: 0x3462c000  ori         $v0, $v1, 0xC000
    ctx->pc = 0x361d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x361d48: 0xc0400c0  jal         func_100300
    ctx->pc = 0x361D48u;
    SET_GPR_U32(ctx, 31, 0x361D50u);
    ctx->pc = 0x361D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361D48u;
    // 0x361d4c: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100300u, 0x361D48u, 0x361D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361D50u;
label_361d50:
    // 0x361d50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x361D50u;
    {
        const bool branch_taken_0x361d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x361d50) {
            ctx->pc = 0x361D60u;
            goto label_361d60;
        }
    }
    ctx->pc = 0x361D58u;
    // 0x361d58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x361D58u;
    {
        const bool branch_taken_0x361d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361D58u;
        // 0x361d5c: 0x323000ff  andi        $s0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361d58) {
            ctx->pc = 0x361D78u;
            goto label_361d78;
        }
    }
    ctx->pc = 0x361D60u;
label_361d60:
    // 0x361d60: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x361d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x361d64: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x361d64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_361d68:
    // 0x361d68: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x361d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x361d6c: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x361d6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x361d70: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x361D70u;
    {
        const bool branch_taken_0x361d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x361d70) {
            ctx->pc = 0x361C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361c58;
        }
    }
    ctx->pc = 0x361D78u;
label_361d78:
    // 0x361d78: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x361d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x361d7c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x361d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x361d80: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x361D80u;
    {
        const bool branch_taken_0x361d80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x361d80) {
            ctx->pc = 0x361DE0u;
            goto label_361de0;
        }
    }
    ctx->pc = 0x361D88u;
    // 0x361d88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x361d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361d8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x361D8Cu;
    {
        const bool branch_taken_0x361d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361D8Cu;
        // 0x361d90: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x361d8c) {
            ctx->pc = 0x361DD0u;
            goto label_361dd0;
        }
    }
    ctx->pc = 0x361D94u;
    // 0x361d94: 0x0  nop
    ctx->pc = 0x361d94u;
    // NOP
label_361d98:
    // 0x361d98: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x361d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x361d9c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x361d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x361da0: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x361da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x361da4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x361da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x361da8: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x361da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x361dac: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x361dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x361db0: 0xc48100dc  lwc1        $f1, 0xDC($a0)
    ctx->pc = 0x361db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361db4: 0xc46000dc  lwc1        $f0, 0xDC($v1)
    ctx->pc = 0x361db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361db8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x361db8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x361dbc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x361DBCu;
    {
        const bool branch_taken_0x361dbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x361dbc) {
            ctx->pc = 0x361DC8u;
            goto label_361dc8;
        }
    }
    ctx->pc = 0x361DC4u;
    // 0x361dc4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x361dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_361dc8:
    // 0x361dc8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x361dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x361dcc: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x361dccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_361dd0:
    // 0x361dd0: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x361dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x361dd4: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x361dd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x361dd8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x361DD8u;
    {
        const bool branch_taken_0x361dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x361dd8) {
            ctx->pc = 0x361D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361d98;
        }
    }
    ctx->pc = 0x361DE0u;
label_361de0:
    // 0x361de0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x361de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x361de4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x361de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x361de8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x361de8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361dec: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x361decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x361df0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x361df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x361df4: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x361df4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x361df8: 0x26662b20  addiu       $a2, $s3, 0x2B20
    ctx->pc = 0x361df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 11040));
    // 0x361dfc: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x361dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x361e00: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x361e00u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361e04: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x361e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x361e08: 0x2484a3a0  addiu       $a0, $a0, -0x5C60
    ctx->pc = 0x361e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943648));
    // 0x361e0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x361e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x361e10: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x361e10u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x361e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x361e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361e18: 0x864500c2  lh          $a1, 0xC2($s2)
    ctx->pc = 0x361e18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x361e1c: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x361e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x361e20: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x361e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x361e24: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x361e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x361e28: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x361e28u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x361e2c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x361e2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x361e30: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x361e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x361e34: 0x24840800  addiu       $a0, $a0, 0x800
    ctx->pc = 0x361e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x361e38: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x361e38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x361e3c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x361e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x361e40: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x361e40u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x361e44: 0xa6642b30  sh          $a0, 0x2B30($s3)
    ctx->pc = 0x361e44u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 11056), (uint16_t)GPR_U32(ctx, 4));
    // 0x361e48: 0xa660082e  sh          $zero, 0x82E($s3)
    ctx->pc = 0x361e48u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2094), (uint16_t)GPR_U32(ctx, 0));
    // 0x361e4c: 0xa2630821  sb          $v1, 0x821($s3)
    ctx->pc = 0x361e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2081), (uint8_t)GPR_U32(ctx, 3));
label_361e50:
    // 0x361e50: 0x9663082e  lhu         $v1, 0x82E($s3)
    ctx->pc = 0x361e50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2094)));
    // 0x361e54: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x361E54u;
    {
        const bool branch_taken_0x361e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x361e54) {
            ctx->pc = 0x361EC8u;
            goto label_361ec8;
        }
    }
    ctx->pc = 0x361E5Cu;
    // 0x361e5c: 0x92622b34  lbu         $v0, 0x2B34($s3)
    ctx->pc = 0x361e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11060)));
    // 0x361e60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x361e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e64: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x361e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x361e68: 0xc0d881c  jal         func_362070
    ctx->pc = 0x361E68u;
    SET_GPR_U32(ctx, 31, 0x361E70u);
    ctx->pc = 0x361E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361E68u;
    // 0x361e6c: 0xa2622b34  sb          $v0, 0x2B34($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 11060), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362070u, 0x361E68u, 0x361E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361E70u;
label_361e70:
    // 0x361e70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x361e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361e74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x361e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361e78: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x361E78u;
    SET_GPR_U32(ctx, 31, 0x361E80u);
    ctx->pc = 0x361E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361E78u;
    // 0x361e7c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x361E78u, 0x361E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361E80u;
label_361e80:
    // 0x361e80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x361E80u;
    {
        const bool branch_taken_0x361e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361e80) {
            ctx->pc = 0x361E90u;
            goto label_361e90;
        }
    }
    ctx->pc = 0x361E88u;
    // 0x361e88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x361E88u;
    {
        const bool branch_taken_0x361e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361E88u;
        // 0x361e8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361e88) {
            ctx->pc = 0x361E98u;
            goto label_361e98;
        }
    }
    ctx->pc = 0x361E90u;
label_361e90:
    // 0x361e90: 0x26670020  addiu       $a3, $s3, 0x20
    ctx->pc = 0x361e90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x361e94: 0x0  nop
    ctx->pc = 0x361e94u;
    // NOP
label_361e98:
    // 0x361e98: 0x926308e8  lbu         $v1, 0x8E8($s3)
    ctx->pc = 0x361e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x361e9c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x361e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x361ea0: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x361ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
    // 0x361ea4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x361ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x361ea8: 0x34456a02  ori         $a1, $v0, 0x6A02
    ctx->pc = 0x361ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27138);
    // 0x361eac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x361eacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361eb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x361eb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361eb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x361eb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361eb8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x361eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x361ebc: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x361ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x361ec0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x361EC0u;
    SET_GPR_U32(ctx, 31, 0x361EC8u);
    ctx->pc = 0x361EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361EC0u;
    // 0x361ec4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x361EC0u, 0x361EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361EC8u;
label_361ec8:
    // 0x361ec8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x361ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x361ecc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x361eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361ed0: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x361ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x361ed4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x361ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x361ed8: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x361ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x361edc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x361edcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x361ee0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x361ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x361ee4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x361ee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x361ee8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x361ee8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x361eec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x361eecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x361ef0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x361ef0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x361ef4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x361EF4u;
    {
        const bool branch_taken_0x361ef4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x361ef4) {
            ctx->pc = 0x361F0Cu;
            goto label_361f0c;
        }
    }
    ctx->pc = 0x361EFCu;
    // 0x361efc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x361efcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x361f00: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x361f00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x361f04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x361F04u;
    {
        const bool branch_taken_0x361f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361F04u;
        // 0x361f08: 0x9663082e  lhu         $v1, 0x82E($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2094)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361f04) {
            ctx->pc = 0x361F28u;
            goto label_361f28;
        }
    }
    ctx->pc = 0x361F0Cu;
label_361f0c:
    // 0x361f0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x361f0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x361f10: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x361f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x361f14: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x361f14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x361f18: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x361f18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x361f1c: 0x0  nop
    ctx->pc = 0x361f1cu;
    // NOP
    // 0x361f20: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x361f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x361f24: 0x9663082e  lhu         $v1, 0x82E($s3)
    ctx->pc = 0x361f24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2094)));
label_361f28:
    // 0x361f28: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361f28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361f2c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x361F2Cu;
    {
        const bool branch_taken_0x361f2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361f2c) {
            ctx->pc = 0x361F40u;
            goto label_361f40;
        }
    }
    ctx->pc = 0x361F34u;
    // 0x361f34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x361f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x361f38: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x361F38u;
    {
        const bool branch_taken_0x361f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361F38u;
        // 0x361f3c: 0xa663082e  sh          $v1, 0x82E($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2094), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361f38) {
            ctx->pc = 0x362050u;
            goto label_362050;
        }
    }
    ctx->pc = 0x361F40u;
label_361f40:
    // 0x361f40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x361f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f44: 0xc6602b20  lwc1        $f0, 0x2B20($s3)
    ctx->pc = 0x361f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x361f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361f4c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x361f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x361f50: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x361f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x361f54: 0xc6602b24  lwc1        $f0, 0x2B24($s3)
    ctx->pc = 0x361f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361f58: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x361f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x361f5c: 0xc6602b28  lwc1        $f0, 0x2B28($s3)
    ctx->pc = 0x361f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 11048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361f60: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x361f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x361f64: 0x86622b30  lh          $v0, 0x2B30($s3)
    ctx->pc = 0x361f64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 11056)));
    // 0x361f68: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x361F68u;
    SET_GPR_U32(ctx, 31, 0x361F70u);
    ctx->pc = 0x361F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361F68u;
    // 0x361f6c: 0xa66200c2  sh          $v0, 0xC2($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 194), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x361F68u, 0x361F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361F70u;
label_361f70:
    // 0x361f70: 0xa660082e  sh          $zero, 0x82E($s3)
    ctx->pc = 0x361f70u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2094), (uint16_t)GPR_U32(ctx, 0));
    // 0x361f74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x361f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361f78: 0x92632b34  lbu         $v1, 0x2B34($s3)
    ctx->pc = 0x361f78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11060)));
    // 0x361f7c: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x361f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x361f80: 0xa2632b34  sb          $v1, 0x2B34($s3)
    ctx->pc = 0x361f80u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 11060), (uint8_t)GPR_U32(ctx, 3));
    // 0x361f84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x361F84u;
    {
        const bool branch_taken_0x361f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361F84u;
        // 0x361f88: 0xa2620821  sb          $v0, 0x821($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361f84) {
            ctx->pc = 0x361F98u;
            goto label_361f98;
        }
    }
    ctx->pc = 0x361F8Cu;
    // 0x361f8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x361F8Cu;
    {
        const bool branch_taken_0x361f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361F8Cu;
        // 0x361f90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361f8c) {
            ctx->pc = 0x361FA0u;
            goto label_361fa0;
        }
    }
    ctx->pc = 0x361F94u;
    // 0x361f94: 0x0  nop
    ctx->pc = 0x361f94u;
    // NOP
label_361f98:
    // 0x361f98: 0x26670020  addiu       $a3, $s3, 0x20
    ctx->pc = 0x361f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x361f9c: 0x0  nop
    ctx->pc = 0x361f9cu;
    // NOP
label_361fa0:
    // 0x361fa0: 0x926308e8  lbu         $v1, 0x8E8($s3)
    ctx->pc = 0x361fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2280)));
    // 0x361fa4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x361fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x361fa8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x361fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x361fac: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x361facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x361fb0: 0x34456a02  ori         $a1, $v0, 0x6A02
    ctx->pc = 0x361fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27138);
    // 0x361fb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x361fb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361fb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x361fb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361fbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x361fbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361fc0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x361fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x361fc4: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x361fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x361fc8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x361FC8u;
    SET_GPR_U32(ctx, 31, 0x361FD0u);
    ctx->pc = 0x361FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361FC8u;
    // 0x361fcc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x361FC8u, 0x361FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361FD0u;
label_361fd0:
    // 0x361fd0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x361FD0u;
    {
        const bool branch_taken_0x361fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361fd0) {
            ctx->pc = 0x362050u;
            goto label_362050;
        }
    }
    ctx->pc = 0x361FD8u;
label_361fd8:
    // 0x361fd8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x361fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x361fdc: 0xa2620821  sb          $v0, 0x821($s3)
    ctx->pc = 0x361fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x361fe0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x361fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x361fe4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x361fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361fe8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x361fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x361fec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x361fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x361ff0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x361ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x361ff4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x361ff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x361ff8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x361ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x361ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x361ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x362000: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x362000u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x362004: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x362004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x362008: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x362008u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36200c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x36200Cu;
    {
        const bool branch_taken_0x36200c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36200c) {
            ctx->pc = 0x362024u;
            goto label_362024;
        }
    }
    ctx->pc = 0x362014u;
    // 0x362014: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x362014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x362018: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x362018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x36201c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36201Cu;
    {
        const bool branch_taken_0x36201c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36201Cu;
        // 0x362020: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36201c) {
            ctx->pc = 0x362040u;
            goto label_362040;
        }
    }
    ctx->pc = 0x362024u;
label_362024:
    // 0x362024: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x362024u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x362028: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x36202c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36202cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x362030: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x362030u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x362034: 0x0  nop
    ctx->pc = 0x362034u;
    // NOP
    // 0x362038: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x362038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36203c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x36203cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_362040:
    // 0x362040: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x362040u;
    SET_GPR_U32(ctx, 31, 0x362048u);
    ctx->pc = 0x362044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362040u;
    // 0x362044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x362040u, 0x362048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362048u;
label_362048:
    // 0x362048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36204c: 0xa2630780  sb          $v1, 0x780($s3)
    ctx->pc = 0x36204cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1920), (uint8_t)GPR_U32(ctx, 3));
label_362050:
    // 0x362050: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x362050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x362054: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x362054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362058: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x362058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36205c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x36205cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x362060: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x362060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x362064: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x362064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362068: 0x3e00008  jr          $ra
    ctx->pc = 0x362068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362068u;
        // 0x36206c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362070u;
}
