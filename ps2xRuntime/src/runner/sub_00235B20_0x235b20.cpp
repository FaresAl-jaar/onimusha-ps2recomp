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

// Function: sub_00235B20
// Address: 0x235b20 - 0x235b60
void sub_00235B20_0x235b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235B20_0x235b20");
#endif

    switch (ctx->pc) {
        case 0x235b44u: goto label_235b44;
        default: break;
    }

    ctx->pc = 0x235b20u;

    // 0x235b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x235b24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235b28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235b30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x235b30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235b38: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x235b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x235b3c: 0xc08a70e  jal         func_229C38
    ctx->pc = 0x235B3Cu;
    SET_GPR_U32(ctx, 31, 0x235B44u);
    ctx->pc = 0x235B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B3Cu;
    // 0x235b40: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229C38u, 0x235B3Cu, 0x235B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235B44u;
label_235b44:
    // 0x235b44: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x235b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x235b48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235b4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235b50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235b58: 0x808a694  j           func_229A50
    ctx->pc = 0x235B58u;
    ctx->pc = 0x235B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B58u;
    // 0x235b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A50u;
    sub_00229A50_0x229a50(rdram, ctx, runtime); return;
    ctx->pc = 0x235B60u;
}
