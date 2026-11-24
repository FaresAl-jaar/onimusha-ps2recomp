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

// Function: sub_003CC220
// Address: 0x3cc220 - 0x3cc734
void sub_003CC220_0x3cc220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC220_0x3cc220");
#endif

    switch (ctx->pc) {
        case 0x3cc2d8u: goto label_3cc2d8;
        case 0x3cc3a0u: goto label_3cc3a0;
        case 0x3cc3f0u: goto label_3cc3f0;
        case 0x3cc46cu: goto label_3cc46c;
        case 0x3cc490u: goto label_3cc490;
        case 0x3cc50cu: goto label_3cc50c;
        case 0x3cc528u: goto label_3cc528;
        case 0x3cc584u: goto label_3cc584;
        case 0x3cc5a8u: goto label_3cc5a8;
        case 0x3cc640u: goto label_3cc640;
        default: break;
    }

    ctx->pc = 0x3cc220u;

    // 0x3cc220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3cc220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3cc224: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3cc224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3cc228: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3cc228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3cc22c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cc22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3cc230: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cc230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cc234: 0x90862b2d  lbu         $a2, 0x2B2D($a0)
    ctx->pc = 0x3cc234u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11053)));
    // 0x3cc238: 0x10c5012f  beq         $a2, $a1, . + 4 + (0x12F << 2)
    ctx->pc = 0x3CC238u;
    {
        const bool branch_taken_0x3cc238 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3CC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC238u;
        // 0x3cc23c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc238) {
            ctx->pc = 0x3CC6F8u;
            goto label_3cc6f8;
        }
    }
    ctx->pc = 0x3CC240u;
    // 0x3cc240: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cc240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cc244: 0x10c30050  beq         $a2, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x3CC244u;
    {
        const bool branch_taken_0x3cc244 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cc244) {
            ctx->pc = 0x3CC388u;
            goto label_3cc388;
        }
    }
    ctx->pc = 0x3CC24Cu;
    // 0x3cc24c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3cc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cc250: 0x10c4000b  beq         $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3CC250u;
    {
        const bool branch_taken_0x3cc250 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3cc250) {
            ctx->pc = 0x3CC280u;
            goto label_3cc280;
        }
    }
    ctx->pc = 0x3CC258u;
    // 0x3cc258: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CC258u;
    {
        const bool branch_taken_0x3cc258 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc258) {
            ctx->pc = 0x3CC268u;
            goto label_3cc268;
        }
    }
    ctx->pc = 0x3CC260u;
    // 0x3cc260: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x3CC260u;
    {
        const bool branch_taken_0x3cc260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc260) {
            ctx->pc = 0x3CC720u;
            goto label_3cc720;
        }
    }
    ctx->pc = 0x3CC268u;
label_3cc268:
    // 0x3cc268: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x3cc268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x3cc26c: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3cc26cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cc270: 0xa620082c  sh          $zero, 0x82C($s1)
    ctx->pc = 0x3cc270u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x3cc274: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x3CC274u;
    {
        const bool branch_taken_0x3cc274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC274u;
        // 0x3cc278: 0xa2242b2d  sb          $a0, 0x2B2D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11053), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc274) {
            ctx->pc = 0x3CC720u;
            goto label_3cc720;
        }
    }
    ctx->pc = 0x3CC27Cu;
    // 0x3cc27c: 0x0  nop
    ctx->pc = 0x3cc27cu;
    // NOP
label_3cc280:
    // 0x3cc280: 0x92242b2e  lbu         $a0, 0x2B2E($s1)
    ctx->pc = 0x3cc280u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11054)));
    // 0x3cc284: 0x14850008  bne         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3CC284u;
    {
        const bool branch_taken_0x3cc284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x3cc284) {
            ctx->pc = 0x3CC2A8u;
            goto label_3cc2a8;
        }
    }
    ctx->pc = 0x3CC28Cu;
    // 0x3cc28c: 0x92242b2f  lbu         $a0, 0x2B2F($s1)
    ctx->pc = 0x3cc28cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11055)));
    // 0x3cc290: 0x240300f2  addiu       $v1, $zero, 0xF2
    ctx->pc = 0x3cc290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x3cc294: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cc294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cc298: 0xa2242b2f  sb          $a0, 0x2B2F($s1)
    ctx->pc = 0x3cc298u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11055), (uint8_t)GPR_U32(ctx, 4));
    // 0x3cc29c: 0xa2202b2e  sb          $zero, 0x2B2E($s1)
    ctx->pc = 0x3cc29cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11054), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc2a0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3CC2A0u;
    {
        const bool branch_taken_0x3cc2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC2A0u;
        // 0x3cc2a4: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc2a0) {
            ctx->pc = 0x3CC318u;
            goto label_3cc318;
        }
    }
    ctx->pc = 0x3CC2A8u;
label_3cc2a8:
    // 0x3cc2a8: 0x92232b2f  lbu         $v1, 0x2B2F($s1)
    ctx->pc = 0x3cc2a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11055)));
    // 0x3cc2ac: 0x14650008  bne         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3CC2ACu;
    {
        const bool branch_taken_0x3cc2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3cc2ac) {
            ctx->pc = 0x3CC2D0u;
            goto label_3cc2d0;
        }
    }
    ctx->pc = 0x3CC2B4u;
    // 0x3cc2b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cc2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cc2b8: 0x240300f1  addiu       $v1, $zero, 0xF1
    ctx->pc = 0x3cc2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x3cc2bc: 0xa2242b2e  sb          $a0, 0x2B2E($s1)
    ctx->pc = 0x3cc2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11054), (uint8_t)GPR_U32(ctx, 4));
    // 0x3cc2c0: 0xa2202b2f  sb          $zero, 0x2B2F($s1)
    ctx->pc = 0x3cc2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11055), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc2c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3CC2C4u;
    {
        const bool branch_taken_0x3cc2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC2C4u;
        // 0x3cc2c8: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc2c4) {
            ctx->pc = 0x3CC318u;
            goto label_3cc318;
        }
    }
    ctx->pc = 0x3CC2CCu;
    // 0x3cc2cc: 0x0  nop
    ctx->pc = 0x3cc2ccu;
    // NOP
label_3cc2d0:
    // 0x3cc2d0: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3CC2D0u;
    SET_GPR_U32(ctx, 31, 0x3CC2D8u);
    ctx->pc = 0x3CC2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC2D0u;
    // 0x3cc2d4: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3CC2D0u, 0x3CC2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC2D8u;
label_3cc2d8:
    // 0x3cc2d8: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x3cc2d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x3cc2dc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x3CC2DCu;
    {
        const bool branch_taken_0x3cc2dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc2dc) {
            ctx->pc = 0x3CC300u;
            goto label_3cc300;
        }
    }
    ctx->pc = 0x3CC2E4u;
    // 0x3cc2e4: 0x92242b2e  lbu         $a0, 0x2B2E($s1)
    ctx->pc = 0x3cc2e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11054)));
    // 0x3cc2e8: 0x240300f1  addiu       $v1, $zero, 0xF1
    ctx->pc = 0x3cc2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x3cc2ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cc2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cc2f0: 0xa2242b2e  sb          $a0, 0x2B2E($s1)
    ctx->pc = 0x3cc2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11054), (uint8_t)GPR_U32(ctx, 4));
    // 0x3cc2f4: 0xa2202b2f  sb          $zero, 0x2B2F($s1)
    ctx->pc = 0x3cc2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11055), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc2f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CC2F8u;
    {
        const bool branch_taken_0x3cc2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC2F8u;
        // 0x3cc2fc: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc2f8) {
            ctx->pc = 0x3CC318u;
            goto label_3cc318;
        }
    }
    ctx->pc = 0x3CC300u;
label_3cc300:
    // 0x3cc300: 0x92242b2f  lbu         $a0, 0x2B2F($s1)
    ctx->pc = 0x3cc300u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11055)));
    // 0x3cc304: 0x240300f2  addiu       $v1, $zero, 0xF2
    ctx->pc = 0x3cc304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x3cc308: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cc308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cc30c: 0xa2242b2f  sb          $a0, 0x2B2F($s1)
    ctx->pc = 0x3cc30cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11055), (uint8_t)GPR_U32(ctx, 4));
    // 0x3cc310: 0xa2202b2e  sb          $zero, 0x2B2E($s1)
    ctx->pc = 0x3cc310u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11054), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc314: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3cc314u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3cc318:
    // 0x3cc318: 0x9625082c  lhu         $a1, 0x82C($s1)
    ctx->pc = 0x3cc318u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2092)));
    // 0x3cc31c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3cc31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3cc320: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x3cc320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
    // 0x3cc324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cc324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc328: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3cc328u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3cc32c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x3cc32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3cc330: 0xa623082c  sh          $v1, 0x82C($s1)
    ctx->pc = 0x3cc330u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2092), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cc334: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3cc334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cc338: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3cc338u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3cc33c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cc33cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cc340: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3CC340u;
    {
        const bool branch_taken_0x3cc340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cc340) {
            ctx->pc = 0x3CC358u;
            goto label_3cc358;
        }
    }
    ctx->pc = 0x3CC348u;
    // 0x3cc348: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cc348u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cc34c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3cc34cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3cc350: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CC350u;
    {
        const bool branch_taken_0x3cc350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC350u;
        // 0x3cc354: 0xa624082e  sh          $a0, 0x82E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 2094), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc350) {
            ctx->pc = 0x3CC374u;
            goto label_3cc374;
        }
    }
    ctx->pc = 0x3CC358u;
label_3cc358:
    // 0x3cc358: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cc358u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3cc35c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cc35cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cc360: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cc360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cc364: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3cc364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3cc368: 0x0  nop
    ctx->pc = 0x3cc368u;
    // NOP
    // 0x3cc36c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3cc36cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3cc370: 0xa624082e  sh          $a0, 0x82E($s1)
    ctx->pc = 0x3cc370u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2094), (uint16_t)GPR_U32(ctx, 4));
label_3cc374:
    // 0x3cc374: 0x3c03c37a  lui         $v1, 0xC37A
    ctx->pc = 0x3cc374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50042 << 16));
    // 0x3cc378: 0xae232b24  sw          $v1, 0x2B24($s1)
    ctx->pc = 0x3cc378u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11044), GPR_U32(ctx, 3));
    // 0x3cc37c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cc37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cc380: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x3CC380u;
    {
        const bool branch_taken_0x3cc380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC380u;
        // 0x3cc384: 0xa2232b2d  sb          $v1, 0x2B2D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11053), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc380) {
            ctx->pc = 0x3CC720u;
            goto label_3cc720;
        }
    }
    ctx->pc = 0x3CC388u;
label_3cc388:
    // 0x3cc388: 0x9225065c  lbu         $a1, 0x65C($s1)
    ctx->pc = 0x3cc388u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x3cc38c: 0x240300f4  addiu       $v1, $zero, 0xF4
    ctx->pc = 0x3cc38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x3cc390: 0x10a300e3  beq         $a1, $v1, . + 4 + (0xE3 << 2)
    ctx->pc = 0x3CC390u;
    {
        const bool branch_taken_0x3cc390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3CC394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC390u;
        // 0x3cc394: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc390) {
            ctx->pc = 0x3CC720u;
            goto label_3cc720;
        }
    }
    ctx->pc = 0x3CC398u;
    // 0x3cc398: 0xc0a7360  jal         func_29CD80
    ctx->pc = 0x3CC398u;
    SET_GPR_U32(ctx, 31, 0x3CC3A0u);
    ctx->pc = 0x29CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CD80u, 0x3CC398u, 0x3CC3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC3A0u;
label_3cc3a0:
    // 0x3cc3a0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3cc3a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3cc3a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cc3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cc3a8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3cc3a8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3cc3ac: 0x14830068  bne         $a0, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x3CC3ACu;
    {
        const bool branch_taken_0x3cc3ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3cc3ac) {
            ctx->pc = 0x3CC550u;
            goto label_3cc550;
        }
    }
    ctx->pc = 0x3CC3B4u;
    // 0x3cc3b4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3cc3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3cc3b8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3cc3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3cc3bc: 0x2442e480  addiu       $v0, $v0, -0x1B80
    ctx->pc = 0x3cc3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960256));
    // 0x3cc3c0: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x3cc3c0u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x65E480u));
    // 0x3cc3c4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x3cc3c4u;
    { uint32_t bits = FAST_READ32(0x65E498u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cc3c8: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x3cc3c8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x65E490u));
    // 0x3cc3cc: 0x8442001c  lh          $v0, 0x1C($v0)
    ctx->pc = 0x3cc3ccu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x65E49Cu));
    // 0x3cc3d0: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x3cc3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x3cc3d4: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x3cc3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x3cc3d8: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x3cc3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x3cc3dc: 0xa4c2001c  sh          $v0, 0x1C($a2)
    ctx->pc = 0x3cc3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x3cc3e0: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3cc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3cc3e4: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x3cc3e4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cc3e8: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3CC3E8u;
    SET_GPR_U32(ctx, 31, 0x3CC3F0u);
    ctx->pc = 0x3CC3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC3E8u;
    // 0x3cc3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3CC3E8u, 0x3CC3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC3F0u;
label_3cc3f0:
    // 0x3cc3f0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CC3F0u;
    {
        const bool branch_taken_0x3cc3f0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3CC3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC3F0u;
        // 0x3cc3f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc3f0) {
            ctx->pc = 0x3CC404u;
            goto label_3cc404;
        }
    }
    ctx->pc = 0x3CC3F8u;
    // 0x3cc3f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cc3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc3fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CC3FCu;
    {
        const bool branch_taken_0x3cc3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC3FCu;
        // 0x3cc400: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc3fc) {
            ctx->pc = 0x3CC41Cu;
            goto label_3cc41c;
        }
    }
    ctx->pc = 0x3CC404u;
label_3cc404:
    // 0x3cc404: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3cc404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3cc408: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cc408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3cc40c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cc40cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc410: 0x0  nop
    ctx->pc = 0x3cc410u;
    // NOP
    // 0x3cc414: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3cc414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3cc418: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3cc418u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3cc41c:
    // 0x3cc41c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3cc41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3cc420: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3cc420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3cc424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cc424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc428: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CC428u;
    {
        const bool branch_taken_0x3cc428 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x3CC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC428u;
        // 0x3cc42c: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc428) {
            ctx->pc = 0x3CC43Cu;
            goto label_3cc43c;
        }
    }
    ctx->pc = 0x3CC430u;
    // 0x3cc430: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3cc430u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc434: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CC434u;
    {
        const bool branch_taken_0x3cc434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC434u;
        // 0x3cc438: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc434) {
            ctx->pc = 0x3CC458u;
            goto label_3cc458;
        }
    }
    ctx->pc = 0x3CC43Cu;
label_3cc43c:
    // 0x3cc43c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3cc43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3cc440: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3cc440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3cc444: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cc444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3cc448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cc448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc44c: 0x0  nop
    ctx->pc = 0x3cc44cu;
    // NOP
    // 0x3cc450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cc450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3cc454: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3cc454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3cc458:
    // 0x3cc458: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cc458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cc45c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3CC45Cu;
    {
        const bool branch_taken_0x3cc45c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CC460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC45Cu;
        // 0x3cc460: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc45c) {
            ctx->pc = 0x3CC480u;
            goto label_3cc480;
        }
    }
    ctx->pc = 0x3CC464u;
    // 0x3cc464: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3CC464u;
    SET_GPR_U32(ctx, 31, 0x3CC46Cu);
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3CC464u, 0x3CC46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC46Cu;
label_3cc46c:
    // 0x3cc46c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x3cc46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3cc470: 0x90630030  lbu         $v1, 0x30($v1)
    ctx->pc = 0x3cc470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x3cc474: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3CC474u;
    {
        const bool branch_taken_0x3cc474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC474u;
        // 0x3cc478: 0xa2232b30  sb          $v1, 0x2B30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11056), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc474) {
            ctx->pc = 0x3CC538u;
            goto label_3cc538;
        }
    }
    ctx->pc = 0x3CC47Cu;
    // 0x3cc47c: 0x0  nop
    ctx->pc = 0x3cc47cu;
    // NOP
label_3cc480:
    // 0x3cc480: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3cc480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3cc484: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x3cc484u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cc488: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3CC488u;
    SET_GPR_U32(ctx, 31, 0x3CC490u);
    ctx->pc = 0x3CC48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC488u;
    // 0x3cc48c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3CC488u, 0x3CC490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC490u;
label_3cc490:
    // 0x3cc490: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CC490u;
    {
        const bool branch_taken_0x3cc490 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3CC494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC490u;
        // 0x3cc494: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc490) {
            ctx->pc = 0x3CC4A4u;
            goto label_3cc4a4;
        }
    }
    ctx->pc = 0x3CC498u;
    // 0x3cc498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cc498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc49c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CC49Cu;
    {
        const bool branch_taken_0x3cc49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC49Cu;
        // 0x3cc4a0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc49c) {
            ctx->pc = 0x3CC4BCu;
            goto label_3cc4bc;
        }
    }
    ctx->pc = 0x3CC4A4u;
label_3cc4a4:
    // 0x3cc4a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3cc4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3cc4a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cc4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3cc4ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cc4acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc4b0: 0x0  nop
    ctx->pc = 0x3cc4b0u;
    // NOP
    // 0x3cc4b4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3cc4b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3cc4b8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3cc4b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3cc4bc:
    // 0x3cc4bc: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x3cc4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x3cc4c0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3cc4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3cc4c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cc4c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc4c8: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CC4C8u;
    {
        const bool branch_taken_0x3cc4c8 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x3CC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4C8u;
        // 0x3cc4cc: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc4c8) {
            ctx->pc = 0x3CC4DCu;
            goto label_3cc4dc;
        }
    }
    ctx->pc = 0x3CC4D0u;
    // 0x3cc4d0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3cc4d0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc4d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CC4D4u;
    {
        const bool branch_taken_0x3cc4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4D4u;
        // 0x3cc4d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc4d4) {
            ctx->pc = 0x3CC4F8u;
            goto label_3cc4f8;
        }
    }
    ctx->pc = 0x3CC4DCu;
label_3cc4dc:
    // 0x3cc4dc: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3cc4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3cc4e0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3cc4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3cc4e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3cc4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3cc4e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cc4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc4ec: 0x0  nop
    ctx->pc = 0x3cc4ecu;
    // NOP
    // 0x3cc4f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cc4f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3cc4f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3cc4f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3cc4f8:
    // 0x3cc4f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cc4f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cc4fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3CC4FCu;
    {
        const bool branch_taken_0x3cc4fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4FCu;
        // 0x3cc500: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc4fc) {
            ctx->pc = 0x3CC520u;
            goto label_3cc520;
        }
    }
    ctx->pc = 0x3CC504u;
    // 0x3cc504: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3CC504u;
    SET_GPR_U32(ctx, 31, 0x3CC50Cu);
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3CC504u, 0x3CC50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC50Cu;
label_3cc50c:
    // 0x3cc50c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x3cc50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3cc510: 0x9063003a  lbu         $v1, 0x3A($v1)
    ctx->pc = 0x3cc510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x3cc514: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CC514u;
    {
        const bool branch_taken_0x3cc514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC514u;
        // 0x3cc518: 0xa2232b30  sb          $v1, 0x2B30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11056), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc514) {
            ctx->pc = 0x3CC538u;
            goto label_3cc538;
        }
    }
    ctx->pc = 0x3CC51Cu;
    // 0x3cc51c: 0x0  nop
    ctx->pc = 0x3cc51cu;
    // NOP
label_3cc520:
    // 0x3cc520: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3CC520u;
    SET_GPR_U32(ctx, 31, 0x3CC528u);
    ctx->pc = 0x3CC524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC520u;
    // 0x3cc524: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3CC520u, 0x3CC528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC528u;
label_3cc528:
    // 0x3cc528: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x3cc528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3cc52c: 0x90630044  lbu         $v1, 0x44($v1)
    ctx->pc = 0x3cc52cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x3cc530: 0xa2232b30  sb          $v1, 0x2B30($s1)
    ctx->pc = 0x3cc530u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11056), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cc534: 0x0  nop
    ctx->pc = 0x3cc534u;
    // NOP
label_3cc538:
    // 0x3cc538: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3cc538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3cc53c: 0xa2232b30  sb          $v1, 0x2B30($s1)
    ctx->pc = 0x3cc53cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11056), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cc540: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3cc540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3cc544: 0xa2232b2d  sb          $v1, 0x2B2D($s1)
    ctx->pc = 0x3cc544u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11053), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cc548: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x3CC548u;
    {
        const bool branch_taken_0x3cc548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC548u;
        // 0x3cc54c: 0xae202b24  sw          $zero, 0x2B24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11044), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc548) {
            ctx->pc = 0x3CC720u;
            goto label_3cc720;
        }
    }
    ctx->pc = 0x3CC550u;
label_3cc550:
    // 0x3cc550: 0x9623082e  lhu         $v1, 0x82E($s1)
    ctx->pc = 0x3cc550u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2094)));
    // 0x3cc554: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3CC554u;
    {
        const bool branch_taken_0x3cc554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC554u;
        // 0x3cc558: 0x3c03c37a  lui         $v1, 0xC37A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50042 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc554) {
            ctx->pc = 0x3CC598u;
            goto label_3cc598;
        }
    }
    ctx->pc = 0x3CC55Cu;
    // 0x3cc55c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3cc55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3cc560: 0xae232b24  sw          $v1, 0x2B24($s1)
    ctx->pc = 0x3cc560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11044), GPR_U32(ctx, 3));
    // 0x3cc564: 0x9623082e  lhu         $v1, 0x82E($s1)
    ctx->pc = 0x3cc564u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2094)));
    // 0x3cc568: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3cc568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3cc56c: 0xa623082e  sh          $v1, 0x82E($s1)
    ctx->pc = 0x3cc56cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2094), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cc570: 0x9623082e  lhu         $v1, 0x82E($s1)
    ctx->pc = 0x3cc570u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2094)));
    // 0x3cc574: 0x1464006a  bne         $v1, $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x3CC574u;
    {
        const bool branch_taken_0x3cc574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3cc574) {
            ctx->pc = 0x3CC720u;
            goto label_3cc720;
        }
    }
    ctx->pc = 0x3CC57Cu;
    // 0x3cc57c: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3CC57Cu;
    SET_GPR_U32(ctx, 31, 0x3CC584u);
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3CC57Cu, 0x3CC584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC584u;
label_3cc584:
    // 0x3cc584: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x3cc584u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3cc588: 0x10200065  beqz        $at, . + 4 + (0x65 << 2)
    ctx->pc = 0x3CC588u;
    {
        const bool branch_taken_0x3cc588 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC588u;
        // 0x3cc58c: 0x240300f4  addiu       $v1, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc588) {
            ctx->pc = 0x3CC720u;
            goto label_3cc720;
        }
    }
    ctx->pc = 0x3CC590u;
    // 0x3cc590: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x3CC590u;
    {
        const bool branch_taken_0x3cc590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC590u;
        // 0x3cc594: 0xa2230780  sb          $v1, 0x780($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc590) {
            ctx->pc = 0x3CC720u;
            goto label_3cc720;
        }
    }
    ctx->pc = 0x3CC598u;
label_3cc598:
    // 0x3cc598: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3cc598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3cc59c: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x3cc59cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cc5a0: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3CC5A0u;
    SET_GPR_U32(ctx, 31, 0x3CC5A8u);
    ctx->pc = 0x3CC5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC5A0u;
    // 0x3cc5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3CC5A0u, 0x3CC5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC5A8u;
label_3cc5a8:
    // 0x3cc5a8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CC5A8u;
    {
        const bool branch_taken_0x3cc5a8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3CC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5A8u;
        // 0x3cc5ac: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc5a8) {
            ctx->pc = 0x3CC5BCu;
            goto label_3cc5bc;
        }
    }
    ctx->pc = 0x3CC5B0u;
    // 0x3cc5b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cc5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc5b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CC5B4u;
    {
        const bool branch_taken_0x3cc5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5B4u;
        // 0x3cc5b8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc5b4) {
            ctx->pc = 0x3CC5D4u;
            goto label_3cc5d4;
        }
    }
    ctx->pc = 0x3CC5BCu;
label_3cc5bc:
    // 0x3cc5bc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3cc5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3cc5c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3cc5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3cc5c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3cc5c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc5c8: 0x0  nop
    ctx->pc = 0x3cc5c8u;
    // NOP
    // 0x3cc5cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3cc5ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3cc5d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3cc5d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3cc5d4:
    // 0x3cc5d4: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x3cc5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x3cc5d8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x3cc5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x3cc5dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cc5dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc5e0: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CC5E0u;
    {
        const bool branch_taken_0x3cc5e0 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x3CC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5E0u;
        // 0x3cc5e4: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc5e0) {
            ctx->pc = 0x3CC5F4u;
            goto label_3cc5f4;
        }
    }
    ctx->pc = 0x3CC5E8u;
    // 0x3cc5e8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3cc5e8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc5ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CC5ECu;
    {
        const bool branch_taken_0x3cc5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5ECu;
        // 0x3cc5f0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc5ec) {
            ctx->pc = 0x3CC610u;
            goto label_3cc610;
        }
    }
    ctx->pc = 0x3CC5F4u;
label_3cc5f4:
    // 0x3cc5f4: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x3cc5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3cc5f8: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x3cc5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3cc5fc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3cc5fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3cc600: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3cc600u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc604: 0x0  nop
    ctx->pc = 0x3cc604u;
    // NOP
    // 0x3cc608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cc608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3cc60c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3cc60cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3cc610:
    // 0x3cc610: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3cc610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cc614: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3CC614u;
    {
        const bool branch_taken_0x3cc614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cc614) {
            ctx->pc = 0x3CC630u;
            goto label_3cc630;
        }
    }
    ctx->pc = 0x3CC61Cu;
    // 0x3cc61c: 0x9623082c  lhu         $v1, 0x82C($s1)
    ctx->pc = 0x3cc61cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2092)));
    // 0x3cc620: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3cc620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3cc624: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x3CC624u;
    {
        const bool branch_taken_0x3cc624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc624) {
            ctx->pc = 0x3CC6D8u;
            goto label_3cc6d8;
        }
    }
    ctx->pc = 0x3CC62Cu;
    // 0x3cc62c: 0x0  nop
    ctx->pc = 0x3cc62cu;
    // NOP
label_3cc630:
    // 0x3cc630: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x3cc630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x3cc634: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x3cc634u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cc638: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x3CC638u;
    SET_GPR_U32(ctx, 31, 0x3CC640u);
    ctx->pc = 0x3CC63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC638u;
    // 0x3cc63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x3CC638u, 0x3CC640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC640u;
label_3cc640:
    // 0x3cc640: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CC640u;
    {
        const bool branch_taken_0x3cc640 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3CC644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC640u;
        // 0x3cc644: 0x22042  srl         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc640) {
            ctx->pc = 0x3CC654u;
            goto label_3cc654;
        }
    }
    ctx->pc = 0x3CC648u;
    // 0x3cc648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cc648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc64c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3CC64Cu;
    {
        const bool branch_taken_0x3cc64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC64Cu;
        // 0x3cc650: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc64c) {
            ctx->pc = 0x3CC66Cu;
            goto label_3cc66c;
        }
    }
    ctx->pc = 0x3CC654u;
label_3cc654:
    // 0x3cc654: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3cc654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3cc658: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3cc658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3cc65c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3cc65cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc660: 0x0  nop
    ctx->pc = 0x3cc660u;
    // NOP
    // 0x3cc664: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3cc664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3cc668: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3cc668u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3cc66c:
    // 0x3cc66c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x3cc66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x3cc670: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3cc670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3cc674: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cc674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc678: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CC678u;
    {
        const bool branch_taken_0x3cc678 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x3CC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC678u;
        // 0x3cc67c: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc678) {
            ctx->pc = 0x3CC68Cu;
            goto label_3cc68c;
        }
    }
    ctx->pc = 0x3CC680u;
    // 0x3cc680: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3cc680u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc684: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CC684u;
    {
        const bool branch_taken_0x3cc684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC684u;
        // 0x3cc688: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc684) {
            ctx->pc = 0x3CC6A8u;
            goto label_3cc6a8;
        }
    }
    ctx->pc = 0x3CC68Cu;
label_3cc68c:
    // 0x3cc68c: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x3cc68cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x3cc690: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x3cc690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3cc694: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3cc694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3cc698: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3cc698u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cc69c: 0x0  nop
    ctx->pc = 0x3cc69cu;
    // NOP
    // 0x3cc6a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cc6a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3cc6a4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3cc6a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3cc6a8:
    // 0x3cc6a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3cc6a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cc6ac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3CC6ACu;
    {
        const bool branch_taken_0x3cc6ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cc6ac) {
            ctx->pc = 0x3CC6C8u;
            goto label_3cc6c8;
        }
    }
    ctx->pc = 0x3CC6B4u;
    // 0x3cc6b4: 0x9623082c  lhu         $v1, 0x82C($s1)
    ctx->pc = 0x3cc6b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2092)));
    // 0x3cc6b8: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x3cc6b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3cc6bc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CC6BCu;
    {
        const bool branch_taken_0x3cc6bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cc6bc) {
            ctx->pc = 0x3CC6D8u;
            goto label_3cc6d8;
        }
    }
    ctx->pc = 0x3CC6C4u;
    // 0x3cc6c4: 0x0  nop
    ctx->pc = 0x3cc6c4u;
    // NOP
label_3cc6c8:
    // 0x3cc6c8: 0x9623082c  lhu         $v1, 0x82C($s1)
    ctx->pc = 0x3cc6c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2092)));
    // 0x3cc6cc: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x3cc6ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3cc6d0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CC6D0u;
    {
        const bool branch_taken_0x3cc6d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cc6d0) {
            ctx->pc = 0x3CC6E8u;
            goto label_3cc6e8;
        }
    }
    ctx->pc = 0x3CC6D8u;
label_3cc6d8:
    // 0x3cc6d8: 0xae202b24  sw          $zero, 0x2B24($s1)
    ctx->pc = 0x3cc6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11044), GPR_U32(ctx, 0));
    // 0x3cc6dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3CC6DCu;
    {
        const bool branch_taken_0x3cc6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC6DCu;
        // 0x3cc6e0: 0xa2202b2d  sb          $zero, 0x2B2D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11053), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc6dc) {
            ctx->pc = 0x3CC720u;
            goto label_3cc720;
        }
    }
    ctx->pc = 0x3CC6E4u;
    // 0x3cc6e4: 0x0  nop
    ctx->pc = 0x3cc6e4u;
    // NOP
label_3cc6e8:
    // 0x3cc6e8: 0xae202b24  sw          $zero, 0x2B24($s1)
    ctx->pc = 0x3cc6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11044), GPR_U32(ctx, 0));
    // 0x3cc6ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cc6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cc6f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3CC6F0u;
    {
        const bool branch_taken_0x3cc6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC6F0u;
        // 0x3cc6f4: 0xa2232b2d  sb          $v1, 0x2B2D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11053), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc6f0) {
            ctx->pc = 0x3CC720u;
            goto label_3cc720;
        }
    }
    ctx->pc = 0x3CC6F8u;
label_3cc6f8:
    // 0x3cc6f8: 0x92232b30  lbu         $v1, 0x2B30($s1)
    ctx->pc = 0x3cc6f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11056)));
    // 0x3cc6fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CC6FCu;
    {
        const bool branch_taken_0x3cc6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC6FCu;
        // 0x3cc700: 0x240300f3  addiu       $v1, $zero, 0xF3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc6fc) {
            ctx->pc = 0x3CC718u;
            goto label_3cc718;
        }
    }
    ctx->pc = 0x3CC704u;
    // 0x3cc704: 0xa2230780  sb          $v1, 0x780($s1)
    ctx->pc = 0x3cc704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cc708: 0x92232b30  lbu         $v1, 0x2B30($s1)
    ctx->pc = 0x3cc708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11056)));
    // 0x3cc70c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3cc70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3cc710: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3CC710u;
    {
        const bool branch_taken_0x3cc710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC710u;
        // 0x3cc714: 0xa2232b30  sb          $v1, 0x2B30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 11056), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc710) {
            ctx->pc = 0x3CC720u;
            goto label_3cc720;
        }
    }
    ctx->pc = 0x3CC718u;
label_3cc718:
    // 0x3cc718: 0xa2202b2d  sb          $zero, 0x2B2D($s1)
    ctx->pc = 0x3cc718u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11053), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cc71c: 0x0  nop
    ctx->pc = 0x3cc71cu;
    // NOP
label_3cc720:
    // 0x3cc720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3cc720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cc724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3cc724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cc728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cc728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cc72c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CC72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC72Cu;
        // 0x3cc730: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC734u;
}
