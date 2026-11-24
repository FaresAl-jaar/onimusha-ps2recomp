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

// Function: sub_00244C90
// Address: 0x244c90 - 0x244ce8
void sub_00244C90_0x244c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244C90_0x244c90");
#endif

    switch (ctx->pc) {
        case 0x244c90u: goto label_244c90;
        case 0x244c94u: goto label_244c94;
        case 0x244c98u: goto label_244c98;
        case 0x244c9cu: goto label_244c9c;
        case 0x244ca0u: goto label_244ca0;
        case 0x244ca4u: goto label_244ca4;
        case 0x244ca8u: goto label_244ca8;
        case 0x244cacu: goto label_244cac;
        case 0x244cb0u: goto label_244cb0;
        case 0x244cb4u: goto label_244cb4;
        case 0x244cb8u: goto label_244cb8;
        case 0x244cbcu: goto label_244cbc;
        case 0x244cc0u: goto label_244cc0;
        case 0x244cc4u: goto label_244cc4;
        case 0x244cc8u: goto label_244cc8;
        case 0x244cccu: goto label_244ccc;
        case 0x244cd0u: goto label_244cd0;
        case 0x244cd4u: goto label_244cd4;
        case 0x244cd8u: goto label_244cd8;
        case 0x244cdcu: goto label_244cdc;
        case 0x244ce0u: goto label_244ce0;
        case 0x244ce4u: goto label_244ce4;
        default: break;
    }

    ctx->pc = 0x244c90u;

label_244c90:
    // 0x244c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_244c94:
    // 0x244c94: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_244c98:
    if (ctx->pc == 0x244C98u) {
        ctx->pc = 0x244C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C94u;
        // 0x244c98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C9Cu;
        goto label_244c9c;
    }
    ctx->pc = 0x244C94u;
    {
        const bool branch_taken_0x244c94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C94u;
        // 0x244c98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c94) {
            ctx->pc = 0x244CB0u;
            goto label_244cb0;
        }
    }
    ctx->pc = 0x244C9Cu;
label_244c9c:
    // 0x244c9c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244ca0:
    // 0x244ca0: 0xc090d8a  jal         func_243628
label_244ca4:
    if (ctx->pc == 0x244CA4u) {
        ctx->pc = 0x244CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CA0u;
        // 0x244ca4: 0x2484c270  addiu       $a0, $a0, -0x3D90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CA8u;
        goto label_244ca8;
    }
    ctx->pc = 0x244CA0u;
    SET_GPR_U32(ctx, 31, 0x244CA8u);
    ctx->pc = 0x244CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CA0u;
    // 0x244ca4: 0x2484c270  addiu       $a0, $a0, -0x3D90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244CA0u, 0x244CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CA8u;
label_244ca8:
    // 0x244ca8: 0x1000000c  b           . + 4 + (0xC << 2)
label_244cac:
    if (ctx->pc == 0x244CACu) {
        ctx->pc = 0x244CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CA8u;
        // 0x244cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CB0u;
        goto label_244cb0;
    }
    ctx->pc = 0x244CA8u;
    {
        const bool branch_taken_0x244ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CA8u;
        // 0x244cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ca8) {
            ctx->pc = 0x244CDCu;
            goto label_244cdc;
        }
    }
    ctx->pc = 0x244CB0u;
label_244cb0:
    // 0x244cb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x244cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_244cb4:
    // 0x244cb4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x244cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_244cb8:
    // 0x244cb8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_244cbc:
    if (ctx->pc == 0x244CBCu) {
        ctx->pc = 0x244CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CB8u;
        // 0x244cbc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CC0u;
        goto label_244cc0;
    }
    ctx->pc = 0x244CB8u;
    {
        const bool branch_taken_0x244cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244cb8) {
            ctx->pc = 0x244CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244CB8u;
            // 0x244cbc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244CD0u;
            goto label_244cd0;
        }
    }
    ctx->pc = 0x244CC0u;
label_244cc0:
    // 0x244cc0: 0x40f809  jalr        $v0
label_244cc4:
    if (ctx->pc == 0x244CC4u) {
        ctx->pc = 0x244CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CC0u;
        // 0x244cc4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CC8u;
        goto label_244cc8;
    }
    ctx->pc = 0x244CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244CC8u);
        ctx->pc = 0x244CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CC0u;
        // 0x244cc4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244CC0u, 0x244CC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244CC8u;
label_244cc8:
    // 0x244cc8: 0x10000005  b           . + 4 + (0x5 << 2)
label_244ccc:
    if (ctx->pc == 0x244CCCu) {
        ctx->pc = 0x244CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CC8u;
        // 0x244ccc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CD0u;
        goto label_244cd0;
    }
    ctx->pc = 0x244CC8u;
    {
        const bool branch_taken_0x244cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CC8u;
        // 0x244ccc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244cc8) {
            ctx->pc = 0x244CE0u;
            goto label_244ce0;
        }
    }
    ctx->pc = 0x244CD0u;
label_244cd0:
    // 0x244cd0: 0xc090d8a  jal         func_243628
label_244cd4:
    if (ctx->pc == 0x244CD4u) {
        ctx->pc = 0x244CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CD0u;
        // 0x244cd4: 0x2484c298  addiu       $a0, $a0, -0x3D68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CD8u;
        goto label_244cd8;
    }
    ctx->pc = 0x244CD0u;
    SET_GPR_U32(ctx, 31, 0x244CD8u);
    ctx->pc = 0x244CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CD0u;
    // 0x244cd4: 0x2484c298  addiu       $a0, $a0, -0x3D68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244CD0u, 0x244CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CD8u;
label_244cd8:
    // 0x244cd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x244cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244cdc:
    // 0x244cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244ce0:
    // 0x244ce0: 0x3e00008  jr          $ra
label_244ce4:
    if (ctx->pc == 0x244CE4u) {
        ctx->pc = 0x244CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CE0u;
        // 0x244ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CE8u;
        goto label_fallthrough_0x244ce0;
    }
    ctx->pc = 0x244CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CE0u;
        // 0x244ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244ce0:
    ctx->pc = 0x244CE8u;
}
