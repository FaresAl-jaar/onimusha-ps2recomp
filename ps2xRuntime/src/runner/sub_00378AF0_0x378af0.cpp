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

// Function: sub_00378AF0
// Address: 0x378af0 - 0x378bc0
void sub_00378AF0_0x378af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378AF0_0x378af0");
#endif

    switch (ctx->pc) {
        case 0x378b0cu: goto label_378b0c;
        default: break;
    }

    ctx->pc = 0x378af0u;

    // 0x378af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x378af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x378af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x378af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x378af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x378afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x378afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378b00: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x378b00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x378b04: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x378B04u;
    SET_GPR_U32(ctx, 31, 0x378B0Cu);
    ctx->pc = 0x378B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378B04u;
    // 0x378b08: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x378B04u, 0x378B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378B0Cu;
label_378b0c:
    // 0x378b0c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x378b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x378b10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x378b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378b14: 0x0  nop
    ctx->pc = 0x378b14u;
    // NOP
    // 0x378b18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x378b18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378b1c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x378B1Cu;
    {
        const bool branch_taken_0x378b1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x378B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B1Cu;
        // 0x378b20: 0x3c010068  lui         $at, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b1c) {
            ctx->pc = 0x378B68u;
            goto label_378b68;
        }
    }
    ctx->pc = 0x378B24u;
    // 0x378b24: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x378b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x378b28: 0xc4231bf8  lwc1        $f3, 0x1BF8($at)
    ctx->pc = 0x378b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x378b2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x378b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x378b30: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x378b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378b34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x378b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378b38: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x378b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x378b3c: 0xc4221c08  lwc1        $f2, 0x1C08($at)
    ctx->pc = 0x378b3cu;
    { uint32_t bits = FAST_READ32(0x681C08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x378b40: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x378b40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x378b44: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x378b44u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x378b48: 0x0  nop
    ctx->pc = 0x378b48u;
    // NOP
    // 0x378b4c: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x378b4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x378b50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x378b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378b54: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x378B54u;
    {
        const bool branch_taken_0x378b54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x378b54) {
            ctx->pc = 0x378B60u;
            goto label_378b60;
        }
    }
    ctx->pc = 0x378B5Cu;
    // 0x378b5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378b60:
    // 0x378b60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x378B60u;
    {
        const bool branch_taken_0x378b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378B60u;
        // 0x378b64: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378b60) {
            ctx->pc = 0x378BB0u;
            goto label_378bb0;
        }
    }
    ctx->pc = 0x378B68u;
label_378b68:
    // 0x378b68: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x378b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x378b6c: 0xc4231bf8  lwc1        $f3, 0x1BF8($at)
    ctx->pc = 0x378b6cu;
    { uint32_t bits = FAST_READ32(0x681BF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x378b70: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x378b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x378b74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x378b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x378b78: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x378b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x378b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x378b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378b80: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x378b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x378b84: 0xc4221c08  lwc1        $f2, 0x1C08($at)
    ctx->pc = 0x378b84u;
    { uint32_t bits = FAST_READ32(0x681C08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x378b88: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x378b88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x378b8c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x378b8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x378b90: 0x0  nop
    ctx->pc = 0x378b90u;
    // NOP
    // 0x378b94: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x378b94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x378b98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x378b98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x378b9c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x378B9Cu;
    {
        const bool branch_taken_0x378b9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x378b9c) {
            ctx->pc = 0x378BA8u;
            goto label_378ba8;
        }
    }
    ctx->pc = 0x378BA4u;
    // 0x378ba4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378ba8:
    // 0x378ba8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x378ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x378bac: 0x0  nop
    ctx->pc = 0x378bacu;
    // NOP
label_378bb0:
    // 0x378bb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x378bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378bb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x378bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x378BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378BB8u;
        // 0x378bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378BC0u;
}
