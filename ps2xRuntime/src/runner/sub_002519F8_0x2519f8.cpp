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

// Function: sub_002519F8
// Address: 0x2519f8 - 0x251a54
void sub_002519F8_0x2519f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002519F8_0x2519f8");
#endif

    switch (ctx->pc) {
        case 0x251a24u: goto label_251a24;
        case 0x251a38u: goto label_251a38;
        default: break;
    }

    ctx->pc = 0x2519f8u;

    // 0x2519f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2519f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2519fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2519fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x251a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x251a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x251a08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x251a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x251a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x251a10: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x251a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x251a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x251a18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x251a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x251a1c: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x251A1Cu;
    SET_GPR_U32(ctx, 31, 0x251A24u);
    ctx->pc = 0x251A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251A1Cu;
    // 0x251a20: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x251A1Cu, 0x251A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251A24u;
label_251a24:
    // 0x251a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x251a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x251a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a30: 0xc094696  jal         func_251A58
    ctx->pc = 0x251A30u;
    SET_GPR_U32(ctx, 31, 0x251A38u);
    ctx->pc = 0x251A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251A30u;
    // 0x251a34: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251A58u, 0x251A30u, 0x251A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251A38u;
label_251a38:
    // 0x251a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251a3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x251a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x251a40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x251a40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251a44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x251a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251a48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x251a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251a4c: 0x8093f40  j           func_24FD00
    ctx->pc = 0x251A4Cu;
    ctx->pc = 0x251A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251A4Cu;
    // 0x251a50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x251A54u;
}
