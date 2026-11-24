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

// Function: sub_002EA200
// Address: 0x2ea200 - 0x2ea54c
void sub_002EA200_0x2ea200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA200_0x2ea200");
#endif

    switch (ctx->pc) {
        case 0x2ea2dcu: goto label_2ea2dc;
        case 0x2ea3d0u: goto label_2ea3d0;
        case 0x2ea3f8u: goto label_2ea3f8;
        case 0x2ea40cu: goto label_2ea40c;
        case 0x2ea438u: goto label_2ea438;
        case 0x2ea44cu: goto label_2ea44c;
        case 0x2ea468u: goto label_2ea468;
        case 0x2ea51cu: goto label_2ea51c;
        default: break;
    }

    ctx->pc = 0x2ea200u;

    // 0x2ea200: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ea200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ea204: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea208: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ea208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ea20c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ea20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ea210: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2ea210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2ea214: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2ea214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2ea218: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ea218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea21c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ea21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2ea220: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ea220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ea224: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x2ea224u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x2ea228: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EA228u;
    {
        const bool branch_taken_0x2ea228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA228u;
        // 0x2ea22c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea228) {
            ctx->pc = 0x2EA270u;
            goto label_2ea270;
        }
    }
    ctx->pc = 0x2EA230u;
    // 0x2ea230: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ea230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ea234: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2ea234u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2ea238: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2ea238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2ea23c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EA23Cu;
    {
        const bool branch_taken_0x2ea23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA23Cu;
        // 0x2ea240: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea23c) {
            ctx->pc = 0x2EA270u;
            goto label_2ea270;
        }
    }
    ctx->pc = 0x2EA244u;
    // 0x2ea244: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EA244u;
    {
        const bool branch_taken_0x2ea244 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea244) {
            ctx->pc = 0x2EA270u;
            goto label_2ea270;
        }
    }
    ctx->pc = 0x2EA24Cu;
    // 0x2ea24c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ea24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ea250: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA250u;
    {
        const bool branch_taken_0x2ea250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EA254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA250u;
        // 0x2ea254: 0x24030100  addiu       $v1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea250) {
            ctx->pc = 0x2EA270u;
            goto label_2ea270;
        }
    }
    ctx->pc = 0x2EA258u;
    // 0x2ea258: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x2ea258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x2ea25c: 0xa423cc50  sh          $v1, -0x33B0($at)
    ctx->pc = 0x2ea25cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x82CC50u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC50u, _value); } while (0);
    // 0x2ea260: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x2ea260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x2ea264: 0xa423cc90  sh          $v1, -0x3370($at)
    ctx->pc = 0x2ea264u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x82CC90u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC90u, _value); } while (0);
    // 0x2ea268: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x2ea268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x2ea26c: 0xa423cc70  sh          $v1, -0x3390($at)
    ctx->pc = 0x2ea26cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x82CC70u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x82CC70u, _value); } while (0);
label_2ea270:
    // 0x2ea270: 0x2e010007  sltiu       $at, $s0, 0x7
    ctx->pc = 0x2ea270u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ea274: 0x102000ae  beqz        $at, . + 4 + (0xAE << 2)
    ctx->pc = 0x2EA274u;
    {
        const bool branch_taken_0x2ea274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA274u;
        // 0x2ea278: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea274) {
            ctx->pc = 0x2EA530u;
            goto label_2ea530;
        }
    }
    ctx->pc = 0x2EA27Cu;
    // 0x2ea27c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ea27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ea280: 0x24847bd0  addiu       $a0, $a0, 0x7BD0
    ctx->pc = 0x2ea280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31696));
    // 0x2ea284: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ea284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ea288: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ea288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea28c: 0x600008  jr          $v1
    ctx->pc = 0x2EA28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EA298u: goto label_2ea298;
            case 0x2EA3D8u: goto label_2ea3d8;
            case 0x2EA418u: goto label_2ea418;
            case 0x2EA458u: goto label_2ea458;
            case 0x2EA530u: goto label_2ea530;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA28Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EA294u;
    // 0x2ea294: 0x0  nop
    ctx->pc = 0x2ea294u;
    // NOP
label_2ea298:
    // 0x2ea298: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2ea298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2ea29c: 0x24427bb0  addiu       $v0, $v0, 0x7BB0
    ctx->pc = 0x2ea29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31664));
    // 0x2ea2a0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2ea2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2ea2a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2ea2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2ea2a8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2ea2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2ea2ac: 0x96630236  lhu         $v1, 0x236($s3)
    ctx->pc = 0x2ea2acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 566)));
    // 0x2ea2b0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2ea2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2ea2b4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2ea2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ea2b8: 0x24060108  addiu       $a2, $zero, 0x108
    ctx->pc = 0x2ea2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x2ea2bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ea2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2c0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2ea2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ea2c4: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2ea2c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ea2c8: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2ea2c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2ea2cc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2ea2ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea2d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2ea2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ea2d4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EA2D4u;
    SET_GPR_U32(ctx, 31, 0x2EA2DCu);
    ctx->pc = 0x2EA2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA2D4u;
    // 0x2ea2d8: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EA2D4u, 0x2EA2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA2DCu;
label_2ea2dc:
    // 0x2ea2dc: 0x978488b4  lhu         $a0, -0x774C($gp)
    ctx->pc = 0x2ea2dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936756)));
    // 0x2ea2e0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA2E0u;
    {
        const bool branch_taken_0x2ea2e0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2EA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2E0u;
        // 0x2ea2e4: 0xc7838078  lwc1        $f3, -0x7F88($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea2e0) {
            ctx->pc = 0x2EA2F4u;
            goto label_2ea2f4;
        }
    }
    ctx->pc = 0x2EA2E8u;
    // 0x2ea2e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ea2e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea2ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA2ECu;
    {
        const bool branch_taken_0x2ea2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA2ECu;
        // 0x2ea2f0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea2ec) {
            ctx->pc = 0x2EA310u;
            goto label_2ea310;
        }
    }
    ctx->pc = 0x2EA2F4u;
label_2ea2f4:
    // 0x2ea2f4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2ea2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2ea2f8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2ea2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2ea2fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ea2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ea300: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea304: 0x0  nop
    ctx->pc = 0x2ea304u;
    // NOP
    // 0x2ea308: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2ea308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ea30c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2ea30cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2ea310:
    // 0x2ea310: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ea310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ea314: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea318: 0x0  nop
    ctx->pc = 0x2ea318u;
    // NOP
    // 0x2ea31c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2ea31cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2ea320: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2ea320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2ea324: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2ea324u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2ea328: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea328u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ea32c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea330: 0x0  nop
    ctx->pc = 0x2ea330u;
    // NOP
    // 0x2ea334: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2ea334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ea338: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x2ea338u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea33c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA33Cu;
    {
        const bool branch_taken_0x2ea33c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA33Cu;
        // 0x2ea340: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea33c) {
            ctx->pc = 0x2EA354u;
            goto label_2ea354;
        }
    }
    ctx->pc = 0x2EA344u;
    // 0x2ea344: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea344u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2ea348: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x2ea348u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ea34c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA34Cu;
    {
        const bool branch_taken_0x2ea34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA34Cu;
        // 0x2ea350: 0x83001b  divu        $zero, $a0, $v1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea34c) {
            ctx->pc = 0x2EA370u;
            goto label_2ea370;
        }
    }
    ctx->pc = 0x2EA354u;
label_2ea354:
    // 0x2ea354: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2ea354u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ea358: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2ea358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2ea35c: 0x460018e4  .word       0x460018E4                   # cvt.w.s     $f3, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea35cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2ea360: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x2ea360u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ea364: 0x0  nop
    ctx->pc = 0x2ea364u;
    // NOP
    // 0x2ea368: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ea368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ea36c: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2ea36cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2ea370:
    // 0x2ea370: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2ea370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2ea374: 0x24427bb8  addiu       $v0, $v0, 0x7BB8
    ctx->pc = 0x2ea374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31672));
    // 0x2ea378: 0x240c003c  addiu       $t4, $zero, 0x3C
    ctx->pc = 0x2ea378u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2ea37c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2ea37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2ea380: 0x24060154  addiu       $a2, $zero, 0x154
    ctx->pc = 0x2ea380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x2ea384: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2ea384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2ea388: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ea388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea38c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2ea38cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ea390: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x2ea390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ea394: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x2ea394u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2ea398: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2ea398u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea39c: 0x6812  mflo        $t5
    ctx->pc = 0x2ea39cu;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x2ea3a0: 0x3443003c  ori         $v1, $v0, 0x3C
    ctx->pc = 0x2ea3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60);
    // 0x2ea3a4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2ea3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x2ea3a8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2ea3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2ea3ac: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x2ea3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
    // 0x2ea3b0: 0x3442003d  ori         $v0, $v0, 0x3D
    ctx->pc = 0x2ea3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61);
    // 0x2ea3b4: 0x1ac001b  divu        $zero, $t5, $t4
    ctx->pc = 0x2ea3b4u;
    { uint32_t divisor = GPR_U32(ctx, 12); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x2ea3b8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x2ea3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x2ea3bc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2ea3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2ea3c0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2ea3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ea3c4: 0x1010  mfhi        $v0
    ctx->pc = 0x2ea3c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2ea3c8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2EA3C8u;
    SET_GPR_U32(ctx, 31, 0x2EA3D0u);
    ctx->pc = 0x2EA3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA3C8u;
    // 0x2ea3cc: 0xffa20020  sd          $v0, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2EA3C8u, 0x2EA3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA3D0u;
label_2ea3d0:
    // 0x2ea3d0: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2EA3D0u;
    {
        const bool branch_taken_0x2ea3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea3d0) {
            ctx->pc = 0x2EA530u;
            goto label_2ea530;
        }
    }
    ctx->pc = 0x2EA3D8u;
label_2ea3d8:
    // 0x2ea3d8: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x2ea3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x2ea3dc: 0x2406007e  addiu       $a2, $zero, 0x7E
    ctx->pc = 0x2ea3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x2ea3e0: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x2ea3e0u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ea3e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ea3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea3e8: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x2ea3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x2ea3ec: 0x240700e6  addiu       $a3, $zero, 0xE6
    ctx->pc = 0x2ea3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x2ea3f0: 0xc0ba954  jal         func_2EA550
    ctx->pc = 0x2EA3F0u;
    SET_GPR_U32(ctx, 31, 0x2EA3F8u);
    ctx->pc = 0x2EA3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA3F0u;
    // 0x2ea3f4: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA550u, 0x2EA3F0u, 0x2EA3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA3F8u;
label_2ea3f8:
    // 0x2ea3f8: 0x8266026c  lb          $a2, 0x26C($s3)
    ctx->pc = 0x2ea3f8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 620)));
    // 0x2ea3fc: 0x102e3c  dsll32      $a1, $s0, 24
    ctx->pc = 0x2ea3fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 24));
    // 0x2ea400: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2ea400u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2ea404: 0xc0badb0  jal         func_2EB6C0
    ctx->pc = 0x2EA404u;
    SET_GPR_U32(ctx, 31, 0x2EA40Cu);
    ctx->pc = 0x2EA408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA404u;
    // 0x2ea408: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB6C0u, 0x2EA404u, 0x2EA40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA40Cu;
label_2ea40c:
    // 0x2ea40c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2EA40Cu;
    {
        const bool branch_taken_0x2ea40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea40c) {
            ctx->pc = 0x2EA530u;
            goto label_2ea530;
        }
    }
    ctx->pc = 0x2EA414u;
    // 0x2ea414: 0x0  nop
    ctx->pc = 0x2ea414u;
    // NOP
label_2ea418:
    // 0x2ea418: 0x3a020003  xori        $v0, $s0, 0x3
    ctx->pc = 0x2ea418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)3);
    // 0x2ea41c: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x2ea41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2ea420: 0x2482b  sltu        $t1, $zero, $v0
    ctx->pc = 0x2ea420u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ea424: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ea424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea428: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x2ea428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x2ea42c: 0x240700e6  addiu       $a3, $zero, 0xE6
    ctx->pc = 0x2ea42cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x2ea430: 0xc0bab98  jal         func_2EAE60
    ctx->pc = 0x2EA430u;
    SET_GPR_U32(ctx, 31, 0x2EA438u);
    ctx->pc = 0x2EA434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA430u;
    // 0x2ea434: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAE60u, 0x2EA430u, 0x2EA438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA438u;
label_2ea438:
    // 0x2ea438: 0x8266026c  lb          $a2, 0x26C($s3)
    ctx->pc = 0x2ea438u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 620)));
    // 0x2ea43c: 0x102e3c  dsll32      $a1, $s0, 24
    ctx->pc = 0x2ea43cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 24));
    // 0x2ea440: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x2ea440u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x2ea444: 0xc0badb0  jal         func_2EB6C0
    ctx->pc = 0x2EA444u;
    SET_GPR_U32(ctx, 31, 0x2EA44Cu);
    ctx->pc = 0x2EA448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA444u;
    // 0x2ea448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB6C0u, 0x2EA444u, 0x2EA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA44Cu;
label_2ea44c:
    // 0x2ea44c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2EA44Cu;
    {
        const bool branch_taken_0x2ea44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea44c) {
            ctx->pc = 0x2EA530u;
            goto label_2ea530;
        }
    }
    ctx->pc = 0x2EA454u;
    // 0x2ea454: 0x0  nop
    ctx->pc = 0x2ea454u;
    // NOP
label_2ea458:
    // 0x2ea458: 0x2672027c  addiu       $s2, $s3, 0x27C
    ctx->pc = 0x2ea458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 636));
    // 0x2ea45c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ea45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea460: 0x24100031  addiu       $s0, $zero, 0x31
    ctx->pc = 0x2ea460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2ea464: 0x0  nop
    ctx->pc = 0x2ea464u;
    // NOP
label_2ea468:
    // 0x2ea468: 0x82440000  lb          $a0, 0x0($s2)
    ctx->pc = 0x2ea468u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ea46c: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x2ea46cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2ea470: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA470u;
    {
        const bool branch_taken_0x2ea470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA470u;
        // 0x2ea474: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea470) {
            ctx->pc = 0x2EA490u;
            goto label_2ea490;
        }
    }
    ctx->pc = 0x2EA478u;
    // 0x2ea478: 0x2881003a  slti        $at, $a0, 0x3A
    ctx->pc = 0x2ea478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2ea47c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA47Cu;
    {
        const bool branch_taken_0x2ea47c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA47Cu;
        // 0x2ea480: 0x2483ffd0  addiu       $v1, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea47c) {
            ctx->pc = 0x2EA490u;
            goto label_2ea490;
        }
    }
    ctx->pc = 0x2EA484u;
    // 0x2ea484: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x2ea484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ea488: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2EA488u;
    {
        const bool branch_taken_0x2ea488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA488u;
        // 0x2ea48c: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea488) {
            ctx->pc = 0x2EA4D0u;
            goto label_2ea4d0;
        }
    }
    ctx->pc = 0x2EA490u;
label_2ea490:
    // 0x2ea490: 0x28830041  slti        $v1, $a0, 0x41
    ctx->pc = 0x2ea490u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x2ea494: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA494u;
    {
        const bool branch_taken_0x2ea494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA494u;
        // 0x2ea498: 0x2881005b  slti        $at, $a0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)91) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea494) {
            ctx->pc = 0x2EA4B0u;
            goto label_2ea4b0;
        }
    }
    ctx->pc = 0x2EA49Cu;
    // 0x2ea49c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA49Cu;
    {
        const bool branch_taken_0x2ea49c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA49Cu;
        // 0x2ea4a0: 0x2483ffc9  addiu       $v1, $a0, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea49c) {
            ctx->pc = 0x2EA4B0u;
            goto label_2ea4b0;
        }
    }
    ctx->pc = 0x2EA4A4u;
    // 0x2ea4a4: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x2ea4a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ea4a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EA4A8u;
    {
        const bool branch_taken_0x2ea4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4A8u;
        // 0x2ea4ac: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4a8) {
            ctx->pc = 0x2EA4D0u;
            goto label_2ea4d0;
        }
    }
    ctx->pc = 0x2EA4B0u;
label_2ea4b0:
    // 0x2ea4b0: 0x28830061  slti        $v1, $a0, 0x61
    ctx->pc = 0x2ea4b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x2ea4b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA4B4u;
    {
        const bool branch_taken_0x2ea4b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4B4u;
        // 0x2ea4b8: 0x2881007b  slti        $at, $a0, 0x7B (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)123) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4b4) {
            ctx->pc = 0x2EA4D0u;
            goto label_2ea4d0;
        }
    }
    ctx->pc = 0x2EA4BCu;
    // 0x2ea4bc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA4BCu;
    {
        const bool branch_taken_0x2ea4bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4BCu;
        // 0x2ea4c0: 0x2483ffa9  addiu       $v1, $a0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4bc) {
            ctx->pc = 0x2EA4D0u;
            goto label_2ea4d0;
        }
    }
    ctx->pc = 0x2EA4C4u;
    // 0x2ea4c4: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x2ea4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ea4c8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2ea4c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2ea4cc: 0x0  nop
    ctx->pc = 0x2ea4ccu;
    // NOP
label_2ea4d0:
    // 0x2ea4d0: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x2ea4d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2ea4d4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2ea4d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2ea4d8: 0x4800011  bltz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EA4D8u;
    {
        const bool branch_taken_0x2ea4d8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2EA4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4D8u;
        // 0x2ea4dc: 0x28810024  slti        $at, $a0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)36) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4d8) {
            ctx->pc = 0x2EA520u;
            goto label_2ea520;
        }
    }
    ctx->pc = 0x2EA4E0u;
    // 0x2ea4e0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2EA4E0u;
    {
        const bool branch_taken_0x2ea4e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea4e0) {
            ctx->pc = 0x2EA520u;
            goto label_2ea520;
        }
    }
    ctx->pc = 0x2EA4E8u;
    // 0x2ea4e8: 0x8e680294  lw          $t0, 0x294($s3)
    ctx->pc = 0x2ea4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 660)));
    // 0x2ea4ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ea4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ea4f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ea4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ea4f4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ea4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ea4f8: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x2ea4f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2ea4fc: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x2ea4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
    // 0x2ea500: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ea500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ea504: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2ea504u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2ea508: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ea508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea50c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2ea50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea510: 0x240700b4  addiu       $a3, $zero, 0xB4
    ctx->pc = 0x2ea510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2ea514: 0xc0ba1fc  jal         func_2E87F0
    ctx->pc = 0x2EA514u;
    SET_GPR_U32(ctx, 31, 0x2EA51Cu);
    ctx->pc = 0x2EA518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA514u;
    // 0x2ea518: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87F0u, 0x2EA514u, 0x2EA51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA51Cu;
label_2ea51c:
    // 0x2ea51c: 0x0  nop
    ctx->pc = 0x2ea51cu;
    // NOP
label_2ea520:
    // 0x2ea520: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ea520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ea524: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x2ea524u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2ea528: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2EA528u;
    {
        const bool branch_taken_0x2ea528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA528u;
        // 0x2ea52c: 0x2610001a  addiu       $s0, $s0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea528) {
            ctx->pc = 0x2EA468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea468;
        }
    }
    ctx->pc = 0x2EA530u;
label_2ea530:
    // 0x2ea530: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ea530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ea534: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2ea534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ea538: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2ea538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ea53c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ea53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ea540: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ea540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea544: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA544u;
        // 0x2ea548: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA54Cu;
}
