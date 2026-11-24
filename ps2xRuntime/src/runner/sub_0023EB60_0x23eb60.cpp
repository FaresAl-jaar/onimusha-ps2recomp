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

// Function: sub_0023EB60
// Address: 0x23eb60 - 0x23ebfc
void sub_0023EB60_0x23eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EB60_0x23eb60");
#endif

    switch (ctx->pc) {
        case 0x23eb90u: goto label_23eb90;
        default: break;
    }

    ctx->pc = 0x23eb60u;

    // 0x23eb60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23eb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23eb64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23eb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23eb68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23eb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23eb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23eb70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23eb70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eb74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23eb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23eb78: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x23eb78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23eb7c: 0xd1102a  slt         $v0, $a2, $s1
    ctx->pc = 0x23eb7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x23eb80: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x23EB80u;
    {
        const bool branch_taken_0x23eb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eb80) {
            ctx->pc = 0x23EB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EB80u;
            // 0x23eb84: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EBBCu;
            goto label_23ebbc;
        }
    }
    ctx->pc = 0x23EB88u;
    // 0x23eb88: 0xc08fa34  jal         func_23E8D0
    ctx->pc = 0x23EB88u;
    SET_GPR_U32(ctx, 31, 0x23EB90u);
    ctx->pc = 0x23E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E8D0u, 0x23EB88u, 0x23EB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB90u;
label_23eb90:
    // 0x23eb90: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x23eb90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23eb94: 0xd1182a  slt         $v1, $a2, $s1
    ctx->pc = 0x23eb94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x23eb98: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23EB98u;
    {
        const bool branch_taken_0x23eb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB98u;
        // 0x23eb9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb98) {
            ctx->pc = 0x23EBB8u;
            goto label_23ebb8;
        }
    }
    ctx->pc = 0x23EBA0u;
    // 0x23eba0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x23eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x23eba4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x23eba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x23eba8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x23ebac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x23EBACu;
    {
        const bool branch_taken_0x23ebac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBACu;
        // 0x23ebb0: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ebac) {
            ctx->pc = 0x23EBE8u;
            goto label_23ebe8;
        }
    }
    ctx->pc = 0x23EBB4u;
    // 0x23ebb4: 0x0  nop
    ctx->pc = 0x23ebb4u;
    // NOP
label_23ebb8:
    // 0x23ebb8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x23ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_23ebbc:
    // 0x23ebbc: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x23ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x23ebc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23ebc4: 0xd13023  subu        $a2, $a2, $s1
    ctx->pc = 0x23ebc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x23ebc8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23ebc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23ebcc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x23ebccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23ebd0: 0x8c84b968  lw          $a0, -0x4698($a0)
    ctx->pc = 0x23ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949224)));
    // 0x23ebd4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x23ebd8: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x23ebd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x23ebdc: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x23ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x23ebe0: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x23ebe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x23ebe4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23ebe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_23ebe8:
    // 0x23ebe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ebe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ebec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23ebecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23ebf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23ebf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ebf4: 0x3e00008  jr          $ra
    ctx->pc = 0x23EBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EBF4u;
        // 0x23ebf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EBFCu;
}
