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

// Function: sub_003E8A20
// Address: 0x3e8a20 - 0x3e8b6c
void sub_003E8A20_0x3e8a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8A20_0x3e8a20");
#endif

    switch (ctx->pc) {
        case 0x3e8aa8u: goto label_3e8aa8;
        case 0x3e8af4u: goto label_3e8af4;
        case 0x3e8b08u: goto label_3e8b08;
        case 0x3e8b44u: goto label_3e8b44;
        case 0x3e8b58u: goto label_3e8b58;
        default: break;
    }

    ctx->pc = 0x3e8a20u;

    // 0x3e8a20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e8a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3e8a24: 0x24033003  addiu       $v1, $zero, 0x3003
    ctx->pc = 0x3e8a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12291));
    // 0x3e8a28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e8a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e8a2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e8a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e8a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e8a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8a34: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8A34u;
    {
        const bool branch_taken_0x3e8a34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8A34u;
        // 0x3e8a38: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8a34) {
            ctx->pc = 0x3E8A48u;
            goto label_3e8a48;
        }
    }
    ctx->pc = 0x3E8A3Cu;
    // 0x3e8a3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3E8A3Cu;
    {
        const bool branch_taken_0x3e8a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8A3Cu;
        // 0x3e8a40: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8a3c) {
            ctx->pc = 0x3E8A68u;
            goto label_3e8a68;
        }
    }
    ctx->pc = 0x3E8A44u;
    // 0x3e8a44: 0x0  nop
    ctx->pc = 0x3e8a44u;
    // NOP
label_3e8a48:
    // 0x3e8a48: 0x24033004  addiu       $v1, $zero, 0x3004
    ctx->pc = 0x3e8a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12292));
    // 0x3e8a4c: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8A4Cu;
    {
        const bool branch_taken_0x3e8a4c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E8A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8A4Cu;
        // 0x3e8a50: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8a4c) {
            ctx->pc = 0x3E8A60u;
            goto label_3e8a60;
        }
    }
    ctx->pc = 0x3E8A54u;
    // 0x3e8a54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8A54u;
    {
        const bool branch_taken_0x3e8a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8a54) {
            ctx->pc = 0x3E8A68u;
            goto label_3e8a68;
        }
    }
    ctx->pc = 0x3E8A5Cu;
    // 0x3e8a5c: 0x0  nop
    ctx->pc = 0x3e8a5cu;
    // NOP
label_3e8a60:
    // 0x3e8a60: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3E8A60u;
    {
        const bool branch_taken_0x3e8a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8a60) {
            ctx->pc = 0x3E8B58u;
            goto label_3e8b58;
        }
    }
    ctx->pc = 0x3E8A68u;
label_3e8a68:
    // 0x3e8a68: 0x26220100  addiu       $v0, $s1, 0x100
    ctx->pc = 0x3e8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x3e8a6c: 0x3044001f  andi        $a0, $v0, 0x1F
    ctx->pc = 0x3e8a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x3e8a70: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x3e8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x3e8a74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3e8a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e8a78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3e8a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3e8a7c: 0x822006  srlv        $a0, $v0, $a0
    ctx->pc = 0x3e8a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x3e8a80: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x3e8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x3e8a84: 0x803027  not         $a2, $a0
    ctx->pc = 0x3e8a84u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x3e8a88: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x3e8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x3e8a8c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x3e8a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x3e8a90: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e8a94: 0x2484ea90  addiu       $a0, $a0, -0x1570
    ctx->pc = 0x3e8a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    // 0x3e8a98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e8a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e8a9c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3e8a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3e8aa0: 0xc0c8a14  jal         func_322850
    ctx->pc = 0x3E8AA0u;
    SET_GPR_U32(ctx, 31, 0x3E8AA8u);
    ctx->pc = 0x3E8AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8AA0u;
    // 0x3e8aa4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322850u, 0x3E8AA0u, 0x3E8AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8AA8u;
label_3e8aa8:
    // 0x3e8aa8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3E8AA8u;
    {
        const bool branch_taken_0x3e8aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8aa8) {
            ctx->pc = 0x3E8B58u;
            goto label_3e8b58;
        }
    }
    ctx->pc = 0x3E8AB0u;
    // 0x3e8ab0: 0x8c50004c  lw          $s0, 0x4C($v0)
    ctx->pc = 0x3e8ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3e8ab4: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3E8AB4u;
    {
        const bool branch_taken_0x3e8ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8ab4) {
            ctx->pc = 0x3E8B58u;
            goto label_3e8b58;
        }
    }
    ctx->pc = 0x3E8ABCu;
    // 0x3e8abc: 0x8f838060  lw          $v1, -0x7FA0($gp)
    ctx->pc = 0x3e8abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x3e8ac0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E8AC0u;
    {
        const bool branch_taken_0x3e8ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8ac0) {
            ctx->pc = 0x3E8B08u;
            goto label_3e8b08;
        }
    }
    ctx->pc = 0x3E8AC8u;
    // 0x3e8ac8: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x3e8ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3e8acc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3e8accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e8ad0: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x3e8ad0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e8ad4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3e8ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3e8ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8adc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3e8adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e8ae0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3e8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e8ae4: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x3e8ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x3e8ae8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3e8ae8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e8aec: 0xc0c8068  jal         func_3201A0
    ctx->pc = 0x3E8AECu;
    SET_GPR_U32(ctx, 31, 0x3E8AF4u);
    ctx->pc = 0x3E8AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8AECu;
    // 0x3e8af0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3201A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3201A0u, 0x3E8AECu, 0x3E8AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8AF4u;
label_3e8af4:
    // 0x3e8af4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8AF4u;
    {
        const bool branch_taken_0x3e8af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8AF4u;
        // 0x3e8af8: 0x3c040081  lui         $a0, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8af4) {
            ctx->pc = 0x3E8B08u;
            goto label_3e8b08;
        }
    }
    ctx->pc = 0x3E8AFCu;
    // 0x3e8afc: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x3e8afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x3e8b00: 0xc056e04  jal         func_15B810
    ctx->pc = 0x3E8B00u;
    SET_GPR_U32(ctx, 31, 0x3E8B08u);
    ctx->pc = 0x3E8B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8B00u;
    // 0x3e8b04: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x3E8B00u, 0x3E8B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8B08u;
label_3e8b08:
    // 0x3e8b08: 0x8f838064  lw          $v1, -0x7F9C($gp)
    ctx->pc = 0x3e8b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x3e8b0c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E8B0Cu;
    {
        const bool branch_taken_0x3e8b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8b0c) {
            ctx->pc = 0x3E8B58u;
            goto label_3e8b58;
        }
    }
    ctx->pc = 0x3E8B14u;
    // 0x3e8b14: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x3e8b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3e8b18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e8b18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8b1c: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x3e8b1cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e8b20: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3e8b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e8b24: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3e8b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3e8b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8b2c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3e8b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e8b30: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3e8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e8b34: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x3e8b34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x3e8b38: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3e8b38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e8b3c: 0xc0c8068  jal         func_3201A0
    ctx->pc = 0x3E8B3Cu;
    SET_GPR_U32(ctx, 31, 0x3E8B44u);
    ctx->pc = 0x3E8B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8B3Cu;
    // 0x3e8b40: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3201A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3201A0u, 0x3E8B3Cu, 0x3E8B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8B44u;
label_3e8b44:
    // 0x3e8b44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8B44u;
    {
        const bool branch_taken_0x3e8b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B44u;
        // 0x3e8b48: 0x3c040081  lui         $a0, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8b44) {
            ctx->pc = 0x3E8B58u;
            goto label_3e8b58;
        }
    }
    ctx->pc = 0x3E8B4Cu;
    // 0x3e8b4c: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x3e8b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x3e8b50: 0xc056e04  jal         func_15B810
    ctx->pc = 0x3E8B50u;
    SET_GPR_U32(ctx, 31, 0x3E8B58u);
    ctx->pc = 0x3E8B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8B50u;
    // 0x3e8b54: 0x24840fe0  addiu       $a0, $a0, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x3E8B50u, 0x3E8B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8B58u;
label_3e8b58:
    // 0x3e8b58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e8b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e8b5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e8b5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8b60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e8b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8b64: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B64u;
        // 0x3e8b68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8B6Cu;
}
