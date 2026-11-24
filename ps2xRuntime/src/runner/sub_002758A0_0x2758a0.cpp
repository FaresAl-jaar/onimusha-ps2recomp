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

// Function: sub_002758A0
// Address: 0x2758a0 - 0x275950
void sub_002758A0_0x2758a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002758A0_0x2758a0");
#endif

    switch (ctx->pc) {
        case 0x2758c8u: goto label_2758c8;
        case 0x2758e8u: goto label_2758e8;
        case 0x2758f8u: goto label_2758f8;
        case 0x27591cu: goto label_27591c;
        default: break;
    }

    ctx->pc = 0x2758a0u;

    // 0x2758a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2758a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2758a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2758a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2758a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2758a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2758ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2758acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2758b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2758b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2758b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2758b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2758b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758bc: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2758bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2758c0: 0xc096c80  jal         func_25B200
    ctx->pc = 0x2758C0u;
    SET_GPR_U32(ctx, 31, 0x2758C8u);
    ctx->pc = 0x2758C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2758C0u;
    // 0x2758c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x2758C0u, 0x2758C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758C8u;
label_2758c8:
    // 0x2758c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2758C8u;
    {
        const bool branch_taken_0x2758c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2758c8) {
            ctx->pc = 0x275900u;
            goto label_275900;
        }
    }
    ctx->pc = 0x2758D0u;
    // 0x2758d0: 0x8243000c  lb          $v1, 0xC($s2)
    ctx->pc = 0x2758d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2758d4: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2758d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2758d8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2758D8u;
    {
        const bool branch_taken_0x2758d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2758DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758D8u;
        // 0x2758dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2758d8) {
            ctx->pc = 0x2758F0u;
            goto label_2758f0;
        }
    }
    ctx->pc = 0x2758E0u;
    // 0x2758e0: 0xc09d664  jal         func_275990
    ctx->pc = 0x2758E0u;
    SET_GPR_U32(ctx, 31, 0x2758E8u);
    ctx->pc = 0x275990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275990u, 0x2758E0u, 0x2758E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758E8u;
label_2758e8:
    // 0x2758e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2758E8u;
    {
        const bool branch_taken_0x2758e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2758e8) {
            ctx->pc = 0x275908u;
            goto label_275908;
        }
    }
    ctx->pc = 0x2758F0u;
label_2758f0:
    // 0x2758f0: 0xc09d684  jal         func_275A10
    ctx->pc = 0x2758F0u;
    SET_GPR_U32(ctx, 31, 0x2758F8u);
    ctx->pc = 0x2758F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2758F0u;
    // 0x2758f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A10u, 0x2758F0u, 0x2758F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758F8u;
label_2758f8:
    // 0x2758f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2758F8u;
    {
        const bool branch_taken_0x2758f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2758FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2758F8u;
        // 0x2758fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2758f8) {
            ctx->pc = 0x275908u;
            goto label_275908;
        }
    }
    ctx->pc = 0x275900u;
label_275900:
    // 0x275900: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x275900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275904: 0x0  nop
    ctx->pc = 0x275904u;
    // NOP
label_275908:
    // 0x275908: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x275908u;
    {
        const bool branch_taken_0x275908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275908u;
        // 0x27590c: 0xa251000c  sb          $s1, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275908) {
            ctx->pc = 0x275930u;
            goto label_275930;
        }
    }
    ctx->pc = 0x275910u;
    // 0x275910: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x275910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275914: 0xc09d5dc  jal         func_275770
    ctx->pc = 0x275914u;
    SET_GPR_U32(ctx, 31, 0x27591Cu);
    ctx->pc = 0x275918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275914u;
    // 0x275918: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275770u, 0x275914u, 0x27591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27591Cu;
label_27591c:
    // 0x27591c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x27591cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x275920: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x275920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x275924: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x275924u;
    {
        const bool branch_taken_0x275924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275924u;
        // 0x275928: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x275924) {
            ctx->pc = 0x275938u;
            goto label_275938;
        }
    }
    ctx->pc = 0x27592Cu;
    // 0x27592c: 0x0  nop
    ctx->pc = 0x27592cu;
    // NOP
label_275930:
    // 0x275930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275934: 0x0  nop
    ctx->pc = 0x275934u;
    // NOP
label_275938:
    // 0x275938: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x275938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27593c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27593cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275948: 0x3e00008  jr          $ra
    ctx->pc = 0x275948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275948u;
        // 0x27594c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275950u;
}
