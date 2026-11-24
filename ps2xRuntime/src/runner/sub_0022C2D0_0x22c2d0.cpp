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

// Function: sub_0022C2D0
// Address: 0x22c2d0 - 0x22c33c
void sub_0022C2D0_0x22c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C2D0_0x22c2d0");
#endif

    switch (ctx->pc) {
        case 0x22c308u: goto label_22c308;
        default: break;
    }

    ctx->pc = 0x22c2d0u;

    // 0x22c2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c2d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22c2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22c2d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22c2d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22c2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22c2e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22c2e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22c2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22c2e8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22c2e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2ec: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x22c2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x22c2f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c2f4: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x22c2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x22c2f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22c2f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c2fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22c2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22c300: 0xc08b0a8  jal         func_22C2A0
    ctx->pc = 0x22C300u;
    SET_GPR_U32(ctx, 31, 0x22C308u);
    ctx->pc = 0x22C304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C300u;
    // 0x22c304: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C2A0u, 0x22C300u, 0x22C308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C308u;
label_22c308:
    // 0x22c308: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x22c308u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x22c30c: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x22c30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x22c310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22c310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c314: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x22c314u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x22c318: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x22c318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x22c31c: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x22c31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22c320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c324: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x22c324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c328: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22c328u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22c32c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22c32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c330: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22c330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c334: 0x808b0a8  j           func_22C2A0
    ctx->pc = 0x22C334u;
    ctx->pc = 0x22C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C334u;
    // 0x22c338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C2A0u;
    sub_0022C2A0_0x22c2a0(rdram, ctx, runtime); return;
    ctx->pc = 0x22C33Cu;
}
