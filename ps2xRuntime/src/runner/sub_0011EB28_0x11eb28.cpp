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

// Function: sub_0011EB28
// Address: 0x11eb28 - 0x11ebfc
void sub_0011EB28_0x11eb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EB28_0x11eb28");
#endif

    switch (ctx->pc) {
        case 0x11eb84u: goto label_11eb84;
        case 0x11eb88u: goto label_11eb88;
        default: break;
    }

    ctx->pc = 0x11eb28u;

    // 0x11eb28: 0x440f6000  mfc1        $t7, $f12
    ctx->pc = 0x11eb28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11eb2c: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11eb2cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11eb30: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11eb30u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11eb34: 0x1ee5824  and         $t3, $t7, $t6
    ctx->pc = 0x11eb34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x11eb38: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x11eb38u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb3c: 0xb7dc2  srl         $t7, $t3, 23
    ctx->pc = 0x11eb3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 11), 23));
    // 0x11eb40: 0x25edff81  addiu       $t5, $t7, -0x7F
    ctx->pc = 0x11eb40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967169));
    // 0x11eb44: 0x29ae0017  slti        $t6, $t5, 0x17
    ctx->pc = 0x11eb44u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x11eb48: 0x11c0000f  beqz        $t6, . + 4 + (0xF << 2)
    ctx->pc = 0x11EB48u;
    {
        const bool branch_taken_0x11eb48 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB48u;
        // 0x11eb4c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb48) {
            ctx->pc = 0x11EB88u;
            goto label_11eb88;
        }
    }
    ctx->pc = 0x11EB50u;
    // 0x11eb50: 0x5a10015  bgez        $t5, . + 4 + (0x15 << 2)
    ctx->pc = 0x11EB50u;
    {
        const bool branch_taken_0x11eb50 = (GPR_S64(ctx, 13) >= 0);
        ctx->pc = 0x11EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB50u;
        // 0x11eb54: 0x3c0f007f  lui         $t7, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb50) {
            ctx->pc = 0x11EBA8u;
            goto label_11eba8;
        }
    }
    ctx->pc = 0x11EB58u;
    // 0x11eb58: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11eb58u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11eb5c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11eb5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11eb60: 0x25ef36b4  addiu       $t7, $t7, 0x36B4
    ctx->pc = 0x11eb60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 14004));
    // 0x11eb64: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11eb64u;
    { uint32_t bits = FAST_READ32(0x6636B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11eb68: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11eb68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11eb6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11eb6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11eb70: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x11EB70u;
    {
        const bool branch_taken_0x11eb70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB70u;
        // 0x11eb74: 0x448c0000  mtc1        $t4, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb70) {
            ctx->pc = 0x11EB88u;
            goto label_11eb88;
        }
    }
    ctx->pc = 0x11EB78u;
    // 0x11eb78: 0x5800005  bltz        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EB78u;
    {
        const bool branch_taken_0x11eb78 = (GPR_S64(ctx, 12) < 0);
        ctx->pc = 0x11EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB78u;
        // 0x11eb7c: 0x3c0f007f  lui         $t7, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb78) {
            ctx->pc = 0x11EB90u;
            goto label_11eb90;
        }
    }
    ctx->pc = 0x11EB80u;
    // 0x11eb80: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x11eb80u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11eb84:
    // 0x11eb84: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x11eb84u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11eb88:
    // 0x11eb88: 0x3e00008  jr          $ra
    ctx->pc = 0x11EB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EB90u;
label_11eb90:
    // 0x11eb90: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11eb90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11eb94: 0x1eb782b  sltu        $t7, $t7, $t3
    ctx->pc = 0x11eb94u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x11eb98: 0x55e0fffa  bnel        $t7, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11EB98u;
    {
        const bool branch_taken_0x11eb98 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11eb98) {
            ctx->pc = 0x11EB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EB98u;
            // 0x11eb9c: 0x3c0cbf80  lui         $t4, 0xBF80 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)49024 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EB84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eb84;
        }
    }
    ctx->pc = 0x11EBA0u;
    // 0x11eba0: 0x3e00008  jr          $ra
    ctx->pc = 0x11EBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBA0u;
        // 0x11eba4: 0x448c0000  mtc1        $t4, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EBA8u;
label_11eba8:
    // 0x11eba8: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11eba8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11ebac: 0x1af5807  srav        $t3, $t7, $t5
    ctx->pc = 0x11ebacu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 13) & 0x1F));
    // 0x11ebb0: 0x18b7024  and         $t6, $t4, $t3
    ctx->pc = 0x11ebb0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & GPR_U64(ctx, 11));
    // 0x11ebb4: 0x11c0fff4  beqz        $t6, . + 4 + (-0xC << 2)
    ctx->pc = 0x11EBB4u;
    {
        const bool branch_taken_0x11ebb4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBB4u;
        // 0x11ebb8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebb4) {
            ctx->pc = 0x11EB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eb88;
        }
    }
    ctx->pc = 0x11EBBCu;
    // 0x11ebbc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ebbcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ebc0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11ebc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ebc4: 0x25ef36b4  addiu       $t7, $t7, 0x36B4
    ctx->pc = 0x11ebc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 14004));
    // 0x11ebc8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11ebc8u;
    { uint32_t bits = FAST_READ32(0x6636B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ebcc: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11ebccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11ebd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11ebd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11ebd4: 0x4500ffec  bc1f        . + 4 + (-0x14 << 2)
    ctx->pc = 0x11EBD4u;
    {
        const bool branch_taken_0x11ebd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBD4u;
        // 0x11ebd8: 0x448c0000  mtc1        $t4, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebd4) {
            ctx->pc = 0x11EB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eb88;
        }
    }
    ctx->pc = 0x11EBDCu;
    // 0x11ebdc: 0x5810005  bgez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EBDCu;
    {
        const bool branch_taken_0x11ebdc = (GPR_S64(ctx, 12) >= 0);
        ctx->pc = 0x11EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBDCu;
        // 0x11ebe0: 0xb7827  nor         $t7, $zero, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebdc) {
            ctx->pc = 0x11EBF4u;
            goto label_11ebf4;
        }
    }
    ctx->pc = 0x11EBE4u;
    // 0x11ebe4: 0x3c0f0080  lui         $t7, 0x80
    ctx->pc = 0x11ebe4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)128 << 16));
    // 0x11ebe8: 0x1af7807  srav        $t7, $t7, $t5
    ctx->pc = 0x11ebe8u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 13) & 0x1F));
    // 0x11ebec: 0x18f6021  addu        $t4, $t4, $t7
    ctx->pc = 0x11ebecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x11ebf0: 0xb7827  nor         $t7, $zero, $t3
    ctx->pc = 0x11ebf0u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 11)));
label_11ebf4:
    // 0x11ebf4: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x11EBF4u;
    {
        const bool branch_taken_0x11ebf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBF4u;
        // 0x11ebf8: 0x18f6024  and         $t4, $t4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebf4) {
            ctx->pc = 0x11EB84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eb84;
        }
    }
    ctx->pc = 0x11EBFCu;
}
