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

// Function: sub_003867C0
// Address: 0x3867c0 - 0x386858
void sub_003867C0_0x3867c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003867C0_0x3867c0");
#endif

    switch (ctx->pc) {
        case 0x3867c0u: goto label_3867c0;
        case 0x3867c4u: goto label_3867c4;
        case 0x3867c8u: goto label_3867c8;
        case 0x3867ccu: goto label_3867cc;
        case 0x3867d0u: goto label_3867d0;
        case 0x3867d4u: goto label_3867d4;
        case 0x3867d8u: goto label_3867d8;
        case 0x3867dcu: goto label_3867dc;
        case 0x3867e0u: goto label_3867e0;
        case 0x3867e4u: goto label_3867e4;
        case 0x3867e8u: goto label_3867e8;
        case 0x3867ecu: goto label_3867ec;
        case 0x3867f0u: goto label_3867f0;
        case 0x3867f4u: goto label_3867f4;
        case 0x3867f8u: goto label_3867f8;
        case 0x3867fcu: goto label_3867fc;
        case 0x386800u: goto label_386800;
        case 0x386804u: goto label_386804;
        case 0x386808u: goto label_386808;
        case 0x38680cu: goto label_38680c;
        case 0x386810u: goto label_386810;
        case 0x386814u: goto label_386814;
        case 0x386818u: goto label_386818;
        case 0x38681cu: goto label_38681c;
        case 0x386820u: goto label_386820;
        case 0x386824u: goto label_386824;
        case 0x386828u: goto label_386828;
        case 0x38682cu: goto label_38682c;
        case 0x386830u: goto label_386830;
        case 0x386834u: goto label_386834;
        case 0x386838u: goto label_386838;
        case 0x38683cu: goto label_38683c;
        case 0x386840u: goto label_386840;
        case 0x386844u: goto label_386844;
        case 0x386848u: goto label_386848;
        case 0x38684cu: goto label_38684c;
        case 0x386850u: goto label_386850;
        case 0x386854u: goto label_386854;
        default: break;
    }

    ctx->pc = 0x3867c0u;

label_3867c0:
    // 0x3867c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3867c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3867c4:
    // 0x3867c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3867c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3867c8:
    // 0x3867c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3867c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3867cc:
    // 0x3867cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3867ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3867d0:
    // 0x3867d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3867d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3867d4:
    // 0x3867d4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_3867d8:
    if (ctx->pc == 0x3867D8u) {
        ctx->pc = 0x3867D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3867D4u;
        // 0x3867d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3867DCu;
        goto label_3867dc;
    }
    ctx->pc = 0x3867D4u;
    {
        const bool branch_taken_0x3867d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3867D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3867D4u;
        // 0x3867d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3867d4) {
            ctx->pc = 0x386840u;
            goto label_386840;
        }
    }
    ctx->pc = 0x3867DCu;
label_3867dc:
    // 0x3867dc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x3867dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_3867e0:
    // 0x3867e0: 0x24429ad0  addiu       $v0, $v0, -0x6530
    ctx->pc = 0x3867e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941392));
label_3867e4:
    // 0x3867e4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x3867e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_3867e8:
    // 0x3867e8: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x3867e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_3867ec:
    // 0x3867ec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_3867f0:
    if (ctx->pc == 0x3867F0u) {
        ctx->pc = 0x3867F4u;
        goto label_3867f4;
    }
    ctx->pc = 0x3867ECu;
    {
        const bool branch_taken_0x3867ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3867ec) {
            ctx->pc = 0x386818u;
            goto label_386818;
        }
    }
    ctx->pc = 0x3867F4u;
label_3867f4:
    // 0x3867f4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3867f8:
    if (ctx->pc == 0x3867F8u) {
        ctx->pc = 0x3867FCu;
        goto label_3867fc;
    }
    ctx->pc = 0x3867F4u;
    {
        const bool branch_taken_0x3867f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3867f4) {
            ctx->pc = 0x386810u;
            goto label_386810;
        }
    }
    ctx->pc = 0x3867FCu;
label_3867fc:
    // 0x3867fc: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x3867fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_386800:
    // 0x386800: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x386800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_386804:
    // 0x386804: 0x320f809  jalr        $t9
label_386808:
    if (ctx->pc == 0x386808u) {
        ctx->pc = 0x386808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386804u;
        // 0x386808: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38680Cu;
        goto label_38680c;
    }
    ctx->pc = 0x386804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38680Cu);
        ctx->pc = 0x386808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386804u;
        // 0x386808: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386804u, 0x38680Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38680Cu;
label_38680c:
    // 0x38680c: 0x0  nop
    ctx->pc = 0x38680cu;
    // NOP
label_386810:
    // 0x386810: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x386810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
label_386814:
    // 0x386814: 0x0  nop
    ctx->pc = 0x386814u;
    // NOP
label_386818:
    // 0x386818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x386818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38681c:
    // 0x38681c: 0xc096b20  jal         func_25AC80
label_386820:
    if (ctx->pc == 0x386820u) {
        ctx->pc = 0x386820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38681Cu;
        // 0x386820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386824u;
        goto label_386824;
    }
    ctx->pc = 0x38681Cu;
    SET_GPR_U32(ctx, 31, 0x386824u);
    ctx->pc = 0x386820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38681Cu;
    // 0x386820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x38681Cu, 0x386824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386824u;
label_386824:
    // 0x386824: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x386824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_386828:
    // 0x386828: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x386828u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_38682c:
    // 0x38682c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_386830:
    if (ctx->pc == 0x386830u) {
        ctx->pc = 0x386830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38682Cu;
        // 0x386830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386834u;
        goto label_386834;
    }
    ctx->pc = 0x38682Cu;
    {
        const bool branch_taken_0x38682c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x386830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38682Cu;
        // 0x386830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38682c) {
            ctx->pc = 0x386840u;
            goto label_386840;
        }
    }
    ctx->pc = 0x386834u;
label_386834:
    // 0x386834: 0xc0741a8  jal         func_1D06A0
label_386838:
    if (ctx->pc == 0x386838u) {
        ctx->pc = 0x38683Cu;
        goto label_38683c;
    }
    ctx->pc = 0x386834u;
    SET_GPR_U32(ctx, 31, 0x38683Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x386834u, 0x38683Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38683Cu;
label_38683c:
    // 0x38683c: 0x0  nop
    ctx->pc = 0x38683cu;
    // NOP
label_386840:
    // 0x386840: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x386840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_386844:
    // 0x386844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x386844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_386848:
    // 0x386848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x386848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38684c:
    // 0x38684c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38684cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_386850:
    // 0x386850: 0x3e00008  jr          $ra
label_386854:
    if (ctx->pc == 0x386854u) {
        ctx->pc = 0x386854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386850u;
        // 0x386854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386858u;
        goto label_fallthrough_0x386850;
    }
    ctx->pc = 0x386850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386850u;
        // 0x386854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x386850:
    ctx->pc = 0x386858u;
}
