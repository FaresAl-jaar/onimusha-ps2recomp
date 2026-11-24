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

// Function: sub_0025E890
// Address: 0x25e890 - 0x25e928
void sub_0025E890_0x25e890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E890_0x25e890");
#endif

    switch (ctx->pc) {
        case 0x25e890u: goto label_25e890;
        case 0x25e894u: goto label_25e894;
        case 0x25e898u: goto label_25e898;
        case 0x25e89cu: goto label_25e89c;
        case 0x25e8a0u: goto label_25e8a0;
        case 0x25e8a4u: goto label_25e8a4;
        case 0x25e8a8u: goto label_25e8a8;
        case 0x25e8acu: goto label_25e8ac;
        case 0x25e8b0u: goto label_25e8b0;
        case 0x25e8b4u: goto label_25e8b4;
        case 0x25e8b8u: goto label_25e8b8;
        case 0x25e8bcu: goto label_25e8bc;
        case 0x25e8c0u: goto label_25e8c0;
        case 0x25e8c4u: goto label_25e8c4;
        case 0x25e8c8u: goto label_25e8c8;
        case 0x25e8ccu: goto label_25e8cc;
        case 0x25e8d0u: goto label_25e8d0;
        case 0x25e8d4u: goto label_25e8d4;
        case 0x25e8d8u: goto label_25e8d8;
        case 0x25e8dcu: goto label_25e8dc;
        case 0x25e8e0u: goto label_25e8e0;
        case 0x25e8e4u: goto label_25e8e4;
        case 0x25e8e8u: goto label_25e8e8;
        case 0x25e8ecu: goto label_25e8ec;
        case 0x25e8f0u: goto label_25e8f0;
        case 0x25e8f4u: goto label_25e8f4;
        case 0x25e8f8u: goto label_25e8f8;
        case 0x25e8fcu: goto label_25e8fc;
        case 0x25e900u: goto label_25e900;
        case 0x25e904u: goto label_25e904;
        case 0x25e908u: goto label_25e908;
        case 0x25e90cu: goto label_25e90c;
        case 0x25e910u: goto label_25e910;
        case 0x25e914u: goto label_25e914;
        case 0x25e918u: goto label_25e918;
        case 0x25e91cu: goto label_25e91c;
        case 0x25e920u: goto label_25e920;
        case 0x25e924u: goto label_25e924;
        default: break;
    }

    ctx->pc = 0x25e890u;

label_25e890:
    // 0x25e890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_25e894:
    // 0x25e894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25e894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25e898:
    // 0x25e898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25e89c:
    // 0x25e89c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25e8a0:
    // 0x25e8a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25e8a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e8a4:
    // 0x25e8a4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_25e8a8:
    if (ctx->pc == 0x25E8A8u) {
        ctx->pc = 0x25E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8A4u;
        // 0x25e8a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E8ACu;
        goto label_25e8ac;
    }
    ctx->pc = 0x25E8A4u;
    {
        const bool branch_taken_0x25e8a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8A4u;
        // 0x25e8a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8a4) {
            ctx->pc = 0x25E910u;
            goto label_25e910;
        }
    }
    ctx->pc = 0x25E8ACu;
label_25e8ac:
    // 0x25e8ac: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x25e8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_25e8b0:
    // 0x25e8b0: 0x24427410  addiu       $v0, $v0, 0x7410
    ctx->pc = 0x25e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29712));
label_25e8b4:
    // 0x25e8b4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x25e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_25e8b8:
    // 0x25e8b8: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x25e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_25e8bc:
    // 0x25e8bc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_25e8c0:
    if (ctx->pc == 0x25E8C0u) {
        ctx->pc = 0x25E8C4u;
        goto label_25e8c4;
    }
    ctx->pc = 0x25E8BCu;
    {
        const bool branch_taken_0x25e8bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e8bc) {
            ctx->pc = 0x25E8E8u;
            goto label_25e8e8;
        }
    }
    ctx->pc = 0x25E8C4u;
label_25e8c4:
    // 0x25e8c4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_25e8c8:
    if (ctx->pc == 0x25E8C8u) {
        ctx->pc = 0x25E8CCu;
        goto label_25e8cc;
    }
    ctx->pc = 0x25E8C4u;
    {
        const bool branch_taken_0x25e8c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e8c4) {
            ctx->pc = 0x25E8E0u;
            goto label_25e8e0;
        }
    }
    ctx->pc = 0x25E8CCu;
label_25e8cc:
    // 0x25e8cc: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x25e8ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_25e8d0:
    // 0x25e8d0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x25e8d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_25e8d4:
    // 0x25e8d4: 0x320f809  jalr        $t9
label_25e8d8:
    if (ctx->pc == 0x25E8D8u) {
        ctx->pc = 0x25E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8D4u;
        // 0x25e8d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E8DCu;
        goto label_25e8dc;
    }
    ctx->pc = 0x25E8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E8DCu);
        ctx->pc = 0x25E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8D4u;
        // 0x25e8d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E8D4u, 0x25E8DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E8DCu;
label_25e8dc:
    // 0x25e8dc: 0x0  nop
    ctx->pc = 0x25e8dcu;
    // NOP
label_25e8e0:
    // 0x25e8e0: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x25e8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_25e8e4:
    // 0x25e8e4: 0x0  nop
    ctx->pc = 0x25e8e4u;
    // NOP
label_25e8e8:
    // 0x25e8e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e8ec:
    // 0x25e8ec: 0xc096b20  jal         func_25AC80
label_25e8f0:
    if (ctx->pc == 0x25E8F0u) {
        ctx->pc = 0x25E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8ECu;
        // 0x25e8f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E8F4u;
        goto label_25e8f4;
    }
    ctx->pc = 0x25E8ECu;
    SET_GPR_U32(ctx, 31, 0x25E8F4u);
    ctx->pc = 0x25E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E8ECu;
    // 0x25e8f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x25E8ECu, 0x25E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8F4u;
label_25e8f4:
    // 0x25e8f4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x25e8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_25e8f8:
    // 0x25e8f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25e8f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_25e8fc:
    // 0x25e8fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_25e900:
    if (ctx->pc == 0x25E900u) {
        ctx->pc = 0x25E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8FCu;
        // 0x25e900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E904u;
        goto label_25e904;
    }
    ctx->pc = 0x25E8FCu;
    {
        const bool branch_taken_0x25e8fc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x25E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8FCu;
        // 0x25e900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8fc) {
            ctx->pc = 0x25E910u;
            goto label_25e910;
        }
    }
    ctx->pc = 0x25E904u;
label_25e904:
    // 0x25e904: 0xc0741a8  jal         func_1D06A0
label_25e908:
    if (ctx->pc == 0x25E908u) {
        ctx->pc = 0x25E90Cu;
        goto label_25e90c;
    }
    ctx->pc = 0x25E904u;
    SET_GPR_U32(ctx, 31, 0x25E90Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x25E904u, 0x25E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E90Cu;
label_25e90c:
    // 0x25e90c: 0x0  nop
    ctx->pc = 0x25e90cu;
    // NOP
label_25e910:
    // 0x25e910: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25e910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e914:
    // 0x25e914: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25e914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25e918:
    // 0x25e918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25e91c:
    // 0x25e91c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25e920:
    // 0x25e920: 0x3e00008  jr          $ra
label_25e924:
    if (ctx->pc == 0x25E924u) {
        ctx->pc = 0x25E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E920u;
        // 0x25e924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E928u;
        goto label_fallthrough_0x25e920;
    }
    ctx->pc = 0x25E920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E920u;
        // 0x25e924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25e920:
    ctx->pc = 0x25E928u;
}
