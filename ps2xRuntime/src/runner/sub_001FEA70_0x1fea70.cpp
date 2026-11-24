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

// Function: sub_001FEA70
// Address: 0x1fea70 - 0x1feb28
void sub_001FEA70_0x1fea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEA70_0x1fea70");
#endif

    switch (ctx->pc) {
        case 0x1fea94u: goto label_1fea94;
        case 0x1fead0u: goto label_1fead0;
        case 0x1fead8u: goto label_1fead8;
        case 0x1feafcu: goto label_1feafc;
        default: break;
    }

    ctx->pc = 0x1fea70u;

    // 0x1fea70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fea74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fea74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fea78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fea78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fea7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fea80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fea80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fea84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fea84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fea88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fea88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fea8c: 0xc080496  jal         func_201258
    ctx->pc = 0x1FEA8Cu;
    SET_GPR_U32(ctx, 31, 0x1FEA94u);
    ctx->pc = 0x1FEA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA8Cu;
    // 0x1fea90: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201258u, 0x1FEA8Cu, 0x1FEA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA94u;
label_1fea94:
    // 0x1fea94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FEA94u;
    {
        const bool branch_taken_0x1fea94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA94u;
        // 0x1fea98: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea94) {
            ctx->pc = 0x1FEAC0u;
            goto label_1feac0;
        }
    }
    ctx->pc = 0x1FEA9Cu;
    // 0x1fea9c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1fea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1feaa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1feaa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feaa4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1feaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feaa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1feaa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feaac: 0x34a5020a  ori         $a1, $a1, 0x20A
    ctx->pc = 0x1feaacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)522);
    // 0x1feab0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1feab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1feab4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1feab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1feab8: 0x807fa1e  j           func_1FE878
    ctx->pc = 0x1FEAB8u;
    ctx->pc = 0x1FEABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEAB8u;
    // 0x1feabc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x1FEAC0u;
label_1feac0:
    // 0x1feac0: 0x3c11ff03  lui         $s1, 0xFF03
    ctx->pc = 0x1feac0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65283 << 16));
    // 0x1feac4: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1feac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1feac8: 0x36310305  ori         $s1, $s1, 0x305
    ctx->pc = 0x1feac8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)773);
    // 0x1feacc: 0x0  nop
    ctx->pc = 0x1feaccu;
    // NOP
label_1fead0:
    // 0x1fead0: 0xc0801b4  jal         func_2006D0
    ctx->pc = 0x1FEAD0u;
    SET_GPR_U32(ctx, 31, 0x1FEAD8u);
    ctx->pc = 0x1FEAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEAD0u;
    // 0x1fead4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2006D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2006D0u, 0x1FEAD0u, 0x1FEAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAD8u;
label_1fead8:
    // 0x1fead8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fead8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feadc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1feadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1feae0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1feae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1feae4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FEAE4u;
    {
        const bool branch_taken_0x1feae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAE4u;
        // 0x1feae8: 0x304300cc  andi        $v1, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)204);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feae4) {
            ctx->pc = 0x1FEB04u;
            goto label_1feb04;
        }
    }
    ctx->pc = 0x1FEAECu;
    // 0x1feaec: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEAECu;
    {
        const bool branch_taken_0x1feaec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feaec) {
            ctx->pc = 0x1FEAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEAECu;
            // 0x1feaf0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEB04u;
            goto label_1feb04;
        }
    }
    ctx->pc = 0x1FEAF4u;
    // 0x1feaf4: 0xc08023e  jal         func_2008F8
    ctx->pc = 0x1FEAF4u;
    SET_GPR_U32(ctx, 31, 0x1FEAFCu);
    ctx->pc = 0x2008F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2008F8u, 0x1FEAF4u, 0x1FEAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEAFCu;
label_1feafc:
    // 0x1feafc: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FEAFCu;
    {
        const bool branch_taken_0x1feafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1feafc) {
            ctx->pc = 0x1FEAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fead0;
        }
    }
    ctx->pc = 0x1FEB04u;
label_1feb04:
    // 0x1feb04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1feb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1feb08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1feb0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1feb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feb10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1feb10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1feb14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1feb14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feb18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1feb18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feb1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1feb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1feb20: 0x807fa1e  j           func_1FE878
    ctx->pc = 0x1FEB20u;
    ctx->pc = 0x1FEB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEB20u;
    // 0x1feb24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE878u;
    sub_001FE878_0x1fe878(rdram, ctx, runtime); return;
    ctx->pc = 0x1FEB28u;
}
