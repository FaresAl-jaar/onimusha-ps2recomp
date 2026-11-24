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

// Function: sub_00130080
// Address: 0x130080 - 0x130118
void sub_00130080_0x130080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130080_0x130080");
#endif

    switch (ctx->pc) {
        case 0x13009cu: goto label_13009c;
        case 0x1300a8u: goto label_1300a8;
        case 0x1300b8u: goto label_1300b8;
        case 0x1300c8u: goto label_1300c8;
        case 0x1300dcu: goto label_1300dc;
        case 0x1300f0u: goto label_1300f0;
        default: break;
    }

    ctx->pc = 0x130080u;

    // 0x130080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130084: 0x24050401  addiu       $a1, $zero, 0x401
    ctx->pc = 0x130084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x130088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13008c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13008cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130094: 0xc05e470  jal         func_1791C0
    ctx->pc = 0x130094u;
    SET_GPR_U32(ctx, 31, 0x13009Cu);
    ctx->pc = 0x130098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130094u;
    // 0x130098: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791C0u, 0x130094u, 0x13009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13009Cu;
label_13009c:
    // 0x13009c: 0x26044020  addiu       $a0, $s0, 0x4020
    ctx->pc = 0x13009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16416));
    // 0x1300a0: 0xc05e470  jal         func_1791C0
    ctx->pc = 0x1300A0u;
    SET_GPR_U32(ctx, 31, 0x1300A8u);
    ctx->pc = 0x1300A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300A0u;
    // 0x1300a4: 0x24050401  addiu       $a1, $zero, 0x401 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791C0u, 0x1300A0u, 0x1300A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300A8u;
label_1300a8:
    // 0x1300a8: 0x34018030  ori         $at, $zero, 0x8030
    ctx->pc = 0x1300a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32816);
    // 0x1300ac: 0x24050401  addiu       $a1, $zero, 0x401
    ctx->pc = 0x1300acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x1300b0: 0xc05e470  jal         func_1791C0
    ctx->pc = 0x1300B0u;
    SET_GPR_U32(ctx, 31, 0x1300B8u);
    ctx->pc = 0x1300B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300B0u;
    // 0x1300b4: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791C0u, 0x1300B0u, 0x1300B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300B8u;
label_1300b8:
    // 0x1300b8: 0x3401c040  ori         $at, $zero, 0xC040
    ctx->pc = 0x1300b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49216);
    // 0x1300bc: 0x24050401  addiu       $a1, $zero, 0x401
    ctx->pc = 0x1300bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x1300c0: 0xc05e470  jal         func_1791C0
    ctx->pc = 0x1300C0u;
    SET_GPR_U32(ctx, 31, 0x1300C8u);
    ctx->pc = 0x1300C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300C0u;
    // 0x1300c4: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791C0u, 0x1300C0u, 0x1300C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300C8u;
label_1300c8:
    // 0x1300c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1300c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1300cc: 0x24050401  addiu       $a1, $zero, 0x401
    ctx->pc = 0x1300ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x1300d0: 0x34210050  ori         $at, $at, 0x50
    ctx->pc = 0x1300d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)80);
    // 0x1300d4: 0xc05e470  jal         func_1791C0
    ctx->pc = 0x1300D4u;
    SET_GPR_U32(ctx, 31, 0x1300DCu);
    ctx->pc = 0x1300D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300D4u;
    // 0x1300d8: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791C0u, 0x1300D4u, 0x1300DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300DCu;
label_1300dc:
    // 0x1300dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1300dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1300e0: 0x24050401  addiu       $a1, $zero, 0x401
    ctx->pc = 0x1300e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x1300e4: 0x34214060  ori         $at, $at, 0x4060
    ctx->pc = 0x1300e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16480);
    // 0x1300e8: 0xc05e470  jal         func_1791C0
    ctx->pc = 0x1300E8u;
    SET_GPR_U32(ctx, 31, 0x1300F0u);
    ctx->pc = 0x1300ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300E8u;
    // 0x1300ec: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791C0u, 0x1300E8u, 0x1300F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300F0u;
label_1300f0:
    // 0x1300f0: 0x24030fa0  addiu       $v1, $zero, 0xFA0
    ctx->pc = 0x1300f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x1300f4: 0x24040bb8  addiu       $a0, $zero, 0xBB8
    ctx->pc = 0x1300f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x1300f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1300f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1300fc: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x1300fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x130100: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x130100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x130104: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x130104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x130108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13010c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13010cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130110: 0x3e00008  jr          $ra
    ctx->pc = 0x130110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130110u;
        // 0x130114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130118u;
}
