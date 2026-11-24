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

// Function: sub_001D4550
// Address: 0x1d4550 - 0x1d45dc
void sub_001D4550_0x1d4550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4550_0x1d4550");
#endif

    switch (ctx->pc) {
        case 0x1d4550u: goto label_1d4550;
        case 0x1d4554u: goto label_1d4554;
        case 0x1d4558u: goto label_1d4558;
        case 0x1d455cu: goto label_1d455c;
        case 0x1d4560u: goto label_1d4560;
        case 0x1d4564u: goto label_1d4564;
        case 0x1d4568u: goto label_1d4568;
        case 0x1d456cu: goto label_1d456c;
        case 0x1d4570u: goto label_1d4570;
        case 0x1d4574u: goto label_1d4574;
        case 0x1d4578u: goto label_1d4578;
        case 0x1d457cu: goto label_1d457c;
        case 0x1d4580u: goto label_1d4580;
        case 0x1d4584u: goto label_1d4584;
        case 0x1d4588u: goto label_1d4588;
        case 0x1d458cu: goto label_1d458c;
        case 0x1d4590u: goto label_1d4590;
        case 0x1d4594u: goto label_1d4594;
        case 0x1d4598u: goto label_1d4598;
        case 0x1d459cu: goto label_1d459c;
        case 0x1d45a0u: goto label_1d45a0;
        case 0x1d45a4u: goto label_1d45a4;
        case 0x1d45a8u: goto label_1d45a8;
        case 0x1d45acu: goto label_1d45ac;
        case 0x1d45b0u: goto label_1d45b0;
        case 0x1d45b4u: goto label_1d45b4;
        case 0x1d45b8u: goto label_1d45b8;
        case 0x1d45bcu: goto label_1d45bc;
        case 0x1d45c0u: goto label_1d45c0;
        case 0x1d45c4u: goto label_1d45c4;
        case 0x1d45c8u: goto label_1d45c8;
        case 0x1d45ccu: goto label_1d45cc;
        case 0x1d45d0u: goto label_1d45d0;
        case 0x1d45d4u: goto label_1d45d4;
        case 0x1d45d8u: goto label_1d45d8;
        default: break;
    }

    ctx->pc = 0x1d4550u;

label_1d4550:
    // 0x1d4550: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d4550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1d4554:
    // 0x1d4554: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d4554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1d4558:
    // 0x1d4558: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d4558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d455c:
    // 0x1d455c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d4560:
    // 0x1d4560: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d4560u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4564:
    // 0x1d4564: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d4564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d4568:
    // 0x1d4568: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d4568u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d456c:
    // 0x1d456c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d4570:
    // 0x1d4570: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1d4570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d4574:
    // 0x1d4574: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d4578:
    // 0x1d4578: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d4578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d457c:
    // 0x1d457c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d457cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d4580:
    // 0x1d4580: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1d4580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d4584:
    // 0x1d4584: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1d4584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1d4588:
    // 0x1d4588: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x1d4588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1d458c:
    // 0x1d458c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1d4590:
    // 0x1d4590: 0x24077900  addiu       $a3, $zero, 0x7900
    ctx->pc = 0x1d4590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
label_1d4594:
    // 0x1d4594: 0xc076814  jal         func_1DA050
label_1d4598:
    if (ctx->pc == 0x1D4598u) {
        ctx->pc = 0x1D4598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4594u;
        // 0x1d4598: 0x24067000  addiu       $a2, $zero, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D459Cu;
        goto label_1d459c;
    }
    ctx->pc = 0x1D4594u;
    SET_GPR_U32(ctx, 31, 0x1D459Cu);
    ctx->pc = 0x1D4598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4594u;
    // 0x1d4598: 0x24067000  addiu       $a2, $zero, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA050u, 0x1D4594u, 0x1D459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D459Cu;
label_1d459c:
    // 0x1d459c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d459cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d45a0:
    // 0x1d45a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1d45a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d45a4:
    // 0x1d45a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1d45a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d45a8:
    // 0x1d45a8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1d45a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d45ac:
    // 0x1d45ac: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1d45acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d45b0:
    // 0x1d45b0: 0x220f809  jalr        $s1
label_1d45b4:
    if (ctx->pc == 0x1D45B4u) {
        ctx->pc = 0x1D45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45B0u;
        // 0x1d45b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D45B8u;
        goto label_1d45b8;
    }
    ctx->pc = 0x1D45B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x1D45B8u);
        ctx->pc = 0x1D45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45B0u;
        // 0x1d45b4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D45B0u, 0x1D45B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D45B8u;
label_1d45b8:
    // 0x1d45b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1d45b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1d45bc:
    // 0x1d45bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d45bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d45c0:
    // 0x1d45c0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d45c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d45c4:
    // 0x1d45c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d45c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d45c8:
    // 0x1d45c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d45c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d45cc:
    // 0x1d45cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d45ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d45d0:
    // 0x1d45d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d45d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d45d4:
    // 0x1d45d4: 0x3e00008  jr          $ra
label_1d45d8:
    if (ctx->pc == 0x1D45D8u) {
        ctx->pc = 0x1D45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45D4u;
        // 0x1d45d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D45DCu;
        goto label_fallthrough_0x1d45d4;
    }
    ctx->pc = 0x1D45D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D45D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45D4u;
        // 0x1d45d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D45D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d45d4:
    ctx->pc = 0x1D45DCu;
}
