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

// Function: sub_00126808
// Address: 0x126808 - 0x126864
void sub_00126808_0x126808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126808_0x126808");
#endif

    switch (ctx->pc) {
        case 0x126834u: goto label_126834;
        default: break;
    }

    ctx->pc = 0x126808u;

    // 0x126808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12680c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12681c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12681cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126820: 0x3c100093  lui         $s0, 0x93
    ctx->pc = 0x126820u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)147 << 16));
    // 0x126824: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x126824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126828: 0xae00668c  sw          $zero, 0x668C($s0)
    ctx->pc = 0x126828u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x93668Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x93668Cu, _value); } while (0);
    // 0x12682c: 0xc04398a  jal         func_10E628
    ctx->pc = 0x12682Cu;
    SET_GPR_U32(ctx, 31, 0x126834u);
    ctx->pc = 0x126830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12682Cu;
    // 0x126830: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E628u, 0x12682Cu, 0x126834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126834u;
label_126834:
    // 0x126834: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x126834u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126838: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x126838u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12683c: 0x15ee0004  bne         $t7, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x12683Cu;
    {
        const bool branch_taken_0x12683c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        ctx->pc = 0x126840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12683Cu;
        // 0x126840: 0x1e0102d  daddu       $v0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12683c) {
            ctx->pc = 0x126850u;
            goto label_126850;
        }
    }
    ctx->pc = 0x126844u;
    // 0x126844: 0x8e0f668c  lw          $t7, 0x668C($s0)
    ctx->pc = 0x126844u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26252)));
    // 0x126848: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x126848u;
    {
        const bool branch_taken_0x126848 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x126848) {
            ctx->pc = 0x12684Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126848u;
            // 0x12684c: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126850u;
            goto label_126850;
        }
    }
    ctx->pc = 0x126850u;
label_126850:
    // 0x126850: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126854: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126858: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x126858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12685c: 0x3e00008  jr          $ra
    ctx->pc = 0x12685Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12685Cu;
        // 0x126860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12685Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126864u;
}
