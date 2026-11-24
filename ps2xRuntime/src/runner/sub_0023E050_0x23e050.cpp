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

// Function: sub_0023E050
// Address: 0x23e050 - 0x23e0e8
void sub_0023E050_0x23e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E050_0x23e050");
#endif

    switch (ctx->pc) {
        case 0x23e074u: goto label_23e074;
        case 0x23e0b0u: goto label_23e0b0;
        case 0x23e0c4u: goto label_23e0c4;
        case 0x23e0d8u: goto label_23e0d8;
        default: break;
    }

    ctx->pc = 0x23e050u;

    // 0x23e050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23e050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23e054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23e054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23e058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23e058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e05c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23e05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23e060: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23e060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23e064: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x23E064u;
    {
        const bool branch_taken_0x23e064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e064) {
            ctx->pc = 0x23E068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E064u;
            // 0x23e068: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E0DCu;
            goto label_23e0dc;
        }
    }
    ctx->pc = 0x23E06Cu;
    // 0x23e06c: 0xc08e730  jal         func_239CC0
    ctx->pc = 0x23E06Cu;
    SET_GPR_U32(ctx, 31, 0x23E074u);
    ctx->pc = 0x239CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CC0u, 0x23E06Cu, 0x23E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E074u;
label_23e074:
    // 0x23e074: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x23E074u;
    {
        const bool branch_taken_0x23e074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e074) {
            ctx->pc = 0x23E078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E074u;
            // 0x23e078: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E0DCu;
            goto label_23e0dc;
        }
    }
    ctx->pc = 0x23E07Cu;
    // 0x23e07c: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x23e07cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x23e080: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x23e080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x23e084: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x23E084u;
    {
        const bool branch_taken_0x23e084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e084) {
            ctx->pc = 0x23E088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E084u;
            // 0x23e088: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E0DCu;
            goto label_23e0dc;
        }
    }
    ctx->pc = 0x23E08Cu;
    // 0x23e08c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23e090: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x23e090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x23e094: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23e094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e098: 0x8c63b920  lw          $v1, -0x46E0($v1)
    ctx->pc = 0x23e098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949152)));
    // 0x23e09c: 0x600008  jr          $v1
    ctx->pc = 0x23E09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23E0A8u: goto label_23e0a8;
            case 0x23E0D0u: goto label_23e0d0;
            case 0x23E0D8u: goto label_23e0d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E09Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23E0A4u;
    // 0x23e0a4: 0x0  nop
    ctx->pc = 0x23e0a4u;
    // NOP
label_23e0a8:
    // 0x23e0a8: 0xc08dd84  jal         func_237610
    ctx->pc = 0x23E0A8u;
    SET_GPR_U32(ctx, 31, 0x23E0B0u);
    ctx->pc = 0x23E0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E0A8u;
    // 0x23e0ac: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237610u, 0x23E0A8u, 0x23E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E0B0u;
label_23e0b0:
    // 0x23e0b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23e0b4: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E0B4u;
    {
        const bool branch_taken_0x23e0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23e0b4) {
            ctx->pc = 0x23E0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E0B4u;
            // 0x23e0b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E0DCu;
            goto label_23e0dc;
        }
    }
    ctx->pc = 0x23E0BCu;
    // 0x23e0bc: 0xc08d6d8  jal         func_235B60
    ctx->pc = 0x23E0BCu;
    SET_GPR_U32(ctx, 31, 0x23E0C4u);
    ctx->pc = 0x23E0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E0BCu;
    // 0x23e0c0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235B60u, 0x23E0BCu, 0x23E0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E0C4u;
label_23e0c4:
    // 0x23e0c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23E0C4u;
    {
        const bool branch_taken_0x23e0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0C4u;
        // 0x23e0c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e0c4) {
            ctx->pc = 0x23E0DCu;
            goto label_23e0dc;
        }
    }
    ctx->pc = 0x23E0CCu;
    // 0x23e0cc: 0x0  nop
    ctx->pc = 0x23e0ccu;
    // NOP
label_23e0d0:
    // 0x23e0d0: 0xc08d6d8  jal         func_235B60
    ctx->pc = 0x23E0D0u;
    SET_GPR_U32(ctx, 31, 0x23E0D8u);
    ctx->pc = 0x23E0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E0D0u;
    // 0x23e0d4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235B60u, 0x23E0D0u, 0x23E0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E0D8u;
label_23e0d8:
    // 0x23e0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23e0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23e0dc:
    // 0x23e0dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23e0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23e0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x23E0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E0E0u;
        // 0x23e0e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E0E8u;
}
