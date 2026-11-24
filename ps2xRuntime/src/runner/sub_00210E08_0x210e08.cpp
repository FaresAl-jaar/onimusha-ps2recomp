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

// Function: sub_00210E08
// Address: 0x210e08 - 0x210e54
void sub_00210E08_0x210e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210E08_0x210e08");
#endif

    switch (ctx->pc) {
        case 0x210e38u: goto label_210e38;
        default: break;
    }

    ctx->pc = 0x210e08u;

    // 0x210e08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x210e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x210e0c: 0x28a20801  slti        $v0, $a1, 0x801
    ctx->pc = 0x210e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x210e10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x210e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210e14: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x210e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x210e18: 0xa2800b  movn        $s0, $a1, $v0
    ctx->pc = 0x210e18u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x210e1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x210e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x210e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x210e24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x210e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e28: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x210e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x210e2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x210e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x210e30: 0xc07eb68  jal         func_1FADA0
    ctx->pc = 0x210E30u;
    SET_GPR_U32(ctx, 31, 0x210E38u);
    ctx->pc = 0x210E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210E30u;
    // 0x210e34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x210E30u, 0x210E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E38u;
label_210e38:
    // 0x210e38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x210e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210e3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210e40: 0xae300090  sw          $s0, 0x90($s1)
    ctx->pc = 0x210e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    // 0x210e44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x210e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210e48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x210e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x210e4c: 0x80846a8  j           func_211AA0
    ctx->pc = 0x210E4Cu;
    ctx->pc = 0x210E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210E4Cu;
    // 0x210e50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211AA0u;
    sub_00211AA0_0x211aa0(rdram, ctx, runtime); return;
    ctx->pc = 0x210E54u;
}
