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

// Function: sub_00379080
// Address: 0x379080 - 0x3793b0
void sub_00379080_0x379080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379080_0x379080");
#endif

    switch (ctx->pc) {
        case 0x37912cu: goto label_37912c;
        case 0x37915cu: goto label_37915c;
        case 0x379190u: goto label_379190;
        case 0x379238u: goto label_379238;
        case 0x379324u: goto label_379324;
        default: break;
    }

    ctx->pc = 0x379080u;

    // 0x379080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x379080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x379084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x379084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x379088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x379088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37908c: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x37908cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x379090: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x379090u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x379094: 0x102000c2  beqz        $at, . + 4 + (0xC2 << 2)
    ctx->pc = 0x379094u;
    {
        const bool branch_taken_0x379094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x379098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379094u;
        // 0x379098: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379094) {
            ctx->pc = 0x3793A0u;
            goto label_3793a0;
        }
    }
    ctx->pc = 0x37909Cu;
    // 0x37909c: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x37909cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3790a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3790a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3790a4: 0x24841c40  addiu       $a0, $a0, 0x1C40
    ctx->pc = 0x3790a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7232));
    // 0x3790a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3790a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3790ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3790acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3790b0: 0x600008  jr          $v1
    ctx->pc = 0x3790B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3790B8u: goto label_3790b8;
            case 0x3790E8u: goto label_3790e8;
            case 0x379120u: goto label_379120;
            case 0x3792B8u: goto label_3792b8;
            case 0x379388u: goto label_379388;
            case 0x379390u: goto label_379390;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3790B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3790B8u;
label_3790b8:
    // 0x3790b8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3790b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3790bc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3790bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3790c0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x3790c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3790c4: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3790c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3790c8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3790c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3790cc: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3790ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3790d0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3790d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3790d4: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3790d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3790d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3790d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3790dc: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3790dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3790e0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3790e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3790e4: 0x0  nop
    ctx->pc = 0x3790e4u;
    // NOP
label_3790e8:
    // 0x3790e8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3790e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3790ec: 0x106000ac  beqz        $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x3790ECu;
    {
        const bool branch_taken_0x3790ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3790ec) {
            ctx->pc = 0x3793A0u;
            goto label_3793a0;
        }
    }
    ctx->pc = 0x3790F4u;
    // 0x3790f4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3790f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3790f8: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x3790f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x3790fc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3790fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x379100: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x379100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x379104: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x379104u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x379108: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x379108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x37910c: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x37910cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x379110: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x379110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x379114: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x379114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x379118: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x379118u;
    {
        const bool branch_taken_0x379118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379118u;
        // 0x37911c: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379118) {
            ctx->pc = 0x3793A0u;
            goto label_3793a0;
        }
    }
    ctx->pc = 0x379120u;
label_379120:
    // 0x379120: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x379120u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x379124: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x379124u;
    SET_GPR_U32(ctx, 31, 0x37912Cu);
    ctx->pc = 0x379128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379124u;
    // 0x379128: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x379124u, 0x37912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37912Cu;
label_37912c:
    // 0x37912c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x37912cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x379130: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x379130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379134: 0x0  nop
    ctx->pc = 0x379134u;
    // NOP
    // 0x379138: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x379138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37913c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x37913Cu;
    {
        const bool branch_taken_0x37913c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x379140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37913Cu;
        // 0x379140: 0x3c010068  lui         $at, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37913c) {
            ctx->pc = 0x379170u;
            goto label_379170;
        }
    }
    ctx->pc = 0x379144u;
    // 0x379144: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x379144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x379148: 0x78221c10  lq          $v0, 0x1C10($at)
    ctx->pc = 0x379148u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 7184)));
    // 0x37914c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x37914cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x379150: 0x7e022b70  sq          $v0, 0x2B70($s0)
    ctx->pc = 0x379150u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 11120), GPR_VEC(ctx, 2));
    // 0x379154: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x379154u;
    SET_GPR_U32(ctx, 31, 0x37915Cu);
    ctx->pc = 0x379158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379154u;
    // 0x379158: 0xa6002b80  sh          $zero, 0x2B80($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11136), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x379154u, 0x37915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37915Cu;
label_37915c:
    // 0x37915c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x37915cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x379160: 0x27a30024  addiu       $v1, $sp, 0x24
    ctx->pc = 0x379160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x379164: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x379164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x379168: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x379168u;
    {
        const bool branch_taken_0x379168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379168u;
        // 0x37916c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379168) {
            ctx->pc = 0x3791A0u;
            goto label_3791a0;
        }
    }
    ctx->pc = 0x379170u;
label_379170:
    // 0x379170: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x379170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x379174: 0x78231c20  lq          $v1, 0x1C20($at)
    ctx->pc = 0x379174u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x681C20u));
    // 0x379178: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x379178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x37917c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x37917cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x379180: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x379180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379184: 0x7e032b70  sq          $v1, 0x2B70($s0)
    ctx->pc = 0x379184u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 11120), GPR_VEC(ctx, 3));
    // 0x379188: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x379188u;
    SET_GPR_U32(ctx, 31, 0x379190u);
    ctx->pc = 0x37918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379188u;
    // 0x37918c: 0xa6022b80  sh          $v0, 0x2B80($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 11136), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x379188u, 0x379190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379190u;
label_379190:
    // 0x379190: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x379190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x379194: 0x27a30024  addiu       $v1, $sp, 0x24
    ctx->pc = 0x379194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x379198: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x379198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37919c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37919cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3791a0:
    // 0x3791a0: 0xc6022b78  lwc1        $f2, 0x2B78($s0)
    ctx->pc = 0x3791a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3791a4: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x3791a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3791a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3791a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3791ac: 0x0  nop
    ctx->pc = 0x3791acu;
    // NOP
    // 0x3791b0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3791b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3791b4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3791b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3791b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3791B8u;
    {
        const bool branch_taken_0x3791b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3791b8) {
            ctx->pc = 0x3791C4u;
            goto label_3791c4;
        }
    }
    ctx->pc = 0x3791C0u;
    // 0x3791c0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3791c0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_3791c4:
    // 0x3791c4: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3791c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3791c8: 0xc4211c08  lwc1        $f1, 0x1C08($at)
    ctx->pc = 0x3791c8u;
    { uint32_t bits = FAST_READ32(0x681C08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3791cc: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3791ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3791d0: 0xc4201bf8  lwc1        $f0, 0x1BF8($at)
    ctx->pc = 0x3791d0u;
    { uint32_t bits = FAST_READ32(0x681BF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3791d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3791d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3791d8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x3791d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3791dc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3791dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3791e0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x3791E0u;
    {
        const bool branch_taken_0x3791e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3791e0) {
            ctx->pc = 0x379210u;
            goto label_379210;
        }
    }
    ctx->pc = 0x3791E8u;
    // 0x3791e8: 0x0  nop
    ctx->pc = 0x3791e8u;
    // NOP
    // 0x3791ec: 0x0  nop
    ctx->pc = 0x3791ecu;
    // NOP
    // 0x3791f0: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3791f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x3791f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3791f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3791f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3791f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3791fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3791fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x379200: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x379200u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x379204: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x379204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x379208: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x379208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x37920c: 0x0  nop
    ctx->pc = 0x37920cu;
    // NOP
label_379210:
    // 0x379210: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x379210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x379214: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x379214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x379218: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x379218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x37921c: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x37921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x379220: 0x26052b70  addiu       $a1, $s0, 0x2B70
    ctx->pc = 0x379220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11120));
    // 0x379224: 0x3c02c4f5  lui         $v0, 0xC4F5
    ctx->pc = 0x379224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50421 << 16));
    // 0x379228: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x379228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37922c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37922cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x379230: 0xc09754c  jal         func_25D530
    ctx->pc = 0x379230u;
    SET_GPR_U32(ctx, 31, 0x379238u);
    ctx->pc = 0x379234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379230u;
    // 0x379234: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D530u, 0x379230u, 0x379238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379238u;
label_379238:
    // 0x379238: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x379238u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37923c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x37923cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x379240: 0x3c02c4f5  lui         $v0, 0xC4F5
    ctx->pc = 0x379240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50421 << 16));
    // 0x379244: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x379244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x379248: 0x0  nop
    ctx->pc = 0x379248u;
    // NOP
    // 0x37924c: 0xa6032b84  sh          $v1, 0x2B84($s0)
    ctx->pc = 0x37924cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11140), (uint16_t)GPR_U32(ctx, 3));
    // 0x379250: 0x78235c10  lq          $v1, 0x5C10($at)
    ctx->pc = 0x379250u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 1), 23568)));
    // 0x379254: 0x7e0300a0  sq          $v1, 0xA0($s0)
    ctx->pc = 0x379254u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 3));
    // 0x379258: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x379258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x37925c: 0x86032b80  lh          $v1, 0x2B80($s0)
    ctx->pc = 0x37925cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x379260: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x379260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x379264: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x379264u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x379268: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x379268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x37926c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x37926cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x379270: 0x28810801  slti        $at, $a0, 0x801
    ctx->pc = 0x379270u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x379274: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x379274u;
    {
        const bool branch_taken_0x379274 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x379278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379274u;
        // 0x379278: 0x2881f800  slti        $at, $a0, -0x800 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294965248) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x379274) {
            ctx->pc = 0x379284u;
            goto label_379284;
        }
    }
    ctx->pc = 0x37927Cu;
    // 0x37927c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37927Cu;
    {
        const bool branch_taken_0x37927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37927Cu;
        // 0x379280: 0x2484f000  addiu       $a0, $a0, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37927c) {
            ctx->pc = 0x379294u;
            goto label_379294;
        }
    }
    ctx->pc = 0x379284u;
label_379284:
    // 0x379284: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x379284u;
    {
        const bool branch_taken_0x379284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x379284) {
            ctx->pc = 0x379294u;
            goto label_379294;
        }
    }
    ctx->pc = 0x37928Cu;
    // 0x37928c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x37928Cu;
    {
        const bool branch_taken_0x37928c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37928Cu;
        // 0x379290: 0x24841000  addiu       $a0, $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37928c) {
            ctx->pc = 0x379294u;
            goto label_379294;
        }
    }
    ctx->pc = 0x379294u;
label_379294:
    // 0x379294: 0x86032b84  lh          $v1, 0x2B84($s0)
    ctx->pc = 0x379294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11140)));
    // 0x379298: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x379298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37929c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x37929cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3792a0: 0x0  nop
    ctx->pc = 0x3792a0u;
    // NOP
    // 0x3792a4: 0x0  nop
    ctx->pc = 0x3792a4u;
    // NOP
    // 0x3792a8: 0x1812  mflo        $v1
    ctx->pc = 0x3792a8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3792ac: 0xa6032b82  sh          $v1, 0x2B82($s0)
    ctx->pc = 0x3792acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11138), (uint16_t)GPR_U32(ctx, 3));
    // 0x3792b0: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3792b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3792b4: 0x0  nop
    ctx->pc = 0x3792b4u;
    // NOP
label_3792b8:
    // 0x3792b8: 0x8e070148  lw          $a3, 0x148($s0)
    ctx->pc = 0x3792b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3792bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3792bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3792c0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3792c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3792c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3792c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3792c8: 0x34638885  ori         $v1, $v1, 0x8885
    ctx->pc = 0x3792c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34949);
    // 0x3792cc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3792ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3792d0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3792d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3792d4: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x3792d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3792d8: 0x260600a0  addiu       $a2, $s0, 0xA0
    ctx->pc = 0x3792d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x3792dc: 0x34e20080  ori         $v0, $a3, 0x80
    ctx->pc = 0x3792dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x3792e0: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x3792e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x3792e4: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3792e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3792e8: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3792e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3792ec: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x3792ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x3792f0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3792f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3792f4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x3792f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x3792f8: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x3792f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x3792fc: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3792fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x379300: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x379300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x379304: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x379304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x379308: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x379308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x37930c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x37930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x379310: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x379310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x379314: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x379314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x379318: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x379318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37931c: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x37931Cu;
    SET_GPR_U32(ctx, 31, 0x379324u);
    ctx->pc = 0x379320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37931Cu;
    // 0x379320: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x37931Cu, 0x379324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379324u;
label_379324:
    // 0x379324: 0x860400c2  lh          $a0, 0xC2($s0)
    ctx->pc = 0x379324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x379328: 0x86032b82  lh          $v1, 0x2B82($s0)
    ctx->pc = 0x379328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11138)));
    // 0x37932c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x37932cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x379330: 0xa60300c2  sh          $v1, 0xC2($s0)
    ctx->pc = 0x379330u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x379334: 0x86032b84  lh          $v1, 0x2B84($s0)
    ctx->pc = 0x379334u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11140)));
    // 0x379338: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x379338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37933c: 0xa6032b84  sh          $v1, 0x2B84($s0)
    ctx->pc = 0x37933cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11140), (uint16_t)GPR_U32(ctx, 3));
    // 0x379340: 0x86032b84  lh          $v1, 0x2B84($s0)
    ctx->pc = 0x379340u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11140)));
    // 0x379344: 0x1c600016  bgtz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x379344u;
    {
        const bool branch_taken_0x379344 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x379344) {
            ctx->pc = 0x3793A0u;
            goto label_3793a0;
        }
    }
    ctx->pc = 0x37934Cu;
    // 0x37934c: 0x7a062b70  lq          $a2, 0x2B70($s0)
    ctx->pc = 0x37934cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 11120)));
    // 0x379350: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x379350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x379354: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x379354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x379358: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x379358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37935c: 0x7e060020  sq          $a2, 0x20($s0)
    ctx->pc = 0x37935cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 6));
    // 0x379360: 0x86062b80  lh          $a2, 0x2B80($s0)
    ctx->pc = 0x379360u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x379364: 0xa60600c2  sh          $a2, 0xC2($s0)
    ctx->pc = 0x379364u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 6));
    // 0x379368: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x379368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x37936c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x37936cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x379370: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x379370u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x379374: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x379374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x379378: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x379378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x37937c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37937Cu;
    {
        const bool branch_taken_0x37937c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37937Cu;
        // 0x379380: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37937c) {
            ctx->pc = 0x3793A0u;
            goto label_3793a0;
        }
    }
    ctx->pc = 0x379384u;
    // 0x379384: 0x0  nop
    ctx->pc = 0x379384u;
    // NOP
label_379388:
    // 0x379388: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x379388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37938c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x37938cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_379390:
    // 0x379390: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x379390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x379394: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x379394u;
    {
        const bool branch_taken_0x379394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x379398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379394u;
        // 0x379398: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379394) {
            ctx->pc = 0x3793A0u;
            goto label_3793a0;
        }
    }
    ctx->pc = 0x37939Cu;
    // 0x37939c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x37939cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3793a0:
    // 0x3793a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3793a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3793a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3793a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3793a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3793A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3793ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3793A8u;
        // 0x3793ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3793A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3793B0u;
}
