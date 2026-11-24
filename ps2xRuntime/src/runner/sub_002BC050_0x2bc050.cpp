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

// Function: sub_002BC050
// Address: 0x2bc050 - 0x2bc10c
void sub_002BC050_0x2bc050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC050_0x2bc050");
#endif

    switch (ctx->pc) {
        case 0x2bc070u: goto label_2bc070;
        case 0x2bc094u: goto label_2bc094;
        case 0x2bc0f4u: goto label_2bc0f4;
        default: break;
    }

    ctx->pc = 0x2bc050u;

    // 0x2bc050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bc050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bc054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bc054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bc058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bc05c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc060: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2bc060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc064: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x2bc064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2bc068: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2BC068u;
    SET_GPR_U32(ctx, 31, 0x2BC070u);
    ctx->pc = 0x2BC06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC068u;
    // 0x2bc06c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2BC068u, 0x2BC070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC070u;
label_2bc070:
    // 0x2bc070: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC070u;
    {
        const bool branch_taken_0x2bc070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc070) {
            ctx->pc = 0x2BC088u;
            goto label_2bc088;
        }
    }
    ctx->pc = 0x2BC078u;
    // 0x2bc078: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x2bc078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    // 0x2bc07c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2BC07Cu;
    {
        const bool branch_taken_0x2bc07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC07Cu;
        // 0x2bc080: 0xae0007c0  sw          $zero, 0x7C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1984), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc07c) {
            ctx->pc = 0x2BC0D8u;
            goto label_2bc0d8;
        }
    }
    ctx->pc = 0x2BC084u;
    // 0x2bc084: 0x0  nop
    ctx->pc = 0x2bc084u;
    // NOP
label_2bc088:
    // 0x2bc088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bc088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc08c: 0xc0b222c  jal         func_2C88B0
    ctx->pc = 0x2BC08Cu;
    SET_GPR_U32(ctx, 31, 0x2BC094u);
    ctx->pc = 0x2BC090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC08Cu;
    // 0x2bc090: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C88B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C88B0u, 0x2BC08Cu, 0x2BC094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC094u;
label_2bc094:
    // 0x2bc094: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BC094u;
    {
        const bool branch_taken_0x2bc094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc094) {
            ctx->pc = 0x2BC0F8u;
            goto label_2bc0f8;
        }
    }
    ctx->pc = 0x2BC09Cu;
    // 0x2bc09c: 0xde050500  ld          $a1, 0x500($s0)
    ctx->pc = 0x2bc09cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x2bc0a0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2bc0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2bc0a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bc0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc0a8: 0x24637740  addiu       $v1, $v1, 0x7740
    ctx->pc = 0x2bc0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30528));
    // 0x2bc0ac: 0x34a50460  ori         $a1, $a1, 0x460
    ctx->pc = 0x2bc0acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1120);
    // 0x2bc0b0: 0xfe050500  sd          $a1, 0x500($s0)
    ctx->pc = 0x2bc0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 5));
    // 0x2bc0b4: 0xa20404ee  sb          $a0, 0x4EE($s0)
    ctx->pc = 0x2bc0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1262), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bc0b8: 0x9224005e  lbu         $a0, 0x5E($s1)
    ctx->pc = 0x2bc0b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 94)));
    // 0x2bc0bc: 0x2484fffb  addiu       $a0, $a0, -0x5
    ctx->pc = 0x2bc0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x2bc0c0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2bc0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2bc0c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2bc0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2bc0c8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2bc0c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc0cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2BC0CCu;
    {
        const bool branch_taken_0x2bc0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC0CCu;
        // 0x2bc0d0: 0xa60304ea  sh          $v1, 0x4EA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1258), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc0cc) {
            ctx->pc = 0x2BC0F8u;
            goto label_2bc0f8;
        }
    }
    ctx->pc = 0x2BC0D4u;
    // 0x2bc0d4: 0x0  nop
    ctx->pc = 0x2bc0d4u;
    // NOP
label_2bc0d8:
    // 0x2bc0d8: 0xa20004ee  sb          $zero, 0x4EE($s0)
    ctx->pc = 0x2bc0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1262), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bc0dc: 0xde020500  ld          $v0, 0x500($s0)
    ctx->pc = 0x2bc0dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x2bc0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bc0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bc0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0e8: 0x34420801  ori         $v0, $v0, 0x801
    ctx->pc = 0x2bc0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2049);
    // 0x2bc0ec: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2BC0ECu;
    SET_GPR_U32(ctx, 31, 0x2BC0F4u);
    ctx->pc = 0x2BC0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC0ECu;
    // 0x2bc0f0: 0xfe020500  sd          $v0, 0x500($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 1280), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2BC0ECu, 0x2BC0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC0F4u;
label_2bc0f4:
    // 0x2bc0f4: 0x0  nop
    ctx->pc = 0x2bc0f4u;
    // NOP
label_2bc0f8:
    // 0x2bc0f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bc0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc0fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bc0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc104: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC104u;
        // 0x2bc108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC10Cu;
}
