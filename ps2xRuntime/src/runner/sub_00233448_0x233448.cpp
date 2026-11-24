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

// Function: sub_00233448
// Address: 0x233448 - 0x23352c
void sub_00233448_0x233448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233448_0x233448");
#endif

    switch (ctx->pc) {
        case 0x2334a0u: goto label_2334a0;
        case 0x2334a8u: goto label_2334a8;
        case 0x2334b0u: goto label_2334b0;
        case 0x2334b8u: goto label_2334b8;
        case 0x2334d8u: goto label_2334d8;
        default: break;
    }

    ctx->pc = 0x233448u;

    // 0x233448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23344c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23344cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x233450: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x233450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233454: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x233454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x233458: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x233458u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23345c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23345cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233460: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x233460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x233464: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x233464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x233468: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x233468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23346c: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x23346Cu;
    {
        const bool branch_taken_0x23346c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x233470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23346Cu;
        // 0x233470: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23346c) {
            ctx->pc = 0x233508u;
            goto label_233508;
        }
    }
    ctx->pc = 0x233474u;
    // 0x233474: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x233478: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x233478u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x23347c: 0x8c45fc20  lw          $a1, -0x3E0($v0)
    ctx->pc = 0x23347cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BFC20u));
    // 0x233480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233484: 0x2610fc54  addiu       $s0, $s0, -0x3AC
    ctx->pc = 0x233484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966356));
    // 0x233488: 0x3c120beb  lui         $s2, 0xBEB
    ctx->pc = 0x233488u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3051 << 16));
    // 0x23348c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23348cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFC54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC54u, _value); } while (0);
    // 0x233490: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x233490u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233494: 0x3652c1ff  ori         $s2, $s2, 0xC1FF
    ctx->pc = 0x233494u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)49663);
    // 0x233498: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x233498u;
    SET_GPR_U32(ctx, 31, 0x2334A0u);
    ctx->pc = 0x23349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233498u;
    // 0x23349c: 0x3c140067  lui         $s4, 0x67 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x233498u, 0x2334A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2334A0u;
label_2334a0:
    // 0x2334a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2334a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334a4: 0x0  nop
    ctx->pc = 0x2334a4u;
    // NOP
label_2334a8:
    // 0x2334a8: 0xc08ceb8  jal         func_233AE0
    ctx->pc = 0x2334A8u;
    SET_GPR_U32(ctx, 31, 0x2334B0u);
    ctx->pc = 0x2334ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2334A8u;
    // 0x2334ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233AE0u, 0x2334A8u, 0x2334B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2334B0u;
label_2334b0:
    // 0x2334b0: 0xc08ced2  jal         func_233B48
    ctx->pc = 0x2334B0u;
    SET_GPR_U32(ctx, 31, 0x2334B8u);
    ctx->pc = 0x2334B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2334B0u;
    // 0x2334b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B48u, 0x2334B0u, 0x2334B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2334B8u;
label_2334b8:
    // 0x2334b8: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x2334b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2334bc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2334bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2334c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2334C0u;
    {
        const bool branch_taken_0x2334c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2334C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334C0u;
        // 0x2334c4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2334c0) {
            ctx->pc = 0x2334D8u;
            goto label_2334d8;
        }
    }
    ctx->pc = 0x2334C8u;
    // 0x2334c8: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2334C8u;
    {
        const bool branch_taken_0x2334c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2334c8) {
            ctx->pc = 0x2334A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2334a8;
        }
    }
    ctx->pc = 0x2334D0u;
    // 0x2334d0: 0xc094c1e  jal         func_253078
    ctx->pc = 0x2334D0u;
    SET_GPR_U32(ctx, 31, 0x2334D8u);
    ctx->pc = 0x2334D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2334D0u;
    // 0x2334d4: 0x2684ada8  addiu       $a0, $s4, -0x5258 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253078u, 0x2334D0u, 0x2334D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2334D8u;
label_2334d8:
    // 0x2334d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2334d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2334dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2334e0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2334e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2334e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2334e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2334e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2334e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2334ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2334ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2334f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2334f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2334f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2334f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2334f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2334f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2334fc: 0x804379c  j           func_10DE70
    ctx->pc = 0x2334FCu;
    ctx->pc = 0x233500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2334FCu;
    // 0x233500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    sub_0010DE70_0x10de70(rdram, ctx, runtime); return;
    ctx->pc = 0x233504u;
    // 0x233504: 0x0  nop
    ctx->pc = 0x233504u;
    // NOP
label_233508:
    // 0x233508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x233508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23350c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23350cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x233510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x233510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233514: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x233514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x233518: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x233518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23351c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23351cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x233520: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x233520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233524: 0x3e00008  jr          $ra
    ctx->pc = 0x233524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233524u;
        // 0x233528: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23352Cu;
}
