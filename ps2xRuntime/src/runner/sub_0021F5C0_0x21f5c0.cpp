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

// Function: sub_0021F5C0
// Address: 0x21f5c0 - 0x21f620
void sub_0021F5C0_0x21f5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F5C0_0x21f5c0");
#endif

    switch (ctx->pc) {
        case 0x21f5dcu: goto label_21f5dc;
        default: break;
    }

    ctx->pc = 0x21f5c0u;

    // 0x21f5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f5c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f5c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21f5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f5cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f5d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f5d4: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21F5D4u;
    SET_GPR_U32(ctx, 31, 0x21F5DCu);
    ctx->pc = 0x21F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F5D4u;
    // 0x21f5d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21F5D4u, 0x21F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F5DCu;
label_21f5dc:
    // 0x21f5dc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21f5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21f5e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F5E0u;
    {
        const bool branch_taken_0x21f5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5E0u;
        // 0x21f5e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5e0) {
            ctx->pc = 0x21F600u;
            goto label_21f600;
        }
    }
    ctx->pc = 0x21F5E8u;
    // 0x21f5e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f5ec: 0x34a5015c  ori         $a1, $a1, 0x15C
    ctx->pc = 0x21f5ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)348);
    // 0x21f5f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f5f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f5f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f5f8: 0x80848e0  j           func_212380
    ctx->pc = 0x21F5F8u;
    ctx->pc = 0x21F5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F5F8u;
    // 0x21f5fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21F600u;
label_21f600:
    // 0x21f600: 0x8e0436b0  lw          $a0, 0x36B0($s0)
    ctx->pc = 0x21f600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x21f604: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21F604u;
    {
        const bool branch_taken_0x21f604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f604) {
            ctx->pc = 0x21F608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F604u;
            // 0x21f608: 0xac910dd4  sw          $s1, 0xDD4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 3540), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F60Cu;
            goto label_21f60c;
        }
    }
    ctx->pc = 0x21F60Cu;
label_21f60c:
    // 0x21f60c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f610: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f618: 0x3e00008  jr          $ra
    ctx->pc = 0x21F618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F618u;
        // 0x21f61c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F620u;
}
