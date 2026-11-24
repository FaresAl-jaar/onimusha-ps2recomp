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

// Function: sub_003F6000
// Address: 0x3f6000 - 0x3f6080
void sub_003F6000_0x3f6000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6000_0x3f6000");
#endif

    switch (ctx->pc) {
        case 0x3f6030u: goto label_3f6030;
        case 0x3f6064u: goto label_3f6064;
        default: break;
    }

    ctx->pc = 0x3f6000u;

    // 0x3f6000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f6000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f6004: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f6004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3f6008: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f6008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3f600c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f600cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f6010: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f6010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6014: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f6014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f6018: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f6018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f601c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3f601cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3f6020: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f6020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6024: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x3f6024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x3f6028: 0xc05e360  jal         func_178D80
    ctx->pc = 0x3F6028u;
    SET_GPR_U32(ctx, 31, 0x3F6030u);
    ctx->pc = 0x3F602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6028u;
    // 0x3f602c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x3F6028u, 0x3F6030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6030u;
label_3f6030:
    // 0x3f6030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f6030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6034: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x3F6034u;
    {
        const bool branch_taken_0x3f6034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6034) {
            ctx->pc = 0x3F6068u;
            goto label_3f6068;
        }
    }
    ctx->pc = 0x3F603Cu;
    // 0x3f603c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3f603cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3f6040: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3f6040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3f6044: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3f6044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3f6048: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x3f6048u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3f604c: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x3f604cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x3f6050: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x3f6050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x3f6054: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x3f6054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3f6058: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3f6058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3f605c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x3F605Cu;
    SET_GPR_U32(ctx, 31, 0x3F6064u);
    ctx->pc = 0x3F6060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F605Cu;
    // 0x3f6060: 0xfcb00008  sd          $s0, 0x8($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x3F605Cu, 0x3F6064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6064u;
label_3f6064:
    // 0x3f6064: 0x0  nop
    ctx->pc = 0x3f6064u;
    // NOP
label_3f6068:
    // 0x3f6068: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f6068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f606c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f606cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f6070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f6070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f6074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f6074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f6078: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6078u;
        // 0x3f607c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6080u;
}
