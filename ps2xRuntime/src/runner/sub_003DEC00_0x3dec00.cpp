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

// Function: sub_003DEC00
// Address: 0x3dec00 - 0x3ded98
void sub_003DEC00_0x3dec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEC00_0x3dec00");
#endif

    switch (ctx->pc) {
        case 0x3dec58u: goto label_3dec58;
        case 0x3dec80u: goto label_3dec80;
        case 0x3deca8u: goto label_3deca8;
        case 0x3decf0u: goto label_3decf0;
        case 0x3decf8u: goto label_3decf8;
        default: break;
    }

    ctx->pc = 0x3dec00u;

    // 0x3dec00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3dec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3dec04: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3dec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3dec08: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3dec08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3dec0c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3dec0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3dec10: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3dec10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec14: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3dec14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3dec18: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3dec18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3dec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3dec20: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3dec20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3dec24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3dec28: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3dec28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec2c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3dec2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dec30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dec34: 0x3c08003e  lui         $t0, 0x3E
    ctx->pc = 0x3dec34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62 << 16));
    // 0x3dec38: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3dec38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3dec3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3dec40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3dec44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec48: 0x24070580  addiu       $a3, $zero, 0x580
    ctx->pc = 0x3dec48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1408));
    // 0x3dec4c: 0x2508eb90  addiu       $t0, $t0, -0x1470
    ctx->pc = 0x3dec4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962064));
    // 0x3dec50: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3DEC50u;
    SET_GPR_U32(ctx, 31, 0x3DEC58u);
    ctx->pc = 0x3DEC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEC50u;
    // 0x3dec54: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3DEC50u, 0x3DEC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEC58u;
label_3dec58:
    // 0x3dec58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3dec58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec5c: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3DEC5Cu;
    {
        const bool branch_taken_0x3dec5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEC5Cu;
        // 0x3dec60: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dec5c) {
            ctx->pc = 0x3DED68u;
            goto label_3ded68;
        }
    }
    ctx->pc = 0x3DEC64u;
    // 0x3dec64: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3dec64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec68: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3dec68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec6c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x3dec6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dec70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec74: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3dec74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3dec78: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3DEC78u;
    SET_GPR_U32(ctx, 31, 0x3DEC80u);
    ctx->pc = 0x3DEC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEC78u;
    // 0x3dec7c: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3DEC78u, 0x3DEC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEC80u;
label_3dec80:
    // 0x3dec80: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x3dec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3dec84: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3dec84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3dec88: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3dec88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dec8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dec8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dec90: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3dec90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3dec94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dec94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dec98: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3dec98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3dec9c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3dec9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3deca0: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3DECA0u;
    SET_GPR_U32(ctx, 31, 0x3DECA8u);
    ctx->pc = 0x3DECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DECA0u;
    // 0x3deca4: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3DECA0u, 0x3DECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DECA8u;
label_3deca8:
    // 0x3deca8: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x3deca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x3decac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3decacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3decb0: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x3decb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
    // 0x3decb4: 0x26040550  addiu       $a0, $s0, 0x550
    ctx->pc = 0x3decb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x3decb8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3decb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3decbc: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3decbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3decc0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3decc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3decc4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3decc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3decc8: 0x24424828  addiu       $v0, $v0, 0x4828
    ctx->pc = 0x3decc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18472));
    // 0x3deccc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3decccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3decd0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3decd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3decd4: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x3decd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x3decd8: 0xa2030568  sb          $v1, 0x568($s0)
    ctx->pc = 0x3decd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1384), (uint8_t)GPR_U32(ctx, 3));
    // 0x3decdc: 0xa2110569  sb          $s1, 0x569($s0)
    ctx->pc = 0x3decdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1385), (uint8_t)GPR_U32(ctx, 17));
    // 0x3dece0: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x3dece0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3dece4: 0x7e030550  sq          $v1, 0x550($s0)
    ctx->pc = 0x3dece4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 3));
    // 0x3dece8: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x3DECE8u;
    SET_GPR_U32(ctx, 31, 0x3DECF0u);
    ctx->pc = 0x3DECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DECE8u;
    // 0x3decec: 0xae02056c  sw          $v0, 0x56C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x3DECE8u, 0x3DECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DECF0u;
label_3decf0:
    // 0x3decf0: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x3DECF0u;
    SET_GPR_U32(ctx, 31, 0x3DECF8u);
    ctx->pc = 0x3DECF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DECF0u;
    // 0x3decf4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x3DECF0u, 0x3DECF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DECF8u;
label_3decf8:
    // 0x3decf8: 0xc604056c  lwc1        $f4, 0x56C($s0)
    ctx->pc = 0x3decf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3decfc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3decfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ded00: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3ded00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3ded04: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x3ded04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3ded08: 0xc6030554  lwc1        $f3, 0x554($s0)
    ctx->pc = 0x3ded08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ded0c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x3ded0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ded10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3ded10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ded14: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x3ded14u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x3ded18: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x3ded18u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x3ded1c: 0x0  nop
    ctx->pc = 0x3ded1cu;
    // NOP
    // 0x3ded20: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x3ded20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x3ded24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3ded24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ded28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3DED28u;
    {
        const bool branch_taken_0x3ded28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ded28) {
            ctx->pc = 0x3DED34u;
            goto label_3ded34;
        }
    }
    ctx->pc = 0x3DED30u;
    // 0x3ded30: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3ded30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3ded34:
    // 0x3ded34: 0x0  nop
    ctx->pc = 0x3ded34u;
    // NOP
    // 0x3ded38: 0x0  nop
    ctx->pc = 0x3ded38u;
    // NOP
    // 0x3ded3c: 0x46040043  div.s       $f1, $f0, $f4
    ctx->pc = 0x3ded3cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x3ded40: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ded40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ded44: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3ded44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3ded48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ded48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ded4c: 0x0  nop
    ctx->pc = 0x3ded4cu;
    // NOP
    // 0x3ded50: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3ded50u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3ded54: 0x0  nop
    ctx->pc = 0x3ded54u;
    // NOP
    // 0x3ded58: 0xe6000570  swc1        $f0, 0x570($s0)
    ctx->pc = 0x3ded58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
    // 0x3ded5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DED5Cu;
    {
        const bool branch_taken_0x3ded5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED5Cu;
        // 0x3ded60: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ded5c) {
            ctx->pc = 0x3DED70u;
            goto label_3ded70;
        }
    }
    ctx->pc = 0x3DED64u;
    // 0x3ded64: 0x0  nop
    ctx->pc = 0x3ded64u;
    // NOP
label_3ded68:
    // 0x3ded68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ded68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ded6c: 0x0  nop
    ctx->pc = 0x3ded6cu;
    // NOP
label_3ded70:
    // 0x3ded70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3ded70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ded74: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ded74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ded78: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ded78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ded7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ded7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ded80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ded80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ded84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ded84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ded88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ded88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ded8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ded8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ded90: 0x3e00008  jr          $ra
    ctx->pc = 0x3DED90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DED90u;
        // 0x3ded94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DED90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DED98u;
}
