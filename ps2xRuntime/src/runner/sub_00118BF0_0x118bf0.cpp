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

// Function: sub_00118BF0
// Address: 0x118bf0 - 0x118c80
void sub_00118BF0_0x118bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118BF0_0x118bf0");
#endif

    switch (ctx->pc) {
        case 0x118c04u: goto label_118c04;
        case 0x118c30u: goto label_118c30;
        case 0x118c38u: goto label_118c38;
        case 0x118c4cu: goto label_118c4c;
        case 0x118c54u: goto label_118c54;
        case 0x118c5cu: goto label_118c5c;
        case 0x118c6cu: goto label_118c6c;
        default: break;
    }

    ctx->pc = 0x118bf0u;

    // 0x118bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118bf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118bfc: 0xc046028  jal         func_1180A0
    ctx->pc = 0x118BFCu;
    SET_GPR_U32(ctx, 31, 0x118C04u);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x118BFCu, 0x118C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C04u;
label_118c04:
    // 0x118c04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x118c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118c08: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x118c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x118c0c: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x118c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x118c10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x118c10u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x118c14: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x118c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x118c18: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x118C18u;
    {
        const bool branch_taken_0x118c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x118c18) {
            ctx->pc = 0x118C38u;
            goto label_118c38;
        }
    }
    ctx->pc = 0x118C20u;
    // 0x118c20: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x118C20u;
    {
        const bool branch_taken_0x118c20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C20u;
        // 0x118c24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c20) {
            ctx->pc = 0x118C70u;
            goto label_118c70;
        }
    }
    ctx->pc = 0x118C28u;
    // 0x118c28: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x118C28u;
    SET_GPR_U32(ctx, 31, 0x118C30u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x118C28u, 0x118C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C30u;
label_118c30:
    // 0x118c30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x118C30u;
    {
        const bool branch_taken_0x118c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C30u;
        // 0x118c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c30) {
            ctx->pc = 0x118C70u;
            goto label_118c70;
        }
    }
    ctx->pc = 0x118C38u;
label_118c38:
    // 0x118c38: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x118c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x118c3c: 0x3484f3ff  ori         $a0, $a0, 0xF3FF
    ctx->pc = 0x118c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62463);
    // 0x118c40: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x118c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x118c44: 0xc046264  jal         func_118990
    ctx->pc = 0x118C44u;
    SET_GPR_U32(ctx, 31, 0x118C4Cu);
    ctx->pc = 0x118C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C44u;
    // 0x118c48: 0x34840080  ori         $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x118990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118990u, 0x118C44u, 0x118C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C4Cu;
label_118c4c:
    // 0x118c4c: 0xc04647e  jal         func_1191F8
    ctx->pc = 0x118C4Cu;
    SET_GPR_U32(ctx, 31, 0x118C54u);
    ctx->pc = 0x1191F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191F8u, 0x118C4Cu, 0x118C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C54u;
label_118c54:
    // 0x118c54: 0xc046340  jal         func_118D00
    ctx->pc = 0x118C54u;
    SET_GPR_U32(ctx, 31, 0x118C5Cu);
    ctx->pc = 0x118C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C54u;
    // 0x118c58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D00u, 0x118C54u, 0x118C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C5Cu;
label_118c5c:
    // 0x118c5c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118C5Cu;
    {
        const bool branch_taken_0x118c5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C5Cu;
        // 0x118c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c5c) {
            ctx->pc = 0x118C70u;
            goto label_118c70;
        }
    }
    ctx->pc = 0x118C64u;
    // 0x118c64: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x118C64u;
    SET_GPR_U32(ctx, 31, 0x118C6Cu);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x118C64u, 0x118C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C6Cu;
label_118c6c:
    // 0x118c6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x118c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_118c70:
    // 0x118c70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118c78: 0x3e00008  jr          $ra
    ctx->pc = 0x118C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C78u;
        // 0x118c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118C80u;
}
