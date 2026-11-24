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

// Function: sub_00209920
// Address: 0x209920 - 0x209970
void sub_00209920_0x209920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209920_0x209920");
#endif

    switch (ctx->pc) {
        case 0x209944u: goto label_209944;
        default: break;
    }

    ctx->pc = 0x209920u;

    // 0x209920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209928: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x209928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20992c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20992cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209930: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x209930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209934: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x209934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x209938: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x209938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20993c: 0xc0821e6  jal         func_208798
    ctx->pc = 0x20993Cu;
    SET_GPR_U32(ctx, 31, 0x209944u);
    ctx->pc = 0x209940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20993Cu;
    // 0x209940: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x20993Cu, 0x209944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209944u;
label_209944:
    // 0x209944: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x209944u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x209948: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x209948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20994c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20994cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209954: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x209954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209958: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x209958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20995c: 0x2e070001  sltiu       $a3, $s0, 0x1
    ctx->pc = 0x20995cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x209960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209964: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209968: 0x8089954  j           func_226550
    ctx->pc = 0x209968u;
    ctx->pc = 0x20996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209968u;
    // 0x20996c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226550u;
    sub_00226550_0x226550(rdram, ctx, runtime); return;
    ctx->pc = 0x209970u;
}
