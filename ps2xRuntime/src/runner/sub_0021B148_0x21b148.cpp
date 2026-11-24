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

// Function: sub_0021B148
// Address: 0x21b148 - 0x21b194
void sub_0021B148_0x21b148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B148_0x21b148");
#endif

    switch (ctx->pc) {
        case 0x21b160u: goto label_21b160;
        default: break;
    }

    ctx->pc = 0x21b148u;

    // 0x21b148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b14c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b154: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21b154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21b158: 0xc043808  jal         func_10E020
    ctx->pc = 0x21B158u;
    SET_GPR_U32(ctx, 31, 0x21B160u);
    ctx->pc = 0x21B15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B158u;
    // 0x21b15c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x21B158u, 0x21B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B160u;
label_21b160:
    // 0x21b160: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x21b160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x21b164: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x21b164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21b168: 0x24620803  addiu       $v0, $v1, 0x803
    ctx->pc = 0x21b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2051));
    // 0x21b16c: 0x24631002  addiu       $v1, $v1, 0x1002
    ctx->pc = 0x21b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4098));
    // 0x21b170: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x21b170u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21b174: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21b174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b178: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x21b178u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x21b17c: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x21b17cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x21b180: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x21b180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x21b184: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x21b184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x21b188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b18c: 0x8043800  j           func_10E000
    ctx->pc = 0x21B18Cu;
    ctx->pc = 0x21B190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B18Cu;
    // 0x21b190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    sub_0010E000_0x10e000(rdram, ctx, runtime); return;
    ctx->pc = 0x21B194u;
}
