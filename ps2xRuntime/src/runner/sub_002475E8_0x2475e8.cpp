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

// Function: sub_002475E8
// Address: 0x2475e8 - 0x247658
void sub_002475E8_0x2475e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002475E8_0x2475e8");
#endif

    switch (ctx->pc) {
        case 0x247608u: goto label_247608;
        case 0x24763cu: goto label_24763c;
        default: break;
    }

    ctx->pc = 0x2475e8u;

    // 0x2475e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2475e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2475ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2475ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2475f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2475f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2475f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2475f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2475f8: 0x18c0000a  blez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2475F8u;
    {
        const bool branch_taken_0x2475f8 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2475FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475F8u;
        // 0x2475fc: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2475f8) {
            ctx->pc = 0x247624u;
            goto label_247624;
        }
    }
    ctx->pc = 0x247600u;
    // 0x247600: 0x2407ffaa  addiu       $a3, $zero, -0x56
    ctx->pc = 0x247600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x247604: 0x0  nop
    ctx->pc = 0x247604u;
    // NOP
label_247608:
    // 0x247608: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x247608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x24760c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24760cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x247610: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x247610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x247614: 0x0  nop
    ctx->pc = 0x247614u;
    // NOP
    // 0x247618: 0x0  nop
    ctx->pc = 0x247618u;
    // NOP
    // 0x24761c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24761Cu;
    {
        const bool branch_taken_0x24761c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24761Cu;
        // 0x247620: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24761c) {
            ctx->pc = 0x247608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247608;
        }
    }
    ctx->pc = 0x247624u;
label_247624:
    // 0x247624: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x247624u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
    // 0x247628: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x247628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24762c: 0x2610f234  addiu       $s0, $s0, -0xDCC
    ctx->pc = 0x24762cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963764));
    // 0x247630: 0x24a5cd38  addiu       $a1, $a1, -0x32C8
    ctx->pc = 0x247630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954296));
    // 0x247634: 0xc049ce8  jal         func_1273A0
    ctx->pc = 0x247634u;
    SET_GPR_U32(ctx, 31, 0x24763Cu);
    ctx->pc = 0x247638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247634u;
    // 0x247638: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1273A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1273A0u, 0x247634u, 0x24763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24763Cu;
label_24763c:
    // 0x24763c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247640: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x247640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247644: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x247644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x247648: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x247648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x24764c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24764cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247650: 0x3e00008  jr          $ra
    ctx->pc = 0x247650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247650u;
        // 0x247654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247658u;
}
