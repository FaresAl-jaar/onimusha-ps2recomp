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

// Function: sub_0021BFB8
// Address: 0x21bfb8 - 0x21c000
void sub_0021BFB8_0x21bfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BFB8_0x21bfb8");
#endif

    switch (ctx->pc) {
        case 0x21bfccu: goto label_21bfcc;
        default: break;
    }

    ctx->pc = 0x21bfb8u;

    // 0x21bfb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21bfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21bfbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bfc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21bfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21bfc4: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21BFC4u;
    SET_GPR_U32(ctx, 31, 0x21BFCCu);
    ctx->pc = 0x21BFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFC4u;
    // 0x21bfc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21BFC4u, 0x21BFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BFCCu;
label_21bfcc:
    // 0x21bfcc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21bfccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21bfd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21bfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bfd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21BFD4u;
    {
        const bool branch_taken_0x21bfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFD4u;
        // 0x21bfd8: 0x34a50143  ori         $a1, $a1, 0x143 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)323);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfd4) {
            ctx->pc = 0x21BFF0u;
            goto label_21bff0;
        }
    }
    ctx->pc = 0x21BFDCu;
    // 0x21bfdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bfdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bfe0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21bfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bfe4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21bfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bfe8: 0x80848e0  j           func_212380
    ctx->pc = 0x21BFE8u;
    ctx->pc = 0x21BFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFE8u;
    // 0x21bfec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21BFF0u;
label_21bff0:
    // 0x21bff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bff4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21bff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bff8: 0x8087000  j           func_21C000
    ctx->pc = 0x21BFF8u;
    ctx->pc = 0x21BFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BFF8u;
    // 0x21bffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C000u;
    sub_0021C000_0x21c000(rdram, ctx, runtime); return;
    ctx->pc = 0x21C000u;
}
