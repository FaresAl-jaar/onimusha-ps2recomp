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

// Function: sub_0024EA78
// Address: 0x24ea78 - 0x24eafc
void sub_0024EA78_0x24ea78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EA78_0x24ea78");
#endif

    switch (ctx->pc) {
        case 0x24eae8u: goto label_24eae8;
        default: break;
    }

    ctx->pc = 0x24ea78u;

    // 0x24ea78: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24ea7c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24ea7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24ea80: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24ea84: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x24ea84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24ea88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ea8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24ea8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24ea90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24ea90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24ea94: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EA94u;
    {
        const bool branch_taken_0x24ea94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x24EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA94u;
        // 0x24ea98: 0x2d240002  sltiu       $a0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea94) {
            ctx->pc = 0x24EAACu;
            goto label_24eaac;
        }
    }
    ctx->pc = 0x24EA9Cu;
    // 0x24ea9c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24eaa0: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24eaa4: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x24EAA4u;
    {
        const bool branch_taken_0x24eaa4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAA4u;
        // 0x24eaa8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eaa4) {
            ctx->pc = 0x24EAF0u;
            goto label_24eaf0;
        }
    }
    ctx->pc = 0x24EAACu;
label_24eaac:
    // 0x24eaac: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24EAACu;
    {
        const bool branch_taken_0x24eaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAACu;
        // 0x24eab0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eaac) {
            ctx->pc = 0x24EAF0u;
            goto label_24eaf0;
        }
    }
    ctx->pc = 0x24EAB4u;
    // 0x24eab4: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x24eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x24eab8: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x24eab8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
    // 0x24eabc: 0x26107510  addiu       $s0, $s0, 0x7510
    ctx->pc = 0x24eabcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29968));
    // 0x24eac0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24eac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24eac4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24eac8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24EAC8u;
    {
        const bool branch_taken_0x24eac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAC8u;
        // 0x24eacc: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eac8) {
            ctx->pc = 0x24EAECu;
            goto label_24eaec;
        }
    }
    ctx->pc = 0x24EAD0u;
    // 0x24ead0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24ead0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ead4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24ead4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ead8: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x24ead8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x24eadc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x24eadcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24eae0: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x24EAE0u;
    SET_GPR_U32(ctx, 31, 0x24EAE8u);
    ctx->pc = 0x24EAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EAE0u;
    // 0x24eae4: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x24EAE0u, 0x24EAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EAE8u;
label_24eae8:
    // 0x24eae8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x24eae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_24eaec:
    // 0x24eaec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24eaecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24eaf0:
    // 0x24eaf0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24eaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24eaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x24EAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EAF4u;
        // 0x24eaf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EAFCu;
}
