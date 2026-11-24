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

// Function: sub_0021DFB0
// Address: 0x21dfb0 - 0x21e01c
void sub_0021DFB0_0x21dfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DFB0_0x21dfb0");
#endif

    switch (ctx->pc) {
        case 0x21dfccu: goto label_21dfcc;
        default: break;
    }

    ctx->pc = 0x21dfb0u;

    // 0x21dfb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21dfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21dfb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21dfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21dfb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21dfb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21dfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21dfc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21dfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21dfc4: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21DFC4u;
    SET_GPR_U32(ctx, 31, 0x21DFCCu);
    ctx->pc = 0x21DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFC4u;
    // 0x21dfc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21DFC4u, 0x21DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFCCu;
label_21dfcc:
    // 0x21dfcc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21dfccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21dfd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21dfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfd4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21dfd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfd8: 0x34a50134  ori         $a1, $a1, 0x134
    ctx->pc = 0x21dfd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)308);
    // 0x21dfdc: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x21dfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21dfe0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21DFE0u;
    {
        const bool branch_taken_0x21dfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFE0u;
        // 0x21dfe4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfe0) {
            ctx->pc = 0x21E000u;
            goto label_21e000;
        }
    }
    ctx->pc = 0x21DFE8u;
    // 0x21dfe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21dfe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21dfec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21dfecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21dff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21dff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21dff4: 0x80848e0  j           func_212380
    ctx->pc = 0x21DFF4u;
    ctx->pc = 0x21DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFF4u;
    // 0x21dff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21DFFCu;
    // 0x21dffc: 0x0  nop
    ctx->pc = 0x21dffcu;
    // NOP
label_21e000:
    // 0x21e000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e004: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e00c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e014: 0x80888d6  j           func_222358
    ctx->pc = 0x21E014u;
    ctx->pc = 0x21E018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E014u;
    // 0x21e018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222358u;
    sub_00222358_0x222358(rdram, ctx, runtime); return;
    ctx->pc = 0x21E01Cu;
}
