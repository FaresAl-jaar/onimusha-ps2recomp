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

// Function: sub_00287250
// Address: 0x287250 - 0x2872d8
void sub_00287250_0x287250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287250_0x287250");
#endif

    switch (ctx->pc) {
        case 0x287280u: goto label_287280;
        case 0x2872a8u: goto label_2872a8;
        default: break;
    }

    ctx->pc = 0x287250u;

    // 0x287250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x287250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x287254: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x287254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x287258: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x287258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28725c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x287260: 0x90a4001c  lbu         $a0, 0x1C($a1)
    ctx->pc = 0x287260u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x287264: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x287264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287268: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x287268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28726c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x287270: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x287270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x287274: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x287274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x287278: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x287278u;
    SET_GPR_U32(ctx, 31, 0x287280u);
    ctx->pc = 0x28727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287278u;
    // 0x28727c: 0x622024  and         $a0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x287278u, 0x287280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287280u;
label_287280:
    // 0x287280: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287280u;
    {
        const bool branch_taken_0x287280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287280) {
            ctx->pc = 0x287290u;
            goto label_287290;
        }
    }
    ctx->pc = 0x287288u;
    // 0x287288: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x287288u;
    {
        const bool branch_taken_0x287288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287288u;
        // 0x28728c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287288) {
            ctx->pc = 0x2872C8u;
            goto label_2872c8;
        }
    }
    ctx->pc = 0x287290u;
label_287290:
    // 0x287290: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x287290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x287294: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x287294u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x287298: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x287298u;
    {
        const bool branch_taken_0x287298 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287298u;
        // 0x28729c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287298) {
            ctx->pc = 0x2872C8u;
            goto label_2872c8;
        }
    }
    ctx->pc = 0x2872A0u;
    // 0x2872a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2872a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872a4: 0x24047ffe  addiu       $a0, $zero, 0x7FFE
    ctx->pc = 0x2872a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_2872a8:
    // 0x2872a8: 0xa4a40010  sh          $a0, 0x10($a1)
    ctx->pc = 0x2872a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x2872ac: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x2872acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2872b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2872b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2872b4: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x2872b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x2872b8: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2872b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2872bc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2872BCu;
    {
        const bool branch_taken_0x2872bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2872bc) {
            ctx->pc = 0x2872A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2872a8;
        }
    }
    ctx->pc = 0x2872C4u;
    // 0x2872c4: 0x0  nop
    ctx->pc = 0x2872c4u;
    // NOP
label_2872c8:
    // 0x2872c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2872c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2872cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2872ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2872d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2872D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2872D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2872D0u;
        // 0x2872d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2872D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2872D8u;
}
