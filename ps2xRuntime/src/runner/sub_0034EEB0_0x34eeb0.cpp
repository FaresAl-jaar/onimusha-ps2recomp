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

// Function: sub_0034EEB0
// Address: 0x34eeb0 - 0x34ef84
void sub_0034EEB0_0x34eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EEB0_0x34eeb0");
#endif

    switch (ctx->pc) {
        case 0x34eec0u: goto label_34eec0;
        default: break;
    }

    ctx->pc = 0x34eeb0u;

    // 0x34eeb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34eeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34eeb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34eeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34eeb8: 0xc0d343c  jal         func_34D0F0
    ctx->pc = 0x34EEB8u;
    SET_GPR_U32(ctx, 31, 0x34EEC0u);
    ctx->pc = 0x34EEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EEB8u;
    // 0x34eebc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D0F0u, 0x34EEB8u, 0x34EEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EEC0u;
label_34eec0:
    // 0x34eec0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x34eec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34eec4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x34eec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34eec8: 0x2442ffe3  addiu       $v0, $v0, -0x1D
    ctx->pc = 0x34eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967267));
    // 0x34eecc: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x34eeccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x34eed0: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x34EED0u;
    {
        const bool branch_taken_0x34eed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EED0u;
        // 0x34eed4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eed0) {
            ctx->pc = 0x34EF70u;
            goto label_34ef70;
        }
    }
    ctx->pc = 0x34EED8u;
    // 0x34eed8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34eedc: 0x2463f6f0  addiu       $v1, $v1, -0x910
    ctx->pc = 0x34eedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964976));
    // 0x34eee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34eee4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34eee8: 0x400008  jr          $v0
    ctx->pc = 0x34EEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x34EEF0u: goto label_34eef0;
            case 0x34EF08u: goto label_34ef08;
            case 0x34EF20u: goto label_34ef20;
            case 0x34EF38u: goto label_34ef38;
            case 0x34EF50u: goto label_34ef50;
            case 0x34EF60u: goto label_34ef60;
            case 0x34EF70u: goto label_34ef70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EEE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x34EEF0u;
label_34eef0:
    // 0x34eef0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34eef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34eef4: 0x2443004b  addiu       $v1, $v0, 0x4B
    ctx->pc = 0x34eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 75));
    // 0x34eef8: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34eefc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x34EEFCu;
    {
        const bool branch_taken_0x34eefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EEFCu;
        // 0x34ef00: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eefc) {
            ctx->pc = 0x34EF78u;
            goto label_34ef78;
        }
    }
    ctx->pc = 0x34EF04u;
    // 0x34ef04: 0x0  nop
    ctx->pc = 0x34ef04u;
    // NOP
label_34ef08:
    // 0x34ef08: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34ef08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34ef0c: 0x24430050  addiu       $v1, $v0, 0x50
    ctx->pc = 0x34ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x34ef10: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34ef14: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x34EF14u;
    {
        const bool branch_taken_0x34ef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EF14u;
        // 0x34ef18: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ef14) {
            ctx->pc = 0x34EF78u;
            goto label_34ef78;
        }
    }
    ctx->pc = 0x34EF1Cu;
    // 0x34ef1c: 0x0  nop
    ctx->pc = 0x34ef1cu;
    // NOP
label_34ef20:
    // 0x34ef20: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34ef20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34ef24: 0x24430055  addiu       $v1, $v0, 0x55
    ctx->pc = 0x34ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x34ef28: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34ef2c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x34EF2Cu;
    {
        const bool branch_taken_0x34ef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EF2Cu;
        // 0x34ef30: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ef2c) {
            ctx->pc = 0x34EF78u;
            goto label_34ef78;
        }
    }
    ctx->pc = 0x34EF34u;
    // 0x34ef34: 0x0  nop
    ctx->pc = 0x34ef34u;
    // NOP
label_34ef38:
    // 0x34ef38: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34ef38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34ef3c: 0x2443005a  addiu       $v1, $v0, 0x5A
    ctx->pc = 0x34ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x34ef40: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34ef44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34EF44u;
    {
        const bool branch_taken_0x34ef44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EF44u;
        // 0x34ef48: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ef44) {
            ctx->pc = 0x34EF78u;
            goto label_34ef78;
        }
    }
    ctx->pc = 0x34EF4Cu;
    // 0x34ef4c: 0x0  nop
    ctx->pc = 0x34ef4cu;
    // NOP
label_34ef50:
    // 0x34ef50: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34ef54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34EF54u;
    {
        const bool branch_taken_0x34ef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EF54u;
        // 0x34ef58: 0x3442005f  ori         $v0, $v0, 0x5F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)95);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ef54) {
            ctx->pc = 0x34EF78u;
            goto label_34ef78;
        }
    }
    ctx->pc = 0x34EF5Cu;
    // 0x34ef5c: 0x0  nop
    ctx->pc = 0x34ef5cu;
    // NOP
label_34ef60:
    // 0x34ef60: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34ef64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34EF64u;
    {
        const bool branch_taken_0x34ef64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EF64u;
        // 0x34ef68: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ef64) {
            ctx->pc = 0x34EF78u;
            goto label_34ef78;
        }
    }
    ctx->pc = 0x34EF6Cu;
    // 0x34ef6c: 0x0  nop
    ctx->pc = 0x34ef6cu;
    // NOP
label_34ef70:
    // 0x34ef70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34ef70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ef74: 0x0  nop
    ctx->pc = 0x34ef74u;
    // NOP
label_34ef78:
    // 0x34ef78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34ef78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ef7c: 0x3e00008  jr          $ra
    ctx->pc = 0x34EF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EF7Cu;
        // 0x34ef80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34EF84u;
}
