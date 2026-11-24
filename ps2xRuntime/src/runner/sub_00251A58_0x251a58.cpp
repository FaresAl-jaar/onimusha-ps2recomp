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

// Function: sub_00251A58
// Address: 0x251a58 - 0x251ba8
void sub_00251A58_0x251a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251A58_0x251a58");
#endif

    switch (ctx->pc) {
        case 0x251a58u: goto label_251a58;
        case 0x251a5cu: goto label_251a5c;
        case 0x251a60u: goto label_251a60;
        case 0x251a64u: goto label_251a64;
        case 0x251a68u: goto label_251a68;
        case 0x251a6cu: goto label_251a6c;
        case 0x251a70u: goto label_251a70;
        case 0x251a74u: goto label_251a74;
        case 0x251a78u: goto label_251a78;
        case 0x251a7cu: goto label_251a7c;
        case 0x251a80u: goto label_251a80;
        case 0x251a84u: goto label_251a84;
        case 0x251a88u: goto label_251a88;
        case 0x251a8cu: goto label_251a8c;
        case 0x251a90u: goto label_251a90;
        case 0x251a94u: goto label_251a94;
        case 0x251a98u: goto label_251a98;
        case 0x251a9cu: goto label_251a9c;
        case 0x251aa0u: goto label_251aa0;
        case 0x251aa4u: goto label_251aa4;
        case 0x251aa8u: goto label_251aa8;
        case 0x251aacu: goto label_251aac;
        case 0x251ab0u: goto label_251ab0;
        case 0x251ab4u: goto label_251ab4;
        case 0x251ab8u: goto label_251ab8;
        case 0x251abcu: goto label_251abc;
        case 0x251ac0u: goto label_251ac0;
        case 0x251ac4u: goto label_251ac4;
        case 0x251ac8u: goto label_251ac8;
        case 0x251accu: goto label_251acc;
        case 0x251ad0u: goto label_251ad0;
        case 0x251ad4u: goto label_251ad4;
        case 0x251ad8u: goto label_251ad8;
        case 0x251adcu: goto label_251adc;
        case 0x251ae0u: goto label_251ae0;
        case 0x251ae4u: goto label_251ae4;
        case 0x251ae8u: goto label_251ae8;
        case 0x251aecu: goto label_251aec;
        case 0x251af0u: goto label_251af0;
        case 0x251af4u: goto label_251af4;
        case 0x251af8u: goto label_251af8;
        case 0x251afcu: goto label_251afc;
        case 0x251b00u: goto label_251b00;
        case 0x251b04u: goto label_251b04;
        case 0x251b08u: goto label_251b08;
        case 0x251b0cu: goto label_251b0c;
        case 0x251b10u: goto label_251b10;
        case 0x251b14u: goto label_251b14;
        case 0x251b18u: goto label_251b18;
        case 0x251b1cu: goto label_251b1c;
        case 0x251b20u: goto label_251b20;
        case 0x251b24u: goto label_251b24;
        case 0x251b28u: goto label_251b28;
        case 0x251b2cu: goto label_251b2c;
        case 0x251b30u: goto label_251b30;
        case 0x251b34u: goto label_251b34;
        case 0x251b38u: goto label_251b38;
        case 0x251b3cu: goto label_251b3c;
        case 0x251b40u: goto label_251b40;
        case 0x251b44u: goto label_251b44;
        case 0x251b48u: goto label_251b48;
        case 0x251b4cu: goto label_251b4c;
        case 0x251b50u: goto label_251b50;
        case 0x251b54u: goto label_251b54;
        case 0x251b58u: goto label_251b58;
        case 0x251b5cu: goto label_251b5c;
        case 0x251b60u: goto label_251b60;
        case 0x251b64u: goto label_251b64;
        case 0x251b68u: goto label_251b68;
        case 0x251b6cu: goto label_251b6c;
        case 0x251b70u: goto label_251b70;
        case 0x251b74u: goto label_251b74;
        case 0x251b78u: goto label_251b78;
        case 0x251b7cu: goto label_251b7c;
        case 0x251b80u: goto label_251b80;
        case 0x251b84u: goto label_251b84;
        case 0x251b88u: goto label_251b88;
        case 0x251b8cu: goto label_251b8c;
        case 0x251b90u: goto label_251b90;
        case 0x251b94u: goto label_251b94;
        case 0x251b98u: goto label_251b98;
        case 0x251b9cu: goto label_251b9c;
        case 0x251ba0u: goto label_251ba0;
        case 0x251ba4u: goto label_251ba4;
        default: break;
    }

    ctx->pc = 0x251a58u;

label_251a58:
    // 0x251a58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x251a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_251a5c:
    // 0x251a5c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x251a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_251a60:
    // 0x251a60: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x251a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_251a64:
    // 0x251a64: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x251a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_251a68:
    // 0x251a68: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x251a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_251a6c:
    // 0x251a6c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_251a70:
    if (ctx->pc == 0x251A70u) {
        ctx->pc = 0x251A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A6Cu;
        // 0x251a70: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251A74u;
        goto label_251a74;
    }
    ctx->pc = 0x251A6Cu;
    {
        const bool branch_taken_0x251a6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x251A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A6Cu;
        // 0x251a70: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a6c) {
            ctx->pc = 0x251A90u;
            goto label_251a90;
        }
    }
    ctx->pc = 0x251A74u;
label_251a74:
    // 0x251a74: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_251a78:
    // 0x251a78: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_251a7c:
    // 0x251a7c: 0x2484ed50  addiu       $a0, $a0, -0x12B0
    ctx->pc = 0x251a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962512));
label_251a80:
    // 0x251a80: 0xc0944dc  jal         func_251370
label_251a84:
    if (ctx->pc == 0x251A84u) {
        ctx->pc = 0x251A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A80u;
        // 0x251a84: 0x24a5ec80  addiu       $a1, $a1, -0x1380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251A88u;
        goto label_251a88;
    }
    ctx->pc = 0x251A80u;
    SET_GPR_U32(ctx, 31, 0x251A88u);
    ctx->pc = 0x251A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251A80u;
    // 0x251a84: 0x24a5ec80  addiu       $a1, $a1, -0x1380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251370u, 0x251A80u, 0x251A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251A88u;
label_251a88:
    // 0x251a88: 0x10000042  b           . + 4 + (0x42 << 2)
label_251a8c:
    if (ctx->pc == 0x251A8Cu) {
        ctx->pc = 0x251A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A88u;
        // 0x251a8c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251A90u;
        goto label_251a90;
    }
    ctx->pc = 0x251A88u;
    {
        const bool branch_taken_0x251a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A88u;
        // 0x251a8c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a88) {
            ctx->pc = 0x251B94u;
            goto label_251b94;
        }
    }
    ctx->pc = 0x251A90u;
label_251a90:
    // 0x251a90: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x251a90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_251a94:
    // 0x251a94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_251a98:
    if (ctx->pc == 0x251A98u) {
        ctx->pc = 0x251A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A94u;
        // 0x251a98: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251A9Cu;
        goto label_251a9c;
    }
    ctx->pc = 0x251A94u;
    {
        const bool branch_taken_0x251a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A94u;
        // 0x251a98: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a94) {
            ctx->pc = 0x251AB8u;
            goto label_251ab8;
        }
    }
    ctx->pc = 0x251A9Cu;
label_251a9c:
    // 0x251a9c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x251a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_251aa0:
    // 0x251aa0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_251aa4:
    // 0x251aa4: 0x2484ed60  addiu       $a0, $a0, -0x12A0
    ctx->pc = 0x251aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962528));
label_251aa8:
    // 0x251aa8: 0xc0944dc  jal         func_251370
label_251aac:
    if (ctx->pc == 0x251AACu) {
        ctx->pc = 0x251AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AA8u;
        // 0x251aac: 0x24a5ecb0  addiu       $a1, $a1, -0x1350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251AB0u;
        goto label_251ab0;
    }
    ctx->pc = 0x251AA8u;
    SET_GPR_U32(ctx, 31, 0x251AB0u);
    ctx->pc = 0x251AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251AA8u;
    // 0x251aac: 0x24a5ecb0  addiu       $a1, $a1, -0x1350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251370u, 0x251AA8u, 0x251AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AB0u;
label_251ab0:
    // 0x251ab0: 0x10000038  b           . + 4 + (0x38 << 2)
label_251ab4:
    if (ctx->pc == 0x251AB4u) {
        ctx->pc = 0x251AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AB0u;
        // 0x251ab4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251AB8u;
        goto label_251ab8;
    }
    ctx->pc = 0x251AB0u;
    {
        const bool branch_taken_0x251ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AB0u;
        // 0x251ab4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ab0) {
            ctx->pc = 0x251B94u;
            goto label_251b94;
        }
    }
    ctx->pc = 0x251AB8u;
label_251ab8:
    // 0x251ab8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_251abc:
    if (ctx->pc == 0x251ABCu) {
        ctx->pc = 0x251ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AB8u;
        // 0x251abc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251AC0u;
        goto label_251ac0;
    }
    ctx->pc = 0x251AB8u;
    {
        const bool branch_taken_0x251ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AB8u;
        // 0x251abc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ab8) {
            ctx->pc = 0x251AE0u;
            goto label_251ae0;
        }
    }
    ctx->pc = 0x251AC0u;
label_251ac0:
    // 0x251ac0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x251ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_251ac4:
    // 0x251ac4: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_251ac8:
    if (ctx->pc == 0x251AC8u) {
        ctx->pc = 0x251AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AC4u;
        // 0x251ac8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251ACCu;
        goto label_251acc;
    }
    ctx->pc = 0x251AC4u;
    {
        const bool branch_taken_0x251ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251ac4) {
            ctx->pc = 0x251AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251AC4u;
            // 0x251ac8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251B8Cu;
            goto label_251b8c;
        }
    }
    ctx->pc = 0x251ACCu;
label_251acc:
    // 0x251acc: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x251accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_251ad0:
    // 0x251ad0: 0x40f809  jalr        $v0
label_251ad4:
    if (ctx->pc == 0x251AD4u) {
        ctx->pc = 0x251AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AD0u;
        // 0x251ad4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251AD8u;
        goto label_251ad8;
    }
    ctx->pc = 0x251AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251AD8u);
        ctx->pc = 0x251AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AD0u;
        // 0x251ad4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251AD0u, 0x251AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251AD8u;
label_251ad8:
    // 0x251ad8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_251adc:
    if (ctx->pc == 0x251ADCu) {
        ctx->pc = 0x251ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AD8u;
        // 0x251adc: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251AE0u;
        goto label_251ae0;
    }
    ctx->pc = 0x251AD8u;
    {
        const bool branch_taken_0x251ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AD8u;
        // 0x251adc: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ad8) {
            ctx->pc = 0x251B8Cu;
            goto label_251b8c;
        }
    }
    ctx->pc = 0x251AE0u;
label_251ae0:
    // 0x251ae0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x251ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_251ae4:
    // 0x251ae4: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x251ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_251ae8:
    // 0x251ae8: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x251ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_251aec:
    // 0x251aec: 0x10e00026  beqz        $a3, . + 4 + (0x26 << 2)
label_251af0:
    if (ctx->pc == 0x251AF0u) {
        ctx->pc = 0x251AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AECu;
        // 0x251af0: 0x24f20008  addiu       $s2, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251AF4u;
        goto label_251af4;
    }
    ctx->pc = 0x251AECu;
    {
        const bool branch_taken_0x251aec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x251AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AECu;
        // 0x251af0: 0x24f20008  addiu       $s2, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251aec) {
            ctx->pc = 0x251B88u;
            goto label_251b88;
        }
    }
    ctx->pc = 0x251AF4u;
label_251af4:
    // 0x251af4: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x251af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_251af8:
    // 0x251af8: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x251af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_251afc:
    // 0x251afc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x251afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_251b00:
    // 0x251b00: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x251b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_251b04:
    // 0x251b04: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x251b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_251b08:
    // 0x251b08: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x251b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_251b0c:
    // 0x251b0c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_251b10:
    if (ctx->pc == 0x251B10u) {
        ctx->pc = 0x251B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B0Cu;
        // 0x251b10: 0x80830005  lb          $v1, 0x5($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251B14u;
        goto label_251b14;
    }
    ctx->pc = 0x251B0Cu;
    {
        const bool branch_taken_0x251b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251b0c) {
            ctx->pc = 0x251B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251B0Cu;
            // 0x251b10: 0x80830005  lb          $v1, 0x5($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251B40u;
            goto label_251b40;
        }
    }
    ctx->pc = 0x251B14u;
label_251b14:
    // 0x251b14: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x251b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_251b18:
    // 0x251b18: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x251b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_251b1c:
    // 0x251b1c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x251b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_251b20:
    // 0x251b20: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x251b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_251b24:
    // 0x251b24: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x251b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_251b28:
    // 0x251b28: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x251b28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_251b2c:
    // 0x251b2c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x251b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_251b30:
    // 0x251b30: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x251b30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_251b34:
    // 0x251b34: 0x10000016  b           . + 4 + (0x16 << 2)
label_251b38:
    if (ctx->pc == 0x251B38u) {
        ctx->pc = 0x251B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B34u;
        // 0x251b38: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251B3Cu;
        goto label_251b3c;
    }
    ctx->pc = 0x251B34u;
    {
        const bool branch_taken_0x251b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B34u;
        // 0x251b38: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b34) {
            ctx->pc = 0x251B90u;
            goto label_251b90;
        }
    }
    ctx->pc = 0x251B3Cu;
label_251b3c:
    // 0x251b3c: 0x0  nop
    ctx->pc = 0x251b3cu;
    // NOP
label_251b40:
    // 0x251b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_251b44:
    // 0x251b44: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_251b48:
    if (ctx->pc == 0x251B48u) {
        ctx->pc = 0x251B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B44u;
        // 0x251b48: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251B4Cu;
        goto label_251b4c;
    }
    ctx->pc = 0x251B44u;
    {
        const bool branch_taken_0x251b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x251b44) {
            ctx->pc = 0x251B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251B44u;
            // 0x251b48: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251B8Cu;
            goto label_251b8c;
        }
    }
    ctx->pc = 0x251B4Cu;
label_251b4c:
    // 0x251b4c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x251b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_251b50:
    // 0x251b50: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x251b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_251b54:
    // 0x251b54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x251b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_251b58:
    // 0x251b58: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x251b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_251b5c:
    // 0x251b5c: 0xc094854  jal         func_252150
label_251b60:
    if (ctx->pc == 0x251B60u) {
        ctx->pc = 0x251B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B5Cu;
        // 0x251b60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251B64u;
        goto label_251b64;
    }
    ctx->pc = 0x251B5Cu;
    SET_GPR_U32(ctx, 31, 0x251B64u);
    ctx->pc = 0x251B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251B5Cu;
    // 0x251b60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252150u, 0x251B5Cu, 0x251B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251B64u;
label_251b64:
    // 0x251b64: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x251b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_251b68:
    // 0x251b68: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x251b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_251b6c:
    // 0x251b6c: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x251b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_251b70:
    // 0x251b70: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x251b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_251b74:
    // 0x251b74: 0x6a060007  ldl         $a2, 0x7($s0)
    ctx->pc = 0x251b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_251b78:
    // 0x251b78: 0x6e060000  ldr         $a2, 0x0($s0)
    ctx->pc = 0x251b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_251b7c:
    // 0x251b7c: 0xb2460007  sdl         $a2, 0x7($s2)
    ctx->pc = 0x251b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_251b80:
    // 0x251b80: 0x10000003  b           . + 4 + (0x3 << 2)
label_251b84:
    if (ctx->pc == 0x251B84u) {
        ctx->pc = 0x251B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B80u;
        // 0x251b84: 0xb6460000  sdr         $a2, 0x0($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x251B88u;
        goto label_251b88;
    }
    ctx->pc = 0x251B80u;
    {
        const bool branch_taken_0x251b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B80u;
        // 0x251b84: 0xb6460000  sdr         $a2, 0x0($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b80) {
            ctx->pc = 0x251B90u;
            goto label_251b90;
        }
    }
    ctx->pc = 0x251B88u;
label_251b88:
    // 0x251b88: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x251b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_251b8c:
    // 0x251b8c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x251b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_251b90:
    // 0x251b90: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x251b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_251b94:
    // 0x251b94: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x251b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_251b98:
    // 0x251b98: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x251b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_251b9c:
    // 0x251b9c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x251b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_251ba0:
    // 0x251ba0: 0x3e00008  jr          $ra
label_251ba4:
    if (ctx->pc == 0x251BA4u) {
        ctx->pc = 0x251BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BA0u;
        // 0x251ba4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251BA8u;
        goto label_fallthrough_0x251ba0;
    }
    ctx->pc = 0x251BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BA0u;
        // 0x251ba4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x251ba0:
    ctx->pc = 0x251BA8u;
}
