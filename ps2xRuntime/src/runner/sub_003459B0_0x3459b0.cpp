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

// Function: sub_003459B0
// Address: 0x3459b0 - 0x345a24
void sub_003459B0_0x3459b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003459B0_0x3459b0");
#endif

    switch (ctx->pc) {
        case 0x3459b0u: goto label_3459b0;
        case 0x3459b4u: goto label_3459b4;
        case 0x3459b8u: goto label_3459b8;
        case 0x3459bcu: goto label_3459bc;
        case 0x3459c0u: goto label_3459c0;
        case 0x3459c4u: goto label_3459c4;
        case 0x3459c8u: goto label_3459c8;
        case 0x3459ccu: goto label_3459cc;
        case 0x3459d0u: goto label_3459d0;
        case 0x3459d4u: goto label_3459d4;
        case 0x3459d8u: goto label_3459d8;
        case 0x3459dcu: goto label_3459dc;
        case 0x3459e0u: goto label_3459e0;
        case 0x3459e4u: goto label_3459e4;
        case 0x3459e8u: goto label_3459e8;
        case 0x3459ecu: goto label_3459ec;
        case 0x3459f0u: goto label_3459f0;
        case 0x3459f4u: goto label_3459f4;
        case 0x3459f8u: goto label_3459f8;
        case 0x3459fcu: goto label_3459fc;
        case 0x345a00u: goto label_345a00;
        case 0x345a04u: goto label_345a04;
        case 0x345a08u: goto label_345a08;
        case 0x345a0cu: goto label_345a0c;
        case 0x345a10u: goto label_345a10;
        case 0x345a14u: goto label_345a14;
        case 0x345a18u: goto label_345a18;
        case 0x345a1cu: goto label_345a1c;
        case 0x345a20u: goto label_345a20;
        default: break;
    }

    ctx->pc = 0x3459b0u;

label_3459b0:
    // 0x3459b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3459b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3459b4:
    // 0x3459b4: 0x3c070004  lui         $a3, 0x4
    ctx->pc = 0x3459b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
label_3459b8:
    // 0x3459b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3459b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3459bc:
    // 0x3459bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3459bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3459c0:
    // 0x3459c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3459c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3459c4:
    // 0x3459c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3459c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3459c8:
    // 0x3459c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3459c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3459cc:
    // 0x3459cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3459ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3459d0:
    // 0x3459d0: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x3459d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3459d4:
    // 0x3459d4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3459d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3459d8:
    // 0x3459d8: 0x320f809  jalr        $t9
label_3459dc:
    if (ctx->pc == 0x3459DCu) {
        ctx->pc = 0x3459DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459D8u;
        // 0x3459dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3459E0u;
        goto label_3459e0;
    }
    ctx->pc = 0x3459D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3459E0u);
        ctx->pc = 0x3459DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459D8u;
        // 0x3459dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3459D8u, 0x3459E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3459E0u;
label_3459e0:
    // 0x3459e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3459e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3459e4:
    // 0x3459e4: 0xc061bb0  jal         func_186EC0
label_3459e8:
    if (ctx->pc == 0x3459E8u) {
        ctx->pc = 0x3459E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459E4u;
        // 0x3459e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3459ECu;
        goto label_3459ec;
    }
    ctx->pc = 0x3459E4u;
    SET_GPR_U32(ctx, 31, 0x3459ECu);
    ctx->pc = 0x3459E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3459E4u;
    // 0x3459e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186EC0u, 0x3459E4u, 0x3459ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3459ECu;
label_3459ec:
    // 0x3459ec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3459ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3459f0:
    // 0x3459f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3459f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3459f4:
    // 0x3459f4: 0x2023025  or          $a2, $s0, $v0
    ctx->pc = 0x3459f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_3459f8:
    // 0x3459f8: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x3459f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3459fc:
    // 0x3459fc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3459fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_345a00:
    // 0x345a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_345a04:
    // 0x345a04: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x345a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_345a08:
    // 0x345a08: 0x320f809  jalr        $t9
label_345a0c:
    if (ctx->pc == 0x345A0Cu) {
        ctx->pc = 0x345A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A08u;
        // 0x345a0c: 0x34470080  ori         $a3, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x345A10u;
        goto label_345a10;
    }
    ctx->pc = 0x345A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x345A10u);
        ctx->pc = 0x345A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A08u;
        // 0x345a0c: 0x34470080  ori         $a3, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345A08u, 0x345A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x345A10u;
label_345a10:
    // 0x345a10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x345a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_345a14:
    // 0x345a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x345a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_345a18:
    // 0x345a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x345a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_345a1c:
    // 0x345a1c: 0x3e00008  jr          $ra
label_345a20:
    if (ctx->pc == 0x345A20u) {
        ctx->pc = 0x345A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A1Cu;
        // 0x345a20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345A24u;
        goto label_fallthrough_0x345a1c;
    }
    ctx->pc = 0x345A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A1Cu;
        // 0x345a20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x345a1c:
    ctx->pc = 0x345A24u;
}
