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

// Function: sub_00289FB0
// Address: 0x289fb0 - 0x28a1c4
void sub_00289FB0_0x289fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289FB0_0x289fb0");
#endif

    switch (ctx->pc) {
        case 0x28a028u: goto label_28a028;
        case 0x28a030u: goto label_28a030;
        case 0x28a040u: goto label_28a040;
        case 0x28a094u: goto label_28a094;
        case 0x28a0b8u: goto label_28a0b8;
        case 0x28a114u: goto label_28a114;
        case 0x28a168u: goto label_28a168;
        default: break;
    }

    ctx->pc = 0x289fb0u;

    // 0x289fb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x289fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x289fb4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x289fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x289fb8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x289fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x289fbc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x289fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x289fc0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x289fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x289fc4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x289fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x289fc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x289fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x289fcc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x289fccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289fd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x289fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x289fd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x289fd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x289fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x289fdc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x289fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fe0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x289fe0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x289fe4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x289fe4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x289fe8: 0x78850020  lq          $a1, 0x20($a0)
    ctx->pc = 0x289fe8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x289fec: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x289fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x289ff0: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x289ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x289ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289ff8: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x289ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x289ffc: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x289ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x28a000: 0x848200c2  lh          $v0, 0xC2($a0)
    ctx->pc = 0x28a000u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x28a004: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28a004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28a008: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x28a008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28a00c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x28a00cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28a010: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28a010u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x28a014: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x28a014u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x28a018: 0x0  nop
    ctx->pc = 0x28a018u;
    // NOP
    // 0x28a01c: 0x0  nop
    ctx->pc = 0x28a01cu;
    // NOP
    // 0x28a020: 0xc096784  jal         func_259E10
    ctx->pc = 0x28A020u;
    SET_GPR_U32(ctx, 31, 0x28A028u);
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x28A020u, 0x28A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A028u;
label_28a028:
    // 0x28a028: 0xc0a7330  jal         func_29CCC0
    ctx->pc = 0x28A028u;
    SET_GPR_U32(ctx, 31, 0x28A030u);
    ctx->pc = 0x28A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A028u;
    // 0x28a02c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CCC0u, 0x28A028u, 0x28A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A030u;
label_28a030:
    // 0x28a030: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28a030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a034: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x28A034u;
    {
        const bool branch_taken_0x28a034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A034u;
        // 0x28a038: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a034) {
            ctx->pc = 0x28A100u;
            goto label_28a100;
        }
    }
    ctx->pc = 0x28A03Cu;
    // 0x28a03c: 0x27b00064  addiu       $s0, $sp, 0x64
    ctx->pc = 0x28a03cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_28a040:
    // 0x28a040: 0x1233002b  beq         $s1, $s3, . + 4 + (0x2B << 2)
    ctx->pc = 0x28A040u;
    {
        const bool branch_taken_0x28a040 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x28a040) {
            ctx->pc = 0x28A0F0u;
            goto label_28a0f0;
        }
    }
    ctx->pc = 0x28A048u;
    // 0x28a048: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x28a048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x28a04c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x28a04cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x28a050: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A050u;
    {
        const bool branch_taken_0x28a050 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A050u;
        // 0x28a054: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a050) {
            ctx->pc = 0x28A060u;
            goto label_28a060;
        }
    }
    ctx->pc = 0x28A058u;
    // 0x28a058: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a05c: 0x0  nop
    ctx->pc = 0x28a05cu;
    // NOP
label_28a060:
    // 0x28a060: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x28A060u;
    {
        const bool branch_taken_0x28a060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a060) {
            ctx->pc = 0x28A0F0u;
            goto label_28a0f0;
        }
    }
    ctx->pc = 0x28A068u;
    // 0x28a068: 0x8e2306c8  lw          $v1, 0x6C8($s1)
    ctx->pc = 0x28a068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1736)));
    // 0x28a06c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x28a06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x28a070: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x28A070u;
    {
        const bool branch_taken_0x28a070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a070) {
            ctx->pc = 0x28A0F0u;
            goto label_28a0f0;
        }
    }
    ctx->pc = 0x28A078u;
    // 0x28a078: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x28a078u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x28a07c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x28a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28a080: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28a080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a084: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x28a084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28a088: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x28a088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x28a08c: 0xc09694c  jal         func_25A530
    ctx->pc = 0x28A08Cu;
    SET_GPR_U32(ctx, 31, 0x28A094u);
    ctx->pc = 0x28A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A08Cu;
    // 0x28a090: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A530u, 0x28A08Cu, 0x28A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A094u;
label_28a094:
    // 0x28a094: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28a094u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x28a098: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x28a098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x28a09c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28a09cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a0a0: 0x0  nop
    ctx->pc = 0x28a0a0u;
    // NOP
    // 0x28a0a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28a0a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a0a8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x28A0A8u;
    {
        const bool branch_taken_0x28a0a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0A8u;
        // 0x28a0ac: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a0a8) {
            ctx->pc = 0x28A0F0u;
            goto label_28a0f0;
        }
    }
    ctx->pc = 0x28A0B0u;
    // 0x28a0b0: 0xc041468  jal         func_1051A0
    ctx->pc = 0x28A0B0u;
    SET_GPR_U32(ctx, 31, 0x28A0B8u);
    ctx->pc = 0x28A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A0B0u;
    // 0x28a0b4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x28A0B0u, 0x28A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A0B8u;
label_28a0b8:
    // 0x28a0b8: 0x3c033f26  lui         $v1, 0x3F26
    ctx->pc = 0x28a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16166 << 16));
    // 0x28a0bc: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x28a0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x28a0c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28a0c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a0c4: 0x0  nop
    ctx->pc = 0x28a0c4u;
    // NOP
    // 0x28a0c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28a0c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a0cc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x28A0CCu;
    {
        const bool branch_taken_0x28a0cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28a0cc) {
            ctx->pc = 0x28A0F0u;
            goto label_28a0f0;
        }
    }
    ctx->pc = 0x28A0D4u;
    // 0x28a0d4: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x28a0d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a0d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x28A0D8u;
    {
        const bool branch_taken_0x28a0d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28a0d8) {
            ctx->pc = 0x28A0F0u;
            goto label_28a0f0;
        }
    }
    ctx->pc = 0x28A0E0u;
    // 0x28a0e0: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x28a0e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a0e4: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x28a0e4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x28a0e8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x28a0e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a0ec: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x28a0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_28a0f0:
    // 0x28a0f0: 0x8e310018  lw          $s1, 0x18($s1)
    ctx->pc = 0x28a0f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x28a0f4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x28a0f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28a0f8: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x28A0F8u;
    {
        const bool branch_taken_0x28a0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a0f8) {
            ctx->pc = 0x28A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a040;
        }
    }
    ctx->pc = 0x28A100u;
label_28a100:
    // 0x28a100: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x28A100u;
    {
        const bool branch_taken_0x28a100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a100) {
            ctx->pc = 0x28A198u;
            goto label_28a198;
        }
    }
    ctx->pc = 0x28A108u;
    // 0x28a108: 0xc7ad0098  lwc1        $f13, 0x98($sp)
    ctx->pc = 0x28a108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28a10c: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x28A10Cu;
    SET_GPR_U32(ctx, 31, 0x28A114u);
    ctx->pc = 0x28A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A10Cu;
    // 0x28a110: 0xc7ac0090  lwc1        $f12, 0x90($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x28A10Cu, 0x28A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A114u;
label_28a114:
    // 0x28a114: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x28a114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x28a118: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x28a118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x28a11c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28a11cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28a120: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x28a120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x28a124: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28a124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a128: 0x0  nop
    ctx->pc = 0x28a128u;
    // NOP
    // 0x28a12c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x28a12cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x28a130: 0x866200c2  lh          $v0, 0xC2($s3)
    ctx->pc = 0x28a130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x28a134: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x28a134u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x28a138: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28a138u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x28a13c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x28a13cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28a140: 0x0  nop
    ctx->pc = 0x28a140u;
    // NOP
    // 0x28a144: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x28a144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x28a148: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x28a148u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x28a14c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x28a14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x28a150: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x28a150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x28a154: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x28a154u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x28a158: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x28a158u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28a15c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x28a15cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28a160: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x28A160u;
    SET_GPR_U32(ctx, 31, 0x28A168u);
    ctx->pc = 0x28A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A160u;
    // 0x28a164: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x28A160u, 0x28A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A168u;
label_28a168:
    // 0x28a168: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x28a168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x28a16c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x28a16cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x28a170: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A170u;
    {
        const bool branch_taken_0x28a170 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x28A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A170u;
        // 0x28a174: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a170) {
            ctx->pc = 0x28A180u;
            goto label_28a180;
        }
    }
    ctx->pc = 0x28A178u;
    // 0x28a178: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x28a178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x28a17c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x28a17cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_28a180:
    // 0x28a180: 0xa6630920  sh          $v1, 0x920($s3)
    ctx->pc = 0x28a180u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2336), (uint16_t)GPR_U32(ctx, 3));
    // 0x28a184: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28a184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28a188: 0xa2630922  sb          $v1, 0x922($s3)
    ctx->pc = 0x28a188u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2338), (uint8_t)GPR_U32(ctx, 3));
    // 0x28a18c: 0x9263065c  lbu         $v1, 0x65C($s3)
    ctx->pc = 0x28a18cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1628)));
    // 0x28a190: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28A190u;
    {
        const bool branch_taken_0x28a190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A190u;
        // 0x28a194: 0xa2630923  sb          $v1, 0x923($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2339), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a190) {
            ctx->pc = 0x28A1A0u;
            goto label_28a1a0;
        }
    }
    ctx->pc = 0x28A198u;
label_28a198:
    // 0x28a198: 0xa2600922  sb          $zero, 0x922($s3)
    ctx->pc = 0x28a198u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2338), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a19c: 0x0  nop
    ctx->pc = 0x28a19cu;
    // NOP
label_28a1a0:
    // 0x28a1a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28a1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a1a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28a1a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a1a8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x28a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28a1ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28a1acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a1b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28a1b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28a1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a1b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28a1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x28A1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1BCu;
        // 0x28a1c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A1C4u;
}
