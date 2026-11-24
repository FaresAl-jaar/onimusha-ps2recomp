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

// Function: sub_00118E90
// Address: 0x118e90 - 0x118f14
void sub_00118E90_0x118e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118E90_0x118e90");
#endif

    switch (ctx->pc) {
        case 0x118ec0u: goto label_118ec0;
        default: break;
    }

    ctx->pc = 0x118e90u;

    // 0x118e90: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x118e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118e94: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x118e94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x118e98: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x118e98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x118e9c: 0x25254148  addiu       $a1, $t1, 0x4148
    ctx->pc = 0x118e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 16712));
    // 0x118ea0: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x118ea0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x118ea4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x118ea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118ea8: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x118ea8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x118eac: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x118eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x118eb0: 0x8ca50018  lw          $a1, 0x18($a1)
    ctx->pc = 0x118eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x404160u));
    // 0x118eb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x118EB4u;
    {
        const bool branch_taken_0x118eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EB4u;
        // 0x118eb8: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118eb4) {
            ctx->pc = 0x118EC4u;
            goto label_118ec4;
        }
    }
    ctx->pc = 0x118EBCu;
    // 0x118ebc: 0x0  nop
    ctx->pc = 0x118ebcu;
    // NOP
label_118ec0:
    // 0x118ec0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x118ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_118ec4:
    // 0x118ec4: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x118EC4u;
    {
        const bool branch_taken_0x118ec4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x118ec4) {
            ctx->pc = 0x118EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118EC4u;
            // 0x118ec8: 0xacc80004  sw          $t0, 0x4($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118EF0u;
            goto label_118ef0;
        }
    }
    ctx->pc = 0x118ECCu;
    // 0x118ecc: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x118eccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x118ed0: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x118ed0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x118ed4: 0xdca40018  ld          $a0, 0x18($a1)
    ctx->pc = 0x118ed4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x118ed8: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x118ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x118edc: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x118edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
    // 0x118ee0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x118ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x118ee4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x118EE4u;
    {
        const bool branch_taken_0x118ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118ee4) {
            ctx->pc = 0x118EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118EE4u;
            // 0x118ee8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118ec0;
        }
    }
    ctx->pc = 0x118EECu;
    // 0x118eec: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x118eecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
label_118ef0:
    // 0x118ef0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x118EF0u;
    {
        const bool branch_taken_0x118ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x118EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EF0u;
        // 0x118ef4: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118ef0) {
            ctx->pc = 0x118EFCu;
            goto label_118efc;
        }
    }
    ctx->pc = 0x118EF8u;
    // 0x118ef8: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x118ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_118efc:
    // 0x118efc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118EFCu;
    {
        const bool branch_taken_0x118efc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x118F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118EFCu;
        // 0x118f00: 0x25224148  addiu       $v0, $t1, 0x4148 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 16712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118efc) {
            ctx->pc = 0x118F0Cu;
            goto label_118f0c;
        }
    }
    ctx->pc = 0x118F04u;
    // 0x118f04: 0x3e00008  jr          $ra
    ctx->pc = 0x118F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F04u;
        // 0x118f08: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118F0Cu;
label_118f0c:
    // 0x118f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x118F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118F0Cu;
        // 0x118f10: 0xac460018  sw          $a2, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118F14u;
}
