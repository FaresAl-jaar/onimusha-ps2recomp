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

// Function: sub_0010BB80
// Address: 0x10bb80 - 0x10bbf8
void sub_0010BB80_0x10bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BB80_0x10bb80");
#endif

    switch (ctx->pc) {
        case 0x10bb80u: goto label_10bb80;
        case 0x10bb84u: goto label_10bb84;
        case 0x10bb88u: goto label_10bb88;
        case 0x10bb8cu: goto label_10bb8c;
        case 0x10bb90u: goto label_10bb90;
        case 0x10bb94u: goto label_10bb94;
        case 0x10bb98u: goto label_10bb98;
        case 0x10bb9cu: goto label_10bb9c;
        case 0x10bba0u: goto label_10bba0;
        case 0x10bba4u: goto label_10bba4;
        case 0x10bba8u: goto label_10bba8;
        case 0x10bbacu: goto label_10bbac;
        case 0x10bbb0u: goto label_10bbb0;
        case 0x10bbb4u: goto label_10bbb4;
        case 0x10bbb8u: goto label_10bbb8;
        case 0x10bbbcu: goto label_10bbbc;
        case 0x10bbc0u: goto label_10bbc0;
        case 0x10bbc4u: goto label_10bbc4;
        case 0x10bbc8u: goto label_10bbc8;
        case 0x10bbccu: goto label_10bbcc;
        case 0x10bbd0u: goto label_10bbd0;
        case 0x10bbd4u: goto label_10bbd4;
        case 0x10bbd8u: goto label_10bbd8;
        case 0x10bbdcu: goto label_10bbdc;
        case 0x10bbe0u: goto label_10bbe0;
        case 0x10bbe4u: goto label_10bbe4;
        case 0x10bbe8u: goto label_10bbe8;
        case 0x10bbecu: goto label_10bbec;
        case 0x10bbf0u: goto label_10bbf0;
        case 0x10bbf4u: goto label_10bbf4;
        default: break;
    }

    ctx->pc = 0x10bb80u;

label_10bb80:
    // 0x10bb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10bb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10bb84:
    // 0x10bb84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10bb84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bb88:
    // 0x10bb88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10bb8c:
    // 0x10bb8c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_10bb90:
    if (ctx->pc == 0x10BB90u) {
        ctx->pc = 0x10BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB8Cu;
        // 0x10bb90: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BB94u;
        goto label_10bb94;
    }
    ctx->pc = 0x10BB8Cu;
    {
        const bool branch_taken_0x10bb8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB8Cu;
        // 0x10bb90: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb8c) {
            ctx->pc = 0x10BBE4u;
            goto label_10bbe4;
        }
    }
    ctx->pc = 0x10BB94u;
label_10bb94:
    // 0x10bb94: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x10bb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_10bb98:
    // 0x10bb98: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_10bb9c:
    if (ctx->pc == 0x10BB9Cu) {
        ctx->pc = 0x10BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB98u;
        // 0x10bb9c: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BBA0u;
        goto label_10bba0;
    }
    ctx->pc = 0x10BB98u;
    {
        const bool branch_taken_0x10bb98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB98u;
        // 0x10bb9c: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb98) {
            ctx->pc = 0x10BBE4u;
            goto label_10bbe4;
        }
    }
    ctx->pc = 0x10BBA0u;
label_10bba0:
    // 0x10bba0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10bba4:
    // 0x10bba4: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x10bba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_10bba8:
    // 0x10bba8: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x10bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_10bbac:
    // 0x10bbac: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x10bbacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_10bbb0:
    // 0x10bbb0: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_10bbb4:
    if (ctx->pc == 0x10BBB4u) {
        ctx->pc = 0x10BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBB0u;
        // 0x10bbb4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BBB8u;
        goto label_10bbb8;
    }
    ctx->pc = 0x10BBB0u;
    {
        const bool branch_taken_0x10bbb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBB0u;
        // 0x10bbb4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bbb0) {
            ctx->pc = 0x10BBE8u;
            goto label_10bbe8;
        }
    }
    ctx->pc = 0x10BBB8u;
label_10bbb8:
    // 0x10bbb8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x10bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_10bbbc:
    // 0x10bbbc: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x10bbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10bbc0:
    // 0x10bbc0: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x10bbc0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10bbc4:
    // 0x10bbc4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10bbc8:
    // 0x10bbc8: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x10bbc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_10bbcc:
    // 0x10bbcc: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x10bbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_10bbd0:
    // 0x10bbd0: 0xe0f809  jalr        $a3
label_10bbd4:
    if (ctx->pc == 0x10BBD4u) {
        ctx->pc = 0x10BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBD0u;
        // 0x10bbd4: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BBD8u;
        goto label_10bbd8;
    }
    ctx->pc = 0x10BBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x10BBD8u);
        ctx->pc = 0x10BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBD0u;
        // 0x10bbd4: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BBD0u, 0x10BBD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BBD8u;
label_10bbd8:
    // 0x10bbd8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x10bbd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10bbdc:
    // 0x10bbdc: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x10bbdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10bbe0:
    // 0x10bbe0: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x10bbe0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10bbe4:
    // 0x10bbe4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10bbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10bbe8:
    // 0x10bbe8: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x10bbe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_10bbec:
    // 0x10bbec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bbecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bbf0:
    // 0x10bbf0: 0x3e00008  jr          $ra
label_10bbf4:
    if (ctx->pc == 0x10BBF4u) {
        ctx->pc = 0x10BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBF0u;
        // 0x10bbf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BBF8u;
        goto label_fallthrough_0x10bbf0;
    }
    ctx->pc = 0x10BBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBF0u;
        // 0x10bbf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10bbf0:
    ctx->pc = 0x10BBF8u;
}
