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

// Function: sub_0017BB90
// Address: 0x17bb90 - 0x17bc48
void sub_0017BB90_0x17bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BB90_0x17bb90");
#endif

    switch (ctx->pc) {
        case 0x17bba0u: goto label_17bba0;
        case 0x17bbf8u: goto label_17bbf8;
        default: break;
    }

    ctx->pc = 0x17bb90u;

    // 0x17bb90: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x17bb90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17bb94: 0x10e00014  beqz        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x17BB94u;
    {
        const bool branch_taken_0x17bb94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BB94u;
        // 0x17bb98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb94) {
            ctx->pc = 0x17BBE8u;
            goto label_17bbe8;
        }
    }
    ctx->pc = 0x17BB9Cu;
    // 0x17bb9c: 0x0  nop
    ctx->pc = 0x17bb9cu;
    // NOP
label_17bba0:
    // 0x17bba0: 0x90e30008  lbu         $v1, 0x8($a3)
    ctx->pc = 0x17bba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x17bba4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17BBA4u;
    {
        const bool branch_taken_0x17bba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bba4) {
            ctx->pc = 0x17BBD8u;
            goto label_17bbd8;
        }
    }
    ctx->pc = 0x17BBACu;
    // 0x17bbac: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BBACu;
    {
        const bool branch_taken_0x17bbac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bbac) {
            ctx->pc = 0x17BBC8u;
            goto label_17bbc8;
        }
    }
    ctx->pc = 0x17BBB4u;
    // 0x17bbb4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x17bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17bbb8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17bbb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bbbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17BBBCu;
    {
        const bool branch_taken_0x17bbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBBCu;
        // 0x17bbc0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbbc) {
            ctx->pc = 0x17BBE0u;
            goto label_17bbe0;
        }
    }
    ctx->pc = 0x17BBC4u;
    // 0x17bbc4: 0x0  nop
    ctx->pc = 0x17bbc4u;
    // NOP
label_17bbc8:
    // 0x17bbc8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x17bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17bbcc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x17bbccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x17bbd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17BBD0u;
    {
        const bool branch_taken_0x17bbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBD0u;
        // 0x17bbd4: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbd0) {
            ctx->pc = 0x17BBE0u;
            goto label_17bbe0;
        }
    }
    ctx->pc = 0x17BBD8u;
label_17bbd8:
    // 0x17bbd8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x17bbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17bbdc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x17bbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17bbe0:
    // 0x17bbe0: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x17BBE0u;
    {
        const bool branch_taken_0x17bbe0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBE0u;
        // 0x17bbe4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbe0) {
            ctx->pc = 0x17BBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bba0;
        }
    }
    ctx->pc = 0x17BBE8u;
label_17bbe8:
    // 0x17bbe8: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x17bbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17bbec: 0x10e00014  beqz        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x17BBECu;
    {
        const bool branch_taken_0x17bbec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BBECu;
        // 0x17bbf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bbec) {
            ctx->pc = 0x17BC40u;
            goto label_17bc40;
        }
    }
    ctx->pc = 0x17BBF4u;
    // 0x17bbf4: 0x0  nop
    ctx->pc = 0x17bbf4u;
    // NOP
label_17bbf8:
    // 0x17bbf8: 0x90e30008  lbu         $v1, 0x8($a3)
    ctx->pc = 0x17bbf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x17bbfc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17BBFCu;
    {
        const bool branch_taken_0x17bbfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bbfc) {
            ctx->pc = 0x17BC30u;
            goto label_17bc30;
        }
    }
    ctx->pc = 0x17BC04u;
    // 0x17bc04: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BC04u;
    {
        const bool branch_taken_0x17bc04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bc04) {
            ctx->pc = 0x17BC20u;
            goto label_17bc20;
        }
    }
    ctx->pc = 0x17BC0Cu;
    // 0x17bc0c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x17bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17bc10: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x17bc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bc14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17BC14u;
    {
        const bool branch_taken_0x17bc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC14u;
        // 0x17bc18: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc14) {
            ctx->pc = 0x17BC38u;
            goto label_17bc38;
        }
    }
    ctx->pc = 0x17BC1Cu;
    // 0x17bc1c: 0x0  nop
    ctx->pc = 0x17bc1cu;
    // NOP
label_17bc20:
    // 0x17bc20: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x17bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17bc24: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x17bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x17bc28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17BC28u;
    {
        const bool branch_taken_0x17bc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC28u;
        // 0x17bc2c: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc28) {
            ctx->pc = 0x17BC38u;
            goto label_17bc38;
        }
    }
    ctx->pc = 0x17BC30u;
label_17bc30:
    // 0x17bc30: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x17bc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17bc34: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x17bc34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17bc38:
    // 0x17bc38: 0x14a0ffef  bnez        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x17BC38u;
    {
        const bool branch_taken_0x17bc38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC38u;
        // 0x17bc3c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc38) {
            ctx->pc = 0x17BBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bbf8;
        }
    }
    ctx->pc = 0x17BC40u;
label_17bc40:
    // 0x17bc40: 0x3e00008  jr          $ra
    ctx->pc = 0x17BC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BC48u;
}
