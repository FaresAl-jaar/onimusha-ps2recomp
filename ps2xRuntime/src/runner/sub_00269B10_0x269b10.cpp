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

// Function: sub_00269B10
// Address: 0x269b10 - 0x26a3b4
void sub_00269B10_0x269b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269B10_0x269b10");
#endif

    switch (ctx->pc) {
        case 0x269b64u: goto label_269b64;
        case 0x269c50u: goto label_269c50;
        case 0x269ca8u: goto label_269ca8;
        case 0x269d00u: goto label_269d00;
        case 0x269dc0u: goto label_269dc0;
        case 0x269dd0u: goto label_269dd0;
        case 0x269de0u: goto label_269de0;
        case 0x269e2cu: goto label_269e2c;
        case 0x269eacu: goto label_269eac;
        case 0x269f1cu: goto label_269f1c;
        case 0x269f8cu: goto label_269f8c;
        case 0x269ffcu: goto label_269ffc;
        case 0x26a04cu: goto label_26a04c;
        case 0x26a0b4u: goto label_26a0b4;
        case 0x26a134u: goto label_26a134;
        case 0x26a1a4u: goto label_26a1a4;
        case 0x26a214u: goto label_26a214;
        case 0x26a284u: goto label_26a284;
        case 0x26a2d4u: goto label_26a2d4;
        case 0x26a318u: goto label_26a318;
        case 0x26a384u: goto label_26a384;
        default: break;
    }

    ctx->pc = 0x269b10u;

    // 0x269b10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x269b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x269b14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x269b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x269b18: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x269b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x269b1c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x269b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x269b20: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x269b20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b24: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x269b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x269b28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x269b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x269b2c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x269b2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x269b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x269b34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x269b34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x269b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x269b3c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x269b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269b40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x269b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x269b44: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x269b44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x269b48: 0x8f838ab4  lw          $v1, -0x754C($gp)
    ctx->pc = 0x269b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937268)));
    // 0x269b4c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x269B4Cu;
    {
        const bool branch_taken_0x269b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B4Cu;
        // 0x269b50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b4c) {
            ctx->pc = 0x269B68u;
            goto label_269b68;
        }
    }
    ctx->pc = 0x269B54u;
    // 0x269b54: 0x8c65003c  lw          $a1, 0x3C($v1)
    ctx->pc = 0x269b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x269b58: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x269b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x269b5c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x269B5Cu;
    SET_GPR_U32(ctx, 31, 0x269B64u);
    ctx->pc = 0x269B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269B5Cu;
    // 0x269b60: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x269B5Cu, 0x269B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269B64u;
label_269b64:
    // 0x269b64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x269b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269b68:
    // 0x269b68: 0x9283000a  lbu         $v1, 0xA($s4)
    ctx->pc = 0x269b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x269b6c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x269b6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x269b70: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x269B70u;
    {
        const bool branch_taken_0x269b70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B70u;
        // 0x269b74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b70) {
            ctx->pc = 0x269BF0u;
            goto label_269bf0;
        }
    }
    ctx->pc = 0x269B78u;
    // 0x269b78: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x269b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x269b7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x269b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x269b80: 0x24845890  addiu       $a0, $a0, 0x5890
    ctx->pc = 0x269b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22672));
    // 0x269b84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x269b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x269b88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x269b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269b8c: 0x600008  jr          $v1
    ctx->pc = 0x269B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269B98u: goto label_269b98;
            case 0x269BB8u: goto label_269bb8;
            case 0x269BD8u: goto label_269bd8;
            case 0x269BE0u: goto label_269be0;
            case 0x269BE8u: goto label_269be8;
            case 0x269BF0u: goto label_269bf0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269B8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x269B94u;
    // 0x269b94: 0x0  nop
    ctx->pc = 0x269b94u;
    // NOP
label_269b98:
    // 0x269b98: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x269b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x269b9c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x269b9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x269ba0: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x269ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x269ba4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x269ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x269ba8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x269ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x269bac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x269BACu;
    {
        const bool branch_taken_0x269bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BACu;
        // 0x269bb0: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bac) {
            ctx->pc = 0x269BF0u;
            goto label_269bf0;
        }
    }
    ctx->pc = 0x269BB4u;
    // 0x269bb4: 0x0  nop
    ctx->pc = 0x269bb4u;
    // NOP
label_269bb8:
    // 0x269bb8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x269bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x269bbc: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x269bbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x269bc0: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x269bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x269bc4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x269bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x269bc8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x269bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x269bcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x269bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x269bd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x269BD0u;
    {
        const bool branch_taken_0x269bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BD0u;
        // 0x269bd4: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bd0) {
            ctx->pc = 0x269BF0u;
            goto label_269bf0;
        }
    }
    ctx->pc = 0x269BD8u;
label_269bd8:
    // 0x269bd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x269BD8u;
    {
        const bool branch_taken_0x269bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BD8u;
        // 0x269bdc: 0x8f908060  lw          $s0, -0x7FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bd8) {
            ctx->pc = 0x269BF0u;
            goto label_269bf0;
        }
    }
    ctx->pc = 0x269BE0u;
label_269be0:
    // 0x269be0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x269BE0u;
    {
        const bool branch_taken_0x269be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BE0u;
        // 0x269be4: 0x8f908064  lw          $s0, -0x7F9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269be0) {
            ctx->pc = 0x269BF0u;
            goto label_269bf0;
        }
    }
    ctx->pc = 0x269BE8u;
label_269be8:
    // 0x269be8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x269be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269bec: 0x0  nop
    ctx->pc = 0x269becu;
    // NOP
label_269bf0:
    // 0x269bf0: 0x120001e5  beqz        $s0, . + 4 + (0x1E5 << 2)
    ctx->pc = 0x269BF0u;
    {
        const bool branch_taken_0x269bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x269BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269BF0u;
        // 0x269bf4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269bf0) {
            ctx->pc = 0x26A388u;
            goto label_26a388;
        }
    }
    ctx->pc = 0x269BF8u;
    // 0x269bf8: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x269bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x269bfc: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x269bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x269c00: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x269c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x269c04: 0x86850014  lh          $a1, 0x14($s4)
    ctx->pc = 0x269c04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x269c08: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x269c08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x269c0c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x269c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x269c10: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x269c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x269c14: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x269c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x269c18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x269c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x269c1c: 0x51843  sra         $v1, $a1, 1
    ctx->pc = 0x269c1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 1));
    // 0x269c20: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x269c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x269c24: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x269c24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x269c28: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x269c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x269c2c: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x269c2cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x269c30: 0x86820012  lh          $v0, 0x12($s4)
    ctx->pc = 0x269c30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x269c34: 0x0  nop
    ctx->pc = 0x269c34u;
    // NOP
    // 0x269c38: 0x2010  mfhi        $a0
    ctx->pc = 0x269c38u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x269c3c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x269c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x269c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269c44: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x269c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x269c48: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x269C48u;
    SET_GPR_U32(ctx, 31, 0x269C50u);
    ctx->pc = 0x269C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269C48u;
    // 0x269c4c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x269C48u, 0x269C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269C50u;
label_269c50:
    // 0x269c50: 0x9284000b  lbu         $a0, 0xB($s4)
    ctx->pc = 0x269c50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11)));
    // 0x269c54: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x269c54u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x269c58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x269c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269c5c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x269C5Cu;
    {
        const bool branch_taken_0x269c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x269C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C5Cu;
        // 0x269c60: 0x15ac3f  dsra32      $s5, $s5, 16 (Delay Slot)
        SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c5c) {
            ctx->pc = 0x269C98u;
            goto label_269c98;
        }
    }
    ctx->pc = 0x269C64u;
    // 0x269c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269c68: 0x10820023  beq         $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x269C68u;
    {
        const bool branch_taken_0x269c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x269c68) {
            ctx->pc = 0x269CF8u;
            goto label_269cf8;
        }
    }
    ctx->pc = 0x269C70u;
    // 0x269c70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269C70u;
    {
        const bool branch_taken_0x269c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c70) {
            ctx->pc = 0x269C80u;
            goto label_269c80;
        }
    }
    ctx->pc = 0x269C78u;
    // 0x269c78: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x269C78u;
    {
        const bool branch_taken_0x269c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269c78) {
            ctx->pc = 0x269CF8u;
            goto label_269cf8;
        }
    }
    ctx->pc = 0x269C80u;
label_269c80:
    // 0x269c80: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x269c80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x269c84: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x269c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x269c88: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x269c88u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x269c8c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x269C8Cu;
    {
        const bool branch_taken_0x269c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C8Cu;
        // 0x269c90: 0x15ac3f  dsra32      $s5, $s5, 16 (Delay Slot)
        SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c8c) {
            ctx->pc = 0x269CF8u;
            goto label_269cf8;
        }
    }
    ctx->pc = 0x269C94u;
    // 0x269c94: 0x0  nop
    ctx->pc = 0x269c94u;
    // NOP
label_269c98:
    // 0x269c98: 0x122001bb  beqz        $s1, . + 4 + (0x1BB << 2)
    ctx->pc = 0x269C98u;
    {
        const bool branch_taken_0x269c98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x269C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269C98u;
        // 0x269c9c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269c98) {
            ctx->pc = 0x26A388u;
            goto label_26a388;
        }
    }
    ctx->pc = 0x269CA0u;
    // 0x269ca0: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x269CA0u;
    SET_GPR_U32(ctx, 31, 0x269CA8u);
    ctx->pc = 0x269CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269CA0u;
    // 0x269ca4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x269CA0u, 0x269CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269CA8u;
label_269ca8:
    // 0x269ca8: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x269ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x269cac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x269cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x269cb0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x269cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x269cb4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x269cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x269cb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269cbc: 0x0  nop
    ctx->pc = 0x269cbcu;
    // NOP
    // 0x269cc0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x269cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x269cc4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x269cc4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x269cc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x269cc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x269ccc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x269cccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x269cd0: 0x0  nop
    ctx->pc = 0x269cd0u;
    // NOP
    // 0x269cd4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x269cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x269cd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x269cd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x269cdc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x269cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x269ce0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x269ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x269ce4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x269ce4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x269ce8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x269ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x269cec: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x269cecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x269cf0: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x269cf0u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x269cf4: 0x0  nop
    ctx->pc = 0x269cf4u;
    // NOP
label_269cf8:
    // 0x269cf8: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x269CF8u;
    SET_GPR_U32(ctx, 31, 0x269D00u);
    ctx->pc = 0x269CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269CF8u;
    // 0x269cfc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x269CF8u, 0x269D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269D00u;
label_269d00:
    // 0x269d00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x269d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x269d04: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x269d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x269d08: 0x8c23f004  lw          $v1, -0xFFC($at)
    ctx->pc = 0x269d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x269d0c: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x269d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x269d10: 0x3442a9e5  ori         $v0, $v0, 0xA9E5
    ctx->pc = 0x269d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x269d14: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x269d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x269d18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x269d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x269d1c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x269d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x269d20: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x269d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x269d24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x269d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x269d28: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x269d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x269d2c: 0xac22f004  sw          $v0, -0xFFC($at)
    ctx->pc = 0x269d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 2));
    // 0x269d30: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x269d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x269d34: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x269d34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x269d38: 0x9682000e  lhu         $v0, 0xE($s4)
    ctx->pc = 0x269d38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x269d3c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x269d3cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x269d40: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x269d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269d44: 0x0  nop
    ctx->pc = 0x269d44u;
    // NOP
    // 0x269d48: 0x1810  mfhi        $v1
    ctx->pc = 0x269d48u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x269d4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x269d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x269d50: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269D50u;
    {
        const bool branch_taken_0x269d50 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x269D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D50u;
        // 0x269d54: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d50) {
            ctx->pc = 0x269D64u;
            goto label_269d64;
        }
    }
    ctx->pc = 0x269D58u;
    // 0x269d58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269d5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x269D5Cu;
    {
        const bool branch_taken_0x269d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269D5Cu;
        // 0x269d60: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x269d5c) {
            ctx->pc = 0x269D80u;
            goto label_269d80;
        }
    }
    ctx->pc = 0x269D64u;
label_269d64:
    // 0x269d64: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x269d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x269d68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x269d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x269d6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x269d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x269d70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x269d70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269d74: 0x0  nop
    ctx->pc = 0x269d74u;
    // NOP
    // 0x269d78: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x269d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x269d7c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x269d7cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_269d80:
    // 0x269d80: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x269d80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269d84: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x269d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x269d88: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x269d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x269d8c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x269d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x269d90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x269d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x269d94: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x269d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x269d98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x269d98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269d9c: 0x0  nop
    ctx->pc = 0x269d9cu;
    // NOP
    // 0x269da0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x269da0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x269da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x269da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269da8: 0x0  nop
    ctx->pc = 0x269da8u;
    // NOP
    // 0x269dac: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x269dacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x269db0: 0x0  nop
    ctx->pc = 0x269db0u;
    // NOP
    // 0x269db4: 0x0  nop
    ctx->pc = 0x269db4u;
    // NOP
    // 0x269db8: 0xc096784  jal         func_259E10
    ctx->pc = 0x269DB8u;
    SET_GPR_U32(ctx, 31, 0x269DC0u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x269DB8u, 0x269DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269DC0u;
label_269dc0:
    // 0x269dc0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x269dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x269dc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x269dc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x269dc8: 0xc0414dc  jal         func_105370
    ctx->pc = 0x269DC8u;
    SET_GPR_U32(ctx, 31, 0x269DD0u);
    ctx->pc = 0x269DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269DC8u;
    // 0x269dcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x269DC8u, 0x269DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269DD0u;
label_269dd0:
    // 0x269dd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x269dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269dd4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x269dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x269dd8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x269DD8u;
    SET_GPR_U32(ctx, 31, 0x269DE0u);
    ctx->pc = 0x269DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269DD8u;
    // 0x269ddc: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x269DD8u, 0x269DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269DE0u;
label_269de0:
    // 0x269de0: 0x9282000c  lbu         $v0, 0xC($s4)
    ctx->pc = 0x269de0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x269de4: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x269de4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x269de8: 0x10200149  beqz        $at, . + 4 + (0x149 << 2)
    ctx->pc = 0x269DE8u;
    {
        const bool branch_taken_0x269de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x269DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269DE8u;
        // 0x269dec: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269de8) {
            ctx->pc = 0x26A310u;
            goto label_26a310;
        }
    }
    ctx->pc = 0x269DF0u;
    // 0x269df0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x269df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x269df4: 0x24635860  addiu       $v1, $v1, 0x5860
    ctx->pc = 0x269df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22624));
    // 0x269df8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269dfc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x269dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269e00: 0x400008  jr          $v0
    ctx->pc = 0x269E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269E08u: goto label_269e08;
            case 0x269E70u: goto label_269e70;
            case 0x269EF0u: goto label_269ef0;
            case 0x269F60u: goto label_269f60;
            case 0x269FD0u: goto label_269fd0;
            case 0x26A040u: goto label_26a040;
            case 0x26A090u: goto label_26a090;
            case 0x26A0F8u: goto label_26a0f8;
            case 0x26A178u: goto label_26a178;
            case 0x26A1E8u: goto label_26a1e8;
            case 0x26A258u: goto label_26a258;
            case 0x26A2C8u: goto label_26a2c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269E00u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x269E08u;
label_269e08:
    // 0x269e08: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x269e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x269e0c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x269e0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x269e10: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x269e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x269e14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x269e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269e18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x269e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x269e1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269e20: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x269e20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269e24: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x269E24u;
    SET_GPR_U32(ctx, 31, 0x269E2Cu);
    ctx->pc = 0x269E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269E24u;
    // 0x269e28: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x269E24u, 0x269E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269E2Cu;
label_269e2c:
    // 0x269e2c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x269e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x269e30: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x269e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x269e34: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x269e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x269e38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x269e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x269e3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269e40: 0x0  nop
    ctx->pc = 0x269e40u;
    // NOP
    // 0x269e44: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x269e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x269e48: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x269e48u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x269e4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x269e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x269e50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x269e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x269e54: 0x0  nop
    ctx->pc = 0x269e54u;
    // NOP
    // 0x269e58: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x269e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x269e5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x269e5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x269e60: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x269e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x269e64: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x269E64u;
    {
        const bool branch_taken_0x269e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E64u;
        // 0x269e68: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e64) {
            ctx->pc = 0x26A310u;
            goto label_26a310;
        }
    }
    ctx->pc = 0x269E6Cu;
    // 0x269e6c: 0x0  nop
    ctx->pc = 0x269e6cu;
    // NOP
label_269e70:
    // 0x269e70: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x269e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x269e74: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x269e74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x269e78: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x269e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x269e7c: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x269e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x269e80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x269e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x269e84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x269e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x269e88: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x269e88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269e8c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269E8Cu;
    {
        const bool branch_taken_0x269e8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x269E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269E8Cu;
        // 0x269e90: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269e8c) {
            ctx->pc = 0x269EA0u;
            goto label_269ea0;
        }
    }
    ctx->pc = 0x269E94u;
    // 0x269e94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x269e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x269e98: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x269e98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269e9c: 0x0  nop
    ctx->pc = 0x269e9cu;
    // NOP
label_269ea0:
    // 0x269ea0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x269ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x269ea4: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x269EA4u;
    SET_GPR_U32(ctx, 31, 0x269EACu);
    ctx->pc = 0x269EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269EA4u;
    // 0x269ea8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x269EA4u, 0x269EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269EACu;
label_269eac:
    // 0x269eac: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x269eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x269eb0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x269eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x269eb4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x269eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x269eb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x269eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x269ebc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269ec0: 0x0  nop
    ctx->pc = 0x269ec0u;
    // NOP
    // 0x269ec4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x269ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x269ec8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x269ec8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x269ecc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x269eccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x269ed0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x269ed0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x269ed4: 0x0  nop
    ctx->pc = 0x269ed4u;
    // NOP
    // 0x269ed8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x269ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x269edc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x269edcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x269ee0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x269ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x269ee4: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x269EE4u;
    {
        const bool branch_taken_0x269ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269EE4u;
        // 0x269ee8: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ee4) {
            ctx->pc = 0x26A310u;
            goto label_26a310;
        }
    }
    ctx->pc = 0x269EECu;
    // 0x269eec: 0x0  nop
    ctx->pc = 0x269eecu;
    // NOP
label_269ef0:
    // 0x269ef0: 0x8f908060  lw          $s0, -0x7FA0($gp)
    ctx->pc = 0x269ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x269ef4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x269EF4u;
    {
        const bool branch_taken_0x269ef4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x269EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269EF4u;
        // 0x269ef8: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ef4) {
            ctx->pc = 0x269F10u;
            goto label_269f10;
        }
    }
    ctx->pc = 0x269EFCu;
    // 0x269efc: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x269efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x269f00: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x269f00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x269f04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x269f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x269f08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269f0c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x269f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_269f10:
    // 0x269f10: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x269f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x269f14: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x269F14u;
    SET_GPR_U32(ctx, 31, 0x269F1Cu);
    ctx->pc = 0x269F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269F14u;
    // 0x269f18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x269F14u, 0x269F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269F1Cu;
label_269f1c:
    // 0x269f1c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x269f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x269f20: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x269f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x269f24: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x269f24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x269f28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x269f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x269f2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269f30: 0x0  nop
    ctx->pc = 0x269f30u;
    // NOP
    // 0x269f34: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x269f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x269f38: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x269f38u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x269f3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x269f3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x269f40: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x269f40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x269f44: 0x0  nop
    ctx->pc = 0x269f44u;
    // NOP
    // 0x269f48: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x269f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x269f4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x269f4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x269f50: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x269f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x269f54: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x269F54u;
    {
        const bool branch_taken_0x269f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F54u;
        // 0x269f58: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f54) {
            ctx->pc = 0x26A310u;
            goto label_26a310;
        }
    }
    ctx->pc = 0x269F5Cu;
    // 0x269f5c: 0x0  nop
    ctx->pc = 0x269f5cu;
    // NOP
label_269f60:
    // 0x269f60: 0x8f908064  lw          $s0, -0x7F9C($gp)
    ctx->pc = 0x269f60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x269f64: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x269F64u;
    {
        const bool branch_taken_0x269f64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x269F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F64u;
        // 0x269f68: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f64) {
            ctx->pc = 0x269F80u;
            goto label_269f80;
        }
    }
    ctx->pc = 0x269F6Cu;
    // 0x269f6c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x269f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x269f70: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x269f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x269f74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x269f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x269f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269f7c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x269f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_269f80:
    // 0x269f80: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x269f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x269f84: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x269F84u;
    SET_GPR_U32(ctx, 31, 0x269F8Cu);
    ctx->pc = 0x269F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269F84u;
    // 0x269f88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x269F84u, 0x269F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269F8Cu;
label_269f8c:
    // 0x269f8c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x269f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x269f90: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x269f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x269f94: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x269f94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x269f98: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x269f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x269f9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x269f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269fa0: 0x0  nop
    ctx->pc = 0x269fa0u;
    // NOP
    // 0x269fa4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x269fa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x269fa8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x269fa8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x269fac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x269facu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x269fb0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x269fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x269fb4: 0x0  nop
    ctx->pc = 0x269fb4u;
    // NOP
    // 0x269fb8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x269fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x269fbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x269fbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x269fc0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x269fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x269fc4: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x269FC4u;
    {
        const bool branch_taken_0x269fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FC4u;
        // 0x269fc8: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fc4) {
            ctx->pc = 0x26A310u;
            goto label_26a310;
        }
    }
    ctx->pc = 0x269FCCu;
    // 0x269fcc: 0x0  nop
    ctx->pc = 0x269fccu;
    // NOP
label_269fd0:
    // 0x269fd0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x269FD0u;
    {
        const bool branch_taken_0x269fd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x269FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FD0u;
        // 0x269fd4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fd0) {
            ctx->pc = 0x269FF0u;
            goto label_269ff0;
        }
    }
    ctx->pc = 0x269FD8u;
    // 0x269fd8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x269fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x269fdc: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x269fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x269fe0: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x269fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x269fe4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x269fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x269fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x269fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x269fec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x269fecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_269ff0:
    // 0x269ff0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x269ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x269ff4: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x269FF4u;
    SET_GPR_U32(ctx, 31, 0x269FFCu);
    ctx->pc = 0x269FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269FF4u;
    // 0x269ff8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x269FF4u, 0x269FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269FFCu;
label_269ffc:
    // 0x269ffc: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x269ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26a000: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a004: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26a004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a008: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a00c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a010: 0x0  nop
    ctx->pc = 0x26a010u;
    // NOP
    // 0x26a014: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26a014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a018: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26a018u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26a01c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a01cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26a020: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26a020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a024: 0x0  nop
    ctx->pc = 0x26a024u;
    // NOP
    // 0x26a028: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26a028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a02c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a02cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a030: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a034: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x26A034u;
    {
        const bool branch_taken_0x26a034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A034u;
        // 0x26a038: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a034) {
            ctx->pc = 0x26A310u;
            goto label_26a310;
        }
    }
    ctx->pc = 0x26A03Cu;
    // 0x26a03c: 0x0  nop
    ctx->pc = 0x26a03cu;
    // NOP
label_26a040:
    // 0x26a040: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x26a040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x26a044: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26A044u;
    SET_GPR_U32(ctx, 31, 0x26A04Cu);
    ctx->pc = 0x26A048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A044u;
    // 0x26a048: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26A044u, 0x26A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A04Cu;
label_26a04c:
    // 0x26a04c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26a050: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a054: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26a054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a058: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a05c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a060: 0x0  nop
    ctx->pc = 0x26a060u;
    // NOP
    // 0x26a064: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26a064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a068: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26a068u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26a06c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a06cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26a070: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26a070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a074: 0x0  nop
    ctx->pc = 0x26a074u;
    // NOP
    // 0x26a078: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26a078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a07c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a07cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a080: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a084: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x26A084u;
    {
        const bool branch_taken_0x26a084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A084u;
        // 0x26a088: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a084) {
            ctx->pc = 0x26A310u;
            goto label_26a310;
        }
    }
    ctx->pc = 0x26A08Cu;
    // 0x26a08c: 0x0  nop
    ctx->pc = 0x26a08cu;
    // NOP
label_26a090:
    // 0x26a090: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x26a090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x26a094: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x26a094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x26a098: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x26a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26a09c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a0a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26a0a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a0a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26a0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a0ac: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26A0ACu;
    SET_GPR_U32(ctx, 31, 0x26A0B4u);
    ctx->pc = 0x26A0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A0ACu;
    // 0x26a0b0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26A0ACu, 0x26A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A0B4u;
label_26a0b4:
    // 0x26a0b4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26a0b8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a0bc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26a0bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a0c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a0c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a0c8: 0x0  nop
    ctx->pc = 0x26a0c8u;
    // NOP
    // 0x26a0cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26a0ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a0d0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26a0d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26a0d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a0d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26a0d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26a0d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a0dc: 0x0  nop
    ctx->pc = 0x26a0dcu;
    // NOP
    // 0x26a0e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26a0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a0e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a0e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a0e8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a0ec: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x26A0ECu;
    {
        const bool branch_taken_0x26a0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0ECu;
        // 0x26a0f0: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0ec) {
            ctx->pc = 0x26A310u;
            goto label_26a310;
        }
    }
    ctx->pc = 0x26A0F4u;
    // 0x26a0f4: 0x0  nop
    ctx->pc = 0x26a0f4u;
    // NOP
label_26a0f8:
    // 0x26a0f8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x26a0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x26a0fc: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x26a0fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x26a100: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x26a100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26a104: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x26a104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x26a108: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26a108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26a10c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26a110: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26a110u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a114: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A114u;
    {
        const bool branch_taken_0x26a114 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A114u;
        // 0x26a118: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a114) {
            ctx->pc = 0x26A128u;
            goto label_26a128;
        }
    }
    ctx->pc = 0x26A11Cu;
    // 0x26a11c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x26a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26a120: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26a120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a124: 0x0  nop
    ctx->pc = 0x26a124u;
    // NOP
label_26a128:
    // 0x26a128: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a12c: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26A12Cu;
    SET_GPR_U32(ctx, 31, 0x26A134u);
    ctx->pc = 0x26A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A12Cu;
    // 0x26a130: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26A12Cu, 0x26A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A134u;
label_26a134:
    // 0x26a134: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26a134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26a138: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a13c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26a13cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a140: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a144: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a148: 0x0  nop
    ctx->pc = 0x26a148u;
    // NOP
    // 0x26a14c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26a14cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a150: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26a150u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26a154: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a154u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26a158: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26a158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a15c: 0x0  nop
    ctx->pc = 0x26a15cu;
    // NOP
    // 0x26a160: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26a160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a164: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a168: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a16c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x26A16Cu;
    {
        const bool branch_taken_0x26a16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A16Cu;
        // 0x26a170: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a16c) {
            ctx->pc = 0x26A310u;
            goto label_26a310;
        }
    }
    ctx->pc = 0x26A174u;
    // 0x26a174: 0x0  nop
    ctx->pc = 0x26a174u;
    // NOP
label_26a178:
    // 0x26a178: 0x8f908060  lw          $s0, -0x7FA0($gp)
    ctx->pc = 0x26a178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x26a17c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A17Cu;
    {
        const bool branch_taken_0x26a17c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A17Cu;
        // 0x26a180: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a17c) {
            ctx->pc = 0x26A198u;
            goto label_26a198;
        }
    }
    ctx->pc = 0x26A184u;
    // 0x26a184: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x26a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26a188: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x26a188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x26a18c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26a190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a194: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26a194u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26a198:
    // 0x26a198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a19c: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26A19Cu;
    SET_GPR_U32(ctx, 31, 0x26A1A4u);
    ctx->pc = 0x26A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A19Cu;
    // 0x26a1a0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26A19Cu, 0x26A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A1A4u;
label_26a1a4:
    // 0x26a1a4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26a1a8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a1ac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26a1acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a1b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a1b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a1b8: 0x0  nop
    ctx->pc = 0x26a1b8u;
    // NOP
    // 0x26a1bc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26a1bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a1c0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26a1c0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26a1c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a1c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26a1c8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26a1c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a1cc: 0x0  nop
    ctx->pc = 0x26a1ccu;
    // NOP
    // 0x26a1d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26a1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a1d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a1d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a1d8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a1dc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x26A1DCu;
    {
        const bool branch_taken_0x26a1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A1DCu;
        // 0x26a1e0: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a1dc) {
            ctx->pc = 0x26A310u;
            goto label_26a310;
        }
    }
    ctx->pc = 0x26A1E4u;
    // 0x26a1e4: 0x0  nop
    ctx->pc = 0x26a1e4u;
    // NOP
label_26a1e8:
    // 0x26a1e8: 0x8f908064  lw          $s0, -0x7F9C($gp)
    ctx->pc = 0x26a1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x26a1ec: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A1ECu;
    {
        const bool branch_taken_0x26a1ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A1ECu;
        // 0x26a1f0: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a1ec) {
            ctx->pc = 0x26A208u;
            goto label_26a208;
        }
    }
    ctx->pc = 0x26A1F4u;
    // 0x26a1f4: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x26a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26a1f8: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x26a1f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x26a1fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26a200: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a204: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26a204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26a208:
    // 0x26a208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a20c: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26A20Cu;
    SET_GPR_U32(ctx, 31, 0x26A214u);
    ctx->pc = 0x26A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A20Cu;
    // 0x26a210: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26A20Cu, 0x26A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A214u;
label_26a214:
    // 0x26a214: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26a214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26a218: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a21c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26a21cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a220: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a224: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a228: 0x0  nop
    ctx->pc = 0x26a228u;
    // NOP
    // 0x26a22c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26a22cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a230: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26a230u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26a234: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a234u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26a238: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26a238u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a23c: 0x0  nop
    ctx->pc = 0x26a23cu;
    // NOP
    // 0x26a240: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26a240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a244: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a244u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a248: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a24c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x26A24Cu;
    {
        const bool branch_taken_0x26a24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A24Cu;
        // 0x26a250: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a24c) {
            ctx->pc = 0x26A310u;
            goto label_26a310;
        }
    }
    ctx->pc = 0x26A254u;
    // 0x26a254: 0x0  nop
    ctx->pc = 0x26a254u;
    // NOP
label_26a258:
    // 0x26a258: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A258u;
    {
        const bool branch_taken_0x26a258 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A258u;
        // 0x26a25c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a258) {
            ctx->pc = 0x26A278u;
            goto label_26a278;
        }
    }
    ctx->pc = 0x26A260u;
    // 0x26a260: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x26a260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x26a264: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x26a264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x26a268: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x26a268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x26a26c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26a270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a274: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26a274u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26a278:
    // 0x26a278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a27c: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26A27Cu;
    SET_GPR_U32(ctx, 31, 0x26A284u);
    ctx->pc = 0x26A280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A27Cu;
    // 0x26a280: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26A27Cu, 0x26A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A284u;
label_26a284:
    // 0x26a284: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26a284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26a288: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a28c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26a28cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a290: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a294: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a298: 0x0  nop
    ctx->pc = 0x26a298u;
    // NOP
    // 0x26a29c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26a29cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a2a0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26a2a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26a2a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a2a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26a2a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26a2a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a2ac: 0x0  nop
    ctx->pc = 0x26a2acu;
    // NOP
    // 0x26a2b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26a2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a2b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a2b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a2b8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a2bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26A2BCu;
    {
        const bool branch_taken_0x26a2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A2BCu;
        // 0x26a2c0: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2bc) {
            ctx->pc = 0x26A310u;
            goto label_26a310;
        }
    }
    ctx->pc = 0x26A2C4u;
    // 0x26a2c4: 0x0  nop
    ctx->pc = 0x26a2c4u;
    // NOP
label_26a2c8:
    // 0x26a2c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2cc: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26A2CCu;
    SET_GPR_U32(ctx, 31, 0x26A2D4u);
    ctx->pc = 0x26A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A2CCu;
    // 0x26a2d0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x26A2CCu, 0x26A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2D4u;
label_26a2d4:
    // 0x26a2d4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x26a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x26a2d8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a2dc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x26a2dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a2e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a2e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a2e8: 0x0  nop
    ctx->pc = 0x26a2e8u;
    // NOP
    // 0x26a2ec: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26a2ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26a2f0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26a2f0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x26a2f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26a2f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x26a2f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26a2f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26a2fc: 0x0  nop
    ctx->pc = 0x26a2fcu;
    // NOP
    // 0x26a300: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26a300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26a304: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26a304u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26a308: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26a308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26a30c: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x26a30cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_26a310:
    // 0x26a310: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x26A310u;
    SET_GPR_U32(ctx, 31, 0x26A318u);
    ctx->pc = 0x26A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A310u;
    // 0x26a314: 0x86440000  lh          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x26A310u, 0x26A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A318u;
label_26a318:
    // 0x26a318: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x26a318u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x26a31c: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x26a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x26a320: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x26a320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x26a324: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A324u;
    {
        const bool branch_taken_0x26a324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a324) {
            ctx->pc = 0x26A338u;
            goto label_26a338;
        }
    }
    ctx->pc = 0x26A32Cu;
    // 0x26a32c: 0x7a0200d0  lq          $v0, 0xD0($s0)
    ctx->pc = 0x26a32cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x26a330: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26A330u;
    {
        const bool branch_taken_0x26a330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A330u;
        // 0x26a334: 0x7ec20000  sq          $v0, 0x0($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a330) {
            ctx->pc = 0x26A340u;
            goto label_26a340;
        }
    }
    ctx->pc = 0x26A338u;
label_26a338:
    // 0x26a338: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x26a338u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x26a33c: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x26a33cu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
label_26a340:
    // 0x26a340: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26a340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26a344: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x26a344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a348: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26a348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a34c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a350: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26a350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a354: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26a354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26a358: 0x2442f388  addiu       $v0, $v0, -0xC78
    ctx->pc = 0x26a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964104));
    // 0x26a35c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a360: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x26a360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x26a364: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x26a364u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x26a368: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x26a368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x26a36c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x26a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x26a370: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x26a370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x26a374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a378: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x26a378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a37c: 0xc0b82c4  jal         func_2E0B10
    ctx->pc = 0x26A37Cu;
    SET_GPR_U32(ctx, 31, 0x26A384u);
    ctx->pc = 0x26A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A37Cu;
    // 0x26a380: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0B10u, 0x26A37Cu, 0x26A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A384u;
label_26a384:
    // 0x26a384: 0x0  nop
    ctx->pc = 0x26a384u;
    // NOP
label_26a388:
    // 0x26a388: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x26a388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26a38c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x26a38cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26a390: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x26a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26a394: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x26a394u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a398: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26a398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26a39c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x26a39cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26a3a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26a3a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a3a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26a3a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a3a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26a3a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x26A3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A3ACu;
        // 0x26a3b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A3B4u;
}
