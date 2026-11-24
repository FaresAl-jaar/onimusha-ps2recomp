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

// Function: sub_00376290
// Address: 0x376290 - 0x3762e0
void sub_00376290_0x376290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376290_0x376290");
#endif

    switch (ctx->pc) {
        case 0x376290u: goto label_376290;
        case 0x376294u: goto label_376294;
        case 0x376298u: goto label_376298;
        case 0x37629cu: goto label_37629c;
        case 0x3762a0u: goto label_3762a0;
        case 0x3762a4u: goto label_3762a4;
        case 0x3762a8u: goto label_3762a8;
        case 0x3762acu: goto label_3762ac;
        case 0x3762b0u: goto label_3762b0;
        case 0x3762b4u: goto label_3762b4;
        case 0x3762b8u: goto label_3762b8;
        case 0x3762bcu: goto label_3762bc;
        case 0x3762c0u: goto label_3762c0;
        case 0x3762c4u: goto label_3762c4;
        case 0x3762c8u: goto label_3762c8;
        case 0x3762ccu: goto label_3762cc;
        case 0x3762d0u: goto label_3762d0;
        case 0x3762d4u: goto label_3762d4;
        case 0x3762d8u: goto label_3762d8;
        case 0x3762dcu: goto label_3762dc;
        default: break;
    }

    ctx->pc = 0x376290u;

label_376290:
    // 0x376290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_376294:
    // 0x376294: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x376294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_376298:
    // 0x376298: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x376298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37629c:
    // 0x37629c: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x37629cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
label_3762a0:
    // 0x3762a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3762a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3762a4:
    // 0x3762a4: 0xc096c3c  jal         func_25B0F0
label_3762a8:
    if (ctx->pc == 0x3762A8u) {
        ctx->pc = 0x3762A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762A4u;
        // 0x3762a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3762ACu;
        goto label_3762ac;
    }
    ctx->pc = 0x3762A4u;
    SET_GPR_U32(ctx, 31, 0x3762ACu);
    ctx->pc = 0x3762A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3762A4u;
    // 0x3762a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3762A4u, 0x3762ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3762ACu;
label_3762ac:
    // 0x3762ac: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x3762acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_3762b0:
    // 0x3762b0: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x3762b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
label_3762b4:
    // 0x3762b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3762b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3762b8:
    // 0x3762b8: 0xc0c8b74  jal         func_322DD0
label_3762bc:
    if (ctx->pc == 0x3762BCu) {
        ctx->pc = 0x3762BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762B8u;
        // 0x3762bc: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3762C0u;
        goto label_3762c0;
    }
    ctx->pc = 0x3762B8u;
    SET_GPR_U32(ctx, 31, 0x3762C0u);
    ctx->pc = 0x3762BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3762B8u;
    // 0x3762bc: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322DD0u, 0x3762B8u, 0x3762C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3762C0u;
label_3762c0:
    // 0x3762c0: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3762c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3762c4:
    // 0x3762c4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3762c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3762c8:
    // 0x3762c8: 0x320f809  jalr        $t9
label_3762cc:
    if (ctx->pc == 0x3762CCu) {
        ctx->pc = 0x3762CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762C8u;
        // 0x3762cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3762D0u;
        goto label_3762d0;
    }
    ctx->pc = 0x3762C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3762D0u);
        ctx->pc = 0x3762CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762C8u;
        // 0x3762cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3762C8u, 0x3762D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3762D0u;
label_3762d0:
    // 0x3762d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3762d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3762d4:
    // 0x3762d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3762d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3762d8:
    // 0x3762d8: 0x3e00008  jr          $ra
label_3762dc:
    if (ctx->pc == 0x3762DCu) {
        ctx->pc = 0x3762DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762D8u;
        // 0x3762dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3762E0u;
        goto label_fallthrough_0x3762d8;
    }
    ctx->pc = 0x3762D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3762DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3762D8u;
        // 0x3762dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3762D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3762d8:
    ctx->pc = 0x3762E0u;
}
