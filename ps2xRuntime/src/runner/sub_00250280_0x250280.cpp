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

// Function: sub_00250280
// Address: 0x250280 - 0x2502dc
void sub_00250280_0x250280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250280_0x250280");
#endif

    switch (ctx->pc) {
        case 0x2502acu: goto label_2502ac;
        case 0x2502c0u: goto label_2502c0;
        default: break;
    }

    ctx->pc = 0x250280u;

    // 0x250280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x250288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25028c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x250290: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x250290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250294: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x250294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x250298: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x250298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25029c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25029cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2502a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2502a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2502a4: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x2502A4u;
    SET_GPR_U32(ctx, 31, 0x2502ACu);
    ctx->pc = 0x2502A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2502A4u;
    // 0x2502a8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x2502A4u, 0x2502ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502ACu;
label_2502ac:
    // 0x2502ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2502acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2502b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2502b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502b8: 0xc0940b8  jal         func_2502E0
    ctx->pc = 0x2502B8u;
    SET_GPR_U32(ctx, 31, 0x2502C0u);
    ctx->pc = 0x2502BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2502B8u;
    // 0x2502bc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2502E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2502E0u, 0x2502B8u, 0x2502C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502C0u;
label_2502c0:
    // 0x2502c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2502c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2502c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2502c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2502c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2502c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2502cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2502ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2502d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2502d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2502d4: 0x8093f40  j           func_24FD00
    ctx->pc = 0x2502D4u;
    ctx->pc = 0x2502D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2502D4u;
    // 0x2502d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x2502DCu;
}
