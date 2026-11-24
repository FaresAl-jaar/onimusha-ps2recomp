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

// Function: sub_003F0200
// Address: 0x3f0200 - 0x3f0338
void sub_003F0200_0x3f0200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0200_0x3f0200");
#endif

    switch (ctx->pc) {
        case 0x3f0200u: goto label_3f0200;
        case 0x3f0204u: goto label_3f0204;
        case 0x3f0208u: goto label_3f0208;
        case 0x3f020cu: goto label_3f020c;
        case 0x3f0210u: goto label_3f0210;
        case 0x3f0214u: goto label_3f0214;
        case 0x3f0218u: goto label_3f0218;
        case 0x3f021cu: goto label_3f021c;
        case 0x3f0220u: goto label_3f0220;
        case 0x3f0224u: goto label_3f0224;
        case 0x3f0228u: goto label_3f0228;
        case 0x3f022cu: goto label_3f022c;
        case 0x3f0230u: goto label_3f0230;
        case 0x3f0234u: goto label_3f0234;
        case 0x3f0238u: goto label_3f0238;
        case 0x3f023cu: goto label_3f023c;
        case 0x3f0240u: goto label_3f0240;
        case 0x3f0244u: goto label_3f0244;
        case 0x3f0248u: goto label_3f0248;
        case 0x3f024cu: goto label_3f024c;
        case 0x3f0250u: goto label_3f0250;
        case 0x3f0254u: goto label_3f0254;
        case 0x3f0258u: goto label_3f0258;
        case 0x3f025cu: goto label_3f025c;
        case 0x3f0260u: goto label_3f0260;
        case 0x3f0264u: goto label_3f0264;
        case 0x3f0268u: goto label_3f0268;
        case 0x3f026cu: goto label_3f026c;
        case 0x3f0270u: goto label_3f0270;
        case 0x3f0274u: goto label_3f0274;
        case 0x3f0278u: goto label_3f0278;
        case 0x3f027cu: goto label_3f027c;
        case 0x3f0280u: goto label_3f0280;
        case 0x3f0284u: goto label_3f0284;
        case 0x3f0288u: goto label_3f0288;
        case 0x3f028cu: goto label_3f028c;
        case 0x3f0290u: goto label_3f0290;
        case 0x3f0294u: goto label_3f0294;
        case 0x3f0298u: goto label_3f0298;
        case 0x3f029cu: goto label_3f029c;
        case 0x3f02a0u: goto label_3f02a0;
        case 0x3f02a4u: goto label_3f02a4;
        case 0x3f02a8u: goto label_3f02a8;
        case 0x3f02acu: goto label_3f02ac;
        case 0x3f02b0u: goto label_3f02b0;
        case 0x3f02b4u: goto label_3f02b4;
        case 0x3f02b8u: goto label_3f02b8;
        case 0x3f02bcu: goto label_3f02bc;
        case 0x3f02c0u: goto label_3f02c0;
        case 0x3f02c4u: goto label_3f02c4;
        case 0x3f02c8u: goto label_3f02c8;
        case 0x3f02ccu: goto label_3f02cc;
        case 0x3f02d0u: goto label_3f02d0;
        case 0x3f02d4u: goto label_3f02d4;
        case 0x3f02d8u: goto label_3f02d8;
        case 0x3f02dcu: goto label_3f02dc;
        case 0x3f02e0u: goto label_3f02e0;
        case 0x3f02e4u: goto label_3f02e4;
        case 0x3f02e8u: goto label_3f02e8;
        case 0x3f02ecu: goto label_3f02ec;
        case 0x3f02f0u: goto label_3f02f0;
        case 0x3f02f4u: goto label_3f02f4;
        case 0x3f02f8u: goto label_3f02f8;
        case 0x3f02fcu: goto label_3f02fc;
        case 0x3f0300u: goto label_3f0300;
        case 0x3f0304u: goto label_3f0304;
        case 0x3f0308u: goto label_3f0308;
        case 0x3f030cu: goto label_3f030c;
        case 0x3f0310u: goto label_3f0310;
        case 0x3f0314u: goto label_3f0314;
        case 0x3f0318u: goto label_3f0318;
        case 0x3f031cu: goto label_3f031c;
        case 0x3f0320u: goto label_3f0320;
        case 0x3f0324u: goto label_3f0324;
        case 0x3f0328u: goto label_3f0328;
        case 0x3f032cu: goto label_3f032c;
        case 0x3f0330u: goto label_3f0330;
        case 0x3f0334u: goto label_3f0334;
        default: break;
    }

    ctx->pc = 0x3f0200u;

label_3f0200:
    // 0x3f0200: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3f0200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3f0204:
    // 0x3f0204: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3f0204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3f0208:
    // 0x3f0208: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3f0208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f020c:
    // 0x3f020c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3f020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3f0210:
    // 0x3f0210: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3f0210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3f0214:
    // 0x3f0214: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3f0214u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f0218:
    // 0x3f0218: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f0218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f021c:
    // 0x3f021c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x3f021cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3f0220:
    // 0x3f0220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f0220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f0224:
    // 0x3f0224: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x3f0224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3f0228:
    // 0x3f0228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f0228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f022c:
    // 0x3f022c: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3f022cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3f0230:
    // 0x3f0230: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3f0230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f0234:
    // 0x3f0234: 0x30f0ffff  andi        $s0, $a3, 0xFFFF
    ctx->pc = 0x3f0234u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_3f0238:
    // 0x3f0238: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x3f0238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f023c:
    // 0x3f023c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3f023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f0240:
    // 0x3f0240: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f0240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f0244:
    // 0x3f0244: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x3f0244u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3f0248:
    // 0x3f0248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f024c:
    // 0x3f024c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3f024cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3f0250:
    // 0x3f0250: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3f0250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3f0254:
    // 0x3f0254: 0xc0a4408  jal         func_291020
label_3f0258:
    if (ctx->pc == 0x3F0258u) {
        ctx->pc = 0x3F0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0254u;
        // 0x3f0258: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F025Cu;
        goto label_3f025c;
    }
    ctx->pc = 0x3F0254u;
    SET_GPR_U32(ctx, 31, 0x3F025Cu);
    ctx->pc = 0x3F0258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0254u;
    // 0x3f0258: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291020u, 0x3F0254u, 0x3F025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F025Cu;
label_3f025c:
    // 0x3f025c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f025cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0260:
    // 0x3f0260: 0xc0a43fc  jal         func_290FF0
label_3f0264:
    if (ctx->pc == 0x3F0264u) {
        ctx->pc = 0x3F0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0260u;
        // 0x3f0264: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0268u;
        goto label_3f0268;
    }
    ctx->pc = 0x3F0260u;
    SET_GPR_U32(ctx, 31, 0x3F0268u);
    ctx->pc = 0x3F0264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0260u;
    // 0x3f0264: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FF0u, 0x3F0260u, 0x3F0268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0268u;
label_3f0268:
    // 0x3f0268: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3f0268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3f026c:
    // 0x3f026c: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x3f026cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_3f0270:
    // 0x3f0270: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3f0270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3f0274:
    // 0x3f0274: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x3f0274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_3f0278:
    // 0x3f0278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f0278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f027c:
    // 0x3f027c: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x3f027cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3f0280:
    // 0x3f0280: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x3f0280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_3f0284:
    // 0x3f0284: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3f0284u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0288:
    // 0x3f0288: 0xc0510e0  jal         func_144380
label_3f028c:
    if (ctx->pc == 0x3F028Cu) {
        ctx->pc = 0x3F028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0288u;
        // 0x3f028c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0290u;
        goto label_3f0290;
    }
    ctx->pc = 0x3F0288u;
    SET_GPR_U32(ctx, 31, 0x3F0290u);
    ctx->pc = 0x3F028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0288u;
    // 0x3f028c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x3F0288u, 0x3F0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0290u;
label_3f0290:
    // 0x3f0290: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x3f0290u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0294:
    // 0x3f0294: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f0294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0298:
    // 0x3f0298: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3f0298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_3f029c:
    // 0x3f029c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f029cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f02a0:
    // 0x3f02a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3f02a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3f02a4:
    // 0x3f02a4: 0x2405021c  addiu       $a1, $zero, 0x21C
    ctx->pc = 0x3f02a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 540));
label_3f02a8:
    // 0x3f02a8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3f02a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3f02ac:
    // 0x3f02ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3f02acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f02b0:
    // 0x3f02b0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3f02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3f02b4:
    // 0x3f02b4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3f02b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3f02b8:
    // 0x3f02b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f02b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f02bc:
    // 0x3f02bc: 0x0  nop
    ctx->pc = 0x3f02bcu;
    // NOP
label_3f02c0:
    // 0x3f02c0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3f02c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_3f02c4:
    // 0x3f02c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f02c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f02c8:
    // 0x3f02c8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3f02c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3f02cc:
    // 0x3f02cc: 0x0  nop
    ctx->pc = 0x3f02ccu;
    // NOP
label_3f02d0:
    // 0x3f02d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3f02d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3f02d4:
    // 0x3f02d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f02d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3f02d8:
    // 0x3f02d8: 0xc0d0484  jal         func_341210
label_3f02dc:
    if (ctx->pc == 0x3F02DCu) {
        ctx->pc = 0x3F02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F02D8u;
        // 0x3f02dc: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F02E0u;
        goto label_3f02e0;
    }
    ctx->pc = 0x3F02D8u;
    SET_GPR_U32(ctx, 31, 0x3F02E0u);
    ctx->pc = 0x3F02DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F02D8u;
    // 0x3f02dc: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x3F02D8u, 0x3F02E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F02E0u;
label_3f02e0:
    // 0x3f02e0: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3f02e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3f02e4:
    // 0x3f02e4: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3f02e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3f02e8:
    // 0x3f02e8: 0x320f809  jalr        $t9
label_3f02ec:
    if (ctx->pc == 0x3F02ECu) {
        ctx->pc = 0x3F02ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F02E8u;
        // 0x3f02ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F02F0u;
        goto label_3f02f0;
    }
    ctx->pc = 0x3F02E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F02F0u);
        ctx->pc = 0x3F02ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F02E8u;
        // 0x3f02ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F02E8u, 0x3F02F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F02F0u;
label_3f02f0:
    // 0x3f02f0: 0x87a50070  lh          $a1, 0x70($sp)
    ctx->pc = 0x3f02f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 112)));
label_3f02f4:
    // 0x3f02f4: 0x113c3c  dsll32      $a3, $s1, 16
    ctx->pc = 0x3f02f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) << (32 + 16));
label_3f02f8:
    // 0x3f02f8: 0x87a60078  lh          $a2, 0x78($sp)
    ctx->pc = 0x3f02f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
label_3f02fc:
    // 0x3f02fc: 0x13443c  dsll32      $t0, $s3, 16
    ctx->pc = 0x3f02fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << (32 + 16));
label_3f0300:
    // 0x3f0300: 0x124c3c  dsll32      $t1, $s2, 16
    ctx->pc = 0x3f0300u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) << (32 + 16));
label_3f0304:
    // 0x3f0304: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x3f0304u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_3f0308:
    // 0x3f0308: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x3f0308u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_3f030c:
    // 0x3f030c: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x3f030cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_3f0310:
    // 0x3f0310: 0xc0e2eb4  jal         func_38BAD0
label_3f0314:
    if (ctx->pc == 0x3F0314u) {
        ctx->pc = 0x3F0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0310u;
        // 0x3f0314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0318u;
        goto label_3f0318;
    }
    ctx->pc = 0x3F0310u;
    SET_GPR_U32(ctx, 31, 0x3F0318u);
    ctx->pc = 0x3F0314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0310u;
    // 0x3f0314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BAD0u, 0x3F0310u, 0x3F0318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0318u;
label_3f0318:
    // 0x3f0318: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3f0318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3f031c:
    // 0x3f031c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3f031cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f0320:
    // 0x3f0320: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3f0320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f0324:
    // 0x3f0324: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f0324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0328:
    // 0x3f0328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f0328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f032c:
    // 0x3f032c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f032cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f0330:
    // 0x3f0330: 0x3e00008  jr          $ra
label_3f0334:
    if (ctx->pc == 0x3F0334u) {
        ctx->pc = 0x3F0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0330u;
        // 0x3f0334: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0338u;
        goto label_fallthrough_0x3f0330;
    }
    ctx->pc = 0x3F0330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0330u;
        // 0x3f0334: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f0330:
    ctx->pc = 0x3F0338u;
}
