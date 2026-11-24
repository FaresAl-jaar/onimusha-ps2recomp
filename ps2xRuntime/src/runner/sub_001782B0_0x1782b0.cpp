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

// Function: sub_001782B0
// Address: 0x1782b0 - 0x178314
void sub_001782B0_0x1782b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001782B0_0x1782b0");
#endif

    switch (ctx->pc) {
        case 0x1782c8u: goto label_1782c8;
        case 0x1782d0u: goto label_1782d0;
        case 0x1782d8u: goto label_1782d8;
        case 0x1782e4u: goto label_1782e4;
        case 0x178304u: goto label_178304;
        default: break;
    }

    ctx->pc = 0x1782b0u;

    // 0x1782b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1782b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1782b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1782b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1782b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1782b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1782bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1782bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782c0: 0xc0410b0  jal         func_1042C0
    ctx->pc = 0x1782C0u;
    SET_GPR_U32(ctx, 31, 0x1782C8u);
    ctx->pc = 0x1782C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1782C0u;
    // 0x1782c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1042C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1042C0u, 0x1782C0u, 0x1782C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782C8u;
label_1782c8:
    // 0x1782c8: 0xc04177c  jal         func_105DF0
    ctx->pc = 0x1782C8u;
    SET_GPR_U32(ctx, 31, 0x1782D0u);
    ctx->pc = 0x105DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105DF0u, 0x1782C8u, 0x1782D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782D0u;
label_1782d0:
    // 0x1782d0: 0xc040a16  jal         func_102858
    ctx->pc = 0x1782D0u;
    SET_GPR_U32(ctx, 31, 0x1782D8u);
    ctx->pc = 0x102858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102858u, 0x1782D0u, 0x1782D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782D8u;
label_1782d8:
    // 0x1782d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1782d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782dc: 0xc05dc2c  jal         func_1770B0
    ctx->pc = 0x1782DCu;
    SET_GPR_U32(ctx, 31, 0x1782E4u);
    ctx->pc = 0x1782E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1782DCu;
    // 0x1782e0: 0xa2002def  sb          $zero, 0x2DEF($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11759), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1770B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1770B0u, 0x1782DCu, 0x1782E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782E4u;
label_1782e4:
    // 0x1782e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1782e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1782e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782ec: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1782ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1782f0: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x1782f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1782f4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1782f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1782f8: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x1782f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1782fc: 0xc05e1e8  jal         func_1787A0
    ctx->pc = 0x1782FCu;
    SET_GPR_U32(ctx, 31, 0x178304u);
    ctx->pc = 0x178300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1782FCu;
    // 0x178300: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1787A0u, 0x1782FCu, 0x178304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178304u;
label_178304:
    // 0x178304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17830c: 0x3e00008  jr          $ra
    ctx->pc = 0x17830Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17830Cu;
        // 0x178310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17830Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178314u;
}
