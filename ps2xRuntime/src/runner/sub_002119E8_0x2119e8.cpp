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

// Function: sub_002119E8
// Address: 0x2119e8 - 0x211a4c
void sub_002119E8_0x2119e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002119E8_0x2119e8");
#endif

    switch (ctx->pc) {
        case 0x211a04u: goto label_211a04;
        case 0x211a18u: goto label_211a18;
        case 0x211a20u: goto label_211a20;
        default: break;
    }

    ctx->pc = 0x2119e8u;

    // 0x2119e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2119e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2119ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2119ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2119f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2119f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2119f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2119f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2119f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2119f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2119fc: 0xc084694  jal         func_211A50
    ctx->pc = 0x2119FCu;
    SET_GPR_U32(ctx, 31, 0x211A04u);
    ctx->pc = 0x211A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2119FCu;
    // 0x211a00: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211A50u, 0x2119FCu, 0x211A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A04u;
label_211a04:
    // 0x211a04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x211a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x211A08u;
    {
        const bool branch_taken_0x211a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A08u;
        // 0x211a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211a08) {
            ctx->pc = 0x211A38u;
            goto label_211a38;
        }
    }
    ctx->pc = 0x211A10u;
    // 0x211a10: 0xc084646  jal         func_211918
    ctx->pc = 0x211A10u;
    SET_GPR_U32(ctx, 31, 0x211A18u);
    ctx->pc = 0x211918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211918u, 0x211A10u, 0x211A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A18u;
label_211a18:
    // 0x211a18: 0xc0846a8  jal         func_211AA0
    ctx->pc = 0x211A18u;
    SET_GPR_U32(ctx, 31, 0x211A20u);
    ctx->pc = 0x211A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A18u;
    // 0x211a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211AA0u, 0x211A18u, 0x211A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211A20u;
label_211a20:
    // 0x211a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211a28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211a2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211a30: 0x8084830  j           func_2120C0
    ctx->pc = 0x211A30u;
    ctx->pc = 0x211A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211A30u;
    // 0x211a34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2120C0u;
    sub_002120C0_0x2120c0(rdram, ctx, runtime); return;
    ctx->pc = 0x211A38u;
label_211a38:
    // 0x211a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211a3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211a44: 0x3e00008  jr          $ra
    ctx->pc = 0x211A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211A44u;
        // 0x211a48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211A4Cu;
}
