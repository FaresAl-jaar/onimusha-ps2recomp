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

// Function: sub_00232C10
// Address: 0x232c10 - 0x232cbc
void sub_00232C10_0x232c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232C10_0x232c10");
#endif

    switch (ctx->pc) {
        case 0x232c10u: goto label_232c10;
        case 0x232c14u: goto label_232c14;
        case 0x232c18u: goto label_232c18;
        case 0x232c1cu: goto label_232c1c;
        case 0x232c20u: goto label_232c20;
        case 0x232c24u: goto label_232c24;
        case 0x232c28u: goto label_232c28;
        case 0x232c2cu: goto label_232c2c;
        case 0x232c30u: goto label_232c30;
        case 0x232c34u: goto label_232c34;
        case 0x232c38u: goto label_232c38;
        case 0x232c3cu: goto label_232c3c;
        case 0x232c40u: goto label_232c40;
        case 0x232c44u: goto label_232c44;
        case 0x232c48u: goto label_232c48;
        case 0x232c4cu: goto label_232c4c;
        case 0x232c50u: goto label_232c50;
        case 0x232c54u: goto label_232c54;
        case 0x232c58u: goto label_232c58;
        case 0x232c5cu: goto label_232c5c;
        case 0x232c60u: goto label_232c60;
        case 0x232c64u: goto label_232c64;
        case 0x232c68u: goto label_232c68;
        case 0x232c6cu: goto label_232c6c;
        case 0x232c70u: goto label_232c70;
        case 0x232c74u: goto label_232c74;
        case 0x232c78u: goto label_232c78;
        case 0x232c7cu: goto label_232c7c;
        case 0x232c80u: goto label_232c80;
        case 0x232c84u: goto label_232c84;
        case 0x232c88u: goto label_232c88;
        case 0x232c8cu: goto label_232c8c;
        case 0x232c90u: goto label_232c90;
        case 0x232c94u: goto label_232c94;
        case 0x232c98u: goto label_232c98;
        case 0x232c9cu: goto label_232c9c;
        case 0x232ca0u: goto label_232ca0;
        case 0x232ca4u: goto label_232ca4;
        case 0x232ca8u: goto label_232ca8;
        case 0x232cacu: goto label_232cac;
        case 0x232cb0u: goto label_232cb0;
        case 0x232cb4u: goto label_232cb4;
        case 0x232cb8u: goto label_232cb8;
        default: break;
    }

    ctx->pc = 0x232c10u;

label_232c10:
    // 0x232c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_232c14:
    // 0x232c14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_232c18:
    // 0x232c18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232c1c:
    // 0x232c1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_232c20:
    // 0x232c20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x232c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_232c24:
    // 0x232c24: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_232c28:
    if (ctx->pc == 0x232C28u) {
        ctx->pc = 0x232C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C24u;
        // 0x232c28: 0x8e110094  lw          $s1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232C2Cu;
        goto label_232c2c;
    }
    ctx->pc = 0x232C24u;
    {
        const bool branch_taken_0x232c24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x232C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C24u;
        // 0x232c28: 0x8e110094  lw          $s1, 0x94($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c24) {
            ctx->pc = 0x232C48u;
            goto label_232c48;
        }
    }
    ctx->pc = 0x232C2Cu;
label_232c2c:
    // 0x232c2c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x232c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_232c30:
    // 0x232c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_232c34:
    // 0x232c34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_232c38:
    // 0x232c38: 0x2484ac50  addiu       $a0, $a0, -0x53B0
    ctx->pc = 0x232c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945872));
label_232c3c:
    // 0x232c3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232c40:
    // 0x232c40: 0x808baa4  j           func_22EA90
label_232c44:
    if (ctx->pc == 0x232C44u) {
        ctx->pc = 0x232C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C40u;
        // 0x232c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232C48u;
        goto label_232c48;
    }
    ctx->pc = 0x232C40u;
    ctx->pc = 0x232C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C40u;
    // 0x232c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x232C48u;
label_232c48:
    // 0x232c48: 0xc08e6c0  jal         func_239B00
label_232c4c:
    if (ctx->pc == 0x232C4Cu) {
        ctx->pc = 0x232C50u;
        goto label_232c50;
    }
    ctx->pc = 0x232C48u;
    SET_GPR_U32(ctx, 31, 0x232C50u);
    ctx->pc = 0x239B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B00u, 0x232C48u, 0x232C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C50u;
label_232c50:
    // 0x232c50: 0xc08b528  jal         func_22D4A0
label_232c54:
    if (ctx->pc == 0x232C54u) {
        ctx->pc = 0x232C58u;
        goto label_232c58;
    }
    ctx->pc = 0x232C50u;
    SET_GPR_U32(ctx, 31, 0x232C58u);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x232C50u, 0x232C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C58u;
label_232c58:
    // 0x232c58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x232c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_232c5c:
    // 0x232c5c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x232c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_232c60:
    // 0x232c60: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x232c60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_232c64:
    // 0x232c64: 0xc08e618  jal         func_239860
label_232c68:
    if (ctx->pc == 0x232C68u) {
        ctx->pc = 0x232C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C64u;
        // 0x232c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232C6Cu;
        goto label_232c6c;
    }
    ctx->pc = 0x232C64u;
    SET_GPR_U32(ctx, 31, 0x232C6Cu);
    ctx->pc = 0x232C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C64u;
    // 0x232c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239860u, 0x232C64u, 0x232C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C6Cu;
label_232c6c:
    // 0x232c6c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x232c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_232c70:
    // 0x232c70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x232c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_232c74:
    // 0x232c74: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x232c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_232c78:
    // 0x232c78: 0x40f809  jalr        $v0
label_232c7c:
    if (ctx->pc == 0x232C7Cu) {
        ctx->pc = 0x232C80u;
        goto label_232c80;
    }
    ctx->pc = 0x232C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232C80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232C78u, 0x232C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232C80u;
label_232c80:
    // 0x232c80: 0x8605003e  lh          $a1, 0x3E($s0)
    ctx->pc = 0x232c80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_232c84:
    // 0x232c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232c88:
    // 0x232c88: 0xc092f70  jal         func_24BDC0
label_232c8c:
    if (ctx->pc == 0x232C8Cu) {
        ctx->pc = 0x232C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C88u;
        // 0x232c8c: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232C90u;
        goto label_232c90;
    }
    ctx->pc = 0x232C88u;
    SET_GPR_U32(ctx, 31, 0x232C90u);
    ctx->pc = 0x232C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C88u;
    // 0x232c8c: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BDC0u, 0x232C88u, 0x232C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C90u;
label_232c90:
    // 0x232c90: 0xc08b52e  jal         func_22D4B8
label_232c94:
    if (ctx->pc == 0x232C94u) {
        ctx->pc = 0x232C98u;
        goto label_232c98;
    }
    ctx->pc = 0x232C90u;
    SET_GPR_U32(ctx, 31, 0x232C98u);
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x232C90u, 0x232C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C98u;
label_232c98:
    // 0x232c98: 0xc092dc8  jal         func_24B720
label_232c9c:
    if (ctx->pc == 0x232C9Cu) {
        ctx->pc = 0x232C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C98u;
        // 0x232c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232CA0u;
        goto label_232ca0;
    }
    ctx->pc = 0x232C98u;
    SET_GPR_U32(ctx, 31, 0x232CA0u);
    ctx->pc = 0x232C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C98u;
    // 0x232c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B720u, 0x232C98u, 0x232CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CA0u;
label_232ca0:
    // 0x232ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232ca4:
    // 0x232ca4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_232ca8:
    // 0x232ca8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x232ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232cac:
    // 0x232cac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_232cb0:
    // 0x232cb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x232cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232cb4:
    // 0x232cb4: 0x808efaa  j           func_23BEA8
label_232cb8:
    if (ctx->pc == 0x232CB8u) {
        ctx->pc = 0x232CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CB4u;
        // 0x232cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232CBCu;
        goto label_fallthrough_0x232cb4;
    }
    ctx->pc = 0x232CB4u;
    ctx->pc = 0x232CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232CB4u;
    // 0x232cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BEA8u;
    sub_0023BEA8_0x23bea8(rdram, ctx, runtime); return;
label_fallthrough_0x232cb4:
    ctx->pc = 0x232CBCu;
}
