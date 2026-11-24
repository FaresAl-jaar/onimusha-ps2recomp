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

// Function: sub_002091A0
// Address: 0x2091a0 - 0x20920c
void sub_002091A0_0x2091a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002091A0_0x2091a0");
#endif

    switch (ctx->pc) {
        case 0x2091bcu: goto label_2091bc;
        case 0x2091f0u: goto label_2091f0;
        default: break;
    }

    ctx->pc = 0x2091a0u;

    // 0x2091a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2091a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2091a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2091a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2091a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2091a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2091acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2091b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2091b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2091b4: 0xc081d84  jal         func_207610
    ctx->pc = 0x2091B4u;
    SET_GPR_U32(ctx, 31, 0x2091BCu);
    ctx->pc = 0x2091B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2091B4u;
    // 0x2091b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x2091B4u, 0x2091BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091BCu;
label_2091bc:
    // 0x2091bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2091bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2091c0: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2091C0u;
    {
        const bool branch_taken_0x2091c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2091C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2091C0u;
        // 0x2091c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2091c0) {
            ctx->pc = 0x2091E8u;
            goto label_2091e8;
        }
    }
    ctx->pc = 0x2091C8u;
    // 0x2091c8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x2091c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x2091cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2091ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2091d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2091d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2091d4: 0x24847ed8  addiu       $a0, $a0, 0x7ED8
    ctx->pc = 0x2091d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32472));
    // 0x2091d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2091d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2091dc: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x2091DCu;
    ctx->pc = 0x2091E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2091DCu;
    // 0x2091e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2091E4u;
    // 0x2091e4: 0x0  nop
    ctx->pc = 0x2091e4u;
    // NOP
label_2091e8:
    // 0x2091e8: 0xc0821e6  jal         func_208798
    ctx->pc = 0x2091E8u;
    SET_GPR_U32(ctx, 31, 0x2091F0u);
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x2091E8u, 0x2091F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091F0u;
label_2091f0:
    // 0x2091f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2091f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2091f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2091f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2091f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2091fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2091fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209204: 0x8089938  j           func_2264E0
    ctx->pc = 0x209204u;
    ctx->pc = 0x209208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209204u;
    // 0x209208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264E0u;
    sub_002264E0_0x2264e0(rdram, ctx, runtime); return;
    ctx->pc = 0x20920Cu;
}
