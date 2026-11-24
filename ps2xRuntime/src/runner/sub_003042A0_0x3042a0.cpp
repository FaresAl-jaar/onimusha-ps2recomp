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

// Function: sub_003042A0
// Address: 0x3042a0 - 0x304bf4
void sub_003042A0_0x3042a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003042A0_0x3042a0");
#endif

    switch (ctx->pc) {
        case 0x304300u: goto label_304300;
        case 0x304358u: goto label_304358;
        case 0x30442cu: goto label_30442c;
        case 0x304458u: goto label_304458;
        case 0x3044a8u: goto label_3044a8;
        case 0x3044b4u: goto label_3044b4;
        case 0x3045a4u: goto label_3045a4;
        case 0x304620u: goto label_304620;
        case 0x304630u: goto label_304630;
        case 0x30463cu: goto label_30463c;
        case 0x304738u: goto label_304738;
        case 0x3047e8u: goto label_3047e8;
        case 0x3047f4u: goto label_3047f4;
        case 0x3048f4u: goto label_3048f4;
        case 0x304970u: goto label_304970;
        case 0x304980u: goto label_304980;
        case 0x30498cu: goto label_30498c;
        case 0x304a8cu: goto label_304a8c;
        case 0x304af8u: goto label_304af8;
        case 0x304b98u: goto label_304b98;
        default: break;
    }

    ctx->pc = 0x3042a0u;

    // 0x3042a0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x3042a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x3042a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3042a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3042a8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3042a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x3042ac: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x3042acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3042b0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3042b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x3042b4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3042b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x3042b8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3042b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3042bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3042bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3042c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3042c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3042c4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3042c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3042c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3042c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3042cc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3042ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3042d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3042d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3042d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3042d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3042d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3042d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3042dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3042dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3042e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3042e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3042e4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3042e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3042e8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3042e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3042ec: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x3042ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3042f0: 0x0  nop
    ctx->pc = 0x3042f0u;
    // NOP
    // 0x3042f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3042f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3042f8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3042F8u;
    {
        const bool branch_taken_0x3042f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3042FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042F8u;
        // 0x3042fc: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042f8) {
            ctx->pc = 0x30431Cu;
            goto label_30431c;
        }
    }
    ctx->pc = 0x304300u;
label_304300:
    // 0x304300: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x304300u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x304304: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x304304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x304308: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x304308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30430c: 0x0  nop
    ctx->pc = 0x30430cu;
    // NOP
    // 0x304310: 0x0  nop
    ctx->pc = 0x304310u;
    // NOP
    // 0x304314: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x304314u;
    {
        const bool branch_taken_0x304314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304314) {
            ctx->pc = 0x304300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304300;
        }
    }
    ctx->pc = 0x30431Cu;
label_30431c:
    // 0x30431c: 0x8e421c00  lw          $v0, 0x1C00($s2)
    ctx->pc = 0x30431cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7168)));
    // 0x304320: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x304320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x304324: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x304324u;
    {
        const bool branch_taken_0x304324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304324) {
            ctx->pc = 0x30433Cu;
            goto label_30433c;
        }
    }
    ctx->pc = 0x30432Cu;
    // 0x30432c: 0x96421e0e  lhu         $v0, 0x1E0E($s2)
    ctx->pc = 0x30432cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 7694)));
    // 0x304330: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x304330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x304334: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x304334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x304338: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x304338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_30433c:
    // 0x30433c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30433Cu;
    {
        const bool branch_taken_0x30433c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30433Cu;
        // 0x304340: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30433c) {
            ctx->pc = 0x304360u;
            goto label_304360;
        }
    }
    ctx->pc = 0x304344u;
    // 0x304344: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x304344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x304348: 0x26461c00  addiu       $a2, $s2, 0x1C00
    ctx->pc = 0x304348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 7168));
    // 0x30434c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x30434cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304350: 0xc0c1300  jal         func_304C00
    ctx->pc = 0x304350u;
    SET_GPR_U32(ctx, 31, 0x304358u);
    ctx->pc = 0x304354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304350u;
    // 0x304354: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304C00u, 0x304350u, 0x304358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304358u;
label_304358:
    // 0x304358: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x304358u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x30435c: 0x0  nop
    ctx->pc = 0x30435cu;
    // NOP
label_304360:
    // 0x304360: 0x8e431d04  lw          $v1, 0x1D04($s2)
    ctx->pc = 0x304360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 7428)));
    // 0x304364: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x304364u;
    {
        const bool branch_taken_0x304364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304364u;
        // 0x304368: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304364) {
            ctx->pc = 0x304388u;
            goto label_304388;
        }
    }
    ctx->pc = 0x30436Cu;
    // 0x30436c: 0x96421e0e  lhu         $v0, 0x1E0E($s2)
    ctx->pc = 0x30436cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 7694)));
    // 0x304370: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x304370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x304374: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x304374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x304378: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x304378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30437c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30437Cu;
    {
        const bool branch_taken_0x30437c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30437c) {
            ctx->pc = 0x304388u;
            goto label_304388;
        }
    }
    ctx->pc = 0x304384u;
    // 0x304384: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x304384u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_304388:
    // 0x304388: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x304388u;
    {
        const bool branch_taken_0x304388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x304388) {
            ctx->pc = 0x304430u;
            goto label_304430;
        }
    }
    ctx->pc = 0x304390u;
    // 0x304390: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x304390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x304394: 0xc6250000  lwc1        $f5, 0x0($s1)
    ctx->pc = 0x304394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x304398: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x304398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30439c: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x30439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3043a0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3043a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3043a4: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x3043a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3043a8: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3043a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3043ac: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x3043acu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x3043b0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3043b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3043b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3043b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3043b8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3043b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3043bc: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3043bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3043c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3043c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3043c4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3043c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3043c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3043c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3043cc: 0x4a00010  bltz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3043CCu;
    {
        const bool branch_taken_0x3043cc = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x3043cc) {
            ctx->pc = 0x304410u;
            goto label_304410;
        }
    }
    ctx->pc = 0x3043D4u;
    // 0x3043d4: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x3043d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3043d8: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x3043d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3043dc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x3043DCu;
    {
        const bool branch_taken_0x3043dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3043dc) {
            ctx->pc = 0x304410u;
            goto label_304410;
        }
    }
    ctx->pc = 0x3043E4u;
    // 0x3043e4: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3043E4u;
    {
        const bool branch_taken_0x3043e4 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x3043e4) {
            ctx->pc = 0x304410u;
            goto label_304410;
        }
    }
    ctx->pc = 0x3043ECu;
    // 0x3043ec: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x3043ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x3043f0: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x3043f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3043f4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3043F4u;
    {
        const bool branch_taken_0x3043f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3043F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043F4u;
        // 0x3043f8: 0x831018  mult        $v0, $a0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3043f4) {
            ctx->pc = 0x304410u;
            goto label_304410;
        }
    }
    ctx->pc = 0x3043FCu;
    // 0x3043fc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3043fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x304400: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x304400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x304404: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x304404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x304408: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x304408u;
    {
        const bool branch_taken_0x304408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304408u;
        // 0x30440c: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304408) {
            ctx->pc = 0x304418u;
            goto label_304418;
        }
    }
    ctx->pc = 0x304410u;
label_304410:
    // 0x304410: 0x8cc60018  lw          $a2, 0x18($a2)
    ctx->pc = 0x304410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x304414: 0x0  nop
    ctx->pc = 0x304414u;
    // NOP
label_304418:
    // 0x304418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x304418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30441c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x30441cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304420: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x304420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304424: 0xc0c1300  jal         func_304C00
    ctx->pc = 0x304424u;
    SET_GPR_U32(ctx, 31, 0x30442Cu);
    ctx->pc = 0x304428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304424u;
    // 0x304428: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304C00u, 0x304424u, 0x30442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30442Cu;
label_30442c:
    // 0x30442c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x30442cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_304430:
    // 0x304430: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x304430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x304434: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x304434u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x304438: 0x102001a5  beqz        $at, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x304438u;
    {
        const bool branch_taken_0x304438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304438u;
        // 0x30443c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304438) {
            ctx->pc = 0x304AD0u;
            goto label_304ad0;
        }
    }
    ctx->pc = 0x304440u;
    // 0x304440: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x304440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x304444: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x304444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304448: 0x27b600e4  addiu       $s6, $sp, 0xE4
    ctx->pc = 0x304448u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x30444c: 0x27b700e8  addiu       $s7, $sp, 0xE8
    ctx->pc = 0x30444cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x304450: 0x27be00d4  addiu       $fp, $sp, 0xD4
    ctx->pc = 0x304450u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x304454: 0x0  nop
    ctx->pc = 0x304454u;
    // NOP
label_304458:
    // 0x304458: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x304458u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30445c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x304460: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x304460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x304464: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x304464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x304468: 0x1062012d  beq         $v1, $v0, . + 4 + (0x12D << 2)
    ctx->pc = 0x304468u;
    {
        const bool branch_taken_0x304468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304468u;
        // 0x30446c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304468) {
            ctx->pc = 0x304920u;
            goto label_304920;
        }
    }
    ctx->pc = 0x304470u;
    // 0x304470: 0x106200bb  beq         $v1, $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x304470u;
    {
        const bool branch_taken_0x304470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x304470) {
            ctx->pc = 0x304760u;
            goto label_304760;
        }
    }
    ctx->pc = 0x304478u;
    // 0x304478: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x304478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30447c: 0x10620054  beq         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x30447Cu;
    {
        const bool branch_taken_0x30447c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30447Cu;
        // 0x304480: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30447c) {
            ctx->pc = 0x3045D0u;
            goto label_3045d0;
        }
    }
    ctx->pc = 0x304484u;
    // 0x304484: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304484u;
    {
        const bool branch_taken_0x304484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x304484) {
            ctx->pc = 0x304498u;
            goto label_304498;
        }
    }
    ctx->pc = 0x30448Cu;
    // 0x30448c: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x30448Cu;
    {
        const bool branch_taken_0x30448c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30448c) {
            ctx->pc = 0x304AB0u;
            goto label_304ab0;
        }
    }
    ctx->pc = 0x304494u;
    // 0x304494: 0x0  nop
    ctx->pc = 0x304494u;
    // NOP
label_304498:
    // 0x304498: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x304498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30449c: 0xc64c001c  lwc1        $f12, 0x1C($s2)
    ctx->pc = 0x30449cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3044a0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3044A0u;
    SET_GPR_U32(ctx, 31, 0x3044A8u);
    ctx->pc = 0x3044A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3044A0u;
    // 0x3044a4: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3044A0u, 0x3044A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3044A8u;
label_3044a8:
    // 0x3044a8: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x3044a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3044ac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3044ACu;
    {
        const bool branch_taken_0x3044ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3044B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044ACu;
        // 0x3044b0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044ac) {
            ctx->pc = 0x3044D0u;
            goto label_3044d0;
        }
    }
    ctx->pc = 0x3044B4u;
label_3044b4:
    // 0x3044b4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3044b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3044b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3044b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3044bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3044bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3044c0: 0x0  nop
    ctx->pc = 0x3044c0u;
    // NOP
    // 0x3044c4: 0x0  nop
    ctx->pc = 0x3044c4u;
    // NOP
    // 0x3044c8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3044C8u;
    {
        const bool branch_taken_0x3044c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3044c8) {
            ctx->pc = 0x3044B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3044b4;
        }
    }
    ctx->pc = 0x3044D0u;
label_3044d0:
    // 0x3044d0: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x3044d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3044d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3044D4u;
    {
        const bool branch_taken_0x3044d4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3044D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044D4u;
        // 0x3044d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044d4) {
            ctx->pc = 0x3044E8u;
            goto label_3044e8;
        }
    }
    ctx->pc = 0x3044DCu;
    // 0x3044dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3044dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3044e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3044E0u;
    {
        const bool branch_taken_0x3044e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3044E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3044E0u;
        // 0x3044e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3044e0) {
            ctx->pc = 0x304500u;
            goto label_304500;
        }
    }
    ctx->pc = 0x3044E8u;
label_3044e8:
    // 0x3044e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3044e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3044ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3044ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3044f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3044f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3044f4: 0x0  nop
    ctx->pc = 0x3044f4u;
    // NOP
    // 0x3044f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3044f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3044fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3044fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_304500:
    // 0x304500: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x304500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x304504: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x304504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x304508: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x304508u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x30450c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30450cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304510: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304510u;
    {
        const bool branch_taken_0x304510 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x304514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304510u;
        // 0x304514: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304510) {
            ctx->pc = 0x304524u;
            goto label_304524;
        }
    }
    ctx->pc = 0x304518u;
    // 0x304518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30451c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30451Cu;
    {
        const bool branch_taken_0x30451c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30451Cu;
        // 0x304520: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30451c) {
            ctx->pc = 0x30453Cu;
            goto label_30453c;
        }
    }
    ctx->pc = 0x304524u;
label_304524:
    // 0x304524: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x304524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x304528: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x304528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30452c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30452cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304530: 0x0  nop
    ctx->pc = 0x304530u;
    // NOP
    // 0x304534: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304538: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x304538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30453c:
    // 0x30453c: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x30453cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x304540: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x304540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x304544: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x304544u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x304548: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x304548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30454c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30454Cu;
    {
        const bool branch_taken_0x30454c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x304550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30454Cu;
        // 0x304550: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30454c) {
            ctx->pc = 0x304560u;
            goto label_304560;
        }
    }
    ctx->pc = 0x304554u;
    // 0x304554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304558: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x304558u;
    {
        const bool branch_taken_0x304558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304558u;
        // 0x30455c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304558) {
            ctx->pc = 0x304578u;
            goto label_304578;
        }
    }
    ctx->pc = 0x304560u;
label_304560:
    // 0x304560: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x304560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x304564: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x304564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x304568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30456c: 0x0  nop
    ctx->pc = 0x30456cu;
    // NOP
    // 0x304570: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304574: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x304574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_304578:
    // 0x304578: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x304578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x30457c: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x30457cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x304580: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x304580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304584: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x304584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x304588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30458c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30458cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304590: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x304590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x304594: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x304594u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x304598: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x304598u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30459c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x30459Cu;
    SET_GPR_U32(ctx, 31, 0x3045A4u);
    ctx->pc = 0x3045A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30459Cu;
    // 0x3045a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x30459Cu, 0x3045A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3045A4u;
label_3045a4:
    // 0x3045a4: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x3045a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3045a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3045a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3045ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3045acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3045b0: 0x0  nop
    ctx->pc = 0x3045b0u;
    // NOP
    // 0x3045b4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x3045b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x3045b8: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x3045b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x3045bc: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x3045bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3045c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3045c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3045c4: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x3045C4u;
    {
        const bool branch_taken_0x3045c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3045C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045C4u;
        // 0x3045c8: 0xe6a0000c  swc1        $f0, 0xC($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045c4) {
            ctx->pc = 0x304AB0u;
            goto label_304ab0;
        }
    }
    ctx->pc = 0x3045CCu;
    // 0x3045cc: 0x0  nop
    ctx->pc = 0x3045ccu;
    // NOP
label_3045d0:
    // 0x3045d0: 0xc642003c  lwc1        $f2, 0x3C($s2)
    ctx->pc = 0x3045d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3045d4: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x3045d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3045d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3045d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3045dc: 0x0  nop
    ctx->pc = 0x3045dcu;
    // NOP
    // 0x3045e0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3045e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3045e4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3045e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3045e8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3045E8u;
    {
        const bool branch_taken_0x3045e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3045ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045E8u;
        // 0x3045ec: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045e8) {
            ctx->pc = 0x3045FCu;
            goto label_3045fc;
        }
    }
    ctx->pc = 0x3045F0u;
    // 0x3045f0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3045f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3045f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3045F4u;
    {
        const bool branch_taken_0x3045f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3045F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3045F4u;
        // 0x3045f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3045f4) {
            ctx->pc = 0x304618u;
            goto label_304618;
        }
    }
    ctx->pc = 0x3045FCu;
label_3045fc:
    // 0x3045fc: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x3045fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304600: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x304600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x304604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304608: 0x0  nop
    ctx->pc = 0x304608u;
    // NOP
    // 0x30460c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30460cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x304610: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x304610u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x304614: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x304614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_304618:
    // 0x304618: 0xc041472  jal         func_1051C8
    ctx->pc = 0x304618u;
    SET_GPR_U32(ctx, 31, 0x304620u);
    ctx->pc = 0x30461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304618u;
    // 0x30461c: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x304618u, 0x304620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304620u;
label_304620:
    // 0x304620: 0xc64c001c  lwc1        $f12, 0x1C($s2)
    ctx->pc = 0x304620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x304624: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x304624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304628: 0xc0414dc  jal         func_105370
    ctx->pc = 0x304628u;
    SET_GPR_U32(ctx, 31, 0x304630u);
    ctx->pc = 0x30462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304628u;
    // 0x30462c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x304628u, 0x304630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304630u;
label_304630:
    // 0x304630: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x304630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x304634: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x304634u;
    {
        const bool branch_taken_0x304634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304634u;
        // 0x304638: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304634) {
            ctx->pc = 0x304658u;
            goto label_304658;
        }
    }
    ctx->pc = 0x30463Cu;
label_30463c:
    // 0x30463c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x30463cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x304640: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x304640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x304644: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x304644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x304648: 0x0  nop
    ctx->pc = 0x304648u;
    // NOP
    // 0x30464c: 0x0  nop
    ctx->pc = 0x30464cu;
    // NOP
    // 0x304650: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x304650u;
    {
        const bool branch_taken_0x304650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304650) {
            ctx->pc = 0x30463Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30463c;
        }
    }
    ctx->pc = 0x304658u;
label_304658:
    // 0x304658: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x304658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x30465c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30465Cu;
    {
        const bool branch_taken_0x30465c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x304660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30465Cu;
        // 0x304660: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30465c) {
            ctx->pc = 0x304670u;
            goto label_304670;
        }
    }
    ctx->pc = 0x304664u;
    // 0x304664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304668: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x304668u;
    {
        const bool branch_taken_0x304668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304668u;
        // 0x30466c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304668) {
            ctx->pc = 0x304688u;
            goto label_304688;
        }
    }
    ctx->pc = 0x304670u;
label_304670:
    // 0x304670: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x304670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x304674: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x304674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x304678: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30467c: 0x0  nop
    ctx->pc = 0x30467cu;
    // NOP
    // 0x304680: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304684: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x304684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_304688:
    // 0x304688: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x304688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x30468c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x30468cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x304690: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x304690u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x304694: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x304694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304698: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304698u;
    {
        const bool branch_taken_0x304698 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x30469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304698u;
        // 0x30469c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304698) {
            ctx->pc = 0x3046ACu;
            goto label_3046ac;
        }
    }
    ctx->pc = 0x3046A0u;
    // 0x3046a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3046a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3046a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3046A4u;
    {
        const bool branch_taken_0x3046a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3046A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046A4u;
        // 0x3046a8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046a4) {
            ctx->pc = 0x3046C4u;
            goto label_3046c4;
        }
    }
    ctx->pc = 0x3046ACu;
label_3046ac:
    // 0x3046ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3046acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3046b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3046b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3046b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3046b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3046b8: 0x0  nop
    ctx->pc = 0x3046b8u;
    // NOP
    // 0x3046bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3046bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3046c0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3046c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3046c4:
    // 0x3046c4: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x3046c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x3046c8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3046c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3046cc: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x3046ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3046d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3046d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3046d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3046D4u;
    {
        const bool branch_taken_0x3046d4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3046D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046D4u;
        // 0x3046d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046d4) {
            ctx->pc = 0x3046E8u;
            goto label_3046e8;
        }
    }
    ctx->pc = 0x3046DCu;
    // 0x3046dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3046dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3046e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3046E0u;
    {
        const bool branch_taken_0x3046e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3046E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046E0u;
        // 0x3046e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046e0) {
            ctx->pc = 0x304700u;
            goto label_304700;
        }
    }
    ctx->pc = 0x3046E8u;
label_3046e8:
    // 0x3046e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3046e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3046ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3046ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3046f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3046f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3046f4: 0x0  nop
    ctx->pc = 0x3046f4u;
    // NOP
    // 0x3046f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3046f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3046fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3046fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_304700:
    // 0x304700: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x304700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x304704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304708: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x304708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x30470c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x30470cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x304710: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x304710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304714: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x304714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x304718: 0x4615a082  mul.s       $f2, $f20, $f21
    ctx->pc = 0x304718u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x30471c: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x30471cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x304720: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x304720u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x304724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304728: 0x0  nop
    ctx->pc = 0x304728u;
    // NOP
    // 0x30472c: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x30472cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x304730: 0xc0414dc  jal         func_105370
    ctx->pc = 0x304730u;
    SET_GPR_U32(ctx, 31, 0x304738u);
    ctx->pc = 0x304734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304730u;
    // 0x304734: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x304730u, 0x304738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304738u;
label_304738:
    // 0x304738: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x304738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30473c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30473cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x304740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304744: 0x0  nop
    ctx->pc = 0x304744u;
    // NOP
    // 0x304748: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x304748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x30474c: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x30474cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x304750: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x304750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304754: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x304754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x304758: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x304758u;
    {
        const bool branch_taken_0x304758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304758u;
        // 0x30475c: 0xe6a0000c  swc1        $f0, 0xC($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304758) {
            ctx->pc = 0x304AB0u;
            goto label_304ab0;
        }
    }
    ctx->pc = 0x304760u;
label_304760:
    // 0x304760: 0xc642004c  lwc1        $f2, 0x4C($s2)
    ctx->pc = 0x304760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304764: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x304764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304768: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x304768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30476c: 0x0  nop
    ctx->pc = 0x30476cu;
    // NOP
    // 0x304770: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x304770u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x304774: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x304774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304778: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x304778u;
    {
        const bool branch_taken_0x304778 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304778u;
        // 0x30477c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304778) {
            ctx->pc = 0x304790u;
            goto label_304790;
        }
    }
    ctx->pc = 0x304780u;
    // 0x304780: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x304780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x304784: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x304784u;
    {
        const bool branch_taken_0x304784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304784) {
            ctx->pc = 0x3047A8u;
            goto label_3047a8;
        }
    }
    ctx->pc = 0x30478Cu;
    // 0x30478c: 0x0  nop
    ctx->pc = 0x30478cu;
    // NOP
label_304790:
    // 0x304790: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x304790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x304794: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x304794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30479c: 0x0  nop
    ctx->pc = 0x30479cu;
    // NOP
    // 0x3047a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3047a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3047a4: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x3047a4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3047a8:
    // 0x3047a8: 0xc641005c  lwc1        $f1, 0x5C($s2)
    ctx->pc = 0x3047a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3047ac: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x3047acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3047b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3047b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3047b4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3047B4u;
    {
        const bool branch_taken_0x3047b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3047B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047B4u;
        // 0x3047b8: 0x46000881  sub.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047b4) {
            ctx->pc = 0x3047D8u;
            goto label_3047d8;
        }
    }
    ctx->pc = 0x3047BCu;
    // 0x3047bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3047bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3047c0: 0xc6410050  lwc1        $f1, 0x50($s2)
    ctx->pc = 0x3047c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3047c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3047c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3047c8: 0x0  nop
    ctx->pc = 0x3047c8u;
    // NOP
    // 0x3047cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3047ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3047d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3047d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3047d4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3047d4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3047d8:
    // 0x3047d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3047d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3047dc: 0xc64c001c  lwc1        $f12, 0x1C($s2)
    ctx->pc = 0x3047dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3047e0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3047E0u;
    SET_GPR_U32(ctx, 31, 0x3047E8u);
    ctx->pc = 0x3047E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3047E0u;
    // 0x3047e4: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3047E0u, 0x3047E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3047E8u;
label_3047e8:
    // 0x3047e8: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x3047e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3047ec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3047ECu;
    {
        const bool branch_taken_0x3047ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3047F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047ECu;
        // 0x3047f0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047ec) {
            ctx->pc = 0x304810u;
            goto label_304810;
        }
    }
    ctx->pc = 0x3047F4u;
label_3047f4:
    // 0x3047f4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3047f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3047f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3047f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3047fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3047fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x304800: 0x0  nop
    ctx->pc = 0x304800u;
    // NOP
    // 0x304804: 0x0  nop
    ctx->pc = 0x304804u;
    // NOP
    // 0x304808: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x304808u;
    {
        const bool branch_taken_0x304808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304808) {
            ctx->pc = 0x3047F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3047f4;
        }
    }
    ctx->pc = 0x304810u;
label_304810:
    // 0x304810: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x304810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x304814: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304814u;
    {
        const bool branch_taken_0x304814 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x304818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304814u;
        // 0x304818: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304814) {
            ctx->pc = 0x304828u;
            goto label_304828;
        }
    }
    ctx->pc = 0x30481Cu;
    // 0x30481c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30481cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304820: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x304820u;
    {
        const bool branch_taken_0x304820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304820u;
        // 0x304824: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304820) {
            ctx->pc = 0x304840u;
            goto label_304840;
        }
    }
    ctx->pc = 0x304828u;
label_304828:
    // 0x304828: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x304828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30482c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30482cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x304830: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304830u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304834: 0x0  nop
    ctx->pc = 0x304834u;
    // NOP
    // 0x304838: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30483c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30483cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_304840:
    // 0x304840: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x304840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x304844: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x304844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x304848: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x304848u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x30484c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30484cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304850: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304850u;
    {
        const bool branch_taken_0x304850 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x304854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304850u;
        // 0x304854: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304850) {
            ctx->pc = 0x304864u;
            goto label_304864;
        }
    }
    ctx->pc = 0x304858u;
    // 0x304858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30485c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30485Cu;
    {
        const bool branch_taken_0x30485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30485Cu;
        // 0x304860: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30485c) {
            ctx->pc = 0x30487Cu;
            goto label_30487c;
        }
    }
    ctx->pc = 0x304864u;
label_304864:
    // 0x304864: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x304864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x304868: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x304868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30486c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30486cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304870: 0x0  nop
    ctx->pc = 0x304870u;
    // NOP
    // 0x304874: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304878: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x304878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30487c:
    // 0x30487c: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x30487cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x304880: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x304880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x304884: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x304884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x304888: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x304888u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x30488c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30488cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304890: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304890u;
    {
        const bool branch_taken_0x304890 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x304894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304890u;
        // 0x304894: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304890) {
            ctx->pc = 0x3048A4u;
            goto label_3048a4;
        }
    }
    ctx->pc = 0x304898u;
    // 0x304898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30489c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30489Cu;
    {
        const bool branch_taken_0x30489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3048A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30489Cu;
        // 0x3048a0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30489c) {
            ctx->pc = 0x3048BCu;
            goto label_3048bc;
        }
    }
    ctx->pc = 0x3048A4u;
label_3048a4:
    // 0x3048a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3048a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3048a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3048a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3048ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3048acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3048b0: 0x0  nop
    ctx->pc = 0x3048b0u;
    // NOP
    // 0x3048b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3048b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3048b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3048b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3048bc:
    // 0x3048bc: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x3048bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x3048c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3048c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3048c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3048c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3048c8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x3048c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3048cc: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x3048ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3048d0: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x3048d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x3048d4: 0x4615a082  mul.s       $f2, $f20, $f21
    ctx->pc = 0x3048d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x3048d8: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x3048d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x3048dc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3048dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3048e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3048e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3048e4: 0x0  nop
    ctx->pc = 0x3048e4u;
    // NOP
    // 0x3048e8: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x3048e8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3048ec: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3048ECu;
    SET_GPR_U32(ctx, 31, 0x3048F4u);
    ctx->pc = 0x3048F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3048ECu;
    // 0x3048f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3048ECu, 0x3048F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3048F4u;
label_3048f4:
    // 0x3048f4: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x3048f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3048f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3048f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3048fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3048fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304900: 0x0  nop
    ctx->pc = 0x304900u;
    // NOP
    // 0x304904: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x304904u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x304908: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x304908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x30490c: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x30490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304910: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x304910u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x304914: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x304914u;
    {
        const bool branch_taken_0x304914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304914u;
        // 0x304918: 0xe6a0000c  swc1        $f0, 0xC($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304914) {
            ctx->pc = 0x304AB0u;
            goto label_304ab0;
        }
    }
    ctx->pc = 0x30491Cu;
    // 0x30491c: 0x0  nop
    ctx->pc = 0x30491cu;
    // NOP
label_304920:
    // 0x304920: 0xc642004c  lwc1        $f2, 0x4C($s2)
    ctx->pc = 0x304920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x304924: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x304924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304928: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x304928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30492c: 0x0  nop
    ctx->pc = 0x30492cu;
    // NOP
    // 0x304930: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x304930u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x304934: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x304934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304938: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x304938u;
    {
        const bool branch_taken_0x304938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304938u;
        // 0x30493c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304938) {
            ctx->pc = 0x30494Cu;
            goto label_30494c;
        }
    }
    ctx->pc = 0x304940u;
    // 0x304940: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x304940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x304944: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x304944u;
    {
        const bool branch_taken_0x304944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304944u;
        // 0x304948: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304944) {
            ctx->pc = 0x304968u;
            goto label_304968;
        }
    }
    ctx->pc = 0x30494Cu;
label_30494c:
    // 0x30494c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x30494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304950: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x304950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x304954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304958: 0x0  nop
    ctx->pc = 0x304958u;
    // NOP
    // 0x30495c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30495cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x304960: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x304960u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x304964: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x304964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_304968:
    // 0x304968: 0xc041472  jal         func_1051C8
    ctx->pc = 0x304968u;
    SET_GPR_U32(ctx, 31, 0x304970u);
    ctx->pc = 0x30496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304968u;
    // 0x30496c: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x304968u, 0x304970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304970u;
label_304970:
    // 0x304970: 0xc64c001c  lwc1        $f12, 0x1C($s2)
    ctx->pc = 0x304970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x304974: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x304974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304978: 0xc0414dc  jal         func_105370
    ctx->pc = 0x304978u;
    SET_GPR_U32(ctx, 31, 0x304980u);
    ctx->pc = 0x30497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304978u;
    // 0x30497c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x304978u, 0x304980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304980u;
label_304980:
    // 0x304980: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x304980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x304984: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x304984u;
    {
        const bool branch_taken_0x304984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x304988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304984u;
        // 0x304988: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304984) {
            ctx->pc = 0x3049A8u;
            goto label_3049a8;
        }
    }
    ctx->pc = 0x30498Cu;
label_30498c:
    // 0x30498c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x30498cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x304990: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x304990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x304994: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x304994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x304998: 0x0  nop
    ctx->pc = 0x304998u;
    // NOP
    // 0x30499c: 0x0  nop
    ctx->pc = 0x30499cu;
    // NOP
    // 0x3049a0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3049A0u;
    {
        const bool branch_taken_0x3049a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3049a0) {
            ctx->pc = 0x30498Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30498c;
        }
    }
    ctx->pc = 0x3049A8u;
label_3049a8:
    // 0x3049a8: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x3049a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3049ac: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3049ACu;
    {
        const bool branch_taken_0x3049ac = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3049B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049ACu;
        // 0x3049b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049ac) {
            ctx->pc = 0x3049C0u;
            goto label_3049c0;
        }
    }
    ctx->pc = 0x3049B4u;
    // 0x3049b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3049b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3049b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3049B8u;
    {
        const bool branch_taken_0x3049b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3049BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049B8u;
        // 0x3049bc: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049b8) {
            ctx->pc = 0x3049D8u;
            goto label_3049d8;
        }
    }
    ctx->pc = 0x3049C0u;
label_3049c0:
    // 0x3049c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3049c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3049c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3049c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3049c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3049c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3049cc: 0x0  nop
    ctx->pc = 0x3049ccu;
    // NOP
    // 0x3049d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3049d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3049d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3049d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3049d8:
    // 0x3049d8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x3049d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3049dc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3049dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3049e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3049e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3049e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3049e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3049e8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3049E8u;
    {
        const bool branch_taken_0x3049e8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3049ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049E8u;
        // 0x3049ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049e8) {
            ctx->pc = 0x3049FCu;
            goto label_3049fc;
        }
    }
    ctx->pc = 0x3049F0u;
    // 0x3049f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3049f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3049f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3049F4u;
    {
        const bool branch_taken_0x3049f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3049F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3049F4u;
        // 0x3049f8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3049f4) {
            ctx->pc = 0x304A14u;
            goto label_304a14;
        }
    }
    ctx->pc = 0x3049FCu;
label_3049fc:
    // 0x3049fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3049fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x304a00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x304a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x304a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304a08: 0x0  nop
    ctx->pc = 0x304a08u;
    // NOP
    // 0x304a0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304a10: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x304a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_304a14:
    // 0x304a14: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x304a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x304a18: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x304a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x304a1c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x304a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x304a20: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x304a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x304a24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x304a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304a28: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x304A28u;
    {
        const bool branch_taken_0x304a28 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x304A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A28u;
        // 0x304a2c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a28) {
            ctx->pc = 0x304A3Cu;
            goto label_304a3c;
        }
    }
    ctx->pc = 0x304A30u;
    // 0x304a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304a34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x304A34u;
    {
        const bool branch_taken_0x304a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304A34u;
        // 0x304a38: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304a34) {
            ctx->pc = 0x304A54u;
            goto label_304a54;
        }
    }
    ctx->pc = 0x304A3Cu;
label_304a3c:
    // 0x304a3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x304a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x304a40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x304a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x304a44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304a44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304a48: 0x0  nop
    ctx->pc = 0x304a48u;
    // NOP
    // 0x304a4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x304a4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x304a50: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x304a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_304a54:
    // 0x304a54: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x304a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x304a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304a5c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x304a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x304a60: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x304a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x304a64: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x304a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304a68: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x304a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x304a6c: 0x4615a082  mul.s       $f2, $f20, $f21
    ctx->pc = 0x304a6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x304a70: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x304a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x304a74: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x304a74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x304a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304a7c: 0x0  nop
    ctx->pc = 0x304a7cu;
    // NOP
    // 0x304a80: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x304a80u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x304a84: 0xc0414dc  jal         func_105370
    ctx->pc = 0x304A84u;
    SET_GPR_U32(ctx, 31, 0x304A8Cu);
    ctx->pc = 0x304A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304A84u;
    // 0x304a88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x304A84u, 0x304A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A8Cu;
label_304a8c:
    // 0x304a8c: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x304a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304a90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x304a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x304a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x304a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x304a98: 0x0  nop
    ctx->pc = 0x304a98u;
    // NOP
    // 0x304a9c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x304a9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x304aa0: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x304aa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x304aa4: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x304aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304aa8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x304aa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x304aac: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x304aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
label_304ab0:
    // 0x304ab0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x304ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x304ab4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x304ab4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x304ab8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x304ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x304abc: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x304abcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x304ac0: 0x264102b  sltu        $v0, $s3, $a0
    ctx->pc = 0x304ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x304ac4: 0x1440fe64  bnez        $v0, . + 4 + (-0x19C << 2)
    ctx->pc = 0x304AC4u;
    {
        const bool branch_taken_0x304ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AC4u;
        // 0x304ac8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ac4) {
            ctx->pc = 0x304458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304458;
        }
    }
    ctx->pc = 0x304ACCu;
    // 0x304acc: 0x0  nop
    ctx->pc = 0x304accu;
    // NOP
label_304ad0:
    // 0x304ad0: 0x2c810004  sltiu       $at, $a0, 0x4
    ctx->pc = 0x304ad0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x304ad4: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x304AD4u;
    {
        const bool branch_taken_0x304ad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x304AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304AD4u;
        // 0x304ad8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ad4) {
            ctx->pc = 0x304BB8u;
            goto label_304bb8;
        }
    }
    ctx->pc = 0x304ADCu;
    // 0x304adc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x304adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x304ae0: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x304ae0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x304ae4: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x304AE4u;
    {
        const bool branch_taken_0x304ae4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x304ae4) {
            ctx->pc = 0x304B88u;
            goto label_304b88;
        }
    }
    ctx->pc = 0x304AECu;
    // 0x304aec: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x304aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x304af0: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x304af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x304af4: 0x0  nop
    ctx->pc = 0x304af4u;
    // NOP
label_304af8:
    // 0x304af8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x304af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x304afc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x304afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x304b00: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x304b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x304b04: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x304b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x304b08: 0x2c82fffc  sltiu       $v0, $a0, -0x4
    ctx->pc = 0x304b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4294967292) ? 1 : 0);
    // 0x304b0c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x304b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x304b10: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x304b10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x304b14: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x304b14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x304b18: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x304b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x304b1c: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x304b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x304b20: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x304b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x304b24: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x304b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x304b28: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x304b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x304b2c: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x304b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x304b30: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x304b30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x304b34: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x304b34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x304b38: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x304b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x304b3c: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x304b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x304b40: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x304b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x304b44: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x304b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x304b48: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x304b48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x304b4c: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x304b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x304b50: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x304b50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x304b54: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x304b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x304b58: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x304b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x304b5c: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x304b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x304b60: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x304b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x304b64: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x304b64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    // 0x304b68: 0xac600068  sw          $zero, 0x68($v1)
    ctx->pc = 0x304b68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
    // 0x304b6c: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x304b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
    // 0x304b70: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x304b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
    // 0x304b74: 0xac600074  sw          $zero, 0x74($v1)
    ctx->pc = 0x304b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 0));
    // 0x304b78: 0xac600078  sw          $zero, 0x78($v1)
    ctx->pc = 0x304b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
    // 0x304b7c: 0xac60007c  sw          $zero, 0x7C($v1)
    ctx->pc = 0x304b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 0));
    // 0x304b80: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x304B80u;
    {
        const bool branch_taken_0x304b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B80u;
        // 0x304b84: 0x24630080  addiu       $v1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b80) {
            ctx->pc = 0x304AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304af8;
        }
    }
    ctx->pc = 0x304B88u;
label_304b88:
    // 0x304b88: 0x2c810004  sltiu       $at, $a0, 0x4
    ctx->pc = 0x304b88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x304b8c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x304B8Cu;
    {
        const bool branch_taken_0x304b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x304B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304B8Cu;
        // 0x304b90: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304b8c) {
            ctx->pc = 0x304BB8u;
            goto label_304bb8;
        }
    }
    ctx->pc = 0x304B94u;
    // 0x304b94: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x304b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_304b98:
    // 0x304b98: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x304b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x304b9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x304b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x304ba0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x304ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x304ba4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x304ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x304ba8: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x304ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x304bac: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x304bacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x304bb0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x304BB0u;
    {
        const bool branch_taken_0x304bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x304BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BB0u;
        // 0x304bb4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304bb0) {
            ctx->pc = 0x304B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_304b98;
        }
    }
    ctx->pc = 0x304BB8u;
label_304bb8:
    // 0x304bb8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x304bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x304bbc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x304bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x304bc0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x304bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x304bc4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x304bc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x304bc8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x304bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x304bcc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x304bccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x304bd0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x304bd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x304bd4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x304bd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x304bd8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x304bd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x304bdc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x304bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x304be0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x304be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x304be4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x304be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304be8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x304be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304bec: 0x3e00008  jr          $ra
    ctx->pc = 0x304BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BECu;
        // 0x304bf0: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304BF4u;
}
