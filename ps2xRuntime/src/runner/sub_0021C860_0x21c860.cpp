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

// Function: sub_0021C860
// Address: 0x21c860 - 0x21c900
void sub_0021C860_0x21c860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C860_0x21c860");
#endif

    switch (ctx->pc) {
        case 0x21c8d8u: goto label_21c8d8;
        case 0x21c8e8u: goto label_21c8e8;
        default: break;
    }

    ctx->pc = 0x21c860u;

    // 0x21c860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c864: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21c864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21c868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c86c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c870: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c878: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x21c878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x21c87c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21C87Cu;
    {
        const bool branch_taken_0x21c87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C87Cu;
        // 0x21c880: 0x8e110048  lw          $s1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c87c) {
            ctx->pc = 0x21C8C8u;
            goto label_21c8c8;
        }
    }
    ctx->pc = 0x21C884u;
    // 0x21c884: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x21c884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21c888: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C888u;
    {
        const bool branch_taken_0x21c888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C888u;
        // 0x21c88c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c888) {
            ctx->pc = 0x21C8A8u;
            goto label_21c8a8;
        }
    }
    ctx->pc = 0x21C890u;
    // 0x21c890: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21c890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c894: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21C894u;
    {
        const bool branch_taken_0x21c894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C894u;
        // 0x21c898: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c894) {
            ctx->pc = 0x21C8C0u;
            goto label_21c8c0;
        }
    }
    ctx->pc = 0x21C89Cu;
    // 0x21c89c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21C89Cu;
    {
        const bool branch_taken_0x21c89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C89Cu;
        // 0x21c8a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c89c) {
            ctx->pc = 0x21C8F0u;
            goto label_21c8f0;
        }
    }
    ctx->pc = 0x21C8A4u;
    // 0x21c8a4: 0x0  nop
    ctx->pc = 0x21c8a4u;
    // NOP
label_21c8a8:
    // 0x21c8a8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C8A8u;
    {
        const bool branch_taken_0x21c8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8A8u;
        // 0x21c8ac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8a8) {
            ctx->pc = 0x21C8D0u;
            goto label_21c8d0;
        }
    }
    ctx->pc = 0x21C8B0u;
    // 0x21c8b0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21C8B0u;
    {
        const bool branch_taken_0x21c8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8B0u;
        // 0x21c8b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8b0) {
            ctx->pc = 0x21C8D0u;
            goto label_21c8d0;
        }
    }
    ctx->pc = 0x21C8B8u;
    // 0x21c8b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21C8B8u;
    {
        const bool branch_taken_0x21c8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8B8u;
        // 0x21c8bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8b8) {
            ctx->pc = 0x21C8F0u;
            goto label_21c8f0;
        }
    }
    ctx->pc = 0x21C8C0u;
label_21c8c0:
    // 0x21c8c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21C8C0u;
    {
        const bool branch_taken_0x21c8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8C0u;
        // 0x21c8c4: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8c0) {
            ctx->pc = 0x21C8E8u;
            goto label_21c8e8;
        }
    }
    ctx->pc = 0x21C8C8u;
label_21c8c8:
    // 0x21c8c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21C8C8u;
    {
        const bool branch_taken_0x21c8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8C8u;
        // 0x21c8cc: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8c8) {
            ctx->pc = 0x21C8E8u;
            goto label_21c8e8;
        }
    }
    ctx->pc = 0x21C8D0u;
label_21c8d0:
    // 0x21c8d0: 0xc08725e  jal         func_21C978
    ctx->pc = 0x21C8D0u;
    SET_GPR_U32(ctx, 31, 0x21C8D8u);
    ctx->pc = 0x21C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8D0u;
    // 0x21c8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C978u, 0x21C8D0u, 0x21C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C8D8u;
label_21c8d8:
    // 0x21c8d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C8D8u;
    {
        const bool branch_taken_0x21c8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8D8u;
        // 0x21c8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8d8) {
            ctx->pc = 0x21C8E8u;
            goto label_21c8e8;
        }
    }
    ctx->pc = 0x21C8E0u;
    // 0x21c8e0: 0xc08767a  jal         func_21D9E8
    ctx->pc = 0x21C8E0u;
    SET_GPR_U32(ctx, 31, 0x21C8E8u);
    ctx->pc = 0x21C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8E0u;
    // 0x21c8e4: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D9E8u, 0x21C8E0u, 0x21C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C8E8u;
label_21c8e8:
    // 0x21c8e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21c8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c8ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c8f0:
    // 0x21c8f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c8f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x21C8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8F8u;
        // 0x21c8fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C900u;
}
