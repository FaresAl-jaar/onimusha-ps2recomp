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

// Function: sub_00202FB0
// Address: 0x202fb0 - 0x203098
void sub_00202FB0_0x202fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202FB0_0x202fb0");
#endif

    switch (ctx->pc) {
        case 0x203048u: goto label_203048;
        default: break;
    }

    ctx->pc = 0x202fb0u;

    // 0x202fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x202fb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x202fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x202fb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x202fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202fbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x202fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x202fc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x202fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x202fc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x202fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x202fc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x202fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x202fcc: 0x8e050178  lw          $a1, 0x178($s0)
    ctx->pc = 0x202fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x202fd0: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x202FD0u;
    {
        const bool branch_taken_0x202fd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x202fd0) {
            ctx->pc = 0x202FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202FD0u;
            // 0x202fd4: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203000u;
            goto label_203000;
        }
    }
    ctx->pc = 0x202FD8u;
    // 0x202fd8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x202fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x202fdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202fe0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x202fe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x202fe4: 0x24846658  addiu       $a0, $a0, 0x6658
    ctx->pc = 0x202fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26200));
    // 0x202fe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x202fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202fec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x202fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x202ff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x202ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202ff4: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x202FF4u;
    ctx->pc = 0x202FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FF4u;
    // 0x202ff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x202FFCu;
    // 0x202ffc: 0x0  nop
    ctx->pc = 0x202ffcu;
    // NOP
label_203000:
    // 0x203000: 0x8cb30008  lw          $s3, 0x8($a1)
    ctx->pc = 0x203000u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x203004: 0x24720004  addiu       $s2, $v1, 0x4
    ctx->pc = 0x203004u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x203008: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x203008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20300c: 0x2531818  mult        $v1, $s2, $s3
    ctx->pc = 0x20300cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x203010: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x203010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x203014: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x203014u;
    {
        const bool branch_taken_0x203014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203014u;
        // 0x203018: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203014) {
            ctx->pc = 0x203040u;
            goto label_203040;
        }
    }
    ctx->pc = 0x20301Cu;
    // 0x20301c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x20301cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x203020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203024: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x203024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203028: 0x24846690  addiu       $a0, $a0, 0x6690
    ctx->pc = 0x203028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26256));
    // 0x20302c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20302cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203030: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x203030u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x203034: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203038: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x203038u;
    ctx->pc = 0x20303Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203038u;
    // 0x20303c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x203040u;
label_203040:
    // 0x203040: 0xc081608  jal         func_205820
    ctx->pc = 0x203040u;
    SET_GPR_U32(ctx, 31, 0x203048u);
    ctx->pc = 0x205820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205820u, 0x203040u, 0x203048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203048u;
label_203048:
    // 0x203048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x203048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20304c: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20304Cu;
    {
        const bool branch_taken_0x20304c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20304c) {
            ctx->pc = 0x203050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20304Cu;
            // 0x203050: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203080u;
            goto label_203080;
        }
    }
    ctx->pc = 0x203054u;
    // 0x203054: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x203054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x203058: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x203058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20305c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20305cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203060: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x203060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203064: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x203064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203068: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x203068u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20306c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20306cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203070: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x203070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203078: 0x8085382  j           func_214E08
    ctx->pc = 0x203078u;
    ctx->pc = 0x20307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203078u;
    // 0x20307c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214E08u;
    sub_00214E08_0x214e08(rdram, ctx, runtime); return;
    ctx->pc = 0x203080u;
label_203080:
    // 0x203080: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x203080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203084: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x203084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203088: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x203088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20308c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20308cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203090: 0x3e00008  jr          $ra
    ctx->pc = 0x203090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203090u;
        // 0x203094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203098u;
}
