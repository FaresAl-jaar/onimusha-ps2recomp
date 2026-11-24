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

// Function: sub_00247F60
// Address: 0x247f60 - 0x247fd8
void sub_00247F60_0x247f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247F60_0x247f60");
#endif

    switch (ctx->pc) {
        case 0x247f74u: goto label_247f74;
        case 0x247f90u: goto label_247f90;
        default: break;
    }

    ctx->pc = 0x247f60u;

    // 0x247f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x247f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247f68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x247f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x247f6c: 0xc049f18  jal         func_127C60
    ctx->pc = 0x247F6Cu;
    SET_GPR_U32(ctx, 31, 0x247F74u);
    ctx->pc = 0x247F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F6Cu;
    // 0x247f70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x247F6Cu, 0x247F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F74u;
label_247f74:
    // 0x247f74: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x247f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247f78: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x247F78u;
    {
        const bool branch_taken_0x247f78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x247F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F78u;
        // 0x247f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f78) {
            ctx->pc = 0x247FC8u;
            goto label_247fc8;
        }
    }
    ctx->pc = 0x247F80u;
    // 0x247f80: 0x2409002f  addiu       $t1, $zero, 0x2F
    ctx->pc = 0x247f80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x247f84: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x247f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x247f88: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x247f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x247f8c: 0x0  nop
    ctx->pc = 0x247f8cu;
    // NOP
label_247f90:
    // 0x247f90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x247f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x247f94: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x247f94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x247f98: 0xc7282b  sltu        $a1, $a2, $a3
    ctx->pc = 0x247f98u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x247f9c: 0x14490003  bne         $v0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x247F9Cu;
    {
        const bool branch_taken_0x247f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x247FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F9Cu;
        // 0x247fa0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f9c) {
            ctx->pc = 0x247FACu;
            goto label_247fac;
        }
    }
    ctx->pc = 0x247FA4u;
    // 0x247fa4: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x247fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x247fa8: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x247fa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_247fac:
    // 0x247fac: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x247facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x247fb0: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x247fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x247fb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x247FB4u;
    {
        const bool branch_taken_0x247fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FB4u;
        // 0x247fb8: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fb4) {
            ctx->pc = 0x247FC0u;
            goto label_247fc0;
        }
    }
    ctx->pc = 0x247FBCu;
    // 0x247fbc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x247fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_247fc0:
    // 0x247fc0: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x247FC0u;
    {
        const bool branch_taken_0x247fc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x247FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FC0u;
        // 0x247fc4: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fc0) {
            ctx->pc = 0x247F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247f90;
        }
    }
    ctx->pc = 0x247FC8u;
label_247fc8:
    // 0x247fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247fcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x247fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x247FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FD0u;
        // 0x247fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247FD8u;
}
