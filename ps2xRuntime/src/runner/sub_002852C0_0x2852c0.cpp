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

// Function: sub_002852C0
// Address: 0x2852c0 - 0x285340
void sub_002852C0_0x2852c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002852C0_0x2852c0");
#endif

    switch (ctx->pc) {
        case 0x2852e4u: goto label_2852e4;
        case 0x285310u: goto label_285310;
        default: break;
    }

    ctx->pc = 0x2852c0u;

    // 0x2852c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2852c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2852c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2852c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2852c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2852c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2852cc: 0x90a30018  lbu         $v1, 0x18($a1)
    ctx->pc = 0x2852ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2852d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2852d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2852d4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2852d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2852d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2852d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2852dc: 0xc0741a4  jal         func_1D0690
    ctx->pc = 0x2852DCu;
    SET_GPR_U32(ctx, 31, 0x2852E4u);
    ctx->pc = 0x2852E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2852DCu;
    // 0x2852e0: 0x22140  sll         $a0, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0690u, 0x2852DCu, 0x2852E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2852E4u;
label_2852e4:
    // 0x2852e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2852E4u;
    {
        const bool branch_taken_0x2852e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2852e4) {
            ctx->pc = 0x2852F8u;
            goto label_2852f8;
        }
    }
    ctx->pc = 0x2852ECu;
    // 0x2852ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2852ECu;
    {
        const bool branch_taken_0x2852ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2852F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852ECu;
        // 0x2852f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852ec) {
            ctx->pc = 0x285330u;
            goto label_285330;
        }
    }
    ctx->pc = 0x2852F4u;
    // 0x2852f4: 0x0  nop
    ctx->pc = 0x2852f4u;
    // NOP
label_2852f8:
    // 0x2852f8: 0x92030018  lbu         $v1, 0x18($s0)
    ctx->pc = 0x2852f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2852fc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2852fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x285300: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x285300u;
    {
        const bool branch_taken_0x285300 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x285304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285300u;
        // 0x285304: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285300) {
            ctx->pc = 0x285330u;
            goto label_285330;
        }
    }
    ctx->pc = 0x285308u;
    // 0x285308: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x285308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28530c: 0x24047ffe  addiu       $a0, $zero, 0x7FFE
    ctx->pc = 0x28530cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_285310:
    // 0x285310: 0xa4a40008  sh          $a0, 0x8($a1)
    ctx->pc = 0x285310u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x285314: 0xa0a0000f  sb          $zero, 0xF($a1)
    ctx->pc = 0x285314u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x285318: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x285318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28531c: 0x92030018  lbu         $v1, 0x18($s0)
    ctx->pc = 0x28531cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x285320: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x285320u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x285324: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x285324u;
    {
        const bool branch_taken_0x285324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285324u;
        // 0x285328: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285324) {
            ctx->pc = 0x285310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285310;
        }
    }
    ctx->pc = 0x28532Cu;
    // 0x28532c: 0x0  nop
    ctx->pc = 0x28532cu;
    // NOP
label_285330:
    // 0x285330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x285330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285338: 0x3e00008  jr          $ra
    ctx->pc = 0x285338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285338u;
        // 0x28533c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285340u;
}
