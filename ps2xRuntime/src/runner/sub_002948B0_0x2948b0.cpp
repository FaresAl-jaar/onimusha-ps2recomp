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

// Function: sub_002948B0
// Address: 0x2948b0 - 0x294940
void sub_002948B0_0x2948b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002948B0_0x2948b0");
#endif

    switch (ctx->pc) {
        case 0x2948d8u: goto label_2948d8;
        default: break;
    }

    ctx->pc = 0x2948b0u;

    // 0x2948b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2948b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2948b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2948b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2948b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2948b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2948bc: 0x8c8229cc  lw          $v0, 0x29CC($a0)
    ctx->pc = 0x2948bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10700)));
    // 0x2948c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2948C0u;
    {
        const bool branch_taken_0x2948c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2948C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948C0u;
        // 0x2948c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948c0) {
            ctx->pc = 0x2948D0u;
            goto label_2948d0;
        }
    }
    ctx->pc = 0x2948C8u;
    // 0x2948c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2948C8u;
    {
        const bool branch_taken_0x2948c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2948CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948C8u;
        // 0x2948cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948c8) {
            ctx->pc = 0x294930u;
            goto label_294930;
        }
    }
    ctx->pc = 0x2948D0u;
label_2948d0:
    // 0x2948d0: 0xc0bd0e8  jal         func_2F43A0
    ctx->pc = 0x2948D0u;
    SET_GPR_U32(ctx, 31, 0x2948D8u);
    ctx->pc = 0x2948D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2948D0u;
    // 0x2948d4: 0x920429d0  lbu         $a0, 0x29D0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F43A0u, 0x2948D0u, 0x2948D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948D8u;
label_2948d8:
    // 0x2948d8: 0x8e0429cc  lw          $a0, 0x29CC($s0)
    ctx->pc = 0x2948d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10700)));
    // 0x2948dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2948dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2948e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2948e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2948e4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2948e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2948e8: 0x9082001f  lbu         $v0, 0x1F($a0)
    ctx->pc = 0x2948e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 31)));
    // 0x2948ec: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2948ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2948f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2948F0u;
    {
        const bool branch_taken_0x2948f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2948f0) {
            ctx->pc = 0x294900u;
            goto label_294900;
        }
    }
    ctx->pc = 0x2948F8u;
    // 0x2948f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2948F8u;
    {
        const bool branch_taken_0x2948f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2948FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948F8u;
        // 0x2948fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948f8) {
            ctx->pc = 0x294930u;
            goto label_294930;
        }
    }
    ctx->pc = 0x294900u;
label_294900:
    // 0x294900: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x294900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x294904: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x294904u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x294908: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x294908u;
    {
        const bool branch_taken_0x294908 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294908u;
        // 0x29490c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294908) {
            ctx->pc = 0x294918u;
            goto label_294918;
        }
    }
    ctx->pc = 0x294910u;
    // 0x294910: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x294910u;
    {
        const bool branch_taken_0x294910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294910) {
            ctx->pc = 0x294930u;
            goto label_294930;
        }
    }
    ctx->pc = 0x294918u;
label_294918:
    // 0x294918: 0x90820021  lbu         $v0, 0x21($a0)
    ctx->pc = 0x294918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 33)));
    // 0x29491c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x29491cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x294920: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x294920u;
    {
        const bool branch_taken_0x294920 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x294924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294920u;
        // 0x294924: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294920) {
            ctx->pc = 0x294930u;
            goto label_294930;
        }
    }
    ctx->pc = 0x294928u;
    // 0x294928: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x294928u;
    {
        const bool branch_taken_0x294928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294928u;
        // 0x29492c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294928) {
            ctx->pc = 0x294930u;
            goto label_294930;
        }
    }
    ctx->pc = 0x294930u;
label_294930:
    // 0x294930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x294934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294938: 0x3e00008  jr          $ra
    ctx->pc = 0x294938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294938u;
        // 0x29493c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294940u;
}
