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

// Function: sub_0039BCE0
// Address: 0x39bce0 - 0x39bd78
void sub_0039BCE0_0x39bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BCE0_0x39bce0");
#endif

    ctx->pc = 0x39bce0u;

    // 0x39bce0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x39bce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x39bce4: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x39bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x39bce8: 0x90226c1c  lbu         $v0, 0x6C1C($at)
    ctx->pc = 0x39bce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x39bcec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x39bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39bcf0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x39bcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x39bcf4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x39bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x39bcf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39bcfc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x39bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x39bd00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39bd04: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x39BD04u;
    {
        const bool branch_taken_0x39bd04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BD04u;
        // 0x39bd08: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bd04) {
            ctx->pc = 0x39BD38u;
            goto label_39bd38;
        }
    }
    ctx->pc = 0x39BD0Cu;
    // 0x39bd0c: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x39bd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39bd10: 0x3c024431  lui         $v0, 0x4431
    ctx->pc = 0x39bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17457 << 16));
    // 0x39bd14: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x39bd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x39bd18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39bd18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bd1c: 0x0  nop
    ctx->pc = 0x39bd1cu;
    // NOP
    // 0x39bd20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39bd20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39bd24: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x39BD24u;
    {
        const bool branch_taken_0x39bd24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39bd24) {
            ctx->pc = 0x39BD38u;
            goto label_39bd38;
        }
    }
    ctx->pc = 0x39BD2Cu;
    // 0x39bd2c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x39BD2Cu;
    {
        const bool branch_taken_0x39bd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BD2Cu;
        // 0x39bd30: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bd2c) {
            ctx->pc = 0x39BD70u;
            goto label_39bd70;
        }
    }
    ctx->pc = 0x39BD34u;
    // 0x39bd34: 0x0  nop
    ctx->pc = 0x39bd34u;
    // NOP
label_39bd38:
    // 0x39bd38: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x39BD38u;
    {
        const bool branch_taken_0x39bd38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bd38) {
            ctx->pc = 0x39BD68u;
            goto label_39bd68;
        }
    }
    ctx->pc = 0x39BD40u;
    // 0x39bd40: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x39bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39bd44: 0x3c024431  lui         $v0, 0x4431
    ctx->pc = 0x39bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17457 << 16));
    // 0x39bd48: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x39bd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x39bd4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39bd4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bd50: 0x0  nop
    ctx->pc = 0x39bd50u;
    // NOP
    // 0x39bd54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x39bd54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39bd58: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x39BD58u;
    {
        const bool branch_taken_0x39bd58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39bd58) {
            ctx->pc = 0x39BD68u;
            goto label_39bd68;
        }
    }
    ctx->pc = 0x39BD60u;
    // 0x39bd60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39BD60u;
    {
        const bool branch_taken_0x39bd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BD60u;
        // 0x39bd64: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bd60) {
            ctx->pc = 0x39BD70u;
            goto label_39bd70;
        }
    }
    ctx->pc = 0x39BD68u;
label_39bd68:
    // 0x39bd68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x39bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39bd6c: 0x0  nop
    ctx->pc = 0x39bd6cu;
    // NOP
label_39bd70:
    // 0x39bd70: 0x3e00008  jr          $ra
    ctx->pc = 0x39BD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BD78u;
}
