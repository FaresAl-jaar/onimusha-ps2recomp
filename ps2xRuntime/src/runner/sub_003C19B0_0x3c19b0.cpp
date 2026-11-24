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

// Function: sub_003C19B0
// Address: 0x3c19b0 - 0x3c1cfc
void sub_003C19B0_0x3c19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C19B0_0x3c19b0");
#endif

    switch (ctx->pc) {
        case 0x3c19e4u: goto label_3c19e4;
        case 0x3c19f4u: goto label_3c19f4;
        case 0x3c1a00u: goto label_3c1a00;
        case 0x3c1a30u: goto label_3c1a30;
        case 0x3c1a64u: goto label_3c1a64;
        case 0x3c1a88u: goto label_3c1a88;
        case 0x3c1a98u: goto label_3c1a98;
        case 0x3c1ad4u: goto label_3c1ad4;
        case 0x3c1b0cu: goto label_3c1b0c;
        case 0x3c1b28u: goto label_3c1b28;
        case 0x3c1b68u: goto label_3c1b68;
        case 0x3c1b78u: goto label_3c1b78;
        case 0x3c1b90u: goto label_3c1b90;
        case 0x3c1bd0u: goto label_3c1bd0;
        case 0x3c1becu: goto label_3c1bec;
        case 0x3c1c1cu: goto label_3c1c1c;
        case 0x3c1c24u: goto label_3c1c24;
        case 0x3c1c4cu: goto label_3c1c4c;
        case 0x3c1c74u: goto label_3c1c74;
        case 0x3c1c88u: goto label_3c1c88;
        case 0x3c1c94u: goto label_3c1c94;
        case 0x3c1ca8u: goto label_3c1ca8;
        case 0x3c1cd4u: goto label_3c1cd4;
        case 0x3c1cdcu: goto label_3c1cdc;
        default: break;
    }

    ctx->pc = 0x3c19b0u;

    // 0x3c19b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c19b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c19b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c19b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3c19b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c19b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c19bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c19bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3c19c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3c19c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c19c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c19c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c19c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3c19c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c19cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c19ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c19d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c19d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c19d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c19d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c19d8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3c19d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c19dc: 0xc049590  jal         func_125640
    ctx->pc = 0x3C19DCu;
    SET_GPR_U32(ctx, 31, 0x3C19E4u);
    ctx->pc = 0x3C19E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C19DCu;
    // 0x3c19e0: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3C19DCu, 0x3C19E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C19E4u;
label_3c19e4:
    // 0x3c19e4: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x3c19e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x3c19e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c19e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c19ec: 0xc049590  jal         func_125640
    ctx->pc = 0x3C19ECu;
    SET_GPR_U32(ctx, 31, 0x3C19F4u);
    ctx->pc = 0x3C19F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C19ECu;
    // 0x3c19f0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3C19ECu, 0x3C19F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C19F4u;
label_3c19f4:
    // 0x3c19f4: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x3c19f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3c19f8: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x3C19F8u;
    {
        const bool branch_taken_0x3c19f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C19F8u;
        // 0x3c19fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c19f8) {
            ctx->pc = 0x3C1A78u;
            goto label_3c1a78;
        }
    }
    ctx->pc = 0x3C1A00u;
label_3c1a00:
    // 0x3c1a00: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x3c1a00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3c1a04: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3c1a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3c1a08: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C1A08u;
    {
        const bool branch_taken_0x3c1a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1a08) {
            ctx->pc = 0x3C1A30u;
            goto label_3c1a30;
        }
    }
    ctx->pc = 0x3C1A10u;
    // 0x3c1a10: 0x92020080  lbu         $v0, 0x80($s0)
    ctx->pc = 0x3c1a10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3c1a14: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3c1a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3c1a18: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C1A18u;
    {
        const bool branch_taken_0x3c1a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A18u;
        // 0x3c1a1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1a18) {
            ctx->pc = 0x3C1A24u;
            goto label_3c1a24;
        }
    }
    ctx->pc = 0x3C1A20u;
    // 0x3c1a20: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x3c1a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_3c1a24:
    // 0x3c1a24: 0x86050084  lh          $a1, 0x84($s0)
    ctx->pc = 0x3c1a24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3c1a28: 0xc0f0260  jal         func_3C0980
    ctx->pc = 0x3C1A28u;
    SET_GPR_U32(ctx, 31, 0x3C1A30u);
    ctx->pc = 0x3C1A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1A28u;
    // 0x3c1a2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0980u, 0x3C1A28u, 0x3C1A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1A30u;
label_3c1a30:
    // 0x3c1a30: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x3c1a30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3c1a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c1a38: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3c1a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3c1a3c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C1A3Cu;
    {
        const bool branch_taken_0x3c1a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1a3c) {
            ctx->pc = 0x3C1A68u;
            goto label_3c1a68;
        }
    }
    ctx->pc = 0x3C1A44u;
    // 0x3c1a44: 0x92020080  lbu         $v0, 0x80($s0)
    ctx->pc = 0x3c1a44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3c1a48: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c1a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3c1a4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C1A4Cu;
    {
        const bool branch_taken_0x3c1a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A4Cu;
        // 0x3c1a50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1a4c) {
            ctx->pc = 0x3C1A58u;
            goto label_3c1a58;
        }
    }
    ctx->pc = 0x3C1A54u;
    // 0x3c1a54: 0x260600f0  addiu       $a2, $s0, 0xF0
    ctx->pc = 0x3c1a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_3c1a58:
    // 0x3c1a58: 0x86050084  lh          $a1, 0x84($s0)
    ctx->pc = 0x3c1a58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3c1a5c: 0xc0f0260  jal         func_3C0980
    ctx->pc = 0x3C1A5Cu;
    SET_GPR_U32(ctx, 31, 0x3C1A64u);
    ctx->pc = 0x3C1A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1A5Cu;
    // 0x3c1a60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0980u, 0x3C1A5Cu, 0x3C1A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1A64u;
label_3c1a64:
    // 0x3c1a64: 0x0  nop
    ctx->pc = 0x3c1a64u;
    // NOP
label_3c1a68:
    // 0x3c1a68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c1a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3c1a6c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x3c1a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3c1a70: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3C1A70u;
    {
        const bool branch_taken_0x3c1a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A70u;
        // 0x3c1a74: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1a70) {
            ctx->pc = 0x3C1A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1a00;
        }
    }
    ctx->pc = 0x3C1A78u;
label_3c1a78:
    // 0x3c1a78: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x3c1a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x3c1a7c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3C1A7Cu;
    {
        const bool branch_taken_0x3c1a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1A7Cu;
        // 0x3c1a80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1a7c) {
            ctx->pc = 0x3C1B38u;
            goto label_3c1b38;
        }
    }
    ctx->pc = 0x3C1A84u;
    // 0x3c1a84: 0x0  nop
    ctx->pc = 0x3c1a84u;
    // NOP
label_3c1a88:
    // 0x3c1a88: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x3c1a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x3c1a8c: 0x920500bc  lbu         $a1, 0xBC($s0)
    ctx->pc = 0x3c1a8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x3c1a90: 0xc0f07f8  jal         func_3C1FE0
    ctx->pc = 0x3C1A90u;
    SET_GPR_U32(ctx, 31, 0x3C1A98u);
    ctx->pc = 0x3C1A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1A90u;
    // 0x3c1a94: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1FE0u, 0x3C1A90u, 0x3C1A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1A98u;
label_3c1a98:
    // 0x3c1a98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3c1a98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1a9c: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x3C1A9Cu;
    {
        const bool branch_taken_0x3c1a9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1a9c) {
            ctx->pc = 0x3C1B38u;
            goto label_3c1b38;
        }
    }
    ctx->pc = 0x3C1AA4u;
    // 0x3c1aa4: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x3c1aa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3c1aa8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3c1aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3c1aac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C1AACu;
    {
        const bool branch_taken_0x3c1aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1aac) {
            ctx->pc = 0x3C1AD8u;
            goto label_3c1ad8;
        }
    }
    ctx->pc = 0x3C1AB4u;
    // 0x3c1ab4: 0x92020080  lbu         $v0, 0x80($s0)
    ctx->pc = 0x3c1ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3c1ab8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3c1ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3c1abc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C1ABCu;
    {
        const bool branch_taken_0x3c1abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1ABCu;
        // 0x3c1ac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1abc) {
            ctx->pc = 0x3C1AC8u;
            goto label_3c1ac8;
        }
    }
    ctx->pc = 0x3C1AC4u;
    // 0x3c1ac4: 0x260600c0  addiu       $a2, $s0, 0xC0
    ctx->pc = 0x3c1ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_3c1ac8:
    // 0x3c1ac8: 0x86050084  lh          $a1, 0x84($s0)
    ctx->pc = 0x3c1ac8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3c1acc: 0xc0f0260  jal         func_3C0980
    ctx->pc = 0x3C1ACCu;
    SET_GPR_U32(ctx, 31, 0x3C1AD4u);
    ctx->pc = 0x3C1AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1ACCu;
    // 0x3c1ad0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0980u, 0x3C1ACCu, 0x3C1AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1AD4u;
label_3c1ad4:
    // 0x3c1ad4: 0x0  nop
    ctx->pc = 0x3c1ad4u;
    // NOP
label_3c1ad8:
    // 0x3c1ad8: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x3c1ad8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3c1adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c1ae0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3c1ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3c1ae4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C1AE4u;
    {
        const bool branch_taken_0x3c1ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1ae4) {
            ctx->pc = 0x3C1B10u;
            goto label_3c1b10;
        }
    }
    ctx->pc = 0x3C1AECu;
    // 0x3c1aec: 0x92020080  lbu         $v0, 0x80($s0)
    ctx->pc = 0x3c1aecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3c1af0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3c1af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3c1af4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C1AF4u;
    {
        const bool branch_taken_0x3c1af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1AF4u;
        // 0x3c1af8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1af4) {
            ctx->pc = 0x3C1B00u;
            goto label_3c1b00;
        }
    }
    ctx->pc = 0x3C1AFCu;
    // 0x3c1afc: 0x260600f0  addiu       $a2, $s0, 0xF0
    ctx->pc = 0x3c1afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_3c1b00:
    // 0x3c1b00: 0x86050084  lh          $a1, 0x84($s0)
    ctx->pc = 0x3c1b00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x3c1b04: 0xc0f0260  jal         func_3C0980
    ctx->pc = 0x3C1B04u;
    SET_GPR_U32(ctx, 31, 0x3C1B0Cu);
    ctx->pc = 0x3C1B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1B04u;
    // 0x3c1b08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0980u, 0x3C1B04u, 0x3C1B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1B0Cu;
label_3c1b0c:
    // 0x3c1b0c: 0x0  nop
    ctx->pc = 0x3c1b0cu;
    // NOP
label_3c1b10:
    // 0x3c1b10: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3c1b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3c1b14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C1B14u;
    {
        const bool branch_taken_0x3c1b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1b14) {
            ctx->pc = 0x3C1B30u;
            goto label_3c1b30;
        }
    }
    ctx->pc = 0x3C1B1Cu;
    // 0x3c1b1c: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x3c1b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x3c1b20: 0xc0f07cc  jal         func_3C1F30
    ctx->pc = 0x3C1B20u;
    SET_GPR_U32(ctx, 31, 0x3C1B28u);
    ctx->pc = 0x3C1B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1B20u;
    // 0x3c1b24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1F30u, 0x3C1B20u, 0x3C1B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1B28u;
label_3c1b28:
    // 0x3c1b28: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3c1b28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3c1b2c: 0x0  nop
    ctx->pc = 0x3c1b2cu;
    // NOP
label_3c1b30:
    // 0x3c1b30: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x3C1B30u;
    {
        const bool branch_taken_0x3c1b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B30u;
        // 0x3c1b34: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1b30) {
            ctx->pc = 0x3C1A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1a88;
        }
    }
    ctx->pc = 0x3C1B38u;
label_3c1b38:
    // 0x3c1b38: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3c1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3c1b3c: 0xc602009c  lwc1        $f2, 0x9C($s0)
    ctx->pc = 0x3c1b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c1b40: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x3c1b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x3c1b44: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x3c1b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c1b48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c1b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c1b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c1b50: 0x0  nop
    ctx->pc = 0x3c1b50u;
    // NOP
    // 0x3c1b54: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c1b54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3c1b58: 0x0  nop
    ctx->pc = 0x3c1b58u;
    // NOP
    // 0x3c1b5c: 0x0  nop
    ctx->pc = 0x3c1b5cu;
    // NOP
    // 0x3c1b60: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3C1B60u;
    SET_GPR_U32(ctx, 31, 0x3C1B68u);
    ctx->pc = 0x3C1B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1B60u;
    // 0x3c1b64: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3C1B60u, 0x3C1B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1B68u;
label_3c1b68:
    // 0x3c1b68: 0xc60c00a0  lwc1        $f12, 0xA0($s0)
    ctx->pc = 0x3c1b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c1b6c: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x3c1b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x3c1b70: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3C1B70u;
    SET_GPR_U32(ctx, 31, 0x3C1B78u);
    ctx->pc = 0x3C1B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1B70u;
    // 0x3c1b74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3C1B70u, 0x3C1B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1B78u;
label_3c1b78:
    // 0x3c1b78: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x3c1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x3c1b7c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x3c1b7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c1b80: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x3C1B80u;
    {
        const bool branch_taken_0x3c1b80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1B80u;
        // 0x3c1b84: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1b80) {
            ctx->pc = 0x3C1C08u;
            goto label_3c1c08;
        }
    }
    ctx->pc = 0x3C1B88u;
    // 0x3c1b88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c1b88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1b8c: 0x0  nop
    ctx->pc = 0x3c1b8cu;
    // NOP
label_3c1b90:
    // 0x3c1b90: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x3c1b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x3c1b94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c1b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c1b98: 0x719821  addu        $s3, $v1, $s1
    ctx->pc = 0x3c1b98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3c1b9c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x3c1b9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3c1ba0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C1BA0u;
    {
        const bool branch_taken_0x3c1ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c1ba0) {
            ctx->pc = 0x3C1BF0u;
            goto label_3c1bf0;
        }
    }
    ctx->pc = 0x3C1BA8u;
    // 0x3c1ba8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x3c1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3c1bac: 0x14500010  bne         $v0, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3C1BACu;
    {
        const bool branch_taken_0x3c1bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3c1bac) {
            ctx->pc = 0x3C1BF0u;
            goto label_3c1bf0;
        }
    }
    ctx->pc = 0x3C1BB4u;
    // 0x3c1bb4: 0x92020080  lbu         $v0, 0x80($s0)
    ctx->pc = 0x3c1bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3c1bb8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3c1bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3c1bbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C1BBCu;
    {
        const bool branch_taken_0x3c1bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BBCu;
        // 0x3c1bc0: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1bbc) {
            ctx->pc = 0x3C1BD0u;
            goto label_3c1bd0;
        }
    }
    ctx->pc = 0x3C1BC4u;
    // 0x3c1bc4: 0x26660030  addiu       $a2, $s3, 0x30
    ctx->pc = 0x3c1bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x3c1bc8: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3C1BC8u;
    SET_GPR_U32(ctx, 31, 0x3C1BD0u);
    ctx->pc = 0x3C1BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1BC8u;
    // 0x3c1bcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3C1BC8u, 0x3C1BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1BD0u;
label_3c1bd0:
    // 0x3c1bd0: 0x92020080  lbu         $v0, 0x80($s0)
    ctx->pc = 0x3c1bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x3c1bd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c1bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c1bd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C1BD8u;
    {
        const bool branch_taken_0x3c1bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BD8u;
        // 0x3c1bdc: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1bd8) {
            ctx->pc = 0x3C1BF0u;
            goto label_3c1bf0;
        }
    }
    ctx->pc = 0x3C1BE0u;
    // 0x3c1be0: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x3c1be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3c1be4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3C1BE4u;
    SET_GPR_U32(ctx, 31, 0x3C1BECu);
    ctx->pc = 0x3C1BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1BE4u;
    // 0x3c1be8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3C1BE4u, 0x3C1BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1BECu;
label_3c1bec:
    // 0x3c1bec: 0x0  nop
    ctx->pc = 0x3c1becu;
    // NOP
label_3c1bf0:
    // 0x3c1bf0: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x3c1bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x3c1bf4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3c1bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3c1bf8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3c1bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c1bfc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x3C1BFCu;
    {
        const bool branch_taken_0x3c1bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1BFCu;
        // 0x3c1c00: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1bfc) {
            ctx->pc = 0x3C1B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1b90;
        }
    }
    ctx->pc = 0x3C1C04u;
    // 0x3c1c04: 0x0  nop
    ctx->pc = 0x3c1c04u;
    // NOP
label_3c1c08:
    // 0x3c1c08: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x3c1c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x3c1c0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c1c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1c10: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3c1c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1c14: 0xc041442  jal         func_105108
    ctx->pc = 0x3C1C14u;
    SET_GPR_U32(ctx, 31, 0x3C1C1Cu);
    ctx->pc = 0x3C1C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1C14u;
    // 0x3c1c18: 0xae0000fc  sw          $zero, 0xFC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3C1C14u, 0x3C1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1C1Cu;
label_3c1c1c:
    // 0x3c1c1c: 0xc0968f0  jal         func_25A3C0
    ctx->pc = 0x3C1C1Cu;
    SET_GPR_U32(ctx, 31, 0x3C1C24u);
    ctx->pc = 0x3C1C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1C1Cu;
    // 0x3c1c20: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3C0u, 0x3C1C1Cu, 0x3C1C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1C24u;
label_3c1c24:
    // 0x3c1c24: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3c1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3c1c28: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x3c1c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c1c2c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c1c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c1c30: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x3c1c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c1c34: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3c1c34u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3c1c38: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3c1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c1c3c: 0x0  nop
    ctx->pc = 0x3c1c3cu;
    // NOP
    // 0x3c1c40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c1c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c1c44: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C1C44u;
    {
        const bool branch_taken_0x3c1c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1C44u;
        // 0x3c1c48: 0xe60000e0  swc1        $f0, 0xE0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1c44) {
            ctx->pc = 0x3C1C68u;
            goto label_3c1c68;
        }
    }
    ctx->pc = 0x3C1C4Cu;
label_3c1c4c:
    // 0x3c1c4c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3c1c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c1c50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c1c54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c1c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c1c58: 0x0  nop
    ctx->pc = 0x3c1c58u;
    // NOP
    // 0x3c1c5c: 0x0  nop
    ctx->pc = 0x3c1c5cu;
    // NOP
    // 0x3c1c60: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C1C60u;
    {
        const bool branch_taken_0x3c1c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c1c60) {
            ctx->pc = 0x3C1C4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1c4c;
        }
    }
    ctx->pc = 0x3C1C68u;
label_3c1c68:
    // 0x3c1c68: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x3c1c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x3c1c6c: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3C1C6Cu;
    SET_GPR_U32(ctx, 31, 0x3C1C74u);
    ctx->pc = 0x3C1C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1C6Cu;
    // 0x3c1c70: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3C1C6Cu, 0x3C1C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1C74u;
label_3c1c74:
    // 0x3c1c74: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3c1c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x3c1c78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3c1c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3c1c7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c1c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c1c80: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3C1C80u;
    SET_GPR_U32(ctx, 31, 0x3C1C88u);
    ctx->pc = 0x3C1C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1C80u;
    // 0x3c1c84: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3C1C80u, 0x3C1C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1C88u;
label_3c1c88:
    // 0x3c1c88: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c1c88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3c1c8c: 0xc096784  jal         func_259E10
    ctx->pc = 0x3C1C8Cu;
    SET_GPR_U32(ctx, 31, 0x3C1C94u);
    ctx->pc = 0x3C1C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1C8Cu;
    // 0x3c1c90: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x3C1C8Cu, 0x3C1C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1C94u;
label_3c1c94:
    // 0x3c1c94: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x3c1c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x3c1c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c1c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1c9c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3c1c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1ca0: 0xc041442  jal         func_105108
    ctx->pc = 0x3C1CA0u;
    SET_GPR_U32(ctx, 31, 0x3C1CA8u);
    ctx->pc = 0x3C1CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1CA0u;
    // 0x3c1ca4: 0xae0000dc  sw          $zero, 0xDC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3C1CA0u, 0x3C1CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1CA8u;
label_3c1ca8:
    // 0x3c1ca8: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x3c1ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x3c1cac: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x3c1cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x3c1cb0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3c1cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3c1cb4: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x3c1cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x3c1cb8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3c1cb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3c1cbc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x3c1cbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3c1cc0: 0x0  nop
    ctx->pc = 0x3c1cc0u;
    // NOP
    // 0x3c1cc4: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x3c1cc4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x3c1cc8: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x3c1cc8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x3c1ccc: 0xc0f0190  jal         func_3C0640
    ctx->pc = 0x3C1CCCu;
    SET_GPR_U32(ctx, 31, 0x3C1CD4u);
    ctx->pc = 0x3C1CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1CCCu;
    // 0x3c1cd0: 0x46006c06  mov.s       $f16, $f13 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0640u, 0x3C1CCCu, 0x3C1CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1CD4u;
label_3c1cd4:
    // 0x3c1cd4: 0xc0f0198  jal         func_3C0660
    ctx->pc = 0x3C1CD4u;
    SET_GPR_U32(ctx, 31, 0x3C1CDCu);
    ctx->pc = 0x3C1CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1CD4u;
    // 0x3c1cd8: 0xc60c00e0  lwc1        $f12, 0xE0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0660u, 0x3C1CD4u, 0x3C1CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1CDCu;
label_3c1cdc:
    // 0x3c1cdc: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x3c1cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x3c1ce0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c1ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c1ce4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c1ce4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c1ce8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c1ce8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c1cec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c1cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c1cf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c1cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c1cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C1CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1CF4u;
        // 0x3c1cf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1CFCu;
}
