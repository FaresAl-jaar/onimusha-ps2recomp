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

// Function: sub_00329200
// Address: 0x329200 - 0x329288
void sub_00329200_0x329200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329200_0x329200");
#endif

    switch (ctx->pc) {
        case 0x329220u: goto label_329220;
        case 0x329228u: goto label_329228;
        case 0x329230u: goto label_329230;
        case 0x329240u: goto label_329240;
        case 0x329250u: goto label_329250;
        case 0x329258u: goto label_329258;
        case 0x329278u: goto label_329278;
        default: break;
    }

    ctx->pc = 0x329200u;

    // 0x329200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329204: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x329204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32920c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32920cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x329210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329214: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x329214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x329218: 0xc05e554  jal         func_179550
    ctx->pc = 0x329218u;
    SET_GPR_U32(ctx, 31, 0x329220u);
    ctx->pc = 0x32921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329218u;
    // 0x32921c: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179550u, 0x329218u, 0x329220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329220u;
label_329220:
    // 0x329220: 0xc095040  jal         func_254100
    ctx->pc = 0x329220u;
    SET_GPR_U32(ctx, 31, 0x329228u);
    ctx->pc = 0x329224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329220u;
    // 0x329224: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254100u, 0x329220u, 0x329228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329228u;
label_329228:
    // 0x329228: 0xc095040  jal         func_254100
    ctx->pc = 0x329228u;
    SET_GPR_U32(ctx, 31, 0x329230u);
    ctx->pc = 0x32922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329228u;
    // 0x32922c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254100u, 0x329228u, 0x329230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329230u;
label_329230:
    // 0x329230: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x329230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x329234: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x329234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x329238: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x329238u;
    {
        const bool branch_taken_0x329238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x329238) {
            ctx->pc = 0x329268u;
            goto label_329268;
        }
    }
    ctx->pc = 0x329240u;
label_329240:
    // 0x329240: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x329240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x329244: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x329244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x329248: 0xc04c918  jal         func_132460
    ctx->pc = 0x329248u;
    SET_GPR_U32(ctx, 31, 0x329250u);
    ctx->pc = 0x32924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329248u;
    // 0x32924c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x329248u, 0x329250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329250u;
label_329250:
    // 0x329250: 0xc095040  jal         func_254100
    ctx->pc = 0x329250u;
    SET_GPR_U32(ctx, 31, 0x329258u);
    ctx->pc = 0x329254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329250u;
    // 0x329254: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254100u, 0x329250u, 0x329258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329258u;
label_329258:
    // 0x329258: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x329258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32925c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x32925cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x329260: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x329260u;
    {
        const bool branch_taken_0x329260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329260) {
            ctx->pc = 0x329240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329240;
        }
    }
    ctx->pc = 0x329268u;
label_329268:
    // 0x329268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x329268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32926c: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x32926cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x329270: 0xc0ca3a8  jal         func_328EA0
    ctx->pc = 0x329270u;
    SET_GPR_U32(ctx, 31, 0x329278u);
    ctx->pc = 0x329274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329270u;
    // 0x329274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328EA0u, 0x329270u, 0x329278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329278u;
label_329278:
    // 0x329278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32927c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32927cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329280: 0x3e00008  jr          $ra
    ctx->pc = 0x329280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329280u;
        // 0x329284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329288u;
}
