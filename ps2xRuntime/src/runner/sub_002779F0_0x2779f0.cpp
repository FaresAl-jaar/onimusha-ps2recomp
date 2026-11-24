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

// Function: sub_002779F0
// Address: 0x2779f0 - 0x277bec
void sub_002779F0_0x2779f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002779F0_0x2779f0");
#endif

    switch (ctx->pc) {
        case 0x277a4cu: goto label_277a4c;
        case 0x277a70u: goto label_277a70;
        case 0x277ac8u: goto label_277ac8;
        case 0x277ae8u: goto label_277ae8;
        case 0x277b08u: goto label_277b08;
        case 0x277b28u: goto label_277b28;
        case 0x277b48u: goto label_277b48;
        case 0x277b68u: goto label_277b68;
        case 0x277b88u: goto label_277b88;
        case 0x277ba8u: goto label_277ba8;
        case 0x277bc8u: goto label_277bc8;
        default: break;
    }

    ctx->pc = 0x2779f0u;

    // 0x2779f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2779f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2779f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2779f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2779f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2779f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2779fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2779fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x277a00: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x277a00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x277a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x277a08: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x277a08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x277a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x277a10: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x277a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x277a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x277a18: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x277a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x277a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x277a20: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x277a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277a24: 0x93a20080  lbu         $v0, 0x80($sp)
    ctx->pc = 0x277a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x277a28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x277A28u;
    {
        const bool branch_taken_0x277a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A28u;
        // 0x277a2c: 0x160802d  daddu       $s0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a28) {
            ctx->pc = 0x277A58u;
            goto label_277a58;
        }
    }
    ctx->pc = 0x277A30u;
    // 0x277a30: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x277a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x277a34: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x277a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x277a38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x277a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277a3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x277a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x277a40: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x277a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x277a44: 0xc0975a8  jal         func_25D6A0
    ctx->pc = 0x277A44u;
    SET_GPR_U32(ctx, 31, 0x277A4Cu);
    ctx->pc = 0x277A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277A44u;
    // 0x277a48: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D6A0u, 0x277A44u, 0x277A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A4Cu;
label_277a4c:
    // 0x277a4c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x277A4Cu;
    {
        const bool branch_taken_0x277a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277a4c) {
            ctx->pc = 0x277BC8u;
            goto label_277bc8;
        }
    }
    ctx->pc = 0x277A54u;
    // 0x277a54: 0x0  nop
    ctx->pc = 0x277a54u;
    // NOP
label_277a58:
    // 0x277a58: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x277a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x277a5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x277a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x277a60: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x277a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x277a64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x277a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x277a68: 0xc0975cc  jal         func_25D730
    ctx->pc = 0x277A68u;
    SET_GPR_U32(ctx, 31, 0x277A70u);
    ctx->pc = 0x277A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277A68u;
    // 0x277a6c: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D730u, 0x277A68u, 0x277A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277A70u;
label_277a70:
    // 0x277a70: 0x93a40078  lbu         $a0, 0x78($sp)
    ctx->pc = 0x277a70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x277a74: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x277a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x277a78: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x277a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x277a7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x277a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x277a80: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x277a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x277a84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x277a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x277a88: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x277a88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x277a8c: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x277A8Cu;
    {
        const bool branch_taken_0x277a8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x277A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277A8Cu;
        // 0x277a90: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277a8c) {
            ctx->pc = 0x277BC8u;
            goto label_277bc8;
        }
    }
    ctx->pc = 0x277A94u;
    // 0x277a94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x277a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x277a98: 0x24846070  addiu       $a0, $a0, 0x6070
    ctx->pc = 0x277a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
    // 0x277a9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x277a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x277aa0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x277aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x277aa4: 0x600008  jr          $v1
    ctx->pc = 0x277AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277AB0u: goto label_277ab0;
            case 0x277AD0u: goto label_277ad0;
            case 0x277AF0u: goto label_277af0;
            case 0x277B10u: goto label_277b10;
            case 0x277B30u: goto label_277b30;
            case 0x277B50u: goto label_277b50;
            case 0x277B70u: goto label_277b70;
            case 0x277B90u: goto label_277b90;
            case 0x277BB0u: goto label_277bb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277AA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x277AACu;
    // 0x277aac: 0x0  nop
    ctx->pc = 0x277aacu;
    // NOP
label_277ab0:
    // 0x277ab0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ab4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x277ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ab8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x277ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277abc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x277abcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ac0: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x277AC0u;
    SET_GPR_U32(ctx, 31, 0x277AC8u);
    ctx->pc = 0x277AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277AC0u;
    // 0x277ac4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x277AC0u, 0x277AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277AC8u;
label_277ac8:
    // 0x277ac8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x277AC8u;
    {
        const bool branch_taken_0x277ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277ac8) {
            ctx->pc = 0x277BC8u;
            goto label_277bc8;
        }
    }
    ctx->pc = 0x277AD0u;
label_277ad0:
    // 0x277ad0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ad4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x277ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ad8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x277ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277adc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x277adcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ae0: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x277AE0u;
    SET_GPR_U32(ctx, 31, 0x277AE8u);
    ctx->pc = 0x277AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277AE0u;
    // 0x277ae4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x277AE0u, 0x277AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277AE8u;
label_277ae8:
    // 0x277ae8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x277AE8u;
    {
        const bool branch_taken_0x277ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277ae8) {
            ctx->pc = 0x277BC8u;
            goto label_277bc8;
        }
    }
    ctx->pc = 0x277AF0u;
label_277af0:
    // 0x277af0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277af4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x277af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277af8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x277af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277afc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x277afcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b00: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x277B00u;
    SET_GPR_U32(ctx, 31, 0x277B08u);
    ctx->pc = 0x277B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277B00u;
    // 0x277b04: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x277B00u, 0x277B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B08u;
label_277b08:
    // 0x277b08: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x277B08u;
    {
        const bool branch_taken_0x277b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277b08) {
            ctx->pc = 0x277BC8u;
            goto label_277bc8;
        }
    }
    ctx->pc = 0x277B10u;
label_277b10:
    // 0x277b10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x277b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b18: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x277b18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b1c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x277b1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b20: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x277B20u;
    SET_GPR_U32(ctx, 31, 0x277B28u);
    ctx->pc = 0x277B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277B20u;
    // 0x277b24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x277B20u, 0x277B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B28u;
label_277b28:
    // 0x277b28: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x277B28u;
    {
        const bool branch_taken_0x277b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277b28) {
            ctx->pc = 0x277BC8u;
            goto label_277bc8;
        }
    }
    ctx->pc = 0x277B30u;
label_277b30:
    // 0x277b30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x277b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b38: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x277b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b3c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x277b3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b40: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x277B40u;
    SET_GPR_U32(ctx, 31, 0x277B48u);
    ctx->pc = 0x277B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277B40u;
    // 0x277b44: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x277B40u, 0x277B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B48u;
label_277b48:
    // 0x277b48: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x277B48u;
    {
        const bool branch_taken_0x277b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277b48) {
            ctx->pc = 0x277BC8u;
            goto label_277bc8;
        }
    }
    ctx->pc = 0x277B50u;
label_277b50:
    // 0x277b50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x277b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b58: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x277b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b5c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x277b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b60: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x277B60u;
    SET_GPR_U32(ctx, 31, 0x277B68u);
    ctx->pc = 0x277B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277B60u;
    // 0x277b64: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x277B60u, 0x277B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B68u;
label_277b68:
    // 0x277b68: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x277B68u;
    {
        const bool branch_taken_0x277b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277b68) {
            ctx->pc = 0x277BC8u;
            goto label_277bc8;
        }
    }
    ctx->pc = 0x277B70u;
label_277b70:
    // 0x277b70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x277b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b78: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x277b78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b7c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x277b7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b80: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x277B80u;
    SET_GPR_U32(ctx, 31, 0x277B88u);
    ctx->pc = 0x277B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277B80u;
    // 0x277b84: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x277B80u, 0x277B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B88u;
label_277b88:
    // 0x277b88: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x277B88u;
    {
        const bool branch_taken_0x277b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277b88) {
            ctx->pc = 0x277BC8u;
            goto label_277bc8;
        }
    }
    ctx->pc = 0x277B90u;
label_277b90:
    // 0x277b90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x277b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b98: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x277b98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277b9c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x277b9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277ba0: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x277BA0u;
    SET_GPR_U32(ctx, 31, 0x277BA8u);
    ctx->pc = 0x277BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277BA0u;
    // 0x277ba4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x277BA0u, 0x277BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BA8u;
label_277ba8:
    // 0x277ba8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x277BA8u;
    {
        const bool branch_taken_0x277ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277ba8) {
            ctx->pc = 0x277BC8u;
            goto label_277bc8;
        }
    }
    ctx->pc = 0x277BB0u;
label_277bb0:
    // 0x277bb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x277bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bb8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x277bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bbc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x277bbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277bc0: 0xc0aa590  jal         func_2A9640
    ctx->pc = 0x277BC0u;
    SET_GPR_U32(ctx, 31, 0x277BC8u);
    ctx->pc = 0x277BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277BC0u;
    // 0x277bc4: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9640u, 0x277BC0u, 0x277BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BC8u;
label_277bc8:
    // 0x277bc8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x277bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x277bcc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x277bccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277bd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x277bd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277bd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x277bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277bd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x277bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277bdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x277bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277be4: 0x3e00008  jr          $ra
    ctx->pc = 0x277BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BE4u;
        // 0x277be8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277BECu;
}
