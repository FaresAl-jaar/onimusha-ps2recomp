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

// Function: sub_001FE900
// Address: 0x1fe900 - 0x1fe9b0
void sub_001FE900_0x1fe900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE900_0x1fe900");
#endif

    switch (ctx->pc) {
        case 0x1fe900u: goto label_1fe900;
        case 0x1fe904u: goto label_1fe904;
        case 0x1fe908u: goto label_1fe908;
        case 0x1fe90cu: goto label_1fe90c;
        case 0x1fe910u: goto label_1fe910;
        case 0x1fe914u: goto label_1fe914;
        case 0x1fe918u: goto label_1fe918;
        case 0x1fe91cu: goto label_1fe91c;
        case 0x1fe920u: goto label_1fe920;
        case 0x1fe924u: goto label_1fe924;
        case 0x1fe928u: goto label_1fe928;
        case 0x1fe92cu: goto label_1fe92c;
        case 0x1fe930u: goto label_1fe930;
        case 0x1fe934u: goto label_1fe934;
        case 0x1fe938u: goto label_1fe938;
        case 0x1fe93cu: goto label_1fe93c;
        case 0x1fe940u: goto label_1fe940;
        case 0x1fe944u: goto label_1fe944;
        case 0x1fe948u: goto label_1fe948;
        case 0x1fe94cu: goto label_1fe94c;
        case 0x1fe950u: goto label_1fe950;
        case 0x1fe954u: goto label_1fe954;
        case 0x1fe958u: goto label_1fe958;
        case 0x1fe95cu: goto label_1fe95c;
        case 0x1fe960u: goto label_1fe960;
        case 0x1fe964u: goto label_1fe964;
        case 0x1fe968u: goto label_1fe968;
        case 0x1fe96cu: goto label_1fe96c;
        case 0x1fe970u: goto label_1fe970;
        case 0x1fe974u: goto label_1fe974;
        case 0x1fe978u: goto label_1fe978;
        case 0x1fe97cu: goto label_1fe97c;
        case 0x1fe980u: goto label_1fe980;
        case 0x1fe984u: goto label_1fe984;
        case 0x1fe988u: goto label_1fe988;
        case 0x1fe98cu: goto label_1fe98c;
        case 0x1fe990u: goto label_1fe990;
        case 0x1fe994u: goto label_1fe994;
        case 0x1fe998u: goto label_1fe998;
        case 0x1fe99cu: goto label_1fe99c;
        case 0x1fe9a0u: goto label_1fe9a0;
        case 0x1fe9a4u: goto label_1fe9a4;
        case 0x1fe9a8u: goto label_1fe9a8;
        case 0x1fe9acu: goto label_1fe9ac;
        default: break;
    }

    ctx->pc = 0x1fe900u;

label_1fe900:
    // 0x1fe900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fe904:
    // 0x1fe904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fe908:
    // 0x1fe908: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1fe908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fe90c:
    // 0x1fe90c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1fe910:
    // 0x1fe910: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fe910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fe914:
    // 0x1fe914: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fe914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1fe918:
    // 0x1fe918: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fe918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1fe91c:
    // 0x1fe91c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fe91cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe920:
    // 0x1fe920: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fe920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1fe924:
    // 0x1fe924: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1fe924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fe928:
    // 0x1fe928: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fe928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1fe92c:
    // 0x1fe92c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1fe92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1fe930:
    // 0x1fe930: 0xc093fa6  jal         func_24FE98
label_1fe934:
    if (ctx->pc == 0x1FE934u) {
        ctx->pc = 0x1FE934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE930u;
        // 0x1fe934: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE938u;
        goto label_1fe938;
    }
    ctx->pc = 0x1FE930u;
    SET_GPR_U32(ctx, 31, 0x1FE938u);
    ctx->pc = 0x1FE934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE930u;
    // 0x1fe934: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE98u, 0x1FE930u, 0x1FE938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE938u;
label_1fe938:
    // 0x1fe938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe93c:
    // 0x1fe93c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fe93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe940:
    // 0x1fe940: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fe940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fe944:
    // 0x1fe944: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fe944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe948:
    // 0x1fe948: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_1fe94c:
    if (ctx->pc == 0x1FE94Cu) {
        ctx->pc = 0x1FE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE948u;
        // 0x1fe94c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE950u;
        goto label_1fe950;
    }
    ctx->pc = 0x1FE948u;
    {
        const bool branch_taken_0x1fe948 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE948u;
        // 0x1fe94c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe948) {
            ctx->pc = 0x1FE990u;
            goto label_1fe990;
        }
    }
    ctx->pc = 0x1FE950u;
label_1fe950:
    // 0x1fe950: 0xc07fa9a  jal         func_1FEA68
label_1fe954:
    if (ctx->pc == 0x1FE954u) {
        ctx->pc = 0x1FE958u;
        goto label_1fe958;
    }
    ctx->pc = 0x1FE950u;
    SET_GPR_U32(ctx, 31, 0x1FE958u);
    ctx->pc = 0x1FEA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEA68u, 0x1FE950u, 0x1FE958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE958u;
label_1fe958:
    // 0x1fe958: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1fe958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fe95c:
    // 0x1fe95c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fe95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe960:
    // 0x1fe960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fe960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fe964:
    // 0x1fe964: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1fe964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1fe968:
    // 0x1fe968: 0x40f809  jalr        $v0
label_1fe96c:
    if (ctx->pc == 0x1FE96Cu) {
        ctx->pc = 0x1FE96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE968u;
        // 0x1fe96c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE970u;
        goto label_1fe970;
    }
    ctx->pc = 0x1FE968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE970u);
        ctx->pc = 0x1FE96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE968u;
        // 0x1fe96c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE968u, 0x1FE970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE970u;
label_1fe970:
    // 0x1fe970: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1fe970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1fe974:
    // 0x1fe974: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1fe974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fe978:
    // 0x1fe978: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1fe978u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fe97c:
    // 0x1fe97c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1fe97cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1fe980:
    // 0x1fe980: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1fe980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1fe984:
    // 0x1fe984: 0x40f809  jalr        $v0
label_1fe988:
    if (ctx->pc == 0x1FE988u) {
        ctx->pc = 0x1FE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE984u;
        // 0x1fe988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE98Cu;
        goto label_1fe98c;
    }
    ctx->pc = 0x1FE984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE98Cu);
        ctx->pc = 0x1FE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE984u;
        // 0x1fe988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE984u, 0x1FE98Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE98Cu;
label_1fe98c:
    // 0x1fe98c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fe98cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe990:
    // 0x1fe990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe994:
    // 0x1fe994: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fe998:
    // 0x1fe998: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fe99c:
    // 0x1fe99c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe99cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1fe9a0:
    // 0x1fe9a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fe9a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fe9a4:
    // 0x1fe9a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fe9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1fe9a8:
    // 0x1fe9a8: 0x3e00008  jr          $ra
label_1fe9ac:
    if (ctx->pc == 0x1FE9ACu) {
        ctx->pc = 0x1FE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9A8u;
        // 0x1fe9ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9B0u;
        goto label_fallthrough_0x1fe9a8;
    }
    ctx->pc = 0x1FE9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9A8u;
        // 0x1fe9ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fe9a8:
    ctx->pc = 0x1FE9B0u;
}
