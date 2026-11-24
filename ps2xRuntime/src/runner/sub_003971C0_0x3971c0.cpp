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

// Function: sub_003971C0
// Address: 0x3971c0 - 0x397518
void sub_003971C0_0x3971c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003971C0_0x3971c0");
#endif

    switch (ctx->pc) {
        case 0x397210u: goto label_397210;
        case 0x397220u: goto label_397220;
        case 0x3972e0u: goto label_3972e0;
        case 0x3972f4u: goto label_3972f4;
        case 0x39730cu: goto label_39730c;
        case 0x397320u: goto label_397320;
        case 0x397330u: goto label_397330;
        case 0x39745cu: goto label_39745c;
        case 0x397508u: goto label_397508;
        default: break;
    }

    ctx->pc = 0x3971c0u;

    // 0x3971c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3971c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3971c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3971c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3971c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3971c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3971cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3971ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3971d0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3971d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3971d4: 0x10c3003e  beq         $a2, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x3971D4u;
    {
        const bool branch_taken_0x3971d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3971D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3971D4u;
        // 0x3971d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3971d4) {
            ctx->pc = 0x3972D0u;
            goto label_3972d0;
        }
    }
    ctx->pc = 0x3971DCu;
    // 0x3971dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3971dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3971e0: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3971E0u;
    {
        const bool branch_taken_0x3971e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3971e0) {
            ctx->pc = 0x397230u;
            goto label_397230;
        }
    }
    ctx->pc = 0x3971E8u;
    // 0x3971e8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3971E8u;
    {
        const bool branch_taken_0x3971e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3971e8) {
            ctx->pc = 0x3971F8u;
            goto label_3971f8;
        }
    }
    ctx->pc = 0x3971F0u;
    // 0x3971f0: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x3971F0u;
    {
        const bool branch_taken_0x3971f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3971f0) {
            ctx->pc = 0x397508u;
            goto label_397508;
        }
    }
    ctx->pc = 0x3971F8u;
label_3971f8:
    // 0x3971f8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3971F8u;
    {
        const bool branch_taken_0x3971f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3971f8) {
            ctx->pc = 0x397218u;
            goto label_397218;
        }
    }
    ctx->pc = 0x397200u;
    // 0x397200: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x397200u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x397204: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x397204u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x397208: 0xc0aa27c  jal         func_2A89F0
    ctx->pc = 0x397208u;
    SET_GPR_U32(ctx, 31, 0x397210u);
    ctx->pc = 0x39720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397208u;
    // 0x39720c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A89F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A89F0u, 0x397208u, 0x397210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397210u;
label_397210:
    // 0x397210: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x397210u;
    {
        const bool branch_taken_0x397210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397210u;
        // 0x397214: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397210) {
            ctx->pc = 0x397220u;
            goto label_397220;
        }
    }
    ctx->pc = 0x397218u;
label_397218:
    // 0x397218: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x397218u;
    SET_GPR_U32(ctx, 31, 0x397220u);
    ctx->pc = 0x39721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397218u;
    // 0x39721c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x397218u, 0x397220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397220u;
label_397220:
    // 0x397220: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x397220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x397224: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x397224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x397228: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x397228u;
    {
        const bool branch_taken_0x397228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397228u;
        // 0x39722c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397228) {
            ctx->pc = 0x397508u;
            goto label_397508;
        }
    }
    ctx->pc = 0x397230u;
label_397230:
    // 0x397230: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x397230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x397234: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x397234u;
    {
        const bool branch_taken_0x397234 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x397238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397234u;
        // 0x397238: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397234) {
            ctx->pc = 0x397248u;
            goto label_397248;
        }
    }
    ctx->pc = 0x39723Cu;
    // 0x39723c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39723cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x397240: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x397240u;
    {
        const bool branch_taken_0x397240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397240u;
        // 0x397244: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x397240) {
            ctx->pc = 0x397260u;
            goto label_397260;
        }
    }
    ctx->pc = 0x397248u;
label_397248:
    // 0x397248: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x397248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39724c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39724cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x397250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x397250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x397254: 0x0  nop
    ctx->pc = 0x397254u;
    // NOP
    // 0x397258: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x397258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x39725c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x39725cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_397260:
    // 0x397260: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x397260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x397264: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x397264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x397268: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x397268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x39726c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x39726cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x397270: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x397270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x397274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x397274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x397278: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x397278u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39727c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39727cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x397280: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x397280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x397284: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x397284u;
    {
        const bool branch_taken_0x397284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x397284) {
            ctx->pc = 0x39729Cu;
            goto label_39729c;
        }
    }
    ctx->pc = 0x39728Cu;
    // 0x39728c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39728cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x397290: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x397290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x397294: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x397294u;
    {
        const bool branch_taken_0x397294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397294u;
        // 0x397298: 0xa6030512  sh          $v1, 0x512($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397294) {
            ctx->pc = 0x3972B8u;
            goto label_3972b8;
        }
    }
    ctx->pc = 0x39729Cu;
label_39729c:
    // 0x39729c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39729cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3972a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3972a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3972a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3972a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3972a8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3972a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3972ac: 0x0  nop
    ctx->pc = 0x3972acu;
    // NOP
    // 0x3972b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3972b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3972b4: 0xa6030512  sh          $v1, 0x512($s0)
    ctx->pc = 0x3972b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 3));
label_3972b8:
    // 0x3972b8: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3972b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3972bc: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3972bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3972c0: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3972c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3972c4: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3972c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3972c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3972c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3972cc: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3972ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3972d0:
    // 0x3972d0: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3972d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3972d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3972d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3972d8: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x3972D8u;
    SET_GPR_U32(ctx, 31, 0x3972E0u);
    ctx->pc = 0x3972DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3972D8u;
    // 0x3972dc: 0x240600b4  addiu       $a2, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x3972D8u, 0x3972E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972E0u;
label_3972e0:
    // 0x3972e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3972e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3972e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3972e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3972e8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3972e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3972ec: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x3972ECu;
    SET_GPR_U32(ctx, 31, 0x3972F4u);
    ctx->pc = 0x3972F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3972ECu;
    // 0x3972f0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x3972ECu, 0x3972F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3972F4u;
label_3972f4:
    // 0x3972f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3972f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3972f8: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x3972f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x3972fc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3972fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x397300: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x397300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x397304: 0xc0767dc  jal         func_1D9F70
    ctx->pc = 0x397304u;
    SET_GPR_U32(ctx, 31, 0x39730Cu);
    ctx->pc = 0x397308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397304u;
    // 0x397308: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x397304u, 0x39730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39730Cu;
label_39730c:
    // 0x39730c: 0xe6000554  swc1        $f0, 0x554($s0)
    ctx->pc = 0x39730cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1364), bits); }
    // 0x397310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397314: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x397314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x397318: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x397318u;
    SET_GPR_U32(ctx, 31, 0x397320u);
    ctx->pc = 0x39731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397318u;
    // 0x39731c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x397318u, 0x397320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397320u;
label_397320:
    // 0x397320: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x397320u;
    {
        const bool branch_taken_0x397320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397320u;
        // 0x397324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397320) {
            ctx->pc = 0x397330u;
            goto label_397330;
        }
    }
    ctx->pc = 0x397328u;
    // 0x397328: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x397328u;
    SET_GPR_U32(ctx, 31, 0x397330u);
    ctx->pc = 0x39732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397328u;
    // 0x39732c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x397328u, 0x397330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397330u;
label_397330:
    // 0x397330: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x397330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x397334: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x397334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x397338: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x397338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x39733c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x39733cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x397340: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x397340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x397344: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x397344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x397348: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x397348u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x39734c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x39734cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x397350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x397350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x397354: 0x0  nop
    ctx->pc = 0x397354u;
    // NOP
    // 0x397358: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x397358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39735c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39735cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x397360: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x397360u;
    {
        const bool branch_taken_0x397360 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x397364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397360u;
        // 0x397364: 0x86050510  lh          $a1, 0x510($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397360) {
            ctx->pc = 0x397378u;
            goto label_397378;
        }
    }
    ctx->pc = 0x397368u;
    // 0x397368: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x397368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39736c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39736cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x397370: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x397370u;
    {
        const bool branch_taken_0x397370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397370u;
        // 0x397374: 0xa4182b  sltu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x397370) {
            ctx->pc = 0x397394u;
            goto label_397394;
        }
    }
    ctx->pc = 0x397378u;
label_397378:
    // 0x397378: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x397378u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39737c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39737cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x397380: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x397380u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x397384: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x397384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x397388: 0x0  nop
    ctx->pc = 0x397388u;
    // NOP
    // 0x39738c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x39738cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x397390: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x397390u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_397394:
    // 0x397394: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x397394u;
    {
        const bool branch_taken_0x397394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x397394) {
            ctx->pc = 0x397460u;
            goto label_397460;
        }
    }
    ctx->pc = 0x39739Cu;
    // 0x39739c: 0x3c04445c  lui         $a0, 0x445C
    ctx->pc = 0x39739cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17500 << 16));
    // 0x3973a0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3973a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3973a4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3973a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3973a8: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3973a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3973ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3973acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3973b0: 0x0  nop
    ctx->pc = 0x3973b0u;
    // NOP
    // 0x3973b4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3973b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3973b8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3973b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3973bc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3973bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3973c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3973c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3973c4: 0x0  nop
    ctx->pc = 0x3973c4u;
    // NOP
    // 0x3973c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3973c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3973cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3973CCu;
    {
        const bool branch_taken_0x3973cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3973cc) {
            ctx->pc = 0x3973E4u;
            goto label_3973e4;
        }
    }
    ctx->pc = 0x3973D4u;
    // 0x3973d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3973d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3973d8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3973d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3973dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3973DCu;
    {
        const bool branch_taken_0x3973dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3973E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3973DCu;
        // 0x3973e0: 0x85082b  sltu        $at, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3973dc) {
            ctx->pc = 0x397400u;
            goto label_397400;
        }
    }
    ctx->pc = 0x3973E4u;
label_3973e4:
    // 0x3973e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3973e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3973e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3973e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3973ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3973ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3973f0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3973f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3973f4: 0x0  nop
    ctx->pc = 0x3973f4u;
    // NOP
    // 0x3973f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3973f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3973fc: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x3973fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_397400:
    // 0x397400: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x397400u;
    {
        const bool branch_taken_0x397400 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x397404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397400u;
        // 0x397404: 0x3c010066  lui         $at, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397400) {
            ctx->pc = 0x397460u;
            goto label_397460;
        }
    }
    ctx->pc = 0x397408u;
    // 0x397408: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x397408u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x39740c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x39740cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 1), 23584)));
    // 0x397410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397414: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x397414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x397418: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x397418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39741c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x39741cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x397420: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x397420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x397424: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x397424u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x397428: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x397428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x39742c: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x39742cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x397430: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x397430u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x397434: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x397434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x397438: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x397438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x39743c: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x39743cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x397440: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x397440u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x397444: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x397444u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x397448: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x397448u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x39744c: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x39744cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x397450: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x397450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x397454: 0xc0c0900  jal         func_302400
    ctx->pc = 0x397454u;
    SET_GPR_U32(ctx, 31, 0x39745Cu);
    ctx->pc = 0x397458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397454u;
    // 0x397458: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x397454u, 0x39745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39745Cu;
label_39745c:
    // 0x39745c: 0x0  nop
    ctx->pc = 0x39745cu;
    // NOP
label_397460:
    // 0x397460: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x397460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x397464: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x397464u;
    {
        const bool branch_taken_0x397464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397464u;
        // 0x397468: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397464) {
            ctx->pc = 0x397478u;
            goto label_397478;
        }
    }
    ctx->pc = 0x39746Cu;
    // 0x39746c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x39746Cu;
    {
        const bool branch_taken_0x39746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39746c) {
            ctx->pc = 0x3974F8u;
            goto label_3974f8;
        }
    }
    ctx->pc = 0x397474u;
    // 0x397474: 0x0  nop
    ctx->pc = 0x397474u;
    // NOP
label_397478:
    // 0x397478: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x397478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x39747c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x39747cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x397480: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x397480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x397484: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x397484u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x397488: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x397488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x39748c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x39748Cu;
    {
        const bool branch_taken_0x39748c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x39748c) {
            ctx->pc = 0x3974C8u;
            goto label_3974c8;
        }
    }
    ctx->pc = 0x397494u;
    // 0x397494: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x397494u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x397498: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x397498u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x39749c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x39749Cu;
    {
        const bool branch_taken_0x39749c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3974A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39749Cu;
        // 0x3974a0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39749c) {
            ctx->pc = 0x3974F0u;
            goto label_3974f0;
        }
    }
    ctx->pc = 0x3974A4u;
    // 0x3974a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3974a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3974a8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3974a8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3974ac: 0x0  nop
    ctx->pc = 0x3974acu;
    // NOP
    // 0x3974b0: 0x0  nop
    ctx->pc = 0x3974b0u;
    // NOP
    // 0x3974b4: 0x2010  mfhi        $a0
    ctx->pc = 0x3974b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3974b8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3974b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3974bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3974BCu;
    {
        const bool branch_taken_0x3974bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3974C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974BCu;
        // 0x3974c0: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3974bc) {
            ctx->pc = 0x3974F0u;
            goto label_3974f0;
        }
    }
    ctx->pc = 0x3974C4u;
    // 0x3974c4: 0x0  nop
    ctx->pc = 0x3974c4u;
    // NOP
label_3974c8:
    // 0x3974c8: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3974c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3974cc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3974ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3974d0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3974D0u;
    {
        const bool branch_taken_0x3974d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3974d0) {
            ctx->pc = 0x3974F0u;
            goto label_3974f0;
        }
    }
    ctx->pc = 0x3974D8u;
    // 0x3974d8: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3974d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3974dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3974dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3974e0: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3974e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3974e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3974E4u;
    {
        const bool branch_taken_0x3974e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3974E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974E4u;
        // 0x3974e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3974e4) {
            ctx->pc = 0x3974F8u;
            goto label_3974f8;
        }
    }
    ctx->pc = 0x3974ECu;
    // 0x3974ec: 0x0  nop
    ctx->pc = 0x3974ecu;
    // NOP
label_3974f0:
    // 0x3974f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3974f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3974f4: 0x0  nop
    ctx->pc = 0x3974f4u;
    // NOP
label_3974f8:
    // 0x3974f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3974F8u;
    {
        const bool branch_taken_0x3974f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3974FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974F8u;
        // 0x3974fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3974f8) {
            ctx->pc = 0x397508u;
            goto label_397508;
        }
    }
    ctx->pc = 0x397500u;
    // 0x397500: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x397500u;
    SET_GPR_U32(ctx, 31, 0x397508u);
    ctx->pc = 0x397504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397500u;
    // 0x397504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x397500u, 0x397508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397508u;
label_397508:
    // 0x397508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x397508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39750c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39750cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397510: 0x3e00008  jr          $ra
    ctx->pc = 0x397510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397510u;
        // 0x397514: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397518u;
}
