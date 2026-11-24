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

// Function: sub_00220938
// Address: 0x220938 - 0x2209cc
void sub_00220938_0x220938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220938_0x220938");
#endif

    switch (ctx->pc) {
        case 0x220938u: goto label_220938;
        case 0x22093cu: goto label_22093c;
        case 0x220940u: goto label_220940;
        case 0x220944u: goto label_220944;
        case 0x220948u: goto label_220948;
        case 0x22094cu: goto label_22094c;
        case 0x220950u: goto label_220950;
        case 0x220954u: goto label_220954;
        case 0x220958u: goto label_220958;
        case 0x22095cu: goto label_22095c;
        case 0x220960u: goto label_220960;
        case 0x220964u: goto label_220964;
        case 0x220968u: goto label_220968;
        case 0x22096cu: goto label_22096c;
        case 0x220970u: goto label_220970;
        case 0x220974u: goto label_220974;
        case 0x220978u: goto label_220978;
        case 0x22097cu: goto label_22097c;
        case 0x220980u: goto label_220980;
        case 0x220984u: goto label_220984;
        case 0x220988u: goto label_220988;
        case 0x22098cu: goto label_22098c;
        case 0x220990u: goto label_220990;
        case 0x220994u: goto label_220994;
        case 0x220998u: goto label_220998;
        case 0x22099cu: goto label_22099c;
        case 0x2209a0u: goto label_2209a0;
        case 0x2209a4u: goto label_2209a4;
        case 0x2209a8u: goto label_2209a8;
        case 0x2209acu: goto label_2209ac;
        case 0x2209b0u: goto label_2209b0;
        case 0x2209b4u: goto label_2209b4;
        case 0x2209b8u: goto label_2209b8;
        case 0x2209bcu: goto label_2209bc;
        case 0x2209c0u: goto label_2209c0;
        case 0x2209c4u: goto label_2209c4;
        case 0x2209c8u: goto label_2209c8;
        default: break;
    }

    ctx->pc = 0x220938u;

label_220938:
    // 0x220938: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x220938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22093c:
    // 0x22093c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_220940:
    // 0x220940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x220940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_220944:
    // 0x220944: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x220944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_220948:
    // 0x220948: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x220948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_22094c:
    // 0x22094c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22094cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_220950:
    // 0x220950: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x220950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_220954:
    // 0x220954: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x220954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_220958:
    // 0x220958: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x220958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22095c:
    // 0x22095c: 0xc084990  jal         func_212640
label_220960:
    if (ctx->pc == 0x220960u) {
        ctx->pc = 0x220960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22095Cu;
        // 0x220960: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220964u;
        goto label_220964;
    }
    ctx->pc = 0x22095Cu;
    SET_GPR_U32(ctx, 31, 0x220964u);
    ctx->pc = 0x220960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22095Cu;
    // 0x220960: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x22095Cu, 0x220964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220964u;
label_220964:
    // 0x220964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220968:
    // 0x220968: 0xc087ed0  jal         func_21FB40
label_22096c:
    if (ctx->pc == 0x22096Cu) {
        ctx->pc = 0x22096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220968u;
        // 0x22096c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220970u;
        goto label_220970;
    }
    ctx->pc = 0x220968u;
    SET_GPR_U32(ctx, 31, 0x220970u);
    ctx->pc = 0x22096Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220968u;
    // 0x22096c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x220968u, 0x220970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220970u;
label_220970:
    // 0x220970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_220974:
    // 0x220974: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_220978:
    // 0x220978: 0x26300d30  addiu       $s0, $s1, 0xD30
    ctx->pc = 0x220978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
label_22097c:
    // 0x22097c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x22097cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_220980:
    // 0x220980: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x220980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220984:
    // 0x220984: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x220984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_220988:
    // 0x220988: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_22098c:
    if (ctx->pc == 0x22098Cu) {
        ctx->pc = 0x22098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220988u;
        // 0x22098c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220990u;
        goto label_220990;
    }
    ctx->pc = 0x220988u;
    {
        const bool branch_taken_0x220988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220988u;
        // 0x22098c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220988) {
            ctx->pc = 0x220998u;
            goto label_220998;
        }
    }
    ctx->pc = 0x220990u;
label_220990:
    // 0x220990: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x220990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_220994:
    // 0x220994: 0x244209d0  addiu       $v0, $v0, 0x9D0
    ctx->pc = 0x220994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2512));
label_220998:
    // 0x220998: 0x40f809  jalr        $v0
label_22099c:
    if (ctx->pc == 0x22099Cu) {
        ctx->pc = 0x2209A0u;
        goto label_2209a0;
    }
    ctx->pc = 0x220998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2209A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220998u, 0x2209A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2209A0u;
label_2209a0:
    // 0x2209a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2209a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2209a4:
    // 0x2209a4: 0xc084996  jal         func_212658
label_2209a8:
    if (ctx->pc == 0x2209A8u) {
        ctx->pc = 0x2209A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209A4u;
        // 0x2209a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2209ACu;
        goto label_2209ac;
    }
    ctx->pc = 0x2209A4u;
    SET_GPR_U32(ctx, 31, 0x2209ACu);
    ctx->pc = 0x2209A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2209A4u;
    // 0x2209a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x2209A4u, 0x2209ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2209ACu;
label_2209ac:
    // 0x2209ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2209acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2209b0:
    // 0x2209b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2209b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2209b4:
    // 0x2209b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2209b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2209b8:
    // 0x2209b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2209b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2209bc:
    // 0x2209bc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2209bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2209c0:
    // 0x2209c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2209c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2209c4:
    // 0x2209c4: 0x3e00008  jr          $ra
label_2209c8:
    if (ctx->pc == 0x2209C8u) {
        ctx->pc = 0x2209C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209C4u;
        // 0x2209c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2209CCu;
        goto label_fallthrough_0x2209c4;
    }
    ctx->pc = 0x2209C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2209C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209C4u;
        // 0x2209c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2209C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2209c4:
    ctx->pc = 0x2209CCu;
}
