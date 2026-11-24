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

// Function: sub_001A7560
// Address: 0x1a7560 - 0x1a75d8
void sub_001A7560_0x1a7560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7560_0x1a7560");
#endif

    switch (ctx->pc) {
        case 0x1a7580u: goto label_1a7580;
        case 0x1a75a8u: goto label_1a75a8;
        default: break;
    }

    ctx->pc = 0x1a7560u;

    // 0x1a7560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a7560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a7564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a7564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a7568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a7568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a756c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7570: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a7570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7578: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a7578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a757c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1a757cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a7580:
    // 0x1a7580: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1a7580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a7584: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A7584u;
    {
        const bool branch_taken_0x1a7584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7584) {
            ctx->pc = 0x1A75B0u;
            goto label_1a75b0;
        }
    }
    ctx->pc = 0x1A758Cu;
    // 0x1a758c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1a758cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a7590: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1a7590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1a7594: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7594u;
    {
        const bool branch_taken_0x1a7594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7594) {
            ctx->pc = 0x1A75B0u;
            goto label_1a75b0;
        }
    }
    ctx->pc = 0x1A759Cu;
    // 0x1a759c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1a759cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a75a0: 0xc069d18  jal         func_1A7460
    ctx->pc = 0x1A75A0u;
    SET_GPR_U32(ctx, 31, 0x1A75A8u);
    ctx->pc = 0x1A75A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75A0u;
    // 0x1a75a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7460u, 0x1A75A0u, 0x1A75A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75A8u;
label_1a75a8:
    // 0x1a75a8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a75a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a75ac: 0x0  nop
    ctx->pc = 0x1a75acu;
    // NOP
label_1a75b0:
    // 0x1a75b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a75b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a75b4: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x1a75b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a75b8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1A75B8u;
    {
        const bool branch_taken_0x1a75b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75B8u;
        // 0x1a75bc: 0x26100200  addiu       $s0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75b8) {
            ctx->pc = 0x1A7580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7580;
        }
    }
    ctx->pc = 0x1A75C0u;
    // 0x1a75c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a75c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a75c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a75c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a75c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a75c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a75cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a75ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a75d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A75D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75D0u;
        // 0x1a75d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A75D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A75D8u;
}
