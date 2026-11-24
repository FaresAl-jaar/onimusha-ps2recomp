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

// Function: sub_0017C440
// Address: 0x17c440 - 0x17caf8
void sub_0017C440_0x17c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C440_0x17c440");
#endif

    switch (ctx->pc) {
        case 0x17c4b0u: goto label_17c4b0;
        case 0x17c638u: goto label_17c638;
        case 0x17c688u: goto label_17c688;
        case 0x17c808u: goto label_17c808;
        case 0x17c8a0u: goto label_17c8a0;
        case 0x17c910u: goto label_17c910;
        case 0x17ca58u: goto label_17ca58;
        default: break;
    }

    ctx->pc = 0x17c440u;

    // 0x17c440: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17c444: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x17c444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x17c448: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17c448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x17c44c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17c44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17c450: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17c450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17c454: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17c458: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17c45c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17c460: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17c460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c464: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17c464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17c468: 0xac910018  sw          $s1, 0x18($a0)
    ctx->pc = 0x17c468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 17));
    // 0x17c46c: 0x9083001d  lbu         $v1, 0x1D($a0)
    ctx->pc = 0x17c46cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
    // 0x17c470: 0x106000fd  beqz        $v1, . + 4 + (0xFD << 2)
    ctx->pc = 0x17C470u;
    {
        const bool branch_taken_0x17c470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C470u;
        // 0x17c474: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c470) {
            ctx->pc = 0x17C868u;
            goto label_17c868;
        }
    }
    ctx->pc = 0x17C478u;
    // 0x17c478: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x17c478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17c47c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c480: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x17c480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17c484: 0x8cb3007c  lw          $s3, 0x7C($a1)
    ctx->pc = 0x17c484u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x17c488: 0x10830191  beq         $a0, $v1, . + 4 + (0x191 << 2)
    ctx->pc = 0x17C488u;
    {
        const bool branch_taken_0x17c488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C488u;
        // 0x17c48c: 0x8e540014  lw          $s4, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c488) {
            ctx->pc = 0x17CAD0u;
            goto label_17cad0;
        }
    }
    ctx->pc = 0x17C490u;
    // 0x17c490: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x17c490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x17c494: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17c494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c498: 0x968a0010  lhu         $t2, 0x10($s4)
    ctx->pc = 0x17c498u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x17c49c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17c49cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4a4: 0x2865821  addu        $t3, $s4, $a2
    ctx->pc = 0x17c4a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x17c4a8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17C4A8u;
    {
        const bool branch_taken_0x17c4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4A8u;
        // 0x17c4ac: 0x2547ffff  addiu       $a3, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4a8) {
            ctx->pc = 0x17C4F8u;
            goto label_17c4f8;
        }
    }
    ctx->pc = 0x17C4B0u;
label_17c4b0:
    // 0x17c4b0: 0x95660000  lhu         $a2, 0x0($t3)
    ctx->pc = 0x17c4b0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17c4b4: 0x8e480018  lw          $t0, 0x18($s2)
    ctx->pc = 0x17c4b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x17c4b8: 0x10c80013  beq         $a2, $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17C4B8u;
    {
        const bool branch_taken_0x17c4b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        ctx->pc = 0x17C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4B8u;
        // 0x17c4bc: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4b8) {
            ctx->pc = 0x17C508u;
            goto label_17c508;
        }
    }
    ctx->pc = 0x17C4C0u;
    // 0x17c4c0: 0xc8082b  sltu        $at, $a2, $t0
    ctx->pc = 0x17c4c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x17c4c4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x17C4C4u;
    {
        const bool branch_taken_0x17c4c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c4c4) {
            ctx->pc = 0x17C4F0u;
            goto label_17c4f0;
        }
    }
    ctx->pc = 0x17C4CCu;
    // 0x17c4cc: 0xa7082b  sltu        $at, $a1, $a3
    ctx->pc = 0x17c4ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x17c4d0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x17C4D0u;
    {
        const bool branch_taken_0x17c4d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c4d0) {
            ctx->pc = 0x17C4F0u;
            goto label_17c4f0;
        }
    }
    ctx->pc = 0x17C4D8u;
    // 0x17c4d8: 0x95660004  lhu         $a2, 0x4($t3)
    ctx->pc = 0x17c4d8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x17c4dc: 0x106082b  sltu        $at, $t0, $a2
    ctx->pc = 0x17c4dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x17c4e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C4E0u;
    {
        const bool branch_taken_0x17c4e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4E0u;
        // 0x17c4e4: 0x25690004  addiu       $t1, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4e0) {
            ctx->pc = 0x17C4F0u;
            goto label_17c4f0;
        }
    }
    ctx->pc = 0x17C4E8u;
    // 0x17c4e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C4E8u;
    {
        const bool branch_taken_0x17c4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4E8u;
        // 0x17c4ec: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4e8) {
            ctx->pc = 0x17C508u;
            goto label_17c508;
        }
    }
    ctx->pc = 0x17C4F0u;
label_17c4f0:
    // 0x17c4f0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x17c4f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x17c4f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17c4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17c4f8:
    // 0x17c4f8: 0xaa302b  sltu        $a2, $a1, $t2
    ctx->pc = 0x17c4f8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x17c4fc: 0x14c0ffec  bnez        $a2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17C4FCu;
    {
        const bool branch_taken_0x17c4fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c4fc) {
            ctx->pc = 0x17C4B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c4b0;
        }
    }
    ctx->pc = 0x17C504u;
    // 0x17c504: 0x0  nop
    ctx->pc = 0x17c504u;
    // NOP
label_17c508:
    // 0x17c508: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x17c508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x17c50c: 0x24a5d280  addiu       $a1, $a1, -0x2D80
    ctx->pc = 0x17c50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955648));
    // 0x17c510: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x17c510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17c514: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x17c514u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x40D280u));
    // 0x17c518: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x17C518u;
    {
        const bool branch_taken_0x17c518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C518u;
        // 0x17c51c: 0x7cc50000  sq          $a1, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c518) {
            ctx->pc = 0x17C5E8u;
            goto label_17c5e8;
        }
    }
    ctx->pc = 0x17C520u;
    // 0x17c520: 0x80890002  lb          $t1, 0x2($a0)
    ctx->pc = 0x17c520u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17c524: 0x3c053c00  lui         $a1, 0x3C00
    ctx->pc = 0x17c524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15360 << 16));
    // 0x17c528: 0x80880003  lb          $t0, 0x3($a0)
    ctx->pc = 0x17c528u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x17c52c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x17c52cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17c530: 0x80670002  lb          $a3, 0x2($v1)
    ctx->pc = 0x17c530u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17c534: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x17c534u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c538: 0x80660003  lb          $a2, 0x3($v1)
    ctx->pc = 0x17c538u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x17c53c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x17c53cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c540: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x17c540u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c544: 0x0  nop
    ctx->pc = 0x17c544u;
    // NOP
    // 0x17c548: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17c548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17c54c: 0x2252823  subu        $a1, $s1, $a1
    ctx->pc = 0x17c54cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x17c550: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c554: 0x46011142  mul.s       $f5, $f2, $f1
    ctx->pc = 0x17c554u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17c558: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x17c558u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17c55c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x17c55cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c560: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x17c560u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c564: 0x0  nop
    ctx->pc = 0x17c564u;
    // NOP
    // 0x17c568: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17c568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17c56c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c56cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c570: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17c570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17c574: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C574u;
    {
        const bool branch_taken_0x17c574 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x17C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C574u;
        // 0x17c578: 0x46001082  mul.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c574) {
            ctx->pc = 0x17C588u;
            goto label_17c588;
        }
    }
    ctx->pc = 0x17C57Cu;
    // 0x17c57c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17c57cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c580: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17C580u;
    {
        const bool branch_taken_0x17c580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C580u;
        // 0x17c584: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c580) {
            ctx->pc = 0x17C5A4u;
            goto label_17c5a4;
        }
    }
    ctx->pc = 0x17C588u;
label_17c588:
    // 0x17c588: 0x53042  srl         $a2, $a1, 1
    ctx->pc = 0x17c588u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x17c58c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x17c58cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x17c590: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x17c590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x17c594: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x17c594u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c598: 0x0  nop
    ctx->pc = 0x17c598u;
    // NOP
    // 0x17c59c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x17c59cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x17c5a0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x17c5a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_17c5a4:
    // 0x17c5a4: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x17c5a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c5a8: 0x46041001  sub.s       $f0, $f2, $f4
    ctx->pc = 0x17c5a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x17c5ac: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x17c5acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x17c5b0: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x17c5b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c5b4: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x17c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17c5b8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x17c5b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17c5bc: 0x0  nop
    ctx->pc = 0x17c5bcu;
    // NOP
    // 0x17c5c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17c5c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17c5c4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x17c5c4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x17c5c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17c5c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x17c5cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17c5ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17c5d0: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x17c5d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x17c5d4: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x17c5d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x17c5d8: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x17c5d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x17c5dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17C5DCu;
    {
        const bool branch_taken_0x17c5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5DCu;
        // 0x17c5e0: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c5dc) {
            ctx->pc = 0x17C620u;
            goto label_17c620;
        }
    }
    ctx->pc = 0x17C5E4u;
    // 0x17c5e4: 0x0  nop
    ctx->pc = 0x17c5e4u;
    // NOP
label_17c5e8:
    // 0x17c5e8: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x17c5e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17c5ec: 0x3c033c00  lui         $v1, 0x3C00
    ctx->pc = 0x17c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15360 << 16));
    // 0x17c5f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17c5f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c5f4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17c5f4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c5f8: 0x0  nop
    ctx->pc = 0x17c5f8u;
    // NOP
    // 0x17c5fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c5fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c600: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c604: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x17c604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x17c608: 0x80830003  lb          $v1, 0x3($a0)
    ctx->pc = 0x17c608u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x17c60c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17c60cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c610: 0x0  nop
    ctx->pc = 0x17c610u;
    // NOP
    // 0x17c614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c618: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c61c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x17c61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_17c620:
    // 0x17c620: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x17c620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
    // 0x17c624: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x17c624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17c628: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17c628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c62c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x17c62cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c630: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x17C630u;
    {
        const bool branch_taken_0x17c630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C630u;
        // 0x17c634: 0x7e430000  sq          $v1, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c630) {
            ctx->pc = 0x17C850u;
            goto label_17c850;
        }
    }
    ctx->pc = 0x17C638u;
label_17c638:
    // 0x17c638: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x17c638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17c63c: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x17c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17c640: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x17c640u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17c644: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17c644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17c648: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x17c648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17c64c: 0x946300dc  lhu         $v1, 0xDC($v1)
    ctx->pc = 0x17c64cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x17c650: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x17c650u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17c654: 0x1020011e  beqz        $at, . + 4 + (0x11E << 2)
    ctx->pc = 0x17C654u;
    {
        const bool branch_taken_0x17c654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c654) {
            ctx->pc = 0x17CAD0u;
            goto label_17cad0;
        }
    }
    ctx->pc = 0x17C65Cu;
    // 0x17c65c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x17c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x17c660: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x17c660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x17c664: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x17c664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x17c668: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17c668u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c66c: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x17c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x17c670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17c670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c674: 0x94a90018  lhu         $t1, 0x18($a1)
    ctx->pc = 0x17c674u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x17c678: 0x865021  addu        $t2, $a0, $a2
    ctx->pc = 0x17c678u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x17c67c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c680: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x17C680u;
    {
        const bool branch_taken_0x17c680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C680u;
        // 0x17c684: 0x2526ffff  addiu       $a2, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c680) {
            ctx->pc = 0x17C6D0u;
            goto label_17c6d0;
        }
    }
    ctx->pc = 0x17C688u;
label_17c688:
    // 0x17c688: 0x95440000  lhu         $a0, 0x0($t2)
    ctx->pc = 0x17c688u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17c68c: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x17c68cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x17c690: 0x10870013  beq         $a0, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x17C690u;
    {
        const bool branch_taken_0x17c690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x17C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C690u;
        // 0x17c694: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c690) {
            ctx->pc = 0x17C6E0u;
            goto label_17c6e0;
        }
    }
    ctx->pc = 0x17C698u;
    // 0x17c698: 0x87082b  sltu        $at, $a0, $a3
    ctx->pc = 0x17c698u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x17c69c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x17C69Cu;
    {
        const bool branch_taken_0x17c69c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c69c) {
            ctx->pc = 0x17C6C8u;
            goto label_17c6c8;
        }
    }
    ctx->pc = 0x17C6A4u;
    // 0x17c6a4: 0xa6082b  sltu        $at, $a1, $a2
    ctx->pc = 0x17c6a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x17c6a8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x17C6A8u;
    {
        const bool branch_taken_0x17c6a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c6a8) {
            ctx->pc = 0x17C6C8u;
            goto label_17c6c8;
        }
    }
    ctx->pc = 0x17C6B0u;
    // 0x17c6b0: 0x95440004  lhu         $a0, 0x4($t2)
    ctx->pc = 0x17c6b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x17c6b4: 0xe4082b  sltu        $at, $a3, $a0
    ctx->pc = 0x17c6b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17c6b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C6B8u;
    {
        const bool branch_taken_0x17c6b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6B8u;
        // 0x17c6bc: 0x25480004  addiu       $t0, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6b8) {
            ctx->pc = 0x17C6C8u;
            goto label_17c6c8;
        }
    }
    ctx->pc = 0x17C6C0u;
    // 0x17c6c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C6C0u;
    {
        const bool branch_taken_0x17c6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6C0u;
        // 0x17c6c4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6c0) {
            ctx->pc = 0x17C6E0u;
            goto label_17c6e0;
        }
    }
    ctx->pc = 0x17C6C8u;
label_17c6c8:
    // 0x17c6c8: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x17c6c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x17c6cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17c6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17c6d0:
    // 0x17c6d0: 0xa9202b  sltu        $a0, $a1, $t1
    ctx->pc = 0x17c6d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x17c6d4: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17C6D4u;
    {
        const bool branch_taken_0x17c6d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c6d4) {
            ctx->pc = 0x17C688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c688;
        }
    }
    ctx->pc = 0x17C6DCu;
    // 0x17c6dc: 0x0  nop
    ctx->pc = 0x17c6dcu;
    // NOP
label_17c6e0:
    // 0x17c6e0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x17C6E0u;
    {
        const bool branch_taken_0x17c6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c6e0) {
            ctx->pc = 0x17C798u;
            goto label_17c798;
        }
    }
    ctx->pc = 0x17C6E8u;
    // 0x17c6e8: 0x84660002  lh          $a2, 0x2($v1)
    ctx->pc = 0x17c6e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17c6ec: 0x3c043980  lui         $a0, 0x3980
    ctx->pc = 0x17c6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14720 << 16));
    // 0x17c6f0: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x17c6f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x17c6f4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x17c6f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c6f8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x17c6f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c6fc: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x17c6fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17c700: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17c700u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c704: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17c704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17c708: 0x2242023  subu        $a0, $s1, $a0
    ctx->pc = 0x17c708u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x17c70c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17c70cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17c710: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x17c710u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x17c714: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C714u;
    {
        const bool branch_taken_0x17c714 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x17C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C714u;
        // 0x17c718: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c714) {
            ctx->pc = 0x17C728u;
            goto label_17c728;
        }
    }
    ctx->pc = 0x17C71Cu;
    // 0x17c71c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17c71cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c720: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17C720u;
    {
        const bool branch_taken_0x17c720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C720u;
        // 0x17c724: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c720) {
            ctx->pc = 0x17C744u;
            goto label_17c744;
        }
    }
    ctx->pc = 0x17C728u;
label_17c728:
    // 0x17c728: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x17c728u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x17c72c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x17c72cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x17c730: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x17c730u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x17c734: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17c734u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c738: 0x0  nop
    ctx->pc = 0x17c738u;
    // NOP
    // 0x17c73c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x17c73cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17c740: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x17c740u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_17c744:
    // 0x17c744: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x17c744u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c748: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x17c748u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x17c74c: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x17c74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17c750: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x17c750u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17c754: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x17c754u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c758: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x17c758u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17c75c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17c75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c760: 0x0  nop
    ctx->pc = 0x17c760u;
    // NOP
    // 0x17c764: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17c764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17c768: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x17c768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17c76c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17c770: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17c770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c774: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x17c774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17c778: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x17c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x17c77c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x17c77cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x17c780: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17c784: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c788: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x17c788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x17c78c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17C78Cu;
    {
        const bool branch_taken_0x17c78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C78Cu;
        // 0x17c790: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c78c) {
            ctx->pc = 0x17C7D8u;
            goto label_17c7d8;
        }
    }
    ctx->pc = 0x17C794u;
    // 0x17c794: 0x0  nop
    ctx->pc = 0x17c794u;
    // NOP
label_17c798:
    // 0x17c798: 0x84660002  lh          $a2, 0x2($v1)
    ctx->pc = 0x17c798u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x17c79c: 0x3c023980  lui         $v0, 0x3980
    ctx->pc = 0x17c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14720 << 16));
    // 0x17c7a0: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x17c7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17c7a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c7a8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x17c7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17c7ac: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x17c7acu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c7b0: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x17c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17c7b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17c7b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17c7b8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17c7bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c7c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x17c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17c7c4: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x17c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x17c7c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17c7c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17c7cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17c7d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x17c7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17c7d4: 0x0  nop
    ctx->pc = 0x17c7d4u;
    // NOP
label_17c7d8:
    // 0x17c7d8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x17c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17c7dc: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x17c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x17c7e0: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x17c7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x17c7e4: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x17c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17c7e8: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x17c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17c7ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c7f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c7f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x17c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17c7f8: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x17c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x17c7fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17c800: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x17C800u;
    SET_GPR_U32(ctx, 31, 0x17C808u);
    ctx->pc = 0x17C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C800u;
    // 0x17c804: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x17C800u, 0x17C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C808u;
label_17c808:
    // 0x17c808: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x17c808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x17c80c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x17c80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x17c810: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17c810u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c814: 0x0  nop
    ctx->pc = 0x17c814u;
    // NOP
    // 0x17c818: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17c818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c81c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x17C81Cu;
    {
        const bool branch_taken_0x17c81c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c81c) {
            ctx->pc = 0x17C848u;
            goto label_17c848;
        }
    }
    ctx->pc = 0x17C824u;
    // 0x17c824: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x17c824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17c828: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x17c828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17c82c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x17c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17c830: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x17c830u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17c834: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17c834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17c838: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x17c838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17c83c: 0x8c6300e4  lw          $v1, 0xE4($v1)
    ctx->pc = 0x17c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x17c840: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17c840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17c844: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17c844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_17c848:
    // 0x17c848: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17c848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17c84c: 0x0  nop
    ctx->pc = 0x17c84cu;
    // NOP
label_17c850:
    // 0x17c850: 0x92830004  lbu         $v1, 0x4($s4)
    ctx->pc = 0x17c850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17c854: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x17c854u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17c858: 0x1460ff77  bnez        $v1, . + 4 + (-0x89 << 2)
    ctx->pc = 0x17C858u;
    {
        const bool branch_taken_0x17c858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c858) {
            ctx->pc = 0x17C638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c638;
        }
    }
    ctx->pc = 0x17C860u;
    // 0x17c860: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x17C860u;
    {
        const bool branch_taken_0x17c860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c860) {
            ctx->pc = 0x17CAD0u;
            goto label_17cad0;
        }
    }
    ctx->pc = 0x17C868u;
label_17c868:
    // 0x17c868: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x17c868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17c86c: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x17c86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x17c870: 0x9244001c  lbu         $a0, 0x1C($s2)
    ctx->pc = 0x17c870u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x17c874: 0x8c75007c  lw          $s5, 0x7C($v1)
    ctx->pc = 0x17c874u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x17c878: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x17c878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x17c87c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x17c87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x17c880: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17c880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17c884: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x17c884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17c888: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17c888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17c88c: 0xc3a021  addu        $s4, $a2, $v1
    ctx->pc = 0x17c88cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17c890: 0x92930001  lbu         $s3, 0x1($s4)
    ctx->pc = 0x17c890u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x17c894: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x17C894u;
    {
        const bool branch_taken_0x17c894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C894u;
        // 0x17c898: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c894) {
            ctx->pc = 0x17CAC0u;
            goto label_17cac0;
        }
    }
    ctx->pc = 0x17C89Cu;
    // 0x17c89c: 0x0  nop
    ctx->pc = 0x17c89cu;
    // NOP
label_17c8a0:
    // 0x17c8a0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x17c8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x17c8a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17c8a8: 0x16630003  bne         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C8A8u;
    {
        const bool branch_taken_0x17c8a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x17C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8A8u;
        // 0x17c8ac: 0x2842821  addu        $a1, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8a8) {
            ctx->pc = 0x17C8B8u;
            goto label_17c8b8;
        }
    }
    ctx->pc = 0x17C8B0u;
    // 0x17c8b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17C8B0u;
    {
        const bool branch_taken_0x17c8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C8B0u;
        // 0x17c8b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c8b0) {
            ctx->pc = 0x17C8C0u;
            goto label_17c8c0;
        }
    }
    ctx->pc = 0x17C8B8u;
label_17c8b8:
    // 0x17c8b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8bc: 0x0  nop
    ctx->pc = 0x17c8bcu;
    // NOP
label_17c8c0:
    // 0x17c8c0: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x17c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17c8c4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x17c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17c8c8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17c8cc: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x17c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x17c8d0: 0x946300dc  lhu         $v1, 0xDC($v1)
    ctx->pc = 0x17c8d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x17c8d4: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x17c8d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17c8d8: 0x1020007d  beqz        $at, . + 4 + (0x7D << 2)
    ctx->pc = 0x17C8D8u;
    {
        const bool branch_taken_0x17c8d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c8d8) {
            ctx->pc = 0x17CAD0u;
            goto label_17cad0;
        }
    }
    ctx->pc = 0x17C8E0u;
    // 0x17c8e0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x17c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x17c8e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17c8e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8e8: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x17c8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17c8ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17c8ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c8f0: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x17c8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x17c8f4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x17c8f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17c8f8: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x17c8f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x17c8fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17c8fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c904: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x17C904u;
    {
        const bool branch_taken_0x17c904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C904u;
        // 0x17c908: 0xe45021  addu        $t2, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c904) {
            ctx->pc = 0x17C970u;
            goto label_17c970;
        }
    }
    ctx->pc = 0x17C90Cu;
    // 0x17c90c: 0x0  nop
    ctx->pc = 0x17c90cu;
    // NOP
label_17c910:
    // 0x17c910: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17c910u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17c914: 0x1443821  addu        $a3, $t2, $a0
    ctx->pc = 0x17c914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x17c918: 0x8e480018  lw          $t0, 0x18($s2)
    ctx->pc = 0x17c918u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x17c91c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x17c91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17c920: 0x15040005  bne         $t0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C920u;
    {
        const bool branch_taken_0x17c920 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x17c920) {
            ctx->pc = 0x17C938u;
            goto label_17c938;
        }
    }
    ctx->pc = 0x17C928u;
    // 0x17c928: 0xc4f40004  lwc1        $f20, 0x4($a3)
    ctx->pc = 0x17c928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17c92c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17C92Cu;
    {
        const bool branch_taken_0x17c92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C92Cu;
        // 0x17c930: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c92c) {
            ctx->pc = 0x17C980u;
            goto label_17c980;
        }
    }
    ctx->pc = 0x17C934u;
    // 0x17c934: 0x0  nop
    ctx->pc = 0x17c934u;
    // NOP
label_17c938:
    // 0x17c938: 0x104082b  sltu        $at, $t0, $a0
    ctx->pc = 0x17c938u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17c93c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C93Cu;
    {
        const bool branch_taken_0x17c93c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c93c) {
            ctx->pc = 0x17C948u;
            goto label_17c948;
        }
    }
    ctx->pc = 0x17C944u;
    // 0x17c944: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x17c944u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17c948:
    // 0x17c948: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17c948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17c94c: 0x1443821  addu        $a3, $t2, $a0
    ctx->pc = 0x17c94cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x17c950: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x17c950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17c954: 0x224082b  sltu        $at, $s1, $a0
    ctx->pc = 0x17c954u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17c958: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C958u;
    {
        const bool branch_taken_0x17c958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c958) {
            ctx->pc = 0x17C968u;
            goto label_17c968;
        }
    }
    ctx->pc = 0x17C960u;
    // 0x17c960: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C960u;
    {
        const bool branch_taken_0x17c960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C960u;
        // 0x17c964: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c960) {
            ctx->pc = 0x17C980u;
            goto label_17c980;
        }
    }
    ctx->pc = 0x17C968u;
label_17c968:
    // 0x17c968: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17c968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17c96c: 0x0  nop
    ctx->pc = 0x17c96cu;
    // NOP
label_17c970:
    // 0x17c970: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x17c970u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x17c974: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17C974u;
    {
        const bool branch_taken_0x17c974 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c974) {
            ctx->pc = 0x17C910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c910;
        }
    }
    ctx->pc = 0x17C97Cu;
    // 0x17c97c: 0x0  nop
    ctx->pc = 0x17c97cu;
    // NOP
label_17c980:
    // 0x17c980: 0x15200033  bnez        $t1, . + 4 + (0x33 << 2)
    ctx->pc = 0x17C980u;
    {
        const bool branch_taken_0x17c980 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c980) {
            ctx->pc = 0x17CA50u;
            goto label_17ca50;
        }
    }
    ctx->pc = 0x17C988u;
    // 0x17c988: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x17C988u;
    {
        const bool branch_taken_0x17c988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c988) {
            ctx->pc = 0x17CA38u;
            goto label_17ca38;
        }
    }
    ctx->pc = 0x17C990u;
    // 0x17c990: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x17C990u;
    {
        const bool branch_taken_0x17c990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c990) {
            ctx->pc = 0x17CA38u;
            goto label_17ca38;
        }
    }
    ctx->pc = 0x17C998u;
    // 0x17c998: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x17c998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x17c99c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c9a0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x17c9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17c9a4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C9A4u;
    {
        const bool branch_taken_0x17c9a4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x17C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9A4u;
        // 0x17c9a8: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9a4) {
            ctx->pc = 0x17C9BCu;
            goto label_17c9bc;
        }
    }
    ctx->pc = 0x17C9ACu;
    // 0x17c9ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17c9acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c9b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17C9B0u;
    {
        const bool branch_taken_0x17c9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9B0u;
        // 0x17c9b4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9b0) {
            ctx->pc = 0x17C9D4u;
            goto label_17c9d4;
        }
    }
    ctx->pc = 0x17C9B8u;
    // 0x17c9b8: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x17c9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_17c9bc:
    // 0x17c9bc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x17c9bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x17c9c0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x17c9c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x17c9c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17c9c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c9c8: 0x0  nop
    ctx->pc = 0x17c9c8u;
    // NOP
    // 0x17c9cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17c9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17c9d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17c9d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17c9d4:
    // 0x17c9d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17c9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c9d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c9dc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x17c9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17c9e0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17C9E0u;
    {
        const bool branch_taken_0x17c9e0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x17C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9E0u;
        // 0x17c9e4: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9e0) {
            ctx->pc = 0x17C9F8u;
            goto label_17c9f8;
        }
    }
    ctx->pc = 0x17C9E8u;
    // 0x17c9e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17c9e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c9ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17C9ECu;
    {
        const bool branch_taken_0x17c9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C9ECu;
        // 0x17c9f0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c9ec) {
            ctx->pc = 0x17CA10u;
            goto label_17ca10;
        }
    }
    ctx->pc = 0x17C9F4u;
    // 0x17c9f4: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x17c9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_17c9f8:
    // 0x17c9f8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x17c9f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x17c9fc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x17c9fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x17ca00: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17ca00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ca04: 0x0  nop
    ctx->pc = 0x17ca04u;
    // NOP
    // 0x17ca08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17ca08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17ca0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17ca0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17ca10:
    // 0x17ca10: 0x0  nop
    ctx->pc = 0x17ca10u;
    // NOP
    // 0x17ca14: 0x0  nop
    ctx->pc = 0x17ca14u;
    // NOP
    // 0x17ca18: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x17ca18u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17ca1c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x17ca1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ca20: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x17ca20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ca24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17ca24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17ca28: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x17ca28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17ca2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17CA2Cu;
    {
        const bool branch_taken_0x17ca2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA2Cu;
        // 0x17ca30: 0x46000d00  add.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca2c) {
            ctx->pc = 0x17CA50u;
            goto label_17ca50;
        }
    }
    ctx->pc = 0x17CA34u;
    // 0x17ca34: 0x0  nop
    ctx->pc = 0x17ca34u;
    // NOP
label_17ca38:
    // 0x17ca38: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CA38u;
    {
        const bool branch_taken_0x17ca38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ca38) {
            ctx->pc = 0x17CA48u;
            goto label_17ca48;
        }
    }
    ctx->pc = 0x17CA40u;
    // 0x17ca40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17CA40u;
    {
        const bool branch_taken_0x17ca40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA40u;
        // 0x17ca44: 0xc4740004  lwc1        $f20, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca40) {
            ctx->pc = 0x17CA50u;
            goto label_17ca50;
        }
    }
    ctx->pc = 0x17CA48u;
label_17ca48:
    // 0x17ca48: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x17ca48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17ca4c: 0x0  nop
    ctx->pc = 0x17ca4cu;
    // NOP
label_17ca50:
    // 0x17ca50: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x17CA50u;
    SET_GPR_U32(ctx, 31, 0x17CA58u);
    ctx->pc = 0x17CA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CA50u;
    // 0x17ca54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x17CA50u, 0x17CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA58u;
label_17ca58:
    // 0x17ca58: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x17ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x17ca5c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x17ca5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x17ca60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17ca60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17ca64: 0x0  nop
    ctx->pc = 0x17ca64u;
    // NOP
    // 0x17ca68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17ca68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ca6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x17CA6Cu;
    {
        const bool branch_taken_0x17ca6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ca6c) {
            ctx->pc = 0x17CA78u;
            goto label_17ca78;
        }
    }
    ctx->pc = 0x17CA74u;
    // 0x17ca74: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x17ca74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_17ca78:
    // 0x17ca78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ca7c: 0x16630004  bne         $s3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CA7Cu;
    {
        const bool branch_taken_0x17ca7c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x17ca7c) {
            ctx->pc = 0x17CA90u;
            goto label_17ca90;
        }
    }
    ctx->pc = 0x17CA84u;
    // 0x17ca84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17CA84u;
    {
        const bool branch_taken_0x17ca84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA84u;
        // 0x17ca88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca84) {
            ctx->pc = 0x17CA98u;
            goto label_17ca98;
        }
    }
    ctx->pc = 0x17CA8Cu;
    // 0x17ca8c: 0x0  nop
    ctx->pc = 0x17ca8cu;
    // NOP
label_17ca90:
    // 0x17ca90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17ca90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca94: 0x0  nop
    ctx->pc = 0x17ca94u;
    // NOP
label_17ca98:
    // 0x17ca98: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x17ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17ca9c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x17ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17caa0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17caa4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x17caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17caa8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x17caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x17caac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17caacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17cab0: 0x8c6300e4  lw          $v1, 0xE4($v1)
    ctx->pc = 0x17cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x17cab4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17cab8: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x17cab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x17cabc: 0x0  nop
    ctx->pc = 0x17cabcu;
    // NOP
label_17cac0:
    // 0x17cac0: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x17cac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x17cac4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x17cac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17cac8: 0x1460ff75  bnez        $v1, . + 4 + (-0x8B << 2)
    ctx->pc = 0x17CAC8u;
    {
        const bool branch_taken_0x17cac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cac8) {
            ctx->pc = 0x17C8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c8a0;
        }
    }
    ctx->pc = 0x17CAD0u;
label_17cad0:
    // 0x17cad0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x17cad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17cad4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17cad4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17cad8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17cad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17cadc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17cadcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17cae0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17cae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cae4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17cae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cae8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17cae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17caec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17caecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17caf0: 0x3e00008  jr          $ra
    ctx->pc = 0x17CAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CAF0u;
        // 0x17caf4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CAF8u;
}
