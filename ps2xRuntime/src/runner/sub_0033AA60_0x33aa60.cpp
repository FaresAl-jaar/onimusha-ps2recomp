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

// Function: sub_0033AA60
// Address: 0x33aa60 - 0x33aae4
void sub_0033AA60_0x33aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AA60_0x33aa60");
#endif

    switch (ctx->pc) {
        case 0x33aab8u: goto label_33aab8;
        case 0x33aad0u: goto label_33aad0;
        default: break;
    }

    ctx->pc = 0x33aa60u;

    // 0x33aa60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33aa64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33aa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33aa68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33aa6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33aa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33aa70: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x33aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x33aa74: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x33AA74u;
    {
        const bool branch_taken_0x33aa74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA74u;
        // 0x33aa78: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aa74) {
            ctx->pc = 0x33AAD0u;
            goto label_33aad0;
        }
    }
    ctx->pc = 0x33AA7Cu;
    // 0x33aa7c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x33aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x33aa80: 0x3c022f00  lui         $v0, 0x2F00
    ctx->pc = 0x33aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12032 << 16));
    // 0x33aa84: 0x34450700  ori         $a1, $v0, 0x700
    ctx->pc = 0x33aa84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1792);
    // 0x33aa88: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x33aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x33aa8c: 0x34420500  ori         $v0, $v0, 0x500
    ctx->pc = 0x33aa8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x33aa90: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x33aa90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33aa94: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x33aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x33aa98: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x33aa98u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x33aa9c: 0x38140  sll         $s0, $v1, 5
    ctx->pc = 0x33aa9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x33aaa0: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x33aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x33aaa4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x33aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x33aaa8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x33aaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33aaac: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x33aaacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33aab0: 0xc0c9a00  jal         func_326800
    ctx->pc = 0x33AAB0u;
    SET_GPR_U32(ctx, 31, 0x33AAB8u);
    ctx->pc = 0x33AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AAB0u;
    // 0x33aab4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326800u, 0x33AAB0u, 0x33AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AAB8u;
label_33aab8:
    // 0x33aab8: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x33aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x33aabc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x33aac0: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x33aac0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x33aac4: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x33aac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x33aac8: 0xc0ce438  jal         func_3390E0
    ctx->pc = 0x33AAC8u;
    SET_GPR_U32(ctx, 31, 0x33AAD0u);
    ctx->pc = 0x33AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AAC8u;
    // 0x33aacc: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3390E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3390E0u, 0x33AAC8u, 0x33AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AAD0u;
label_33aad0:
    // 0x33aad0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33aad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33aad4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33aad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33aad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33aad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33aadc: 0x3e00008  jr          $ra
    ctx->pc = 0x33AADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AADCu;
        // 0x33aae0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AAE4u;
}
