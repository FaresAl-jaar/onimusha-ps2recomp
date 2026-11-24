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

// Function: sub_001FD0B0
// Address: 0x1fd0b0 - 0x1fd10c
void sub_001FD0B0_0x1fd0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD0B0_0x1fd0b0");
#endif

    switch (ctx->pc) {
        case 0x1fd0d0u: goto label_1fd0d0;
        default: break;
    }

    ctx->pc = 0x1fd0b0u;

    // 0x1fd0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd0b4: 0x240600ba  addiu       $a2, $zero, 0xBA
    ctx->pc = 0x1fd0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    // 0x1fd0b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd0bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fd0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd0c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fd0c8: 0xc07f444  jal         func_1FD110
    ctx->pc = 0x1FD0C8u;
    SET_GPR_U32(ctx, 31, 0x1FD0D0u);
    ctx->pc = 0x1FD0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0C8u;
    // 0x1fd0cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD110u, 0x1FD0C8u, 0x1FD0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0D0u;
label_1fd0d0:
    // 0x1fd0d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fd0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd0d4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD0D4u;
    {
        const bool branch_taken_0x1fd0d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0D4u;
        // 0x1fd0d8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd0d4) {
            ctx->pc = 0x1FD0F8u;
            goto label_1fd0f8;
        }
    }
    ctx->pc = 0x1FD0DCu;
    // 0x1fd0dc: 0xb11823  subu        $v1, $a1, $s1
    ctx->pc = 0x1fd0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1fd0e0: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1fd0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fd0e4: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD0E4u;
    {
        const bool branch_taken_0x1fd0e4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x1FD0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0E4u;
        // 0x1fd0e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd0e4) {
            ctx->pc = 0x1FD0F8u;
            goto label_1fd0f8;
        }
    }
    ctx->pc = 0x1FD0ECu;
    // 0x1fd0ec: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1fd0ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fd0f0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1fd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1fd0f4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1fd0f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fd0f8:
    // 0x1fd0f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd0f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd0fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd0fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd100: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd104: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD104u;
        // 0x1fd108: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD10Cu;
}
