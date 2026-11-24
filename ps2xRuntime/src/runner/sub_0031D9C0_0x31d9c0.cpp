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

// Function: sub_0031D9C0
// Address: 0x31d9c0 - 0x31daac
void sub_0031D9C0_0x31d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D9C0_0x31d9c0");
#endif

    switch (ctx->pc) {
        case 0x31da18u: goto label_31da18;
        case 0x31da28u: goto label_31da28;
        case 0x31da78u: goto label_31da78;
        default: break;
    }

    ctx->pc = 0x31d9c0u;

    // 0x31d9c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31d9c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x31d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x31d9c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31d9cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31d9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31d9d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31d9d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d9d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31d9d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31d9d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d9dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31d9e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31d9e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d9e4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x31d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x31d9e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D9E8u;
    {
        const bool branch_taken_0x31d9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9E8u;
        // 0x31d9ec: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9e8) {
            ctx->pc = 0x31D9F8u;
            goto label_31d9f8;
        }
    }
    ctx->pc = 0x31D9F0u;
    // 0x31d9f0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x31D9F0u;
    {
        const bool branch_taken_0x31d9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9F0u;
        // 0x31d9f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9f0) {
            ctx->pc = 0x31DA90u;
            goto label_31da90;
        }
    }
    ctx->pc = 0x31D9F8u;
label_31d9f8:
    // 0x31d9f8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D9F8u;
    {
        const bool branch_taken_0x31d9f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9F8u;
        // 0x31d9fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d9f8) {
            ctx->pc = 0x31DA08u;
            goto label_31da08;
        }
    }
    ctx->pc = 0x31DA00u;
    // 0x31da00: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x31DA00u;
    {
        const bool branch_taken_0x31da00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31da00) {
            ctx->pc = 0x31DA90u;
            goto label_31da90;
        }
    }
    ctx->pc = 0x31DA08u;
label_31da08:
    // 0x31da08: 0x1620001f  bnez        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x31DA08u;
    {
        const bool branch_taken_0x31da08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA08u;
        // 0x31da0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da08) {
            ctx->pc = 0x31DA88u;
            goto label_31da88;
        }
    }
    ctx->pc = 0x31DA10u;
    // 0x31da10: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x31DA10u;
    {
        const bool branch_taken_0x31da10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31da10) {
            ctx->pc = 0x31DA90u;
            goto label_31da90;
        }
    }
    ctx->pc = 0x31DA18u;
label_31da18:
    // 0x31da18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31da18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31da1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31da1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31da20: 0xc0c7650  jal         func_31D940
    ctx->pc = 0x31DA20u;
    SET_GPR_U32(ctx, 31, 0x31DA28u);
    ctx->pc = 0x31DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DA20u;
    // 0x31da24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D940u, 0x31DA20u, 0x31DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DA28u;
label_31da28:
    // 0x31da28: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x31DA28u;
    {
        const bool branch_taken_0x31da28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x31da28) {
            ctx->pc = 0x31DA38u;
            goto label_31da38;
        }
    }
    ctx->pc = 0x31DA30u;
    // 0x31da30: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x31DA30u;
    {
        const bool branch_taken_0x31da30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31da30) {
            ctx->pc = 0x31DA90u;
            goto label_31da90;
        }
    }
    ctx->pc = 0x31DA38u;
label_31da38:
    // 0x31da38: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x31da38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31da3c: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x31DA3Cu;
    {
        const bool branch_taken_0x31da3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31da3c) {
            ctx->pc = 0x31DA70u;
            goto label_31da70;
        }
    }
    ctx->pc = 0x31DA44u;
    // 0x31da44: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x31da44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x31da48: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x31da48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x31da4c: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x31da4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x31da50: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x31da50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x31da54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31da54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31da58: 0x8063000e  lb          $v1, 0xE($v1)
    ctx->pc = 0x31da58u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x31da5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31da5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31da60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31DA60u;
    {
        const bool branch_taken_0x31da60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA60u;
        // 0x31da64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da60) {
            ctx->pc = 0x31DA80u;
            goto label_31da80;
        }
    }
    ctx->pc = 0x31DA68u;
    // 0x31da68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31DA68u;
    {
        const bool branch_taken_0x31da68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31da68) {
            ctx->pc = 0x31DA90u;
            goto label_31da90;
        }
    }
    ctx->pc = 0x31DA70u;
label_31da70:
    // 0x31da70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31da70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31da74: 0x0  nop
    ctx->pc = 0x31da74u;
    // NOP
label_31da78:
    // 0x31da78: 0x1651ffe7  bne         $s2, $s1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x31DA78u;
    {
        const bool branch_taken_0x31da78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x31da78) {
            ctx->pc = 0x31DA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31da18;
        }
    }
    ctx->pc = 0x31DA80u;
label_31da80:
    // 0x31da80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31DA80u;
    {
        const bool branch_taken_0x31da80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA80u;
        // 0x31da84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da80) {
            ctx->pc = 0x31DA90u;
            goto label_31da90;
        }
    }
    ctx->pc = 0x31DA88u;
label_31da88:
    // 0x31da88: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x31DA88u;
    {
        const bool branch_taken_0x31da88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31da88) {
            ctx->pc = 0x31DA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31da78;
        }
    }
    ctx->pc = 0x31DA90u;
label_31da90:
    // 0x31da90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31da90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31da94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31da94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31da98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31da98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31da9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31da9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31daa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31daa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31daa4: 0x3e00008  jr          $ra
    ctx->pc = 0x31DAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAA4u;
        // 0x31daa8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DAACu;
}
