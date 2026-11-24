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

// Function: sub_001341C0
// Address: 0x1341c0 - 0x134268
void sub_001341C0_0x1341c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001341C0_0x1341c0");
#endif

    switch (ctx->pc) {
        case 0x134228u: goto label_134228;
        case 0x134234u: goto label_134234;
        case 0x13423cu: goto label_13423c;
        case 0x13424cu: goto label_13424c;
        case 0x134258u: goto label_134258;
        default: break;
    }

    ctx->pc = 0x1341c0u;

    // 0x1341c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1341c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1341c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1341c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1341c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1341c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1341cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1341ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1341d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1341d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341d4: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x1341d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x1341d8: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x1341d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1341dc: 0x90860008  lbu         $a2, 0x8($a0)
    ctx->pc = 0x1341dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1341e0: 0x433804  sllv        $a3, $v1, $v0
    ctx->pc = 0x1341e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1341e4: 0xc34004  sllv        $t0, $v1, $a2
    ctx->pc = 0x1341e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x1341e8: 0x81182  srl         $v0, $t0, 6
    ctx->pc = 0x1341e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
    // 0x1341ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1341ECu;
    {
        const bool branch_taken_0x1341ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1341F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341ECu;
        // 0x1341f0: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341ec) {
            ctx->pc = 0x1341F8u;
            goto label_1341f8;
        }
    }
    ctx->pc = 0x1341F4u;
    // 0x1341f4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1341f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1341f8:
    // 0x1341f8: 0x75c3c  dsll32      $t3, $a3, 16
    ctx->pc = 0x1341f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1341fc: 0x8543c  dsll32      $t2, $t0, 16
    ctx->pc = 0x1341fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) << (32 + 16));
    // 0x134200: 0x9087000a  lbu         $a3, 0xA($a0)
    ctx->pc = 0x134200u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x134204: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x134204u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x134208: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x134208u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x13420c: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x13420cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x134210: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x134210u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x134214: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x134214u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134218: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x134218u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13421c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13421cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x134220: 0xc040df4  jal         func_1037D0
    ctx->pc = 0x134220u;
    SET_GPR_U32(ctx, 31, 0x134228u);
    ctx->pc = 0x134224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134220u;
    // 0x134224: 0x24840d70  addiu       $a0, $a0, 0xD70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1037D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1037D0u, 0x134220u, 0x134228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134228u;
label_134228:
    // 0x134228: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x134228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13422c: 0xc040d2e  jal         func_1034B8
    ctx->pc = 0x13422Cu;
    SET_GPR_U32(ctx, 31, 0x134234u);
    ctx->pc = 0x134230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13422Cu;
    // 0x134230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034B8u, 0x13422Cu, 0x134234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134234u;
label_134234:
    // 0x134234: 0xc043898  jal         func_10E260
    ctx->pc = 0x134234u;
    SET_GPR_U32(ctx, 31, 0x13423Cu);
    ctx->pc = 0x134238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134234u;
    // 0x134238: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x134234u, 0x13423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13423Cu;
label_13423c:
    // 0x13423c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13423cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x134240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134244: 0xc040e6e  jal         func_1039B8
    ctx->pc = 0x134244u;
    SET_GPR_U32(ctx, 31, 0x13424Cu);
    ctx->pc = 0x134248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134244u;
    // 0x134248: 0x24840d70  addiu       $a0, $a0, 0xD70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1039B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039B8u, 0x134244u, 0x13424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13424Cu;
label_13424c:
    // 0x13424c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13424cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134250: 0xc040d2e  jal         func_1034B8
    ctx->pc = 0x134250u;
    SET_GPR_U32(ctx, 31, 0x134258u);
    ctx->pc = 0x134254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134250u;
    // 0x134254: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034B8u, 0x134250u, 0x134258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134258u;
label_134258:
    // 0x134258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x134258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13425c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13425cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134260: 0x3e00008  jr          $ra
    ctx->pc = 0x134260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134260u;
        // 0x134264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134268u;
}
