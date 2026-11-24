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

// Function: sub_0018F1C0
// Address: 0x18f1c0 - 0x18f334
void sub_0018F1C0_0x18f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F1C0_0x18f1c0");
#endif

    switch (ctx->pc) {
        case 0x18f2c4u: goto label_18f2c4;
        default: break;
    }

    ctx->pc = 0x18f1c0u;

    // 0x18f1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18f1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18f1c4: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x18f1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18f1c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18f1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18f1cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f1d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f1d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18f1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f1d8: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x18f1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x18f1dc: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x18f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x18f1e0: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18F1E0u;
    {
        const bool branch_taken_0x18f1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1E0u;
        // 0x18f1e4: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1e0) {
            ctx->pc = 0x18F208u;
            goto label_18f208;
        }
    }
    ctx->pc = 0x18F1E8u;
    // 0x18f1e8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x18f1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x18f1ec: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F1ECu;
    {
        const bool branch_taken_0x18f1ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x18F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1ECu;
        // 0x18f1f0: 0x310300ff  andi        $v1, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1ec) {
            ctx->pc = 0x18F208u;
            goto label_18f208;
        }
    }
    ctx->pc = 0x18F1F4u;
    // 0x18f1f4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F1F4u;
    {
        const bool branch_taken_0x18f1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x18f1f4) {
            ctx->pc = 0x18F208u;
            goto label_18f208;
        }
    }
    ctx->pc = 0x18F1FCu;
    // 0x18f1fc: 0x640800ff  daddiu      $t0, $zero, 0xFF
    ctx->pc = 0x18f1fcu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
    // 0x18f200: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x18f200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f204: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x18f204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18f208:
    // 0x18f208: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x18f208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x18f20c: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x18f20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x18f210: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x18f210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18f214: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x18f214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x18f218: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x18f218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x18f21c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x18f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x18f220: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x18f220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x18f224: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18f224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f228: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18f228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x18f22c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18f230: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x18F230u;
    {
        const bool branch_taken_0x18f230 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F230u;
        // 0x18f234: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f230) {
            ctx->pc = 0x18F2D0u;
            goto label_18f2d0;
        }
    }
    ctx->pc = 0x18F238u;
    // 0x18f238: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F238u;
    {
        const bool branch_taken_0x18f238 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F238u;
        // 0x18f23c: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f238) {
            ctx->pc = 0x18F24Cu;
            goto label_18f24c;
        }
    }
    ctx->pc = 0x18F240u;
    // 0x18f240: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x18f240u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f244: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18F244u;
    {
        const bool branch_taken_0x18f244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F244u;
        // 0x18f248: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f244) {
            ctx->pc = 0x18F264u;
            goto label_18f264;
        }
    }
    ctx->pc = 0x18F24Cu;
label_18f24c:
    // 0x18f24c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x18f24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x18f250: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18f250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18f254: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18f254u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f258: 0x0  nop
    ctx->pc = 0x18f258u;
    // NOP
    // 0x18f25c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x18f25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x18f260: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x18f260u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_18f264:
    // 0x18f264: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x18f264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18f268: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x18f268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x18f26c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x18f26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x18f270: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18f270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x18f274: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18f274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f27c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x18f27cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x18f280: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18f280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x18f284: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18f284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f288: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18F288u;
    {
        const bool branch_taken_0x18f288 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f288) {
            ctx->pc = 0x18F2A0u;
            goto label_18f2a0;
        }
    }
    ctx->pc = 0x18F290u;
    // 0x18f290: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18f290u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18f294: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x18f294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x18f298: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18F298u;
    {
        const bool branch_taken_0x18f298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F298u;
        // 0x18f29c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f298) {
            ctx->pc = 0x18F2BCu;
            goto label_18f2bc;
        }
    }
    ctx->pc = 0x18F2A0u;
label_18f2a0:
    // 0x18f2a0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x18f2a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18f2a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x18f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x18f2a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18f2a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18f2ac: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x18f2acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x18f2b0: 0x0  nop
    ctx->pc = 0x18f2b0u;
    // NOP
    // 0x18f2b4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x18f2b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x18f2b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18f2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18f2bc:
    // 0x18f2bc: 0xc096974  jal         func_25A5D0
    ctx->pc = 0x18F2BCu;
    SET_GPR_U32(ctx, 31, 0x18F2C4u);
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x18F2BCu, 0x18F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F2C4u;
label_18f2c4:
    // 0x18f2c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18F2C4u;
    {
        const bool branch_taken_0x18f2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2C4u;
        // 0x18f2c8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2c4) {
            ctx->pc = 0x18F2D8u;
            goto label_18f2d8;
        }
    }
    ctx->pc = 0x18F2CCu;
    // 0x18f2cc: 0x0  nop
    ctx->pc = 0x18f2ccu;
    // NOP
label_18f2d0:
    // 0x18f2d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18f2d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f2d4: 0x0  nop
    ctx->pc = 0x18f2d4u;
    // NOP
label_18f2d8:
    // 0x18f2d8: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x18f2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    // 0x18f2dc: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x18f2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x18f2e0: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x18f2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x18f2e4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F2E4u;
    {
        const bool branch_taken_0x18f2e4 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x18F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2E4u;
        // 0x18f2e8: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2e4) {
            ctx->pc = 0x18F300u;
            goto label_18f300;
        }
    }
    ctx->pc = 0x18F2ECu;
    // 0x18f2ec: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x18f2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x18f2f0: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x18f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x18f2f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18F2F4u;
    {
        const bool branch_taken_0x18f2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2F4u;
        // 0x18f2f8: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f2f4) {
            ctx->pc = 0x18F320u;
            goto label_18f320;
        }
    }
    ctx->pc = 0x18F2FCu;
    // 0x18f2fc: 0x0  nop
    ctx->pc = 0x18f2fcu;
    // NOP
label_18f300:
    // 0x18f300: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x18f300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x18f304: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18f304u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18f308: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x18f308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18f30c: 0x83182f  dsubu       $v1, $a0, $v1
    ctx->pc = 0x18f30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x18f310: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18f310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18f314: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x18f314u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x18f318: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x18f318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x18f31c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x18f31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_18f320:
    // 0x18f320: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18f320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f32c: 0x3e00008  jr          $ra
    ctx->pc = 0x18F32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F32Cu;
        // 0x18f330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F334u;
}
