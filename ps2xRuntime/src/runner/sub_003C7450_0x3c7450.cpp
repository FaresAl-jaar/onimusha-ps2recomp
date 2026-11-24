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

// Function: sub_003C7450
// Address: 0x3c7450 - 0x3c77c0
void sub_003C7450_0x3c7450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7450_0x3c7450");
#endif

    switch (ctx->pc) {
        case 0x3c7490u: goto label_3c7490;
        case 0x3c74c8u: goto label_3c74c8;
        case 0x3c75c8u: goto label_3c75c8;
        case 0x3c75e0u: goto label_3c75e0;
        case 0x3c7608u: goto label_3c7608;
        case 0x3c7638u: goto label_3c7638;
        case 0x3c7670u: goto label_3c7670;
        case 0x3c7798u: goto label_3c7798;
        case 0x3c77a0u: goto label_3c77a0;
        default: break;
    }

    ctx->pc = 0x3c7450u;

    // 0x3c7450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c7450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c7454: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x3c7454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x3c7458: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c7458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3c745c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c7460: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c7460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c7464: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c7464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7468: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c7468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c746c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3c746cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3c7470: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c7470u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c7474: 0xac820578  sw          $v0, 0x578($a0)
    ctx->pc = 0x3c7474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1400), GPR_U32(ctx, 2));
    // 0x3c7478: 0x8c820568  lw          $v0, 0x568($a0)
    ctx->pc = 0x3c7478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1384)));
    // 0x3c747c: 0x8e450574  lw          $a1, 0x574($s2)
    ctx->pc = 0x3c747cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x3c7480: 0x8c840578  lw          $a0, 0x578($a0)
    ctx->pc = 0x3c7480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1400)));
    // 0x3c7484: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3c7484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3c7488: 0xc0526e0  jal         func_149B80
    ctx->pc = 0x3C7488u;
    SET_GPR_U32(ctx, 31, 0x3C7490u);
    ctx->pc = 0x3C748Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7488u;
    // 0x3c748c: 0x23102  srl         $a2, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B80u, 0x3C7488u, 0x3C7490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7490u;
label_3c7490:
    // 0x3c7490: 0x8e420578  lw          $v0, 0x578($s2)
    ctx->pc = 0x3c7490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1400)));
    // 0x3c7494: 0x26430540  addiu       $v1, $s2, 0x540
    ctx->pc = 0x3c7494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1344));
    // 0x3c7498: 0x24510f00  addiu       $s1, $v0, 0xF00
    ctx->pc = 0x3c7498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3840));
    // 0x3c749c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x3c749cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c74a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c74a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c74a4: 0x26420520  addiu       $v0, $s2, 0x520
    ctx->pc = 0x3c74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1312));
    // 0x3c74a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c74a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c74ac: 0x7e250000  sq          $a1, 0x0($s1)
    ctx->pc = 0x3c74acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 5));
    // 0x3c74b0: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x3c74b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3c74b4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c74b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c74b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3c74b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3c74bc: 0x8e420578  lw          $v0, 0x578($s2)
    ctx->pc = 0x3c74bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1400)));
    // 0x3c74c0: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x3C74C0u;
    SET_GPR_U32(ctx, 31, 0x3C74C8u);
    ctx->pc = 0x3C74C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C74C0u;
    // 0x3c74c4: 0x24450ec0  addiu       $a1, $v0, 0xEC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x3C74C0u, 0x3C74C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C74C8u;
label_3c74c8:
    // 0x3c74c8: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x3c74c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x3c74cc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3c74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x3c74d0: 0x8e440578  lw          $a0, 0x578($s2)
    ctx->pc = 0x3c74d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1400)));
    // 0x3c74d4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3c74d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3c74d8: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x3c74d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c74dc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3c74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3c74e0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3c74e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3c74e4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3c74e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3c74e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3c74e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c74ec: 0xc4850ecc  lwc1        $f5, 0xECC($a0)
    ctx->pc = 0x3c74ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c74f0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c74f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c74f4: 0x0  nop
    ctx->pc = 0x3c74f4u;
    // NOP
    // 0x3c74f8: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x3c74f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x3c74fc: 0xe623000c  swc1        $f3, 0xC($s1)
    ctx->pc = 0x3c74fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x3c7500: 0x8e420578  lw          $v0, 0x578($s2)
    ctx->pc = 0x3c7500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1400)));
    // 0x3c7504: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x3c7504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7508: 0xc4450edc  lwc1        $f5, 0xEDC($v0)
    ctx->pc = 0x3c7508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c750c: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x3c750cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x3c7510: 0xe623001c  swc1        $f3, 0x1C($s1)
    ctx->pc = 0x3c7510u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x3c7514: 0xc6430570  lwc1        $f3, 0x570($s2)
    ctx->pc = 0x3c7514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7518: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3c7518u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3c751c: 0xe6430570  swc1        $f3, 0x570($s2)
    ctx->pc = 0x3c751cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1392), bits); }
    // 0x3c7520: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x3c7520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7524: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x3c7524u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3c7528: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3c7528u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3c752c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x3c752cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c7530: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3C7530u;
    {
        const bool branch_taken_0x3c7530 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c7530) {
            ctx->pc = 0x3C7548u;
            goto label_3c7548;
        }
    }
    ctx->pc = 0x3C7538u;
    // 0x3c7538: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7538u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3c753c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x3c753cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c7540: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C7540u;
    {
        const bool branch_taken_0x3c7540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7540u;
        // 0x3c7544: 0x3c02442f  lui         $v0, 0x442F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7540) {
            ctx->pc = 0x3C7564u;
            goto label_3c7564;
        }
    }
    ctx->pc = 0x3C7548u;
label_3c7548:
    // 0x3c7548: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3c7548u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3c754c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3c754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3c7550: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3c7554: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x3c7554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3c7558: 0x0  nop
    ctx->pc = 0x3c7558u;
    // NOP
    // 0x3c755c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3c755cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3c7560: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3c7560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
label_3c7564:
    // 0x3c7564: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c7564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3c7568: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C7568u;
    {
        const bool branch_taken_0x3c7568 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3C756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7568u;
        // 0x3c756c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7568) {
            ctx->pc = 0x3C757Cu;
            goto label_3c757c;
        }
    }
    ctx->pc = 0x3C7570u;
    // 0x3c7570: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3c7570u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c7574: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C7574u;
    {
        const bool branch_taken_0x3c7574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7574u;
        // 0x3c7578: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7574) {
            ctx->pc = 0x3C7594u;
            goto label_3c7594;
        }
    }
    ctx->pc = 0x3C757Cu;
label_3c757c:
    // 0x3c757c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3c757cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3c7580: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3c7580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c7584: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c7584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c7588: 0x0  nop
    ctx->pc = 0x3c7588u;
    // NOP
    // 0x3c758c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3c758cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3c7590: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3c7590u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3c7594:
    // 0x3c7594: 0x0  nop
    ctx->pc = 0x3c7594u;
    // NOP
    // 0x3c7598: 0x0  nop
    ctx->pc = 0x3c7598u;
    // NOP
    // 0x3c759c: 0x46011543  div.s       $f21, $f2, $f1
    ctx->pc = 0x3c759cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3c75a0: 0xc6420570  lwc1        $f2, 0x570($s2)
    ctx->pc = 0x3c75a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c75a4: 0xc641056c  lwc1        $f1, 0x56C($s2)
    ctx->pc = 0x3c75a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c75a8: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x3c75a8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x3c75ac: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3c75acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3c75b0: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x3c75b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c75b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3C75B4u;
    {
        const bool branch_taken_0x3c75b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c75b4) {
            ctx->pc = 0x3C75C8u;
            goto label_3c75c8;
        }
    }
    ctx->pc = 0x3C75BCu;
    // 0x3c75bc: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x3c75bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
    // 0x3c75c0: 0xc0f1af4  jal         func_3C6BD0
    ctx->pc = 0x3C75C0u;
    SET_GPR_U32(ctx, 31, 0x3C75C8u);
    ctx->pc = 0x3C75C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C75C0u;
    // 0x3c75c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6BD0u, 0x3C75C0u, 0x3C75C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C75C8u;
label_3c75c8:
    // 0x3c75c8: 0x8e420568  lw          $v0, 0x568($s2)
    ctx->pc = 0x3c75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x3c75cc: 0xc634000c  lwc1        $f20, 0xC($s1)
    ctx->pc = 0x3c75ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c75d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3c75d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c75d4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3C75D4u;
    {
        const bool branch_taken_0x3c75d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C75D4u;
        // 0x3c75d8: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c75d4) {
            ctx->pc = 0x3C7788u;
            goto label_3c7788;
        }
    }
    ctx->pc = 0x3C75DCu;
    // 0x3c75dc: 0x0  nop
    ctx->pc = 0x3c75dcu;
    // NOP
label_3c75e0:
    // 0x3c75e0: 0x8e420574  lw          $v0, 0x574($s2)
    ctx->pc = 0x3c75e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x3c75e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c75e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c75e8: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3c75e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c75ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3c75ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c75f0: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x3C75F0u;
    {
        const bool branch_taken_0x3c75f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C75F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C75F0u;
        // 0x3c75f4: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c75f0) {
            ctx->pc = 0x3C7678u;
            goto label_3c7678;
        }
    }
    ctx->pc = 0x3C75F8u;
    // 0x3c75f8: 0x8e420568  lw          $v0, 0x568($s2)
    ctx->pc = 0x3c75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x3c75fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c75fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7600: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3C7600u;
    {
        const bool branch_taken_0x3c7600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7600u;
        // 0x3c7604: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7600) {
            ctx->pc = 0x3C7648u;
            goto label_3c7648;
        }
    }
    ctx->pc = 0x3C7608u;
label_3c7608:
    // 0x3c7608: 0x8e450578  lw          $a1, 0x578($s2)
    ctx->pc = 0x3c7608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1400)));
    // 0x3c760c: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x3c760cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x3c7610: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3c7610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3c7614: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3c7614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7618: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3c7618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c761c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3C761Cu;
    {
        const bool branch_taken_0x3c761c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c761c) {
            ctx->pc = 0x3C7640u;
            goto label_3c7640;
        }
    }
    ctx->pc = 0x3C7624u;
    // 0x3c7624: 0x8e420568  lw          $v0, 0x568($s2)
    ctx->pc = 0x3c7624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x3c7628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c7628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c762c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c762cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3c7630: 0xc0f1bd8  jal         func_3C6F60
    ctx->pc = 0x3C7630u;
    SET_GPR_U32(ctx, 31, 0x3C7638u);
    ctx->pc = 0x3C7634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7630u;
    // 0x3c7634: 0x24470001  addiu       $a3, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6F60u, 0x3C7630u, 0x3C7638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7638u;
label_3c7638:
    // 0x3c7638: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C7638u;
    {
        const bool branch_taken_0x3c7638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7638) {
            ctx->pc = 0x3C7658u;
            goto label_3c7658;
        }
    }
    ctx->pc = 0x3C7640u;
label_3c7640:
    // 0x3c7640: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3c7640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3c7644: 0x0  nop
    ctx->pc = 0x3c7644u;
    // NOP
label_3c7648:
    // 0x3c7648: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x3c7648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c764c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3C764Cu;
    {
        const bool branch_taken_0x3c764c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c764c) {
            ctx->pc = 0x3C7608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7608;
        }
    }
    ctx->pc = 0x3C7654u;
    // 0x3c7654: 0x0  nop
    ctx->pc = 0x3c7654u;
    // NOP
label_3c7658:
    // 0x3c7658: 0x8e420574  lw          $v0, 0x574($s2)
    ctx->pc = 0x3c7658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x3c765c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x3c765cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x3c7660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c7660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c7664: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3c7664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3c7668: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3C7668u;
    SET_GPR_U32(ctx, 31, 0x3C7670u);
    ctx->pc = 0x3C766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7668u;
    // 0x3c766c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3C7668u, 0x3C7670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7670u;
label_3c7670:
    // 0x3c7670: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3C7670u;
    {
        const bool branch_taken_0x3c7670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7670) {
            ctx->pc = 0x3C7710u;
            goto label_3c7710;
        }
    }
    ctx->pc = 0x3C7678u;
label_3c7678:
    // 0x3c7678: 0x8e420568  lw          $v0, 0x568($s2)
    ctx->pc = 0x3c7678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x3c767c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c7680: 0x16020013  bne         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C7680u;
    {
        const bool branch_taken_0x3c7680 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c7680) {
            ctx->pc = 0x3C76D0u;
            goto label_3c76d0;
        }
    }
    ctx->pc = 0x3C7688u;
    // 0x3c7688: 0x8e430568  lw          $v1, 0x568($s2)
    ctx->pc = 0x3c7688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x3c768c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c768cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7690: 0x8e420578  lw          $v0, 0x578($s2)
    ctx->pc = 0x3c7690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1400)));
    // 0x3c7694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c7694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7698: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x3c7698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3c769c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3c769cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3c76a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c76a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c76a4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c76a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c76a8: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3c76a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3c76ac: 0x8e430568  lw          $v1, 0x568($s2)
    ctx->pc = 0x3c76acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1384)));
    // 0x3c76b0: 0x8e420578  lw          $v0, 0x578($s2)
    ctx->pc = 0x3c76b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1400)));
    // 0x3c76b4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3c76b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3c76b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c76b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c76bc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3c76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3c76c0: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x3c76c0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c76c4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3C76C4u;
    {
        const bool branch_taken_0x3c76c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C76C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C76C4u;
        // 0x3c76c8: 0x7c850000  sq          $a1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c76c4) {
            ctx->pc = 0x3C7710u;
            goto label_3c7710;
        }
    }
    ctx->pc = 0x3C76CCu;
    // 0x3c76cc: 0x0  nop
    ctx->pc = 0x3c76ccu;
    // NOP
label_3c76d0:
    // 0x3c76d0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x3c76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c76d4: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x3c76d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3c76d8: 0x8e440574  lw          $a0, 0x574($s2)
    ctx->pc = 0x3c76d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x3c76dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c76dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c76e0: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x3c76e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3c76e4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x3c76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c76e8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3c76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3c76ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c76ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c76f0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x3c76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3c76f4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c76f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c76f8: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3c76f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x3c76fc: 0x8e420574  lw          $v0, 0x574($s2)
    ctx->pc = 0x3c76fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1396)));
    // 0x3c7700: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c7700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c7704: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3c7704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3c7708: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3c7708u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c770c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3c770cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_3c7710:
    // 0x3c7710: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3c7710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3c7714: 0x0  nop
    ctx->pc = 0x3c7714u;
    // NOP
    // 0x3c7718: 0x4603a836  c.le.s      $f21, $f3
    ctx->pc = 0x3c7718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c771c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x3C771Cu;
    {
        const bool branch_taken_0x3c771c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c771c) {
            ctx->pc = 0x3C7760u;
            goto label_3c7760;
        }
    }
    ctx->pc = 0x3C7724u;
    // 0x3c7724: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x3c7724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7728: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x3c7728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c772c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3c772cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c7730: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x3C7730u;
    {
        const bool branch_taken_0x3c7730 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7730u;
        // 0x3c7734: 0x46151001  sub.s       $f0, $f2, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7730) {
            ctx->pc = 0x3C7760u;
            goto label_3c7760;
        }
    }
    ctx->pc = 0x3C7738u;
    // 0x3c7738: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3c7738u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c773c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3C773Cu;
    {
        const bool branch_taken_0x3c773c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c773c) {
            ctx->pc = 0x3C7750u;
            goto label_3c7750;
        }
    }
    ctx->pc = 0x3C7744u;
    // 0x3c7744: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x3c7744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x3c7748: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C7748u;
    {
        const bool branch_taken_0x3c7748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7748u;
        // 0x3c774c: 0x46001d46  mov.s       $f21, $f3 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7748) {
            ctx->pc = 0x3C7760u;
            goto label_3c7760;
        }
    }
    ctx->pc = 0x3C7750u;
label_3c7750:
    // 0x3c7750: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x3c7750u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3c7754: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x3c7754u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x3c7758: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x3c7758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x3c775c: 0x0  nop
    ctx->pc = 0x3c775cu;
    // NOP
label_3c7760:
    // 0x3c7760: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3c7760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3c7764: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3c7764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7768: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x3c7768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x3c776c: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x3c776cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x3c7770: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x3c7770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7774: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x3c7774u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x3c7778: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x3c7778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x3c777c: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x3c777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7780: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x3c7780u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x3c7784: 0x0  nop
    ctx->pc = 0x3c7784u;
    // NOP
label_3c7788:
    // 0x3c7788: 0x601ff95  bgez        $s0, . + 4 + (-0x6B << 2)
    ctx->pc = 0x3C7788u;
    {
        const bool branch_taken_0x3c7788 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3C778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7788u;
        // 0x3c778c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7788) {
            ctx->pc = 0x3C75E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c75e0;
        }
    }
    ctx->pc = 0x3C7790u;
    // 0x3c7790: 0xc0f1b48  jal         func_3C6D20
    ctx->pc = 0x3C7790u;
    SET_GPR_U32(ctx, 31, 0x3C7798u);
    ctx->pc = 0x3C7794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7790u;
    // 0x3c7794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6D20u, 0x3C7790u, 0x3C7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7798u;
label_3c7798:
    // 0x3c7798: 0xc0f1b18  jal         func_3C6C60
    ctx->pc = 0x3C7798u;
    SET_GPR_U32(ctx, 31, 0x3C77A0u);
    ctx->pc = 0x3C779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7798u;
    // 0x3c779c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6C60u, 0x3C7798u, 0x3C77A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C77A0u;
label_3c77a0:
    // 0x3c77a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c77a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c77a4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3c77a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3c77a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c77a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c77ac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c77acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c77b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c77b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c77b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c77b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c77b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C77B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C77B8u;
        // 0x3c77bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C77B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C77C0u;
}
