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

// Function: sub_00221948
// Address: 0x221948 - 0x221a34
void sub_00221948_0x221948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221948_0x221948");
#endif

    ctx->pc = 0x221948u;

    // 0x221948: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x221948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22194c: 0xc4e10ac4  lwc1        $f1, 0xAC4($a3)
    ctx->pc = 0x22194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 2756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221950: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x221950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x221954: 0x46016800  add.s       $f0, $f13, $f1
    ctx->pc = 0x221954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x221958: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x221958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22195c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x22195Cu;
    {
        const bool branch_taken_0x22195c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22195Cu;
        // 0x221960: 0x24e60d30  addiu       $a2, $a3, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22195c) {
            ctx->pc = 0x221970u;
            goto label_221970;
        }
    }
    ctx->pc = 0x221964u;
    // 0x221964: 0x3e00008  jr          $ra
    ctx->pc = 0x221964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221964u;
        // 0x221968: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22196Cu;
    // 0x22196c: 0x0  nop
    ctx->pc = 0x22196cu;
    // NOP
label_221970:
    // 0x221970: 0x46016801  sub.s       $f0, $f13, $f1
    ctx->pc = 0x221970u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x221974: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x221974u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221978: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x221978u;
    {
        const bool branch_taken_0x221978 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221978u;
        // 0x22197c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221978) {
            ctx->pc = 0x2219B8u;
            goto label_2219b8;
        }
    }
    ctx->pc = 0x221980u;
    // 0x221980: 0xc4c002c8  lwc1        $f0, 0x2C8($a2)
    ctx->pc = 0x221980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221988: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x221988u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22198c: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x22198Cu;
    {
        const bool branch_taken_0x22198c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x221990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22198Cu;
        // 0x221990: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22198c) {
            ctx->pc = 0x221A2Cu;
            goto label_221a2c;
        }
    }
    ctx->pc = 0x221994u;
    // 0x221994: 0xc4c002c0  lwc1        $f0, 0x2C0($a2)
    ctx->pc = 0x221994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221998: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x221998u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22199c: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x22199Cu;
    {
        const bool branch_taken_0x22199c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22199c) {
            ctx->pc = 0x221A2Cu;
            goto label_221a2c;
        }
    }
    ctx->pc = 0x2219A4u;
    // 0x2219a4: 0x8cc202bc  lw          $v0, 0x2BC($a2)
    ctx->pc = 0x2219a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 700)));
    // 0x2219a8: 0xe4cc02c0  swc1        $f12, 0x2C0($a2)
    ctx->pc = 0x2219a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 704), bits); }
    // 0x2219ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2219acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2219b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2219B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2219B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219B0u;
        // 0x2219b4: 0xacc202bc  sw          $v0, 0x2BC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2219B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2219B8u;
label_2219b8:
    // 0x2219b8: 0x3404ea24  ori         $a0, $zero, 0xEA24
    ctx->pc = 0x2219b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
    // 0x2219bc: 0x8c43a180  lw          $v1, -0x5E80($v0)
    ctx->pc = 0x2219bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943104)));
    // 0x2219c0: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2219C0u;
    {
        const bool branch_taken_0x2219c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2219C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219C0u;
        // 0x2219c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219c0) {
            ctx->pc = 0x2219E4u;
            goto label_2219e4;
        }
    }
    ctx->pc = 0x2219C8u;
    // 0x2219c8: 0x8ce20920  lw          $v0, 0x920($a3)
    ctx->pc = 0x2219c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2336)));
    // 0x2219cc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2219ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2219d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2219D0u;
    {
        const bool branch_taken_0x2219d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2219d0) {
            ctx->pc = 0x2219D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2219D0u;
            // 0x2219d4: 0x8cc202bc  lw          $v0, 0x2BC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2219E8u;
            goto label_2219e8;
        }
    }
    ctx->pc = 0x2219D8u;
    // 0x2219d8: 0x8cc202ac  lw          $v0, 0x2AC($a2)
    ctx->pc = 0x2219d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 684)));
    // 0x2219dc: 0x384203e8  xori        $v0, $v0, 0x3E8
    ctx->pc = 0x2219dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1000);
    // 0x2219e0: 0x2c480001  sltiu       $t0, $v0, 0x1
    ctx->pc = 0x2219e0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2219e4:
    // 0x2219e4: 0x8cc202bc  lw          $v0, 0x2BC($a2)
    ctx->pc = 0x2219e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 700)));
label_2219e8:
    // 0x2219e8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2219e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2219ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2219ECu;
    {
        const bool branch_taken_0x2219ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2219ec) {
            ctx->pc = 0x221A00u;
            goto label_221a00;
        }
    }
    ctx->pc = 0x2219F4u;
    // 0x2219f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2219F4u;
    {
        const bool branch_taken_0x2219f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2219F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2219F4u;
        // 0x2219f8: 0x8cc202c4  lw          $v0, 0x2C4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2219f4) {
            ctx->pc = 0x221A18u;
            goto label_221a18;
        }
    }
    ctx->pc = 0x2219FCu;
    // 0x2219fc: 0x0  nop
    ctx->pc = 0x2219fcu;
    // NOP
label_221a00:
    // 0x221a00: 0x460c6834  c.lt.s      $f13, $f12
    ctx->pc = 0x221a00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221a04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x221A04u;
    {
        const bool branch_taken_0x221a04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x221A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A04u;
        // 0x221a08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a04) {
            ctx->pc = 0x221A18u;
            goto label_221a18;
        }
    }
    ctx->pc = 0x221A0Cu;
    // 0x221a0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x221A0Cu;
    {
        const bool branch_taken_0x221a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221A0Cu;
        // 0x221a10: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221a0c) {
            ctx->pc = 0x221A1Cu;
            goto label_221a1c;
        }
    }
    ctx->pc = 0x221A14u;
    // 0x221a14: 0x0  nop
    ctx->pc = 0x221a14u;
    // NOP
label_221a18:
    // 0x221a18: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x221a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_221a1c:
    // 0x221a1c: 0xacc002bc  sw          $zero, 0x2BC($a2)
    ctx->pc = 0x221a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 700), GPR_U32(ctx, 0));
    // 0x221a20: 0xe4cc02c8  swc1        $f12, 0x2C8($a2)
    ctx->pc = 0x221a20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 712), bits); }
    // 0x221a24: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x221a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x221a28: 0xacc202c4  sw          $v0, 0x2C4($a2)
    ctx->pc = 0x221a28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 708), GPR_U32(ctx, 2));
label_221a2c:
    // 0x221a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x221A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221A34u;
}
