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

// Function: sub_001FAC70
// Address: 0x1fac70 - 0x1fad20
void sub_001FAC70_0x1fac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAC70_0x1fac70");
#endif

    switch (ctx->pc) {
        case 0x1facb8u: goto label_1facb8;
        case 0x1facd0u: goto label_1facd0;
        default: break;
    }

    ctx->pc = 0x1fac70u;

    // 0x1fac70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fac70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fac74: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1fac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fac78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fac7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fac7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fac80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fac84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fac84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fac8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1fac8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fac90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fac90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1fac94: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAC94u;
    {
        const bool branch_taken_0x1fac94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FAC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC94u;
        // 0x1fac98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac94) {
            ctx->pc = 0x1FACA8u;
            goto label_1faca8;
        }
    }
    ctx->pc = 0x1FAC9Cu;
    // 0x1fac9c: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAC9Cu;
    {
        const bool branch_taken_0x1fac9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAC9Cu;
        // 0x1faca0: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac9c) {
            ctx->pc = 0x1FACA8u;
            goto label_1faca8;
        }
    }
    ctx->pc = 0x1FACA4u;
    // 0x1faca4: 0x24514f18  addiu       $s1, $v0, 0x4F18
    ctx->pc = 0x1faca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20248));
label_1faca8:
    // 0x1faca8: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FACA8u;
    {
        const bool branch_taken_0x1faca8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1faca8) {
            ctx->pc = 0x1FACC8u;
            goto label_1facc8;
        }
    }
    ctx->pc = 0x1FACB0u;
    // 0x1facb0: 0xc07eb48  jal         func_1FAD20
    ctx->pc = 0x1FACB0u;
    SET_GPR_U32(ctx, 31, 0x1FACB8u);
    ctx->pc = 0x1FACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FACB0u;
    // 0x1facb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD20u, 0x1FACB0u, 0x1FACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACB8u;
label_1facb8:
    // 0x1facb8: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x1facb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x1facbc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FACBCu;
    {
        const bool branch_taken_0x1facbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACBCu;
        // 0x1facc0: 0x24443ee0  addiu       $a0, $v0, 0x3EE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1facbc) {
            ctx->pc = 0x1FACFCu;
            goto label_1facfc;
        }
    }
    ctx->pc = 0x1FACC4u;
    // 0x1facc4: 0x0  nop
    ctx->pc = 0x1facc4u;
    // NOP
label_1facc8:
    // 0x1facc8: 0xc07eb5e  jal         func_1FAD78
    ctx->pc = 0x1FACC8u;
    SET_GPR_U32(ctx, 31, 0x1FACD0u);
    ctx->pc = 0x1FACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FACC8u;
    // 0x1faccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD78u, 0x1FACC8u, 0x1FACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACD0u;
label_1facd0:
    // 0x1facd0: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1facd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1facd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FACD4u;
    {
        const bool branch_taken_0x1facd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FACD4u;
        // 0x1facd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1facd4) {
            ctx->pc = 0x1FACF8u;
            goto label_1facf8;
        }
    }
    ctx->pc = 0x1FACDCu;
    // 0x1facdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1facdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1face0: 0x34a50202  ori         $a1, $a1, 0x202
    ctx->pc = 0x1face0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)514);
    // 0x1face4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1face4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1face8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1face8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1facec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1facecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1facf0: 0x807d4a8  j           func_1F52A0
    ctx->pc = 0x1FACF0u;
    ctx->pc = 0x1FACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FACF0u;
    // 0x1facf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    sub_001F52A0_0x1f52a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1FACF8u;
label_1facf8:
    // 0x1facf8: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1facf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1facfc:
    // 0x1facfc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1facfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1fad00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fad00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fad04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fad08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fad08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fad0c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1fad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1fad10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fad10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fad14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fad14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fad18: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD18u;
        // 0x1fad1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAD20u;
}
