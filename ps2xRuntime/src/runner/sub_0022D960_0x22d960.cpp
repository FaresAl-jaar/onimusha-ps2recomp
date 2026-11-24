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

// Function: sub_0022D960
// Address: 0x22d960 - 0x22da94
void sub_0022D960_0x22d960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D960_0x22d960");
#endif

    switch (ctx->pc) {
        case 0x22d994u: goto label_22d994;
        default: break;
    }

    ctx->pc = 0x22d960u;

    // 0x22d960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22d960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22d964: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22d964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22d968: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22d968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d96c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22d96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22d970: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22d970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d974: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22d974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d978: 0x27a70001  addiu       $a3, $sp, 0x1
    ctx->pc = 0x22d978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x22d97c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22d97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22d980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22d980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d984: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22d984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22d988: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22d988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22d98c: 0xc08b63a  jal         func_22D8E8
    ctx->pc = 0x22D98Cu;
    SET_GPR_U32(ctx, 31, 0x22D994u);
    ctx->pc = 0x22D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D98Cu;
    // 0x22d990: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8E8u, 0x22D98Cu, 0x22D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D994u;
label_22d994:
    // 0x22d994: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x22D994u;
    {
        const bool branch_taken_0x22d994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D994u;
        // 0x22d998: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d994) {
            ctx->pc = 0x22DA78u;
            goto label_22da78;
        }
    }
    ctx->pc = 0x22D99Cu;
    // 0x22d99c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x22d99cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d9a0: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x22d9a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x22d9a4: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x22D9A4u;
    {
        const bool branch_taken_0x22d9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d9a4) {
            ctx->pc = 0x22D9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D9A4u;
            // 0x22d9a8: 0xa6600002  sh          $zero, 0x2($s3) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DA68u;
            goto label_22da68;
        }
    }
    ctx->pc = 0x22D9ACu;
    // 0x22d9ac: 0x2a230020  slti        $v1, $s1, 0x20
    ctx->pc = 0x22d9acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x22d9b0: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x22D9B0u;
    {
        const bool branch_taken_0x22d9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9B0u;
        // 0x22d9b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9b0) {
            ctx->pc = 0x22DA78u;
            goto label_22da78;
        }
    }
    ctx->pc = 0x22D9B8u;
    // 0x22d9b8: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x22d9b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22d9bc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22d9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x22d9c0: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x22d9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x22d9c4: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x22d9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22d9c8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x22d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x22d9cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22d9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22d9d0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x22d9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x22d9d4: 0x14650028  bne         $v1, $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x22D9D4u;
    {
        const bool branch_taken_0x22d9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x22D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9D4u;
        // 0x22d9d8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9d4) {
            ctx->pc = 0x22DA78u;
            goto label_22da78;
        }
    }
    ctx->pc = 0x22D9DCu;
    // 0x22d9dc: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x22d9dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x22d9e0: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x22d9e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x22d9e4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x22d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x22d9e8: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x22d9e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x22d9ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x22d9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x22d9f0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x22d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x22d9f4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x22d9f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x22d9f8: 0x2863001c  slti        $v1, $v1, 0x1C
    ctx->pc = 0x22d9f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x22d9fc: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x22D9FCu;
    {
        const bool branch_taken_0x22d9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D9FCu;
        // 0x22da00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d9fc) {
            ctx->pc = 0x22DA78u;
            goto label_22da78;
        }
    }
    ctx->pc = 0x22DA04u;
    // 0x22da04: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x22da04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x22da08: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x22da08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x22da0c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x22da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x22da10: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x22da10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x22da14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22da14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22da18: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x22da18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x22da1c: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x22da1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x22da20: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x22da20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22da24: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x22da24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x22da28: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x22da28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x22da2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22da2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22da30: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x22da30u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x22da34: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x22da34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x22da38: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x22da38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x22da3c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x22da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x22da40: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x22da40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x22da44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22da44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22da48: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x22da48u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x22da4c: 0x9603001e  lhu         $v1, 0x1E($s0)
    ctx->pc = 0x22da4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x22da50: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x22da50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x22da54: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x22da54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x22da58: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x22da58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x22da5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22da5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22da60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22DA60u;
    {
        const bool branch_taken_0x22da60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA60u;
        // 0x22da64: 0xa6630002  sh          $v1, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da60) {
            ctx->pc = 0x22DA74u;
            goto label_22da74;
        }
    }
    ctx->pc = 0x22DA68u;
label_22da68:
    // 0x22da68: 0xa6400002  sh          $zero, 0x2($s2)
    ctx->pc = 0x22da68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x22da6c: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x22da6cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x22da70: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x22da70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
label_22da74:
    // 0x22da74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22da74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22da78:
    // 0x22da78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22da78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22da7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22da7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22da80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22da80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22da84: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22da84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22da88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22da88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22da8c: 0x3e00008  jr          $ra
    ctx->pc = 0x22DA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DA8Cu;
        // 0x22da90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DA94u;
}
