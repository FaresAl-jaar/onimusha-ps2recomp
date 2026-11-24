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

// Function: sub_002F40B0
// Address: 0x2f40b0 - 0x2f4190
void sub_002F40B0_0x2f40b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F40B0_0x2f40b0");
#endif

    switch (ctx->pc) {
        case 0x2f40e4u: goto label_2f40e4;
        case 0x2f40f8u: goto label_2f40f8;
        case 0x2f4104u: goto label_2f4104;
        default: break;
    }

    ctx->pc = 0x2f40b0u;

    // 0x2f40b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f40b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f40b4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2f40b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f40b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f40b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f40bc: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x2f40bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2f40c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f40c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f40c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f40c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f40c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f40c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f40cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f40ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f40d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f40d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f40d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f40d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f40d8: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x2f40d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2f40dc: 0xc0bcd80  jal         func_2F3600
    ctx->pc = 0x2F40DCu;
    SET_GPR_U32(ctx, 31, 0x2F40E4u);
    ctx->pc = 0x2F40E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F40DCu;
    // 0x2f40e0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3600u, 0x2F40DCu, 0x2F40E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F40E4u;
label_2f40e4:
    // 0x2f40e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f40e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f40e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f40e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f40ec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F40ECu;
    {
        const bool branch_taken_0x2f40ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40ECu;
        // 0x2f40f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f40ec) {
            ctx->pc = 0x2F4170u;
            goto label_2f4170;
        }
    }
    ctx->pc = 0x2F40F4u;
    // 0x2f40f4: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x2f40f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_2f40f8:
    // 0x2f40f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f40f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f40fc: 0xc0bcd78  jal         func_2F35E0
    ctx->pc = 0x2F40FCu;
    SET_GPR_U32(ctx, 31, 0x2F4104u);
    ctx->pc = 0x2F4100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F40FCu;
    // 0x2f4100: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F35E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F35E0u, 0x2F40FCu, 0x2F4104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4104u;
label_2f4104:
    // 0x2f4104: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F4104u;
    {
        const bool branch_taken_0x2f4104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4104) {
            ctx->pc = 0x2F4158u;
            goto label_2f4158;
        }
    }
    ctx->pc = 0x2F410Cu;
    // 0x2f410c: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x2f410cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f4110: 0x14500011  bne         $v0, $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F4110u;
    {
        const bool branch_taken_0x2f4110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f4110) {
            ctx->pc = 0x2F4158u;
            goto label_2f4158;
        }
    }
    ctx->pc = 0x2F4118u;
    // 0x2f4118: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2f4118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f411c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2f411cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f4120: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F4120u;
    {
        const bool branch_taken_0x2f4120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4120) {
            ctx->pc = 0x2F4158u;
            goto label_2f4158;
        }
    }
    ctx->pc = 0x2F4128u;
    // 0x2f4128: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2f4128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2f412c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2f412cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2f4130: 0x31e7e  dsrl32      $v1, $v1, 25
    ctx->pc = 0x2f4130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 25));
    // 0x2f4134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4138: 0x28410063  slti        $at, $v0, 0x63
    ctx->pc = 0x2f4138u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)99) ? 1 : 0);
    // 0x2f413c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F413Cu;
    {
        const bool branch_taken_0x2f413c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f413c) {
            ctx->pc = 0x2F414Cu;
            goto label_2f414c;
        }
    }
    ctx->pc = 0x2F4144u;
    // 0x2f4144: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4144u;
    {
        const bool branch_taken_0x2f4144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4144u;
        // 0x2f4148: 0x305100ff  andi        $s1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4144) {
            ctx->pc = 0x2F4154u;
            goto label_2f4154;
        }
    }
    ctx->pc = 0x2F414Cu;
label_2f414c:
    // 0x2f414c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2f414cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f4150: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2f4150u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f4154:
    // 0x2f4154: 0x0  nop
    ctx->pc = 0x2f4154u;
    // NOP
label_2f4158:
    // 0x2f4158: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f4158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f415c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f4160: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2f4160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2f4164: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2f4164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2f4168: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2F4168u;
    {
        const bool branch_taken_0x2f4168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4168u;
        // 0x2f416c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4168) {
            ctx->pc = 0x2F40F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f40f8;
        }
    }
    ctx->pc = 0x2F4170u;
label_2f4170:
    // 0x2f4170: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f4170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4174: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f4174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f4178: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f4178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f417c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f417cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4180: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f4180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f4188: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4188u;
        // 0x2f418c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4190u;
}
