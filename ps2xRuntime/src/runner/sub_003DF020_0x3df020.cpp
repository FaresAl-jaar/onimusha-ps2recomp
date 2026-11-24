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

// Function: sub_003DF020
// Address: 0x3df020 - 0x3df090
void sub_003DF020_0x3df020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF020_0x3df020");
#endif

    switch (ctx->pc) {
        case 0x3df054u: goto label_3df054;
        case 0x3df05cu: goto label_3df05c;
        default: break;
    }

    ctx->pc = 0x3df020u;

    // 0x3df020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3df020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3df024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3df024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3df028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3df028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3df02c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3df02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3df030: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3DF030u;
    {
        const bool branch_taken_0x3df030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF030u;
        // 0x3df034: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df030) {
            ctx->pc = 0x3DF080u;
            goto label_3df080;
        }
    }
    ctx->pc = 0x3DF038u;
    // 0x3df038: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3df038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3df03c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3df03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3df040: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3df040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3df044: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3df044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3df048: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3df048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3df04c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3DF04Cu;
    SET_GPR_U32(ctx, 31, 0x3DF054u);
    ctx->pc = 0x3DF050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF04Cu;
    // 0x3df050: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3DF04Cu, 0x3DF054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF054u;
label_3df054:
    // 0x3df054: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3DF054u;
    SET_GPR_U32(ctx, 31, 0x3DF05Cu);
    ctx->pc = 0x3DF058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF054u;
    // 0x3df058: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3DF054u, 0x3DF05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF05Cu;
label_3df05c:
    // 0x3df05c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3df05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3df060: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3df060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3df064: 0x24637430  addiu       $v1, $v1, 0x7430
    ctx->pc = 0x3df064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29744));
    // 0x3df068: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3df068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3df06c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3df06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3df070: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3df070u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3df074: 0x2463afc0  addiu       $v1, $v1, -0x5040
    ctx->pc = 0x3df074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946752));
    // 0x3df078: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3df078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3df07c: 0x0  nop
    ctx->pc = 0x3df07cu;
    // NOP
label_3df080:
    // 0x3df080: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3df080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3df084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3df084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3df088: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF088u;
        // 0x3df08c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF090u;
}
