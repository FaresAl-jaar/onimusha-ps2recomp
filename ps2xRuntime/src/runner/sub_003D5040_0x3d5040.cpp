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

// Function: sub_003D5040
// Address: 0x3d5040 - 0x3d50b0
void sub_003D5040_0x3d5040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5040_0x3d5040");
#endif

    switch (ctx->pc) {
        case 0x3d5054u: goto label_3d5054;
        case 0x3d507cu: goto label_3d507c;
        default: break;
    }

    ctx->pc = 0x3d5040u;

    // 0x3d5040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d5040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d5044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d5044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d5048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d5048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d504c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3D504Cu;
    SET_GPR_U32(ctx, 31, 0x3D5054u);
    ctx->pc = 0x3D5050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D504Cu;
    // 0x3d5050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3D504Cu, 0x3D5054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5054u;
label_3d5054:
    // 0x3d5054: 0x920307d8  lbu         $v1, 0x7D8($s0)
    ctx->pc = 0x3d5054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x3d5058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d5058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d505c: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D505Cu;
    {
        const bool branch_taken_0x3d505c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x3D5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D505Cu;
        // 0x3d5060: 0x240300f0  addiu       $v1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d505c) {
            ctx->pc = 0x3D5070u;
            goto label_3d5070;
        }
    }
    ctx->pc = 0x3D5064u;
    // 0x3d5064: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3D5064u;
    {
        const bool branch_taken_0x3d5064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5064u;
        // 0x3d5068: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5064) {
            ctx->pc = 0x3D5080u;
            goto label_3d5080;
        }
    }
    ctx->pc = 0x3D506Cu;
    // 0x3d506c: 0x0  nop
    ctx->pc = 0x3d506cu;
    // NOP
label_3d5070:
    // 0x3d5070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d5070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5074: 0xc0a69dc  jal         func_29A770
    ctx->pc = 0x3D5074u;
    SET_GPR_U32(ctx, 31, 0x3D507Cu);
    ctx->pc = 0x3D5078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5074u;
    // 0x3d5078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A770u, 0x3D5074u, 0x3D507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D507Cu;
label_3d507c:
    // 0x3d507c: 0x0  nop
    ctx->pc = 0x3d507cu;
    // NOP
label_3d5080:
    // 0x3d5080: 0xae002b20  sw          $zero, 0x2B20($s0)
    ctx->pc = 0x3d5080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 0));
    // 0x3d5084: 0x8e0306c8  lw          $v1, 0x6C8($s0)
    ctx->pc = 0x3d5084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3d5088: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x3d5088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x3d508c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d508cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d5090: 0xae0306c8  sw          $v1, 0x6C8($s0)
    ctx->pc = 0x3d5090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 3));
    // 0x3d5094: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x3d5094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3d5098: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3d5098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3d509c: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x3d509cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x3d50a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d50a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d50a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d50a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d50a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D50A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D50ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50A8u;
        // 0x3d50ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D50A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D50B0u;
}
