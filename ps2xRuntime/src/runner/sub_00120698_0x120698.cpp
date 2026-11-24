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

// Function: sub_00120698
// Address: 0x120698 - 0x120730
void sub_00120698_0x120698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120698_0x120698");
#endif

    switch (ctx->pc) {
        case 0x1206acu: goto label_1206ac;
        case 0x1206ecu: goto label_1206ec;
        case 0x120700u: goto label_120700;
        case 0x12071cu: goto label_12071c;
        default: break;
    }

    ctx->pc = 0x120698u;

    // 0x120698: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12069c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1206a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1206a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1206a4: 0xc047eb0  jal         func_11FAC0
    ctx->pc = 0x1206A4u;
    SET_GPR_U32(ctx, 31, 0x1206ACu);
    ctx->pc = 0x1206A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1206A4u;
    // 0x1206a8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x1206A4u, 0x1206ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1206ACu;
label_1206ac:
    // 0x1206ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1206ACu;
    {
        const bool branch_taken_0x1206ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1206B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1206ACu;
        // 0x1206b0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1206ac) {
            ctx->pc = 0x1206BCu;
            goto label_1206bc;
        }
    }
    ctx->pc = 0x1206B4u;
    // 0x1206b4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1206B4u;
    {
        const bool branch_taken_0x1206b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1206B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1206B4u;
        // 0x1206b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1206b4) {
            ctx->pc = 0x120720u;
            goto label_120720;
        }
    }
    ctx->pc = 0x1206BCu;
label_1206bc:
    // 0x1206bc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1206bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1206c0: 0x24505380  addiu       $s0, $v0, 0x5380
    ctx->pc = 0x1206c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21376));
    // 0x1206c4: 0x24845d00  addiu       $a0, $a0, 0x5D00
    ctx->pc = 0x1206c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23808));
    // 0x1206c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1206c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1206cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1206ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1206d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1206d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1206d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1206d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206dc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1206dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206e0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1206e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1206e4: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x1206E4u;
    SET_GPR_U32(ctx, 31, 0x1206ECu);
    ctx->pc = 0x1206E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1206E4u;
    // 0x1206e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x1206E4u, 0x1206ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1206ECu;
label_1206ec:
    // 0x1206ec: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1206ECu;
    {
        const bool branch_taken_0x1206ec = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1206F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1206ECu;
        // 0x1206f0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1206ec) {
            ctx->pc = 0x120708u;
            goto label_120708;
        }
    }
    ctx->pc = 0x1206F4u;
    // 0x1206f4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1206f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1206f8: 0xc043800  jal         func_10E000
    ctx->pc = 0x1206F8u;
    SET_GPR_U32(ctx, 31, 0x120700u);
    ctx->pc = 0x1206FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1206F8u;
    // 0x1206fc: 0x8c4441ac  lw          $a0, 0x41AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x1206F8u, 0x120700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120700u;
label_120700:
    // 0x120700: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x120700u;
    {
        const bool branch_taken_0x120700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120700u;
        // 0x120704: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120700) {
            ctx->pc = 0x120720u;
            goto label_120720;
        }
    }
    ctx->pc = 0x120708u;
label_120708:
    // 0x120708: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x120708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x12070c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x12070cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x120710: 0x8c6441ac  lw          $a0, 0x41AC($v1)
    ctx->pc = 0x120710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16812)));
    // 0x120714: 0xc043800  jal         func_10E000
    ctx->pc = 0x120714u;
    SET_GPR_U32(ctx, 31, 0x12071Cu);
    ctx->pc = 0x120718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120714u;
    // 0x120718: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x120714u, 0x12071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12071Cu;
label_12071c:
    // 0x12071c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12071cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120720:
    // 0x120720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x120720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120724: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x120724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120728: 0x3e00008  jr          $ra
    ctx->pc = 0x120728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120728u;
        // 0x12072c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120730u;
}
