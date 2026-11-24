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

// Function: sub_002D9AC0
// Address: 0x2d9ac0 - 0x2d9dc4
void sub_002D9AC0_0x2d9ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9AC0_0x2d9ac0");
#endif

    switch (ctx->pc) {
        case 0x2d9af8u: goto label_2d9af8;
        case 0x2d9b08u: goto label_2d9b08;
        case 0x2d9b1cu: goto label_2d9b1c;
        case 0x2d9b4cu: goto label_2d9b4c;
        case 0x2d9bbcu: goto label_2d9bbc;
        case 0x2d9c24u: goto label_2d9c24;
        case 0x2d9d20u: goto label_2d9d20;
        case 0x2d9d30u: goto label_2d9d30;
        case 0x2d9d48u: goto label_2d9d48;
        case 0x2d9d58u: goto label_2d9d58;
        case 0x2d9d80u: goto label_2d9d80;
        default: break;
    }

    ctx->pc = 0x2d9ac0u;

    // 0x2d9ac0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d9ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d9ac4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d9ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d9ac8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d9ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d9acc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d9accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d9ad0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d9ad0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ad4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d9ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d9ad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d9ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d9adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d9adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9ae0: 0x3c12008c  lui         $s2, 0x8C
    ctx->pc = 0x2d9ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)140 << 16));
    // 0x2d9ae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9ae8: 0x26520850  addiu       $s2, $s2, 0x850
    ctx->pc = 0x2d9ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2128));
    // 0x2d9aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9af0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2d9af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9af4: 0x0  nop
    ctx->pc = 0x2d9af4u;
    // NOP
label_2d9af8:
    // 0x2d9af8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d9af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d9afc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d9afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d9b00: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2D9B00u;
    SET_GPR_U32(ctx, 31, 0x2D9B08u);
    ctx->pc = 0x2D9B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B00u;
    // 0x2d9b04: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2D9B00u, 0x2D9B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B08u;
label_2d9b08:
    // 0x2d9b08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d9b08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9b0c: 0x12800078  beqz        $s4, . + 4 + (0x78 << 2)
    ctx->pc = 0x2D9B0Cu;
    {
        const bool branch_taken_0x2d9b0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B0Cu;
        // 0x2d9b10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b0c) {
            ctx->pc = 0x2D9CF0u;
            goto label_2d9cf0;
        }
    }
    ctx->pc = 0x2D9B14u;
    // 0x2d9b14: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2D9B14u;
    SET_GPR_U32(ctx, 31, 0x2D9B1Cu);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2D9B14u, 0x2D9B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B1Cu;
label_2d9b1c:
    // 0x2d9b1c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2d9b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d9b20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d9b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9b24: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x2d9b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x2d9b28: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2d9b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2d9b2c: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x2d9b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2d9b30: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x2d9b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d9b34: 0x0  nop
    ctx->pc = 0x2d9b34u;
    // NOP
    // 0x2d9b38: 0x0  nop
    ctx->pc = 0x2d9b38u;
    // NOP
    // 0x2d9b3c: 0x1010  mfhi        $v0
    ctx->pc = 0x2d9b3cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2d9b40: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2d9b40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2d9b44: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x2D9B44u;
    SET_GPR_U32(ctx, 31, 0x2D9B4Cu);
    ctx->pc = 0x2D9B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B44u;
    // 0x2d9b48: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2D9B44u, 0x2D9B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B4Cu;
label_2d9b4c:
    // 0x2d9b4c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x2d9b4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d9b50: 0x9625006c  lhu         $a1, 0x6C($s1)
    ctx->pc = 0x2d9b50u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x2d9b54: 0x8e8229c0  lw          $v0, 0x29C0($s4)
    ctx->pc = 0x2d9b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2d9b58: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2d9b58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9b5c: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x2d9b5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d9b60: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9B60u;
    {
        const bool branch_taken_0x2d9b60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B60u;
        // 0x2d9b64: 0x3263ffff  andi        $v1, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b60) {
            ctx->pc = 0x2D9B88u;
            goto label_2d9b88;
        }
    }
    ctx->pc = 0x2D9B68u;
    // 0x2d9b68: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x2d9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d9b6c: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x2d9b6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d9b70: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9B70u;
    {
        const bool branch_taken_0x2d9b70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9b70) {
            ctx->pc = 0x2D9B7Cu;
            goto label_2d9b7c;
        }
    }
    ctx->pc = 0x2D9B78u;
    // 0x2d9b78: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2d9b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2d9b7c:
    // 0x2d9b7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D9B7Cu;
    {
        const bool branch_taken_0x2d9b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B7Cu;
        // 0x2d9b80: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b7c) {
            ctx->pc = 0x2D9BB0u;
            goto label_2d9bb0;
        }
    }
    ctx->pc = 0x2D9B84u;
    // 0x2d9b84: 0x0  nop
    ctx->pc = 0x2d9b84u;
    // NOP
label_2d9b88:
    // 0x2d9b88: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x2d9b88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d9b8c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9B8Cu;
    {
        const bool branch_taken_0x2d9b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B8Cu;
        // 0x2d9b90: 0x3263ffff  andi        $v1, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b8c) {
            ctx->pc = 0x2D9BB0u;
            goto label_2d9bb0;
        }
    }
    ctx->pc = 0x2D9B94u;
    // 0x2d9b94: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2d9b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d9b98: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x2d9b98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d9b9c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9B9Cu;
    {
        const bool branch_taken_0x2d9b9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9b9c) {
            ctx->pc = 0x2D9BA8u;
            goto label_2d9ba8;
        }
    }
    ctx->pc = 0x2D9BA4u;
    // 0x2d9ba4: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x2d9ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2d9ba8:
    // 0x2d9ba8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D9BA8u;
    {
        const bool branch_taken_0x2d9ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BA8u;
        // 0x2d9bac: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ba8) {
            ctx->pc = 0x2D9BB0u;
            goto label_2d9bb0;
        }
    }
    ctx->pc = 0x2D9BB0u;
label_2d9bb0:
    // 0x2d9bb0: 0xa625006c  sh          $a1, 0x6C($s1)
    ctx->pc = 0x2d9bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 108), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d9bb4: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2D9BB4u;
    SET_GPR_U32(ctx, 31, 0x2D9BBCu);
    ctx->pc = 0x2D9BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9BB4u;
    // 0x2d9bb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2D9BB4u, 0x2D9BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9BBCu;
label_2d9bbc:
    // 0x2d9bbc: 0x9625006e  lhu         $a1, 0x6E($s1)
    ctx->pc = 0x2d9bbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 110)));
    // 0x2d9bc0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2d9bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d9bc4: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x2d9bc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d9bc8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D9BC8u;
    {
        const bool branch_taken_0x2d9bc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BC8u;
        // 0x2d9bcc: 0x3263ffff  andi        $v1, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9bc8) {
            ctx->pc = 0x2D9BF0u;
            goto label_2d9bf0;
        }
    }
    ctx->pc = 0x2D9BD0u;
    // 0x2d9bd0: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x2d9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d9bd4: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x2d9bd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d9bd8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9BD8u;
    {
        const bool branch_taken_0x2d9bd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9bd8) {
            ctx->pc = 0x2D9BE4u;
            goto label_2d9be4;
        }
    }
    ctx->pc = 0x2D9BE0u;
    // 0x2d9be0: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x2d9be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2d9be4:
    // 0x2d9be4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D9BE4u;
    {
        const bool branch_taken_0x2d9be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BE4u;
        // 0x2d9be8: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9be4) {
            ctx->pc = 0x2D9C18u;
            goto label_2d9c18;
        }
    }
    ctx->pc = 0x2D9BECu;
    // 0x2d9bec: 0x0  nop
    ctx->pc = 0x2d9becu;
    // NOP
label_2d9bf0:
    // 0x2d9bf0: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x2d9bf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d9bf4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9BF4u;
    {
        const bool branch_taken_0x2d9bf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BF4u;
        // 0x2d9bf8: 0x3263ffff  andi        $v1, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9bf4) {
            ctx->pc = 0x2D9C18u;
            goto label_2d9c18;
        }
    }
    ctx->pc = 0x2D9BFCu;
    // 0x2d9bfc: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2d9bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d9c00: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x2d9c00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2d9c04: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9C04u;
    {
        const bool branch_taken_0x2d9c04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9c04) {
            ctx->pc = 0x2D9C10u;
            goto label_2d9c10;
        }
    }
    ctx->pc = 0x2D9C0Cu;
    // 0x2d9c0c: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x2d9c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2d9c10:
    // 0x2d9c10: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2D9C10u;
    {
        const bool branch_taken_0x2d9c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C10u;
        // 0x2d9c14: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c10) {
            ctx->pc = 0x2D9C18u;
            goto label_2d9c18;
        }
    }
    ctx->pc = 0x2D9C18u;
label_2d9c18:
    // 0x2d9c18: 0xa625006e  sh          $a1, 0x6E($s1)
    ctx->pc = 0x2d9c18u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 110), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d9c1c: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2D9C1Cu;
    SET_GPR_U32(ctx, 31, 0x2D9C24u);
    ctx->pc = 0x2D9C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9C1Cu;
    // 0x2d9c20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2D9C1Cu, 0x2D9C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9C24u;
label_2d9c24:
    // 0x2d9c24: 0x8e8329c0  lw          $v1, 0x29C0($s4)
    ctx->pc = 0x2d9c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2d9c28: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2d9c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d9c2c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d9c2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d9c30: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2d9c30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d9c34: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2d9c34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d9c38: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D9C38u;
    {
        const bool branch_taken_0x2d9c38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9c38) {
            ctx->pc = 0x2D9CE0u;
            goto label_2d9ce0;
        }
    }
    ctx->pc = 0x2D9C40u;
    // 0x2d9c40: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2d9c44: 0x96250070  lhu         $a1, 0x70($s1)
    ctx->pc = 0x2d9c44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2d9c48: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d9c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d9c4c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2d9c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2d9c50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2d9c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9c54: 0x24846540  addiu       $a0, $a0, 0x6540
    ctx->pc = 0x2d9c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25920));
    // 0x2d9c58: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d9c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d9c5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9c60: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2d9c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d9c64: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x2d9c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x2d9c68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d9c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d9c6c: 0x3c03427c  lui         $v1, 0x427C
    ctx->pc = 0x2d9c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17020 << 16));
    // 0x2d9c70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d9c70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d9c74: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2d9c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2d9c78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d9c78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d9c7c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d9c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d9c80: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2d9c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d9c84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d9c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9c88: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2d9c88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2d9c8c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2d9c8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2d9c90: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d9c90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d9c94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d9c94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d9c98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9C98u;
    {
        const bool branch_taken_0x2d9c98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d9c98) {
            ctx->pc = 0x2D9CB0u;
            goto label_2d9cb0;
        }
    }
    ctx->pc = 0x2D9CA0u;
    // 0x2d9ca0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d9ca0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d9ca4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d9ca4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d9ca8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9CA8u;
    {
        const bool branch_taken_0x2d9ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CA8u;
        // 0x2d9cac: 0xa2230072  sb          $v1, 0x72($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ca8) {
            ctx->pc = 0x2D9CCCu;
            goto label_2d9ccc;
        }
    }
    ctx->pc = 0x2D9CB0u;
label_2d9cb0:
    // 0x2d9cb0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d9cb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d9cb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d9cb8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d9cb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d9cbc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2d9cbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d9cc0: 0x0  nop
    ctx->pc = 0x2d9cc0u;
    // NOP
    // 0x2d9cc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d9cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d9cc8: 0xa2230072  sb          $v1, 0x72($s1)
    ctx->pc = 0x2d9cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 3));
label_2d9ccc:
    // 0x2d9ccc: 0x96220070  lhu         $v0, 0x70($s1)
    ctx->pc = 0x2d9cccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2d9cd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d9cd4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D9CD4u;
    {
        const bool branch_taken_0x2d9cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CD4u;
        // 0x2d9cd8: 0xa6220070  sh          $v0, 0x70($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 112), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cd4) {
            ctx->pc = 0x2D9D00u;
            goto label_2d9d00;
        }
    }
    ctx->pc = 0x2D9CDCu;
    // 0x2d9cdc: 0x0  nop
    ctx->pc = 0x2d9cdcu;
    // NOP
label_2d9ce0:
    // 0x2d9ce0: 0xa6200070  sh          $zero, 0x70($s1)
    ctx->pc = 0x2d9ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d9ce4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2d9ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d9ce8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9CE8u;
    {
        const bool branch_taken_0x2d9ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CE8u;
        // 0x2d9cec: 0xa2220072  sb          $v0, 0x72($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ce8) {
            ctx->pc = 0x2D9D00u;
            goto label_2d9d00;
        }
    }
    ctx->pc = 0x2D9CF0u;
label_2d9cf0:
    // 0x2d9cf0: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2d9cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x2d9cf4: 0xa620006c  sh          $zero, 0x6C($s1)
    ctx->pc = 0x2d9cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 108), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d9cf8: 0xa620006e  sh          $zero, 0x6E($s1)
    ctx->pc = 0x2d9cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 110), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d9cfc: 0x0  nop
    ctx->pc = 0x2d9cfcu;
    // NOP
label_2d9d00:
    // 0x2d9d00: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2d9d00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2d9d04: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x2d9d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d9d08: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2d9d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2d9d0c: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x2D9D0Cu;
    {
        const bool branch_taken_0x2d9d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D0Cu;
        // 0x2d9d10: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d0c) {
            ctx->pc = 0x2D9AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9af8;
        }
    }
    ctx->pc = 0x2D9D14u;
    // 0x2d9d14: 0x3c12008c  lui         $s2, 0x8C
    ctx->pc = 0x2d9d14u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)140 << 16));
    // 0x2d9d18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d9d18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d1c: 0x26520850  addiu       $s2, $s2, 0x850
    ctx->pc = 0x2d9d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2128));
label_2d9d20:
    // 0x2d9d20: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d9d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d9d24: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d9d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d9d28: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2D9D28u;
    SET_GPR_U32(ctx, 31, 0x2D9D30u);
    ctx->pc = 0x2D9D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9D28u;
    // 0x2d9d2c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2D9D28u, 0x2D9D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D30u;
label_2d9d30:
    // 0x2d9d30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d9d30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d34: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D9D34u;
    {
        const bool branch_taken_0x2d9d34 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d34) {
            ctx->pc = 0x2D9D90u;
            goto label_2d9d90;
        }
    }
    ctx->pc = 0x2D9D3Cu;
    // 0x2d9d3c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d9d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d9d40: 0xc0b67d8  jal         func_2D9F60
    ctx->pc = 0x2D9D40u;
    SET_GPR_U32(ctx, 31, 0x2D9D48u);
    ctx->pc = 0x2D9D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9D40u;
    // 0x2d9d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F60u, 0x2D9D40u, 0x2D9D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D48u;
label_2d9d48:
    // 0x2d9d48: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D9D48u;
    {
        const bool branch_taken_0x2d9d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D48u;
        // 0x2d9d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d48) {
            ctx->pc = 0x2D9D90u;
            goto label_2d9d90;
        }
    }
    ctx->pc = 0x2D9D50u;
    // 0x2d9d50: 0xc0b67d8  jal         func_2D9F60
    ctx->pc = 0x2D9D50u;
    SET_GPR_U32(ctx, 31, 0x2D9D58u);
    ctx->pc = 0x2D9D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9D50u;
    // 0x2d9d54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F60u, 0x2D9D50u, 0x2D9D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D58u;
label_2d9d58:
    // 0x2d9d58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d9d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d5c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D9D5Cu;
    {
        const bool branch_taken_0x2d9d5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d5c) {
            ctx->pc = 0x2D9D90u;
            goto label_2d9d90;
        }
    }
    ctx->pc = 0x2D9D64u;
    // 0x2d9d64: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d9d68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d9d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9d6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2d9d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2d9d70: 0x8e8229c0  lw          $v0, 0x29C0($s4)
    ctx->pc = 0x2d9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2d9d74: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2d9d74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9d78: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2D9D78u;
    SET_GPR_U32(ctx, 31, 0x2D9D80u);
    ctx->pc = 0x2D9D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9D78u;
    // 0x2d9d7c: 0xa6220004  sh          $v0, 0x4($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2D9D78u, 0x2D9D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9D80u;
label_2d9d80:
    // 0x2d9d80: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x2d9d80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d9d84: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2d9d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d9d88: 0xa6200008  sh          $zero, 0x8($s1)
    ctx->pc = 0x2d9d88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d9d8c: 0xa223000a  sb          $v1, 0xA($s1)
    ctx->pc = 0x2d9d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 3));
label_2d9d90:
    // 0x2d9d90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d9d90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2d9d94: 0x2e630020  sltiu       $v1, $s3, 0x20
    ctx->pc = 0x2d9d94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2d9d98: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2D9D98u;
    {
        const bool branch_taken_0x2d9d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D98u;
        // 0x2d9d9c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d98) {
            ctx->pc = 0x2D9D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9d20;
        }
    }
    ctx->pc = 0x2D9DA0u;
    // 0x2d9da0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d9da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d9da4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d9da4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d9da8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d9da8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9dac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d9dacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9db0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d9db0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9db4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9db8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9DBCu;
        // 0x2d9dc0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9DC4u;
}
