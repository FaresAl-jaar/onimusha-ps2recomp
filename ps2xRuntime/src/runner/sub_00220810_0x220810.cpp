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

// Function: sub_00220810
// Address: 0x220810 - 0x220884
void sub_00220810_0x220810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220810_0x220810");
#endif

    switch (ctx->pc) {
        case 0x220834u: goto label_220834;
        default: break;
    }

    ctx->pc = 0x220810u;

    // 0x220810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x220810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x220814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220818: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x220818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22081c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22081cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x220820: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x220820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220824: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x220824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x220828: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x220828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22082c: 0xc084968  jal         func_2125A0
    ctx->pc = 0x22082Cu;
    SET_GPR_U32(ctx, 31, 0x220834u);
    ctx->pc = 0x220830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22082Cu;
    // 0x220830: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x22082Cu, 0x220834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220834u;
label_220834:
    // 0x220834: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x220834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x220838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22083c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22083cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220840: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x220840u;
    {
        const bool branch_taken_0x220840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220840u;
        // 0x220844: 0x34a50127  ori         $a1, $a1, 0x127 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)295);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220840) {
            ctx->pc = 0x220868u;
            goto label_220868;
        }
    }
    ctx->pc = 0x220848u;
    // 0x220848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22084c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22084cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220854: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220858: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x220858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22085c: 0x80848e0  j           func_212380
    ctx->pc = 0x22085Cu;
    ctx->pc = 0x220860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22085Cu;
    // 0x220860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x220864u;
    // 0x220864: 0x0  nop
    ctx->pc = 0x220864u;
    // NOP
label_220868:
    // 0x220868: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x220868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22086c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22086cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x220874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220878: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x220878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22087c: 0x8088222  j           func_220888
    ctx->pc = 0x22087Cu;
    ctx->pc = 0x220880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22087Cu;
    // 0x220880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220888u;
    sub_00220888_0x220888(rdram, ctx, runtime); return;
    ctx->pc = 0x220884u;
}
