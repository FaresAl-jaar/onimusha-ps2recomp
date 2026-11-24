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

// Function: sub_002086A8
// Address: 0x2086a8 - 0x208708
void sub_002086A8_0x2086a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002086A8_0x2086a8");
#endif

    switch (ctx->pc) {
        case 0x2086c4u: goto label_2086c4;
        default: break;
    }

    ctx->pc = 0x2086a8u;

    // 0x2086a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2086a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2086ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2086acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2086b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2086b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2086b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2086b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2086b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2086bc: 0xc081d84  jal         func_207610
    ctx->pc = 0x2086BCu;
    SET_GPR_U32(ctx, 31, 0x2086C4u);
    ctx->pc = 0x2086C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2086BCu;
    // 0x2086c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x2086BCu, 0x2086C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2086C4u;
label_2086c4:
    // 0x2086c4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2086c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2086c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2086c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2086cc: 0x24847bc8  addiu       $a0, $a0, 0x7BC8
    ctx->pc = 0x2086ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31688));
    // 0x2086d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2086d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086d4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2086D4u;
    {
        const bool branch_taken_0x2086d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2086D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086D4u;
        // 0x2086d8: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086d4) {
            ctx->pc = 0x2086F0u;
            goto label_2086f0;
        }
    }
    ctx->pc = 0x2086DCu;
    // 0x2086dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2086dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2086e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2086e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2086e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2086e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2086e8: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x2086E8u;
    ctx->pc = 0x2086ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2086E8u;
    // 0x2086ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2086F0u;
label_2086f0:
    // 0x2086f0: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x2086f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2086f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2086f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2086f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2086f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2086fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2086fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208700: 0x8087e0e  j           func_21F838
    ctx->pc = 0x208700u;
    ctx->pc = 0x208704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208700u;
    // 0x208704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x208708u;
}
