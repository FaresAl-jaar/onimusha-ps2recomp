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

// Function: sub_00323F40
// Address: 0x323f40 - 0x323ffc
void sub_00323F40_0x323f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323F40_0x323f40");
#endif

    switch (ctx->pc) {
        case 0x323f5cu: goto label_323f5c;
        case 0x323fa0u: goto label_323fa0;
        case 0x323fc0u: goto label_323fc0;
        default: break;
    }

    ctx->pc = 0x323f40u;

    // 0x323f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323f44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x323f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323f4c: 0x24060900  addiu       $a2, $zero, 0x900
    ctx->pc = 0x323f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
    // 0x323f50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323f54: 0xc049590  jal         func_125640
    ctx->pc = 0x323F54u;
    SET_GPR_U32(ctx, 31, 0x323F5Cu);
    ctx->pc = 0x323F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323F54u;
    // 0x323f58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x323F54u, 0x323F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323F5Cu;
label_323f5c:
    // 0x323f5c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x323f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x323f60: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x323f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x323f64: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x323f64u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x323f68: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x323f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x323f6c: 0xa023ad43  sb          $v1, -0x52BD($at)
    ctx->pc = 0x323f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946115), (uint8_t)GPR_U32(ctx, 3));
    // 0x323f70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x323f70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f74: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x323f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x323f78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x323f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x323f7c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x323f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x323f80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x323f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f84: 0xa024ad40  sb          $a0, -0x52C0($at)
    ctx->pc = 0x323f84u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946112), (uint8_t)GPR_U32(ctx, 4));
    // 0x323f88: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x323f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x323f8c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x323f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x323f90: 0xa023ad87  sb          $v1, -0x5279($at)
    ctx->pc = 0x323f90u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946183), (uint8_t)GPR_U32(ctx, 3));
    // 0x323f94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x323f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x323f98: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x323f98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x323f9c: 0xa023ad84  sb          $v1, -0x527C($at)
    ctx->pc = 0x323f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946180), (uint8_t)GPR_U32(ctx, 3));
label_323fa0:
    // 0x323fa0: 0x3401ad00  ori         $at, $zero, 0xAD00
    ctx->pc = 0x323fa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44288);
    // 0x323fa4: 0x2013021  addu        $a2, $s0, $at
    ctx->pc = 0x323fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x323fa8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x323fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323fac: 0x80c50043  lb          $a1, 0x43($a2)
    ctx->pc = 0x323facu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 67)));
    // 0x323fb0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x323fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x323fb4: 0xa0c30042  sb          $v1, 0x42($a2)
    ctx->pc = 0x323fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 66), (uint8_t)GPR_U32(ctx, 3));
    // 0x323fb8: 0xa0c00041  sb          $zero, 0x41($a2)
    ctx->pc = 0x323fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x323fbc: 0x0  nop
    ctx->pc = 0x323fbcu;
    // NOP
label_323fc0:
    // 0x323fc0: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x323fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x323fc4: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x323fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x323fc8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x323fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x323fcc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x323fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x323fd0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x323fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x323fd4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x323FD4u;
    {
        const bool branch_taken_0x323fd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x323fd4) {
            ctx->pc = 0x323FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323fc0;
        }
    }
    ctx->pc = 0x323FDCu;
    // 0x323fdc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x323fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x323fe0: 0x28e30002  slti        $v1, $a3, 0x2
    ctx->pc = 0x323fe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x323fe4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x323FE4u;
    {
        const bool branch_taken_0x323fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x323FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323FE4u;
        // 0x323fe8: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323fe4) {
            ctx->pc = 0x323FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323fa0;
        }
    }
    ctx->pc = 0x323FECu;
    // 0x323fec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x323FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323FF4u;
        // 0x323ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323FFCu;
}
