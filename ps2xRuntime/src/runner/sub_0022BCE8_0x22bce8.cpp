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

// Function: sub_0022BCE8
// Address: 0x22bce8 - 0x22bd28
void sub_0022BCE8_0x22bce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BCE8_0x22bce8");
#endif

    switch (ctx->pc) {
        case 0x22bd08u: goto label_22bd08;
        default: break;
    }

    ctx->pc = 0x22bce8u;

    // 0x22bce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22bce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22bcec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22bcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22bcf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22bcf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bcf4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22bcf8: 0x260500ac  addiu       $a1, $s0, 0xAC
    ctx->pc = 0x22bcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x22bcfc: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x22bcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x22bd00: 0xc08f8fe  jal         func_23E3F8
    ctx->pc = 0x22BD00u;
    SET_GPR_U32(ctx, 31, 0x22BD08u);
    ctx->pc = 0x22BD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD00u;
    // 0x22bd04: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E3F8u, 0x22BD00u, 0x22BD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BD08u;
label_22bd08:
    // 0x22bd08: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22bd0c: 0x260700aa  addiu       $a3, $s0, 0xAA
    ctx->pc = 0x22bd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 170));
    // 0x22bd10: 0x260500a6  addiu       $a1, $s0, 0xA6
    ctx->pc = 0x22bd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 166));
    // 0x22bd14: 0x260600a8  addiu       $a2, $s0, 0xA8
    ctx->pc = 0x22bd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x22bd18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22bd18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bd1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22bd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22bd20: 0x808f90c  j           func_23E430
    ctx->pc = 0x22BD20u;
    ctx->pc = 0x22BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BD20u;
    // 0x22bd24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E430u;
    sub_0023E430_0x23e430(rdram, ctx, runtime); return;
    ctx->pc = 0x22BD28u;
}
