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

// Function: sub_00348FB0
// Address: 0x348fb0 - 0x349068
void sub_00348FB0_0x348fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348FB0_0x348fb0");
#endif

    ctx->pc = 0x348fb0u;

    // 0x348fb0: 0x93828ba4  lbu         $v0, -0x745C($gp)
    ctx->pc = 0x348fb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937508)));
    // 0x348fb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x348FB4u;
    {
        const bool branch_taken_0x348fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x348FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FB4u;
        // 0x348fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348fb4) {
            ctx->pc = 0x348FC8u;
            goto label_348fc8;
        }
    }
    ctx->pc = 0x348FBCu;
    // 0x348fbc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x348FBCu;
    {
        const bool branch_taken_0x348fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348fbc) {
            ctx->pc = 0x349060u;
            goto label_349060;
        }
    }
    ctx->pc = 0x348FC4u;
    // 0x348fc4: 0x0  nop
    ctx->pc = 0x348fc4u;
    // NOP
label_348fc8:
    // 0x348fc8: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x348fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x348fcc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x348fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x348fd0: 0x2861000f  slti        $at, $v1, 0xF
    ctx->pc = 0x348fd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x348fd4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x348FD4u;
    {
        const bool branch_taken_0x348fd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x348FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348FD4u;
        // 0x348fd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348fd4) {
            ctx->pc = 0x348FE8u;
            goto label_348fe8;
        }
    }
    ctx->pc = 0x348FDCu;
    // 0x348fdc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x348FDCu;
    {
        const bool branch_taken_0x348fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348fdc) {
            ctx->pc = 0x349060u;
            goto label_349060;
        }
    }
    ctx->pc = 0x348FE4u;
    // 0x348fe4: 0x0  nop
    ctx->pc = 0x348fe4u;
    // NOP
label_348fe8:
    // 0x348fe8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x348fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x348fec: 0x24427a50  addiu       $v0, $v0, 0x7A50
    ctx->pc = 0x348fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31312));
    // 0x348ff0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x348ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x348ff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x348ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x348ff8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x348ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348ffc: 0x45082b  sltu        $at, $v0, $a1
    ctx->pc = 0x348ffcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x349000: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x349000u;
    {
        const bool branch_taken_0x349000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x349004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349000u;
        // 0x349004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349000) {
            ctx->pc = 0x349010u;
            goto label_349010;
        }
    }
    ctx->pc = 0x349008u;
    // 0x349008: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x349008u;
    {
        const bool branch_taken_0x349008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x349008) {
            ctx->pc = 0x349060u;
            goto label_349060;
        }
    }
    ctx->pc = 0x349010u;
label_349010:
    // 0x349010: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x349010u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x349014: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x349014u;
    {
        const bool branch_taken_0x349014 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x349018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349014u;
        // 0x349018: 0x3c020065  lui         $v0, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349014) {
            ctx->pc = 0x349044u;
            goto label_349044;
        }
    }
    ctx->pc = 0x34901Cu;
    // 0x34901c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x34901cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x349020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x349020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x349024: 0x24427a10  addiu       $v0, $v0, 0x7A10
    ctx->pc = 0x349024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31248));
    // 0x349028: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x349028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34902c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x34902cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x349030: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x349030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x349034: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x349034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349038: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x349038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x34903c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34903Cu;
    {
        const bool branch_taken_0x34903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34903Cu;
        // 0x349040: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34903c) {
            ctx->pc = 0x34905Cu;
            goto label_34905c;
        }
    }
    ctx->pc = 0x349044u;
label_349044:
    // 0x349044: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x349044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x349048: 0x24427a10  addiu       $v0, $v0, 0x7A10
    ctx->pc = 0x349048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31248));
    // 0x34904c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x34904cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x349050: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x349050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x349054: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x349054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349058: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x349058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34905c:
    // 0x34905c: 0x0  nop
    ctx->pc = 0x34905cu;
    // NOP
label_349060:
    // 0x349060: 0x3e00008  jr          $ra
    ctx->pc = 0x349060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349068u;
}
