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

// Function: sub_0036C7C0
// Address: 0x36c7c0 - 0x36c870
void sub_0036C7C0_0x36c7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C7C0_0x36c7c0");
#endif

    switch (ctx->pc) {
        case 0x36c7e0u: goto label_36c7e0;
        case 0x36c7f8u: goto label_36c7f8;
        case 0x36c808u: goto label_36c808;
        case 0x36c838u: goto label_36c838;
        default: break;
    }

    ctx->pc = 0x36c7c0u;

    // 0x36c7c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36c7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36c7c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36c7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36c7c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36c7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36c7cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c7d0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36c7d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c7d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36c7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36c7d8: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x36c7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x36c7dc: 0x261018d8  addiu       $s0, $s0, 0x18D8
    ctx->pc = 0x36c7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6360));
label_36c7e0:
    // 0x36c7e0: 0x82110000  lb          $s1, 0x0($s0)
    ctx->pc = 0x36c7e0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36c7e4: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x36c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x36c7e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36c7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c7ec: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x36c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x36c7f0: 0xc0692bc  jal         func_1A4AF0
    ctx->pc = 0x36C7F0u;
    SET_GPR_U32(ctx, 31, 0x36C7F8u);
    ctx->pc = 0x36C7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C7F0u;
    // 0x36c7f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AF0u, 0x36C7F0u, 0x36C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C7F8u;
label_36c7f8:
    // 0x36c7f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36c7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c7fc: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x36C7FCu;
    {
        const bool branch_taken_0x36c7fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c7fc) {
            ctx->pc = 0x36C848u;
            goto label_36c848;
        }
    }
    ctx->pc = 0x36C804u;
    // 0x36c804: 0x0  nop
    ctx->pc = 0x36c804u;
    // NOP
label_36c808:
    // 0x36c808: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x36c808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x36c80c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36C80Cu;
    {
        const bool branch_taken_0x36c80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36c80c) {
            ctx->pc = 0x36C820u;
            goto label_36c820;
        }
    }
    ctx->pc = 0x36C814u;
    // 0x36c814: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36C814u;
    {
        const bool branch_taken_0x36c814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C814u;
        // 0x36c818: 0xa0c00003  sb          $zero, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c814) {
            ctx->pc = 0x36C828u;
            goto label_36c828;
        }
    }
    ctx->pc = 0x36C81Cu;
    // 0x36c81c: 0x0  nop
    ctx->pc = 0x36c81cu;
    // NOP
label_36c820:
    // 0x36c820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c824: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x36c824u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
label_36c828:
    // 0x36c828: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x36c828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x36c82c: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x36c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x36c830: 0xc0692bc  jal         func_1A4AF0
    ctx->pc = 0x36C830u;
    SET_GPR_U32(ctx, 31, 0x36C838u);
    ctx->pc = 0x36C834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C830u;
    // 0x36c834: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AF0u, 0x36C830u, 0x36C838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C838u;
label_36c838:
    // 0x36c838: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36c838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c83c: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x36C83Cu;
    {
        const bool branch_taken_0x36c83c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x36c83c) {
            ctx->pc = 0x36C808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c808;
        }
    }
    ctx->pc = 0x36C844u;
    // 0x36c844: 0x0  nop
    ctx->pc = 0x36c844u;
    // NOP
label_36c848:
    // 0x36c848: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36c848u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36c84c: 0x2e430002  sltiu       $v1, $s2, 0x2
    ctx->pc = 0x36c84cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x36c850: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x36C850u;
    {
        const bool branch_taken_0x36c850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C850u;
        // 0x36c854: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c850) {
            ctx->pc = 0x36C7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c7e0;
        }
    }
    ctx->pc = 0x36C858u;
    // 0x36c858: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36c858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36c85c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36c85cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36c864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c868: 0x3e00008  jr          $ra
    ctx->pc = 0x36C868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C868u;
        // 0x36c86c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C870u;
}
