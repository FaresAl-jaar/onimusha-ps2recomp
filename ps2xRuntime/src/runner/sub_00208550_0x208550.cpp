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

// Function: sub_00208550
// Address: 0x208550 - 0x208594
void sub_00208550_0x208550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208550_0x208550");
#endif

    switch (ctx->pc) {
        case 0x208574u: goto label_208574;
        default: break;
    }

    ctx->pc = 0x208550u;

    // 0x208550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x208554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208558: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20855c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20855cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x208560: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x208560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x208564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x208568: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x208568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x20856c: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x20856Cu;
    SET_GPR_U32(ctx, 31, 0x208574u);
    ctx->pc = 0x208570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20856Cu;
    // 0x208570: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x20856Cu, 0x208574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208574u;
label_208574:
    // 0x208574: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x208574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x208578: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x208578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20857c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20857cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208584: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x208584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x208588: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x208588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20858c: 0x8087e0e  j           func_21F838
    ctx->pc = 0x20858Cu;
    ctx->pc = 0x208590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20858Cu;
    // 0x208590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x208594u;
}
