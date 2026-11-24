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

// Function: sub_00220A98
// Address: 0x220a98 - 0x220b90
void sub_00220A98_0x220a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220A98_0x220a98");
#endif

    switch (ctx->pc) {
        case 0x220a98u: goto label_220a98;
        case 0x220a9cu: goto label_220a9c;
        case 0x220aa0u: goto label_220aa0;
        case 0x220aa4u: goto label_220aa4;
        case 0x220aa8u: goto label_220aa8;
        case 0x220aacu: goto label_220aac;
        case 0x220ab0u: goto label_220ab0;
        case 0x220ab4u: goto label_220ab4;
        case 0x220ab8u: goto label_220ab8;
        case 0x220abcu: goto label_220abc;
        case 0x220ac0u: goto label_220ac0;
        case 0x220ac4u: goto label_220ac4;
        case 0x220ac8u: goto label_220ac8;
        case 0x220accu: goto label_220acc;
        case 0x220ad0u: goto label_220ad0;
        case 0x220ad4u: goto label_220ad4;
        case 0x220ad8u: goto label_220ad8;
        case 0x220adcu: goto label_220adc;
        case 0x220ae0u: goto label_220ae0;
        case 0x220ae4u: goto label_220ae4;
        case 0x220ae8u: goto label_220ae8;
        case 0x220aecu: goto label_220aec;
        case 0x220af0u: goto label_220af0;
        case 0x220af4u: goto label_220af4;
        case 0x220af8u: goto label_220af8;
        case 0x220afcu: goto label_220afc;
        case 0x220b00u: goto label_220b00;
        case 0x220b04u: goto label_220b04;
        case 0x220b08u: goto label_220b08;
        case 0x220b0cu: goto label_220b0c;
        case 0x220b10u: goto label_220b10;
        case 0x220b14u: goto label_220b14;
        case 0x220b18u: goto label_220b18;
        case 0x220b1cu: goto label_220b1c;
        case 0x220b20u: goto label_220b20;
        case 0x220b24u: goto label_220b24;
        case 0x220b28u: goto label_220b28;
        case 0x220b2cu: goto label_220b2c;
        case 0x220b30u: goto label_220b30;
        case 0x220b34u: goto label_220b34;
        case 0x220b38u: goto label_220b38;
        case 0x220b3cu: goto label_220b3c;
        case 0x220b40u: goto label_220b40;
        case 0x220b44u: goto label_220b44;
        case 0x220b48u: goto label_220b48;
        case 0x220b4cu: goto label_220b4c;
        case 0x220b50u: goto label_220b50;
        case 0x220b54u: goto label_220b54;
        case 0x220b58u: goto label_220b58;
        case 0x220b5cu: goto label_220b5c;
        case 0x220b60u: goto label_220b60;
        case 0x220b64u: goto label_220b64;
        case 0x220b68u: goto label_220b68;
        case 0x220b6cu: goto label_220b6c;
        case 0x220b70u: goto label_220b70;
        case 0x220b74u: goto label_220b74;
        case 0x220b78u: goto label_220b78;
        case 0x220b7cu: goto label_220b7c;
        case 0x220b80u: goto label_220b80;
        case 0x220b84u: goto label_220b84;
        case 0x220b88u: goto label_220b88;
        case 0x220b8cu: goto label_220b8c;
        default: break;
    }

    ctx->pc = 0x220a98u;

label_220a98:
    // 0x220a98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x220a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_220a9c:
    // 0x220a9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x220a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_220aa0:
    // 0x220aa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x220aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_220aa4:
    // 0x220aa4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x220aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_220aa8:
    // 0x220aa8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x220aa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_220aac:
    // 0x220aac: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x220aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_220ab0:
    // 0x220ab0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x220ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_220ab4:
    // 0x220ab4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x220ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_220ab8:
    // 0x220ab8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x220ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_220abc:
    // 0x220abc: 0xc0882e4  jal         func_220B90
label_220ac0:
    if (ctx->pc == 0x220AC0u) {
        ctx->pc = 0x220AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220ABCu;
        // 0x220ac0: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220AC4u;
        goto label_220ac4;
    }
    ctx->pc = 0x220ABCu;
    SET_GPR_U32(ctx, 31, 0x220AC4u);
    ctx->pc = 0x220AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220ABCu;
    // 0x220ac0: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220B90u, 0x220ABCu, 0x220AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AC4u;
label_220ac4:
    // 0x220ac4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_220ac8:
    if (ctx->pc == 0x220AC8u) {
        ctx->pc = 0x220AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AC4u;
        // 0x220ac8: 0x26300d30  addiu       $s0, $s1, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220ACCu;
        goto label_220acc;
    }
    ctx->pc = 0x220AC4u;
    {
        const bool branch_taken_0x220ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AC4u;
        // 0x220ac8: 0x26300d30  addiu       $s0, $s1, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ac4) {
            ctx->pc = 0x220B70u;
            goto label_220b70;
        }
    }
    ctx->pc = 0x220ACCu;
label_220acc:
    // 0x220acc: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x220accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_220ad0:
    // 0x220ad0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_220ad4:
    if (ctx->pc == 0x220AD4u) {
        ctx->pc = 0x220AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AD0u;
        // 0x220ad4: 0x8e0402e8  lw          $a0, 0x2E8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220AD8u;
        goto label_220ad8;
    }
    ctx->pc = 0x220AD0u;
    {
        const bool branch_taken_0x220ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220ad0) {
            ctx->pc = 0x220AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220AD0u;
            // 0x220ad4: 0x8e0402e8  lw          $a0, 0x2E8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220AF0u;
            goto label_220af0;
        }
    }
    ctx->pc = 0x220AD8u;
label_220ad8:
    // 0x220ad8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x220ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_220adc:
    // 0x220adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x220adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220ae0:
    // 0x220ae0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x220ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_220ae4:
    // 0x220ae4: 0x10000021  b           . + 4 + (0x21 << 2)
label_220ae8:
    if (ctx->pc == 0x220AE8u) {
        ctx->pc = 0x220AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AE4u;
        // 0x220ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220AECu;
        goto label_220aec;
    }
    ctx->pc = 0x220AE4u;
    {
        const bool branch_taken_0x220ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AE4u;
        // 0x220ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ae4) {
            ctx->pc = 0x220B6Cu;
            goto label_220b6c;
        }
    }
    ctx->pc = 0x220AECu;
label_220aec:
    // 0x220aec: 0x0  nop
    ctx->pc = 0x220aecu;
    // NOP
label_220af0:
    // 0x220af0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x220af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_220af4:
    // 0x220af4: 0x40f809  jalr        $v0
label_220af8:
    if (ctx->pc == 0x220AF8u) {
        ctx->pc = 0x220AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AF4u;
        // 0x220af8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220AFCu;
        goto label_220afc;
    }
    ctx->pc = 0x220AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220AFCu);
        ctx->pc = 0x220AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AF4u;
        // 0x220af8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220AF4u, 0x220AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x220AFCu;
label_220afc:
    // 0x220afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220b00:
    // 0x220b00: 0xc088100  jal         func_220400
label_220b04:
    if (ctx->pc == 0x220B04u) {
        ctx->pc = 0x220B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B00u;
        // 0x220b04: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B08u;
        goto label_220b08;
    }
    ctx->pc = 0x220B00u;
    SET_GPR_U32(ctx, 31, 0x220B08u);
    ctx->pc = 0x220B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220B00u;
    // 0x220b04: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220400u, 0x220B00u, 0x220B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B08u;
label_220b08:
    // 0x220b08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_220b0c:
    if (ctx->pc == 0x220B0Cu) {
        ctx->pc = 0x220B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B08u;
        // 0x220b0c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B10u;
        goto label_220b10;
    }
    ctx->pc = 0x220B08u;
    {
        const bool branch_taken_0x220b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B08u;
        // 0x220b0c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b08) {
            ctx->pc = 0x220B50u;
            goto label_220b50;
        }
    }
    ctx->pc = 0x220B10u;
label_220b10:
    // 0x220b10: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x220b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_220b14:
    // 0x220b14: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x220b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_220b18:
    // 0x220b18: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_220b1c:
    if (ctx->pc == 0x220B1Cu) {
        ctx->pc = 0x220B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B18u;
        // 0x220b1c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B20u;
        goto label_220b20;
    }
    ctx->pc = 0x220B18u;
    {
        const bool branch_taken_0x220b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x220B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B18u;
        // 0x220b1c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b18) {
            ctx->pc = 0x220B54u;
            goto label_220b54;
        }
    }
    ctx->pc = 0x220B20u;
label_220b20:
    // 0x220b20: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x220b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_220b24:
    // 0x220b24: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x220b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_220b28:
    // 0x220b28: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_220b2c:
    if (ctx->pc == 0x220B2Cu) {
        ctx->pc = 0x220B30u;
        goto label_220b30;
    }
    ctx->pc = 0x220B28u;
    {
        const bool branch_taken_0x220b28 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x220b28) {
            ctx->pc = 0x220B3Cu;
            goto label_220b3c;
        }
    }
    ctx->pc = 0x220B30u;
label_220b30:
    // 0x220b30: 0x8e0202e4  lw          $v0, 0x2E4($s0)
    ctx->pc = 0x220b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_220b34:
    // 0x220b34: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x220b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_220b38:
    // 0x220b38: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x220b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_220b3c:
    // 0x220b3c: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x220b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_220b40:
    // 0x220b40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_220b44:
    // 0x220b44: 0xae0202dc  sw          $v0, 0x2DC($s0)
    ctx->pc = 0x220b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
label_220b48:
    // 0x220b48: 0x10000002  b           . + 4 + (0x2 << 2)
label_220b4c:
    if (ctx->pc == 0x220B4Cu) {
        ctx->pc = 0x220B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B48u;
        // 0x220b4c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B50u;
        goto label_220b50;
    }
    ctx->pc = 0x220B48u;
    {
        const bool branch_taken_0x220b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B48u;
        // 0x220b4c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b48) {
            ctx->pc = 0x220B54u;
            goto label_220b54;
        }
    }
    ctx->pc = 0x220B50u;
label_220b50:
    // 0x220b50: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x220b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_220b54:
    // 0x220b54: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x220b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220b58:
    // 0x220b58: 0xae0402d8  sw          $a0, 0x2D8($s0)
    ctx->pc = 0x220b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 4));
label_220b5c:
    // 0x220b5c: 0xae0302e0  sw          $v1, 0x2E0($s0)
    ctx->pc = 0x220b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 3));
label_220b60:
    // 0x220b60: 0x8e0402dc  lw          $a0, 0x2DC($s0)
    ctx->pc = 0x220b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_220b64:
    // 0x220b64: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x220b64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_220b68:
    // 0x220b68: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x220b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_220b6c:
    // 0x220b6c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x220b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_220b70:
    // 0x220b70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x220b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_220b74:
    // 0x220b74: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x220b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_220b78:
    // 0x220b78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x220b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_220b7c:
    // 0x220b7c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x220b7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_220b80:
    // 0x220b80: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x220b80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_220b84:
    // 0x220b84: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x220b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_220b88:
    // 0x220b88: 0x3e00008  jr          $ra
label_220b8c:
    if (ctx->pc == 0x220B8Cu) {
        ctx->pc = 0x220B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B88u;
        // 0x220b8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220B90u;
        goto label_fallthrough_0x220b88;
    }
    ctx->pc = 0x220B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B88u;
        // 0x220b8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x220b88:
    ctx->pc = 0x220B90u;
}
