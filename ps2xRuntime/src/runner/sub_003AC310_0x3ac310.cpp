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

// Function: sub_003AC310
// Address: 0x3ac310 - 0x3ac3c8
void sub_003AC310_0x3ac310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC310_0x3ac310");
#endif

    switch (ctx->pc) {
        case 0x3ac330u: goto label_3ac330;
        case 0x3ac3a0u: goto label_3ac3a0;
        default: break;
    }

    ctx->pc = 0x3ac310u;

    // 0x3ac310: 0x24c3fff8  addiu       $v1, $a2, -0x8
    ctx->pc = 0x3ac310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3ac314: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ac314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac318: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x3ac318u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3ac31c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x3AC31Cu;
    {
        const bool branch_taken_0x3ac31c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC31Cu;
        // 0x3ac320: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac31c) {
            ctx->pc = 0x3AC3C0u;
            goto label_3ac3c0;
        }
    }
    ctx->pc = 0x3AC324u;
    // 0x3ac324: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x3ac324u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3ac328: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x3AC328u;
    {
        const bool branch_taken_0x3ac328 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC328u;
        // 0x3ac32c: 0x24c8fff0  addiu       $t0, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac328) {
            ctx->pc = 0x3AC390u;
            goto label_3ac390;
        }
    }
    ctx->pc = 0x3AC330u;
label_3ac330:
    // 0x3ac330: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x3ac330u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ac334: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3ac334u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3ac338: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x3ac338u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x3ac33c: 0x128182b  sltu        $v1, $t1, $t0
    ctx->pc = 0x3ac33cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3ac340: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3ac340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3ac344: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3ac344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3ac348: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ac348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ac34c: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x3ac34cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ac350: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3ac350u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3ac354: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3ac354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3ac358: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3ac358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3ac35c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ac35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ac360: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x3ac360u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ac364: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3ac364u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3ac368: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3ac368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3ac36c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3ac36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3ac370: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ac370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ac374: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x3ac374u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ac378: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x3ac378u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3ac37c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3ac37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3ac380: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ac380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ac384: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3AC384u;
    {
        const bool branch_taken_0x3ac384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC384u;
        // 0x3ac388: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac384) {
            ctx->pc = 0x3AC330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac330;
        }
    }
    ctx->pc = 0x3AC38Cu;
    // 0x3ac38c: 0x0  nop
    ctx->pc = 0x3ac38cu;
    // NOP
label_3ac390:
    // 0x3ac390: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x3ac390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3ac394: 0x126082b  sltu        $at, $t1, $a2
    ctx->pc = 0x3ac394u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3ac398: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3AC398u;
    {
        const bool branch_taken_0x3ac398 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac398) {
            ctx->pc = 0x3AC3C0u;
            goto label_3ac3c0;
        }
    }
    ctx->pc = 0x3AC3A0u;
label_3ac3a0:
    // 0x3ac3a0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3ac3a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ac3a4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ac3a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3ac3a8: 0x126182b  sltu        $v1, $t1, $a2
    ctx->pc = 0x3ac3a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3ac3ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ac3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3ac3b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3ac3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3ac3b4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AC3B4u;
    {
        const bool branch_taken_0x3ac3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac3b4) {
            ctx->pc = 0x3AC3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac3a0;
        }
    }
    ctx->pc = 0x3AC3BCu;
    // 0x3ac3bc: 0x0  nop
    ctx->pc = 0x3ac3bcu;
    // NOP
label_3ac3c0:
    // 0x3ac3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC3C8u;
}
