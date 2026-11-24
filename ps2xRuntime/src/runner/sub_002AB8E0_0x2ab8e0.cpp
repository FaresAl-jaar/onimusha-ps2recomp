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

// Function: sub_002AB8E0
// Address: 0x2ab8e0 - 0x2ab97c
void sub_002AB8E0_0x2ab8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB8E0_0x2ab8e0");
#endif

    switch (ctx->pc) {
        case 0x2ab934u: goto label_2ab934;
        case 0x2ab960u: goto label_2ab960;
        default: break;
    }

    ctx->pc = 0x2ab8e0u;

    // 0x2ab8e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ab8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ab8e4: 0x3c021e00  lui         $v0, 0x1E00
    ctx->pc = 0x2ab8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7680 << 16));
    // 0x2ab8e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ab8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ab8ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ab8ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab8f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ab8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ab8f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ab8f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab8f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ab8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ab8fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ab8fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab900: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ab900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ab904: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ab904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab908: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ab908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ab90c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ab90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab910: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2ab910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2ab914: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2ab914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab918: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2ab918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2ab91c: 0x34450604  ori         $a1, $v0, 0x604
    ctx->pc = 0x2ab91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1540);
    // 0x2ab920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ab920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab924: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ab924u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab928: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2ab928u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab92c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2AB92Cu;
    SET_GPR_U32(ctx, 31, 0x2AB934u);
    ctx->pc = 0x2AB930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB92Cu;
    // 0x2ab930: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2AB92Cu, 0x2AB934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB934u;
label_2ab934:
    // 0x2ab934: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2ab934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2ab938: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ab938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab93c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2ab93cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab940: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2ab940u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab944: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2ab944u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab948: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab94c: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x2ab94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x2ab950: 0x34458688  ori         $a1, $v0, 0x8688
    ctx->pc = 0x2ab950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34440);
    // 0x2ab954: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2ab954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ab958: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2AB958u;
    SET_GPR_U32(ctx, 31, 0x2AB960u);
    ctx->pc = 0x2AB95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB958u;
    // 0x2ab95c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2AB958u, 0x2AB960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB960u;
label_2ab960:
    // 0x2ab960: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ab960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ab964: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ab964u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ab968: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ab968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab96c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ab96cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab970: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ab970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab974: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB974u;
        // 0x2ab978: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB97Cu;
}
