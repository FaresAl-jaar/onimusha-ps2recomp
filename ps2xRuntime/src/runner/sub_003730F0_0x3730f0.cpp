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

// Function: sub_003730F0
// Address: 0x3730f0 - 0x373170
void sub_003730F0_0x3730f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003730F0_0x3730f0");
#endif

    switch (ctx->pc) {
        case 0x373110u: goto label_373110;
        case 0x373120u: goto label_373120;
        default: break;
    }

    ctx->pc = 0x3730f0u;

    // 0x3730f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3730f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3730f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3730f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3730f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3730f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3730fc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3730fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x373100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x373100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x373104: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373108: 0xc049590  jal         func_125640
    ctx->pc = 0x373108u;
    SET_GPR_U32(ctx, 31, 0x373110u);
    ctx->pc = 0x37310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373108u;
    // 0x37310c: 0x260401bd  addiu       $a0, $s0, 0x1BD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 445));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x373108u, 0x373110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373110u;
label_373110:
    // 0x373110: 0x920501bc  lbu         $a1, 0x1BC($s0)
    ctx->pc = 0x373110u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x373114: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x373114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373118: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x373118u;
    {
        const bool branch_taken_0x373118 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373118u;
        // 0x37311c: 0xa20001c2  sb          $zero, 0x1C2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 450), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373118) {
            ctx->pc = 0x373160u;
            goto label_373160;
        }
    }
    ctx->pc = 0x373120u;
label_373120:
    // 0x373120: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x373120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x373124: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x373124u;
    {
        const bool branch_taken_0x373124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373124) {
            ctx->pc = 0x373150u;
            goto label_373150;
        }
    }
    ctx->pc = 0x37312Cu;
    // 0x37312c: 0x920301c2  lbu         $v1, 0x1C2($s0)
    ctx->pc = 0x37312cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 450)));
    // 0x373130: 0x2c610005  sltiu       $at, $v1, 0x5
    ctx->pc = 0x373130u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x373134: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x373134u;
    {
        const bool branch_taken_0x373134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x373134) {
            ctx->pc = 0x373150u;
            goto label_373150;
        }
    }
    ctx->pc = 0x37313Cu;
    // 0x37313c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x37313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x373140: 0xa06401bd  sb          $a0, 0x1BD($v1)
    ctx->pc = 0x373140u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 445), (uint8_t)GPR_U32(ctx, 4));
    // 0x373144: 0x920301c2  lbu         $v1, 0x1C2($s0)
    ctx->pc = 0x373144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 450)));
    // 0x373148: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x373148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37314c: 0xa20301c2  sb          $v1, 0x1C2($s0)
    ctx->pc = 0x37314cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 450), (uint8_t)GPR_U32(ctx, 3));
label_373150:
    // 0x373150: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x373150u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x373154: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x373154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x373158: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x373158u;
    {
        const bool branch_taken_0x373158 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x37315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373158u;
        // 0x37315c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373158) {
            ctx->pc = 0x373120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373120;
        }
    }
    ctx->pc = 0x373160u;
label_373160:
    // 0x373160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x373160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x373164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373168: 0x3e00008  jr          $ra
    ctx->pc = 0x373168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373168u;
        // 0x37316c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373170u;
}
