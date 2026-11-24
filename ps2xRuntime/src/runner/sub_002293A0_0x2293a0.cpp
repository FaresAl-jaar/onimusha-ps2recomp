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

// Function: sub_002293A0
// Address: 0x2293a0 - 0x2294cc
void sub_002293A0_0x2293a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002293A0_0x2293a0");
#endif

    switch (ctx->pc) {
        case 0x2293e0u: goto label_2293e0;
        case 0x229418u: goto label_229418;
        case 0x229440u: goto label_229440;
        case 0x2294a8u: goto label_2294a8;
        default: break;
    }

    ctx->pc = 0x2293a0u;

    // 0x2293a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2293a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2293a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2293a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2293a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2293a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2293acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2293b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2293b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2293b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2293b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2293b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2293bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2293c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2293c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2293c4: 0x3c14004c  lui         $s4, 0x4C
    ctx->pc = 0x2293c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)76 << 16));
    // 0x2293c8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2293c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2293cc: 0x2683adc0  addiu       $v1, $s4, -0x5240
    ctx->pc = 0x2293ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946240));
    // 0x2293d0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2293d0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4BADC0u));
    // 0x2293d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2293D4u;
    {
        const bool branch_taken_0x2293d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293D4u;
        // 0x2293d8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293d4) {
            ctx->pc = 0x229404u;
            goto label_229404;
        }
    }
    ctx->pc = 0x2293DCu;
    // 0x2293dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2293dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2293e0:
    // 0x2293e0: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x2293e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2293e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2293E4u;
    {
        const bool branch_taken_0x2293e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293E4u;
        // 0x2293e8: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293e4) {
            ctx->pc = 0x229404u;
            goto label_229404;
        }
    }
    ctx->pc = 0x2293ECu;
    // 0x2293ec: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2293ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2293f0: 0x0  nop
    ctx->pc = 0x2293f0u;
    // NOP
    // 0x2293f4: 0x0  nop
    ctx->pc = 0x2293f4u;
    // NOP
    // 0x2293f8: 0x0  nop
    ctx->pc = 0x2293f8u;
    // NOP
    // 0x2293fc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2293FCu;
    {
        const bool branch_taken_0x2293fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2293fc) {
            ctx->pc = 0x229400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2293FCu;
            // 0x229400: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2293E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2293e0;
        }
    }
    ctx->pc = 0x229404u;
label_229404:
    // 0x229404: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x229404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x229408: 0x12030028  beq         $s0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x229408u;
    {
        const bool branch_taken_0x229408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x22940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229408u;
        // 0x22940c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229408) {
            ctx->pc = 0x2294ACu;
            goto label_2294ac;
        }
    }
    ctx->pc = 0x229410u;
    // 0x229410: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x229410u;
    SET_GPR_U32(ctx, 31, 0x229418u);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x229410u, 0x229418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229418u;
label_229418:
    // 0x229418: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x229418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x22941c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22941cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x229420: 0x2683adc0  addiu       $v1, $s4, -0x5240
    ctx->pc = 0x229420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294946240));
    // 0x229424: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x229424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x229428: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x229428u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22942c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x22942cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229430: 0x1a200010  blez        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x229430u;
    {
        const bool branch_taken_0x229430 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x229434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229430u;
        // 0x229434: 0xa2110002  sb          $s1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229430) {
            ctx->pc = 0x229474u;
            goto label_229474;
        }
    }
    ctx->pc = 0x229438u;
    // 0x229438: 0x2609000c  addiu       $t1, $s0, 0xC
    ctx->pc = 0x229438u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x22943c: 0x26070004  addiu       $a3, $s0, 0x4
    ctx->pc = 0x22943cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_229440:
    // 0x229440: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x229440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x229444: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x229444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x229448: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x229448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x22944c: 0x723021  addu        $a2, $v1, $s2
    ctx->pc = 0x22944cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x229450: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x229450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229454: 0x111282a  slt         $a1, $t0, $s1
    ctx->pc = 0x229454u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x229458: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x229458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x22945c: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x22945cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x229460: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x229460u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x229464: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x229464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x229468: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x229468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22946c: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x22946Cu;
    {
        const bool branch_taken_0x22946c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x229470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22946Cu;
        // 0x229470: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22946c) {
            ctx->pc = 0x229440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229440;
        }
    }
    ctx->pc = 0x229474u;
label_229474:
    // 0x229474: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x229474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x229478: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x229478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x22947c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22947cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229480: 0x3402ac44  ori         $v0, $zero, 0xAC44
    ctx->pc = 0x229480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44100);
    // 0x229484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x229484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229488: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x229488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x22948c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x22948cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x229490: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x229490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x229494: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x229494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x229498: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x229498u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x22949c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x22949cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2294a0: 0xc08b52e  jal         func_22D4B8
    ctx->pc = 0x2294A0u;
    SET_GPR_U32(ctx, 31, 0x2294A8u);
    ctx->pc = 0x2294A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2294A0u;
    // 0x2294a4: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x2294A0u, 0x2294A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2294A8u;
label_2294a8:
    // 0x2294a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2294a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2294ac:
    // 0x2294ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2294acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2294b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2294b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2294b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2294b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2294b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2294b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2294bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2294bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2294c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2294c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2294c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2294C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2294C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294C4u;
        // 0x2294c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2294C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2294CCu;
}
