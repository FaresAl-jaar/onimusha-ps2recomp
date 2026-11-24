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

// Function: sub_003A4130
// Address: 0x3a4130 - 0x3a4444
void sub_003A4130_0x3a4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4130_0x3a4130");
#endif

    switch (ctx->pc) {
        case 0x3a4208u: goto label_3a4208;
        case 0x3a4260u: goto label_3a4260;
        case 0x3a428cu: goto label_3a428c;
        case 0x3a42b4u: goto label_3a42b4;
        case 0x3a42c8u: goto label_3a42c8;
        case 0x3a42f8u: goto label_3a42f8;
        case 0x3a4348u: goto label_3a4348;
        case 0x3a43b4u: goto label_3a43b4;
        case 0x3a43c8u: goto label_3a43c8;
        case 0x3a43d8u: goto label_3a43d8;
        case 0x3a43f4u: goto label_3a43f4;
        default: break;
    }

    ctx->pc = 0x3a4130u;

    // 0x3a4130: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3a4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3a4134: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x3a4134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x3a4138: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3a4138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3a413c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3a413cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a4140: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3a4140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3a4144: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3a4144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3a4148: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3a4148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3a414c: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3a414cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3a4150: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3a4150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3a4154: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3a4154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3a4158: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a4158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3a415c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3a415cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a4160: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a4160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3a4164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3a4164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4168: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3a4168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3a416c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a416cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a4170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a4170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a4174: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a4174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a4178: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3a4178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a417c: 0x8f858c60  lw          $a1, -0x73A0($gp)
    ctx->pc = 0x3a417cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a4180: 0xa3a000b0  sb          $zero, 0xB0($sp)
    ctx->pc = 0x3a4180u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4184: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3a4184u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3a4188: 0x94a31fc4  lhu         $v1, 0x1FC4($a1)
    ctx->pc = 0x3a4188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8132)));
    // 0x3a418c: 0x24a61fc4  addiu       $a2, $a1, 0x1FC4
    ctx->pc = 0x3a418cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8132));
    // 0x3a4190: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a4190u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3a4194: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a4194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a4198: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4198u;
    {
        const bool branch_taken_0x3a4198 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4198u;
        // 0x3a419c: 0x24650001  addiu       $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4198) {
            ctx->pc = 0x3A41B0u;
            goto label_3a41b0;
        }
    }
    ctx->pc = 0x3A41A0u;
    // 0x3a41a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a41a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a41a4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3a41a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a41a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A41A8u;
    {
        const bool branch_taken_0x3a41a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A41ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A41A8u;
        // 0x3a41ac: 0xa4001b  divu        $zero, $a1, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a41a8) {
            ctx->pc = 0x3A41CCu;
            goto label_3a41cc;
        }
    }
    ctx->pc = 0x3A41B0u;
label_3a41b0:
    // 0x3a41b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a41b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a41b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3a41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3a41b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a41b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a41bc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3a41bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a41c0: 0x0  nop
    ctx->pc = 0x3a41c0u;
    // NOP
    // 0x3a41c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3a41c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a41c8: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x3a41c8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_3a41cc:
    // 0x3a41cc: 0x0  nop
    ctx->pc = 0x3a41ccu;
    // NOP
    // 0x3a41d0: 0x0  nop
    ctx->pc = 0x3a41d0u;
    // NOP
    // 0x3a41d4: 0x1810  mfhi        $v1
    ctx->pc = 0x3a41d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3a41d8: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x3a41d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a41dc: 0x8f838c60  lw          $v1, -0x73A0($gp)
    ctx->pc = 0x3a41dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a41e0: 0x94631fc4  lhu         $v1, 0x1FC4($v1)
    ctx->pc = 0x3a41e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8132)));
    // 0x3a41e4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A41E4u;
    {
        const bool branch_taken_0x3a41e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A41E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A41E4u;
        // 0x3a41e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a41e4) {
            ctx->pc = 0x3A41F0u;
            goto label_3a41f0;
        }
    }
    ctx->pc = 0x3A41ECu;
    // 0x3a41ec: 0xa3a300b0  sb          $v1, 0xB0($sp)
    ctx->pc = 0x3a41ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 3));
label_3a41f0:
    // 0x3a41f0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3a41f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a41f4: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x3a41f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x3a41f8: 0x27b600e4  addiu       $s6, $sp, 0xE4
    ctx->pc = 0x3a41f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x3a41fc: 0x27b700e8  addiu       $s7, $sp, 0xE8
    ctx->pc = 0x3a41fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x3a4200: 0x27be00ec  addiu       $fp, $sp, 0xEC
    ctx->pc = 0x3a4200u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x3a4204: 0x0  nop
    ctx->pc = 0x3a4204u;
    // NOP
label_3a4208:
    // 0x3a4208: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x3a4208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a420c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x3a420cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a4210: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3a4210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a4214: 0x24830960  addiu       $v1, $a0, 0x960
    ctx->pc = 0x3a4214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2400));
    // 0x3a4218: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3a4218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x3a421c: 0x8c850964  lw          $a1, 0x964($a0)
    ctx->pc = 0x3a421cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2404)));
    // 0x3a4220: 0x10a00075  beqz        $a1, . + 4 + (0x75 << 2)
    ctx->pc = 0x3A4220u;
    {
        const bool branch_taken_0x3a4220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4220u;
        // 0x3a4224: 0x2aa10002  slti        $at, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4220) {
            ctx->pc = 0x3A43F8u;
            goto label_3a43f8;
        }
    }
    ctx->pc = 0x3A4228u;
    // 0x3a4228: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A4228u;
    {
        const bool branch_taken_0x3a4228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4228) {
            ctx->pc = 0x3A4280u;
            goto label_3a4280;
        }
    }
    ctx->pc = 0x3A4230u;
    // 0x3a4230: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4230u;
    {
        const bool branch_taken_0x3a4230 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4230) {
            ctx->pc = 0x3A4240u;
            goto label_3a4240;
        }
    }
    ctx->pc = 0x3A4238u;
    // 0x3a4238: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4238u;
    {
        const bool branch_taken_0x3a4238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4238u;
        // 0x3a423c: 0x8f948060  lw          $s4, -0x7FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4238) {
            ctx->pc = 0x3A4250u;
            goto label_3a4250;
        }
    }
    ctx->pc = 0x3A4240u;
label_3a4240:
    // 0x3a4240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a4240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4244: 0x16a20002  bne         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A4244u;
    {
        const bool branch_taken_0x3a4244 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a4244) {
            ctx->pc = 0x3A4250u;
            goto label_3a4250;
        }
    }
    ctx->pc = 0x3A424Cu;
    // 0x3a424c: 0x8f948064  lw          $s4, -0x7F9C($gp)
    ctx->pc = 0x3a424cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
label_3a4250:
    // 0x3a4250: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A4250u;
    {
        const bool branch_taken_0x3a4250 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4250) {
            ctx->pc = 0x3A4270u;
            goto label_3a4270;
        }
    }
    ctx->pc = 0x3A4258u;
    // 0x3a4258: 0xc0e8d5c  jal         func_3A3570
    ctx->pc = 0x3A4258u;
    SET_GPR_U32(ctx, 31, 0x3A4260u);
    ctx->pc = 0x3A425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4258u;
    // 0x3a425c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3570u, 0x3A4258u, 0x3A4260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4260u;
label_3a4260:
    // 0x3a4260: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x3a4260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3a4264: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x3A4264u;
    {
        const bool branch_taken_0x3a4264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4264u;
        // 0x3a4268: 0xac750004  sw          $s5, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4264) {
            ctx->pc = 0x3A43F8u;
            goto label_3a43f8;
        }
    }
    ctx->pc = 0x3A426Cu;
    // 0x3a426c: 0x0  nop
    ctx->pc = 0x3a426cu;
    // NOP
label_3a4270:
    // 0x3a4270: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3a4270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3a4274: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3A4274u;
    {
        const bool branch_taken_0x3a4274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4274u;
        // 0x3a4278: 0xac820964  sw          $v0, 0x964($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4274) {
            ctx->pc = 0x3A42C0u;
            goto label_3a42c0;
        }
    }
    ctx->pc = 0x3A427Cu;
    // 0x3a427c: 0x0  nop
    ctx->pc = 0x3a427cu;
    // NOP
label_3a4280:
    // 0x3a4280: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3a4280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3a4284: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3A4284u;
    SET_GPR_U32(ctx, 31, 0x3A428Cu);
    ctx->pc = 0x3A4288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4284u;
    // 0x3a4288: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3A4284u, 0x3A428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A428Cu;
label_3a428c:
    // 0x3a428c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3a428cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4290: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4290u;
    {
        const bool branch_taken_0x3a4290 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4290) {
            ctx->pc = 0x3A42A8u;
            goto label_3a42a8;
        }
    }
    ctx->pc = 0x3A4298u;
    // 0x3a4298: 0x8e8229c0  lw          $v0, 0x29C0($s4)
    ctx->pc = 0x3a4298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x3a429c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3a429cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a42a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A42A0u;
    {
        const bool branch_taken_0x3a42a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a42a0) {
            ctx->pc = 0x3A42C0u;
            goto label_3a42c0;
        }
    }
    ctx->pc = 0x3A42A8u;
label_3a42a8:
    // 0x3a42a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3a42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3a42ac: 0xc0e8d5c  jal         func_3A3570
    ctx->pc = 0x3A42ACu;
    SET_GPR_U32(ctx, 31, 0x3A42B4u);
    ctx->pc = 0x3A42B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A42ACu;
    // 0x3a42b0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3570u, 0x3A42ACu, 0x3A42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A42B4u;
label_3a42b4:
    // 0x3a42b4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x3A42B4u;
    {
        const bool branch_taken_0x3a42b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a42b4) {
            ctx->pc = 0x3A43F8u;
            goto label_3a43f8;
        }
    }
    ctx->pc = 0x3A42BCu;
    // 0x3a42bc: 0x0  nop
    ctx->pc = 0x3a42bcu;
    // NOP
label_3a42c0:
    // 0x3a42c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a42c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a42c4: 0x0  nop
    ctx->pc = 0x3a42c4u;
    // NOP
label_3a42c8:
    // 0x3a42c8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x3a42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3a42cc: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x3a42ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3a42d0: 0x8f828c60  lw          $v0, -0x73A0($gp)
    ctx->pc = 0x3a42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x3a42d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a42d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a42d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a42dc: 0x24511fc8  addiu       $s1, $v0, 0x1FC8
    ctx->pc = 0x3a42dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8136));
    // 0x3a42e0: 0x90421fd9  lbu         $v0, 0x1FD9($v0)
    ctx->pc = 0x3a42e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8153)));
    // 0x3a42e4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x3a42e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a42e8: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A42E8u;
    {
        const bool branch_taken_0x3a42e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A42E8u;
        // 0x3a42ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a42e8) {
            ctx->pc = 0x3A4368u;
            goto label_3a4368;
        }
    }
    ctx->pc = 0x3A42F0u;
    // 0x3a42f0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3a42f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a42f4: 0x0  nop
    ctx->pc = 0x3a42f4u;
    // NOP
label_3a42f8:
    // 0x3a42f8: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x3a42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x3a42fc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3a42fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a4300: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x3a4300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3a4304: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3a4304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a4308: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3a4308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3a430c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x3a430cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3a4310: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x3a4310u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x3a4314: 0xe6e10000  swc1        $f1, 0x0($s7)
    ctx->pc = 0x3a4314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x3a4318: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x3a4318u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x3a431c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3a431cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a4320: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3a4320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a4324: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x3a4324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3a4328: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a4328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3a432c: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x3a432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x3a4330: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3a4330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3a4334: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x3a4334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x3a4338: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a4338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3a433c: 0x92070010  lbu         $a3, 0x10($s0)
    ctx->pc = 0x3a433cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3a4340: 0xc0e8c4c  jal         func_3A3130
    ctx->pc = 0x3A4340u;
    SET_GPR_U32(ctx, 31, 0x3A4348u);
    ctx->pc = 0x3A4344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4340u;
    // 0x3a4344: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3130u, 0x3A4340u, 0x3A4348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4348u;
label_3a4348:
    // 0x3a4348: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3a4348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a434c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A434Cu;
    {
        const bool branch_taken_0x3a434c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a434c) {
            ctx->pc = 0x3A4368u;
            goto label_3a4368;
        }
    }
    ctx->pc = 0x3A4354u;
    // 0x3a4354: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x3a4354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x3a4358: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a4358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3a435c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3a435cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a4360: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3A4360u;
    {
        const bool branch_taken_0x3a4360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4360u;
        // 0x3a4364: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4360) {
            ctx->pc = 0x3A42F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a42f8;
        }
    }
    ctx->pc = 0x3A4368u;
label_3a4368:
    // 0x3a4368: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x3a4368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x3a436c: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A436Cu;
    {
        const bool branch_taken_0x3a436c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a436c) {
            ctx->pc = 0x3A4390u;
            goto label_3a4390;
        }
    }
    ctx->pc = 0x3A4374u;
    // 0x3a4374: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a4374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a4378: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3a4378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3a437c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a437cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3a4380: 0x2a620007  slti        $v0, $s3, 0x7
    ctx->pc = 0x3a4380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x3a4384: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3A4384u;
    {
        const bool branch_taken_0x3a4384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4384) {
            ctx->pc = 0x3A42C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a42c8;
        }
    }
    ctx->pc = 0x3A438Cu;
    // 0x3a438c: 0x0  nop
    ctx->pc = 0x3a438cu;
    // NOP
label_3a4390:
    // 0x3a4390: 0x2a610007  slti        $at, $s3, 0x7
    ctx->pc = 0x3a4390u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x3a4394: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x3A4394u;
    {
        const bool branch_taken_0x3a4394 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4394) {
            ctx->pc = 0x3A43D0u;
            goto label_3a43d0;
        }
    }
    ctx->pc = 0x3A439Cu;
    // 0x3a439c: 0x82250012  lb          $a1, 0x12($s1)
    ctx->pc = 0x3a439cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3a43a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a43a4: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A43A4u;
    {
        const bool branch_taken_0x3a43a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A43A4u;
        // 0x3a43a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a43a4) {
            ctx->pc = 0x3A43C0u;
            goto label_3a43c0;
        }
    }
    ctx->pc = 0x3A43ACu;
    // 0x3a43ac: 0xc0e8d2c  jal         func_3A34B0
    ctx->pc = 0x3A43ACu;
    SET_GPR_U32(ctx, 31, 0x3A43B4u);
    ctx->pc = 0x3A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A34B0u, 0x3A43ACu, 0x3A43B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A43B4u;
label_3a43b4:
    // 0x3a43b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3A43B4u;
    {
        const bool branch_taken_0x3a43b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a43b4) {
            ctx->pc = 0x3A43E0u;
            goto label_3a43e0;
        }
    }
    ctx->pc = 0x3A43BCu;
    // 0x3a43bc: 0x0  nop
    ctx->pc = 0x3a43bcu;
    // NOP
label_3a43c0:
    // 0x3a43c0: 0xc0e8d04  jal         func_3A3410
    ctx->pc = 0x3A43C0u;
    SET_GPR_U32(ctx, 31, 0x3A43C8u);
    ctx->pc = 0x3A43C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A43C0u;
    // 0x3a43c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3410u, 0x3A43C0u, 0x3A43C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A43C8u;
label_3a43c8:
    // 0x3a43c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A43C8u;
    {
        const bool branch_taken_0x3a43c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a43c8) {
            ctx->pc = 0x3A43E0u;
            goto label_3a43e0;
        }
    }
    ctx->pc = 0x3A43D0u;
label_3a43d0:
    // 0x3a43d0: 0xc0e8d2c  jal         func_3A34B0
    ctx->pc = 0x3A43D0u;
    SET_GPR_U32(ctx, 31, 0x3A43D8u);
    ctx->pc = 0x3A43D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A43D0u;
    // 0x3a43d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A34B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A34B0u, 0x3A43D0u, 0x3A43D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A43D8u;
label_3a43d8:
    // 0x3a43d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A43D8u;
    {
        const bool branch_taken_0x3a43d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a43d8) {
            ctx->pc = 0x3A43F8u;
            goto label_3a43f8;
        }
    }
    ctx->pc = 0x3A43E0u;
label_3a43e0:
    // 0x3a43e0: 0x83a300b0  lb          $v1, 0xB0($sp)
    ctx->pc = 0x3a43e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3a43e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A43E4u;
    {
        const bool branch_taken_0x3a43e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a43e4) {
            ctx->pc = 0x3A43F8u;
            goto label_3a43f8;
        }
    }
    ctx->pc = 0x3A43ECu;
    // 0x3a43ec: 0xc0e8cd8  jal         func_3A3360
    ctx->pc = 0x3A43ECu;
    SET_GPR_U32(ctx, 31, 0x3A43F4u);
    ctx->pc = 0x3A43F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A43ECu;
    // 0x3a43f0: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3360u, 0x3A43ECu, 0x3A43F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A43F4u;
label_3a43f4:
    // 0x3a43f4: 0x0  nop
    ctx->pc = 0x3a43f4u;
    // NOP
label_3a43f8:
    // 0x3a43f8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x3a43f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a43fc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3a43fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3a4400: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x3a4400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x3a4404: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x3a4404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x3a4408: 0x2aa30008  slti        $v1, $s5, 0x8
    ctx->pc = 0x3a4408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a440c: 0x1460ff7e  bnez        $v1, . + 4 + (-0x82 << 2)
    ctx->pc = 0x3A440Cu;
    {
        const bool branch_taken_0x3a440c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a440c) {
            ctx->pc = 0x3A4208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4208;
        }
    }
    ctx->pc = 0x3A4414u;
    // 0x3a4414: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3a4414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a4418: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3a4418u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a441c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3a441cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a4420: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3a4420u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a4424: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a4424u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a4428: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a4428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a442c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3a442cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a4430: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a4430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a4434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a4434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a4438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a443c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A443Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A443Cu;
        // 0x3a4440: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A443Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4444u;
}
