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

// Function: sub_0020B0B8
// Address: 0x20b0b8 - 0x20b114
void sub_0020B0B8_0x20b0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B0B8_0x20b0b8");
#endif

    switch (ctx->pc) {
        case 0x20b0b8u: goto label_20b0b8;
        case 0x20b0bcu: goto label_20b0bc;
        case 0x20b0c0u: goto label_20b0c0;
        case 0x20b0c4u: goto label_20b0c4;
        case 0x20b0c8u: goto label_20b0c8;
        case 0x20b0ccu: goto label_20b0cc;
        case 0x20b0d0u: goto label_20b0d0;
        case 0x20b0d4u: goto label_20b0d4;
        case 0x20b0d8u: goto label_20b0d8;
        case 0x20b0dcu: goto label_20b0dc;
        case 0x20b0e0u: goto label_20b0e0;
        case 0x20b0e4u: goto label_20b0e4;
        case 0x20b0e8u: goto label_20b0e8;
        case 0x20b0ecu: goto label_20b0ec;
        case 0x20b0f0u: goto label_20b0f0;
        case 0x20b0f4u: goto label_20b0f4;
        case 0x20b0f8u: goto label_20b0f8;
        case 0x20b0fcu: goto label_20b0fc;
        case 0x20b100u: goto label_20b100;
        case 0x20b104u: goto label_20b104;
        case 0x20b108u: goto label_20b108;
        case 0x20b10cu: goto label_20b10c;
        case 0x20b110u: goto label_20b110;
        default: break;
    }

    ctx->pc = 0x20b0b8u;

label_20b0b8:
    // 0x20b0b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20b0bc:
    // 0x20b0bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20b0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20b0c0:
    // 0x20b0c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b0c4:
    // 0x20b0c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20b0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20b0c8:
    // 0x20b0c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20b0cc:
    // 0x20b0cc: 0xc082d4c  jal         func_20B530
label_20b0d0:
    if (ctx->pc == 0x20B0D0u) {
        ctx->pc = 0x20B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0CCu;
        // 0x20b0d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B0D4u;
        goto label_20b0d4;
    }
    ctx->pc = 0x20B0CCu;
    SET_GPR_U32(ctx, 31, 0x20B0D4u);
    ctx->pc = 0x20B0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B0CCu;
    // 0x20b0d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B530u, 0x20B0CCu, 0x20B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B0D4u;
label_20b0d4:
    // 0x20b0d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b0d8:
    // 0x20b0d8: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_20b0dc:
    if (ctx->pc == 0x20B0DCu) {
        ctx->pc = 0x20B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0D8u;
        // 0x20b0dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B0E0u;
        goto label_20b0e0;
    }
    ctx->pc = 0x20B0D8u;
    {
        const bool branch_taken_0x20b0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20b0d8) {
            ctx->pc = 0x20B0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B0D8u;
            // 0x20b0dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B104u;
            goto label_20b104;
        }
    }
    ctx->pc = 0x20B0E0u;
label_20b0e0:
    // 0x20b0e0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20b0e4:
    // 0x20b0e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_20b0e8:
    if (ctx->pc == 0x20B0E8u) {
        ctx->pc = 0x20B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0E4u;
        // 0x20b0e8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B0ECu;
        goto label_20b0ec;
    }
    ctx->pc = 0x20B0E4u;
    {
        const bool branch_taken_0x20b0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0E4u;
        // 0x20b0e8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b0e4) {
            ctx->pc = 0x20B100u;
            goto label_20b100;
        }
    }
    ctx->pc = 0x20B0ECu;
label_20b0ec:
    // 0x20b0ec: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x20b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_20b0f0:
    // 0x20b0f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20b0f4:
    if (ctx->pc == 0x20B0F4u) {
        ctx->pc = 0x20B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0F0u;
        // 0x20b0f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B0F8u;
        goto label_20b0f8;
    }
    ctx->pc = 0x20B0F0u;
    {
        const bool branch_taken_0x20b0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b0f0) {
            ctx->pc = 0x20B0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B0F0u;
            // 0x20b0f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B104u;
            goto label_20b104;
        }
    }
    ctx->pc = 0x20B0F8u;
label_20b0f8:
    // 0x20b0f8: 0x40f809  jalr        $v0
label_20b0fc:
    if (ctx->pc == 0x20B0FCu) {
        ctx->pc = 0x20B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0F8u;
        // 0x20b0fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B100u;
        goto label_20b100;
    }
    ctx->pc = 0x20B0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B100u);
        ctx->pc = 0x20B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0F8u;
        // 0x20b0fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B0F8u, 0x20B100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B100u;
label_20b100:
    // 0x20b100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b104:
    // 0x20b104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20b104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20b108:
    // 0x20b108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20b108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20b10c:
    // 0x20b10c: 0x3e00008  jr          $ra
label_20b110:
    if (ctx->pc == 0x20B110u) {
        ctx->pc = 0x20B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B10Cu;
        // 0x20b110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B114u;
        goto label_fallthrough_0x20b10c;
    }
    ctx->pc = 0x20B10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B10Cu;
        // 0x20b110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b10c:
    ctx->pc = 0x20B114u;
}
