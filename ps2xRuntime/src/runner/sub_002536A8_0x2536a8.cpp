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

// Function: sub_002536A8
// Address: 0x2536a8 - 0x253700
void sub_002536A8_0x2536a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002536A8_0x2536a8");
#endif

    switch (ctx->pc) {
        case 0x2536ccu: goto label_2536cc;
        default: break;
    }

    ctx->pc = 0x2536a8u;

    // 0x2536a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2536a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2536ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2536acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2536b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2536b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2536b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2536b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2536b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2536b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2536bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2536bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2536c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2536c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2536c4: 0xc094ba8  jal         func_252EA0
    ctx->pc = 0x2536C4u;
    SET_GPR_U32(ctx, 31, 0x2536CCu);
    ctx->pc = 0x2536C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2536C4u;
    // 0x2536c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EA0u, 0x2536C4u, 0x2536CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2536CCu;
label_2536cc:
    // 0x2536cc: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x2536ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x2536d0: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x2536d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2536d4: 0x24428920  addiu       $v0, $v0, -0x76E0
    ctx->pc = 0x2536d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936864));
    // 0x2536d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2536d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2536dc: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x2536dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2536e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2536e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2536e4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2536e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2536e8: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x2536e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x2536ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2536ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2536f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2536f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2536f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2536f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2536f8: 0x8094bae  j           func_252EB8
    ctx->pc = 0x2536F8u;
    ctx->pc = 0x2536FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2536F8u;
    // 0x2536fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EB8u;
    sub_00252EB8_0x252eb8(rdram, ctx, runtime); return;
    ctx->pc = 0x253700u;
}
