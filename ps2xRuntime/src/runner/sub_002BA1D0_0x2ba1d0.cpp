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

// Function: sub_002BA1D0
// Address: 0x2ba1d0 - 0x2ba2d8
void sub_002BA1D0_0x2ba1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA1D0_0x2ba1d0");
#endif

    switch (ctx->pc) {
        case 0x2ba21cu: goto label_2ba21c;
        case 0x2ba248u: goto label_2ba248;
        case 0x2ba258u: goto label_2ba258;
        case 0x2ba26cu: goto label_2ba26c;
        case 0x2ba294u: goto label_2ba294;
        default: break;
    }

    ctx->pc = 0x2ba1d0u;

    // 0x2ba1d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ba1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ba1d4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ba1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ba1d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ba1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ba1dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba1e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ba1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ba1e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ba1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ba1e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba1ec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ba1ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ba1f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ba1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba1f4: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2ba1f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ba1f8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2ba1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2ba1fc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2ba1fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2ba200: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x2ba200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x2ba204: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2ba204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ba208: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2ba208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x2ba20c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2ba20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba210: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ba210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ba214: 0xc04e720  jal         func_139C80
    ctx->pc = 0x2BA214u;
    SET_GPR_U32(ctx, 31, 0x2BA21Cu);
    ctx->pc = 0x2BA218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA214u;
    // 0x2ba218: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C80u, 0x2BA214u, 0x2BA21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA21Cu;
label_2ba21c:
    // 0x2ba21c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2ba21cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba220: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ba220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ba224: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2ba224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2ba228: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ba228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ba22c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ba22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ba230: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x2ba230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x2ba234: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2ba234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2ba238: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2ba238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ba23c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ba23cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ba240: 0xc04e728  jal         func_139CA0
    ctx->pc = 0x2BA240u;
    SET_GPR_U32(ctx, 31, 0x2BA248u);
    ctx->pc = 0x2BA244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA240u;
    // 0x2ba244: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x139CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139CA0u, 0x2BA240u, 0x2BA248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA248u;
label_2ba248:
    // 0x2ba248: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2ba248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2ba24c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ba24cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ba250: 0xc04e714  jal         func_139C50
    ctx->pc = 0x2BA250u;
    SET_GPR_U32(ctx, 31, 0x2BA258u);
    ctx->pc = 0x2BA254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA250u;
    // 0x2ba254: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C50u, 0x2BA250u, 0x2BA258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA258u;
label_2ba258:
    // 0x2ba258: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2ba258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2ba25c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ba25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ba260: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x2ba260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x2ba264: 0xc04e710  jal         func_139C40
    ctx->pc = 0x2BA264u;
    SET_GPR_U32(ctx, 31, 0x2BA26Cu);
    ctx->pc = 0x2BA268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA264u;
    // 0x2ba268: 0x34451100  ori         $a1, $v0, 0x1100 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C40u, 0x2BA264u, 0x2BA26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA26Cu;
label_2ba26c:
    // 0x2ba26c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ba26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ba270: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2ba270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2ba274: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x2ba274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x2ba278: 0x34421100  ori         $v0, $v0, 0x1100
    ctx->pc = 0x2ba278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    // 0x2ba27c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ba27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba280: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x2ba280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x2ba284: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2ba284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ba288: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x2ba288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ba28c: 0xc04e954  jal         func_13A550
    ctx->pc = 0x2BA28Cu;
    SET_GPR_U32(ctx, 31, 0x2BA294u);
    ctx->pc = 0x2BA290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA28Cu;
    // 0x2ba290: 0x27a8008c  addiu       $t0, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A550u, 0x2BA28Cu, 0x2BA294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA294u;
label_2ba294:
    // 0x2ba294: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA294u;
    {
        const bool branch_taken_0x2ba294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba294) {
            ctx->pc = 0x2BA2B0u;
            goto label_2ba2b0;
        }
    }
    ctx->pc = 0x2BA29Cu;
    // 0x2ba29c: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x2ba29cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ba2a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ba2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ba2a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BA2A4u;
    {
        const bool branch_taken_0x2ba2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2A4u;
        // 0x2ba2a8: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2a4) {
            ctx->pc = 0x2BA2C0u;
            goto label_2ba2c0;
        }
    }
    ctx->pc = 0x2BA2ACu;
    // 0x2ba2ac: 0x0  nop
    ctx->pc = 0x2ba2acu;
    // NOP
label_2ba2b0:
    // 0x2ba2b0: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2ba2b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ba2b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ba2b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba2b8: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x2ba2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x2ba2bc: 0x0  nop
    ctx->pc = 0x2ba2bcu;
    // NOP
label_2ba2c0:
    // 0x2ba2c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ba2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ba2c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ba2c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba2c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ba2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ba2cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ba2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2D0u;
        // 0x2ba2d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA2D8u;
}
