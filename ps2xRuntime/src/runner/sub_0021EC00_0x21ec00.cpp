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

// Function: sub_0021EC00
// Address: 0x21ec00 - 0x21ec5c
void sub_0021EC00_0x21ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EC00_0x21ec00");
#endif

    switch (ctx->pc) {
        case 0x21ec1cu: goto label_21ec1c;
        default: break;
    }

    ctx->pc = 0x21ec00u;

    // 0x21ec00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ec04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ec08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ec08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ec10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21ec14: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21EC14u;
    SET_GPR_U32(ctx, 31, 0x21EC1Cu);
    ctx->pc = 0x21EC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC14u;
    // 0x21ec18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21EC14u, 0x21EC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC1Cu;
label_21ec1c:
    // 0x21ec1c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21ec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21ec20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21EC20u;
    {
        const bool branch_taken_0x21ec20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC20u;
        // 0x21ec24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec20) {
            ctx->pc = 0x21EC40u;
            goto label_21ec40;
        }
    }
    ctx->pc = 0x21EC28u;
    // 0x21ec28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ec28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ec2c: 0x34a50152  ori         $a1, $a1, 0x152
    ctx->pc = 0x21ec2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)338);
    // 0x21ec30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ec30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ec34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ec34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ec38: 0x80848e0  j           func_212380
    ctx->pc = 0x21EC38u;
    ctx->pc = 0x21EC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC38u;
    // 0x21ec3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21EC40u;
label_21ec40:
    // 0x21ec40: 0x8e0336b0  lw          $v1, 0x36B0($s0)
    ctx->pc = 0x21ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x21ec44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ec44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ec48: 0xac710dc0  sw          $s1, 0xDC0($v1)
    ctx->pc = 0x21ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3520), GPR_U32(ctx, 17));
    // 0x21ec4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ec4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ec50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ec50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ec54: 0x3e00008  jr          $ra
    ctx->pc = 0x21EC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC54u;
        // 0x21ec58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EC5Cu;
}
