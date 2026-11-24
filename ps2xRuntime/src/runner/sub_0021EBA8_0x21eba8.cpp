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

// Function: sub_0021EBA8
// Address: 0x21eba8 - 0x21ec00
void sub_0021EBA8_0x21eba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EBA8_0x21eba8");
#endif

    switch (ctx->pc) {
        case 0x21ebc4u: goto label_21ebc4;
        default: break;
    }

    ctx->pc = 0x21eba8u;

    // 0x21eba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21eba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ebac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ebb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ebb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ebb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ebb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21ebbc: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21EBBCu;
    SET_GPR_U32(ctx, 31, 0x21EBC4u);
    ctx->pc = 0x21EBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EBBCu;
    // 0x21ebc0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21EBBCu, 0x21EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EBC4u;
label_21ebc4:
    // 0x21ebc4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21ebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21ebc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21EBC8u;
    {
        const bool branch_taken_0x21ebc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBC8u;
        // 0x21ebcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebc8) {
            ctx->pc = 0x21EBE8u;
            goto label_21ebe8;
        }
    }
    ctx->pc = 0x21EBD0u;
    // 0x21ebd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ebd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ebd4: 0x34a50151  ori         $a1, $a1, 0x151
    ctx->pc = 0x21ebd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)337);
    // 0x21ebd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ebd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ebdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ebdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ebe0: 0x80848e0  j           func_212380
    ctx->pc = 0x21EBE0u;
    ctx->pc = 0x21EBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EBE0u;
    // 0x21ebe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21EBE8u;
label_21ebe8:
    // 0x21ebe8: 0xae1136b0  sw          $s1, 0x36B0($s0)
    ctx->pc = 0x21ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14000), GPR_U32(ctx, 17));
    // 0x21ebec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ebecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ebf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ebf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ebf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ebf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ebf8: 0x3e00008  jr          $ra
    ctx->pc = 0x21EBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBF8u;
        // 0x21ebfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EC00u;
}
