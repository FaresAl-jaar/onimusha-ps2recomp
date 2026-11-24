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

// Function: sub_002F3FD0
// Address: 0x2f3fd0 - 0x2f40a4
void sub_002F3FD0_0x2f3fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3FD0_0x2f3fd0");
#endif

    switch (ctx->pc) {
        case 0x2f3fecu: goto label_2f3fec;
        case 0x2f4030u: goto label_2f4030;
        case 0x2f4044u: goto label_2f4044;
        case 0x2f4064u: goto label_2f4064;
        default: break;
    }

    ctx->pc = 0x2f3fd0u;

    // 0x2f3fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f3fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f3fd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f3fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f3fd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f3fdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f3fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f3fe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f3fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3fe4: 0xc0bcc08  jal         func_2F3020
    ctx->pc = 0x2F3FE4u;
    SET_GPR_U32(ctx, 31, 0x2F3FECu);
    ctx->pc = 0x2F3FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3FE4u;
    // 0x2f3fe8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3020u, 0x2F3FE4u, 0x2F3FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3FECu;
label_2f3fec:
    // 0x2f3fec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f3fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f3ff0: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F3FF0u;
    {
        const bool branch_taken_0x2f3ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FF0u;
        // 0x2f3ff4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ff0) {
            ctx->pc = 0x2F4038u;
            goto label_2f4038;
        }
    }
    ctx->pc = 0x2F3FF8u;
    // 0x2f3ff8: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2F3FF8u;
    {
        const bool branch_taken_0x2f3ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f3ff8) {
            ctx->pc = 0x2F4038u;
            goto label_2f4038;
        }
    }
    ctx->pc = 0x2F4000u;
    // 0x2f4000: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f4000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4004: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4004u;
    {
        const bool branch_taken_0x2f4004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f4004) {
            ctx->pc = 0x2F4020u;
            goto label_2f4020;
        }
    }
    ctx->pc = 0x2F400Cu;
    // 0x2f400c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F400Cu;
    {
        const bool branch_taken_0x2f400c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f400c) {
            ctx->pc = 0x2F4020u;
            goto label_2f4020;
        }
    }
    ctx->pc = 0x2F4014u;
    // 0x2f4014: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F4014u;
    {
        const bool branch_taken_0x2f4014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4014) {
            ctx->pc = 0x2F4088u;
            goto label_2f4088;
        }
    }
    ctx->pc = 0x2F401Cu;
    // 0x2f401c: 0x0  nop
    ctx->pc = 0x2f401cu;
    // NOP
label_2f4020:
    // 0x2f4020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4024: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f4024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4028: 0xc0bd02c  jal         func_2F40B0
    ctx->pc = 0x2F4028u;
    SET_GPR_U32(ctx, 31, 0x2F4030u);
    ctx->pc = 0x2F402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4028u;
    // 0x2f402c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F40B0u, 0x2F4028u, 0x2F4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4030u;
label_2f4030:
    // 0x2f4030: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2F4030u;
    {
        const bool branch_taken_0x2f4030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4030) {
            ctx->pc = 0x2F4090u;
            goto label_2f4090;
        }
    }
    ctx->pc = 0x2F4038u;
label_2f4038:
    // 0x2f4038: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f4038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f403c: 0xc0bce70  jal         func_2F39C0
    ctx->pc = 0x2F403Cu;
    SET_GPR_U32(ctx, 31, 0x2F4044u);
    ctx->pc = 0x2F4040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F403Cu;
    // 0x2f4040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39C0u, 0x2F403Cu, 0x2F4044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4044u;
label_2f4044:
    // 0x2f4044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4048: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4048u;
    {
        const bool branch_taken_0x2f4048 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4048) {
            ctx->pc = 0x2F4058u;
            goto label_2f4058;
        }
    }
    ctx->pc = 0x2F4050u;
    // 0x2f4050: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F4050u;
    {
        const bool branch_taken_0x2f4050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4050u;
        // 0x2f4054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4050) {
            ctx->pc = 0x2F4090u;
            goto label_2f4090;
        }
    }
    ctx->pc = 0x2F4058u;
label_2f4058:
    // 0x2f4058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f405c: 0xc0bcd78  jal         func_2F35E0
    ctx->pc = 0x2F405Cu;
    SET_GPR_U32(ctx, 31, 0x2F4064u);
    ctx->pc = 0x2F4060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F405Cu;
    // 0x2f4060: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F35E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F35E0u, 0x2F405Cu, 0x2F4064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4064u;
label_2f4064:
    // 0x2f4064: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4064u;
    {
        const bool branch_taken_0x2f4064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4064) {
            ctx->pc = 0x2F407Cu;
            goto label_2f407c;
        }
    }
    ctx->pc = 0x2F406Cu;
    // 0x2f406c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2f406cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f4070: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2f4070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2f4074: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4074u;
    {
        const bool branch_taken_0x2f4074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4074u;
        // 0x2f4078: 0x2167e  dsrl32      $v0, $v0, 25 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4074) {
            ctx->pc = 0x2F4080u;
            goto label_2f4080;
        }
    }
    ctx->pc = 0x2F407Cu;
label_2f407c:
    // 0x2f407c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f407cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4080:
    // 0x2f4080: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4080u;
    {
        const bool branch_taken_0x2f4080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4080) {
            ctx->pc = 0x2F4090u;
            goto label_2f4090;
        }
    }
    ctx->pc = 0x2F4088u;
label_2f4088:
    // 0x2f4088: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f408c: 0x0  nop
    ctx->pc = 0x2f408cu;
    // NOP
label_2f4090:
    // 0x2f4090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f4090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f4094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f4098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f409c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F409Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F409Cu;
        // 0x2f40a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F409Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F40A4u;
}
