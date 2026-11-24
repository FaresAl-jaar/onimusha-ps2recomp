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

// Function: sub_002A24B0
// Address: 0x2a24b0 - 0x2a2598
void sub_002A24B0_0x2a24b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A24B0_0x2a24b0");
#endif

    switch (ctx->pc) {
        case 0x2a2518u: goto label_2a2518;
        case 0x2a2534u: goto label_2a2534;
        case 0x2a2550u: goto label_2a2550;
        default: break;
    }

    ctx->pc = 0x2a24b0u;

    // 0x2a24b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a24b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a24b4: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x2a24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a24b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a24b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a24bc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2a24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a24c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a24c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a24c4: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x2a24c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a24c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a24c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a24cc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2a24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a24d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a24d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a24d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a24d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a24d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a24dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a24dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a24e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a24e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2a24e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2a24e8: 0x8c86007c  lw          $a2, 0x7C($a0)
    ctx->pc = 0x2a24e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2a24ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a24ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a24f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a24f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a24f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24f8: 0xc7a021  addu        $s4, $a2, $a3
    ctx->pc = 0x2a24f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a24fc: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2a24fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2a2500: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2a2500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2a2504: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x2a2504u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x2a2508: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x2a2508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2a250c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a2510: 0x8c530030  lw          $s3, 0x30($v0)
    ctx->pc = 0x2a2510u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2a2514: 0x0  nop
    ctx->pc = 0x2a2514u;
    // NOP
label_2a2518:
    // 0x2a2518: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x2a2518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2a251c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a251cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2520: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a2520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2524: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2a2524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a2528: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a2528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a252c: 0xc0526d4  jal         func_149B50
    ctx->pc = 0x2A252Cu;
    SET_GPR_U32(ctx, 31, 0x2A2534u);
    ctx->pc = 0x2A2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A252Cu;
    // 0x2a2530: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B50u, 0x2A252Cu, 0x2A2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2534u;
label_2a2534:
    // 0x2a2534: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x2a2534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2a2538: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x2a2538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2a253c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a253cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2540: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2a2540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a2544: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a2544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a2548: 0xc0526d4  jal         func_149B50
    ctx->pc = 0x2A2548u;
    SET_GPR_U32(ctx, 31, 0x2A2550u);
    ctx->pc = 0x2A254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2548u;
    // 0x2a254c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B50u, 0x2A2548u, 0x2A2550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2550u;
label_2a2550:
    // 0x2a2550: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x2a2550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x2a2554: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a2554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a2558: 0x26520038  addiu       $s2, $s2, 0x38
    ctx->pc = 0x2a2558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x2a255c: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x2a255cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x2a2560: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2a2560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a2564: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2A2564u;
    {
        const bool branch_taken_0x2a2564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2564u;
        // 0x2a2568: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2564) {
            ctx->pc = 0x2A2518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2518;
        }
    }
    ctx->pc = 0x2A256Cu;
    // 0x2a256c: 0x2643000f  addiu       $v1, $s2, 0xF
    ctx->pc = 0x2a256cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x2a2570: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2a2570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2a2574: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a2574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a2578: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a2578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a257c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a257cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2580: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a2580u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2584: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a2584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2588: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a258c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a258cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2590: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2590u;
        // 0x2a2594: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2598u;
}
