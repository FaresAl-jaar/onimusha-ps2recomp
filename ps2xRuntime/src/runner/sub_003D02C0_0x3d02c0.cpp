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

// Function: sub_003D02C0
// Address: 0x3d02c0 - 0x3d0444
void sub_003D02C0_0x3d02c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D02C0_0x3d02c0");
#endif

    switch (ctx->pc) {
        case 0x3d0310u: goto label_3d0310;
        case 0x3d0338u: goto label_3d0338;
        case 0x3d03e4u: goto label_3d03e4;
        case 0x3d040cu: goto label_3d040c;
        default: break;
    }

    ctx->pc = 0x3d02c0u;

    // 0x3d02c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d02c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3d02c4: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d02c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3d02c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3d02c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3d02cc: 0x250800d0  addiu       $t0, $t0, 0xD0
    ctx->pc = 0x3d02ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 208));
    // 0x3d02d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d02d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3d02d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d02d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3d02d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3d02d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d02dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d02dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3d02e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3d02e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d02e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d02e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d02e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3d02e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d02ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d02ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d02f0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3d02f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d02f4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x3d02f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d02f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d02f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d02fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d02fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0300: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d0300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0304: 0x24070590  addiu       $a3, $zero, 0x590
    ctx->pc = 0x3d0304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
    // 0x3d0308: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3D0308u;
    SET_GPR_U32(ctx, 31, 0x3D0310u);
    ctx->pc = 0x3D030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0308u;
    // 0x3d030c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3D0308u, 0x3D0310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0310u;
label_3d0310:
    // 0x3d0310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d0310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0314: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3D0314u;
    {
        const bool branch_taken_0x3d0314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0314u;
        // 0x3d0318: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0314) {
            ctx->pc = 0x3D0418u;
            goto label_3d0418;
        }
    }
    ctx->pc = 0x3D031Cu;
    // 0x3d031c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3d031cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0320: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3d0320u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0324: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3d0324u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d0328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d032c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3d032cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3d0330: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3D0330u;
    SET_GPR_U32(ctx, 31, 0x3D0338u);
    ctx->pc = 0x3D0334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0330u;
    // 0x3d0334: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3D0330u, 0x3D0338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0338u;
label_3d0338:
    // 0x3d0338: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3d0338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3d033c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3d033cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3d0340: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3d0340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3d0344: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3d0344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3d0348: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d0348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d034c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d034cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3d0350: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3d0350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3d0354: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3d0354u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3d0358: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D0358u;
    {
        const bool branch_taken_0x3d0358 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3D035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0358u;
        // 0x3d035c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0358) {
            ctx->pc = 0x3D036Cu;
            goto label_3d036c;
        }
    }
    ctx->pc = 0x3D0360u;
    // 0x3d0360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d0360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d0364: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D0364u;
    {
        const bool branch_taken_0x3d0364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0364u;
        // 0x3d0368: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0364) {
            ctx->pc = 0x3D0384u;
            goto label_3d0384;
        }
    }
    ctx->pc = 0x3D036Cu;
label_3d036c:
    // 0x3d036c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d036cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d0370: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d0370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d0374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d0374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d0378: 0x0  nop
    ctx->pc = 0x3d0378u;
    // NOP
    // 0x3d037c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d037cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3d0380: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d0380u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d0384:
    // 0x3d0384: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x3d0384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x3d0388: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3d0388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x3d038c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3d038cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3d0390: 0x3c054370  lui         $a1, 0x4370
    ctx->pc = 0x3d0390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17264 << 16));
    // 0x3d0394: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d0394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d0398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d0398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d039c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d039cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d03a0: 0x0  nop
    ctx->pc = 0x3d03a0u;
    // NOP
    // 0x3d03a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d03a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d03a8: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d03a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d03ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d03acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d03b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3d03b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3d03b4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3d03b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d03b8: 0x0  nop
    ctx->pc = 0x3d03b8u;
    // NOP
    // 0x3d03bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d03bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d03c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d03c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d03c4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3d03c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3d03c8: 0x0  nop
    ctx->pc = 0x3d03c8u;
    // NOP
    // 0x3d03cc: 0xa6050526  sh          $a1, 0x526($s0)
    ctx->pc = 0x3d03ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 5));
    // 0x3d03d0: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3d03d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d03d4: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3d03d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d03d8: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3d03d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d03dc: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3D03DCu;
    SET_GPR_U32(ctx, 31, 0x3D03E4u);
    ctx->pc = 0x3D03E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D03DCu;
    // 0x3d03e0: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3D03DCu, 0x3D03E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D03E4u;
label_3d03e4:
    // 0x3d03e4: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3d03e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3d03e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d03e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d03ec: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3d03ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3d03f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d03f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d03f4: 0xa2000558  sb          $zero, 0x558($s0)
    ctx->pc = 0x3d03f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d03f8: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x3d03f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x3d03fc: 0xa200055a  sb          $zero, 0x55A($s0)
    ctx->pc = 0x3d03fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1370), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d0400: 0xae000580  sw          $zero, 0x580($s0)
    ctx->pc = 0x3d0400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
    // 0x3d0404: 0xc0f4058  jal         func_3D0160
    ctx->pc = 0x3D0404u;
    SET_GPR_U32(ctx, 31, 0x3D040Cu);
    ctx->pc = 0x3D0408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0404u;
    // 0x3d0408: 0xae000584  sw          $zero, 0x584($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0160u, 0x3D0404u, 0x3D040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D040Cu;
label_3d040c:
    // 0x3d040c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D040Cu;
    {
        const bool branch_taken_0x3d040c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D040Cu;
        // 0x3d0410: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d040c) {
            ctx->pc = 0x3D0420u;
            goto label_3d0420;
        }
    }
    ctx->pc = 0x3D0414u;
    // 0x3d0414: 0x0  nop
    ctx->pc = 0x3d0414u;
    // NOP
label_3d0418:
    // 0x3d0418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d0418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d041c: 0x0  nop
    ctx->pc = 0x3d041cu;
    // NOP
label_3d0420:
    // 0x3d0420: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3d0420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d0424: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d0424u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d0428: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d0428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d042c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d042cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d0430: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d0430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d0434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d0434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d0438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d0438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d043c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D043Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D043Cu;
        // 0x3d0440: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D043Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0444u;
}
