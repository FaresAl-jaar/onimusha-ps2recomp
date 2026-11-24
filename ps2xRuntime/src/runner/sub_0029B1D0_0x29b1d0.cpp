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

// Function: sub_0029B1D0
// Address: 0x29b1d0 - 0x29b230
void sub_0029B1D0_0x29b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B1D0_0x29b1d0");
#endif

    switch (ctx->pc) {
        case 0x29b214u: goto label_29b214;
        default: break;
    }

    ctx->pc = 0x29b1d0u;

    // 0x29b1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b1d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b1dc: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x29b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x29b1e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x29B1E0u;
    {
        const bool branch_taken_0x29b1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B1E0u;
        // 0x29b1e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b1e0) {
            ctx->pc = 0x29B220u;
            goto label_29b220;
        }
    }
    ctx->pc = 0x29B1E8u;
    // 0x29b1e8: 0x8c6400c4  lw          $a0, 0xC4($v1)
    ctx->pc = 0x29b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x29b1ec: 0x96030850  lhu         $v1, 0x850($s0)
    ctx->pc = 0x29b1ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2128)));
    // 0x29b1f0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x29b1f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29b1f4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x29B1F4u;
    {
        const bool branch_taken_0x29b1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b1f4) {
            ctx->pc = 0x29B220u;
            goto label_29b220;
        }
    }
    ctx->pc = 0x29B1FCu;
    // 0x29b1fc: 0x96030854  lhu         $v1, 0x854($s0)
    ctx->pc = 0x29b1fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2132)));
    // 0x29b200: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B200u;
    {
        const bool branch_taken_0x29b200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B200u;
        // 0x29b204: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b200) {
            ctx->pc = 0x29B220u;
            goto label_29b220;
        }
    }
    ctx->pc = 0x29B208u;
    // 0x29b208: 0x26050840  addiu       $a1, $s0, 0x840
    ctx->pc = 0x29b208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    // 0x29b20c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x29B20Cu;
    SET_GPR_U32(ctx, 31, 0x29B214u);
    ctx->pc = 0x29B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B20Cu;
    // 0x29b210: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x29B20Cu, 0x29B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B214u;
label_29b214:
    // 0x29b214: 0x96030854  lhu         $v1, 0x854($s0)
    ctx->pc = 0x29b214u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2132)));
    // 0x29b218: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29b218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29b21c: 0xa6030854  sh          $v1, 0x854($s0)
    ctx->pc = 0x29b21cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2132), (uint16_t)GPR_U32(ctx, 3));
label_29b220:
    // 0x29b220: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b228: 0x3e00008  jr          $ra
    ctx->pc = 0x29B228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B228u;
        // 0x29b22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B230u;
}
