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

// Function: sub_00225E78
// Address: 0x225e78 - 0x225f20
void sub_00225E78_0x225e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225E78_0x225e78");
#endif

    switch (ctx->pc) {
        case 0x225eb8u: goto label_225eb8;
        default: break;
    }

    ctx->pc = 0x225e78u;

    // 0x225e78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225e80: 0x88100  sll         $s0, $t0, 4
    ctx->pc = 0x225e80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x225e84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225e88: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x225e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225e90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x225e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x225e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x225e98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x225e98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x225e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x225ea0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x225ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x225ea4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x225ea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ea8: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x225ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x225eac: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x225eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x225eb0: 0xc08948c  jal         func_225230
    ctx->pc = 0x225EB0u;
    SET_GPR_U32(ctx, 31, 0x225EB8u);
    ctx->pc = 0x225EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225EB0u;
    // 0x225eb4: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225230u, 0x225EB0u, 0x225EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EB8u;
label_225eb8:
    // 0x225eb8: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x225eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x225ebc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x225ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225ec4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x225EC4u;
    {
        const bool branch_taken_0x225ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x225EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EC4u;
        // 0x225ec8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ec4) {
            ctx->pc = 0x225EE8u;
            goto label_225ee8;
        }
    }
    ctx->pc = 0x225ECCu;
    // 0x225ecc: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x225eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x225ed0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x225ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x225ed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225ed8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x225ed8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x225edc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x225EDCu;
    {
        const bool branch_taken_0x225edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EDCu;
        // 0x225ee0: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225edc) {
            ctx->pc = 0x225EF0u;
            goto label_225ef0;
        }
    }
    ctx->pc = 0x225EE4u;
    // 0x225ee4: 0x0  nop
    ctx->pc = 0x225ee4u;
    // NOP
label_225ee8:
    // 0x225ee8: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x225ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x225eec: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x225eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_225ef0:
    // 0x225ef0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x225ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x225ef4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x225EF4u;
    {
        const bool branch_taken_0x225ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EF4u;
        // 0x225ef8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ef4) {
            ctx->pc = 0x225F00u;
            goto label_225f00;
        }
    }
    ctx->pc = 0x225EFCu;
    // 0x225efc: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x225efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_225f00:
    // 0x225f00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225f04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225f04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225f08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225f08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225f0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x225f0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225f10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x225f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225f14: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x225f14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x225f18: 0x3e00008  jr          $ra
    ctx->pc = 0x225F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F18u;
        // 0x225f1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225F20u;
}
