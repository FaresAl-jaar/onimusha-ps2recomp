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

// Function: sub_002A44D0
// Address: 0x2a44d0 - 0x2a4594
void sub_002A44D0_0x2a44d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A44D0_0x2a44d0");
#endif

    switch (ctx->pc) {
        case 0x2a451cu: goto label_2a451c;
        case 0x2a4548u: goto label_2a4548;
        case 0x2a4574u: goto label_2a4574;
        default: break;
    }

    ctx->pc = 0x2a44d0u;

    // 0x2a44d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a44d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a44d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a44d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a44d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a44d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2a44dc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a44dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a44e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a44e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a44e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a44e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a44e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2a44e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a44ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a44ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a44f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a44f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a44f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a44f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a44f8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2a44f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a44fc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a44fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a4500: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x2a4500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x2a4504: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2a4504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4508: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a4508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a450c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a450cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4510: 0x24c6d210  addiu       $a2, $a2, -0x2DF0
    ctx->pc = 0x2a4510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955536));
    // 0x2a4514: 0xc05edcc  jal         func_17B730
    ctx->pc = 0x2A4514u;
    SET_GPR_U32(ctx, 31, 0x2A451Cu);
    ctx->pc = 0x2A4518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4514u;
    // 0x2a4518: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B730u, 0x2A4514u, 0x2A451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A451Cu;
label_2a451c:
    // 0x2a451c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a451cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a4520: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a4520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4524: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a4524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a4528: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a452c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a452cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4530: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a4530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4534: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a4534u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4538: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a4538u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a453c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a453cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4540: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A4540u;
    SET_GPR_U32(ctx, 31, 0x2A4548u);
    ctx->pc = 0x2A4544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4540u;
    // 0x2a4544: 0xffb30000  sd          $s3, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A4540u, 0x2A4548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4548u;
label_2a4548:
    // 0x2a4548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a454c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2a454cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4550: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2a4550u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4554: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2a4554u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4558: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x2a4558u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a455c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a455cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4560: 0x240517c0  addiu       $a1, $zero, 0x17C0
    ctx->pc = 0x2a4560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6080));
    // 0x2a4564: 0x240600f4  addiu       $a2, $zero, 0xF4
    ctx->pc = 0x2a4564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x2a4568: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a4568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a456c: 0xc097c20  jal         func_25F080
    ctx->pc = 0x2A456Cu;
    SET_GPR_U32(ctx, 31, 0x2A4574u);
    ctx->pc = 0x2A4570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A456Cu;
    // 0x2a4570: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F080u, 0x2A456Cu, 0x2A4574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4574u;
label_2a4574:
    // 0x2a4574: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a4574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a4578: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a4578u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a457c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a457cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a4580: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a4580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4584: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a4584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4588: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a4588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a458c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A458Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A458Cu;
        // 0x2a4590: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A458Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4594u;
}
