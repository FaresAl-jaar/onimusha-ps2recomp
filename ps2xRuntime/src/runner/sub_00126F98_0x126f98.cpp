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

// Function: sub_00126F98
// Address: 0x126f98 - 0x126fe8
void sub_00126F98_0x126f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126F98_0x126f98");
#endif

    switch (ctx->pc) {
        case 0x126fbcu: goto label_126fbc;
        default: break;
    }

    ctx->pc = 0x126f98u;

    // 0x126f98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126f9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126fa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126fa4: 0x3c100093  lui         $s0, 0x93
    ctx->pc = 0x126fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)147 << 16));
    // 0x126fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x126fac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126fb0: 0xae00668c  sw          $zero, 0x668C($s0)
    ctx->pc = 0x126fb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x93668Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x93668Cu, _value); } while (0);
    // 0x126fb4: 0xc0439b8  jal         func_10E6E0
    ctx->pc = 0x126FB4u;
    SET_GPR_U32(ctx, 31, 0x126FBCu);
    ctx->pc = 0x126FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126FB4u;
    // 0x126fb8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E6E0u, 0x126FB4u, 0x126FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126FBCu;
label_126fbc:
    // 0x126fbc: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x126fbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x126fc0: 0x544f0005  bnel        $v0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x126FC0u;
    {
        const bool branch_taken_0x126fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x126fc0) {
            ctx->pc = 0x126FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126FC0u;
            // 0x126fc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126FD8u;
            goto label_126fd8;
        }
    }
    ctx->pc = 0x126FC8u;
    // 0x126fc8: 0x8e0f668c  lw          $t7, 0x668C($s0)
    ctx->pc = 0x126fc8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26252)));
    // 0x126fcc: 0x55e00001  bnel        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x126FCCu;
    {
        const bool branch_taken_0x126fcc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x126fcc) {
            ctx->pc = 0x126FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126FCCu;
            // 0x126fd0: 0xae2f0000  sw          $t7, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126FD4u;
            goto label_126fd4;
        }
    }
    ctx->pc = 0x126FD4u;
label_126fd4:
    // 0x126fd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126fd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126fd8:
    // 0x126fd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126fdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x126fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x126FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FE0u;
        // 0x126fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126FE8u;
}
