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

// Function: sub_0025BCC0
// Address: 0x25bcc0 - 0x25bda0
void sub_0025BCC0_0x25bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BCC0_0x25bcc0");
#endif

    switch (ctx->pc) {
        case 0x25bd00u: goto label_25bd00;
        case 0x25bd14u: goto label_25bd14;
        case 0x25bd24u: goto label_25bd24;
        case 0x25bd34u: goto label_25bd34;
        case 0x25bd48u: goto label_25bd48;
        case 0x25bd5cu: goto label_25bd5c;
        case 0x25bd68u: goto label_25bd68;
        case 0x25bd78u: goto label_25bd78;
        default: break;
    }

    ctx->pc = 0x25bcc0u;

    // 0x25bcc0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x25bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x25bcc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25bcc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25bcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25bccc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25bcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25bcd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25bcd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bcd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25bcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25bcd8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25bcd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bcdc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25bcdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25bce0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x25bce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bce4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25bce4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25bce8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x25bce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bcec: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x25bcecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x25bcf0: 0x27a4012c  addiu       $a0, $sp, 0x12C
    ctx->pc = 0x25bcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    // 0x25bcf4: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x25bcf4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x25bcf8: 0xc096e60  jal         func_25B980
    ctx->pc = 0x25BCF8u;
    SET_GPR_U32(ctx, 31, 0x25BD00u);
    ctx->pc = 0x25BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BCF8u;
    // 0x25bcfc: 0x27a50128  addiu       $a1, $sp, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B980u, 0x25BCF8u, 0x25BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD00u;
label_25bd00:
    // 0x25bd00: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25BD00u;
    {
        const bool branch_taken_0x25bd00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD00u;
        // 0x25bd04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bd00) {
            ctx->pc = 0x25BD50u;
            goto label_25bd50;
        }
    }
    ctx->pc = 0x25BD08u;
    // 0x25bd08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25bd08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bd0c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x25BD0Cu;
    SET_GPR_U32(ctx, 31, 0x25BD14u);
    ctx->pc = 0x25BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD0Cu;
    // 0x25bd10: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x25BD0Cu, 0x25BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD14u;
label_25bd14:
    // 0x25bd14: 0x27a40124  addiu       $a0, $sp, 0x124
    ctx->pc = 0x25bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    // 0x25bd18: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x25bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x25bd1c: 0xc096e60  jal         func_25B980
    ctx->pc = 0x25BD1Cu;
    SET_GPR_U32(ctx, 31, 0x25BD24u);
    ctx->pc = 0x25BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD1Cu;
    // 0x25bd20: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B980u, 0x25BD1Cu, 0x25BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD24u;
label_25bd24:
    // 0x25bd24: 0xc7ac012c  lwc1        $f12, 0x12C($sp)
    ctx->pc = 0x25bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25bd28: 0xc7ad0124  lwc1        $f13, 0x124($sp)
    ctx->pc = 0x25bd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25bd2c: 0xc096e84  jal         func_25BA10
    ctx->pc = 0x25BD2Cu;
    SET_GPR_U32(ctx, 31, 0x25BD34u);
    ctx->pc = 0x25BD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD2Cu;
    // 0x25bd30: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA10u, 0x25BD2Cu, 0x25BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD34u;
label_25bd34:
    // 0x25bd34: 0xc7ac0128  lwc1        $f12, 0x128($sp)
    ctx->pc = 0x25bd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25bd38: 0xc7ad0120  lwc1        $f13, 0x120($sp)
    ctx->pc = 0x25bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25bd3c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x25bd3cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x25bd40: 0xc096e84  jal         func_25BA10
    ctx->pc = 0x25BD40u;
    SET_GPR_U32(ctx, 31, 0x25BD48u);
    ctx->pc = 0x25BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD40u;
    // 0x25bd44: 0xe7a0012c  swc1        $f0, 0x12C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA10u, 0x25BD40u, 0x25BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD48u;
label_25bd48:
    // 0x25bd48: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x25bd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x25bd4c: 0x0  nop
    ctx->pc = 0x25bd4cu;
    // NOP
label_25bd50:
    // 0x25bd50: 0xc7ac012c  lwc1        $f12, 0x12C($sp)
    ctx->pc = 0x25bd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25bd54: 0xc07671c  jal         func_1D9C70
    ctx->pc = 0x25BD54u;
    SET_GPR_U32(ctx, 31, 0x25BD5Cu);
    ctx->pc = 0x25BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD54u;
    // 0x25bd58: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C70u, 0x25BD54u, 0x25BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD5Cu;
label_25bd5c:
    // 0x25bd5c: 0xc7ac0128  lwc1        $f12, 0x128($sp)
    ctx->pc = 0x25bd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25bd60: 0xc076740  jal         func_1D9D00
    ctx->pc = 0x25BD60u;
    SET_GPR_U32(ctx, 31, 0x25BD68u);
    ctx->pc = 0x25BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD60u;
    // 0x25bd64: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D00u, 0x25BD60u, 0x25BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD68u;
label_25bd68:
    // 0x25bd68: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x25bd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x25bd6c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x25bd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25bd70: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x25BD70u;
    SET_GPR_U32(ctx, 31, 0x25BD78u);
    ctx->pc = 0x25BD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BD70u;
    // 0x25bd74: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x25BD70u, 0x25BD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD78u;
label_25bd78:
    // 0x25bd78: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x25bd78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25bd7c: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x25bd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    // 0x25bd80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25bd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25bd84: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25bd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25bd88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25bd88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25bd8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25bd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25bd90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25bd90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25bd94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25bd94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bd98: 0x3e00008  jr          $ra
    ctx->pc = 0x25BD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BD98u;
        // 0x25bd9c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BDA0u;
}
