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

// Function: sub_0034F4F0
// Address: 0x34f4f0 - 0x34f54c
void sub_0034F4F0_0x34f4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F4F0_0x34f4f0");
#endif

    switch (ctx->pc) {
        case 0x34f540u: goto label_34f540;
        default: break;
    }

    ctx->pc = 0x34f4f0u;

    // 0x34f4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34f4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34f4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34f4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34f4f8: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x34f4f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x34f4fc: 0x306300df  andi        $v1, $v1, 0xDF
    ctx->pc = 0x34f4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)223);
    // 0x34f500: 0xa083002a  sb          $v1, 0x2A($a0)
    ctx->pc = 0x34f500u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f504: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x34f504u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x34f508: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34f508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34f50c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x34F50Cu;
    {
        const bool branch_taken_0x34f50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f50c) {
            ctx->pc = 0x34F540u;
            goto label_34f540;
        }
    }
    ctx->pc = 0x34F514u;
    // 0x34f514: 0x90840028  lbu         $a0, 0x28($a0)
    ctx->pc = 0x34f514u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x34f518: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x34f518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x34f51c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x34F51Cu;
    {
        const bool branch_taken_0x34f51c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F51Cu;
        // 0x34f520: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f51c) {
            ctx->pc = 0x34F540u;
            goto label_34f540;
        }
    }
    ctx->pc = 0x34F524u;
    // 0x34f524: 0x2463f730  addiu       $v1, $v1, -0x8D0
    ctx->pc = 0x34f524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965040));
    // 0x34f528: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34f528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34f52c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x34f52cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34f530: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F530u;
    {
        const bool branch_taken_0x34f530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f530) {
            ctx->pc = 0x34F540u;
            goto label_34f540;
        }
    }
    ctx->pc = 0x34F538u;
    // 0x34f538: 0xc0d354c  jal         func_34D530
    ctx->pc = 0x34F538u;
    SET_GPR_U32(ctx, 31, 0x34F540u);
    ctx->pc = 0x34D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D530u, 0x34F538u, 0x34F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F540u;
label_34f540:
    // 0x34f540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34f540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f544: 0x3e00008  jr          $ra
    ctx->pc = 0x34F544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F544u;
        // 0x34f548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F54Cu;
}
