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

// Function: sub_00244188
// Address: 0x244188 - 0x2441f0
void sub_00244188_0x244188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244188_0x244188");
#endif

    switch (ctx->pc) {
        case 0x244188u: goto label_244188;
        case 0x24418cu: goto label_24418c;
        case 0x244190u: goto label_244190;
        case 0x244194u: goto label_244194;
        case 0x244198u: goto label_244198;
        case 0x24419cu: goto label_24419c;
        case 0x2441a0u: goto label_2441a0;
        case 0x2441a4u: goto label_2441a4;
        case 0x2441a8u: goto label_2441a8;
        case 0x2441acu: goto label_2441ac;
        case 0x2441b0u: goto label_2441b0;
        case 0x2441b4u: goto label_2441b4;
        case 0x2441b8u: goto label_2441b8;
        case 0x2441bcu: goto label_2441bc;
        case 0x2441c0u: goto label_2441c0;
        case 0x2441c4u: goto label_2441c4;
        case 0x2441c8u: goto label_2441c8;
        case 0x2441ccu: goto label_2441cc;
        case 0x2441d0u: goto label_2441d0;
        case 0x2441d4u: goto label_2441d4;
        case 0x2441d8u: goto label_2441d8;
        case 0x2441dcu: goto label_2441dc;
        case 0x2441e0u: goto label_2441e0;
        case 0x2441e4u: goto label_2441e4;
        case 0x2441e8u: goto label_2441e8;
        case 0x2441ecu: goto label_2441ec;
        default: break;
    }

    ctx->pc = 0x244188u;

label_244188:
    // 0x244188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24418c:
    // 0x24418c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24418cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_244190:
    // 0x244190: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_244194:
    if (ctx->pc == 0x244194u) {
        ctx->pc = 0x244194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244190u;
        // 0x244194: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244198u;
        goto label_244198;
    }
    ctx->pc = 0x244190u;
    {
        const bool branch_taken_0x244190 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244190u;
        // 0x244194: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244190) {
            ctx->pc = 0x2441B0u;
            goto label_2441b0;
        }
    }
    ctx->pc = 0x244198u;
label_244198:
    // 0x244198: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24419c:
    // 0x24419c: 0xc090d8a  jal         func_243628
label_2441a0:
    if (ctx->pc == 0x2441A0u) {
        ctx->pc = 0x2441A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24419Cu;
        // 0x2441a0: 0x2484bd80  addiu       $a0, $a0, -0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441A4u;
        goto label_2441a4;
    }
    ctx->pc = 0x24419Cu;
    SET_GPR_U32(ctx, 31, 0x2441A4u);
    ctx->pc = 0x2441A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24419Cu;
    // 0x2441a0: 0x2484bd80  addiu       $a0, $a0, -0x4280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x24419Cu, 0x2441A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441A4u;
label_2441a4:
    // 0x2441a4: 0x1000000e  b           . + 4 + (0xE << 2)
label_2441a8:
    if (ctx->pc == 0x2441A8u) {
        ctx->pc = 0x2441A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441A4u;
        // 0x2441a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441ACu;
        goto label_2441ac;
    }
    ctx->pc = 0x2441A4u;
    {
        const bool branch_taken_0x2441a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2441A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441A4u;
        // 0x2441a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441a4) {
            ctx->pc = 0x2441E0u;
            goto label_2441e0;
        }
    }
    ctx->pc = 0x2441ACu;
label_2441ac:
    // 0x2441ac: 0x0  nop
    ctx->pc = 0x2441acu;
    // NOP
label_2441b0:
    // 0x2441b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2441b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2441b4:
    // 0x2441b4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2441b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2441b8:
    // 0x2441b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2441bc:
    if (ctx->pc == 0x2441BCu) {
        ctx->pc = 0x2441BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441B8u;
        // 0x2441bc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441C0u;
        goto label_2441c0;
    }
    ctx->pc = 0x2441B8u;
    {
        const bool branch_taken_0x2441b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2441b8) {
            ctx->pc = 0x2441BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2441B8u;
            // 0x2441bc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2441D0u;
            goto label_2441d0;
        }
    }
    ctx->pc = 0x2441C0u;
label_2441c0:
    // 0x2441c0: 0x40f809  jalr        $v0
label_2441c4:
    if (ctx->pc == 0x2441C4u) {
        ctx->pc = 0x2441C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441C0u;
        // 0x2441c4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441C8u;
        goto label_2441c8;
    }
    ctx->pc = 0x2441C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2441C8u);
        ctx->pc = 0x2441C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441C0u;
        // 0x2441c4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2441C0u, 0x2441C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2441C8u;
label_2441c8:
    // 0x2441c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2441cc:
    if (ctx->pc == 0x2441CCu) {
        ctx->pc = 0x2441CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441C8u;
        // 0x2441cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441D0u;
        goto label_2441d0;
    }
    ctx->pc = 0x2441C8u;
    {
        const bool branch_taken_0x2441c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2441CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441C8u;
        // 0x2441cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441c8) {
            ctx->pc = 0x2441DCu;
            goto label_2441dc;
        }
    }
    ctx->pc = 0x2441D0u;
label_2441d0:
    // 0x2441d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2441d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2441d4:
    // 0x2441d4: 0xc090d8a  jal         func_243628
label_2441d8:
    if (ctx->pc == 0x2441D8u) {
        ctx->pc = 0x2441D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441D4u;
        // 0x2441d8: 0x2484bda0  addiu       $a0, $a0, -0x4260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441DCu;
        goto label_2441dc;
    }
    ctx->pc = 0x2441D4u;
    SET_GPR_U32(ctx, 31, 0x2441DCu);
    ctx->pc = 0x2441D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2441D4u;
    // 0x2441d8: 0x2484bda0  addiu       $a0, $a0, -0x4260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2441D4u, 0x2441DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441DCu;
label_2441dc:
    // 0x2441dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2441dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2441e0:
    // 0x2441e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2441e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2441e4:
    // 0x2441e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2441e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2441e8:
    // 0x2441e8: 0x3e00008  jr          $ra
label_2441ec:
    if (ctx->pc == 0x2441ECu) {
        ctx->pc = 0x2441ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441E8u;
        // 0x2441ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2441F0u;
        goto label_fallthrough_0x2441e8;
    }
    ctx->pc = 0x2441E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2441ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2441E8u;
        // 0x2441ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2441E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2441e8:
    ctx->pc = 0x2441F0u;
}
