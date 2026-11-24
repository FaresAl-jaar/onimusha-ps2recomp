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

// Function: sub_003BEFC0
// Address: 0x3befc0 - 0x3bf07c
void sub_003BEFC0_0x3befc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BEFC0_0x3befc0");
#endif

    switch (ctx->pc) {
        case 0x3beff4u: goto label_3beff4;
        case 0x3bf004u: goto label_3bf004;
        case 0x3bf020u: goto label_3bf020;
        case 0x3bf030u: goto label_3bf030;
        case 0x3bf040u: goto label_3bf040;
        case 0x3bf05cu: goto label_3bf05c;
        default: break;
    }

    ctx->pc = 0x3befc0u;

    // 0x3befc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3befc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3befc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3befc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3befc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3befc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3befcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3befccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3befd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3befd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3befd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3befd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3befd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3befd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3befdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3befdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3befe0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3befe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3befe4: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BEFE4u;
    {
        const bool branch_taken_0x3befe4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEFE4u;
        // 0x3befe8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3befe4) {
            ctx->pc = 0x3BF028u;
            goto label_3bf028;
        }
    }
    ctx->pc = 0x3BEFECu;
    // 0x3befec: 0xc0ef8d0  jal         func_3BE340
    ctx->pc = 0x3BEFECu;
    SET_GPR_U32(ctx, 31, 0x3BEFF4u);
    ctx->pc = 0x3BE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE340u, 0x3BEFECu, 0x3BEFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEFF4u;
label_3beff4:
    // 0x3beff4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3beff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3beff8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3beff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3beffc: 0xc0ef9c4  jal         func_3BE710
    ctx->pc = 0x3BEFFCu;
    SET_GPR_U32(ctx, 31, 0x3BF004u);
    ctx->pc = 0x3BF000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEFFCu;
    // 0x3bf000: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE710u, 0x3BEFFCu, 0x3BF004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF004u;
label_3bf004:
    // 0x3bf004: 0x3c024596  lui         $v0, 0x4596
    ctx->pc = 0x3bf004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17814 << 16));
    // 0x3bf008: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf00c: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x3bf00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x3bf010: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf014: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bf014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf018: 0xc0efbb4  jal         func_3BEED0
    ctx->pc = 0x3BF018u;
    SET_GPR_U32(ctx, 31, 0x3BF020u);
    ctx->pc = 0x3BF01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF018u;
    // 0x3bf01c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEED0u, 0x3BF018u, 0x3BF020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF020u;
label_3bf020:
    // 0x3bf020: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3BF020u;
    {
        const bool branch_taken_0x3bf020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf020) {
            ctx->pc = 0x3BF060u;
            goto label_3bf060;
        }
    }
    ctx->pc = 0x3BF028u;
label_3bf028:
    // 0x3bf028: 0xc0ef90c  jal         func_3BE430
    ctx->pc = 0x3BF028u;
    SET_GPR_U32(ctx, 31, 0x3BF030u);
    ctx->pc = 0x3BE430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE430u, 0x3BF028u, 0x3BF030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF030u;
label_3bf030:
    // 0x3bf030: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3bf030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf034: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf038: 0xc0ef9c4  jal         func_3BE710
    ctx->pc = 0x3BF038u;
    SET_GPR_U32(ctx, 31, 0x3BF040u);
    ctx->pc = 0x3BF03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF038u;
    // 0x3bf03c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE710u, 0x3BF038u, 0x3BF040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF040u;
label_3bf040:
    // 0x3bf040: 0x3c024583  lui         $v0, 0x4583
    ctx->pc = 0x3bf040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17795 << 16));
    // 0x3bf044: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf048: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x3bf048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x3bf04c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3bf04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf050: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bf050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bf054: 0xc0efbb4  jal         func_3BEED0
    ctx->pc = 0x3BF054u;
    SET_GPR_U32(ctx, 31, 0x3BF05Cu);
    ctx->pc = 0x3BF058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF054u;
    // 0x3bf058: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEED0u, 0x3BF054u, 0x3BF05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF05Cu;
label_3bf05c:
    // 0x3bf05c: 0x0  nop
    ctx->pc = 0x3bf05cu;
    // NOP
label_3bf060:
    // 0x3bf060: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bf060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bf064: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3bf064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bf068: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3bf068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bf06c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bf06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bf070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bf070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf074: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF074u;
        // 0x3bf078: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF07Cu;
}
