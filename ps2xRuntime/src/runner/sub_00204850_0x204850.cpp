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

// Function: sub_00204850
// Address: 0x204850 - 0x204908
void sub_00204850_0x204850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204850_0x204850");
#endif

    switch (ctx->pc) {
        case 0x2048b8u: goto label_2048b8;
        case 0x2048c0u: goto label_2048c0;
        case 0x2048dcu: goto label_2048dc;
        default: break;
    }

    ctx->pc = 0x204850u;

    // 0x204850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x204850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x204854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x204854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x204858: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x204858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20485c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20485cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x204860: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x204860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204864: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x204864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x204868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x204868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20486c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20486cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x204870: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x204870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x204874: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x204874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x204878: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x204878u;
    {
        const bool branch_taken_0x204878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204878u;
        // 0x20487c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204878) {
            ctx->pc = 0x204890u;
            goto label_204890;
        }
    }
    ctx->pc = 0x204880u;
    // 0x204880: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x204880u;
    {
        const bool branch_taken_0x204880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x204880) {
            ctx->pc = 0x204884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x204880u;
            // 0x204884: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2048B8u;
            goto label_2048b8;
        }
    }
    ctx->pc = 0x204888u;
    // 0x204888: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x204888u;
    {
        const bool branch_taken_0x204888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204888u;
        // 0x20488c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204888) {
            ctx->pc = 0x2048B0u;
            goto label_2048b0;
        }
    }
    ctx->pc = 0x204890u;
label_204890:
    // 0x204890: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x204890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204894: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204894u;
    {
        const bool branch_taken_0x204894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204894u;
        // 0x204898: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204894) {
            ctx->pc = 0x2048B0u;
            goto label_2048b0;
        }
    }
    ctx->pc = 0x20489Cu;
    // 0x20489c: 0x80a2006c  lb          $v0, 0x6C($a1)
    ctx->pc = 0x20489cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x2048a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2048A0u;
    {
        const bool branch_taken_0x2048a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2048a0) {
            ctx->pc = 0x2048B8u;
            goto label_2048b8;
        }
    }
    ctx->pc = 0x2048A8u;
    // 0x2048a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2048A8u;
    {
        const bool branch_taken_0x2048a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2048ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2048A8u;
        // 0x2048ac: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2048a8) {
            ctx->pc = 0x2048B8u;
            goto label_2048b8;
        }
    }
    ctx->pc = 0x2048B0u;
label_2048b0:
    // 0x2048b0: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x2048B0u;
    SET_GPR_U32(ctx, 31, 0x2048B8u);
    ctx->pc = 0x2048B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2048B0u;
    // 0x2048b4: 0x24846c08  addiu       $a0, $a0, 0x6C08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x2048B0u, 0x2048B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048B8u;
label_2048b8:
    // 0x2048b8: 0xc081608  jal         func_205820
    ctx->pc = 0x2048B8u;
    SET_GPR_U32(ctx, 31, 0x2048C0u);
    ctx->pc = 0x205820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205820u, 0x2048B8u, 0x2048C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048C0u;
label_2048c0:
    // 0x2048c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2048c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2048c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2048c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2048c8: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2048C8u;
    {
        const bool branch_taken_0x2048c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2048c8) {
            ctx->pc = 0x2048CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2048C8u;
            // 0x2048cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2048ECu;
            goto label_2048ec;
        }
    }
    ctx->pc = 0x2048D0u;
    // 0x2048d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2048d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2048d4: 0xc089e3e  jal         func_2278F8
    ctx->pc = 0x2048D4u;
    SET_GPR_U32(ctx, 31, 0x2048DCu);
    ctx->pc = 0x2048D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2048D4u;
    // 0x2048d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2278F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2278F8u, 0x2048D4u, 0x2048DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048DCu;
label_2048dc:
    // 0x2048dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2048dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2048e0: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x2048e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x2048e4: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2048e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x2048e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2048e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2048ec:
    // 0x2048ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2048ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2048f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2048f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2048f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2048f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2048f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2048f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2048fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2048fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204900: 0x3e00008  jr          $ra
    ctx->pc = 0x204900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204900u;
        // 0x204904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204908u;
}
