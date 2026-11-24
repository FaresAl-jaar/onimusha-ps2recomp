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

// Function: sub_0023BF60
// Address: 0x23bf60 - 0x23bfac
void sub_0023BF60_0x23bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BF60_0x23bf60");
#endif

    switch (ctx->pc) {
        case 0x23bf84u: goto label_23bf84;
        case 0x23bf94u: goto label_23bf94;
        default: break;
    }

    ctx->pc = 0x23bf60u;

    // 0x23bf60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bf64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bf68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bf68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23bf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23bf70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23bf70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23bf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23bf78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23bf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23bf7c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23BF7Cu;
    SET_GPR_U32(ctx, 31, 0x23BF84u);
    ctx->pc = 0x23BF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF7Cu;
    // 0x23bf80: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23BF7Cu, 0x23BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF84u;
label_23bf84:
    // 0x23bf84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23bf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23bf88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf8c: 0xc08efec  jal         func_23BFB0
    ctx->pc = 0x23BF8Cu;
    SET_GPR_U32(ctx, 31, 0x23BF94u);
    ctx->pc = 0x23BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF8Cu;
    // 0x23bf90: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BFB0u, 0x23BF8Cu, 0x23BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF94u;
label_23bf94:
    // 0x23bf94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bf94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bf98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23bf98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23bf9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23bf9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bfa0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23bfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23bfa4: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23BFA4u;
    ctx->pc = 0x23BFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BFA4u;
    // 0x23bfa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23BFACu;
}
