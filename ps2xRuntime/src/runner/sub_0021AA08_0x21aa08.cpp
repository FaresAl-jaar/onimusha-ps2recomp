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

// Function: sub_0021AA08
// Address: 0x21aa08 - 0x21aa58
void sub_0021AA08_0x21aa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AA08_0x21aa08");
#endif

    switch (ctx->pc) {
        case 0x21aa28u: goto label_21aa28;
        default: break;
    }

    ctx->pc = 0x21aa08u;

    // 0x21aa08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21aa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21aa0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21aa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21aa10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21aa10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21aa18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21aa18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21aa1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21aa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21aa20: 0xc043808  jal         func_10E020
    ctx->pc = 0x21AA20u;
    SET_GPR_U32(ctx, 31, 0x21AA28u);
    ctx->pc = 0x21AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA20u;
    // 0x21aa24: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x21AA20u, 0x21AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA28u;
label_21aa28:
    // 0x21aa28: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x21aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21aa2c: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x21aa2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x21aa30: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x21aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x21aa34: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x21aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21aa38: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x21aa38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x21aa3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21aa3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21aa40: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x21aa40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x21aa44: 0xfe020048  sd          $v0, 0x48($s0)
    ctx->pc = 0x21aa44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x21aa48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21aa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21aa4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21aa4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21aa50: 0x8043800  j           func_10E000
    ctx->pc = 0x21AA50u;
    ctx->pc = 0x21AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA50u;
    // 0x21aa54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    sub_0010E000_0x10e000(rdram, ctx, runtime); return;
    ctx->pc = 0x21AA58u;
}
